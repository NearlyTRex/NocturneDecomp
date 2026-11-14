; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_fillRect_FUN_00518010(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[11]:
;   engine_mini3d.cpp_drawHLine_FUN_005182e0 at 005182f0
;   engine_mini3d.cpp_drawPixel_FUN_00517f10 at 00517f1c
;   engine_mini3d.cpp_drawVLine_FUN_00518300 at 00518314
;   shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 at 0049bbdc
;   shape_edittool.cpp_FUN_00492c20 at 00492cbe
;   shape_edittool.cpp_FUN_00492d40 at 00492d6a
;   shape_edittool.cpp_FUN_004934b0 at 0049365e
;   shape_edittool.cpp_FUN_004962b0 at 004964d9
;   shape_edittool.cpp_FUN_00496ee0 at 00497098
;   shape_edittool.cpp_FUN_0049c500 at 0049c685
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005e903f
;   undefined4 DAT_005e9043
;   undefined4 DAT_0061f5d8
;   undefined4 DAT_0061f5e8
;   undefined4 DAT_01d224b8
;   undefined4 DAT_01d224cc
;   undefined4 DAT_01d224d0
;   undefined4 DAT_01d224d4
;   undefined4 DAT_01d224d8
;   undefined4 DAT_01d22544
;   undefined4 DAT_01d25f44
;   undefined4 DAT_01d2ad74
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_mini3d.cpp_nextDepth2D_FUN_00518320
;   engine_mini3d.cpp_polyListD3DTL_FUN_00512de0
;   engine_mini3d.cpp_useTexture_FUN_005121b0
;
; *****************************************************************************

section .text

    SUB ESP,0x14                        ; 00518010
        ;   Label: engine_mini3d.cpp_fillRect_FUN_00518010
    MOV EAX,dword ptr [ESP + 0x18]      ; 00518013
    MOV dword ptr [ESP + 0x10],EAX      ; 00518017
    FILD dword ptr [ESP + 0x10]         ; 0051801b
    FCOMP float ptr [0x01d224cc]        ; 0051801f | DAT_01d224cc
    FNSTSW AX                           ; 00518025
    SAHF                                ; 00518027
    JC 0x005180b8                       ; 00518028
        ;   XREF to: 005180b8 (CONDITIONAL_JUMP)  ; LAB_005180b8
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051802e
        ;   Label: LAB_0051802e
    MOV dword ptr [ESP + 0x10],EAX      ; 00518032
    FILD dword ptr [ESP + 0x10]         ; 00518036
    FCOMP float ptr [0x01d224d4]        ; 0051803a | DAT_01d224d4
    FNSTSW AX                           ; 00518040
    SAHF                                ; 00518042
    JBE 0x00518054                      ; 00518043
        ;   XREF to: 00518054 (CONDITIONAL_JUMP)  ; LAB_00518054
    FLD float ptr [0x01d224d4]          ; 00518045 | DAT_01d224d4
    CALL crt_math.c_round_FUN_005c03a0  ; 0051804b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x20]        ; 00518050
    MOV EAX,dword ptr [ESP + 0x18]      ; 00518054
        ;   Label: LAB_00518054
    CMP EAX,dword ptr [ESP + 0x20]      ; 00518058
    JG 0x005180b4                       ; 0051805c
        ;   XREF to: 005180b4 (CONDITIONAL_JUMP)  ; LAB_005180b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051805e
    MOV dword ptr [ESP + 0x10],EAX      ; 00518062
    FILD dword ptr [ESP + 0x10]         ; 00518066
    FCOMP float ptr [0x01d224d0]        ; 0051806a | DAT_01d224d0
    FNSTSW AX                           ; 00518070
    SAHF                                ; 00518072
    JNC 0x00518084                      ; 00518073
        ;   XREF to: 00518084 (CONDITIONAL_JUMP)  ; LAB_00518084
    FLD float ptr [0x01d224d0]          ; 00518075 | DAT_01d224d0
    CALL crt_math.c_round_FUN_005c03a0  ; 0051807b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1c]        ; 00518080
    MOV EAX,dword ptr [ESP + 0x24]      ; 00518084
        ;   Label: LAB_00518084
    MOV dword ptr [ESP + 0x10],EAX      ; 00518088
    FILD dword ptr [ESP + 0x10]         ; 0051808c
    FCOMP float ptr [0x01d224d8]        ; 00518090 | DAT_01d224d8
    FNSTSW AX                           ; 00518096
    SAHF                                ; 00518098
    JBE 0x005180aa                      ; 00518099
        ;   XREF to: 005180aa (CONDITIONAL_JUMP)  ; LAB_005180aa
    FLD float ptr [0x01d224d8]          ; 0051809b | DAT_01d224d8
    CALL crt_math.c_round_FUN_005c03a0  ; 005180a1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x24]        ; 005180a6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005180aa
        ;   Label: LAB_005180aa
    CMP EAX,dword ptr [ESP + 0x24]      ; 005180ae
    JLE 0x005180cc                      ; 005180b2
        ;   XREF to: 005180cc (CONDITIONAL_JUMP)  ; LAB_005180cc
    ADD ESP,0x14                        ; 005180b4
        ;   Label: LAB_005180b4
    RET                                 ; 005180b7
    FLD float ptr [0x01d224cc]          ; 005180b8 | DAT_01d224cc
        ;   Label: LAB_005180b8
    CALL crt_math.c_round_FUN_005c03a0  ; 005180be
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x18]        ; 005180c3
    JMP 0x0051802e                      ; 005180c7
        ;   XREF to: 0051802e (UNCONDITIONAL_JUMP)  ; LAB_0051802e
    PUSH EDI                            ; 005180cc
        ;   Label: LAB_005180cc
    PUSH ESI                            ; 005180cd
    PUSH EBX                            ; 005180ce
    CALL engine_mini3d.cpp_nextDepth2D_FUN_00518320 ; 005180cf
        ;   XREF to: 00518320 (UNCONDITIONAL_CALL)  ; float engine_mini3d.cpp_nextDepth2D_FUN_00518320()
    MOV dword ptr [ESP + 0x1c],EAX      ; 005180d4
    FLD1                                ; 005180d8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005180da
    MOV dword ptr [ESP + 0x18],EAX      ; 005180de
    FDIV float ptr [ESP + 0x18]         ; 005180e2
    MOV EAX,dword ptr [ESP + 0x24]      ; 005180e6
    MOV dword ptr [ESP + 0x1c],EAX      ; 005180ea
    FLD float ptr [0x01d22544]          ; 005180ee | DAT_01d22544
    FILD dword ptr [ESP + 0x1c]         ; 005180f4
    FMUL ST1                            ; 005180f8
    FLD float ptr [0x005e903f]          ; 005180fa | DAT_005e903f
    FXCH                                ; 00518100
    FADD ST0,ST1                        ; 00518102
    MOV EBX,dword ptr [0x01d2ad74]      ; 00518104 | DAT_01d2ad74
    FSTP float ptr [ESP + 0xc]          ; 0051810a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051810e
    MOV dword ptr [EBX],EAX             ; 00518112
    MOV EAX,dword ptr [ESP + 0x28]      ; 00518114
    MOV dword ptr [EBX + 0x14],0x0      ; 00518118
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051811f
    MOV dword ptr [EBX + 0x18],0x3f000000 ; 00518123
    FILD dword ptr [ESP + 0x1c]         ; 0051812a
    FMUL ST2                            ; 0051812e
    MOV dword ptr [EBX + 0x1c],0x3f000000 ; 00518130
    FADDP                               ; 00518137
    MOV dword ptr [EBX + 0x34],0x0      ; 00518139
    FSTP float ptr [ESP + 0x10]         ; 00518140
    MOV EAX,dword ptr [ESP + 0x10]      ; 00518144
    MOV dword ptr [EBX + 0x4],EAX       ; 00518148
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051814b
    FXCH                                ; 0051814f
    FSTP float ptr [ESP + 0x14]         ; 00518151
    MOV dword ptr [EBX + 0x8],EAX       ; 00518155
    MOV EAX,dword ptr [ESP + 0x14]      ; 00518158
    MOV dword ptr [EBX + 0xc],EAX       ; 0051815c
    MOV EAX,[0x01d25f44]                ; 0051815f | DAT_01d25f44
    MOV dword ptr [EBX + 0x10],EAX      ; 00518164
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00518167
    MOV dword ptr [EBX + 0x38],0x3f000000 ; 0051816b
    MOV dword ptr [ESP + 0x1c],EAX      ; 00518172
    MOV dword ptr [EBX + 0x3c],0x3f000000 ; 00518176
    FILD dword ptr [ESP + 0x1c]         ; 0051817d
    FMUL ST1                            ; 00518181
    MOV dword ptr [EBX + 0x54],0x0      ; 00518183
    FLD float ptr [0x005e9043]          ; 0051818a | DAT_005e9043
    FXCH                                ; 00518190
    FADD ST0,ST1                        ; 00518192
    MOV dword ptr [EBX + 0x58],0x3f000000 ; 00518194
    FSTP float ptr [ESP + 0x1c]         ; 0051819b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051819f
    MOV dword ptr [EBX + 0x20],EAX      ; 005181a3
    MOV EAX,dword ptr [ESP + 0x10]      ; 005181a6
    MOV dword ptr [EBX + 0x24],EAX      ; 005181aa
    MOV EAX,dword ptr [ESP + 0x18]      ; 005181ad
    MOV dword ptr [EBX + 0x28],EAX      ; 005181b1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005181b4
    MOV dword ptr [EBX + 0x2c],EAX      ; 005181b8
    MOV EAX,[0x01d25f44]                ; 005181bb | DAT_01d25f44
    MOV dword ptr [EBX + 0x30],EAX      ; 005181c0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005181c3
    MOV dword ptr [EBX + 0x40],EAX      ; 005181c7
    MOV EAX,dword ptr [ESP + 0x30]      ; 005181ca
    MOV dword ptr [EBX + 0x5c],0x3f000000 ; 005181ce
    MOV dword ptr [ESP + 0x1c],EAX      ; 005181d5
    MOV dword ptr [EBX + 0x74],0x0      ; 005181d9
    FILD dword ptr [ESP + 0x1c]         ; 005181e0
    FMULP ST2                           ; 005181e4
    MOV dword ptr [EBX + 0x78],0x3f000000 ; 005181e6
    FADDP                               ; 005181ed
    MOV dword ptr [EBX + 0x7c],0x3f000000 ; 005181ef
    FSTP float ptr [ESP + 0x10]         ; 005181f6
    MOV EAX,dword ptr [ESP + 0x10]      ; 005181fa
    MOV dword ptr [EBX + 0x44],EAX      ; 005181fe
    MOV EAX,dword ptr [ESP + 0x18]      ; 00518201
    MOV dword ptr [EBX + 0x48],EAX      ; 00518205
    MOV EAX,dword ptr [ESP + 0x14]      ; 00518208
    MOV dword ptr [EBX + 0x4c],EAX      ; 0051820c
    MOV EAX,[0x01d25f44]                ; 0051820f | DAT_01d25f44
    MOV dword ptr [EBX + 0x50],EAX      ; 00518214
    MOV EAX,dword ptr [ESP + 0xc]       ; 00518217
    MOV dword ptr [EBX + 0x60],EAX      ; 0051821b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051821e
    MOV dword ptr [EBX + 0x64],EAX      ; 00518222
    MOV EAX,dword ptr [ESP + 0x18]      ; 00518225
    MOV dword ptr [EBX + 0x68],EAX      ; 00518229
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051822c
    MOV dword ptr [EBX + 0x6c],EAX      ; 00518230
    MOV EAX,[0x01d25f44]                ; 00518233 | DAT_01d25f44
    PUSH 0x61f5e8                       ; 00518238 | DAT_0061f5e8
    MOV dword ptr [EBX + 0x70],EAX      ; 0051823d
    CALL engine_mini3d.cpp_useTexture_FUN_005121b0 ; 00518240
        ;   XREF to: 005121b0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_useTexture_FUN_005121b0(int texture)
    ADD ESP,0x4                         ; 00518245
    PUSH 0x2                            ; 00518248
    PUSH 0x61f5d8                       ; 0051824a | DAT_0061f5d8
    PUSH 0x4                            ; 0051824f
    XOR EDI,EDI                         ; 00518251
    PUSH EBX                            ; 00518253
    MOV ESI,dword ptr [0x01d224b8]      ; 00518254 | DAT_01d224b8
    MOV dword ptr [0x01d224b8],EDI      ; 0051825a | DAT_01d224b8
    CALL engine_mini3d.cpp_polyListD3DTL_FUN_00512de0 ; 00518260
        ;   XREF to: 00512de0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_polyListD3DTL_FUN_00512de0(float * vertices, int vertex_count, ushort * indices, int triangle_count)
    ADD ESP,0x10                        ; 00518265
    MOV dword ptr [0x01d224b8],ESI      ; 00518268 | DAT_01d224b8
    POP EBX                             ; 0051826e
    POP ESI                             ; 0051826f
    POP EDI                             ; 00518270
    ADD ESP,0x14                        ; 00518271
    RET                                 ; 00518274

