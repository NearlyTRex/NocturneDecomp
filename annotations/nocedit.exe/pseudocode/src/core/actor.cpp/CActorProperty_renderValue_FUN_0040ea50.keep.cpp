// Name: core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50
// Address: 0040ea50
// MANUAL RECONSTRUCTION
// Address Range: [[0040ea50, 0040ee2b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)

{
  CMotionList *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  int iVar1;
  uint *puVar10;
  char *pcVar2;
  int iVar13;
  CVector3f *pCVar3;
  CRuleList *pCVar4;


  switch(this_ptr->type) {
  case PROP_INT:
    _sprintf(output_buffer,"%d",*(this_ptr->data).v_int_ptr);
    break;
  case PROP_FLOAT:
    _sprintf
              (output_buffer,"%g",(double)*(this_ptr->data).v_float_ptr);
    return;
  case PROP_VECTOR:
    pCVar3 = (this_ptr->data).v_vector_ptr;
    _sprintf
              (output_buffer,"%g,%g,%g",(double)pCVar3->x,(double)pCVar3->y,(double)pCVar3->z)
    ;
    return;
  case PROP_STRING:
  case PROP_SOUND:
  case PROP_EVENT:
  case PROP_BUTTON:
    strcpy(output_buffer,(this_ptr->data).v_string_ptr);
    return;
  case PROP_BOOL:
    if (*(this_ptr->data).v_int_ptr == 0) {
      pcVar2 = "FALSE";
    }
    else {
      pcVar2 = "TRUE";
    }
    strcpy(output_buffer,pcVar2);
    return;
  case PROP_CHOICE:
    pcVar2 = *(char **)(this_ptr->data).v_string_ptr;
    if (pcVar2 != (char *)0x0) {
      strcpy(output_buffer,pcVar2);
      return;
    }
    strcpy(output_buffer,"(none)");
    return;
  case PROP_MODEL_KFM:
    strcpy(output_buffer,((this_ptr->data).v_kfm_ptr)->model_name);
    return;
  case PROP_MODEL_DFM:
    strcpy(output_buffer,((this_ptr->data).v_dfm_ptr)->model_name);
    return;
  case PROP_GROUND_TYPE:
    strcpy(output_buffer,core_ground_cpp_getGroundTypeName_FUN_004eed80(*(this_ptr->data).v_uint_ptr));
    return;
  case PROP_FILE:
    pcVar2 = (this_ptr->data).v_string_ptr;
    if (*pcVar2 == '\0') {
      pcVar2 = "(none)";
    }
    strcpy(output_buffer,pcVar2);
    return;
  case PROP_MOTION:
    pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       ((this_ptr->data).v_motion_ptr);
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((this_ptr->data).v_motion_ptr);
    _sprintf
              (output_buffer,"%s (%s)",pSVar6->motion_name,(char *)(pCVar5->state_names + pSVar6->state_index));
    return;
  case PROP_CLOTH:
    if ((this_ptr->param1).v_int < ((this_ptr->data).v_clothlist_ptr)->count) {
      strcpy(output_buffer,((this_ptr->data).v_clothlist_ptr)->filenames[(this_ptr->param1).v_int]);
      return;
    }
    strcpy(output_buffer,"(add a new cloth)");
    return;
  case PROP_ENUM_PAIR:
    pcVar2 = "??????";
    iVar1 = 0;
    if (0 < (this_ptr->param1).v_int) {
      puVar10 = (uint *)(this_ptr->param2).v_ptr;
      do {
        if (*(this_ptr->data).v_int_ptr == puVar10[1]) {
          pcVar2 = (char *)*puVar10;
          break;
        }
        iVar1 = iVar1 + 1;
        puVar10 = puVar10 + 2;
      } while (iVar1 < (this_ptr->param1).v_int);
    }
    strcpy(output_buffer,pcVar2);
    return;
  case PROP_RULE:
    pCVar4 = (this_ptr->data).v_rulelist_ptr;
    iVar1 = (this_ptr->param1).v_int;
    if (iVar1 < pCVar4->list_size) {
      _sprintf
                (output_buffer,"%s => %s",(char *)(pCVar4->conditions + iVar1),(char *)(pCVar4->events + iVar1));
      return;
    }
    strcpy(output_buffer,"(add a rule)");
    return;
  case PROP_ACTION:
    (*(this_ptr->data).v_action_func_ptr)(actor,this_ptr);
    return;
  case PROP_FLAGS:
    strcpy(output_buffer,"(none)");
    iVar13 = 0;
    pcVar2 = output_buffer;
    do {
      if ((*(this_ptr->data).v_uint_ptr & g_PropertyFlagDefinitions[iVar13].mask) != 0) {
        if (output_buffer < pcVar2) {
          iVar7 = _sprintf(pcVar2,", ");
          pcVar2 = pcVar2 + iVar7;
        }
        iVar1 = _sprintf(pcVar2,"%s",g_PropertyFlagDefinitions[iVar13].name);
        pcVar2 = pcVar2 + iVar1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 2);
    break;
  default:
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xfc9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown CActorProperty type: %d",this_ptr->type);
    return;
  }
  return;
}
