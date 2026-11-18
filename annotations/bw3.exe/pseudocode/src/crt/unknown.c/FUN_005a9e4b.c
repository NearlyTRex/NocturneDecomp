// Name: crt_unknown.c_FUN_005a9e4b
// Address: 005a9e4b
// Address Range: [[005a9e4b, 005a9e5c]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a9e4b(WatcomStaticDestructorNode *param_1)

#include "nocturne.h"

void FUN_005a9e4b(WatcomStaticDestructorNode *param_1)

{
  param_1->next = g_AtexitListHead;
  g_AtexitListHead = param_1;
  return;
}
