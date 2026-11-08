// Name: FUN_00560b50
// Address: 00560b50
// Address Range: [[00560b50, 00560c9f]]
// Convention: unknown
// Signature: void FUN_00560b50(int param_1)

#include "nocturne.h"

void FUN_00560b50(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,">modelName" + 1);
  FUN_0040b960(param_1 + 0x430,"spikeType");
  FUN_0040b960(param_1 + 0x434,"spikeState");
  FUN_0040b960(param_1 + 0x438,"areWeActive");
  FUN_0040b8e0(param_1 + 0x448,"extendDistance");
  FUN_0040b730(param_1 + 0x44c,"startEvent");
  FUN_0040b730(param_1 + 0x4b0,"stopEvent");
  FUN_0040b730(param_1 + 0x514,"extendEvent");
  FUN_0040b730(param_1 + 0x578,"retractEvent");
  FUN_0040b8e0(param_1 + 0x5dc,"extendTime");
  FUN_0040b8e0(param_1 + 0x5e0,"retractTime");
  FUN_0040b730(param_1 + 0x5e8,"extendSound");
  FUN_0040b730(param_1 + 0x64c,"retractSound");
  FUN_0040b8e0(param_1 + 0x6b0,"period");
  FUN_0040b8e0(param_1 + 0x6b4,"damageStrength");
  FUN_0040b8e0(param_1 + 0x6b8,"param");
  return;
}
