; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0(CComplexPolygon *this_ptr)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_superopt.cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20 at 005c7d76
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_superopt.cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7dc0
        ;   Label: shape_superopt.cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0
    PUSH ESI                            ; 005c7dc1
    PUSH EDI                            ; 005c7dc2
    PUSH EBP                            ; 005c7dc3
    SUB ESP,0x28                        ; 005c7dc4
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005c7dc7
    MOV EDX,0x1                         ; 005c7dcb
        ;   Label: LAB_005c7dcb
    MOV EAX,dword ptr [EDI + 0x30]      ; 005c7dd0
    MOV EBX,dword ptr [EDI + 0x2c]      ; 005c7dd3
    XOR ECX,ECX                         ; 005c7dd6
    MOV dword ptr [ESP + 0x8],EAX       ; 005c7dd8
    MOV dword ptr [ESP + 0xc],ECX       ; 005c7ddc
    MOV dword ptr [ESP + 0x14],EDX      ; 005c7de0
    TEST EBX,EBX                        ; 005c7de4
    JBE 0x005c7e00                      ; 005c7de6
        ;   XREF to: 005c7e00 (CONDITIONAL_JUMP)  ; LAB_005c7e00
    ADD EAX,0x10                        ; 005c7de8
    MOV dword ptr [ESP],EAX             ; 005c7deb
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c7dee
    ADD EAX,0x28                        ; 005c7df2
    MOV dword ptr [ESP + 0x4],EAX       ; 005c7df5
    CMP dword ptr [ESP + 0x14],0x0      ; 005c7df9
        ;   Label: LAB_005c7df9
    JNZ 0x005c7e0f                      ; 005c7dfe
        ;   XREF to: 005c7e0f (CONDITIONAL_JUMP)  ; LAB_005c7e0f
    CMP dword ptr [ESP + 0x14],0x0      ; 005c7e00
        ;   Label: LAB_005c7e00
    JZ 0x005c7dcb                       ; 005c7e05
        ;   XREF to: 005c7dcb (CONDITIONAL_JUMP)  ; LAB_005c7dcb
    ADD ESP,0x28                        ; 005c7e07
    POP EBP                             ; 005c7e0a
    POP EDI                             ; 005c7e0b
    POP ESI                             ; 005c7e0c
    POP EBX                             ; 005c7e0d
    RET                                 ; 005c7e0e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c7e0f
        ;   Label: LAB_005c7e0f
    INC EAX                             ; 005c7e13
    MOV ESI,dword ptr [EDI + 0x2c]      ; 005c7e14
    MOV dword ptr [ESP + 0x20],EAX      ; 005c7e17
    CMP EAX,ESI                         ; 005c7e1b
    JNC 0x005c7f18                      ; 005c7e1d
        ;   XREF to: 005c7f18 (CONDITIONAL_JUMP)  ; LAB_005c7f18
    IMUL EDX,dword ptr [ESP + 0xc],0x60 ; 005c7e23
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c7e28
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c7e2c
    MOV dword ptr [ESP + 0x24],EAX      ; 005c7e30
    IMUL EAX,ESI,0x60                   ; 005c7e34
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c7e37
    LEA ESI,[EAX + 0x10]                ; 005c7e3b
    ADD ESI,ECX                         ; 005c7e3e
    LEA EBX,[ECX + EAX*0x1]             ; 005c7e40
    ADD EAX,0x60                        ; 005c7e43
    ADD EAX,ECX                         ; 005c7e46
    MOV dword ptr [ESP + 0x18],EAX      ; 005c7e48
    LEA EAX,[ECX + EDX*0x1]             ; 005c7e4c
    MOV dword ptr [ESP + 0x10],EAX      ; 005c7e4f
    ADD EAX,0x28                        ; 005c7e53
    MOV EBP,dword ptr [ESP]             ; 005c7e56
    MOV dword ptr [ESP + 0x1c],EAX      ; 005c7e59
    CMP dword ptr [ESP + 0x14],0x0      ; 005c7e5d
        ;   Label: LAB_005c7e5d
    JZ 0x005c7f18                       ; 005c7e62
        ;   XREF to: 005c7f18 (CONDITIONAL_JUMP)  ; LAB_005c7f18
    PUSH EBX                            ; 005c7e68
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c7e69
    PUSH EDX                            ; 005c7e6d
    PUSH EDI                            ; 005c7e6e
    CALL shape_superopt.cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0 ; 005c7e6f
        ;   XREF to: 005c7fb0 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0(CComplexPolygon * this_ptr, SExpandedEdge * edge_a, SExpandedEdge * edge_b)
    ADD ESP,0xc                         ; 005c7e74
    TEST EAX,EAX                        ; 005c7e77
    JZ 0x005c7ef3                       ; 005c7e79
        ;   XREF to: 005c7ef3 (CONDITIONAL_JUMP)  ; LAB_005c7ef3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c7e7b
    LEA EDX,[EBX + 0x10]                ; 005c7e7f
    FLD double ptr [EAX]                ; 005c7e82
    FCOMP double ptr [EDX]              ; 005c7e84
    FNSTSW AX                           ; 005c7e86
    SAHF                                ; 005c7e88
    JZ 0x005c7f45                       ; 005c7e89
        ;   XREF to: 005c7f45 (CONDITIONAL_JUMP)  ; LAB_005c7f45
    MOV EAX,dword ptr [ESI]             ; 005c7e8f
        ;   Label: LAB_005c7e8f
    MOV dword ptr [EBP],EAX             ; 005c7e91
    MOV EAX,dword ptr [ESI + 0x4]       ; 005c7e94
    MOV dword ptr [EBP + 0x4],EAX       ; 005c7e97
    MOV EAX,dword ptr [ESI + 0x8]       ; 005c7e9a
    MOV dword ptr [EBP + 0x8],EAX       ; 005c7e9d
    MOV EAX,dword ptr [ESI + 0xc]       ; 005c7ea0
    MOV dword ptr [EBP + 0xc],EAX       ; 005c7ea3
    MOV EAX,dword ptr [ESI + 0x10]      ; 005c7ea6
    MOV dword ptr [EBP + 0x10],EAX      ; 005c7ea9
    MOV EAX,dword ptr [ESI + 0x14]      ; 005c7eac
    MOV dword ptr [EBP + 0x14],EAX      ; 005c7eaf
    MOV EAX,dword ptr [ESI + 0x30]      ; 005c7eb2
    MOV dword ptr [EBP + 0x30],EAX      ; 005c7eb5
    MOV EAX,dword ptr [ESI + 0x34]      ; 005c7eb8
    MOV dword ptr [EBP + 0x34],EAX      ; 005c7ebb
    MOV EAX,dword ptr [ESI + 0x38]      ; 005c7ebe
    MOV dword ptr [EBP + 0x38],EAX      ; 005c7ec1
    MOV EAX,dword ptr [ESI + 0x3c]      ; 005c7ec4
    MOV dword ptr [EBP + 0x3c],EAX      ; 005c7ec7
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c7eca
        ;   Label: LAB_005c7eca
    MOV EAX,dword ptr [EDI + 0x2c]      ; 005c7ece
    SUB EAX,ECX                         ; 005c7ed1
    DEC EAX                             ; 005c7ed3
    IMUL EAX,EAX,0x60                   ; 005c7ed4
    PUSH EAX                            ; 005c7ed7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c7ed8
    PUSH EAX                            ; 005c7edc
    PUSH EBX                            ; 005c7edd
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005c7ede
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005c7ee3
    MOV ECX,dword ptr [EDI + 0x2c]      ; 005c7ee6
    XOR EDX,EDX                         ; 005c7ee9
    DEC ECX                             ; 005c7eeb
    MOV dword ptr [ESP + 0x14],EDX      ; 005c7eec
    MOV dword ptr [EDI + 0x2c],ECX      ; 005c7ef0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c7ef3
        ;   Label: LAB_005c7ef3
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c7ef7
    ADD ESI,0x60                        ; 005c7efb
    ADD EBX,0x60                        ; 005c7efe
    MOV ECX,dword ptr [EDI + 0x2c]      ; 005c7f01
    ADD EAX,0x60                        ; 005c7f04
    INC EDX                             ; 005c7f07
    MOV dword ptr [ESP + 0x18],EAX      ; 005c7f08
    MOV dword ptr [ESP + 0x20],EDX      ; 005c7f0c
    CMP EDX,ECX                         ; 005c7f10
    JC 0x005c7e5d                       ; 005c7f12
        ;   XREF to: 005c7e5d (CONDITIONAL_JUMP)  ; LAB_005c7e5d
    MOV ESI,dword ptr [ESP]             ; 005c7f18
        ;   Label: LAB_005c7f18
    MOV EBP,dword ptr [ESP + 0x4]       ; 005c7f1b
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c7f1f
    MOV EDX,dword ptr [EDI + 0x2c]      ; 005c7f23
    ADD ESI,0x60                        ; 005c7f26
    ADD EBP,0x60                        ; 005c7f29
    INC EAX                             ; 005c7f2c
    MOV dword ptr [ESP],ESI             ; 005c7f2d
    MOV dword ptr [ESP + 0x4],EBP       ; 005c7f30
    MOV dword ptr [ESP + 0xc],EAX       ; 005c7f34
    CMP EAX,EDX                         ; 005c7f38
    JC 0x005c7df9                       ; 005c7f3a
        ;   XREF to: 005c7df9 (CONDITIONAL_JUMP)  ; LAB_005c7df9
    JMP 0x005c7e00                      ; 005c7f40
        ;   XREF to: 005c7e00 (UNCONDITIONAL_JUMP)  ; LAB_005c7e00
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c7f45
        ;   Label: LAB_005c7f45
    FLD double ptr [EAX + 0x8]          ; 005c7f49
    FCOMP double ptr [EDX + 0x8]        ; 005c7f4c
    FNSTSW AX                           ; 005c7f4f
    SAHF                                ; 005c7f51
    JNZ 0x005c7e8f                      ; 005c7f52
        ;   XREF to: 005c7e8f (CONDITIONAL_JUMP)  ; LAB_005c7e8f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c7f58
    FLD double ptr [EAX + 0x10]         ; 005c7f5c
    FCOMP double ptr [EDX + 0x10]       ; 005c7f5f
    FNSTSW AX                           ; 005c7f62
    SAHF                                ; 005c7f64
    JNZ 0x005c7e8f                      ; 005c7f65
        ;   XREF to: 005c7e8f (CONDITIONAL_JUMP)  ; LAB_005c7e8f
    LEA EDX,[EBX + 0x28]                ; 005c7f6b
    MOV EAX,dword ptr [ESP + 0x24]      ; 005c7f6e
    MOV ECX,dword ptr [EDX]             ; 005c7f72
    MOV dword ptr [EAX],ECX             ; 005c7f74
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c7f76
    MOV dword ptr [EAX + 0x4],ECX       ; 005c7f79
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c7f7c
    MOV dword ptr [EAX + 0x8],ECX       ; 005c7f7f
    MOV ECX,dword ptr [EDX + 0xc]       ; 005c7f82
    MOV dword ptr [EAX + 0xc],ECX       ; 005c7f85
    FLD double ptr [EDX + 0x10]         ; 005c7f88
    LEA EDX,[EBX + 0x50]                ; 005c7f8b
    FSTP double ptr [EAX + 0x10]        ; 005c7f8e
    MOV ECX,dword ptr [EDX]             ; 005c7f91
    MOV dword ptr [EAX + 0x28],ECX      ; 005c7f93
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c7f96
    MOV dword ptr [EAX + 0x2c],ECX      ; 005c7f99
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c7f9c
    MOV dword ptr [EAX + 0x30],ECX      ; 005c7f9f
    MOV ECX,dword ptr [EDX + 0xc]       ; 005c7fa2
    MOV dword ptr [EAX + 0x34],ECX      ; 005c7fa5
    JMP 0x005c7eca                      ; 005c7fa8
        ;   XREF to: 005c7eca (UNCONDITIONAL_JUMP)  ; LAB_005c7eca

