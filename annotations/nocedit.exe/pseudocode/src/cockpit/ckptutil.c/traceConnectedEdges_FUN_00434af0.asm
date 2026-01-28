; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_00434af0 (SEdgeList *edge_lists,void *output_buffer,int *output_count,int max_x,int max_y, int gap_tolerance_x,int gap_tolerance_y)
;
; Parameters:
; SEdgeList *      Stack[0x4]:4   edge_lists
; void *           Stack[0x8]:4   output_buffer
; int *            Stack[0xc]:4   output_count
; int              Stack[0x10]:4   max_x
; int              Stack[0x14]:4   max_y
; int              Stack[0x18]:4   gap_tolerance_x
; int              Stack[0x1c]:4   gap_tolerance_y
; Local Variables:
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; Referenced Globals:
;   TerminatedCString s_Reached_max_trace_edges__00617fa1
;   TerminatedCString s_cockpit_ckptutil_c_00617fd0
;   TerminatedCString s_Reached_max_trace_edges__00617fe6
;   TerminatedCString s_cockpit_ckptutil_c_00618015
;   TerminatedCString s_cockpit_ckptutil_c_0061802b
;   TerminatedCString s_Unable_to_allocate_u_byt_00618041
;   TerminatedCString s_cockpit_ckptutil_c_0061806c
;   SEdge[512] g_TracedEdgeBuffer
;   undefined4 g_TracedEdgeBuffer[0].y0
;   undefined4 g_TracedEdgeBuffer[0].x1
;   undefined4 g_TracedEdgeBuffer[0].y1
;   undefined4 g_TracedEdgeBuffer[0].y1+1
;   undefined4 g_TracedEdgeBuffer[1].x0
;   undefined4 g_TracedEdgeBuffer[1].y0
;   undefined4 g_TracedEdgeBuffer[1].x1
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434af0
        ;   Label: cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0
    PUSH ESI                            ; 00434af1
    PUSH EDI                            ; 00434af2
    PUSH EBP                            ; 00434af3
    SUB ESP,0x1e4                       ; 00434af4
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 00434afa
    XOR EBX,EBX                         ; 00434b01
    TEST EDX,EDX                        ; 00434b03
    JZ 0x00434e1e                       ; 00434b05
        ;   XREF to: 00434e1e (CONDITIONAL_JUMP)  ; LAB_00434e1e
    MOV EAX,dword ptr [ESP + 0x208]     ; 00434b0b
    DEC EAX                             ; 00434b12
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00434b13
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00434b1a
    DEC EAX                             ; 00434b21
    XOR EBP,EBP                         ; 00434b22
    MOV dword ptr [ESP + 0x108],EAX     ; 00434b24
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00434b2b
    MOV ECX,dword ptr [ESP + 0x108]     ; 00434b32
    MOV dword ptr [ESP + 0x10c],EAX     ; 00434b39
    TEST ECX,ECX                        ; 00434b40
    JLE 0x00434e51                      ; 00434b42
        ;   XREF to: 00434e51 (CONDITIONAL_JUMP)  ; LAB_00434e51
    LEA EAX,[EBP + 0x1]                 ; 00434b48
        ;   Label: LAB_00434b48
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00434b4b
    MOV dword ptr [ESP + 0x18c],EAX     ; 00434b52
    IMUL EAX,EBP,0x84                   ; 00434b59
    MOV dword ptr [ESP + 0x128],EAX     ; 00434b5f
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00434b66
    MOV dword ptr [ESP + 0x184],EAX     ; 00434b6d
    MOV dword ptr [ESP + 0x174],EAX     ; 00434b74
    MOV EDI,EAX                         ; 00434b7b
    IMUL EAX,EAX,0x84                   ; 00434b7d
    XOR ESI,ESI                         ; 00434b83
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 00434b85
    MOV dword ptr [ESP + 0x114],ESI     ; 00434b8c
    ADD EDX,EAX                         ; 00434b93
    MOV EAX,EDI                         ; 00434b95
    MOV dword ptr [ESP + 0x1d4],ESI     ; 00434b97
    MOV dword ptr [ESP + 0x118],EAX     ; 00434b9e
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00434ba5
    MOV dword ptr [ESP + 0x1c0],EDX     ; 00434bac
    MOV dword ptr [ESP + 0x110],EAX     ; 00434bb3
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 00434bba
        ;   Label: LAB_00434bba
    ADD EAX,dword ptr [ESP + 0x128]     ; 00434bc1
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 00434bc8
    CMP EDX,dword ptr [EAX]             ; 00434bcf
    JGE 0x00434e2d                      ; 00434bd1
        ;   XREF to: 00434e2d (CONDITIONAL_JUMP)  ; LAB_00434e2d
    ADD EAX,dword ptr [ESP + 0x114]     ; 00434bd7
    MOV ESI,dword ptr [EAX + 0x4]       ; 00434bde
    MOV EDI,dword ptr [EAX + 0x44]      ; 00434be1
    ADD EDI,ESI                         ; 00434be4
    DEC EDI                             ; 00434be6
    CMP EBX,0x200                       ; 00434be7
    JL 0x00434c23                       ; 00434bed
        ;   XREF to: 00434c23 (CONDITIONAL_JUMP)  ; LAB_00434c23
    PUSH EBP                            ; 00434bef
    PUSH EBX                            ; 00434bf0
    PUSH 0x617fa1                       ; 00434bf1 | = "Reached max trace edges: edges %d, sc..."
    LEA EAX,[ESP + 0xc]                 ; 00434bf6
    PUSH EAX                            ; 00434bfa
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00434bfb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x617fd0                    ; 00434c00 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 00434c05
    MOV [0x02f0ca48],EAX                ; 00434c08 | g_CurrentFilename
    MOV EAX,ESP                         ; 00434c0d
    MOV EDX,0x886                       ; 00434c0f
    PUSH EAX                            ; 00434c14
    MOV dword ptr [0x02f0ca4c],EDX      ; 00434c15 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00434c1b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00434c20
    TEST ESI,ESI                        ; 00434c23
        ;   Label: LAB_00434c23
    JLE 0x0043519b                      ; 00434c25
        ;   XREF to: 0043519b (CONDITIONAL_JUMP)  ; LAB_0043519b
    LEA EAX,[ESI + 0x1]                 ; 00434c2b
    MOV dword ptr [ESP + 0x120],EAX     ; 00434c2e
    LEA EAX,[ESI + -0x1]                ; 00434c35
    XOR ECX,ECX                         ; 00434c38
    MOV dword ptr [ESP + 0x11c],EAX     ; 00434c3a
    MOV EAX,dword ptr [ESP + 0x110]     ; 00434c41
    MOV dword ptr [ESP + 0x130],ECX     ; 00434c48
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00434c4f
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00434c56
    MOV dword ptr [ESP + 0x148],ECX     ; 00434c5d
        ;   Label: LAB_00434c5d
    MOV dword ptr [ESP + 0x14c],EAX     ; 00434c64
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 00434c6b
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 00434c76
    MOV EDX,dword ptr [ESP + 0x148]     ; 00434c7d
    CMP EDX,dword ptr [EAX]             ; 00434c84
    JGE 0x0043519b                      ; 00434c86
        ;   XREF to: 0043519b (CONDITIONAL_JUMP)  ; LAB_0043519b
    ADD EAX,dword ptr [ESP + 0x130]     ; 00434c8c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00434c93
    MOV EAX,dword ptr [EAX + 0x44]      ; 00434c96
    ADD EAX,EDX                         ; 00434c99
    DEC EAX                             ; 00434c9b
    XOR ECX,ECX                         ; 00434c9c
    MOV dword ptr [ESP + 0x180],EAX     ; 00434c9e
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00434ca5
    MOV dword ptr [ESP + 0x1bc],ECX     ; 00434cac
    TEST EAX,EAX                        ; 00434cb3
    JLE 0x00434cf3                      ; 00434cb5
        ;   XREF to: 00434cf3 (CONDITIONAL_JUMP)  ; LAB_00434cf3
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00434cb7
    MOV EAX,dword ptr [EAX]             ; 00434cbe
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00434cc0
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00434cc7
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 00434cce
    MOV EAX,dword ptr [EAX + 0x40]      ; 00434cd5
    ADD ECX,EAX                         ; 00434cd8
    LEA EAX,[ECX + -0x1]                ; 00434cda
    MOV dword ptr [ESP + 0x19c],EAX     ; 00434cdd
    CMP EDX,EAX                         ; 00434ce4
    JGE 0x00434cf3                      ; 00434ce6
        ;   XREF to: 00434cf3 (CONDITIONAL_JUMP)  ; LAB_00434cf3
    MOV dword ptr [ESP + 0x1bc],0x1     ; 00434ce8
    CMP EDX,dword ptr [ESP + 0x11c]     ; 00434cf3
        ;   Label: LAB_00434cf3
    JGE 0x00434f60                      ; 00434cfa
        ;   XREF to: 00434f60 (CONDITIONAL_JUMP)  ; LAB_00434f60
    CMP ESI,dword ptr [ESP + 0x180]     ; 00434d00
    JG 0x00434f60                       ; 00434d07
        ;   XREF to: 00434f60 (CONDITIONAL_JUMP)  ; LAB_00434f60
    LEA EAX,[EBX*0x8 + 0x0]             ; 00434d0d
    LEA ECX,[EBX + 0x1]                 ; 00434d14
    MOV dword ptr [ESP + 0x1d8],ECX     ; 00434d17
    MOV ECX,dword ptr [ESP + 0x1bc]     ; 00434d1e
    ADD EAX,0x823e20                    ; 00434d25 | g_TracedEdgeBuffer
    TEST ECX,ECX                        ; 00434d2a
    JZ 0x00434eb6                       ; 00434d2c
        ;   XREF to: 00434eb6 (CONDITIONAL_JUMP)  ; LAB_00434eb6
    MOV ECX,ESI                         ; 00434d32
    SUB ECX,dword ptr [ESP + 0x19c]     ; 00434d34
    DEC ECX                             ; 00434d3b
    CMP ECX,dword ptr [ESP + 0x210]     ; 00434d3c
    JG 0x00434f60                       ; 00434d43
        ;   XREF to: 00434f60 (CONDITIONAL_JUMP)  ; LAB_00434f60
    XOR EBX,EBX                         ; 00434d49
    MOV EDX,dword ptr [ESP + 0x19c]     ; 00434d4b
    MOV dword ptr [ESP + 0x15c],EBX     ; 00434d52
    MOV BX,word ptr [EAX]               ; 00434d59 | g_TracedEdgeBuffer
    MOV ECX,EBP                         ; 00434d5c
    AND EBX,0xffff0000                  ; 00434d5e
    MOV dword ptr [ESP + 0x154],ESI     ; 00434d64
    MOV word ptr [EAX],BX               ; 00434d6b | g_TracedEdgeBuffer
    OR EBX,EDX                          ; 00434d6e
    MOV DX,word ptr [EAX + 0x2]         ; 00434d70 | g_TracedEdgeBuffer[0].y0
    MOV dword ptr [ESP + 0x158],EBP     ; 00434d74
    AND EDX,0xffff0000                  ; 00434d7b
    MOV word ptr [EAX],BX               ; 00434d81 | g_TracedEdgeBuffer
    MOV EBX,EDX                         ; 00434d84
    MOV word ptr [EAX + 0x2],DX         ; 00434d86 | g_TracedEdgeBuffer[0].y0
    OR EBX,ECX                          ; 00434d8a
    MOV CX,word ptr [EAX + 0x4]         ; 00434d8c | g_TracedEdgeBuffer[0].x1
    MOV word ptr [EAX + 0x2],BX         ; 00434d90 | g_TracedEdgeBuffer[0].y0
    AND ECX,0xffff0000                  ; 00434d94
    MOV EDX,dword ptr [ESP + 0x154]     ; 00434d9a
    MOV word ptr [EAX + 0x4],CX         ; 00434da1 | g_TracedEdgeBuffer[0].x1
    MOV EBX,ECX                         ; 00434da5
    MOV CX,word ptr [EAX + 0x6]         ; 00434da7 | g_TracedEdgeBuffer[0].y1
    OR EBX,EDX                          ; 00434dab
    MOV EDX,dword ptr [ESP + 0x158]     ; 00434dad
    AND ECX,0xffff8000                  ; 00434db4
    MOV word ptr [EAX + 0x4],BX         ; 00434dba | g_TracedEdgeBuffer[0].x1
    AND DH,0x7f                         ; 00434dbe
    MOV EBX,ECX                         ; 00434dc1
    MOV word ptr [EAX + 0x6],CX         ; 00434dc3 | g_TracedEdgeBuffer[0].y1
    OR EBX,EDX                          ; 00434dc7
    MOV word ptr [EAX + 0x6],BX         ; 00434dc9 | g_TracedEdgeBuffer[0].y1
    MOV EDX,dword ptr [ESP + 0x15c]     ; 00434dcd
    MOV BL,byte ptr [EAX + 0x7]         ; 00434dd4 | g_TracedEdgeBuffer[0].y1+1
    XOR DH,DH                           ; 00434dd7
    AND BL,0x7f                         ; 00434dd9
    AND DL,0x1                          ; 00434ddc
    MOV byte ptr [EAX + 0x7],BL         ; 00434ddf | g_TracedEdgeBuffer[0].y1+1
    SHL EDX,0xf                         ; 00434de2
    MOV CX,word ptr [EAX + 0x6]         ; 00434de5 | g_TracedEdgeBuffer[0].y1
    OR ECX,EDX                          ; 00434de9
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 00434deb
    MOV word ptr [EAX + 0x6],CX         ; 00434df2 | g_TracedEdgeBuffer[0].y1
        ;   Label: LAB_00434df2
    MOV EDX,dword ptr [ESP + 0x130]     ; 00434df6
        ;   Label: LAB_00434df6
    MOV ECX,dword ptr [ESP + 0x148]     ; 00434dfd
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00434e04
    ADD EDX,0x4                         ; 00434e0b
    INC ECX                             ; 00434e0e
    ADD EAX,0x4                         ; 00434e0f
    MOV dword ptr [ESP + 0x130],EDX     ; 00434e12
    JMP 0x00434c5d                      ; 00434e19
        ;   XREF to: 00434c5d (UNCONDITIONAL_JUMP)  ; LAB_00434c5d
    XOR ESI,ESI                         ; 00434e1e
        ;   Label: LAB_00434e1e
    MOV EAX,ESI                         ; 00434e20
    ADD ESP,0x1e4                       ; 00434e22
    POP EBP                             ; 00434e28
    POP EDI                             ; 00434e29
    POP ESI                             ; 00434e2a
    POP EBX                             ; 00434e2b
    RET                                 ; 00434e2c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 00434e2d
        ;   Label: LAB_00434e2d
    MOV EDI,dword ptr [ESP + 0x108]     ; 00434e34
    ADD ESI,0x84                        ; 00434e3b
    INC EBP                             ; 00434e41
    MOV dword ptr [ESP + 0x10c],ESI     ; 00434e42
    CMP EBP,EDI                         ; 00434e49
    JL 0x00434b48                       ; 00434e4b
        ;   XREF to: 00434b48 (CONDITIONAL_JUMP)  ; LAB_00434b48
    TEST EBX,EBX                        ; 00434e51
        ;   Label: LAB_00434e51
    JNZ 0x004354ed                      ; 00434e53
        ;   XREF to: 004354ed (CONDITIONAL_JUMP)  ; LAB_004354ed
    CMP dword ptr [ESP + 0x200],0x0     ; 00434e59
    JNZ 0x00434e6c                      ; 00434e61
        ;   XREF to: 00434e6c (CONDITIONAL_JUMP)  ; LAB_00434e6c
    MOV EAX,dword ptr [ESP + 0x204]     ; 00434e63
    MOV dword ptr [EAX],EBX             ; 00434e6a
    MOV ESI,dword ptr [ESP + 0x200]     ; 00434e6c
        ;   Label: LAB_00434e6c
    MOV EAX,ESI                         ; 00434e73
    ADD ESP,0x1e4                       ; 00434e75
    POP EBP                             ; 00434e7b
    POP EDI                             ; 00434e7c
    POP ESI                             ; 00434e7d
    POP EBX                             ; 00434e7e
    RET                                 ; 00434e7f
    MOV EDI,dword ptr [ESP + 0x114]     ; 00434e80
        ;   Label: LAB_00434e80
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00434e87
    MOV ESI,dword ptr [ESP + 0x110]     ; 00434e8e
    ADD EDI,0x4                         ; 00434e95
    INC EAX                             ; 00434e98
    ADD ESI,0x4                         ; 00434e99
    MOV dword ptr [ESP + 0x114],EDI     ; 00434e9c
    MOV dword ptr [ESP + 0x1d4],EAX     ; 00434ea3
    MOV dword ptr [ESP + 0x110],ESI     ; 00434eaa
    JMP 0x00434bba                      ; 00434eb1
        ;   XREF to: 00434bba (UNCONDITIONAL_JUMP)  ; LAB_00434bba
    MOV dword ptr [ESP + 0x134],EDX     ; 00434eb6
        ;   Label: LAB_00434eb6
    MOV EDX,dword ptr [ESP + 0x118]     ; 00434ebd
    MOV EBX,EBP                         ; 00434ec4
    MOV dword ptr [ESP + 0x13c],EDX     ; 00434ec6
    MOV DX,word ptr [EAX]               ; 00434ecd | g_TracedEdgeBuffer
    MOV dword ptr [ESP + 0x144],ECX     ; 00434ed0
    AND EDX,0xffff0000                  ; 00434ed7
    MOV CX,word ptr [EAX + 0x2]         ; 00434edd | g_TracedEdgeBuffer[0].y0
    MOV word ptr [EAX],DX               ; 00434ee1 | g_TracedEdgeBuffer
    OR EDX,ESI                          ; 00434ee4
    AND ECX,0xffff0000                  ; 00434ee6
    MOV word ptr [EAX],DX               ; 00434eec | g_TracedEdgeBuffer
    MOV EDX,ECX                         ; 00434eef
    MOV word ptr [EAX + 0x2],CX         ; 00434ef1 | g_TracedEdgeBuffer[0].y0
    OR EDX,EBX                          ; 00434ef5
    MOV BX,word ptr [EAX + 0x4]         ; 00434ef7 | g_TracedEdgeBuffer[0].x1
    MOV word ptr [EAX + 0x2],DX         ; 00434efb | g_TracedEdgeBuffer[0].y0
    AND EBX,0xffff0000                  ; 00434eff
    MOV EDX,dword ptr [ESP + 0x134]     ; 00434f05
    MOV word ptr [EAX + 0x4],BX         ; 00434f0c | g_TracedEdgeBuffer[0].x1
    MOV ECX,EBX                         ; 00434f10
    MOV BX,word ptr [EAX + 0x6]         ; 00434f12 | g_TracedEdgeBuffer[0].y1
    OR ECX,EDX                          ; 00434f16
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00434f18
    AND EBX,0xffff8000                  ; 00434f1f
    MOV word ptr [EAX + 0x4],CX         ; 00434f25 | g_TracedEdgeBuffer[0].x1
    AND DH,0x7f                         ; 00434f29
    MOV ECX,EBX                         ; 00434f2c
    MOV word ptr [EAX + 0x6],BX         ; 00434f2e | g_TracedEdgeBuffer[0].y1
    OR ECX,EDX                          ; 00434f32
    MOV word ptr [EAX + 0x6],CX         ; 00434f34 | g_TracedEdgeBuffer[0].y1
    MOV EDX,dword ptr [ESP + 0x144]     ; 00434f38
    MOV BL,byte ptr [EAX + 0x7]         ; 00434f3f | g_TracedEdgeBuffer[0].y1+1
    XOR DH,DH                           ; 00434f42
    AND BL,0x7f                         ; 00434f44
    AND DL,0x1                          ; 00434f47
    MOV byte ptr [EAX + 0x7],BL         ; 00434f4a | g_TracedEdgeBuffer[0].y1+1
    SHL EDX,0xf                         ; 00434f4d
    OR word ptr [EAX + 0x6],DX          ; 00434f50 | g_TracedEdgeBuffer[0].y1
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 00434f54
    JMP 0x00434df6                      ; 00434f5b
        ;   XREF to: 00434df6 (UNCONDITIONAL_JUMP)  ; LAB_00434df6
    XOR ECX,ECX                         ; 00434f60
        ;   Label: LAB_00434f60
    MOV EAX,dword ptr [ESP + 0x148]     ; 00434f62
    MOV dword ptr [ESP + 0x138],ECX     ; 00434f69
    TEST EAX,EAX                        ; 00434f70
    JLE 0x00434fb0                      ; 00434f72
        ;   XREF to: 00434fb0 (CONDITIONAL_JUMP)  ; LAB_00434fb0
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00434f74
    MOV EAX,dword ptr [EAX]             ; 00434f7b
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00434f7d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00434f84
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 00434f8b
    MOV EAX,dword ptr [EAX + 0x40]      ; 00434f92
    ADD ECX,EAX                         ; 00434f95
    LEA EAX,[ECX + -0x1]                ; 00434f97
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00434f9a
    CMP ESI,EAX                         ; 00434fa1
    JGE 0x00434fb0                      ; 00434fa3
        ;   XREF to: 00434fb0 (CONDITIONAL_JUMP)  ; LAB_00434fb0
    MOV dword ptr [ESP + 0x138],0x1     ; 00434fa5
    CMP EDX,dword ptr [ESP + 0x120]     ; 00434fb0
        ;   Label: LAB_00434fb0
    JLE 0x00434df6                      ; 00434fb7
        ;   XREF to: 00434df6 (CONDITIONAL_JUMP)  ; LAB_00434df6
    CMP EDX,EDI                         ; 00434fbd
    JG 0x00434df6                       ; 00434fbf
        ;   XREF to: 00434df6 (CONDITIONAL_JUMP)  ; LAB_00434df6
    CMP dword ptr [ESP + 0x138],0x0     ; 00434fc5
    JZ 0x004350cb                       ; 00434fcd
        ;   XREF to: 004350cb (CONDITIONAL_JUMP)  ; LAB_004350cb
    CMP dword ptr [ESP + 0x138],0x0     ; 00434fd3
        ;   Label: LAB_00434fd3
    JZ 0x00434df6                       ; 00434fdb
        ;   XREF to: 00434df6 (CONDITIONAL_JUMP)  ; LAB_00434df6
    MOV ECX,dword ptr [ESP + 0x1dc]     ; 00434fe1
    MOV EAX,EDX                         ; 00434fe8
    SUB EAX,ECX                         ; 00434fea
    MOV ECX,dword ptr [ESP + 0x214]     ; 00434fec
    DEC EAX                             ; 00434ff3
    CMP EAX,ECX                         ; 00434ff4
    JG 0x00434df6                       ; 00434ff6
        ;   XREF to: 00434df6 (CONDITIONAL_JUMP)  ; LAB_00434df6
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00434ffc
    MOV dword ptr [ESP + 0x170],EAX     ; 00435003
    MOV EAX,dword ptr [ESP + 0x184]     ; 0043500a
    MOV dword ptr [ESP + 0x178],EDX     ; 00435011
    MOV dword ptr [ESP + 0x150],EAX     ; 00435018
    MOV EDX,EAX                         ; 0043501f
    MOV dword ptr [ESP + 0x17c],0x1     ; 00435021
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043502c
    MOV ECX,dword ptr [ESP + 0x170]     ; 00435033
    ADD EAX,0x823e20                    ; 0043503a | g_TracedEdgeBuffer
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043503f
    AND word ptr [EAX],0x0              ; 00435046 | g_TracedEdgeBuffer
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043504a
    OR word ptr [EAX],CX                ; 00435051 | g_TracedEdgeBuffer
    MOV ECX,dword ptr [ESP + 0x150]     ; 00435054
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043505b
    AND word ptr [EAX + 0x2],0x0        ; 00435062 | g_TracedEdgeBuffer[0].y0
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00435067
    OR word ptr [EAX + 0x2],CX          ; 0043506e | g_TracedEdgeBuffer[0].y0
    MOV ECX,dword ptr [ESP + 0x178]     ; 00435072
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00435079
    AND word ptr [EAX + 0x4],0x0        ; 00435080 | g_TracedEdgeBuffer[0].x1
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00435085
    OR word ptr [EAX + 0x4],CX          ; 0043508c | g_TracedEdgeBuffer[0].x1
    MOV CX,word ptr [EAX + 0x6]         ; 00435090 | g_TracedEdgeBuffer[0].y1
    AND ECX,0xffff8000                  ; 00435094
    AND DH,0x7f                         ; 0043509a
    MOV word ptr [EAX + 0x6],CX         ; 0043509d | g_TracedEdgeBuffer[0].y1
    OR ECX,EDX                          ; 004350a1
    MOV word ptr [EAX + 0x6],CX         ; 004350a3 | g_TracedEdgeBuffer[0].y1
    MOV EDX,dword ptr [ESP + 0x17c]     ; 004350a7
    MOV CH,byte ptr [EAX + 0x7]         ; 004350ae | g_TracedEdgeBuffer[0].y1+1
    XOR DH,DH                           ; 004350b1
    AND CH,0x7f                         ; 004350b3
    AND DL,0x1                          ; 004350b6
    MOV byte ptr [EAX + 0x7],CH         ; 004350b9 | g_TracedEdgeBuffer[0].y1+1
    SHL EDX,0xf                         ; 004350bc
    MOV CX,word ptr [EAX + 0x6]         ; 004350bf | g_TracedEdgeBuffer[0].y1
    OR ECX,EDX                          ; 004350c3
    INC EBX                             ; 004350c5
    JMP 0x00434df2                      ; 004350c6
        ;   XREF to: 00434df2 (UNCONDITIONAL_JUMP)  ; LAB_00434df2
    MOV EAX,EDX                         ; 004350cb
        ;   Label: LAB_004350cb
    SUB EAX,ESI                         ; 004350cd
    MOV ECX,dword ptr [ESP + 0x218]     ; 004350cf
    INC EAX                             ; 004350d6
    CMP EAX,ECX                         ; 004350d7
    JG 0x00434fd3                       ; 004350d9
        ;   XREF to: 00434fd3 (CONDITIONAL_JUMP)  ; LAB_00434fd3
    MOV EAX,dword ptr [ESP + 0x174]     ; 004350df
    MOV dword ptr [ESP + 0x168],EAX     ; 004350e6
    MOV dword ptr [ESP + 0x16c],0x1     ; 004350ed
    LEA EAX,[EBX*0x8 + 0x0]             ; 004350f8
    ADD EAX,0x823e20                    ; 004350ff | g_TracedEdgeBuffer
    MOV dword ptr [ESP + 0x164],EDX     ; 00435104
    MOV DX,word ptr [EAX]               ; 0043510b | g_TracedEdgeBuffer
    MOV dword ptr [ESP + 0x160],EBP     ; 0043510e
    AND EDX,0xffff0000                  ; 00435115
    MOV CX,word ptr [EAX + 0x2]         ; 0043511b | g_TracedEdgeBuffer[0].y0
    MOV word ptr [EAX],DX               ; 0043511f | g_TracedEdgeBuffer
    OR EDX,ESI                          ; 00435122
    AND ECX,0xffff0000                  ; 00435124
    MOV word ptr [EAX],DX               ; 0043512a | g_TracedEdgeBuffer
    MOV EDX,dword ptr [ESP + 0x160]     ; 0043512d
    MOV word ptr [EAX + 0x2],CX         ; 00435134 | g_TracedEdgeBuffer[0].y0
    OR ECX,EDX                          ; 00435138
    MOV word ptr [EAX + 0x2],CX         ; 0043513a | g_TracedEdgeBuffer[0].y0
    MOV CX,word ptr [EAX + 0x4]         ; 0043513e | g_TracedEdgeBuffer[0].x1
    AND ECX,0xffff0000                  ; 00435142
    MOV EDX,dword ptr [ESP + 0x164]     ; 00435148
    MOV word ptr [EAX + 0x4],CX         ; 0043514f | g_TracedEdgeBuffer[0].x1
    OR ECX,EDX                          ; 00435153
    MOV word ptr [EAX + 0x4],CX         ; 00435155 | g_TracedEdgeBuffer[0].x1
    MOV CX,word ptr [EAX + 0x6]         ; 00435159 | g_TracedEdgeBuffer[0].y1
    MOV EDX,dword ptr [ESP + 0x168]     ; 0043515d
    AND ECX,0xffff8000                  ; 00435164
    AND DH,0x7f                         ; 0043516a
    MOV word ptr [EAX + 0x6],CX         ; 0043516d | g_TracedEdgeBuffer[0].y1
    OR ECX,EDX                          ; 00435171
    MOV word ptr [EAX + 0x6],CX         ; 00435173 | g_TracedEdgeBuffer[0].y1
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00435177
    MOV CL,byte ptr [EAX + 0x7]         ; 0043517e | g_TracedEdgeBuffer[0].y1+1
    XOR DH,DH                           ; 00435181
    AND CL,0x7f                         ; 00435183
    AND DL,0x1                          ; 00435186
    MOV byte ptr [EAX + 0x7],CL         ; 00435189 | g_TracedEdgeBuffer[0].y1+1
    SHL EDX,0xf                         ; 0043518c
    MOV CX,word ptr [EAX + 0x6]         ; 0043518f | g_TracedEdgeBuffer[0].y1
    OR ECX,EDX                          ; 00435193
    INC EBX                             ; 00435195
    JMP 0x00434df2                      ; 00435196
        ;   XREF to: 00434df2 (UNCONDITIONAL_JUMP)  ; LAB_00434df2
    CMP EBX,0x200                       ; 0043519b
        ;   Label: LAB_0043519b
    JL 0x004351d7                       ; 004351a1
        ;   XREF to: 004351d7 (CONDITIONAL_JUMP)  ; LAB_004351d7
    PUSH EBP                            ; 004351a3
    PUSH EBX                            ; 004351a4
    PUSH 0x617fe6                       ; 004351a5 | = "Reached max trace edges: edges %d, sc..."
    LEA EAX,[ESP + 0xc]                 ; 004351aa
    PUSH EAX                            ; 004351ae
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004351af
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x618015                    ; 004351b4 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 004351b9
    MOV [0x02f0ca48],EAX                ; 004351bc | g_CurrentFilename
    MOV EAX,ESP                         ; 004351c1
    MOV EDX,0x8c0                       ; 004351c3
    PUSH EAX                            ; 004351c8
    MOV dword ptr [0x02f0ca4c],EDX      ; 004351c9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004351cf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004351d4
    CMP EDI,dword ptr [ESP + 0x1ac]     ; 004351d7
        ;   Label: LAB_004351d7
    JGE 0x00434e80                      ; 004351de
        ;   XREF to: 00434e80 (CONDITIONAL_JUMP)  ; LAB_00434e80
    XOR EAX,EAX                         ; 004351e4
    MOV dword ptr [ESP + 0x140],EAX     ; 004351e6
    LEA EAX,[EDI + -0x1]                ; 004351ed
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004351f0
    LEA EAX,[EDI + 0x1]                 ; 004351f7
    XOR EDX,EDX                         ; 004351fa
    MOV dword ptr [ESP + 0x124],EAX     ; 004351fc
    MOV EAX,dword ptr [ESP + 0x114]     ; 00435203
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0043520a
    MOV dword ptr [ESP + 0x1cc],EAX     ; 00435211
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 00435218
        ;   Label: LAB_00435218
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 00435223
    MOV EDX,dword ptr [ESP + 0x140]     ; 0043522a
    CMP EDX,dword ptr [EAX]             ; 00435231
    JGE 0x00434e80                      ; 00435233
        ;   XREF to: 00434e80 (CONDITIONAL_JUMP)  ; LAB_00434e80
    ADD EAX,dword ptr [ESP + 0x1a4]     ; 00435239
    MOV EDX,dword ptr [EAX + 0x4]       ; 00435240
    MOV ECX,dword ptr [EAX + 0x44]      ; 00435243
    MOV dword ptr [ESP + 0x1b4],EDX     ; 00435246
    LEA EAX,[EDX + ECX*0x1]             ; 0043524d
    XOR EDX,EDX                         ; 00435250
    MOV ECX,dword ptr [ESP + 0x128]     ; 00435252
    MOV dword ptr [ESP + 0x194],EDX     ; 00435259
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 00435260
    ADD EDX,ECX                         ; 00435267
    MOV ECX,dword ptr [EDX]             ; 00435269
    DEC ECX                             ; 0043526b
    MOV dword ptr [ESP + 0x1b0],ECX     ; 0043526c
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 00435273
    DEC EAX                             ; 0043527a
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 0043527b
    JGE 0x0043529b                      ; 00435282
        ;   XREF to: 0043529b (CONDITIONAL_JUMP)  ; LAB_0043529b
    ADD EDX,dword ptr [ESP + 0x1cc]     ; 00435284
    CMP EAX,dword ptr [EDX + 0x8]       ; 0043528b
    JLE 0x0043529b                      ; 0043528e
        ;   XREF to: 0043529b (CONDITIONAL_JUMP)  ; LAB_0043529b
    MOV dword ptr [ESP + 0x194],0x1     ; 00435290
    CMP EAX,dword ptr [ESP + 0x124]     ; 0043529b
        ;   Label: LAB_0043529b
    JLE 0x004352bc                      ; 004352a2
        ;   XREF to: 004352bc (CONDITIONAL_JUMP)  ; LAB_004352bc
    CMP EDI,dword ptr [ESP + 0x1b4]     ; 004352a4
    JL 0x004352bc                       ; 004352ab
        ;   XREF to: 004352bc (CONDITIONAL_JUMP)  ; LAB_004352bc
    MOV ECX,dword ptr [ESP + 0x194]     ; 004352ad
    TEST ECX,ECX                        ; 004352b4
    JZ 0x0043533c                       ; 004352b6
        ;   XREF to: 0043533c (CONDITIONAL_JUMP)  ; LAB_0043533c
    XOR EDX,EDX                         ; 004352bc
        ;   Label: LAB_004352bc
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 004352be
    MOV dword ptr [ESP + 0x12c],EDX     ; 004352c5
    IMUL EDX,ECX,0x84                   ; 004352cc
    ADD EDX,dword ptr [ESP + 0x1fc]     ; 004352d2
    MOV ECX,dword ptr [EDX]             ; 004352d9
    DEC ECX                             ; 004352db
    MOV dword ptr [ESP + 0x1b0],ECX     ; 004352dc
    MOV ECX,dword ptr [ESP + 0x140]     ; 004352e3
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 004352ea
    JGE 0x0043530a                      ; 004352f1
        ;   XREF to: 0043530a (CONDITIONAL_JUMP)  ; LAB_0043530a
    ADD EDX,dword ptr [ESP + 0x1a4]     ; 004352f3
    CMP EDI,dword ptr [EDX + 0x8]       ; 004352fa
    JLE 0x0043530a                      ; 004352fd
        ;   XREF to: 0043530a (CONDITIONAL_JUMP)  ; LAB_0043530a
    MOV dword ptr [ESP + 0x12c],0x1     ; 004352ff
    CMP EAX,dword ptr [ESP + 0x1c4]     ; 0043530a
        ;   Label: LAB_0043530a
    JL 0x004353f8                       ; 00435311
        ;   XREF to: 004353f8 (CONDITIONAL_JUMP)  ; LAB_004353f8
    MOV ECX,dword ptr [ESP + 0x140]     ; 00435317
        ;   Label: LAB_00435317
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 0043531e
    INC ECX                             ; 00435325
    ADD EDX,0x4                         ; 00435326
    MOV dword ptr [ESP + 0x140],ECX     ; 00435329
    MOV dword ptr [ESP + 0x1a4],EDX     ; 00435330
    JMP 0x00435218                      ; 00435337
        ;   XREF to: 00435218 (UNCONDITIONAL_JUMP)  ; LAB_00435218
    MOV dword ptr [ESP + 0x190],EAX     ; 0043533c
        ;   Label: LAB_0043533c
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00435343
    MOV dword ptr [ESP + 0x198],EAX     ; 0043534a
    LEA EAX,[EBX*0x8 + 0x0]             ; 00435351
    ADD EAX,0x823e20                    ; 00435358 | g_TracedEdgeBuffer
    MOV dword ptr [ESP + 0x1a0],ECX     ; 0043535d
    MOV CX,word ptr [EAX]               ; 00435364 | g_TracedEdgeBuffer[1].x0
    AND ECX,0xffff0000                  ; 00435367
    MOV word ptr [EAX],CX               ; 0043536d | g_TracedEdgeBuffer[1].x0
    OR ECX,EDI                          ; 00435370
    MOV word ptr [EAX],CX               ; 00435372 | g_TracedEdgeBuffer[1].x0
    MOV CX,word ptr [EAX + 0x2]         ; 00435375 | g_TracedEdgeBuffer[1].y0
    MOV dword ptr [ESP + 0x188],EBP     ; 00435379
    AND ECX,0xffff0000                  ; 00435380
    MOV EDX,dword ptr [ESP + 0x188]     ; 00435386
    MOV word ptr [EAX + 0x2],CX         ; 0043538d | g_TracedEdgeBuffer[1].y0
    OR ECX,EDX                          ; 00435391
    MOV word ptr [EAX + 0x2],CX         ; 00435393 | g_TracedEdgeBuffer[1].y0
    MOV CX,word ptr [EAX + 0x4]         ; 00435397 | g_TracedEdgeBuffer[1].x1
    AND ECX,0xffff0000                  ; 0043539b
    MOV EDX,dword ptr [ESP + 0x190]     ; 004353a1
    MOV word ptr [EAX + 0x4],CX         ; 004353a8 | g_TracedEdgeBuffer[1].x1
    OR ECX,EDX                          ; 004353ac
    MOV word ptr [EAX + 0x4],CX         ; 004353ae | g_TracedEdgeBuffer[1].x1
    MOV CX,word ptr [EAX + 0x6]         ; 004353b2 | g_TracedEdgeBuffer[1].y1
    MOV EDX,dword ptr [ESP + 0x198]     ; 004353b6
    AND ECX,0xffff8000                  ; 004353bd
    AND DH,0x7f                         ; 004353c3
    MOV word ptr [EAX + 0x6],CX         ; 004353c6 | g_TracedEdgeBuffer[1].y1
    OR ECX,EDX                          ; 004353ca
    MOV word ptr [EAX + 0x6],CX         ; 004353cc | g_TracedEdgeBuffer[1].y1
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 004353d0
    MOV CL,byte ptr [EAX + 0x7]         ; 004353d7 | g_TracedEdgeBuffer[1].y1+1
    XOR DH,DH                           ; 004353da
    AND CL,0x7f                         ; 004353dc
    AND DL,0x1                          ; 004353df
    MOV byte ptr [EAX + 0x7],CL         ; 004353e2 | g_TracedEdgeBuffer[1].y1+1
    SHL EDX,0xf                         ; 004353e5
    MOV CX,word ptr [EAX + 0x6]         ; 004353e8 | g_TracedEdgeBuffer[1].y1
    OR ECX,EDX                          ; 004353ec
    INC EBX                             ; 004353ee
    MOV word ptr [EAX + 0x6],CX         ; 004353ef | g_TracedEdgeBuffer[1].y1
    JMP 0x00435317                      ; 004353f3
        ;   XREF to: 00435317 (UNCONDITIONAL_JUMP)  ; LAB_00435317
    CMP EAX,ESI                         ; 004353f8
        ;   Label: LAB_004353f8
    JL 0x00435317                       ; 004353fa
        ;   XREF to: 00435317 (CONDITIONAL_JUMP)  ; LAB_00435317
    CMP dword ptr [ESP + 0x12c],0x0     ; 00435400
    JNZ 0x00435317                      ; 00435408
        ;   XREF to: 00435317 (CONDITIONAL_JUMP)  ; LAB_00435317
    MOV EDX,EDI                         ; 0043540e
    SUB EDX,EAX                         ; 00435410
    MOV ECX,dword ptr [ESP + 0x218]     ; 00435412
    INC EDX                             ; 00435419
    CMP EDX,ECX                         ; 0043541a
    JG 0x00435317                       ; 0043541c
        ;   XREF to: 00435317 (CONDITIONAL_JUMP)  ; LAB_00435317
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00435422
    MOV EAX,0x1                         ; 00435429
    MOV dword ptr [ESP + 0x100],EDI     ; 0043542e
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00435435
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043543c
    MOV ECX,dword ptr [ESP + 0x100]     ; 00435443
    ADD EAX,0x823e20                    ; 0043544a | g_TracedEdgeBuffer
    MOV dword ptr [ESP + 0x1e0],ECX     ; 0043544f
    AND word ptr [EAX],0x0              ; 00435456 | g_TracedEdgeBuffer[1].x0
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043545a
    MOV dword ptr [ESP + 0x104],EBP     ; 00435461
    OR word ptr [EAX],CX                ; 00435468 | g_TracedEdgeBuffer[1].x0
    MOV ECX,dword ptr [ESP + 0x104]     ; 0043546b
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00435472
    AND word ptr [EAX + 0x2],0x0        ; 00435479 | g_TracedEdgeBuffer[1].y0
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043547e
    OR word ptr [EAX + 0x2],CX          ; 00435485 | g_TracedEdgeBuffer[1].y0
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 00435489
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00435490
    AND word ptr [EAX + 0x4],0x0        ; 00435497 | g_TracedEdgeBuffer[1].x1
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 0043549c
    OR word ptr [EAX + 0x4],CX          ; 004354a3 | g_TracedEdgeBuffer[1].x1
    MOV CX,word ptr [EAX + 0x6]         ; 004354a7 | g_TracedEdgeBuffer[1].y1
    MOV EDX,dword ptr [ESP + 0x1c8]     ; 004354ab
    AND ECX,0xffff8000                  ; 004354b2
    AND DH,0x7f                         ; 004354b8
    MOV word ptr [EAX + 0x6],CX         ; 004354bb | g_TracedEdgeBuffer[1].y1
    OR ECX,EDX                          ; 004354bf
    MOV word ptr [EAX + 0x6],CX         ; 004354c1 | g_TracedEdgeBuffer[1].y1
    MOV EDX,dword ptr [ESP + 0x1b8]     ; 004354c5
    MOV CH,byte ptr [EAX + 0x7]         ; 004354cc | g_TracedEdgeBuffer[1].y1+1
    XOR DH,DH                           ; 004354cf
    AND CH,0x7f                         ; 004354d1
    AND DL,0x1                          ; 004354d4
    MOV byte ptr [EAX + 0x7],CH         ; 004354d7 | g_TracedEdgeBuffer[1].y1+1
    SHL EDX,0xf                         ; 004354da
    MOV CX,word ptr [EAX + 0x6]         ; 004354dd | g_TracedEdgeBuffer[1].y1
    OR ECX,EDX                          ; 004354e1
    INC EBX                             ; 004354e3
    MOV word ptr [EAX + 0x6],CX         ; 004354e4 | g_TracedEdgeBuffer[1].y1
    JMP 0x00435317                      ; 004354e8
        ;   XREF to: 00435317 (UNCONDITIONAL_JUMP)  ; LAB_00435317
    MOV EBP,dword ptr [ESP + 0x200]     ; 004354ed
        ;   Label: LAB_004354ed
    TEST EBP,EBP                        ; 004354f4
    JNZ 0x00435501                      ; 004354f6
        ;   XREF to: 00435501 (CONDITIONAL_JUMP)  ; LAB_00435501
    MOV EAX,dword ptr [ESP + 0x204]     ; 004354f8
    MOV dword ptr [EAX],EBP             ; 004354ff
    MOV EDI,dword ptr [ESP + 0x204]     ; 00435501
        ;   Label: LAB_00435501
    PUSH 0x8fc                          ; 00435508
    MOV EDI,dword ptr [EDI]             ; 0043550d
    LEA ESI,[EBX*0x8 + 0x0]             ; 0043550f
    SHL EDI,0x3                         ; 00435516
    PUSH 0x61802b                       ; 00435519 | = "..\\cockpit\\ckptutil.c"
    ADD EDI,ESI                         ; 0043551e
    PUSH EDI                            ; 00435520
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00435521
    PUSH EAX                            ; 00435528
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00435529
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0043552e
    MOV dword ptr [ESP + 0x200],EAX     ; 00435531
    TEST EAX,EAX                        ; 00435538
    JNZ 0x00435570                      ; 0043553a
        ;   XREF to: 00435570 (CONDITIONAL_JUMP)  ; LAB_00435570
    PUSH EDI                            ; 0043553c
    PUSH 0x618041                       ; 0043553d | = "Unable to allocate %u bytes for edge ..."
    LEA EAX,[ESP + 0x8]                 ; 00435542
    PUSH EAX                            ; 00435546
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00435547
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x61806c                    ; 0043554c | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 00435551
    MOV EAX,ESP                         ; 00435554
    MOV ECX,0x8ff                       ; 00435556
    PUSH EAX                            ; 0043555b
    MOV dword ptr [0x02f0ca48],EDX      ; 0043555c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00435562 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00435568
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043556d
    MOV EDI,dword ptr [ESP + 0x204]     ; 00435570
        ;   Label: LAB_00435570
    MOV EBP,dword ptr [ESP + 0x200]     ; 00435577
    MOV EDI,dword ptr [EDI]             ; 0043557e
    MOV ECX,ESI                         ; 00435580
    SHL EDI,0x3                         ; 00435582
    MOV ESI,0x823e20                    ; 00435585 | g_TracedEdgeBuffer
    ADD EDI,EBP                         ; 0043558a
    PUSH EDI                            ; 0043558c
    MOV EAX,ECX                         ; 0043558d
    SHR ECX,0x2                         ; 0043558f
    MOVSD.REP ES:EDI,ESI                ; 00435592 | g_TracedEdgeBuffer | g_TracedEdgeBuffer[0].x1
    MOV CL,AL                           ; 00435594
    AND CL,0x3                          ; 00435596
    MOVSB.REP ES:EDI,ESI                ; 00435599 | g_TracedEdgeBuffer[0].x1
    POP EDI                             ; 0043559b
    MOV EAX,dword ptr [ESP + 0x204]     ; 0043559c
    MOV EDX,dword ptr [EAX]             ; 004355a3
    ADD EDX,EBX                         ; 004355a5
    MOV ESI,EBP                         ; 004355a7
    MOV dword ptr [EAX],EDX             ; 004355a9
    MOV EAX,ESI                         ; 004355ab
    ADD ESP,0x1e4                       ; 004355ad
    POP EBP                             ; 004355b3
    POP EDI                             ; 004355b4
    POP ESI                             ; 004355b5
    POP EBX                             ; 004355b6
    RET                                 ; 004355b7

