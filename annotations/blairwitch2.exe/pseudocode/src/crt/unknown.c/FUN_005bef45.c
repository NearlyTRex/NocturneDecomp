// Name: crt_unknown.c_FUN_005bef45
// Address: 005bef45
// Address Range: [[005bef45, 005bef56]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bef45(WatcomStaticDestructorNode *param_1)

#include "nocturne.h"

void FUN_005bef45(WatcomStaticDestructorNode *param_1)

{
  param_1->next = g_AtexitListHead;
  g_AtexitListHead = param_1;
  return;
}
