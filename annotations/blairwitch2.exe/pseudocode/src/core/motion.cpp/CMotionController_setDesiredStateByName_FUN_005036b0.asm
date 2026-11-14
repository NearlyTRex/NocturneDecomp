; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0(CMotionController *this_ptr,char *state_name,int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   state_name
; int              Stack[0xc]:4   force_immediate
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0 at 0042864d
;   core_hero.cpp_CHero_getGrabbed_FUN_004cea50 at 004ceb26
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004ceb80 at 004cebf5
;   core_npc.cpp_CNPC_process_FUN_005105b0 at 00510720
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005036b0
        ;   Label: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_005036b0
    PUSH ESI                            ; 005036b1
    PUSH 0x1                            ; 005036b2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005036b4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005036b8
    PUSH EDX                            ; 005036bc
    MOV ECX,dword ptr [EAX]             ; 005036bd
    PUSH ECX                            ; 005036bf
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0 ; 005036c0
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005036c5
    MOV EBX,dword ptr [ESP + 0x14]      ; 005036c8
    PUSH EBX                            ; 005036cc
    PUSH EAX                            ; 005036cd
    MOV ESI,dword ptr [ESP + 0x14]      ; 005036ce
    PUSH ESI                            ; 005036d2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005036d3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005036d8
    POP ESI                             ; 005036db
    POP EBX                             ; 005036dc
    RET                                 ; 005036dd

