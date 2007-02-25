/*
  Hatari - printer.h

  function prototypes for pritner.c / Printing interface
*/

extern void Printer_Init(void);
extern void Printer_UnInit(void);
extern void Printer_CloseAllConnections(void);
extern BOOL Printer_TransferByteTo(Uint8 Byte);
extern void Printer_CheckIdleStatus(void);

