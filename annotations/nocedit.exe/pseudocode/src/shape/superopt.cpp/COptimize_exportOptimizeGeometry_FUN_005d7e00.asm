; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00(COptimize *this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
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
;   shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0 at 005d7cf3
;
; Referenced Globals:
;   TerminatedCString s_shape_superopt_cpp_00654882
;   TerminatedCString s_Too_many_points_00654898
;   TerminatedCString s_shape_superopt_cpp_006548a9
;   TerminatedCString s_Too_many_polys_006548bf
;   double DOUBLE_006548d2 = 256
;   undefined4 DAT_00766880
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626420
;   undefined4 DAT_01626424
;   undefined4 DAT_01626428
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   ... and 30 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;   shape_superopt.cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0
;   shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005cbf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d7e00
        ;   Label: shape_superopt.cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00
    PUSH ESI                            ; 005d7e01
    PUSH EDI                            ; 005d7e02
    PUSH EBP                            ; 005d7e03
    SUB ESP,0x2c                        ; 005d7e04
    PUSH 0x766880                       ; 005d7e07 | DAT_00766880
    XOR EDX,EDX                         ; 005d7e0c
    PUSH EDX                            ; 005d7e0e
    PUSH 0x16e9910                      ; 005d7e0f | g_ModelPolygonData
    MOV dword ptr [0x016e990c],EDX      ; 005d7e14 | g_PolygonCount
    MOV dword ptr [0x01626408],EDX      ; 005d7e1a | g_VertexCount
    CALL crt_memory.c_memset_FUN_005fde40 ; 005d7e20
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005d7e25
    PUSH 0x61a80                        ; 005d7e28
    PUSH 0x0                            ; 005d7e2d
    PUSH 0x162640c                      ; 005d7e2f | g_LoadedVertices
    CALL crt_memory.c_memset_FUN_005fde40 ; 005d7e34
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005d7e39
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d7e3c
    XOR EBX,EBX                         ; 005d7e40
    MOV ESI,dword ptr [EAX + 0x38]      ; 005d7e42
    MOV dword ptr [ESP + 0x8],EBX       ; 005d7e45
    TEST ESI,ESI                        ; 005d7e49
    JBE 0x005d80dc                      ; 005d7e4b
        ;   XREF to: 005d80dc (CONDITIONAL_JUMP)  ; LAB_005d80dc
    MOV dword ptr [ESP + 0x4],EBX       ; 005d7e51
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d7e55
        ;   Label: LAB_005d7e55
    MOV ESI,dword ptr [ESP + 0x4]       ; 005d7e59
    MOV EAX,dword ptr [EAX + 0x3c]      ; 005d7e5d
    ADD EAX,ESI                         ; 005d7e60
    MOV EBX,dword ptr [EAX]             ; 005d7e62
    MOV EAX,ESP                         ; 005d7e64
    PUSH EAX                            ; 005d7e66
    PUSH EBX                            ; 005d7e67
    CALL shape_superopt.cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0 ; 005d7e68
        ;   XREF to: 005cbec0 (UNCONDITIONAL_CALL)  ; void * shape_superopt.cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0(CComplexPolygon * this_ptr, int * out_count)
    ADD ESP,0x8                         ; 005d7e6d
    PUSH EBX                            ; 005d7e70
    MOV ESI,EAX                         ; 005d7e71
    CALL shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005cbf00 ; 005d7e73
        ;   XREF to: 005cbf00 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005cbf00(CComplexPolygon * this_ptr)
    IMUL EAX,EAX,0x50                   ; 005d7e78
    XOR EDI,EDI                         ; 005d7e7b
    ADD ESP,0x4                         ; 005d7e7d
    MOV EDX,0x3f6bbf0                   ; 005d7e80 | g_TriListTextureNames
    MOV EBP,dword ptr [ESP]             ; 005d7e85
    ADD EDX,EAX                         ; 005d7e88
    MOV dword ptr [ESP + 0xc],EDI       ; 005d7e8a
    MOV dword ptr [ESP + 0x18],EDX      ; 005d7e8e
    TEST EBP,EBP                        ; 005d7e92
    JBE 0x005d80b9                      ; 005d7e94
        ;   XREF to: 005d80b9 (CONDITIONAL_JUMP)  ; LAB_005d80b9
    MOV dword ptr [ESP + 0x10],ESI      ; 005d7e9a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d7e9e
        ;   Label: LAB_005d7e9e
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d7ea2
    MOV dword ptr [ESP + 0x28],EAX      ; 005d7ea5
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d7ea9
    MOV EAX,dword ptr [EAX]             ; 005d7ead
    MOV dword ptr [ESP + 0x20],EAX      ; 005d7eaf
    MOV EDI,dword ptr [ESP + 0x20]      ; 005d7eb3
    MOV EAX,[0x01626408]                ; 005d7eb7 | g_VertexCount
    ADD EAX,EDI                         ; 005d7ebc
    CMP EAX,0x4e20                      ; 005d7ebe
    JBE 0x005d7ee7                      ; 005d7ec3
        ;   XREF to: 005d7ee7 (CONDITIONAL_JUMP)  ; LAB_005d7ee7
    MOV EBP,0x654882                    ; 005d7ec5 | = "..\\shape\\superopt.cpp"
    MOV EAX,0x25b3                      ; 005d7eca
    PUSH 0x654898                       ; 005d7ecf | = "Too many points!"
    MOV dword ptr [0x02f0ca48],EBP      ; 005d7ed4 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005d7eda | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005d7edf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005d7ee4
    MOV EDX,dword ptr [ESP + 0x20]      ; 005d7ee7
        ;   Label: LAB_005d7ee7
    XOR ECX,ECX                         ; 005d7eeb
    TEST EDX,EDX                        ; 005d7eed
    JBE 0x005d7f28                      ; 005d7eef
        ;   XREF to: 005d7f28 (CONDITIONAL_JUMP)  ; LAB_005d7f28
    MOV EDX,dword ptr [ESP + 0x28]      ; 005d7ef1
    MOV EDI,dword ptr [0x01626408]      ; 005d7ef5 | g_VertexCount
    MOV EBX,dword ptr [ESP + 0x20]      ; 005d7efb
    IMUL EAX,EDI,0x14                   ; 005d7eff
    FLD double ptr [EDX + 0x10]         ; 005d7f02
        ;   Label: LAB_005d7f02
    ADD EDX,0x60                        ; 005d7f05
    INC ECX                             ; 005d7f08
    FSTP float ptr [EAX + 0x162640c]    ; 005d7f09 | g_LoadedVertices | DAT_01626420
    ADD EAX,0x14                        ; 005d7f0f
    FLD double ptr [EDX + -0x48]        ; 005d7f12
    FSTP float ptr [EAX + 0x16263fc]    ; 005d7f15 | DAT_01626410 | DAT_01626424
    FLD double ptr [EDX + -0x40]        ; 005d7f1b
    FSTP float ptr [EAX + 0x1626400]    ; 005d7f1e | g_LoadedVertices[0].vertex.z | DAT_01626428
    CMP ECX,EBX                         ; 005d7f24
    JC 0x005d7f02                       ; 005d7f26
        ;   XREF to: 005d7f02 (CONDITIONAL_JUMP)  ; LAB_005d7f02
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d7f28
        ;   Label: LAB_005d7f28
    MOV ESI,0x1                         ; 005d7f2c
    MOV EBP,dword ptr [EAX + 0x34]      ; 005d7f31
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d7f34
    MOV dword ptr [ESP + 0x24],ESI      ; 005d7f38
    SUB EAX,ESI                         ; 005d7f3c
    DEC EBP                             ; 005d7f3e
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d7f3f
    CMP EBP,dword ptr [ESP + 0x20]      ; 005d7f43
        ;   Label: LAB_005d7f43
    JC 0x005d7f4d                       ; 005d7f47
        ;   XREF to: 005d7f4d (CONDITIONAL_JUMP)  ; LAB_005d7f4d
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005d7f49
    CMP dword ptr [0x016e990c],0x4e20   ; 005d7f4d | g_PolygonCount
        ;   Label: LAB_005d7f4d
    JL 0x005d7f7c                       ; 005d7f57
        ;   XREF to: 005d7f7c (CONDITIONAL_JUMP)  ; LAB_005d7f7c
    MOV ECX,0x6548a9                    ; 005d7f59 | = "..\\shape\\superopt.cpp"
    MOV EBX,0x25c1                      ; 005d7f5e
    PUSH 0x6548bf                       ; 005d7f63 | = "Too many polys!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005d7f68 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005d7f6e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005d7f74
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005d7f79
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 005d7f7c | g_PolygonCount
        ;   Label: LAB_005d7f7c
    MOV EDI,0x1                         ; 005d7f86
    XOR EDX,EDX                         ; 005d7f8b
    MOV dword ptr [EAX + 0x16e9910],EDI ; 005d7f8d | g_ModelPolygonData | DAT_016e9a94
    MOV dword ptr [EAX + 0x16e9a88],EDX ; 005d7f93 | DAT_016e9a88 | DAT_016e9c0c
    ADD EAX,0x16e9910                   ; 005d7f99 | g_ModelPolygonData
    MOV ESI,dword ptr [ESP + 0x18]      ; 005d7f9e
    LEA EDI,[EAX + 0x4]                 ; 005d7fa2 | DAT_016e9914
    PUSH EDI                            ; 005d7fa5 | DAT_016e9914 | DAT_016e9a98
    MOV AL,byte ptr [ESI]               ; 005d7fa6 | g_TriListTextureNames | DAT_03f6bbf2
        ;   Label: LAB_005d7fa6
    MOV byte ptr [EDI],AL               ; 005d7fa8 | DAT_016e9914 | DAT_016e9916 | DAT_016e9a98
    CMP AL,0x0                          ; 005d7faa
    JZ 0x005d7fbe                       ; 005d7fac
        ;   XREF to: 005d7fbe (CONDITIONAL_JUMP)  ; LAB_005d7fbe
    MOV AL,byte ptr [ESI + 0x1]         ; 005d7fae | DAT_03f6bbf1 | DAT_03f6bbf3
    ADD ESI,0x2                         ; 005d7fb1
    MOV byte ptr [EDI + 0x1],AL         ; 005d7fb4 | DAT_016e9915 | DAT_016e9917 | DAT_016e9a99
    ADD EDI,0x2                         ; 005d7fb7
    CMP AL,0x0                          ; 005d7fba
    JNZ 0x005d7fa6                      ; 005d7fbc
        ;   XREF to: 005d7fa6 (CONDITIONAL_JUMP)  ; LAB_005d7fa6
    POP EDI                             ; 005d7fbe
        ;   Label: LAB_005d7fbe
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 005d7fbf | g_PolygonCount
    ADD EAX,0x16e9910                   ; 005d7fc9 | g_ModelPolygonData
    MOV ESI,dword ptr [ESP + 0x18]      ; 005d7fce
    LEA EDI,[EAX + 0x54]                ; 005d7fd2 | DAT_016e9964
    PUSH EDI                            ; 005d7fd5 | DAT_016e9964 | DAT_016e9ae8
    MOV AL,byte ptr [ESI]               ; 005d7fd6 | g_TriListTextureNames | DAT_03f6bbf2
        ;   Label: LAB_005d7fd6
    MOV byte ptr [EDI],AL               ; 005d7fd8 | DAT_016e9964 | DAT_016e9966
    CMP AL,0x0                          ; 005d7fda
    JZ 0x005d7fee                       ; 005d7fdc
        ;   XREF to: 005d7fee (CONDITIONAL_JUMP)  ; LAB_005d7fee
    MOV AL,byte ptr [ESI + 0x1]         ; 005d7fde | DAT_03f6bbf1 | DAT_03f6bbf3
    ADD ESI,0x2                         ; 005d7fe1
    MOV byte ptr [EDI + 0x1],AL         ; 005d7fe4 | DAT_016e9965 | DAT_016e9967
    ADD EDI,0x2                         ; 005d7fe7
    CMP AL,0x0                          ; 005d7fea
    JNZ 0x005d7fd6                      ; 005d7fec
        ;   XREF to: 005d7fd6 (CONDITIONAL_JUMP)  ; LAB_005d7fd6
    POP EDI                             ; 005d7fee
        ;   Label: LAB_005d7fee
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 005d7fef | g_PolygonCount
    MOV EDX,dword ptr [0x01626408]      ; 005d7ff9 | g_VertexCount
    MOV dword ptr [EAX + 0x16e99c8],EDX ; 005d7fff | DAT_016e99c8
    MOV EDX,dword ptr [ESP + 0x28]      ; 005d8005
    FLD double ptr [0x006548d2]         ; 005d8009 | DOUBLE_006548d2
    FLD double ptr [EDX + 0x40]         ; 005d800f
    FMUL ST1                            ; 005d8012
    MOV ESI,dword ptr [ESP + 0x24]      ; 005d8014
    FSTP float ptr [EAX + 0x16e9a08]    ; 005d8018 | DAT_016e9a08
    FLD double ptr [EDX + 0x48]         ; 005d801e
    IMUL EDX,ESI,0x60                   ; 005d8021
    FMULP                               ; 005d8024
    MOV EDI,dword ptr [ESP + 0x28]      ; 005d8026
    MOV ECX,dword ptr [0x01626408]      ; 005d802a | g_VertexCount
    MOV dword ptr [ESP + 0x14],EAX      ; 005d8030
    ADD EAX,0x4                         ; 005d8034
    ADD EDX,EDI                         ; 005d8037
    LEA EDI,[ESI + ECX*0x1]             ; 005d8039
    MOV EBX,0x1                         ; 005d803c
    MOV ESI,dword ptr [0x01626408]      ; 005d8041 | g_VertexCount
    FSTP float ptr [EAX + 0x16e9a44]    ; 005d8047 | DAT_016e9a48
    ADD ESI,EBP                         ; 005d804d
    MOV ECX,EDI                         ; 005d804f
    CMP EDI,ESI                         ; 005d8051
    JG 0x005d8085                       ; 005d8053
        ;   XREF to: 005d8085 (CONDITIONAL_JUMP)  ; LAB_005d8085
    FLD double ptr [0x006548d2]         ; 005d8055 | DOUBLE_006548d2
    MOV dword ptr [EAX + 0x16e99c8],ECX ; 005d805b | DAT_016e99cc | DAT_016e99d0
        ;   Label: LAB_005d805b
    FLD double ptr [EDX + 0x40]         ; 005d8061
    FMUL ST1                            ; 005d8064
    FSTP float ptr [EAX + 0x16e9a08]    ; 005d8066 | DAT_016e9a0c | DAT_016e9a10
    FLD double ptr [EDX + 0x48]         ; 005d806c
    FMUL ST1                            ; 005d806f
    ADD EAX,0x4                         ; 005d8071
    INC EBX                             ; 005d8074
    ADD EDX,0x60                        ; 005d8075
    INC ECX                             ; 005d8078
    FSTP float ptr [EAX + 0x16e9a44]    ; 005d8079 | DAT_016e9a4c | DAT_016e9a50
    CMP ECX,ESI                         ; 005d807f
    JLE 0x005d805b                      ; 005d8081
        ;   XREF to: 005d805b (CONDITIONAL_JUMP)  ; LAB_005d805b
    FSTP ST0                            ; 005d8083
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d8085
        ;   Label: LAB_005d8085
    MOV dword ptr [EAX + 0x16e99b4],EBX ; 005d8089 | DAT_016e99b4
    MOV EBX,dword ptr [0x016e990c]      ; 005d808f | g_PolygonCount
    INC EBX                             ; 005d8095
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005d8096
    MOV dword ptr [0x016e990c],EBX      ; 005d809a | g_PolygonCount
    CMP EBP,ESI                         ; 005d80a0
    JNC 0x005d80e9                      ; 005d80a2
        ;   XREF to: 005d80e9 (CONDITIONAL_JUMP)  ; LAB_005d80e9
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d80a4
    MOV EAX,dword ptr [EAX + 0x34]      ; 005d80a8
    SUB EAX,0x2                         ; 005d80ab
    MOV dword ptr [ESP + 0x24],EBP      ; 005d80ae
    ADD EBP,EAX                         ; 005d80b2
    JMP 0x005d7f43                      ; 005d80b4
        ;   XREF to: 005d7f43 (UNCONDITIONAL_JUMP)  ; LAB_005d7f43
    MOV EDI,dword ptr [ESP + 0x4]       ; 005d80b9
        ;   Label: LAB_005d80b9
    MOV EBP,dword ptr [ESP + 0x8]       ; 005d80bd
    MOV EDX,dword ptr [ESP + 0x40]      ; 005d80c1
    ADD EDI,0x4                         ; 005d80c5
    INC EBP                             ; 005d80c8
    MOV ECX,dword ptr [EDX + 0x38]      ; 005d80c9
    MOV dword ptr [ESP + 0x4],EDI       ; 005d80cc
    MOV dword ptr [ESP + 0x8],EBP       ; 005d80d0
    CMP EBP,ECX                         ; 005d80d4
    JC 0x005d7e55                       ; 005d80d6
        ;   XREF to: 005d7e55 (CONDITIONAL_JUMP)  ; LAB_005d7e55
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 005d80dc
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
        ;   Label: LAB_005d80dc
    ADD ESP,0x2c                        ; 005d80e1
    POP EBP                             ; 005d80e4
    POP EDI                             ; 005d80e5
    POP ESI                             ; 005d80e6
    POP EBX                             ; 005d80e7
    RET                                 ; 005d80e8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d80e9
        ;   Label: LAB_005d80e9
    MOV ECX,dword ptr [ESP + 0x10]      ; 005d80ed
    MOV EBX,dword ptr [ESP + 0xc]       ; 005d80f1
    MOV ESI,dword ptr [ESP]             ; 005d80f5
    MOV EDX,dword ptr [0x01626408]      ; 005d80f8 | g_VertexCount
    ADD ECX,0x8                         ; 005d80fe
    ADD EDX,EAX                         ; 005d8101
    INC EBX                             ; 005d8103
    MOV dword ptr [0x01626408],EDX      ; 005d8104 | g_VertexCount
    MOV dword ptr [ESP + 0x10],ECX      ; 005d810a
    MOV dword ptr [ESP + 0xc],EBX       ; 005d810e
    CMP EBX,ESI                         ; 005d8112
    JNC 0x005d80b9                      ; 005d8114
        ;   XREF to: 005d80b9 (CONDITIONAL_JUMP)  ; LAB_005d80b9
    JMP 0x005d7e9e                      ; 005d8116
        ;   XREF to: 005d7e9e (UNCONDITIONAL_JUMP)  ; LAB_005d7e9e

