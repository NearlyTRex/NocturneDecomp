// Name: crt_unknown.c_FUN_005c6fdb
// Address: 005c6fdb
// Address Range: [[005c6fdb, 005c6fec]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c6fdb(WatcomStaticDestructorNode *param_1)

#include "nocturne.h"

void FUN_005c6fdb(WatcomStaticDestructorNode *param_1)

{
  param_1->next = g_WatcomStaticDestructorNode_PTR_0062676c;
  g_WatcomStaticDestructorNode_PTR_0062676c = param_1;
  return;
}
