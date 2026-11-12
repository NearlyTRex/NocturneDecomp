; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_00481cb0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00519e40 at 00519fce
;
; Referenced Globals:
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
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

    PUSH EBX                            ; 00481cb0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_00481cb0
    PUSH ESI                            ; 00481cb1
    PUSH EDI                            ; 00481cb2
    PUSH EBP                            ; 00481cb3
    SUB ESP,0x8                         ; 00481cb4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00481cb7
    MOV EBP,dword ptr [ESP + 0x20]      ; 00481cbb
    CMP dword ptr [EDI + 0xc],0x0       ; 00481cbf
    JNZ 0x00481d72                      ; 00481cc3
        ;   XREF to: 00481d72 (CONDITIONAL_JUMP)  ; LAB_00481d72
    MOV EBX,0xffffffff                  ; 00481cc9
        ;   Label: LAB_00481cc9
    MOV ESI,dword ptr [EBP + 0x4]       ; 00481cce
    XOR ECX,ECX                         ; 00481cd1
    XOR EDX,EDX                         ; 00481cd3
    MOV dword ptr [ESP + 0x4],EBX       ; 00481cd5
    MOV dword ptr [ESP],ECX             ; 00481cd9
    TEST ESI,ESI                        ; 00481cdc
    JLE 0x00481d16                      ; 00481cde
        ;   XREF to: 00481d16 (CONDITIONAL_JUMP)  ; LAB_00481d16
    MOV ECX,EBP                         ; 00481ce0
    XOR EAX,EAX                         ; 00481ce2
    MOV EBX,dword ptr [ECX + 0x18]      ; 00481ce4
        ;   Label: LAB_00481ce4
    MOV dword ptr [EAX + 0x1bc1240],EBX ; 00481ce7 | DAT_01bc1240 | DAT_01bc1244
    IMUL ESI,EBX,0x30                   ; 00481ced
    MOV EBX,dword ptr [EDI]             ; 00481cf0
    ADD EBX,ESI                         ; 00481cf2
    MOV ESI,dword ptr [EBX + 0x10]      ; 00481cf4
    AND dword ptr [ESP + 0x4],ESI       ; 00481cf7
    TEST byte ptr [EBX + 0x13],0x80     ; 00481cfb
    JZ 0x00481d08                       ; 00481cff
        ;   XREF to: 00481d08 (CONDITIONAL_JUMP)  ; LAB_00481d08
    MOV dword ptr [ESP],0x1             ; 00481d01
    ADD EAX,0x4                         ; 00481d08
        ;   Label: LAB_00481d08
    INC EDX                             ; 00481d0b
    MOV EBX,dword ptr [EBP + 0x4]       ; 00481d0c
    ADD ECX,0xc                         ; 00481d0f
    CMP EDX,EBX                         ; 00481d12
    JL 0x00481ce4                       ; 00481d14
        ;   XREF to: 00481ce4 (CONDITIONAL_JUMP)  ; LAB_00481ce4
    TEST byte ptr [ESP + 0x7],0x80      ; 00481d16
        ;   Label: LAB_00481d16
    JZ 0x00481d24                       ; 00481d1b
        ;   XREF to: 00481d24 (CONDITIONAL_JUMP)  ; LAB_00481d24
    TEST byte ptr [ESP + 0x4],0x1f      ; 00481d1d
    JNZ 0x00481d6a                      ; 00481d22
        ;   XREF to: 00481d6a (CONDITIONAL_JUMP)  ; LAB_00481d6a
    MOV EBX,dword ptr [EDI + 0x10]      ; 00481d24
        ;   Label: LAB_00481d24
    TEST EBX,EBX                        ; 00481d27
    JZ 0x00481d37                       ; 00481d29
        ;   XREF to: 00481d37 (CONDITIONAL_JUMP)  ; LAB_00481d37
    CMP dword ptr [EDI + 0x4],0x0       ; 00481d2b
    JZ 0x00481d37                       ; 00481d2f
        ;   XREF to: 00481d37 (CONDITIONAL_JUMP)  ; LAB_00481d37
    MOV EAX,dword ptr [ESP]             ; 00481d31
    MOV dword ptr [EDI + 0x10],EAX      ; 00481d34
    CMP dword ptr [EDI + 0x4],0x0       ; 00481d37
        ;   Label: LAB_00481d37
    JZ 0x00481d87                       ; 00481d3b
        ;   XREF to: 00481d87 (CONDITIONAL_JUMP)  ; LAB_00481d87
    XOR EDX,EDX                         ; 00481d3d
    MOV EAX,0x486e74                    ; 00481d3f
    MOV dword ptr [0x01c51d14],EDX      ; 00481d44 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 00481d4a | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 00481d50 | DAT_01c4f02c
    PUSH 0x1bc1240                      ; 00481d55 | DAT_01bc1240
        ;   Label: LAB_00481d55
    MOV ESI,dword ptr [EBP + 0x4]       ; 00481d5a
    PUSH ESI                            ; 00481d5d
    PUSH EDI                            ; 00481d5e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00481d5f
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00481d64
    MOV dword ptr [EDI + 0x10],EBX      ; 00481d67
    ADD ESP,0x8                         ; 00481d6a
        ;   Label: LAB_00481d6a
    POP EBP                             ; 00481d6d
    POP EDI                             ; 00481d6e
    POP ESI                             ; 00481d6f
    POP EBX                             ; 00481d70
    RET                                 ; 00481d71
    LEA EAX,[EBP + 0x8]                 ; 00481d72
        ;   Label: LAB_00481d72
    PUSH EAX                            ; 00481d75
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00481d76
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00481d7b
    TEST EAX,EAX                        ; 00481d7e
    JZ 0x00481d6a                       ; 00481d80
        ;   XREF to: 00481d6a (CONDITIONAL_JUMP)  ; LAB_00481d6a
    JMP 0x00481cc9                      ; 00481d82
        ;   XREF to: 00481cc9 (UNCONDITIONAL_JUMP)  ; LAB_00481cc9
    MOV ECX,0x90                        ; 00481d87
        ;   Label: LAB_00481d87
    MOV ESI,0x6                         ; 00481d8c
    MOV EDX,0x486ff2                    ; 00481d91
    MOV dword ptr [0x01c51d14],ECX      ; 00481d96 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ESI      ; 00481d9c | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDX      ; 00481da2 | DAT_01c4f02c
    JMP 0x00481d55                      ; 00481da8
        ;   XREF to: 00481d55 (UNCONDITIONAL_JUMP)  ; LAB_00481d55

