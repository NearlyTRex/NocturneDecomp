; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60(SRenderVertex * start_vertex, SRenderVertex * end_vertex)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   start_vertex
; SRenderVertex *  Stack[0x8]:4   end_vertex
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_ProcessorType
;   int g_RenderStateFlag2
;   int g_SoftwareEdgeCount
;   SSoftwareEdge[16] g_SoftwareEdgeBuffer
;   undefined4 DAT_030e5230
;   undefined4 DAT_030e5234
;   undefined4 DAT_030e5238
;   undefined4 DAT_030e523c
;   undefined4 DAT_030e5240
;   undefined4 DAT_030e5244
;   undefined4 DAT_030e5248
;   undefined4 DAT_030e524c
;   undefined4 DAT_030e5250
;   undefined4 DAT_030e5254
;   undefined4 DAT_030e5258
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551d60
        ;   Label: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60
    PUSH ESI                            ; 00551d61
    PUSH EDI                            ; 00551d62
    PUSH EBP                            ; 00551d63
    SUB ESP,0x4                         ; 00551d64
    MOV ESI,dword ptr [ESP + 0x18]      ; 00551d67
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00551d6b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00551d6f
    MOV EDI,dword ptr [ESI + 0x14]      ; 00551d72
    SAR EBX,0x10                        ; 00551d75
    SAR EDI,0x10                        ; 00551d78
    CMP EDI,EBX                         ; 00551d7b
    JZ 0x00551f19                       ; 00551d7d
        ;   XREF to: 00551f19 (CONDITIONAL_JUMP)  ; LAB_00551f19
    MOV EDX,dword ptr [EBP + 0x14]      ; 00551d83
    CMP EDX,dword ptr [ESI + 0x14]      ; 00551d86
    JGE 0x00551d97                      ; 00551d89
        ;   XREF to: 00551d97 (CONDITIONAL_JUMP)  ; LAB_00551d97
    MOV EAX,ESI                         ; 00551d8b
    MOV ESI,EBP                         ; 00551d8d
    MOV EBP,EAX                         ; 00551d8f
    MOV EAX,EDI                         ; 00551d91
    MOV EDI,EBX                         ; 00551d93
    MOV EBX,EAX                         ; 00551d95
    MOV EAX,[0x030e5228]                ; 00551d97 | g_SoftwareEdgeCount
        ;   Label: LAB_00551d97
    LEA ECX,[EAX*0x8 + 0x0]             ; 00551d9c
    ADD ECX,EAX                         ; 00551da3
    SHL ECX,0x3                         ; 00551da5
    ADD ECX,0x30e522c                   ; 00551da8 | g_SoftwareEdgeBuffer
    MOV dword ptr [ECX],EDI             ; 00551dae | g_SoftwareEdgeBuffer
    MOV EAX,[0x030e56ac]                ; 00551db0 | g_SoftwareMinScanline
    MOV dword ptr [ECX + 0x4],EBX       ; 00551db5 | DAT_030e5230
    CMP EDI,EAX                         ; 00551db8
    JGE 0x00551dc2                      ; 00551dba
        ;   XREF to: 00551dc2 (CONDITIONAL_JUMP)  ; LAB_00551dc2
    MOV dword ptr [0x030e56ac],EDI      ; 00551dbc | g_SoftwareMinScanline
    CMP EBX,dword ptr [0x030e56b0]      ; 00551dc2 | g_SoftwareMaxScanline
        ;   Label: LAB_00551dc2
    JLE 0x00551dd0                      ; 00551dc8
        ;   XREF to: 00551dd0 (CONDITIONAL_JUMP)  ; LAB_00551dd0
    MOV dword ptr [0x030e56b0],EBX      ; 00551dca | g_SoftwareMaxScanline
    MOV EDI,dword ptr [ESI + 0x14]      ; 00551dd0
        ;   Label: LAB_00551dd0
    MOV EBX,dword ptr [EBP + 0x14]      ; 00551dd3
    SUB EBX,EDI                         ; 00551dd6
    CMP EBX,0x10000                     ; 00551dd8
    JNC 0x00551f21                      ; 00551dde
        ;   XREF to: 00551f21 (CONDITIONAL_JUMP)  ; LAB_00551f21
    XOR EBX,EBX                         ; 00551de4
    MOV EAX,dword ptr [EBP + 0x10]      ; 00551de6
        ;   Label: LAB_00551de6
    MOV EDX,dword ptr [ESI + 0x10]      ; 00551de9
    MOV EDI,dword ptr [ESI + 0x14]      ; 00551dec
    SUB EAX,EDX                         ; 00551def
    AND EDI,0xffff                      ; 00551df1
    MOV EDX,EAX                         ; 00551df7
    MOV EAX,EBX                         ; 00551df9
    XOR DI,0xffff                       ; 00551dfb
    IMUL EDX                            ; 00551dff
    SHRD EAX,EDX,0x10                   ; 00551e01
    MOV EDX,EAX                         ; 00551e05
    MOV dword ptr [ECX + 0xc],EAX       ; 00551e07 | DAT_030e5238
    MOV EAX,EDI                         ; 00551e0a
    IMUL EDX                            ; 00551e0c
    SHRD EAX,EDX,0x10                   ; 00551e0e
    MOV dword ptr [ESP],EAX             ; 00551e12
    MOV EDX,dword ptr [ESP]             ; 00551e15
    MOV EAX,dword ptr [ESI + 0x10]      ; 00551e18
    ADD EAX,EDX                         ; 00551e1b
    MOV dword ptr [ECX + 0x8],EAX       ; 00551e1d | DAT_030e5234
    MOV EAX,dword ptr [EBP + 0x18]      ; 00551e20
    MOV EDX,dword ptr [ESI + 0x18]      ; 00551e23
    SUB EAX,EDX                         ; 00551e26
    MOV EDX,EAX                         ; 00551e28
    MOV EAX,EBX                         ; 00551e2a
    IMUL EDX                            ; 00551e2c
    SHRD EAX,EDX,0x10                   ; 00551e2e
    MOV EDX,EAX                         ; 00551e32
    MOV dword ptr [ECX + 0x1c],EAX      ; 00551e34 | DAT_030e5248
    MOV EAX,EDI                         ; 00551e37
    IMUL EDX                            ; 00551e39
    SHRD EAX,EDX,0x10                   ; 00551e3b
    MOV dword ptr [ESP],EAX             ; 00551e3f
    MOV EDX,dword ptr [ESP]             ; 00551e42
    MOV EAX,dword ptr [ESI + 0x18]      ; 00551e45
    ADD EAX,EDX                         ; 00551e48
    MOV dword ptr [ECX + 0x18],EAX      ; 00551e4a | DAT_030e5244
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00551e4d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00551e50
    SUB EAX,EDX                         ; 00551e53
    MOV EDX,EAX                         ; 00551e55
    MOV EAX,EBX                         ; 00551e57
    IMUL EDX                            ; 00551e59
    SHRD EAX,EDX,0x10                   ; 00551e5b
    MOV EDX,EAX                         ; 00551e5f
    MOV dword ptr [ECX + 0x24],EAX      ; 00551e61 | DAT_030e5250
    MOV EAX,EDI                         ; 00551e64
    IMUL EDX                            ; 00551e66
    SHRD EAX,EDX,0x10                   ; 00551e68
    MOV dword ptr [ESP],EAX             ; 00551e6c
    MOV EDX,dword ptr [ESP]             ; 00551e6f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00551e72
    ADD EAX,EDX                         ; 00551e75
    MOV dword ptr [ECX + 0x20],EAX      ; 00551e77 | DAT_030e524c
    MOV EAX,dword ptr [EBP + 0x20]      ; 00551e7a
    MOV EDX,dword ptr [ESI + 0x20]      ; 00551e7d
    SUB EAX,EDX                         ; 00551e80
    MOV EDX,EAX                         ; 00551e82
    MOV EAX,EBX                         ; 00551e84
    IMUL EDX                            ; 00551e86
    SHRD EAX,EDX,0x10                   ; 00551e88
    MOV EDX,EAX                         ; 00551e8c
    MOV dword ptr [ECX + 0x14],EAX      ; 00551e8e | DAT_030e5240
    MOV EAX,EDI                         ; 00551e91
    IMUL EDX                            ; 00551e93
    SHRD EAX,EDX,0x10                   ; 00551e95
    MOV dword ptr [ESP],EAX             ; 00551e99
    MOV EDX,dword ptr [ESP]             ; 00551e9c
    MOV EAX,dword ptr [ESI + 0x20]      ; 00551e9f
    ADD EAX,EDX                         ; 00551ea2
    MOV dword ptr [ECX + 0x10],EAX      ; 00551ea4 | DAT_030e523c
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00551ea7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00551eaa
    SUB EAX,EDX                         ; 00551ead
    MOV EDX,EAX                         ; 00551eaf
    MOV EAX,EBX                         ; 00551eb1
    IMUL EDX                            ; 00551eb3
    SHRD EAX,EDX,0x10                   ; 00551eb5
    MOV EDX,EAX                         ; 00551eb9
    MOV dword ptr [ECX + 0x34],EAX      ; 00551ebb | DAT_030e5260
    MOV EAX,EDI                         ; 00551ebe
    IMUL EDX                            ; 00551ec0
    SHRD EAX,EDX,0x10                   ; 00551ec2
    MOV dword ptr [ESP],EAX             ; 00551ec6
    MOV EDX,dword ptr [ESP]             ; 00551ec9
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00551ecc
    ADD EAX,EDX                         ; 00551ecf
    MOV dword ptr [ECX + 0x30],EAX      ; 00551ed1 | DAT_030e525c
    CMP dword ptr [0x02d052a4],0x1      ; 00551ed4 | g_RenderStateFlag2
    JNZ 0x00551f39                      ; 00551edb
        ;   XREF to: 00551f39 (CONDITIONAL_JUMP)  ; LAB_00551f39
    CMP dword ptr [0x02d0529c],0x0      ; 00551edd | g_ProcessorType
    JZ 0x00551f31                       ; 00551ee4
        ;   XREF to: 00551f31 (CONDITIONAL_JUMP)  ; LAB_00551f31
    MOV EAX,0x7fffffff                  ; 00551ee6
    MOV EDX,dword ptr [ESI + 0x8]       ; 00551eeb
    MOV ESI,EAX                         ; 00551eee
    SUB ESI,EDX                         ; 00551ef0
    SUB EAX,dword ptr [EBP + 0x8]       ; 00551ef2
    MOV EDX,EAX                         ; 00551ef5
        ;   Label: LAB_00551ef5
    MOV EAX,EBX                         ; 00551ef7
    SUB EDX,ESI                         ; 00551ef9
    IMUL EDX                            ; 00551efb
    SHRD EAX,EDX,0x10                   ; 00551efd
    MOV EDX,EAX                         ; 00551f01
    MOV dword ptr [ECX + 0x2c],EAX      ; 00551f03 | DAT_030e5258
    MOV EAX,EDI                         ; 00551f06
    IMUL EDX                            ; 00551f08
    SHRD EAX,EDX,0x10                   ; 00551f0a
    ADD ESI,EAX                         ; 00551f0e
    MOV dword ptr [ECX + 0x28],ESI      ; 00551f10 | DAT_030e5254
    INC dword ptr [0x030e5228]          ; 00551f13 | g_SoftwareEdgeCount
    ADD ESP,0x4                         ; 00551f19
        ;   Label: LAB_00551f19
    POP EBP                             ; 00551f1c
    POP EDI                             ; 00551f1d
    POP ESI                             ; 00551f1e
    POP EBX                             ; 00551f1f
    RET                                 ; 00551f20
    MOV EAX,0xffffffff                  ; 00551f21
        ;   Label: LAB_00551f21
    XOR EDX,EDX                         ; 00551f26
    DIV EBX                             ; 00551f28
    MOV EBX,EAX                         ; 00551f2a
    JMP 0x00551de6                      ; 00551f2c
        ;   XREF to: 00551de6 (UNCONDITIONAL_JUMP)  ; LAB_00551de6
    MOV EAX,dword ptr [EBP + 0xc]       ; 00551f31
        ;   Label: LAB_00551f31
    MOV ESI,dword ptr [ESI + 0xc]       ; 00551f34
    JMP 0x00551ef5                      ; 00551f37
        ;   XREF to: 00551ef5 (UNCONDITIONAL_JUMP)  ; LAB_00551ef5
    MOV EAX,dword ptr [EBP + 0x8]       ; 00551f39
        ;   Label: LAB_00551f39
    MOV EDX,dword ptr [ESI + 0x8]       ; 00551f3c
    SUB EAX,EDX                         ; 00551f3f
    MOV EDX,EAX                         ; 00551f41
    MOV EAX,EBX                         ; 00551f43
    IMUL EDX                            ; 00551f45
    SHRD EAX,EDX,0x10                   ; 00551f47
    MOV EDX,EAX                         ; 00551f4b
    MOV dword ptr [ECX + 0x2c],EAX      ; 00551f4d | DAT_030e5258
    MOV EAX,EDI                         ; 00551f50
    IMUL EDX                            ; 00551f52
    SHRD EAX,EDX,0x10                   ; 00551f54
    MOV EDX,EAX                         ; 00551f58
    MOV EAX,dword ptr [ESI + 0x8]       ; 00551f5a
    ADD EAX,EDX                         ; 00551f5d
    MOV dword ptr [ECX + 0x28],EAX      ; 00551f5f | DAT_030e5254
    INC dword ptr [0x030e5228]          ; 00551f62 | g_SoftwareEdgeCount
    ADD ESP,0x4                         ; 00551f68
    POP EBP                             ; 00551f6b
    POP EDI                             ; 00551f6c
    POP ESI                             ; 00551f6d
    POP EBX                             ; 00551f6e
    RET                                 ; 00551f6f

