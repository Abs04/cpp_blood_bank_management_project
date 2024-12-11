# Blood Bank Management System

## Project Overview
A comprehensive C++ console application for managing blood bank operations, developed by Team Flipflop. Author: ABS
Main purpose of creating this project is to apply the core concepts of OOP using C++. 

## Project Features
- Admin panel with secure password protection
- Donor information management
- Patient blood request tracking
- Blood inventory management
- Support for multiple blood groups (A+, O+, B+, AB+, A-, O-, B-, AB-)

## Technical Specifications
- **Language**: C++
- **Programming Paradigm**: Object-Oriented Programming (OOP)
- **Compilation**: Console Application

## Key Classes
- `blood_bank`: Base class for blood bank operations
- `admin`: Handles administrative access and blood stock display
- `patient`: Manages patient blood requests
- `donor`: Handles donor information and blood donation

## Blood Group Management
The system supports 8 blood groups with inventory tracking:
- A+
- O+
- B+
- AB+
- A-
- O-
- B-
- AB-

## Functionality
1. Admin Panel
   - Password-protected access
   - View current blood stock
   - Manage blood inventory

2. Donor Module
   - Add donor information
   - Record blood donations
   - Increase blood stock for specific groups

3. Patient Module
   - Request blood
   - Check blood availability
   - Request specific blood groups

## How to Compile
1. Ensure you have a C++ compiler (g++, MinGW)
2. Compile the source file:
   ```bash
   g++ blood_bank_management.cpp -o blood_bank