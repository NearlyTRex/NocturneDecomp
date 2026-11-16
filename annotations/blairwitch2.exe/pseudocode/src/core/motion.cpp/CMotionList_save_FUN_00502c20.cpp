// Name: core_motion.cpp_CMotionList_save_FUN_00502c20
// Address: 00502c20
// Address Range: [[00502c20, 00502f03]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionList_save_FUN_00502c20(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionList_save_FUN_00502c20(CMotionList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iStack_18;
  SMotion *pSStack_14;
  
  _fprintf(file_handle,"// motion list version\n");
  _fprintf(file_handle,(char *)0x5df875);
  _fprintf(file_handle,"// state list\n");
  _fprintf(file_handle,(char *)0x5df888);
  iVar1 = 0;
  if (0 < this_ptr->state_count) {
    do {
      _fprintf(file_handle,(char *)0x5df88c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->state_count);
  }
  _fprintf(file_handle,"// motion count\n");
  _fprintf(file_handle,(char *)0x5df8a1);
  iStack_18 = 0;
  if (0 < this_ptr->motion_count) {
    pSStack_14 = this_ptr->motions;
    do {
      _fprintf(file_handle,"// motion %d: \"name\",fps,state,frameStart,frameCount\n");
      _fprintf(file_handle,(char *)0x5df8db);
      _fprintf(file_handle,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n");
      _fprintf(file_handle,(char *)0x5df94a);
      _fprintf(file_handle,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n");
      _fprintf(file_handle,(char *)0x5df9a7);
      _fprintf(file_handle,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n");
      _fprintf(file_handle,(char *)0x5df9f5);
      _fprintf(file_handle,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n");
      iVar1 = 0;
      _fprintf(file_handle,(char *)0x5dfa74);
      if (0 < pSStack_14->transition_count) {
        do {
          iVar1 = iVar1 + 1;
          _fprintf(file_handle,"%d,%d,%d,%g,%g,%d\n");
        } while (iVar1 < pSStack_14->transition_count);
      }
      _fprintf(file_handle,"// motion %d signal count, list: frameNumber, value\n");
      iVar1 = 0;
      _fprintf(file_handle,(char *)0x5dfac0);
      if (0 < pSStack_14->signal_count) {
        do {
          iVar1 = iVar1 + 1;
          _fprintf(file_handle,(char *)0x5dfac4);
        } while (iVar1 < pSStack_14->signal_count);
      }
      _fprintf(file_handle,"// motion %d marker count, list\n");
      iVar1 = 0;
      _fprintf(file_handle,(char *)0x5dfaec);
      if (0 < pSStack_14->marker_count) {
        do {
          iVar1 = iVar1 + 1;
          _fprintf(file_handle,(char *)0x5dfaef);
        } while (iVar1 < pSStack_14->marker_count);
      }
      _fprintf(file_handle,(char *)0x5dfaf3);
      pSStack_14 = pSStack_14 + 1;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < this_ptr->motion_count);
  }
  return;
}
