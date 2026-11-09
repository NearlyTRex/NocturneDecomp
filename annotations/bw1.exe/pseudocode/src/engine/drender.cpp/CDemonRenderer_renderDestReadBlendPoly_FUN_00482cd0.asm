; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00554ac0 at 00554d22
;   core_set.cpp_FUN_00554d30 at 0055516b
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
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

    PUSH EBX                            ; 00482cd0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_00482cd0
    PUSH ESI                            ; 00482cd1
    PUSH EDI                            ; 00482cd2
    PUSH EBP                            ; 00482cd3
    SUB ESP,0x4                         ; 00482cd4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00482cd7
    CMP dword ptr [EBX + 0xc],0x0       ; 00482cdb
    JNZ 0x00482d8e                      ; 00482cdf
        ;   XREF to: 00482d8e (CONDITIONAL_JUMP)  ; LAB_00482d8e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482ce5
        ;   Label: LAB_00482ce5
    MOV ECX,0xffffffff                  ; 00482ce9
    XOR EDX,EDX                         ; 00482cee
    MOV ESI,dword ptr [EAX + 0x4]       ; 00482cf0
    MOV dword ptr [ESP],ECX             ; 00482cf3
    TEST ESI,ESI                        ; 00482cf6
    JLE 0x00482d30                      ; 00482cf8
        ;   XREF to: 00482d30 (CONDITIONAL_JUMP)  ; LAB_00482d30
    XOR ECX,ECX                         ; 00482cfa
    MOV ESI,dword ptr [EAX + 0x18]      ; 00482cfc
        ;   Label: LAB_00482cfc
    MOV dword ptr [ECX + 0x1bc1240],ESI ; 00482cff | DAT_01bc1240 | DAT_01bc1244
    IMUL ESI,ESI,0x30                   ; 00482d05
    MOV EDI,dword ptr [EBX]             ; 00482d08
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 00482d0a
    MOV EDI,dword ptr [ESP]             ; 00482d0e
    ADD ECX,0x4                         ; 00482d11
    AND EDI,ESI                         ; 00482d14
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482d16
    ADD EAX,0xc                         ; 00482d1a
    INC EDX                             ; 00482d1d
    MOV EBP,dword ptr [ESI + 0x4]       ; 00482d1e
    MOV dword ptr [ESP],EDI             ; 00482d21
    CMP EDX,EBP                         ; 00482d24
    JL 0x00482cfc                       ; 00482d26
        ;   XREF to: 00482cfc (CONDITIONAL_JUMP)  ; LAB_00482cfc
    LEA EAX,[EAX]                       ; 00482d28
    MOV EDX,EDX                         ; 00482d2e
    TEST byte ptr [ESP + 0x3],0x80      ; 00482d30
        ;   Label: LAB_00482d30
    JZ 0x00482d3d                       ; 00482d35
        ;   XREF to: 00482d3d (CONDITIONAL_JUMP)  ; LAB_00482d3d
    TEST byte ptr [ESP],0x1f            ; 00482d37
    JNZ 0x00482d86                      ; 00482d3b
        ;   XREF to: 00482d86 (CONDITIONAL_JUMP)  ; LAB_00482d86
    CMP dword ptr [EBX + 0x4],0x0       ; 00482d3d
        ;   Label: LAB_00482d3d
    JZ 0x00482da7                       ; 00482d41
        ;   XREF to: 00482da7 (CONDITIONAL_JUMP)  ; LAB_00482da7
    MOV ESI,0x1                         ; 00482d43
    MOV ECX,0x486ed7                    ; 00482d48
    XOR EDI,EDI                         ; 00482d4d
    MOV dword ptr [0x01c51d14],ESI      ; 00482d4f | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 00482d55 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ECX      ; 00482d5b | DAT_01c4f02c
    LEA EAX,[EAX]                       ; 00482d61
    LEA EDX,[EDX]                       ; 00482d67
    LEA EAX,[EAX]                       ; 00482d6d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482d70
        ;   Label: LAB_00482d70
    PUSH 0x1bc1240                      ; 00482d74 | DAT_01bc1240
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482d79
    PUSH EDX                            ; 00482d7c
    PUSH EBX                            ; 00482d7d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482d7e
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482d83
    ADD ESP,0x4                         ; 00482d86
        ;   Label: LAB_00482d86
    POP EBP                             ; 00482d89
    POP EDI                             ; 00482d8a
    POP ESI                             ; 00482d8b
    POP EBX                             ; 00482d8c
    RET                                 ; 00482d8d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482d8e
        ;   Label: LAB_00482d8e
    ADD EAX,0x8                         ; 00482d92
    PUSH EAX                            ; 00482d95
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482d96
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00482d9b
    TEST EAX,EAX                        ; 00482d9e
    JZ 0x00482d86                       ; 00482da0
        ;   XREF to: 00482d86 (CONDITIONAL_JUMP)  ; LAB_00482d86
    JMP 0x00482ce5                      ; 00482da2
        ;   XREF to: 00482ce5 (UNCONDITIONAL_JUMP)  ; LAB_00482ce5
    CMP dword ptr [0x0061b4a0],0x20     ; 00482da7 | DAT_0061b4a0
        ;   Label: LAB_00482da7
    JNZ 0x00482e19                      ; 00482dae
        ;   XREF to: 00482e19 (CONDITIONAL_JUMP)  ; LAB_00482e19
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00482db0 | DAT_01c4f02c
    MOV EBP,0x6                         ; 00482dba
        ;   Label: LAB_00482dba
    MOV EDI,0x2e7                       ; 00482dbf
    MOV EAX,dword ptr [EBX + 0x20]      ; 00482dc4
    MOV dword ptr [0x01c51d18],EBP      ; 00482dc7 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDI      ; 00482dcd | DAT_01c51d14
    TEST EAX,EAX                        ; 00482dd3
    JNZ 0x00482d70                      ; 00482dd5
        ;   XREF to: 00482d70 (CONDITIONAL_JUMP)  ; LAB_00482d70
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482dd7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482ddb
    XOR ECX,ECX                         ; 00482dde
    TEST EDX,EDX                        ; 00482de0
    JLE 0x00482d70                      ; 00482de2
        ;   XREF to: 00482d70 (CONDITIONAL_JUMP)  ; LAB_00482d70
    XOR EDX,EDX                         ; 00482de4
    MOV ESI,dword ptr [EDX + 0x1bc1240] ; 00482de6 | DAT_01bc1240 | DAT_01bc1244
        ;   Label: LAB_00482de6
    IMUL ESI,ESI,0x30                   ; 00482dec
    MOV EDI,dword ptr [EBX]             ; 00482def
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00482df1
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00482df4
    MOV EDI,dword ptr [EBX]             ; 00482df8
    ADD EDI,ESI                         ; 00482dfa
    MOV ESI,dword ptr [EAX + 0x20]      ; 00482dfc
    MOV dword ptr [EDI + 0x1c],ESI      ; 00482dff
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482e02
    ADD EAX,0xc                         ; 00482e06
    INC ECX                             ; 00482e09
    MOV EBP,dword ptr [ESI + 0x4]       ; 00482e0a
    ADD EDX,0x4                         ; 00482e0d
    CMP ECX,EBP                         ; 00482e10
    JL 0x00482de6                       ; 00482e12
        ;   XREF to: 00482de6 (CONDITIONAL_JUMP)  ; LAB_00482de6
    JMP 0x00482d70                      ; 00482e14
        ;   XREF to: 00482d70 (UNCONDITIONAL_JUMP)  ; LAB_00482d70
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482e19 | DAT_01c4f02c
        ;   Label: LAB_00482e19
    JMP 0x00482dba                      ; 00482e23
        ;   XREF to: 00482dba (UNCONDITIONAL_JUMP)  ; LAB_00482dba

