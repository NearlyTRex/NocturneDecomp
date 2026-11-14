; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_canLookAt_FUN_00429ce0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_STAND_005cd133
;   undefined4 DAT_005cd13e
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0
;   core_motion.cpp_FUN_005038a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429ce0
        ;   Label: core_charactr.cpp_CCharacter_canLookAt_FUN_00429ce0
    PUSH ESI                            ; 00429ce1
    SUB ESP,0x4                         ; 00429ce2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00429ce5
    PUSH ESI                            ; 00429ce9
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00429cea
    CALL dword ptr [EAX + 0x114]        ; 00429cf0
    ADD ESP,0x4                         ; 00429cf6
    CMP EAX,0x1                         ; 00429cf9
    JG 0x00429d19                       ; 00429cfc
        ;   XREF to: 00429d19 (CONDITIONAL_JUMP)  ; LAB_00429d19
    MOV AH,byte ptr [ESI + 0x2514]      ; 00429cfe
    LEA EBX,[ESI + 0x2b4]               ; 00429d04
    TEST AH,AH                          ; 00429d0a
    JNZ 0x00429d1d                      ; 00429d0c
        ;   XREF to: 00429d1d (CONDITIONAL_JUMP)  ; LAB_00429d1d
    MOV EAX,0x1                         ; 00429d0e
        ;   Label: LAB_00429d0e
    ADD ESP,0x4                         ; 00429d13
        ;   Label: LAB_00429d13
    POP ESI                             ; 00429d16
    POP EBX                             ; 00429d17
    RET                                 ; 00429d18
    XOR EAX,EAX                         ; 00429d19
        ;   Label: LAB_00429d19
    JMP 0x00429d13                      ; 00429d1b
        ;   XREF to: 00429d13 (UNCONDITIONAL_JUMP)  ; LAB_00429d13
    PUSH 0x0                            ; 00429d1d
        ;   Label: LAB_00429d1d
    PUSH 0x5cd133                       ; 00429d1f | = "STAND"
    PUSH EBX                            ; 00429d24
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00429d25
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00429d2a
    PUSH EAX                            ; 00429d2d
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0 ; 00429d2e
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00429d33
    TEST EAX,EAX                        ; 00429d36
    JL 0x00429d0e                       ; 00429d38
        ;   XREF to: 00429d0e (CONDITIONAL_JUMP)  ; LAB_00429d0e
    PUSH EAX                            ; 00429d3a
    PUSH EBX                            ; 00429d3b
    CALL core_motion.cpp_FUN_005038a0   ; 00429d3c
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x8],EAX       ; 00429d41
    FLD float ptr [ESP + 0x8]           ; 00429d45
    ADD ESP,0x8                         ; 00429d49
    FCOMP double ptr [0x005cd13e]       ; 00429d4c | DAT_005cd13e
    FNSTSW AX                           ; 00429d52
    SAHF                                ; 00429d54
    JBE 0x00429d0e                      ; 00429d55
        ;   XREF to: 00429d0e (CONDITIONAL_JUMP)  ; LAB_00429d0e
    XOR EAX,EAX                         ; 00429d57
    ADD ESP,0x4                         ; 00429d59
    POP ESI                             ; 00429d5c
    POP EBX                             ; 00429d5d
    RET                                 ; 00429d5e

