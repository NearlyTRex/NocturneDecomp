; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_prim.c_setupAdvancedSoftwareEdge_FUN_00552f70(SRenderVertex * start_vertex, SRenderVertex * end_vertex)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   start_vertex
; SRenderVertex *  Stack[0x8]:4   end_vertex
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_ActiveEdgeCount
;   SSoftwareEdge[16] g_SoftwareEdgeTable
;   undefined4 g_SoftwareEdgeTable[0].y_max
;   undefined4 g_SoftwareEdgeTable[0].x_current
;   undefined4 g_SoftwareEdgeTable[0].x_gradient
;   undefined4 g_SoftwareEdgeTable[0].z_current
;   undefined4 g_SoftwareEdgeTable[0].z_gradient
;   undefined4 g_SoftwareEdgeTable[0].u_current
;   undefined4 g_SoftwareEdgeTable[0].u_gradient
;   undefined4 g_SoftwareEdgeTable[0].v_current
;   undefined4 g_SoftwareEdgeTable[0].v_gradient
;   undefined4 g_SoftwareEdgeTable[0].w_current
;   undefined4 g_SoftwareEdgeTable[0].w_gradient
;   undefined4 g_SoftwareEdgeTable[0].fog_current
;   undefined4 g_SoftwareEdgeTable[0].fog_gradient
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552f70
        ;   Label: engine_prim.c_setupAdvancedSoftwareEdge_FUN_00552f70
    PUSH ESI                            ; 00552f71
    PUSH EDI                            ; 00552f72
    PUSH EBP                            ; 00552f73
    SUB ESP,0x4                         ; 00552f74
    MOV ESI,dword ptr [ESP + 0x18]      ; 00552f77
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00552f7b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00552f7f
    MOV EDI,dword ptr [ESI + 0x14]      ; 00552f82
    SAR EBX,0x10                        ; 00552f85
    SAR EDI,0x10                        ; 00552f88
    CMP EDI,EBX                         ; 00552f8b
    JZ 0x0055316b                       ; 00552f8d
        ;   XREF to: 0055316b (CONDITIONAL_JUMP)  ; LAB_0055316b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00552f93
    CMP EDX,dword ptr [ESI + 0x14]      ; 00552f96
    JGE 0x00552fa7                      ; 00552f99
        ;   XREF to: 00552fa7 (CONDITIONAL_JUMP)  ; LAB_00552fa7
    MOV EAX,ESI                         ; 00552f9b
    MOV ESI,EBP                         ; 00552f9d
    MOV EBP,EAX                         ; 00552f9f
    MOV EAX,EDI                         ; 00552fa1
    MOV EDI,EBX                         ; 00552fa3
    MOV EBX,EAX                         ; 00552fa5
    MOV EAX,[0x030e56bc]                ; 00552fa7 | g_ActiveEdgeCount
        ;   Label: LAB_00552fa7
    LEA ECX,[EAX*0x8 + 0x0]             ; 00552fac
    ADD ECX,EAX                         ; 00552fb3
    SHL ECX,0x3                         ; 00552fb5
    ADD ECX,0x30e56c0                   ; 00552fb8 | g_SoftwareEdgeTable
    MOV dword ptr [ECX],EDI             ; 00552fbe | g_SoftwareEdgeTable
    MOV EAX,[0x030e5b40]                ; 00552fc0 | g_MinScanline
    MOV dword ptr [ECX + 0x4],EBX       ; 00552fc5 | g_SoftwareEdgeTable[0].y_max
    CMP EDI,EAX                         ; 00552fc8
    JGE 0x00552fd2                      ; 00552fca
        ;   XREF to: 00552fd2 (CONDITIONAL_JUMP)  ; LAB_00552fd2
    MOV dword ptr [0x030e5b40],EDI      ; 00552fcc | g_MinScanline
    CMP EBX,dword ptr [0x030e5b44]      ; 00552fd2 | g_MaxScanline
        ;   Label: LAB_00552fd2
    JLE 0x00552fe0                      ; 00552fd8
        ;   XREF to: 00552fe0 (CONDITIONAL_JUMP)  ; LAB_00552fe0
    MOV dword ptr [0x030e5b44],EBX      ; 00552fda | g_MaxScanline
    MOV EDI,dword ptr [ESI + 0x14]      ; 00552fe0
        ;   Label: LAB_00552fe0
    MOV EBX,dword ptr [EBP + 0x14]      ; 00552fe3
    SUB EBX,EDI                         ; 00552fe6
    CMP EBX,0x10000                     ; 00552fe8
    JNC 0x00553173                      ; 00552fee
        ;   XREF to: 00553173 (CONDITIONAL_JUMP)  ; LAB_00553173
    XOR EBX,EBX                         ; 00552ff4
    MOV EAX,dword ptr [EBP + 0x10]      ; 00552ff6
        ;   Label: LAB_00552ff6
    MOV EDX,dword ptr [ESI + 0x10]      ; 00552ff9
    MOV EDI,dword ptr [ESI + 0x14]      ; 00552ffc
    SUB EAX,EDX                         ; 00552fff
    AND EDI,0xffff                      ; 00553001
    MOV EDX,EAX                         ; 00553007
    MOV EAX,EBX                         ; 00553009
    XOR DI,0xffff                       ; 0055300b
    IMUL EDX                            ; 0055300f
    SHRD EAX,EDX,0x10                   ; 00553011
    MOV EDX,EAX                         ; 00553015
    MOV dword ptr [ECX + 0xc],EAX       ; 00553017 | g_SoftwareEdgeTable[0].x_gradient
    MOV EAX,EDI                         ; 0055301a
    IMUL EDX                            ; 0055301c
    SHRD EAX,EDX,0x10                   ; 0055301e
    MOV dword ptr [ESP],EAX             ; 00553022
    MOV EDX,dword ptr [ESP]             ; 00553025
    MOV EAX,dword ptr [ESI + 0x10]      ; 00553028
    ADD EAX,EDX                         ; 0055302b
    MOV dword ptr [ECX + 0x8],EAX       ; 0055302d | g_SoftwareEdgeTable[0].x_current
    MOV EAX,dword ptr [EBP + 0x18]      ; 00553030
    MOV EDX,dword ptr [ESI + 0x18]      ; 00553033
    SUB EAX,EDX                         ; 00553036
    MOV EDX,EAX                         ; 00553038
    MOV EAX,EBX                         ; 0055303a
    IMUL EDX                            ; 0055303c
    SHRD EAX,EDX,0x10                   ; 0055303e
    MOV EDX,EAX                         ; 00553042
    MOV dword ptr [ECX + 0x1c],EAX      ; 00553044 | g_SoftwareEdgeTable[0].u_gradient
    MOV EAX,EDI                         ; 00553047
    IMUL EDX                            ; 00553049
    SHRD EAX,EDX,0x10                   ; 0055304b
    MOV dword ptr [ESP],EAX             ; 0055304f
    MOV EDX,dword ptr [ESP]             ; 00553052
    MOV EAX,dword ptr [ESI + 0x18]      ; 00553055
    ADD EAX,EDX                         ; 00553058
    MOV dword ptr [ECX + 0x18],EAX      ; 0055305a | g_SoftwareEdgeTable[0].u_current
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0055305d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00553060
    SUB EAX,EDX                         ; 00553063
    MOV EDX,EAX                         ; 00553065
    MOV EAX,EBX                         ; 00553067
    IMUL EDX                            ; 00553069
    SHRD EAX,EDX,0x10                   ; 0055306b
    MOV EDX,EAX                         ; 0055306f
    MOV dword ptr [ECX + 0x24],EAX      ; 00553071 | g_SoftwareEdgeTable[0].v_gradient
    MOV EAX,EDI                         ; 00553074
    IMUL EDX                            ; 00553076
    SHRD EAX,EDX,0x10                   ; 00553078
    MOV dword ptr [ESP],EAX             ; 0055307c
    MOV EDX,dword ptr [ESP]             ; 0055307f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00553082
    ADD EAX,EDX                         ; 00553085
    MOV dword ptr [ECX + 0x20],EAX      ; 00553087 | g_SoftwareEdgeTable[0].v_current
    MOV EAX,dword ptr [EBP + 0x20]      ; 0055308a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0055308d
    SUB EAX,EDX                         ; 00553090
    MOV EDX,EAX                         ; 00553092
    MOV EAX,EBX                         ; 00553094
    IMUL EDX                            ; 00553096
    SHRD EAX,EDX,0x10                   ; 00553098
    MOV EDX,EAX                         ; 0055309c
    MOV dword ptr [ECX + 0x14],EAX      ; 0055309e | g_SoftwareEdgeTable[0].z_gradient
    MOV EAX,EDI                         ; 005530a1
    IMUL EDX                            ; 005530a3
    SHRD EAX,EDX,0x10                   ; 005530a5
    MOV dword ptr [ESP],EAX             ; 005530a9
    MOV EDX,dword ptr [ESP]             ; 005530ac
    MOV EAX,dword ptr [ESI + 0x20]      ; 005530af
    ADD EAX,EDX                         ; 005530b2
    MOV dword ptr [ECX + 0x10],EAX      ; 005530b4 | g_SoftwareEdgeTable[0].z_current
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005530b7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 005530ba
    SUB EAX,EDX                         ; 005530bd
    MOV EDX,EAX                         ; 005530bf
    MOV EAX,EBX                         ; 005530c1
    IMUL EDX                            ; 005530c3
    SHRD EAX,EDX,0x10                   ; 005530c5
    MOV EDX,EAX                         ; 005530c9
    MOV dword ptr [ECX + 0x34],EAX      ; 005530cb | g_SoftwareEdgeTable[0].fog_gradient
    MOV EAX,EDI                         ; 005530ce
    IMUL EDX                            ; 005530d0
    SHRD EAX,EDX,0x10                   ; 005530d2
    MOV dword ptr [ESP],EAX             ; 005530d6
    MOV EDX,dword ptr [ESP]             ; 005530d9
    MOV EAX,dword ptr [ESI + 0x2c]      ; 005530dc
    ADD EAX,EDX                         ; 005530df
    MOV dword ptr [ECX + 0x30],EAX      ; 005530e1 | g_SoftwareEdgeTable[0].fog_current
    MOV EAX,dword ptr [EBP + 0x8]       ; 005530e4
    MOV EDX,dword ptr [ESI + 0x8]       ; 005530e7
    SUB EAX,EDX                         ; 005530ea
    MOV EDX,EAX                         ; 005530ec
    MOV EAX,EBX                         ; 005530ee
    IMUL EDX                            ; 005530f0
    SHRD EAX,EDX,0x10                   ; 005530f2
    MOV EDX,EAX                         ; 005530f6
    MOV dword ptr [ECX + 0x2c],EAX      ; 005530f8 | g_SoftwareEdgeTable[0].w_gradient
    MOV EAX,EDI                         ; 005530fb
    IMUL EDX                            ; 005530fd
    SHRD EAX,EDX,0x10                   ; 005530ff
    MOV dword ptr [ESP],EAX             ; 00553103
    MOV EDX,dword ptr [ESP]             ; 00553106
    MOV EAX,dword ptr [ESI + 0x8]       ; 00553109
    ADD EAX,EDX                         ; 0055310c
    MOV dword ptr [ECX + 0x28],EAX      ; 0055310e | g_SoftwareEdgeTable[0].w_current
    MOV EAX,dword ptr [EBP + 0x24]      ; 00553111
    MOV EDX,dword ptr [ESI + 0x24]      ; 00553114
    SUB EAX,EDX                         ; 00553117
    MOV EDX,EAX                         ; 00553119
    MOV EAX,EBX                         ; 0055311b
    IMUL EDX                            ; 0055311d
    SHRD EAX,EDX,0x10                   ; 0055311f
    MOV EDX,EAX                         ; 00553123
    MOV dword ptr [ECX + 0x3c],EAX      ; 00553125 | g_SoftwareEdgeTable[0].r_gradient
    MOV EAX,EDI                         ; 00553128
    IMUL EDX                            ; 0055312a
    SHRD EAX,EDX,0x10                   ; 0055312c
    MOV dword ptr [ESP],EAX             ; 00553130
    MOV EDX,dword ptr [ESP]             ; 00553133
    MOV EAX,dword ptr [ESI + 0x24]      ; 00553136
    ADD EAX,EDX                         ; 00553139
    MOV dword ptr [ECX + 0x38],EAX      ; 0055313b | g_SoftwareEdgeTable[0].r_current
    MOV EDX,dword ptr [EBP + 0x28]      ; 0055313e
    MOV EBP,dword ptr [ESI + 0x28]      ; 00553141
    MOV EAX,EBX                         ; 00553144
    SUB EDX,EBP                         ; 00553146
    IMUL EDX                            ; 00553148
    SHRD EAX,EDX,0x10                   ; 0055314a
    MOV EDX,EAX                         ; 0055314e
    MOV dword ptr [ECX + 0x44],EAX      ; 00553150 | g_SoftwareEdgeTable[0].g_gradient
    MOV EAX,EDI                         ; 00553153
    IMUL EDX                            ; 00553155
    SHRD EAX,EDX,0x10                   ; 00553157
    MOV EDX,EAX                         ; 0055315b
    MOV EAX,dword ptr [ESI + 0x28]      ; 0055315d
    ADD EAX,EDX                         ; 00553160
    MOV dword ptr [ECX + 0x40],EAX      ; 00553162 | g_SoftwareEdgeTable[0].g_current
    INC dword ptr [0x030e56bc]          ; 00553165 | g_ActiveEdgeCount
    ADD ESP,0x4                         ; 0055316b
        ;   Label: LAB_0055316b
    POP EBP                             ; 0055316e
    POP EDI                             ; 0055316f
    POP ESI                             ; 00553170
    POP EBX                             ; 00553171
    RET                                 ; 00553172
    MOV EAX,0xffffffff                  ; 00553173
        ;   Label: LAB_00553173
    XOR EDX,EDX                         ; 00553178
    DIV EBX                             ; 0055317a
    MOV EBX,EAX                         ; 0055317c
    JMP 0x00552ff6                      ; 0055317e
        ;   XREF to: 00552ff6 (UNCONDITIONAL_JUMP)  ; LAB_00552ff6

