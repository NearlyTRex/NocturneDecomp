; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_004829b0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004829b0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_004829b0
    PUSH ESI                            ; 004829b1
    PUSH EDI                            ; 004829b2
    PUSH EBP                            ; 004829b3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004829b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004829b8
    CMP dword ptr [EBP + 0xc],0x0       ; 004829bc
    JNZ 0x00482a36                      ; 004829c0
        ;   XREF to: 00482a36 (CONDITIONAL_JUMP)  ; LAB_00482a36
    MOV ECX,0xffffffff                  ; 004829c6
        ;   Label: LAB_004829c6
    MOV EBX,dword ptr [ESI + 0x4]       ; 004829cb
    XOR EDX,EDX                         ; 004829ce
    TEST EBX,EBX                        ; 004829d0
    JLE 0x004829f0                      ; 004829d2
        ;   XREF to: 004829f0 (CONDITIONAL_JUMP)  ; LAB_004829f0
    MOV EAX,ESI                         ; 004829d4
    MOV EDI,dword ptr [EBP]             ; 004829d6
    MOV EBX,dword ptr [EAX + 0x18]      ; 004829d9
        ;   Label: LAB_004829d9
    IMUL EBX,EBX,0x30                   ; 004829dc
    INC EDX                             ; 004829df
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 004829e0
    MOV EBX,dword ptr [ESI + 0x4]       ; 004829e4
    ADD EAX,0x4                         ; 004829e7
    CMP EDX,EBX                         ; 004829ea
    JL 0x004829d9                       ; 004829ec
        ;   XREF to: 004829d9 (CONDITIONAL_JUMP)  ; LAB_004829d9
    MOV EAX,EAX                         ; 004829ee
    TEST ECX,0x80000000                 ; 004829f0
        ;   Label: LAB_004829f0
    JZ 0x004829fd                       ; 004829f6
        ;   XREF to: 004829fd (CONDITIONAL_JUMP)  ; LAB_004829fd
    TEST CL,0x1f                        ; 004829f8
    JNZ 0x00482a31                      ; 004829fb
        ;   XREF to: 00482a31 (CONDITIONAL_JUMP)  ; LAB_00482a31
    CMP dword ptr [EBP + 0x4],0x0       ; 004829fd
        ;   Label: LAB_004829fd
    JZ 0x00482a4b                       ; 00482a01
        ;   XREF to: 00482a4b (CONDITIONAL_JUMP)  ; LAB_00482a4b
    MOV EDX,0x1                         ; 00482a03
    MOV EAX,0x486ed7                    ; 00482a08
    XOR ECX,ECX                         ; 00482a0d
    MOV dword ptr [0x01c51d14],EDX      ; 00482a0f | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 00482a15 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 00482a1b | DAT_01c4f02c
    LEA EAX,[ESI + 0x18]                ; 00482a20
        ;   Label: LAB_00482a20
    PUSH EAX                            ; 00482a23
    MOV EBX,dword ptr [ESI + 0x4]       ; 00482a24
    PUSH EBX                            ; 00482a27
    PUSH EBP                            ; 00482a28
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482a29
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482a2e
    POP EBP                             ; 00482a31
        ;   Label: LAB_00482a31
    POP EDI                             ; 00482a32
    POP ESI                             ; 00482a33
    POP EBX                             ; 00482a34
    RET                                 ; 00482a35
    LEA EAX,[ESI + 0x8]                 ; 00482a36
        ;   Label: LAB_00482a36
    PUSH EAX                            ; 00482a39
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482a3a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00482a3f
    TEST EAX,EAX                        ; 00482a42
    JZ 0x00482a31                       ; 00482a44
        ;   XREF to: 00482a31 (CONDITIONAL_JUMP)  ; LAB_00482a31
    JMP 0x004829c6                      ; 00482a46
        ;   XREF to: 004829c6 (UNCONDITIONAL_JUMP)  ; LAB_004829c6
    CMP dword ptr [0x0061b4a0],0x20     ; 00482a4b | DAT_0061b4a0
        ;   Label: LAB_00482a4b
    JNZ 0x00482a76                      ; 00482a52
        ;   XREF to: 00482a76 (CONDITIONAL_JUMP)  ; LAB_00482a76
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00482a54 | DAT_01c4f02c
    MOV EDI,0x6                         ; 00482a5e
        ;   Label: LAB_00482a5e
    MOV EBX,0x3e7                       ; 00482a63
    MOV dword ptr [0x01c51d18],EDI      ; 00482a68 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EBX      ; 00482a6e | DAT_01c51d14
    JMP 0x00482a20                      ; 00482a74
        ;   XREF to: 00482a20 (UNCONDITIONAL_JUMP)  ; LAB_00482a20
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482a76 | DAT_01c4f02c
        ;   Label: LAB_00482a76
    JMP 0x00482a5e                      ; 00482a80
        ;   XREF to: 00482a5e (UNCONDITIONAL_JUMP)  ; LAB_00482a5e

