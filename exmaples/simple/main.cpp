
#include <ExpansionBoard.h>

ExpansionBoard io_expander;

void setup()
{
    io_expander.setup(relays_actions.relay_flags);
}

void loop()
{
    auto value = io_expander.digitalRead(0); // read from pin 0
    io_expander.digitalWrite(1, value);      // write to pin 1
    auto all_poins = io_expander.read();     // read all pins
}
