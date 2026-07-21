; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_CCharacter_canLookAt_FUN_00429fe0(int param_1)
;
;
; Referenced Globals:
;   string s_STAND_0057a36b
;   undefined4 DAT_0057a372
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429fe0
        ;   Label: core_charactr.cpp_CCharacter_canLookAt_FUN_00429fe0
    PUSH ESI                            ; 00429fe1
    SUB ESP,0x4                         ; 00429fe2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00429fe5
    PUSH ESI                            ; 00429fe9
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00429fea
    CALL dword ptr [EAX + 0x104]        ; 00429ff0
    ADD ESP,0x4                         ; 00429ff6
    CMP EAX,0x1                         ; 00429ff9
    JG 0x0042a019                       ; 00429ffc
        ;   XREF to: 0042a019 (CONDITIONAL_JUMP)  ; LAB_0042a019
    MOV AH,byte ptr [ESI + 0x23b0]      ; 00429ffe
    LEA EBX,[ESI + 0x150]               ; 0042a004
    TEST AH,AH                          ; 0042a00a
    JNZ 0x0042a01d                      ; 0042a00c
        ;   XREF to: 0042a01d (CONDITIONAL_JUMP)  ; LAB_0042a01d
    MOV EAX,0x1                         ; 0042a00e
        ;   Label: LAB_0042a00e
    ADD ESP,0x4                         ; 0042a013
        ;   Label: LAB_0042a013
    POP ESI                             ; 0042a016
    POP EBX                             ; 0042a017
    RET                                 ; 0042a018
    XOR EAX,EAX                         ; 0042a019
        ;   Label: LAB_0042a019
    JMP 0x0042a013                      ; 0042a01b
        ;   XREF to: 0042a013 (UNCONDITIONAL_JUMP)  ; LAB_0042a013
    PUSH 0x0                            ; 0042a01d
        ;   Label: LAB_0042a01d
    PUSH 0x57a36b                       ; 0042a01f | = "STAND"
    PUSH EBX                            ; 0042a024
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 0042a025
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 0042a02a
    PUSH EAX                            ; 0042a02d
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 0042a02e
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0()
    ADD ESP,0xc                         ; 0042a033
    TEST EAX,EAX                        ; 0042a036
    JL 0x0042a00e                       ; 0042a038
        ;   XREF to: 0042a00e (CONDITIONAL_JUMP)  ; LAB_0042a00e
    PUSH EAX                            ; 0042a03a
    PUSH EBX                            ; 0042a03b
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 0042a03c
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0042a041
    FLD float ptr [ESP + 0x8]           ; 0042a045
    ADD ESP,0x8                         ; 0042a049
    FCOMP double ptr [0x0057a372]       ; 0042a04c | DAT_0057a372
    FNSTSW AX                           ; 0042a052
    SAHF                                ; 0042a054
    JBE 0x0042a00e                      ; 0042a055
        ;   XREF to: 0042a00e (CONDITIONAL_JUMP)  ; LAB_0042a00e
    XOR EAX,EAX                         ; 0042a057
    ADD ESP,0x4                         ; 0042a059
    POP ESI                             ; 0042a05c
    POP EBX                             ; 0042a05d
    RET                                 ; 0042a05e

