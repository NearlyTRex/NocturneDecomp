// Name: core_doc.cpp_CDoc_archive_FUN_004597a0
// Address: 004597a0
// Address Range: [[004597a0, 0045995f]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_archive_FUN_004597a0(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_archive_FUN_004597a0(CDoc *this_ptr)

{
  int iStack_10;
  byte auStack_c [4];
  uint uStack_8;
  
  core_hero_cpp_FUN_004ce590(this_ptr);
  if ((1 < g_CDocClassVersion) && (g_CDocClassVersion < 5)) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25608,"@objectToPickUp" + 1)
    ;
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25604,"doorToOpen");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25610,"leverToPull");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25614,"ladderToClimb");
  }
  if (g_CDocClassVersion == 2) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x2620,"lhCarryObject");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x2698,"rhCarryObject");
  }
  if (3 < g_CDocClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25694,"ladderToDescend");
  }
  if (5 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x25640,"gunDrawn");
  }
  if (6 < g_CDocClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x25698,"weapon");
  }
  if (7 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x256a4,"actionPending");
  }
  if (8 < g_CDocClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x2d04,"layerActionIndex");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x2d08,"layerActionT");
  }
  if (g_CDocClassVersion < 10) {
    return;
  }
  uStack_8 = 0;
  core_actor_cpp_archiveInteger_FUN_0040b960(&iStack_10,"lanternMode");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(auStack_c,"lanternTweenPct");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&uStack_8,"LanternPointer");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x257b0,"modelName");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x258b0,"clothName");
  return;
}
