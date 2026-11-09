; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayPoly_FUN_0046ca20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ca20
        ;   Label: engine_drender.cpp_CDemonRenderer_renderOverlayPoly_FUN_0046ca20
    PUSH ESI                            ; 0046ca21
    PUSH EDI                            ; 0046ca22
    PUSH EBP                            ; 0046ca23
    SUB ESP,0x4                         ; 0046ca24
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046ca27
    CMP dword ptr [EBX + 0xc],0x0       ; 0046ca2b
    JNZ 0x0046cace                      ; 0046ca2f
        ;   XREF to: 0046cace (CONDITIONAL_JUMP)  ; LAB_0046cace
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046ca35
        ;   Label: LAB_0046ca35
    MOV ECX,0xffffffff                  ; 0046ca39
    XOR EDX,EDX                         ; 0046ca3e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046ca40
    MOV dword ptr [ESP],ECX             ; 0046ca43
    TEST ESI,ESI                        ; 0046ca46
    JLE 0x0046ca80                      ; 0046ca48
        ;   XREF to: 0046ca80 (CONDITIONAL_JUMP)  ; LAB_0046ca80
    XOR ECX,ECX                         ; 0046ca4a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046ca4c
        ;   Label: LAB_0046ca4c
    MOV dword ptr [ECX + 0x1bdd818],ESI ; 0046ca4f
    IMUL ESI,ESI,0x30                   ; 0046ca55
    MOV EDI,dword ptr [EBX]             ; 0046ca58
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046ca5a
    MOV EDI,dword ptr [ESP]             ; 0046ca5e
    ADD ECX,0x4                         ; 0046ca61
    AND EDI,ESI                         ; 0046ca64
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046ca66
    ADD EAX,0xc                         ; 0046ca6a
    INC EDX                             ; 0046ca6d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046ca6e
    MOV dword ptr [ESP],EDI             ; 0046ca71
    CMP EDX,EBP                         ; 0046ca74
    JL 0x0046ca4c                       ; 0046ca76
        ;   XREF to: 0046ca4c (CONDITIONAL_JUMP)  ; LAB_0046ca4c
    LEA EAX,[EAX]                       ; 0046ca78
    MOV EDX,EDX                         ; 0046ca7e
    TEST byte ptr [ESP + 0x3],0x80      ; 0046ca80
        ;   Label: LAB_0046ca80
    JZ 0x0046ca8d                       ; 0046ca85
        ;   XREF to: 0046ca8d (CONDITIONAL_JUMP)  ; LAB_0046ca8d
    TEST byte ptr [ESP],0x1f            ; 0046ca87
    JNZ 0x0046cac6                      ; 0046ca8b
        ;   XREF to: 0046cac6 (CONDITIONAL_JUMP)  ; LAB_0046cac6
    CMP dword ptr [EBX + 0x4],0x0       ; 0046ca8d
        ;   Label: LAB_0046ca8d
    JZ 0x0046cae7                       ; 0046ca91
        ;   XREF to: 0046cae7 (CONDITIONAL_JUMP)  ; LAB_0046cae7
    XOR ESI,ESI                         ; 0046ca93
    MOV ECX,0x46f9a6                    ; 0046ca95
    MOV dword ptr [0x01c6e2b4],ESI      ; 0046ca9a | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ESI      ; 0046caa0 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ECX      ; 0046caa6 | DAT_01c6b5cc
    LEA EAX,[EAX]                       ; 0046caac
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046cab0
        ;   Label: LAB_0046cab0
    PUSH 0x1bdd818                      ; 0046cab4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046cab9
    PUSH EDX                            ; 0046cabc
    PUSH EBX                            ; 0046cabd
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046cabe
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046cac3
    ADD ESP,0x4                         ; 0046cac6
        ;   Label: LAB_0046cac6
    POP EBP                             ; 0046cac9
    POP EDI                             ; 0046caca
    POP ESI                             ; 0046cacb
    POP EBX                             ; 0046cacc
    RET                                 ; 0046cacd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046cace
        ;   Label: LAB_0046cace
    ADD EAX,0x8                         ; 0046cad2
    PUSH EAX                            ; 0046cad5
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046cad6
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046cadb
    TEST EAX,EAX                        ; 0046cade
    JZ 0x0046cac6                       ; 0046cae0
        ;   XREF to: 0046cac6 (CONDITIONAL_JUMP)  ; LAB_0046cac6
    JMP 0x0046ca35                      ; 0046cae2
        ;   XREF to: 0046ca35 (UNCONDITIONAL_JUMP)  ; LAB_0046ca35
    CMP dword ptr [0x005fba20],0x20     ; 0046cae7 | DAT_005fba20
        ;   Label: LAB_0046cae7
    JNZ 0x0046cb56                      ; 0046caee
        ;   XREF to: 0046cb56 (CONDITIONAL_JUMP)  ; LAB_0046cb56
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046caf0 | DAT_01c6b5cc
    MOV EDI,0x327                       ; 0046cafa
        ;   Label: LAB_0046cafa
    XOR EBP,EBP                         ; 0046caff
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046cb01
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046cb04 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046cb0a | DAT_01c6e2b4
    TEST EAX,EAX                        ; 0046cb10
    JNZ 0x0046cab0                      ; 0046cb12
        ;   XREF to: 0046cab0 (CONDITIONAL_JUMP)  ; LAB_0046cab0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046cb14
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046cb18
    XOR ECX,ECX                         ; 0046cb1b
    TEST EDX,EDX                        ; 0046cb1d
    JLE 0x0046cab0                      ; 0046cb1f
        ;   XREF to: 0046cab0 (CONDITIONAL_JUMP)  ; LAB_0046cab0
    XOR EDX,EDX                         ; 0046cb21
    MOV ESI,dword ptr [EDX + 0x1bdd818] ; 0046cb23
        ;   Label: LAB_0046cb23
    IMUL ESI,ESI,0x30                   ; 0046cb29
    MOV EDI,dword ptr [EBX]             ; 0046cb2c
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046cb2e
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046cb31
    MOV EDI,dword ptr [EBX]             ; 0046cb35
    ADD EDI,ESI                         ; 0046cb37
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046cb39
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046cb3c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046cb3f
    ADD EAX,0xc                         ; 0046cb43
    INC ECX                             ; 0046cb46
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046cb47
    ADD EDX,0x4                         ; 0046cb4a
    CMP ECX,EBP                         ; 0046cb4d
    JL 0x0046cb23                       ; 0046cb4f
        ;   XREF to: 0046cb23 (CONDITIONAL_JUMP)  ; LAB_0046cb23
    JMP 0x0046cab0                      ; 0046cb51
        ;   XREF to: 0046cab0 (UNCONDITIONAL_JUMP)  ; LAB_0046cab0
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046cb56 | DAT_01c6b5cc
        ;   Label: LAB_0046cb56
    JMP 0x0046cafa                      ; 0046cb60
        ;   XREF to: 0046cafa (UNCONDITIONAL_JUMP)  ; LAB_0046cafa

