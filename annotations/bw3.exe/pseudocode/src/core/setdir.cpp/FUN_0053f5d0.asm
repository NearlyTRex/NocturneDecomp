; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setdir_cpp_FUN_0053f5d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;   engine_drender.cpp_FUN_0046b470
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0053f5d0
        ;   Label: core_setdir.cpp_FUN_0053f5d0
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f5d2 | DAT_005f2afc
    PUSH EDX                            ; 0053f5d8
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0053f5d9
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053f5de
    TEST byte ptr [ESP + 0xa3],0x80     ; 0053f5e1
    SETNZ AL                            ; 0053f5e9
    AND EAX,0xff                        ; 0053f5ec
    PUSH EAX                            ; 0053f5f1
    MOV ECX,dword ptr [0x005f2afc]      ; 0053f5f2 | DAT_005f2afc
    PUSH ECX                            ; 0053f5f8
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0053f5f9
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053f5fe
    XOR EBX,EBX                         ; 0053f601
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0053f603
    MOV dword ptr [ESP + 0xa4],EBX      ; 0053f60a
    TEST ESI,ESI                        ; 0053f611
    JLE 0x0053f650                      ; 0053f613
        ;   XREF to: 0053f650 (CONDITIONAL_JUMP)  ; LAB_0053f650
    SHL ESI,0x2                         ; 0053f615
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x2c] ; 0053f618
        ;   Label: LAB_0053f618
    PUSH EDI                            ; 0053f61c
    MOV EAX,[0x005f2afc]                ; 0053f61d | DAT_005f2afc
    PUSH EAX                            ; 0053f622
    CALL engine_drender.cpp_FUN_0046b470 ; 0053f623
        ;   XREF to: 0046b470 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_FUN_0046b470(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0053f628
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0053f62b
    ADD EDX,EAX                         ; 0053f632
    ADD EBX,0x4                         ; 0053f634
    MOV dword ptr [ESP + 0xa4],EDX      ; 0053f637
    CMP EBX,ESI                         ; 0053f63e
    JL 0x0053f618                       ; 0053f640
        ;   XREF to: 0053f618 (CONDITIONAL_JUMP)  ; LAB_0053f618
    LEA EAX,[EAX]                       ; 0053f642
    LEA EDX,[EDX]                       ; 0053f648
    MOV EAX,EAX                         ; 0053f64e
    MOV EAX,[0x005fe9dc]                ; 0053f650 | g_CGamePtr
        ;   Label: LAB_0053f650
    CMP dword ptr [EAX + 0x20c],0x0     ; 0053f655
    JZ 0x0053f6e0                       ; 0053f65c
        ;   XREF to: 0053f6e0 (CONDITIONAL_JUMP)  ; LAB_0053f6e0
    MOV EDX,dword ptr [EBP + 0x20]      ; 0053f662
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053f665
    SUB EAX,EDX                         ; 0053f66c
    MOV EDX,0x241351c                   ; 0053f66e
    SHL EAX,0xc                         ; 0053f673
    XOR EBX,EBX                         ; 0053f676
    ADD EDX,EAX                         ; 0053f678
    MOV ECX,0x100                       ; 0053f67a
        ;   Label: LAB_0053f67a
    MOV EDI,EDX                         ; 0053f67f
    MOV ESI,dword ptr [EBX + 0x1c60dac] ; 0053f681
    ADD EBX,0x4                         ; 0053f687
    PUSH EDI                            ; 0053f68a
    MOV EAX,ECX                         ; 0053f68b
    SHR ECX,0x2                         ; 0053f68d
    MOVSD.REP ES:EDI,ESI                ; 0053f690
    MOV CL,AL                           ; 0053f692
    AND CL,0x3                          ; 0053f694
    MOVSB.REP ES:EDI,ESI                ; 0053f697
    POP EDI                             ; 0053f699
    MOV dword ptr [EBX + 0x1c60da8],EDX ; 0053f69a
    ADD EDX,0x100                       ; 0053f6a0
    CMP EBX,0xc0                        ; 0053f6a6
    JNZ 0x0053f67a                      ; 0053f6ac
        ;   XREF to: 0053f67a (CONDITIONAL_JUMP)  ; LAB_0053f67a
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0053f6ae
    XOR EBX,EBX                         ; 0053f6b5
    TEST ESI,ESI                        ; 0053f6b7
    JLE 0x0053f6e0                      ; 0053f6b9
        ;   XREF to: 0053f6e0 (CONDITIONAL_JUMP)  ; LAB_0053f6e0
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0053f6bb
    PUSH ESI                            ; 0053f6be
        ;   Label: LAB_0053f6be
    MOV EDI,dword ptr [0x005f2afc]      ; 0053f6bf | DAT_005f2afc
    PUSH EDI                            ; 0053f6c5
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 0053f6c6
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0053f6cb
    INC EBX                             ; 0053f6ce
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0053f6cf
    ADD ESI,0x48                        ; 0053f6d6
    CMP EBX,EAX                         ; 0053f6d9
    JL 0x0053f6be                       ; 0053f6db
        ;   XREF to: 0053f6be (CONDITIONAL_JUMP)  ; LAB_0053f6be
    LEA EAX,[EAX]                       ; 0053f6dd
    PUSH 0x1                            ; 0053f6e0
        ;   Label: LAB_0053f6e0
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f6e2 | DAT_005f2afc
    PUSH EDX                            ; 0053f6e8
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0053f6e9
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053f6ee
    PUSH 0x0                            ; 0053f6f1
    MOV ECX,dword ptr [0x005f2afc]      ; 0053f6f3 | DAT_005f2afc
    PUSH ECX                            ; 0053f6f9
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0053f6fa
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053f6ff
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0053f702
    MOV dword ptr [ESP + 0xd4],EAX      ; 0053f709
    FILD dword ptr [ESP + 0xd4]         ; 0053f710
    FMUL float ptr [ESP]                ; 0053f717
    FSTP float ptr [ESP + 0x94]         ; 0053f71a
    MOV EAX,dword ptr [ESP + 0x94]      ; 0053f721
    MOV ESP,EBP                         ; 0053f728
    POP EBP                             ; 0053f72a
    POP EDI                             ; 0053f72b
    POP ESI                             ; 0053f72c
    POP EBX                             ; 0053f72d
    RET                                 ; 0053f72e

