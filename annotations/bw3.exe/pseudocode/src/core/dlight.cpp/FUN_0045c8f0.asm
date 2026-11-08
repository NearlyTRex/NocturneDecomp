; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c8f0(int param_1)
;
;
; XREF[1]:
;   FUN_00534890 at 0053518d
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb39c
;   TerminatedCString s_CDemonLight_beginBackgro_005bb3af
;   TerminatedCString s_core_dlight_cpp_005bb3e2
;   TerminatedCString s_CDemonLight_beginBackgro_005bb3f5
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01b49be0
;   undefined4 DAT_01b49be4
;   undefined4 DAT_01b49be8
;   undefined4 DAT_01b49be9
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c5faf1
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_0046d520
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c8f0
        ;   Label: FUN_0045c8f0
    PUSH ESI                            ; 0045c8f1
    PUSH EDI                            ; 0045c8f2
    PUSH EBP                            ; 0045c8f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045c8f4
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0045c8f8
    JZ 0x0045c9b6                       ; 0045c8ff
        ;   XREF to: 0045c9b6 (CONDITIONAL_JUMP)  ; LAB_0045c9b6
    MOV EDI,dword ptr [0x01b49be0]      ; 0045c905 | DAT_01b49be0
        ;   Label: LAB_0045c905
    INC EDI                             ; 0045c90b
    MOV dword ptr [0x01b49be0],EDI      ; 0045c90c | DAT_01b49be0
    CMP EDI,0x1                         ; 0045c912
    JNZ 0x0045c9b1                      ; 0045c915
        ;   XREF to: 0045c9b1 (CONDITIONAL_JUMP)  ; LAB_0045c9b1
    MOV ESI,0x1c5faec                   ; 0045c91b
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 0045c920
    MOV EDI,0x1b49be4                   ; 0045c926
    SHL ECX,0x2                         ; 0045c92b
    PUSH EDI                            ; 0045c92e | DAT_01b49be4
    MOV EAX,ECX                         ; 0045c92f
    SHR ECX,0x2                         ; 0045c931
    MOVSD.REP ES:EDI,ESI                ; 0045c934 | DAT_01c5faec | DAT_01b49be4 | DAT_01c5faf0
    MOV CL,AL                           ; 0045c936
    AND CL,0x3                          ; 0045c938
    MOVSB.REP ES:EDI,ESI                ; 0045c93b | DAT_01c5faf0 | DAT_01b49be8 | DAT_01c5faf1
    POP EDI                             ; 0045c93d
    CMP dword ptr [EBX + 0x2f9c],0x0    ; 0045c93e
    JNZ 0x0045c96a                      ; 0045c945
        ;   XREF to: 0045c96a (CONDITIONAL_JUMP)  ; LAB_0045c96a
    MOV EDX,0x5bb3e2                    ; 0045c947 | = "..\\core\\dlight.cpp"
    MOV ECX,0x1bc                       ; 0045c94c
    PUSH 0x5bb3f5                       ; 0045c951 | = "CDemonLight::beginBackgroundScene - N..."
    MOV dword ptr [0x01d71de0],EDX      ; 0045c956 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0045c95c | DAT_01d71de4
    CALL FUN_004e4330                   ; 0045c962
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0045c967
    MOV ESI,dword ptr [EBX + 0x1cc4]    ; 0045c96a
        ;   Label: LAB_0045c96a
    XOR EAX,EAX                         ; 0045c970
    TEST ESI,ESI                        ; 0045c972
    JLE 0x0045c9a0                      ; 0045c974
        ;   XREF to: 0045c9a0 (CONDITIONAL_JUMP)  ; LAB_0045c9a0
    XOR EDX,EDX                         ; 0045c976
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 0045c978
        ;   Label: LAB_0045c978
    IMUL ESI,EAX                        ; 0045c97e
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 0045c981
    ADD ESI,ESI                         ; 0045c987
    ADD ECX,ESI                         ; 0045c989
    MOV dword ptr [EDX + 0x1c5faec],ECX ; 0045c98b | DAT_01c5faec | DAT_01c5faf0
    INC EAX                             ; 0045c991
    MOV EDI,dword ptr [EBX + 0x1cc4]    ; 0045c992
    ADD EDX,0x4                         ; 0045c998
    CMP EAX,EDI                         ; 0045c99b
    JL 0x0045c978                       ; 0045c99d
        ;   XREF to: 0045c978 (CONDITIONAL_JUMP)  ; LAB_0045c978
    NOP                                 ; 0045c99f
    PUSH 0x1                            ; 0045c9a0
        ;   Label: LAB_0045c9a0
    MOV EBP,dword ptr [0x005f2afc]      ; 0045c9a2 | DAT_005f2afc
    PUSH EBP                            ; 0045c9a8 | DAT_01bdd7e4
    CALL FUN_0046d520                   ; 0045c9a9
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d520()
    ADD ESP,0x8                         ; 0045c9ae
    POP EBP                             ; 0045c9b1
        ;   Label: LAB_0045c9b1
    POP EDI                             ; 0045c9b2
    POP ESI                             ; 0045c9b3
    POP EBX                             ; 0045c9b4
    RET                                 ; 0045c9b5
    MOV ECX,0x5bb39c                    ; 0045c9b6 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0045c9b6
    MOV ESI,0x1af                       ; 0045c9bb
    PUSH 0x5bb3af                       ; 0045c9c0 | = "CDemonLight::beginBackgroundScene - S..."
    MOV dword ptr [0x01d71de0],ECX      ; 0045c9c5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045c9cb | DAT_01d71de4
    CALL FUN_004e4330                   ; 0045c9d1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0045c9d6
    JMP 0x0045c905                      ; 0045c9d9
        ;   XREF to: 0045c905 (UNCONDITIONAL_JUMP)  ; LAB_0045c905

