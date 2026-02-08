// Name: core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50
// Address: 0040ea50
// Address Range: [[0040ea50, 0040ee2b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50 (CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)

#include "nocturne.h"

void __cdecl
core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
          (CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)

{
  char cVar1;
  CVector3f *pCVar2;
  CRuleList *pCVar3;
  CMotionList *pCVar4;
  SMotion *pSVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  
  switch(this_ptr->type) {
  case PROP_INT:
    _sprintf(output_buffer,"%d");
    break;
  case PROP_FLOAT:
    _sprintf
              (output_buffer,"%g",(double)*(this_ptr->data).v_float_ptr);
    return;
  case PROP_VECTOR:
    pCVar2 = (this_ptr->data).v_vector_ptr;
    _sprintf
              (output_buffer,"%g,%g,%g",(double)pCVar2->x,(double)pCVar2->y,(double)pCVar2->z)
    ;
    return;
  case PROP_STRING:
  case PROP_SOUND:
  case PROP_EVENT:
  case PROP_BUTTON:
    pcVar10 = (this_ptr->data).v_string_ptr;
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_BOOL:
    if (*(this_ptr->data).v_int_ptr == 0) {
      pcVar10 = "FALSE";
    }
    else {
      pcVar10 = "TRUE";
    }
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_CHOICE:
    pCVar4 = (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    if (pCVar4 != (CMotionList *)0x0) {
      do {
        cVar1 = (char)pCVar4->state_count;
        *output_buffer = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = *(char *)((int)&pCVar4->state_count + 1);
        pCVar4 = (CMotionList *)((int)&pCVar4->state_count + 2);
        output_buffer[1] = cVar1;
        output_buffer = output_buffer + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar10 = "(none)";
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_MODEL_KFM:
    pcVar10 = ((this_ptr->data).v_clothlist_ptr)->filenames[2] + 0x24;
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_MODEL_DFM:
    pcVar10 = ((this_ptr->data).v_dfm_ptr)->model_name;
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_GROUND_TYPE:
    pcVar10 = core_ground_cpp_getGroundTypeName_FUN_004eed80(*(this_ptr->data).v_int_ptr);
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_FILE:
    pcVar10 = (this_ptr->data).v_string_ptr;
    if (*pcVar10 == '\0') {
      pcVar10 = "(none)";
    }
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_MOTION:
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       ((this_ptr->data).v_motion_ptr);
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((this_ptr->data).v_motion_ptr);
    _sprintf
              (output_buffer,"%s (%s)",pSVar5,pCVar4->state_names + pSVar5->state_index);
    return;
  case PROP_CLOTH:
    if ((this_ptr->param1).v_int < ((this_ptr->data).v_kfm_ptr)->part_visibility_flags[0]) {
      piVar7 = ((this_ptr->data).v_kfm_ptr)->part_visibility_flags +
               (this_ptr->param1).v_int * 10 + 1;
      do {
        iVar11 = *piVar7;
        *output_buffer = (char)iVar11;
        if ((char)iVar11 == '\0') {
          return;
        }
        cVar1 = *(char *)((int)piVar7 + 1);
        piVar7 = (int *)((int)piVar7 + 2);
        output_buffer[1] = cVar1;
        output_buffer = output_buffer + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar10 = "(add a new cloth)";
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_ENUM_PAIR:
    pcVar10 = "??????";
    iVar11 = 0;
    if (0 < (this_ptr->param1).v_int) {
      puVar8 = (this_ptr->param2).v_ptr;
      do {
        if (*(this_ptr->data).v_int_ptr == puVar8[1]) {
          pcVar10 = (char *)*puVar8;
          break;
        }
        iVar11 = iVar11 + 1;
        puVar8 = puVar8 + 2;
      } while (iVar11 < (this_ptr->param1).v_int);
    }
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_RULE:
    pCVar3 = (this_ptr->data).v_rulelist_ptr;
    iVar11 = (this_ptr->param1).v_int;
    if (iVar11 < pCVar3->list_size) {
      _sprintf
                (output_buffer,"%s => %s",pCVar3->conditions + iVar11,pCVar3->events + iVar11);
      return;
    }
    pcVar10 = "(add a rule)";
    do {
      cVar1 = *pcVar10;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_ACTION:
    (*(code *)this_ptr->data)();
    return;
  case PROP_FLAGS:
    pcVar9 = "(none)";
    pcVar10 = output_buffer;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar11 = 0;
    pcVar10 = output_buffer;
    do {
      if ((*(this_ptr->data).v_uint_ptr & *(uint *)((int)&0x00000001 + iVar11)) != 0) {
        if (output_buffer < pcVar10) {
          iVar6 = _sprintf(pcVar10,", ");
          pcVar10 = pcVar10 + iVar6;
        }
        iVar6 = _sprintf(pcVar10,"%s");
        pcVar10 = pcVar10 + iVar6;
      }
      iVar11 = iVar11 + 8;
    } while (iVar11 != 0x10);
    break;
  default:
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xfc9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown CActorProperty type: %d");
    return;
  }
  return;
}
