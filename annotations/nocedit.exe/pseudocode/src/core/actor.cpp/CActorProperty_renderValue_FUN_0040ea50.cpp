// Name: core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50
// Address: 0040ea50
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
  char *pCVar8;
  int *piVar9;
  uint *puVar10;
  char *pcVar11;
  char *pcVar2;
  char *pcVar12;
  int iVar13;
  char cVar2;
  CVector3f *pCVar3;
  CRuleList *pCVar4;
  char cVar1;
  
  switch(this_ptr->type) {
  case PROP_INT:
    _sprintf(output_buffer,"%d");
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
    pCVar8 = (this_ptr->data).v_string_ptr;
    do {
      cVar1 = *pCVar8;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pCVar8[1];
      pCVar8 = pCVar8 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_BOOL:
    if (*(this_ptr->data).v_int_ptr == 0) {
      pcVar2 = "FALSE";
    }
    else {
      pcVar2 = "TRUE";
    }
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_CHOICE:
    pcVar2 = *(char **)(this_ptr->data).v_string_ptr;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *pcVar2;
        *output_buffer = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        output_buffer[1] = cVar1;
        output_buffer = output_buffer + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar2 = "(none)";
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_MODEL_KFM:
    pcVar2 = ((this_ptr->data).v_kfm_ptr)->model_name;
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_MODEL_DFM:
    pcVar2 = ((this_ptr->data).v_dfm_ptr)->model_name;
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_GROUND_TYPE:
    pcVar2 = core_ground_cpp_getGroundTypeName_FUN_004eed80(*(this_ptr->data).v_uint_ptr);
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_FILE:
    pcVar2 = (this_ptr->data).v_string_ptr;
    if (*pcVar2 == '\0') {
      pcVar2 = "(none)";
    }
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_MOTION:
    pCVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       ((this_ptr->data).v_motion_ptr);
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((this_ptr->data).v_motion_ptr);
    _sprintf
              (output_buffer,"%s (%s)",pSVar6,pCVar5->state_names + pSVar6->state_index);
    return;
  case PROP_CLOTH:
    if ((this_ptr->param1).v_int < *(int *)(this_ptr->data).v_string_ptr) {
      piVar9 = (int *)((int)(this_ptr->data).v_string_ptr + ((this_ptr->param1).v_int * 10 + 1) * 4)
      ;
      do {
        iVar1 = *piVar9;
        *output_buffer = (char)iVar1;
        if ((char)iVar1 == '\0') {
          return;
        }
        cVar1 = *(char *)((int)piVar9 + 1);
        piVar9 = (int *)((int)piVar9 + 2);
        output_buffer[1] = cVar1;
        output_buffer = output_buffer + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar2 = "(add a new cloth)";
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_ENUM_PAIR:
    pcVar2 = "??????";
    iVar1 = 0;
    if (0 < (this_ptr->param1).v_int) {
      puVar10 = (this_ptr->param2).v_ptr;
      do {
        if (*(this_ptr->data).v_int_ptr == puVar10[1]) {
          pcVar2 = (char *)*puVar10;
          break;
        }
        iVar1 = iVar1 + 1;
        puVar10 = puVar10 + 2;
      } while (iVar1 < (this_ptr->param1).v_int);
    }
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_RULE:
    pCVar4 = (this_ptr->data).v_rulelist_ptr;
    iVar1 = (this_ptr->param1).v_int;
    if (iVar1 < pCVar4->list_size) {
      _sprintf
                (output_buffer,"%s => %s",pCVar4->conditions + iVar1,pCVar4->events + iVar1);
      return;
    }
    pcVar2 = "(add a rule)";
    do {
      cVar1 = *pcVar2;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  case PROP_ACTION:
    (*(this_ptr->data).v_action_func_ptr)(actor,this_ptr);
    return;
  case PROP_FLAGS:
    pcVar11 = "(none)";
    pcVar12 = output_buffer;
    do {
      cVar2 = *pcVar11;
      *pcVar12 = cVar2;
      if (cVar2 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar13 = 0;
    pcVar2 = output_buffer;
    do {
      if ((*(this_ptr->data).v_uint_ptr &
          *(uint *)((int)&g_PropertyFlagDefinitions[0].mask + iVar13)) != 0) {
        if (output_buffer < pcVar2) {
          iVar7 = _sprintf(pcVar2,", ");
          pcVar2 = pcVar2 + iVar7;
        }
        iVar1 = _sprintf(pcVar2,"%s");
        pcVar2 = pcVar2 + iVar1;
      }
      iVar13 = iVar13 + 8;
    } while (iVar13 != 0x10);
    break;
  default:
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xfc9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown CActorProperty type: %d");
    return;
  }
  return;
}
