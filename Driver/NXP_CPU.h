#ifndef _NXP_CPU_H
#define _NXP_CPU_H

void MCU_Reset(void);
void IAP_ProgramHalfWord(uint32 Address, uint16 Data);
void IAP_ErasePage(uint32 Page_Address);
void IAP_Lock(void);
void IAP_Unlock(void);

#endif
