// Name: core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50
// Address: 0040ea50
// Address Range: [[0040ea50, 0040ee2b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)

{
  code cVar1;
  char cVar2;
  CVector3f *pCVar3;
  CRuleList *pCVar4;
  CMotionList *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  CActorPropertyActionFunc *pCVar8;
  int *piVar9;
  uint *puVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  
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
      cVar2 = (char)*pCVar8;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
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
      pcVar12 = "FALSE";
    }
    else {
      pcVar12 = "TRUE";
    }
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      output_buffer[1] = cVar2;
      output_buffer = output_buffer + 2;
    } while (cVar2 != '\0');
    return;
  case PROP_CHOICE:
    pCVar5 = (((this_ptr->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    if (pCVar5 != (CMotionList *)0x0) {
      do {
        cVar2 = (char)pCVar5->state_count;
        *output_buffer = cVar2;
        if (cVar2 == '\0') {
          return;
        }
        cVar2 = *(char *)((int)&pCVar5->state_count + 1);
        pCVar5 = (CMotionList *)((int)&pCVar5->state_count + 2);
        output_buffer[1] = cVar2;
        output_buffer = output_buffer + 2;
      } while (cVar2 != '\0');
      return;
    }
    pcVar12 = "(none)";
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      output_buffer[1] = cVar2;
      output_buffer = output_buffer + 2;
    } while (cVar2 != '\0');
    return;
  case PROP_MODEL_KFM:
    pcVar12 = ((this_ptr->data).v_clothlist_ptr)->filenames[2] + 0x24;
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      output_buffer[1] = cVar2;
      output_buffer = output_buffer + 2;
    } while (cVar2 != '\0');
    return;
  case PROP_MODEL_DFM:
    pcVar12 = ((this_ptr->data).v_dfm_ptr)->model_name;
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      output_buffer[1] = cVar2;
      output_buffer = output_buffer + 2;
    } while (cVar2 != '\0');
    return;
  case PROP_GROUND_TYPE:
    pcVar12 = core_ground_cpp_getGroundTypeName_FUN_004eed80(*(this_ptr->data).v_int_ptr);
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      output_buffer[1] = cVar2;
      output_buffer = output_buffer + 2;
    } while (cVar2 != '\0');
    return;
  case PROP_FILE:
    pcVar12 = (char *)(this_ptr->data).v_action_func_ptr;
    if (*pcVar12 == '\0') {
      pcVar12 = "(none)";
    }
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar1 = ((CActorPropertyActionFunc *)pcVar12)[1];
      pcVar12 = (char *)((CActorPropertyActionFunc *)pcVar12 + 2);
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
        iVar13 = *piVar9;
        *output_buffer = (char)iVar13;
        if ((char)iVar13 == '\0') {
          return;
        }
        cVar2 = *(char *)((int)piVar9 + 1);
        piVar9 = (int *)((int)piVar9 + 2);
        output_buffer[1] = cVar2;
        output_buffer = output_buffer + 2;
      } while (cVar2 != '\0');
      return;
    }
    pcVar12 = "(add a new cloth)";
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      output_buffer[1] = cVar2;
      output_buffer = output_buffer + 2;
    } while (cVar2 != '\0');
    return;
  case PROP_ENUM_PAIR:
    pcVar12 = "??????";
    iVar13 = 0;
    if (0 < (this_ptr->param1).v_int) {
      puVar10 = (this_ptr->param2).v_ptr;
      do {
        if (*(this_ptr->data).v_int_ptr == puVar10[1]) {
          pcVar12 = (char *)*puVar10;
          break;
        }
        iVar13 = iVar13 + 1;
        puVar10 = puVar10 + 2;
      } while (iVar13 < (this_ptr->param1).v_int);
    }
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      output_buffer[1] = cVar2;
      output_buffer = output_buffer + 2;
    } while (cVar2 != '\0');
    return;
  case PROP_RULE:
    pCVar4 = (this_ptr->data).v_rulelist_ptr;
    iVar13 = (this_ptr->param1).v_int;
    if (iVar13 < pCVar4->list_size) {
      _sprintf
                (output_buffer,"%s => %s",pCVar4->conditions + iVar13,pCVar4->events + iVar13);
      return;
    }
    pcVar12 = "(add a rule)";
    do {
      cVar2 = *pcVar12;
      *output_buffer = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      output_buffer[1] = cVar2;
      output_buffer = output_buffer + 2;
    } while (cVar2 != '\0');
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
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar2;
      pcVar12 = pcVar12 + 2;
    } while (cVar2 != '\0');
    iVar13 = 0;
    pcVar12 = output_buffer;
    do {
      if ((*(this_ptr->data).v_uint_ptr &
          *(uint *)((int)&SPropertyFlag_ARRAY_0066e30c[0].mask + iVar13)) != 0) {
        if (output_buffer < pcVar12) {
          iVar7 = _sprintf(pcVar12,", ");
          pcVar12 = pcVar12 + iVar7;
        }
        iVar7 = _sprintf(pcVar12,"%s");
        pcVar12 = pcVar12 + iVar7;
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
