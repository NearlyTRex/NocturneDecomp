// Name: core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50
// Address: 0040ea50
// Address Range: [[0040ea50, 0040ee2b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)

{
  char cVar3;
  CMotionList *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  int iVar4;
  CActorPropertyActionFunc *pCVar8;
  CMotionList *pCVar6;
  int *piVar9;
  uint *puVar10;
  char *pcVar11;
  char *pcVar7;
  char *pcVar12;
  int iVar13;
  char cVar2;
  CVector3f *pCVar3;
  CRuleList *pCVar4;
  code cVar1;
  
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
    pCVar8 = (this_ptr->data).v_action_func_ptr;
    do {
      cVar3 = (char)*pCVar8;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar1 = pCVar8[1];
      pCVar8 = pCVar8 + 2;
      output_buffer[1] = (char)cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != (code)0x0);
    return;
  case PROP_BOOL:
    if (*(this_ptr->data).v_int_ptr == 0) {
      pcVar7 = "FALSE";
    }
    else {
      pcVar7 = "TRUE";
    }
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = cVar3;
      output_buffer = output_buffer + 2;
    } while (cVar3 != '\0');
    return;
  case PROP_CHOICE:
    pCVar6 = (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    if (pCVar6 != (CMotionList *)0x0) {
      do {
        cVar3 = (char)pCVar6->state_count;
        *output_buffer = cVar3;
        if (cVar3 == '\0') {
          return;
        }
        cVar3 = *(char *)((int)&pCVar6->state_count + 1);
        pCVar6 = (CMotionList *)((int)&pCVar6->state_count + 2);
        output_buffer[1] = cVar3;
        output_buffer = output_buffer + 2;
      } while (cVar3 != '\0');
      return;
    }
    pcVar7 = "(none)";
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = cVar3;
      output_buffer = output_buffer + 2;
    } while (cVar3 != '\0');
    return;
  case PROP_MODEL_KFM:
    pcVar7 = ((this_ptr->data).v_clothlist_ptr)->filenames[2] + 0x24;
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = cVar3;
      output_buffer = output_buffer + 2;
    } while (cVar3 != '\0');
    return;
  case PROP_MODEL_DFM:
    pcVar7 = ((this_ptr->data).v_dfm_ptr)->model_name;
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = cVar3;
      output_buffer = output_buffer + 2;
    } while (cVar3 != '\0');
    return;
  case PROP_GROUND_TYPE:
    pcVar7 = core_ground_cpp_getGroundTypeName_FUN_004eed80(*(this_ptr->data).v_uint_ptr);
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = cVar3;
      output_buffer = output_buffer + 2;
    } while (cVar3 != '\0');
    return;
  case PROP_FILE:
    pcVar7 = (char *)(this_ptr->data).v_action_func_ptr;
    if (*pcVar7 == '\0') {
      pcVar7 = "(none)";
    }
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar1 = (code)pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = (char)cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != (code)0x0);
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
    if ((this_ptr->param1).v_int < ((this_ptr->data).v_kfm_ptr)->part_visibility_flags[0]) {
      piVar9 = ((this_ptr->data).v_kfm_ptr)->part_visibility_flags +
               (this_ptr->param1).v_int * 10 + 1;
      do {
        iVar4 = *piVar9;
        *output_buffer = (char)iVar4;
        if ((char)iVar4 == '\0') {
          return;
        }
        cVar3 = *(char *)((int)piVar9 + 1);
        piVar9 = (int *)((int)piVar9 + 2);
        output_buffer[1] = cVar3;
        output_buffer = output_buffer + 2;
      } while (cVar3 != '\0');
      return;
    }
    pcVar7 = "(add a new cloth)";
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = cVar3;
      output_buffer = output_buffer + 2;
    } while (cVar3 != '\0');
    return;
  case PROP_ENUM_PAIR:
    pcVar7 = "??????";
    iVar4 = 0;
    if (0 < (this_ptr->param1).v_int) {
      puVar10 = (this_ptr->param2).v_ptr;
      do {
        if (*(this_ptr->data).v_int_ptr == puVar10[1]) {
          pcVar7 = (char *)*puVar10;
          break;
        }
        iVar4 = iVar4 + 1;
        puVar10 = puVar10 + 2;
      } while (iVar4 < (this_ptr->param1).v_int);
    }
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = cVar3;
      output_buffer = output_buffer + 2;
    } while (cVar3 != '\0');
    return;
  case PROP_RULE:
    pCVar4 = (this_ptr->data).v_rulelist_ptr;
    iVar4 = (this_ptr->param1).v_int;
    if (iVar4 < pCVar4->list_size) {
      _sprintf
                (output_buffer,"%s => %s",pCVar4->conditions + iVar4,pCVar4->events + iVar4);
      return;
    }
    pcVar7 = "(add a rule)";
    do {
      cVar3 = *pcVar7;
      *output_buffer = cVar3;
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      output_buffer[1] = cVar3;
      output_buffer = output_buffer + 2;
    } while (cVar3 != '\0');
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
      cVar3 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar3;
      pcVar12 = pcVar12 + 2;
    } while (cVar3 != '\0');
    iVar13 = 0;
    pcVar7 = output_buffer;
    do {
      if ((*(this_ptr->data).v_uint_ptr &
          *(uint *)((int)&g_PropertyFlagDefinitions[0].mask + iVar13)) != 0) {
        if (output_buffer < pcVar7) {
          iVar7 = _sprintf(pcVar7,", ");
          pcVar7 = pcVar7 + iVar7;
        }
        iVar4 = _sprintf(pcVar7,"%s");
        pcVar7 = pcVar7 + iVar4;
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
