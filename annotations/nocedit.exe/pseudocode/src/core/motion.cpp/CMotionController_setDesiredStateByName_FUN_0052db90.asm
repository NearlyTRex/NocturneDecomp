; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90(CMotionController * this_ptr, char * state_name, int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   state_name
; int              Stack[0xc]:4   force_immediate
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_FUN_0042c920 at 0042c9b9
;   core_hero.cpp_CHero_FUN_004f28d0 at 004f2984
;   core_hero.cpp_CHero_FUN_004f29b0 at 004f2a17
;   core_npc.cpp_CNPC_process_FUN_005448b0 at 00544b07
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052db90
        ;   Label: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90
    PUSH ESI                            ; 0052db91
    PUSH 0x1                            ; 0052db92
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052db94
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052db98
    PUSH EDX                            ; 0052db9c
    MOV ECX,dword ptr [EAX]             ; 0052db9d
    PUSH ECX                            ; 0052db9f
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 0052dba0
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr)
    ADD ESP,0xc                         ; 0052dba5
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052dba8
    PUSH EBX                            ; 0052dbac
    PUSH EAX                            ; 0052dbad
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052dbae
    PUSH ESI                            ; 0052dbb2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0052dbb3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052dbb8
    POP ESI                             ; 0052dbbb
    POP EBX                             ; 0052dbbc
    RET                                 ; 0052dbbd

