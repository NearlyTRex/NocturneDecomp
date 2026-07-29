; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004b4d50(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_GETGRABBED_005857e5
;   TerminatedCString s_STAND_005857f0
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_charactr.cpp_CCharacter_releaseFromGrab_FUN_004280b0
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4d50
        ;   Label: core_hero.cpp_CHero_releaseFromGrab_FUN_004b4d50
    PUSH ESI                            ; 004b4d51
    SUB ESP,0x4                         ; 004b4d52
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b4d55
    CMP dword ptr [ESI + 0x68],0x78a123 ; 004b4d59 | DAT_0078a123
    JNZ 0x004b4dbf                      ; 004b4d60
        ;   XREF to: 004b4dbf (CONDITIONAL_JUMP)  ; LAB_004b4dbf
    LEA EAX,[ESI + 0x150]               ; 004b4d62
    CMP dword ptr [EAX + 0x22b0],0x0    ; 004b4d68
    JZ 0x004b4dbf                       ; 004b4d6f
        ;   XREF to: 004b4dbf (CONDITIONAL_JUMP)  ; LAB_004b4dbf
    PUSH 0x0                            ; 004b4d71
    PUSH 0x5857e5                       ; 004b4d73 | = "GETGRABBED"
    LEA EBX,[ESI + 0x150]               ; 004b4d78
    PUSH EBX                            ; 004b4d7e
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004b4d7f
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004b4d84
    PUSH EAX                            ; 004b4d87
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 004b4d88
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004b4d8d
    TEST EAX,EAX                        ; 004b4d90
    JL 0x004b4dbf                       ; 004b4d92
        ;   XREF to: 004b4dbf (CONDITIONAL_JUMP)  ; LAB_004b4dbf
    PUSH EAX                            ; 004b4d94
    PUSH EBX                            ; 004b4d95
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004b4d96
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 004b4d9b
    FLD float ptr [ESP + 0x8]           ; 004b4d9f
    FLDZ                                ; 004b4da3
    ADD ESP,0x8                         ; 004b4da5
    FCOMPP                              ; 004b4da8
    FNSTSW AX                           ; 004b4daa
    SAHF                                ; 004b4dac
    JNC 0x004b4dbf                      ; 004b4dad
        ;   XREF to: 004b4dbf (CONDITIONAL_JUMP)  ; LAB_004b4dbf
    PUSH 0x1                            ; 004b4daf
    PUSH 0x5857f0                       ; 004b4db1 | = "STAND"
    PUSH EBX                            ; 004b4db6
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740 ; 004b4db7
        ;   XREF to: 004e1740 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 004b4dbc
    PUSH ESI                            ; 004b4dbf
        ;   Label: LAB_004b4dbf
    CALL core_charactr.cpp_CCharacter_releaseFromGrab_FUN_004280b0 ; 004b4dc0
        ;   XREF to: 004280b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_releaseFromGrab_FUN_004280b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004b4dc5
    ADD ESP,0x4                         ; 004b4dc8
    POP ESI                             ; 004b4dcb
    POP EBX                             ; 004b4dcc
    RET                                 ; 004b4dcd

