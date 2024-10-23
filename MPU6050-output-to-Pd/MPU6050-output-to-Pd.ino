#include <basicMPU6050.h> 

// Create instance
basicMPU6050<> imu;

void setup() {
  // Set registers - Always required
  imu.setup();

  // Initial calibration of gyro
  imu.setBias();

  // Start console
  Serial.begin(9600);
}

void loop() { 
  // Update gyro calibration 
  imu.updateBias();
 
//  -- Scaled and calibrated output:
//   Accel
  Serial.print( imu.ax() );
  Serial.print( " " );
  Serial.print( imu.ay() );
  Serial.print( " " );
  Serial.println();
  delay (10);
}
