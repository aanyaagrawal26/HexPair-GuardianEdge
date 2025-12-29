# HexPair GuardianEdge

## Track
AIoT (AI + Internet of Things)

## Problem Statement
Urban indoor environments such as homes, schools, and daycare centers lack real-time, privacy-preserving systems to detect child distress and ensure safety. Existing solutions are cloud-dependent, intrusive, and ineffective indoors.

## Solution Overview
HexPair GuardianEdge is an edge-based AIoT system that uses TinyML on ESP32 to detect child distress (cry, panic, abnormal behavior) and perform indoor localization without GPS. The system operates locally, ensuring low latency, privacy, and real-time alerts.

## Key Features
- TinyML-based cry and stress detection
- Indoor localization using mesh-based zones
- Edge-first processing (no cloud dependency)
- Real-time caregiver alerts
- Privacy-first design (no raw audio stored)

## System Architecture
Sensors (Audio + Motion) → ESP32 (TinyML Model) → Edge Decision Engine → Alert System (App / Buzzer / LED)

## Technologies Used
- ESP32
- TinyML (Edge Impulse – conceptual)
- PIR Motion Sensor
- Microphone Sensor
- Wokwi Simulation Platform

## Wokwi Simulation (AIoT)
This project includes an ESP32-based Wokwi simulation demonstrating
edge-level alert logic for the GuardianEdge system.

🔗 Wokwi Project Link: https://wokwi.com/projects/451683326205361153


## Team
Team Name: HexPair  
Hackathon: AI-Verse
