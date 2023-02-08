package main

import (
	"fmt"
	"os"
)

func calAge(birthYear int) int {
	return 2023 - birthYear
}

func main() {
	myAge := calAge(2000)
	//myAge := calAge(os.Args)

	fmt.Println("Chao ", os.Args[1], myAge, " tuoi")
}

// command-line arguments name and age in Golang
