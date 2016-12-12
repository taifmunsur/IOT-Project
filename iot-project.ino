void setup() {
    pinMode(D0, INPUT);
}

void loop() {
    if (digitalRead(D0) == HIGH) {
        Particle.publish("Store Motion", "MOTION", 60, PRIVATE);
        while (digitalRead(D0) == HIGH); // hang tight here until motion stops
    }
}
