# 🧗 Wall-Climbing Robot (PoC)

## 🚀 Overview
This project is a PoC of a wall-climbing robot capable of adhering to and moving along vertical surfaces using a fan-based suction mechanism.

---

## 🧩 Problem Addressed
- Cleaning, inspecting, or navigating tall vertical structures is unsafe and costly
- Existing solutions (like drones) lack surface contact for direct interaction

---

## ⚙️ Components Used

| Component | Description |
|----------|-------------|
| Arduino Uno | Motor + fan control |
| Motor Driver (L298N) | Dual DC motor control |
| Suction Fan | Generates negative pressure for adhesion |
| Wheels & Frame | Basic chassis for vertical movement |
| Battery | 12V Li-ion |

---

## 🔧 How It Works
- A suction fan creates a low-pressure chamber beneath the chassis
- The pressure differential allows it to “stick” to vertical surfaces
- DC motors drive the wheels to move up/down the wall

---

## 📐 Suction Model

```math
Required Lift Force ≥ Weight of Robot

F_suction = (P_atm - P_inside) × Area
