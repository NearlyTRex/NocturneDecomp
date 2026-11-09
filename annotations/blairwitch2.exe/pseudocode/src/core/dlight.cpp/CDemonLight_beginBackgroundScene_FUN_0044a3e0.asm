; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e6ed
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf367
;   TerminatedCString s_CDemonLight_beginBackgro_005cf37a
;   TerminatedCString s_core_dlight_cpp_005cf3ad
;   TerminatedCString s_CDemonLight_beginBackgro_005cf3c0
;   undefined4 DAT_0060b280
;   undefined4 DAT_01b11db4
;   undefined4 DAT_01b11db8
;   undefined4 DAT_01b11dbc
;   undefined4 DAT_01b11dbd
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c2a391
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a3e0
        ;   Label: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0
    PUSH ESI                            ; 0044a3e1
    PUSH EDI                            ; 0044a3e2
    PUSH EBP                            ; 0044a3e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044a3e4
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0044a3e8
    JZ 0x0044a4a6                       ; 0044a3ef
        ;   XREF to: 0044a4a6 (CONDITIONAL_JUMP)  ; LAB_0044a4a6
    MOV EDI,dword ptr [0x01b11db4]      ; 0044a3f5 | DAT_01b11db4
        ;   Label: LAB_0044a3f5
    INC EDI                             ; 0044a3fb
    MOV dword ptr [0x01b11db4],EDI      ; 0044a3fc | DAT_01b11db4
    CMP EDI,0x1                         ; 0044a402
    JNZ 0x0044a4a1                      ; 0044a405
        ;   XREF to: 0044a4a1 (CONDITIONAL_JUMP)  ; LAB_0044a4a1
    MOV ESI,0x1c2a38c                   ; 0044a40b
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 0044a410
    MOV EDI,0x1b11db8                   ; 0044a416
    SHL ECX,0x2                         ; 0044a41b
    PUSH EDI                            ; 0044a41e | DAT_01b11db8
    MOV EAX,ECX                         ; 0044a41f
    SHR ECX,0x2                         ; 0044a421
    MOVSD.REP ES:EDI,ESI                ; 0044a424 | DAT_01c2a38c | DAT_01b11db8 | DAT_01c2a390
    MOV CL,AL                           ; 0044a426
    AND CL,0x3                          ; 0044a428
    MOVSB.REP ES:EDI,ESI                ; 0044a42b | DAT_01c2a390 | DAT_01b11dbc | DAT_01c2a391
    POP EDI                             ; 0044a42d
    CMP dword ptr [EBX + 0x2f9c],0x0    ; 0044a42e
    JNZ 0x0044a45a                      ; 0044a435
        ;   XREF to: 0044a45a (CONDITIONAL_JUMP)  ; LAB_0044a45a
    MOV EDX,0x5cf3ad                    ; 0044a437 | = "..\\core\\dlight.cpp"
    MOV ECX,0x1bd                       ; 0044a43c
    PUSH 0x5cf3c0                       ; 0044a441 | = "CDemonLight::beginBackgroundScene - N..."
    MOV dword ptr [0x01d046a0],EDX      ; 0044a446 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0044a44c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044a452
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044a457
    MOV ESI,dword ptr [EBX + 0x1cc4]    ; 0044a45a
        ;   Label: LAB_0044a45a
    XOR EAX,EAX                         ; 0044a460
    TEST ESI,ESI                        ; 0044a462
    JLE 0x0044a490                      ; 0044a464
        ;   XREF to: 0044a490 (CONDITIONAL_JUMP)  ; LAB_0044a490
    XOR EDX,EDX                         ; 0044a466
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 0044a468
        ;   Label: LAB_0044a468
    IMUL ESI,EAX                        ; 0044a46e
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 0044a471
    ADD ESI,ESI                         ; 0044a477
    ADD ECX,ESI                         ; 0044a479
    MOV dword ptr [EDX + 0x1c2a38c],ECX ; 0044a47b | DAT_01c2a38c | DAT_01c2a390
    INC EAX                             ; 0044a481
    MOV EDI,dword ptr [EBX + 0x1cc4]    ; 0044a482
    ADD EDX,0x4                         ; 0044a488
    CMP EAX,EDI                         ; 0044a48b
    JL 0x0044a468                       ; 0044a48d
        ;   XREF to: 0044a468 (CONDITIONAL_JUMP)  ; LAB_0044a468
    NOP                                 ; 0044a48f
    PUSH 0x1                            ; 0044a490
        ;   Label: LAB_0044a490
    MOV EBP,dword ptr [0x0060b280]      ; 0044a492 | DAT_0060b280
    PUSH EBP                            ; 0044a498 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940 ; 0044a499
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0044a49e
    POP EBP                             ; 0044a4a1
        ;   Label: LAB_0044a4a1
    POP EDI                             ; 0044a4a2
    POP ESI                             ; 0044a4a3
    POP EBX                             ; 0044a4a4
    RET                                 ; 0044a4a5
    MOV ECX,0x5cf367                    ; 0044a4a6 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044a4a6
    MOV ESI,0x1b0                       ; 0044a4ab
    PUSH 0x5cf37a                       ; 0044a4b0 | = "CDemonLight::beginBackgroundScene - S..."
    MOV dword ptr [0x01d046a0],ECX      ; 0044a4b5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044a4bb | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044a4c1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044a4c6
    JMP 0x0044a3f5                      ; 0044a4c9
        ;   XREF to: 0044a3f5 (UNCONDITIONAL_JUMP)  ; LAB_0044a3f5

