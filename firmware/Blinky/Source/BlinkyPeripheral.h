#ifndef BLINKYPERIPHERAL_H
#define BLINKYPERIPHERAL_H

#ifdef __cplusplus
extern "C"
{
#endif

// Simple BLE Peripheral Task Events
#define SBP_START_DEVICE_EVT                              0x0001
#define SBP_PERIODIC_EVT                                  0x0002

extern void BlinkyPeripheral_Init( uint8 task_id );

extern uint16 BlinkyPeripheral_ProcessEvent( uint8 task_id, uint16 events );


#ifdef __cplusplus
}
#endif

#endif /* SIMPLEBLEPERIPHERAL_H */
