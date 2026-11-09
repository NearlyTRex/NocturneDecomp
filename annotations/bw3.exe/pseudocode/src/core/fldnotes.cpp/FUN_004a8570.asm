; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a8570(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01549ac0
;   undefined4 DAT_01c6b5c0
;   undefined4 CAlphaBitmap_01d19cd8.field12_0xc
;   undefined4 CAlphaBitmap_01d19cd8.field16_0x10
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_alphabit.cpp_FUN_0040d8a0
;   engine_font.cpp_FUN_004b0a20
;   engine_font.cpp_FUN_004b30f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8570
        ;   Label: core_fldnotes.cpp_FUN_004a8570
    PUSH ESI                            ; 004a8571
    PUSH EDI                            ; 004a8572
    PUSH EBP                            ; 004a8573
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a8574
    PUSH -0x1                           ; 004a8578
    PUSH 0x0                            ; 004a857a
    MOV EDX,dword ptr [ESI + 0x4]       ; 004a857c
    PUSH EDX                            ; 004a857f
    MOV ECX,dword ptr [ESI]             ; 004a8580
    PUSH ECX                            ; 004a8582
    LEA EAX,[ESI + 0x1c]                ; 004a8583
    PUSH EAX                            ; 004a8586
    MOV EBX,dword ptr [ESI + 0x11c]     ; 004a8587
    PUSH EBX                            ; 004a858d
    CALL engine_font.cpp_FUN_004b0a20   ; 004a858e
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EDI,dword ptr [ESI + 0x18]      ; 004a8593
    ADD ESP,0x18                        ; 004a8596
    TEST EDI,EDI                        ; 004a8599
    JNZ 0x004a85a2                      ; 004a859b
        ;   XREF to: 004a85a2 (CONDITIONAL_JUMP)  ; LAB_004a85a2
    POP EBP                             ; 004a859d
    POP EDI                             ; 004a859e
    POP ESI                             ; 004a859f
    POP EBX                             ; 004a85a0
    RET                                 ; 004a85a1
    PUSH 0x78                           ; 004a85a2
        ;   Label: LAB_004a85a2
    MOV EBP,dword ptr [ESI + 0x11c]     ; 004a85a4
    PUSH EBP                            ; 004a85aa
    CALL engine_font.cpp_FUN_004b30f0   ; 004a85ab
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV EDI,dword ptr [ESI + 0x4]       ; 004a85b0
    MOV EDX,dword ptr [0x01549ac0]      ; 004a85b3 | DAT_01549ac0
    ADD EDI,EAX                         ; 004a85b9
    MOV EAX,dword ptr [ESI + 0x11c]     ; 004a85bb
    ADD ESP,0x8                         ; 004a85c1
    CMP EAX,EDX                         ; 004a85c4
    JNZ 0x004a8626                      ; 004a85c6
        ;   XREF to: 004a8626 (CONDITIONAL_JUMP)  ; LAB_004a8626
    MOV EDX,dword ptr [0x01d19ce4]      ; 004a85c8 | CAlphaBitmap_01d19cd8.field12_0xc
    MOV EBX,dword ptr [ESI + 0x8]       ; 004a85ce
    MOV ESI,dword ptr [ESI]             ; 004a85d1
    CMP EBX,EDX                         ; 004a85d3
    JLE 0x004a8600                      ; 004a85d5
        ;   XREF to: 004a8600 (CONDITIONAL_JUMP)  ; LAB_004a8600
    PUSH 0xffff                         ; 004a85d7
        ;   Label: LAB_004a85d7
    PUSH EDI                            ; 004a85dc
    PUSH ESI                            ; 004a85dd
    PUSH 0x1d19cd8                      ; 004a85de
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004a85e3
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV ECX,dword ptr [0x01d19ce4]      ; 004a85e8 | CAlphaBitmap_01d19cd8.field12_0xc
    ADD ESP,0x10                        ; 004a85ee
    SUB EBX,ECX                         ; 004a85f1
    ADD ESI,ECX                         ; 004a85f3
    CMP EBX,ECX                         ; 004a85f5
    JG 0x004a85d7                       ; 004a85f7
        ;   XREF to: 004a85d7 (CONDITIONAL_JUMP)  ; LAB_004a85d7
    LEA EAX,[EAX]                       ; 004a85f9
    NOP                                 ; 004a85ff
    MOV EAX,[0x01d19ce8]                ; 004a8600 | CAlphaBitmap_01d19cd8.field16_0x10
        ;   Label: LAB_004a8600
    PUSH 0xffff                         ; 004a8605
    DEC EAX                             ; 004a860a
    PUSH EAX                            ; 004a860b
    DEC EBX                             ; 004a860c
    PUSH EBX                            ; 004a860d
    PUSH 0x0                            ; 004a860e
    PUSH 0x0                            ; 004a8610
    PUSH EDI                            ; 004a8612
    PUSH ESI                            ; 004a8613
    PUSH 0x1d19cd8                      ; 004a8614
    CALL engine_alphabit.cpp_FUN_0040d8a0 ; 004a8619
        ;   XREF to: 0040d8a0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d8a0()
    ADD ESP,0x20                        ; 004a861e
    POP EBP                             ; 004a8621
    POP EDI                             ; 004a8622
    POP ESI                             ; 004a8623
    POP EBX                             ; 004a8624
    RET                                 ; 004a8625
    MOV EBX,dword ptr [ESI]             ; 004a8626
        ;   Label: LAB_004a8626
    ADD EBX,dword ptr [ESI + 0x8]       ; 004a8628
    LEA EAX,[EBX + -0x1]                ; 004a862b
    PUSH EAX                            ; 004a862e
    PUSH EDI                            ; 004a862f
    MOV EAX,dword ptr [ESI]             ; 004a8630
    XOR ECX,ECX                         ; 004a8632
    PUSH EAX                            ; 004a8634
    MOV dword ptr [0x01c6b5c0],ECX      ; 004a8635 | DAT_01c6b5c0
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 004a863b
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004a8640
    POP EBP                             ; 004a8643
    POP EDI                             ; 004a8644
    POP ESI                             ; 004a8645
    POP EBX                             ; 004a8646
    RET                                 ; 004a8647

