; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined1       Stack[-0x98]:1  local_98
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
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c7ae
;
; Referenced Globals:
;   TerminatedCString s_g_00646588
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   float[250] g_VDCameraScores
;   CZThumb[1500] g_CZThumbPool
;   undefined4 DAT_0334710c
;   undefined4 DAT_03347130
;   undefined4 DAT_03347158
;   undefined4 DAT_03347180
;   int[250] g_VDCameraSortIndices
;   undefined4 DAT_033648fc
;   undefined4 DAT_03364900
;
; Called Functions:
;   core_setdir.cpp_CZThumb_render_FUN_00574f20
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575f70
        ;   Label: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70
    PUSH ESI                            ; 00575f71
    PUSH EDI                            ; 00575f72
    PUSH EBP                            ; 00575f73
    SUB ESP,0x88                        ; 00575f74
    MOV EDI,dword ptr [ESP + 0x9c]      ; 00575f7a
    MOV EDX,dword ptr [EDI]             ; 00575f81
    XOR EAX,EAX                         ; 00575f83
    TEST EDX,EDX                        ; 00575f85
    JLE 0x00575fa0                      ; 00575f87 | LAB_00575fa0
        ;   XREF to: 00575fa0 (CONDITIONAL_JUMP)
    XOR EBP,EBP                         ; 00575f89
    MOV dword ptr [EBP + 0x33648f8],EAX ; 00575f8b | DAT_033648fc | g_VDCameraSortIndices
        ;   Label: LAB_00575f8b
    INC EAX                             ; 00575f91
    MOV ECX,dword ptr [EDI]             ; 00575f92
    ADD EBP,0x4                         ; 00575f94
    CMP EAX,ECX                         ; 00575f97
    JL 0x00575f8b                       ; 00575f99 | LAB_00575f8b
        ;   XREF to: 00575f8b (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00575f9b
    MOV ECX,ECX                         ; 00575f9e
    XOR EBP,EBP                         ; 00575fa0
        ;   Label: LAB_00575fa0
    MOV dword ptr [ESP + 0x70],EBP      ; 00575fa2
    MOV EAX,dword ptr [EDI]             ; 00575fa6
        ;   Label: LAB_00575fa6
    DEC EAX                             ; 00575fa8
    CMP EBP,EAX                         ; 00575fa9
    JGE 0x0057600e                      ; 00575fab | LAB_0057600e
        ;   XREF to: 0057600e (CONDITIONAL_JUMP)
    LEA ECX,[EBP + 0x1]                 ; 00575fad
    CMP ECX,dword ptr [EDI]             ; 00575fb0
    JGE 0x00576000                      ; 00575fb2 | LAB_00576000
        ;   XREF to: 00576000 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x70]      ; 00575fb4
    LEA EDX,[ECX*0x4 + 0x0]             ; 00575fb8
    MOV EAX,dword ptr [EBX + 0x33648f8] ; 00575fbf | int[250] g_VDCameraSortIndices
        ;   Label: LAB_00575fbf
    MOV ESI,dword ptr [EDX + 0x33648f8] ; 00575fc5 | DAT_033648fc
    FLD float ptr [EAX*0x4 + 0x3346d20] ; 00575fcb | float[250] g_VDCameraScores
    FCOMP float ptr [ESI*0x4 + 0x3346d20] ; 00575fd2 | float[250] g_VDCameraScores
    FNSTSW AX                           ; 00575fd9
    SAHF                                ; 00575fdb
    JNC 0x00575ff6                      ; 00575fdc | LAB_00575ff6
        ;   XREF to: 00575ff6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0x33648f8] ; 00575fde | DAT_033648fc
    MOV ESI,dword ptr [EBX + 0x33648f8] ; 00575fe4 | int[250] g_VDCameraSortIndices
    MOV dword ptr [EBX + 0x33648f8],EAX ; 00575fea | int[250] g_VDCameraSortIndices
    MOV dword ptr [EDX + 0x33648f8],ESI ; 00575ff0 | DAT_033648fc
    INC ECX                             ; 00575ff6
        ;   Label: LAB_00575ff6
    MOV EAX,dword ptr [EDI]             ; 00575ff7
    ADD EDX,0x4                         ; 00575ff9
    CMP ECX,EAX                         ; 00575ffc
    JL 0x00575fbf                       ; 00575ffe | LAB_00575fbf
        ;   XREF to: 00575fbf (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x70]      ; 00576000
        ;   Label: LAB_00576000
    ADD EDX,0x4                         ; 00576004
    INC EBP                             ; 00576007
    MOV dword ptr [ESP + 0x70],EDX      ; 00576008
    JMP 0x00575fa6                      ; 0057600c | LAB_00575fa6
        ;   XREF to: 00575fa6 (UNCONDITIONAL_JUMP)
    MOV EBX,0x2                         ; 0057600e
        ;   Label: LAB_0057600e
    MOV ECX,0x9                         ; 00576013
    MOV ESI,dword ptr [0x00679398]      ; 00576018 | int g_WindowHeight
    MOV EBP,dword ptr [EDI]             ; 0057601e
    SUB ESI,0xb2                        ; 00576020
    CMP EBP,ECX                         ; 00576026
    JGE 0x0057602c                      ; 00576028 | LAB_0057602c
        ;   XREF to: 0057602c (CONDITIONAL_JUMP)
    MOV ECX,EBP                         ; 0057602a
    TEST ECX,ECX                        ; 0057602c
        ;   Label: LAB_0057602c
    JLE 0x00576175                      ; 0057602e | LAB_00576175
        ;   XREF to: 00576175 (CONDITIONAL_JUMP)
    LEA EAX,[EDI + 0x4]                 ; 00576034
    SHL ECX,0x2                         ; 00576037
    XOR EBP,EBP                         ; 0057603a
    MOV dword ptr [ESP + 0x64],EAX      ; 0057603c
    LEA EAX,[ESI + -0xb]                ; 00576040
    MOV dword ptr [ESP + 0x7c],EBP      ; 00576043
    MOV dword ptr [ESP + 0x78],EAX      ; 00576047
    LEA EAX,[ESI + 0x9a]                ; 0057604b
    MOV dword ptr [ESP + 0x68],ECX      ; 00576051
    MOV dword ptr [ESP + 0x74],EAX      ; 00576055
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00576059
        ;   Label: LAB_00576059
    MOV EAX,dword ptr [EAX + 0x33648f8] ; 0057605d | DAT_033648fc | g_VDCameraSortIndices
    MOV ECX,EAX                         ; 00576063
    MOV dword ptr [ESP + 0x84],EAX      ; 00576065
    IMUL EAX,EAX,0x1a4                  ; 0057606c
    IMUL EBP,ECX,0xf0                   ; 00576072
    MOV EDX,0x3347108                   ; 00576078 | CZThumb[1500] g_CZThumbPool
    ADD EDX,EBP                         ; 0057607d
    MOV dword ptr [ESP + 0x80],EDX      ; 0057607f
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x144] ; 00576086
    MOV dword ptr [ESP + 0x6c],EBX      ; 0057608d
    TEST EDX,EDX                        ; 00576091
    JNZ 0x00576180                      ; 00576093 | LAB_00576180
        ;   XREF to: 00576180 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00576099
    PUSH EBX                            ; 0057609a
    MOV ECX,dword ptr [ESP + 0x88]      ; 0057609b
    PUSH ECX                            ; 005760a2
    CALL core_setdir.cpp_CZThumb_render_FUN_00574f20 ; 005760a3 | void core_setdir.cpp_CZThumb_render_FUN_00574f20(CZThumb * this_ptr, int screen_x, int screen_y)
        ;   XREF to: 00574f20 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x3347108] ; 005760a8 | CZThumb[1500] g_CZThumbPool
    SUB EAX,0x2                         ; 005760ae
        ;   Label: LAB_005760ae
    ADD ESP,0xc                         ; 005760b1
    ADD EBX,EAX                         ; 005760b4
    MOV EAX,dword ptr [ESP + 0x84]      ; 005760b6
    SUB ESP,0x8                         ; 005760bd
    FLD float ptr [EAX*0x4 + 0x3346d20] ; 005760c0 | float[250] g_VDCameraScores
    FSTP double ptr [ESP]               ; 005760c7
    PUSH 0x646588                       ; 005760ca | = "%g" | s_g_00646588 = %g
    LEA EAX,[ESP + 0xc]                 ; 005760cf
    PUSH EAX                            ; 005760d3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005760d4 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005760d9
    IMUL EAX,dword ptr [ESP + 0x84],0xf0 ; 005760dc
    MOV EAX,dword ptr [EAX + 0x334710c] ; 005760e7 | DAT_0334710c
    ADD EAX,ESI                         ; 005760ed
    PUSH EAX                            ; 005760ef
    MOV ECX,dword ptr [ESP + 0x70]      ; 005760f0
    PUSH ECX                            ; 005760f4
    LEA EAX,[ESP + 0x8]                 ; 005760f5
    PUSH EAX                            ; 005760f9
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005760fa | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005760ff
    MOV EBP,dword ptr [ESP + 0x78]      ; 00576102
    PUSH EBP                            ; 00576106
    MOV EAX,dword ptr [ESP + 0x70]      ; 00576107
    MOV EDX,dword ptr [ESP + 0x88]      ; 0057610b
    PUSH EAX                            ; 00576112
    IMUL EAX,EDX,0x1a4                  ; 00576113
    ADD EAX,dword ptr [ESP + 0x6c]      ; 00576119
    PUSH EAX                            ; 0057611d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057611e | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [0x00679394]      ; 00576123 | int g_WindowWidth
    LEA EAX,[EBX + 0x42]                ; 00576129
    ADD ESP,0xc                         ; 0057612c
    ADD EBX,0x2                         ; 0057612f
    CMP EAX,EBP                         ; 00576132
    JLE 0x0057615e                      ; 00576134 | LAB_0057615e
        ;   XREF to: 0057615e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x74]      ; 00576136
    MOV EDX,dword ptr [ESP + 0x78]      ; 0057613a
    MOV EBX,0x2                         ; 0057613e
    MOV EBP,dword ptr [0x00679398]      ; 00576143 | int g_WindowHeight
    ADD ESI,0x58                        ; 00576149
    ADD EDX,0x58                        ; 0057614c
    LEA ECX,[EAX + 0x58]                ; 0057614f
    MOV dword ptr [ESP + 0x78],EDX      ; 00576152
    MOV dword ptr [ESP + 0x74],ECX      ; 00576156
    CMP EAX,EBP                         ; 0057615a
    JG 0x00576175                       ; 0057615c | LAB_00576175
        ;   XREF to: 00576175 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0057615e
        ;   Label: LAB_0057615e
    ADD EDX,0x4                         ; 00576162
    MOV ECX,dword ptr [ESP + 0x68]      ; 00576165
    MOV dword ptr [ESP + 0x7c],EDX      ; 00576169
    CMP EDX,ECX                         ; 0057616d
    JL 0x00576059                       ; 0057616f | LAB_00576059
        ;   XREF to: 00576059 (CONDITIONAL_JUMP)
    ADD ESP,0x88                        ; 00576175
        ;   Label: LAB_00576175
    POP EBP                             ; 0057617b
    POP EDI                             ; 0057617c
    POP ESI                             ; 0057617d
    POP EBX                             ; 0057617e
    RET                                 ; 0057617f
    PUSH ESI                            ; 00576180
        ;   Label: LAB_00576180
    MOV EAX,dword ptr [ESP + 0x84]      ; 00576181
    PUSH EBX                            ; 00576188
    ADD EAX,0x78                        ; 00576189
    PUSH EAX                            ; 0057618c
    CALL core_setdir.cpp_CZThumb_render_FUN_00574f20 ; 0057618d | void core_setdir.cpp_CZThumb_render_FUN_00574f20(CZThumb * this_ptr, int screen_x, int screen_y)
        ;   XREF to: 00574f20 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x3347180] ; 00576192 | DAT_03347180
    ADD ESP,0xc                         ; 00576198
    SUB EAX,0x2                         ; 0057619b
    PUSH ESI                            ; 0057619e
    ADD EBX,EAX                         ; 0057619f
    PUSH EBX                            ; 005761a1
    MOV EAX,dword ptr [ESP + 0x88]      ; 005761a2
    PUSH EAX                            ; 005761a9
    CALL core_setdir.cpp_CZThumb_render_FUN_00574f20 ; 005761aa | void core_setdir.cpp_CZThumb_render_FUN_00574f20(CZThumb * this_ptr, int screen_x, int screen_y)
        ;   XREF to: 00574f20 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x3347108] ; 005761af | CZThumb[1500] g_CZThumbPool
    ADD ESP,0xc                         ; 005761b5
    SUB EAX,0x2                         ; 005761b8
    PUSH ESI                            ; 005761bb
    ADD EBX,EAX                         ; 005761bc
    MOV EAX,dword ptr [ESP + 0x84]      ; 005761be
    PUSH EBX                            ; 005761c5
    ADD EAX,0x50                        ; 005761c6
    PUSH EAX                            ; 005761c9
    CALL core_setdir.cpp_CZThumb_render_FUN_00574f20 ; 005761ca | void core_setdir.cpp_CZThumb_render_FUN_00574f20(CZThumb * this_ptr, int screen_x, int screen_y)
        ;   XREF to: 00574f20 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x3347158] ; 005761cf | DAT_03347158
    ADD ESP,0xc                         ; 005761d5
    SUB EAX,0x2                         ; 005761d8
    PUSH ESI                            ; 005761db
    ADD EBX,EAX                         ; 005761dc
    MOV EAX,dword ptr [ESP + 0x84]      ; 005761de
    PUSH EBX                            ; 005761e5
    ADD EAX,0x28                        ; 005761e6
    PUSH EAX                            ; 005761e9
    CALL core_setdir.cpp_CZThumb_render_FUN_00574f20 ; 005761ea | void core_setdir.cpp_CZThumb_render_FUN_00574f20(CZThumb * this_ptr, int screen_x, int screen_y)
        ;   XREF to: 00574f20 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x3347130] ; 005761ef | DAT_03347130
    JMP 0x005760ae                      ; 005761f5 | LAB_005760ae
        ;   XREF to: 005760ae (UNCONDITIONAL_JUMP)

