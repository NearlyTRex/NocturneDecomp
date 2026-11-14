; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
; int              Stack[0x18]:4   height
; ETextAlignment   Stack[0x1c]:4   alignment_mode
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00468580 at 0046859c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810 at 00468834
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730 at 00468750
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650 at 00468670
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004683e0 at 004683fc
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004684b0 at 004684cc
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00468310 at 0046832c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00468240 at 0046825c
;
; Referenced Globals:
;   void* switchdataD_00467f24 = 0046802d
;   void* switchdataD_00467f44 = 00468186
;   undefined4 DAT_01ba5c28
;   undefined4 DAT_01ba5c2c
;   undefined4 DAT_01ba5c30
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   engine_2d.c_drawTextCenteredAtColor_FUN_00402600
;   engine_2d.c_drawTextCenteredColor_FUN_004026d0
;   engine_2d.c_drawTextColor_FUN_00402440
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402540
;   engine_2d.c_FUN_00402800
;   engine_2d.c_FUN_00402810
;   engine_2d.c_FUN_00402830
;   engine_2d.c_FUN_00402840
;   engine_2d.c_FUN_00402850
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004a91a0
;   engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0
;   engine_font.cpp_getDefaultTextColor_FUN_004a96e0
;   engine_font.cpp_setDefaultTextColor_FUN_004a9700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467f70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70
    PUSH ESI                            ; 00467f71
    PUSH EDI                            ; 00467f72
    PUSH EBP                            ; 00467f73
    SUB ESP,0x20                        ; 00467f74
    MOV EAX,dword ptr [ESP + 0x34]      ; 00467f77
    MOV EDI,dword ptr [ESP + 0x38]      ; 00467f7b
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00467f7f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00467f83
    MOV EBP,dword ptr [ESP + 0x48]      ; 00467f87
    MOV ECX,dword ptr [ESP + 0x40]      ; 00467f8b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00467f8f
    ADD ECX,EDX                         ; 00467f92
    ADD ESI,EDX                         ; 00467f94
    MOV EDX,dword ptr [EAX + 0xc]       ; 00467f96
    ADD EBX,EDX                         ; 00467f99
    ADD EBP,EDX                         ; 00467f9b
    MOV EDX,dword ptr [0x01c35e48]      ; 00467f9d | DAT_01c35e48
    MOV dword ptr [ESP + 0x4],EDX       ; 00467fa3
    MOV EDX,dword ptr [0x01c35e50]      ; 00467fa7 | DAT_01c35e50
    MOV dword ptr [ESP + 0x14],EDX      ; 00467fad
    MOV EDX,dword ptr [0x01c35e4c]      ; 00467fb1 | DAT_01c35e4c
    MOV dword ptr [ESP + 0x8],EDX       ; 00467fb7
    MOV EDX,dword ptr [0x01c35e54]      ; 00467fbb | DAT_01c35e54
    MOV dword ptr [ESP + 0x10],EDX      ; 00467fc1
    MOV EDX,dword ptr [EAX + 0x10]      ; 00467fc5
    MOV dword ptr [0x01c35e48],EDX      ; 00467fc8 | DAT_01c35e48
    MOV EDX,dword ptr [EAX + 0x18]      ; 00467fce
    MOV dword ptr [0x01c35e50],EDX      ; 00467fd1 | DAT_01c35e50
    MOV EDX,dword ptr [EAX + 0x14]      ; 00467fd7
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00467fda
    MOV [0x01c35e54],EAX                ; 00467fdd | DAT_01c35e54
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00467fe2
    SHL EAX,0x2                         ; 00467fe6
    MOV dword ptr [ESP + 0x40],ECX      ; 00467fe9
    MOV dword ptr [ESP + 0x1c],EAX      ; 00467fed
    MOV EAX,[0x01ba5c30]                ; 00467ff1 | DAT_01ba5c30
    MOV dword ptr [0x01c35e4c],EDX      ; 00467ff6 | DAT_01c35e4c
    TEST EAX,EAX                        ; 00467ffc
    JZ 0x004681fb                       ; 00467ffe
        ;   XREF to: 004681fb (CONDITIONAL_JUMP)  ; LAB_004681fb
    CALL engine_font.cpp_getDefaultTextColor_FUN_004a96e0 ; 00468004
        ;   XREF to: 004a96e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_getDefaultTextColor_FUN_004a96e0()
    MOV ECX,dword ptr [0x01ba5c28]      ; 00468009 | DAT_01ba5c28
    PUSH ECX                            ; 0046800f
    MOV dword ptr [ESP + 0x4],EAX       ; 00468010
    CALL engine_font.cpp_setDefaultTextColor_FUN_004a9700 ; 00468014
        ;   XREF to: 004a9700 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_setDefaultTextColor_FUN_004a9700(int text_color)
    ADD ESP,0x4                         ; 00468019
    CMP dword ptr [ESP + 0x4c],0x7      ; 0046801c
    JA 0x00468043                       ; 00468021
        ;   XREF to: 00468043 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00468023
    JMP dword ptr [EAX + 0x467f24]      ; 00468027 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH EDI                            ; 0046802d
        ;   Label: caseD_0
    PUSH -0x1                           ; 0046802e
    PUSH -0x3                           ; 00468030
    PUSH EBX                            ; 00468032
    PUSH ESI                            ; 00468033
    MOV EBP,dword ptr [0x01ba5c30]      ; 00468034 | DAT_01ba5c30
    PUSH EBP                            ; 0046803a
        ;   Label: LAB_0046803a
    CALL engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0 ; 0046803b
        ;   XREF to: 004a90b0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextWrapper_FUN_004a90b0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 00468040
        ;   Label: LAB_00468040
    MOV EAX,dword ptr [ESP]             ; 00468043
        ;   Label: default
    PUSH EAX                            ; 00468046
    CALL engine_font.cpp_setDefaultTextColor_FUN_004a9700 ; 00468047
        ;   XREF to: 004a9700 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_setDefaultTextColor_FUN_004a9700(int text_color)
    ADD ESP,0x4                         ; 0046804c
        ;   Label: LAB_0046804c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046804f
    MOV [0x01c35e48],EAX                ; 00468053 | DAT_01c35e48
    MOV EAX,dword ptr [ESP + 0x14]      ; 00468058
    MOV [0x01c35e50],EAX                ; 0046805c | DAT_01c35e50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00468061
    MOV [0x01c35e4c],EAX                ; 00468065 | DAT_01c35e4c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046806a
    MOV [0x01c35e54],EAX                ; 0046806e | DAT_01c35e54
    ADD ESP,0x20                        ; 00468073
    POP EBP                             ; 00468076
    POP EDI                             ; 00468077
    POP ESI                             ; 00468078
    POP EBX                             ; 00468079
    RET                                 ; 0046807a
    PUSH EDI                            ; 0046807b
        ;   Label: caseD_1
    PUSH -0x1                           ; 0046807c
    PUSH -0x3                           ; 0046807e
    PUSH EBX                            ; 00468080
    PUSH ESI                            ; 00468081
    MOV EDI,dword ptr [0x01ba5c30]      ; 00468082 | DAT_01ba5c30
    PUSH EDI                            ; 00468088
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004a91a0 ; 00468089
        ;   XREF to: 004a91a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextRight_FUN_004a91a0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    JMP 0x00468040                      ; 0046808e
        ;   XREF to: 00468040 (UNCONDITIONAL_JUMP)  ; LAB_00468040
    PUSH EDI                            ; 00468090
        ;   Label: caseD_2
    PUSH -0x1                           ; 00468091
    PUSH -0x3                           ; 00468093
    PUSH EBX                            ; 00468095
    PUSH ESI                            ; 00468096
    MOV ESI,dword ptr [0x01ba5c30]      ; 00468097 | DAT_01ba5c30
    PUSH ESI                            ; 0046809d
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0 ; 0046809e
        ;   XREF to: 004a92a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    JMP 0x00468040                      ; 004680a3
        ;   XREF to: 00468040 (UNCONDITIONAL_JUMP)  ; LAB_00468040
    MOV EBP,dword ptr [0x01ba5c30]      ; 004680a5 | DAT_01ba5c30
        ;   Label: caseD_3
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 004680ab
    MOV EAX,EDX                         ; 004680b1
    SAR EDX,0x1f                        ; 004680b3
    SUB EAX,EDX                         ; 004680b6
    SAR EAX,0x1                         ; 004680b8
    PUSH EDI                            ; 004680ba
    PUSH -0x1                           ; 004680bb
    PUSH -0x3                           ; 004680bd
    SUB EBX,EAX                         ; 004680bf
    PUSH EBX                            ; 004680c1
    PUSH ESI                            ; 004680c2
    JMP 0x0046803a                      ; 004680c3
        ;   XREF to: 0046803a (UNCONDITIONAL_JUMP)  ; LAB_0046803a
    MOV EBP,dword ptr [0x01ba5c30]      ; 004680c8 | DAT_01ba5c30
        ;   Label: caseD_4
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 004680ce
    MOV EAX,EDX                         ; 004680d4
    SAR EDX,0x1f                        ; 004680d6
    SUB EAX,EDX                         ; 004680d9
    SAR EAX,0x1                         ; 004680db
    PUSH EDI                            ; 004680dd
    PUSH -0x1                           ; 004680de
    PUSH -0x3                           ; 004680e0
    SUB EBX,EAX                         ; 004680e2
    PUSH EBX                            ; 004680e4
    PUSH ESI                            ; 004680e5
    PUSH EBP                            ; 004680e6
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0 ; 004680e7
        ;   XREF to: 004a92a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    JMP 0x00468040                      ; 004680ec
        ;   XREF to: 00468040 (UNCONDITIONAL_JUMP)  ; LAB_00468040
    PUSH EDI                            ; 004680f1
        ;   Label: caseD_5
    PUSH -0x1                           ; 004680f2
    PUSH -0x3                           ; 004680f4
    PUSH EBX                            ; 004680f6
    MOV ECX,dword ptr [ESP + 0x50]      ; 004680f7
    PUSH ECX                            ; 004680fb
    PUSH ESI                            ; 004680fc
    MOV EBX,dword ptr [0x01ba5c30]      ; 004680fd | DAT_01ba5c30
    PUSH EBX                            ; 00468103
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0 ; 00468104
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 00468109
    JMP 0x00468043                      ; 0046810c
        ;   XREF to: 00468043 (UNCONDITIONAL_JUMP)  ; default
    ADD EBX,EBP                         ; 00468111
        ;   Label: caseD_6
    MOV EBP,dword ptr [0x01ba5c30]      ; 00468113 | DAT_01ba5c30
    LEA EDX,[EBX + 0x1]                 ; 00468119
    MOV EAX,dword ptr [EBP + 0x41f0]    ; 0046811c
    SUB EDX,EAX                         ; 00468122
    MOV EAX,EDX                         ; 00468124
    SAR EDX,0x1f                        ; 00468126
    SUB EAX,EDX                         ; 00468129
    SAR EAX,0x1                         ; 0046812b
    PUSH EDI                            ; 0046812d
    PUSH -0x1                           ; 0046812e
    PUSH -0x3                           ; 00468130
    PUSH EAX                            ; 00468132
    PUSH ESI                            ; 00468133
    JMP 0x0046803a                      ; 00468134
        ;   XREF to: 0046803a (UNCONDITIONAL_JUMP)  ; LAB_0046803a
    ADD EBX,EBP                         ; 00468139
        ;   Label: caseD_7
    MOV EBP,dword ptr [0x01ba5c30]      ; 0046813b | DAT_01ba5c30
    INC EBX                             ; 00468141
    MOV EDX,dword ptr [EBP + 0x41f0]    ; 00468142
    SUB EBX,EDX                         ; 00468148
    MOV EDX,EBX                         ; 0046814a
    MOV EAX,EBX                         ; 0046814c
    SAR EDX,0x1f                        ; 0046814e
    SUB EAX,EDX                         ; 00468151
    SAR EAX,0x1                         ; 00468153
    PUSH EDI                            ; 00468155
    PUSH -0x1                           ; 00468156
    PUSH -0x3                           ; 00468158
    PUSH EAX                            ; 0046815a
    MOV EDX,dword ptr [ESP + 0x50]      ; 0046815b
    PUSH EDX                            ; 0046815f
    PUSH ESI                            ; 00468160
    PUSH EBP                            ; 00468161
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0 ; 00468162
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 00468167
    JMP 0x00468043                      ; 0046816a
        ;   XREF to: 00468043 (UNCONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 0046816f
        ;   Label: caseD_1
    PUSH ESI                            ; 00468170
    PUSH EDI                            ; 00468171
    CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402540 ; 00468172
        ;   XREF to: 00402540 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextRightAlignedColor_FUN_00402540(char * text, int x, int y)
    JMP 0x0046818e                      ; 00468177
        ;   XREF to: 0046818e (UNCONDITIONAL_JUMP)  ; LAB_0046818e
    PUSH EBX                            ; 00468179
        ;   Label: caseD_2
    PUSH ESI                            ; 0046817a
    PUSH EDI                            ; 0046817b
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_00402600 ; 0046817c
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredAtColor_FUN_00402600(char * text, int x, int y)
    JMP 0x0046818e                      ; 00468181
        ;   XREF to: 0046818e (UNCONDITIONAL_JUMP)  ; LAB_0046818e
    SUB EBX,0x5                         ; 00468183
        ;   Label: caseD_3
    PUSH EBX                            ; 00468186
        ;   Label: caseD_0
    PUSH ESI                            ; 00468187
        ;   Label: LAB_00468187
    PUSH EDI                            ; 00468188
    CALL engine_2d.c_drawTextColor_FUN_00402440 ; 00468189
        ;   XREF to: 00402440 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402440(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046818e
        ;   Label: LAB_0046818e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00468191
        ;   Label: default
    PUSH EAX                            ; 00468195
    CALL engine_2d.c_FUN_00402850       ; 00468196
        ;   XREF to: 00402850 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402850(int color)
    ADD ESP,0x4                         ; 0046819b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046819e
    PUSH EDX                            ; 004681a2
    CALL engine_2d.c_FUN_00402810       ; 004681a3
        ;   XREF to: 00402810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402810(int enabled)
    JMP 0x0046804c                      ; 004681a8
        ;   XREF to: 0046804c (UNCONDITIONAL_JUMP)  ; LAB_0046804c
    SUB EBX,0x5                         ; 004681ad
        ;   Label: caseD_4
    PUSH EBX                            ; 004681b0
    PUSH ESI                            ; 004681b1
    PUSH EDI                            ; 004681b2
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_00402600 ; 004681b3
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredAtColor_FUN_00402600(char * text, int x, int y)
    JMP 0x0046818e                      ; 004681b8
        ;   XREF to: 0046818e (UNCONDITIONAL_JUMP)  ; LAB_0046818e
    PUSH EBX                            ; 004681ba
        ;   Label: caseD_5
    MOV EBP,dword ptr [ESP + 0x44]      ; 004681bb
    PUSH EBP                            ; 004681bf
    PUSH ESI                            ; 004681c0
    PUSH EDI                            ; 004681c1
    CALL engine_2d.c_drawTextCenteredColor_FUN_004026d0 ; 004681c2
        ;   XREF to: 004026d0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredColor_FUN_004026d0(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 004681c7
    JMP 0x00468191                      ; 004681ca
        ;   XREF to: 00468191 (UNCONDITIONAL_JUMP)  ; default
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 004681cc
        ;   Label: caseD_6
    MOV EAX,EDX                         ; 004681d0
    SAR EDX,0x1f                        ; 004681d2
    SUB EAX,EDX                         ; 004681d5
    SAR EAX,0x1                         ; 004681d7
    PUSH EAX                            ; 004681d9
    JMP 0x00468187                      ; 004681da
        ;   XREF to: 00468187 (UNCONDITIONAL_JUMP)  ; LAB_00468187
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 004681dc
        ;   Label: caseD_7
    MOV EAX,EDX                         ; 004681e0
    SAR EDX,0x1f                        ; 004681e2
    SUB EAX,EDX                         ; 004681e5
    SAR EAX,0x1                         ; 004681e7
    PUSH EAX                            ; 004681e9
    MOV EBX,dword ptr [ESP + 0x44]      ; 004681ea
    PUSH EBX                            ; 004681ee
    PUSH ESI                            ; 004681ef
    PUSH EDI                            ; 004681f0
    CALL engine_2d.c_drawTextCenteredColor_FUN_004026d0 ; 004681f1
        ;   XREF to: 004026d0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextCenteredColor_FUN_004026d0(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 004681f6
    JMP 0x00468191                      ; 004681f9
        ;   XREF to: 00468191 (UNCONDITIONAL_JUMP)  ; default
    CALL engine_2d.c_FUN_00402800       ; 004681fb
        ;   XREF to: 00402800 (UNCONDITIONAL_CALL)  ; int engine_2d.c_FUN_00402800()
        ;   Label: LAB_004681fb
    MOV dword ptr [ESP + 0xc],EAX       ; 00468200
    CALL engine_2d.c_FUN_00402840       ; 00468204
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)  ; int engine_2d.c_FUN_00402840()
    MOV dword ptr [ESP + 0x18],EAX      ; 00468209
    CALL engine_2d.c_FUN_00402830       ; 0046820d
        ;   XREF to: 00402830 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402830()
    MOV EDX,dword ptr [0x01ba5c2c]      ; 00468212 | DAT_01ba5c2c
    PUSH EDX                            ; 00468218
    CALL engine_2d.c_FUN_00402850       ; 00468219
        ;   XREF to: 00402850 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402850(int color)
    ADD ESP,0x4                         ; 0046821e
    CMP dword ptr [ESP + 0x4c],0x7      ; 00468221
    JA 0x00468191                       ; 00468226
        ;   XREF to: 00468191 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046822c
    JMP dword ptr [EAX + 0x467f44]      ; 00468230 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

