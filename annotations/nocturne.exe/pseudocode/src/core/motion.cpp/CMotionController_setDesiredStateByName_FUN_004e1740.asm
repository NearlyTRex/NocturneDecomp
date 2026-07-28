; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740(CMotionController *this_ptr,char *state_name,int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   state_name
; int              Stack[0xc]:4   force_immediate
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0 at 00428b49
;   core_hero.cpp_CHero_getGrabbed_FUN_004b4c70 at 004b4d0f
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004b4d50 at 004b4db7
;   core_npc.cpp_CNPC_process_FUN_004eea20 at 004eeb5c
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1740
        ;   Label: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740
    PUSH ESI                            ; 004e1741
    PUSH 0x1                            ; 004e1742
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e1744
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e1748
    PUSH EDX                            ; 004e174c
    MOV ECX,dword ptr [EAX]             ; 004e174d
    PUSH ECX                            ; 004e174f
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 004e1750
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004e1755
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e1758
    PUSH EBX                            ; 004e175c
    PUSH EAX                            ; 004e175d
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e175e
    PUSH ESI                            ; 004e1762
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004e1763
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e1768
    POP ESI                             ; 004e176b
    POP EBX                             ; 004e176c
    RET                                 ; 004e176d

