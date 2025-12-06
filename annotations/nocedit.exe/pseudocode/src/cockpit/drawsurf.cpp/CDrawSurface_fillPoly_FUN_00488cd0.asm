; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0(CDrawSurface * this_ptr, int vertex_count, SPoint2i * vertices)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; SPoint2i *       Stack[0xc]:4   vertices
; Local Variables:
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_00621e74
;   TerminatedCString s_CDrawSurface_fillPoly_to_00621e8c
;   SEdgeTableEntry[40] g_GlobalEdgeTable
;   undefined4 g_GlobalEdgeTable[0].y_start
;   undefined4 g_GlobalEdgeTable[0].x_fixed_point
;   undefined4 g_GlobalEdgeTable[0].x_increment
;   undefined4 g_GlobalEdgeTable[1].x_start
;   undefined4 g_GlobalEdgeTable[1].x_fixed_point
;   undefined4 g_GlobalEdgeTable[1].x_increment
;   undefined4 g_GlobalEdgeTable[2].x_start
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488cd0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0
    PUSH ESI                            ; 00488cd1
    PUSH EDI                            ; 00488cd2
    PUSH EBP                            ; 00488cd3
    SUB ESP,0xcc                        ; 00488cd4
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00488cda
    CMP EDX,0x3                         ; 00488ce1
    JL 0x00488f5b                       ; 00488ce4 | LAB_00488f5b
        ;   XREF to: 00488f5b (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 00488cea
    LEA EBX,[EDX + -0x1]                ; 00488cec
    MOV dword ptr [ESP + 0xb8],ECX      ; 00488cef
    MOV dword ptr [ESP + 0xbc],ECX      ; 00488cf6
    TEST EDX,EDX                        ; 00488cfd
    JLE 0x00488d95                      ; 00488cff | LAB_00488d95
        ;   XREF to: 00488d95 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00488d05
    MOV EDI,0x2c6d2d0                   ; 00488d0c | SEdgeTableEntry[40] g_GlobalEdgeTable
    MOV dword ptr [ESP + 0xb4],EAX      ; 00488d11
    MOV ESI,dword ptr [ESP + 0xe8]      ; 00488d18
        ;   Label: LAB_00488d18
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00488d1f
    MOV EBP,dword ptr [ESI + EBX*0x8]   ; 00488d26
    MOV EDX,dword ptr [EAX + 0x8]       ; 00488d29
    MOV ECX,dword ptr [EAX + 0xc]       ; 00488d2c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00488d2f
    ADD EBP,EDX                         ; 00488d36
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00488d38
    MOV ESI,dword ptr [ESI + EBX*0x8 + 0x4] ; 00488d3f
    MOV EAX,dword ptr [EAX]             ; 00488d43
    ADD EAX,dword ptr [EDX + 0x8]       ; 00488d45
    MOV EBX,dword ptr [ESP + 0xb4]      ; 00488d48
    MOV EDX,dword ptr [EDX + 0xc]       ; 00488d4f
    MOV EBX,dword ptr [EBX + 0x4]       ; 00488d52
    ADD ESI,ECX                         ; 00488d55
    ADD EBX,EDX                         ; 00488d57
    MOV dword ptr [ESP + 0xb0],EAX      ; 00488d59
    CMP ESI,EBX                         ; 00488d60
    JNZ 0x00488f66                      ; 00488d62 | LAB_00488f66
        ;   XREF to: 00488f66 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0xb8]      ; 00488d68
        ;   Label: LAB_00488d68
    MOV EBP,dword ptr [ESP + 0xb4]      ; 00488d6f
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00488d76
    ADD EBP,0x8                         ; 00488d7d
    LEA EAX,[EBX + 0x1]                 ; 00488d80
    MOV dword ptr [ESP + 0xb4],EBP      ; 00488d83
    MOV dword ptr [ESP + 0xb8],EAX      ; 00488d8a
    CMP EAX,EDX                         ; 00488d91
    JL 0x00488d18                       ; 00488d93 | LAB_00488d18
        ;   XREF to: 00488d18 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0xbc]      ; 00488d95
        ;   Label: LAB_00488d95
    CMP ECX,0x2                         ; 00488d9c
    JL 0x00488f5b                       ; 00488d9f | LAB_00488f5b
        ;   XREF to: 00488f5b (CONDITIONAL_JUMP)
    LEA EBX,[ECX + -0x1]                ; 00488da5
    TEST EBX,EBX                        ; 00488da8
    JLE 0x00488e01                      ; 00488daa | LAB_00488e01
        ;   XREF to: 00488e01 (CONDITIONAL_JUMP)
    JLE 0x00488dfc                      ; 00488dac | LAB_00488dfc
        ;   Label: LAB_00488dac
        ;   XREF to: 00488dfc (CONDITIONAL_JUMP)
    MOV ECX,EBX                         ; 00488dae
    XOR EAX,EAX                         ; 00488db0
    SHL ECX,0x4                         ; 00488db2
    MOV EDI,dword ptr [EAX + 0x2c6d2e0] ; 00488db5 | g_GlobalEdgeTable[1].x_start
        ;   Label: LAB_00488db5
    CMP EDI,dword ptr [EAX + 0x2c6d2d0] ; 00488dbb | SEdgeTableEntry[40] g_GlobalEdgeTable
    JGE 0x00488df5                      ; 00488dc1 | LAB_00488df5
        ;   XREF to: 00488df5 (CONDITIONAL_JUMP)
    LEA EDI,[ESP + 0xa0]                ; 00488dc3
    LEA ESI,[EAX + 0x2c6d2d0]           ; 00488dca | SEdgeTableEntry[40] g_GlobalEdgeTable
    MOVSD ES:EDI,ESI                    ; 00488dd0 | SEdgeTableEntry[40] g_GlobalEdgeTable
    MOVSD ES:EDI,ESI                    ; 00488dd1 | g_GlobalEdgeTable[0].y_start
    MOVSD ES:EDI,ESI                    ; 00488dd2 | g_GlobalEdgeTable[0].x_fixed_point
    MOVSD ES:EDI,ESI                    ; 00488dd3 | g_GlobalEdgeTable[0].x_increment
    LEA EDI,[EAX + 0x2c6d2d0]           ; 00488dd4 | SEdgeTableEntry[40] g_GlobalEdgeTable
    LEA ESI,[EAX + 0x2c6d2e0]           ; 00488dda | g_GlobalEdgeTable[1].x_start
    MOVSD ES:EDI,ESI                    ; 00488de0 | SEdgeTableEntry[40] g_GlobalEdgeTable | g_GlobalEdgeTable[1].x_start
    MOVSD ES:EDI,ESI                    ; 00488de1 | g_GlobalEdgeTable[0].y_start | g_GlobalEdgeTable[1].y_start
    MOVSD ES:EDI,ESI                    ; 00488de2 | g_GlobalEdgeTable[0].x_fixed_point | g_GlobalEdgeTable[1].x_fixed_point
    MOVSD ES:EDI,ESI                    ; 00488de3 | g_GlobalEdgeTable[0].x_increment | g_GlobalEdgeTable[1].x_increment
    LEA ESI,[ESP + 0xa0]                ; 00488de4
    LEA EDI,[EAX + 0x2c6d2e0]           ; 00488deb | g_GlobalEdgeTable[1].x_start
    MOVSD ES:EDI,ESI                    ; 00488df1 | g_GlobalEdgeTable[1].x_start
    MOVSD ES:EDI,ESI                    ; 00488df2 | g_GlobalEdgeTable[1].y_start
    MOVSD ES:EDI,ESI                    ; 00488df3 | g_GlobalEdgeTable[1].x_fixed_point
    MOVSD ES:EDI,ESI                    ; 00488df4 | g_GlobalEdgeTable[1].x_increment
    ADD EAX,0x10                        ; 00488df5
        ;   Label: LAB_00488df5
    CMP EAX,ECX                         ; 00488df8
    JL 0x00488db5                       ; 00488dfa | LAB_00488db5
        ;   XREF to: 00488db5 (CONDITIONAL_JUMP)
    DEC EBX                             ; 00488dfc
        ;   Label: LAB_00488dfc
    TEST EBX,EBX                        ; 00488dfd
    JG 0x00488dac                       ; 00488dff | LAB_00488dac
        ;   XREF to: 00488dac (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00488e01
        ;   Label: LAB_00488e01
    MOV EAX,[0x02c6d2d0]                ; 00488e08 | SEdgeTableEntry[40] g_GlobalEdgeTable
    XOR EDI,EDI                         ; 00488e0d
    XOR EBP,EBP                         ; 00488e0f
    MOV dword ptr [ESP + 0xc8],EAX      ; 00488e11
    TEST ESI,ESI                        ; 00488e18
    JLE 0x00488f5b                      ; 00488e1a | LAB_00488f5b
        ;   XREF to: 00488f5b (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 00488e20
        ;   Label: LAB_00488e20
    SHL EAX,0x4                         ; 00488e22
    MOV dword ptr [ESP + 0xc4],EAX      ; 00488e25
    CMP EBP,dword ptr [ESP + 0xbc]      ; 00488e2c
        ;   Label: LAB_00488e2c
    JL 0x00489048                       ; 00488e33 | LAB_00489048
        ;   XREF to: 00489048 (CONDITIONAL_JUMP)
    LEA EAX,[EDI + -0x1]                ; 00488e39
        ;   Label: LAB_00488e39
    MOV dword ptr [ESP + 0xc0],EAX      ; 00488e3c
    MOV EBX,dword ptr [ESP + 0xc0]      ; 00488e43
        ;   Label: LAB_00488e43
    XOR EAX,EAX                         ; 00488e4a
    SHL EBX,0x2                         ; 00488e4c
    XOR ESI,ESI                         ; 00488e4f
    TEST EBX,EBX                        ; 00488e51
    JLE 0x00488e8a                      ; 00488e53 | LAB_00488e8a
        ;   XREF to: 00488e8a (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + EAX*0x1]   ; 00488e55
        ;   Label: LAB_00488e55
    MOV ECX,dword ptr [ESP + EAX*0x1 + 0x4] ; 00488e58
    SHL EDX,0x4                         ; 00488e5c
    SHL ECX,0x4                         ; 00488e5f
    MOV EDX,dword ptr [EDX + 0x2c6d2d8] ; 00488e62 | g_GlobalEdgeTable[0].x_fixed_point
    CMP EDX,dword ptr [ECX + 0x2c6d2d8] ; 00488e68 | g_GlobalEdgeTable[0].x_fixed_point
    JLE 0x00488e83                      ; 00488e6e | LAB_00488e83
        ;   XREF to: 00488e83 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x4] ; 00488e70
    MOV ECX,dword ptr [ESP + EAX*0x1]   ; 00488e74
    MOV dword ptr [ESP + EAX*0x1],EDX   ; 00488e77
    MOV ESI,0x1                         ; 00488e7a
    MOV dword ptr [ESP + EAX*0x1 + 0x4],ECX ; 00488e7f
    ADD EAX,0x4                         ; 00488e83
        ;   Label: LAB_00488e83
    CMP EAX,EBX                         ; 00488e86
    JL 0x00488e55                       ; 00488e88 | LAB_00488e55
        ;   XREF to: 00488e55 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 00488e8a
        ;   Label: LAB_00488e8a
    JNZ 0x00488e43                      ; 00488e8c | LAB_00488e43
        ;   XREF to: 00488e43 (CONDITIONAL_JUMP)
    CMP EDI,0x1                         ; 00488e8e
    JLE 0x00488eee                      ; 00488e91 | LAB_00488eee
        ;   XREF to: 00488eee (CONDITIONAL_JUMP)
    MOV EBX,0x4                         ; 00488e93
    LEA ESI,[EDI*0x4 + 0x0]             ; 00488e98
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 00488e9f
        ;   Label: LAB_00488e9f
    SHL EAX,0x4                         ; 00488ea2
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00488ea5
    MOV EAX,dword ptr [EAX + 0x2c6d2d8] ; 00488eac | g_GlobalEdgeTable[0].x_fixed_point
    MOV ECX,dword ptr [EDX + 0x8]       ; 00488eb2
    SAR EAX,0x10                        ; 00488eb5
    SUB EAX,ECX                         ; 00488eb8
    PUSH EAX                            ; 00488eba
    MOV ECX,dword ptr [EDX + 0xc]       ; 00488ebb
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00488ebe
    SUB EAX,ECX                         ; 00488ec5
    PUSH EAX                            ; 00488ec7
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x4] ; 00488ec8
    SHL EAX,0x4                         ; 00488ecc
    MOV EAX,dword ptr [EAX + 0x2c6d2d8] ; 00488ecf | g_GlobalEdgeTable[0].x_fixed_point
    MOV ECX,dword ptr [EDX + 0x8]       ; 00488ed5
    SAR EAX,0x10                        ; 00488ed8
    SUB EAX,ECX                         ; 00488edb
    PUSH EAX                            ; 00488edd
    PUSH EDX                            ; 00488ede
    ADD EBX,0x8                         ; 00488edf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 ; 00488ee2 | void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(CDrawSurface * this_ptr, int start_x, int y, int end_x)
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00488ee7
    CMP EBX,ESI                         ; 00488eea
    JL 0x00488e9f                       ; 00488eec | LAB_00488e9f
        ;   XREF to: 00488e9f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00488eee
        ;   Label: LAB_00488eee
    INC EDX                             ; 00488ef5
    XOR EBX,EBX                         ; 00488ef6
    MOV dword ptr [ESP + 0xc8],EDX      ; 00488ef8
    TEST EDI,EDI                        ; 00488eff
    JLE 0x00488f46                      ; 00488f01 | LAB_00488f46
        ;   XREF to: 00488f46 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00488f03
    MOV EAX,dword ptr [ESP + ESI*0x1]   ; 00488f05
        ;   Label: LAB_00488f05
    SHL EAX,0x4                         ; 00488f08
    ADD EAX,0x2c6d2d0                   ; 00488f0b | SEdgeTableEntry[40] g_GlobalEdgeTable
    MOV ECX,dword ptr [ESP + 0xc8]      ; 00488f10
    LEA EDX,[ESI + 0x4]                 ; 00488f17
    CMP ECX,dword ptr [EAX + 0x4]       ; 00488f1a | g_GlobalEdgeTable[0].y_start
    JL 0x0048907d                       ; 00488f1d | LAB_0048907d
        ;   XREF to: 0048907d (CONDITIONAL_JUMP)
    DEC EDI                             ; 00488f23
    MOV EAX,EDI                         ; 00488f24
    SUB EAX,EBX                         ; 00488f26
    SHL EAX,0x2                         ; 00488f28
    PUSH EAX                            ; 00488f2b
    LEA EAX,[ESP + 0x4]                 ; 00488f2c
    ADD EAX,EDX                         ; 00488f30
    PUSH EAX                            ; 00488f32
    LEA EAX,[ESP + 0x8]                 ; 00488f33
    ADD EAX,ESI                         ; 00488f37
    PUSH EAX                            ; 00488f39
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00488f3a | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00488f3f
    CMP EBX,EDI                         ; 00488f42
        ;   Label: LAB_00488f42
    JL 0x00488f05                       ; 00488f44 | LAB_00488f05
        ;   XREF to: 00488f05 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 00488f46
        ;   Label: LAB_00488f46
    JG 0x00488e2c                       ; 00488f48 | LAB_00488e2c
        ;   XREF to: 00488e2c (CONDITIONAL_JUMP)
    CMP EBP,dword ptr [ESP + 0xbc]      ; 00488f4e
    JL 0x00488e20                       ; 00488f55 | LAB_00488e20
        ;   XREF to: 00488e20 (CONDITIONAL_JUMP)
    ADD ESP,0xcc                        ; 00488f5b
        ;   Label: LAB_00488f5b
    POP EBP                             ; 00488f61
    POP EDI                             ; 00488f62
    POP ESI                             ; 00488f63
    POP EBX                             ; 00488f64
    RET                                 ; 00488f65
    JLE 0x00488f7e                      ; 00488f66 | LAB_00488f7e
        ;   Label: LAB_00488f66
        ;   XREF to: 00488f7e (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 00488f68
    MOV ESI,EBX                         ; 00488f6a
    MOV EBX,EAX                         ; 00488f6c
    MOV EAX,EBP                         ; 00488f6e
    MOV EBP,dword ptr [ESP + 0xb0]      ; 00488f70
    MOV dword ptr [ESP + 0xb0],EAX      ; 00488f77
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00488f7e
        ;   Label: LAB_00488f7e
    CMP EBX,dword ptr [EAX + 0x14]      ; 00488f85
    JL 0x00488d68                       ; 00488f88 | LAB_00488d68
        ;   XREF to: 00488d68 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [EAX + 0x1c]      ; 00488f8e
    JG 0x00488d68                       ; 00488f91 | LAB_00488d68
        ;   XREF to: 00488d68 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0xbc],0x28     ; 00488f97
    JL 0x00488fc3                       ; 00488f9f | LAB_00488fc3
        ;   XREF to: 00488fc3 (CONDITIONAL_JUMP)
    MOV EAX,0x621e74                    ; 00488fa1 | = "..\\cockpit\\drawsurf.cpp" | s_cockpit_drawsurf_cpp_00621e74 = ..\cockpit\drawsurf.cpp
    MOV EDX,0x578                       ; 00488fa6
    PUSH 0x621e8c                       ; 00488fab | = "CDrawSurface::fillPoly - too many edges!" | s_CDrawSurface_fillPoly_to_00621e8c = CDrawSurface::fillPoly - too many edges!
    MOV [0x02f0ca48],EAX                ; 00488fb0 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00488fb5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00488fbb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00488fc0
    MOV EAX,EBP                         ; 00488fc3
        ;   Label: LAB_00488fc3
    SHL EAX,0x10                        ; 00488fc5
    MOV EDX,0x10000                     ; 00488fc8
    MOV dword ptr [EDI + 0x8],EAX       ; 00488fcd | g_GlobalEdgeTable[0].x_fixed_point
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00488fd0
    MOV ECX,EDI                         ; 00488fd7
    INC EAX                             ; 00488fd9
    MOV dword ptr [EDI + 0x4],EBX       ; 00488fda | g_GlobalEdgeTable[0].y_start
    MOV dword ptr [ESP + 0xbc],EAX      ; 00488fdd
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00488fe4
    SUB EBX,ESI                         ; 00488feb
    SUB EAX,EBP                         ; 00488fed
    MOV dword ptr [EDI],ESI             ; 00488fef | SEdgeTableEntry[40] g_GlobalEdgeTable
    IMUL EDX                            ; 00488ff1
    IDIV EBX                            ; 00488ff3
    MOV dword ptr [ECX + 0xc],EAX       ; 00488ff5 | g_GlobalEdgeTable[0].x_increment
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00488ff8
    MOV EAX,dword ptr [ECX]             ; 00488fff | SEdgeTableEntry[40] g_GlobalEdgeTable
    MOV EBX,dword ptr [EDX + 0x14]      ; 00489001
    ADD EDI,0x10                        ; 00489004
    CMP EAX,EBX                         ; 00489007
    JGE 0x0048902b                      ; 00489009 | LAB_0048902b
        ;   XREF to: 0048902b (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0048900b
    MOV ESI,dword ptr [ECX]             ; 0048900d | SEdgeTableEntry[40] g_GlobalEdgeTable
    MOV EBP,dword ptr [ECX + 0xc]       ; 0048900f | g_GlobalEdgeTable[0].x_increment
    SUB EAX,ESI                         ; 00489012
    IMUL EAX,EBP                        ; 00489014
    MOV EDX,dword ptr [ECX + 0x8]       ; 00489017 | g_GlobalEdgeTable[0].x_fixed_point
    ADD EDX,EAX                         ; 0048901a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048901c
    MOV dword ptr [ECX + 0x8],EDX       ; 00489023 | g_GlobalEdgeTable[0].x_fixed_point
    MOV EAX,dword ptr [EAX + 0x14]      ; 00489026
    MOV dword ptr [ECX],EAX             ; 00489029 | SEdgeTableEntry[40] g_GlobalEdgeTable
    MOV EDX,dword ptr [ESP + 0xe0]      ; 0048902b
        ;   Label: LAB_0048902b
    MOV EAX,dword ptr [ECX + 0x4]       ; 00489032 | g_GlobalEdgeTable[0].y_start
    MOV EBX,dword ptr [EDX + 0x1c]      ; 00489035
    CMP EAX,EBX                         ; 00489038
    JLE 0x00488d68                      ; 0048903a | LAB_00488d68
        ;   XREF to: 00488d68 (CONDITIONAL_JUMP)
    MOV dword ptr [ECX + 0x4],EBX       ; 00489040 | g_GlobalEdgeTable[0].y_start
    JMP 0x00488d68                      ; 00489043 | LAB_00488d68
        ;   XREF to: 00488d68 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00489048
        ;   Label: LAB_00489048
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0048904f
    CMP ECX,dword ptr [EAX + 0x2c6d2d0] ; 00489056 | SEdgeTableEntry[40] g_GlobalEdgeTable
    JL 0x00488e39                       ; 0048905c | LAB_00488e39
        ;   XREF to: 00488e39 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0xc4]      ; 00489062
    MOV dword ptr [ESP + EDI*0x4],EBP   ; 00489069
    INC EDI                             ; 0048906c
    ADD EBX,0x10                        ; 0048906d
    INC EBP                             ; 00489070
    MOV dword ptr [ESP + 0xc4],EBX      ; 00489071
    JMP 0x00488e2c                      ; 00489078 | LAB_00488e2c
        ;   XREF to: 00488e2c (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX + 0x8]       ; 0048907d | g_GlobalEdgeTable[0].x_fixed_point
        ;   Label: LAB_0048907d
    ADD ESI,dword ptr [EAX + 0xc]       ; 00489080 | g_GlobalEdgeTable[0].x_increment
    INC EBX                             ; 00489083
    MOV dword ptr [EAX + 0x8],ESI       ; 00489084 | g_GlobalEdgeTable[0].x_fixed_point
    MOV ESI,EDX                         ; 00489087
    JMP 0x00488f42                      ; 00489089 | LAB_00488f42
        ;   XREF to: 00488f42 (UNCONDITIONAL_JUMP)

