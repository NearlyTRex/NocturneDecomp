; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047ee50(undefined4 param_1,float param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
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
;
; XREF[4]:
;   core_dtrace.cpp_FUN_0047366e at 004737b7
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 at 00504564
;   engine_pod.cpp_FUN_00513d20 at 00513eef
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50 at 0047ee10
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd101
;   TerminatedCString s_CEditorTools_updatePerce_005bd117
;   TerminatedCString s_d_complete_005bd14e
;   TerminatedCString s_d_02d_elapsed_approximat_005bd15c
;   undefined4 DAT_005bd18d
;   undefined4 DAT_005bd195
;   undefined4 DAT_005bd19d
;   undefined4 DAT_005bd1a5
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5b104
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c5bb20
;   undefined4 DAT_01c5bb2c
;   undefined4 DAT_01c5bb30
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
;   engine_mini3d.cpp_FUN_004edaf0
;   engine_mini3d.cpp_FUN_004f3520
;   engine_mini3d.cpp_FUN_004f37e0
;   engine_mini3d.cpp_FUN_004f3a60
;   engine_mini3d.cpp_FUN_004f3ab0
;   engine_mini3d.cpp_FUN_004f3ad0
;   shape_edittool.cpp_FUN_0047fa80
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ee50
        ;   Label: shape_edittool.cpp_FUN_0047ee50
    PUSH ESI                            ; 0047ee51
    PUSH EDI                            ; 0047ee52
    PUSH EBP                            ; 0047ee53
    MOV EBP,ESP                         ; 0047ee54
    SUB ESP,0x4c                        ; 0047ee56
    AND ESP,0xfffffff8                  ; 0047ee59
    CMP dword ptr [0x01c5b104],0x1      ; 0047ee5c | DAT_01c5b104
    JL 0x0047f32f                       ; 0047ee63
        ;   XREF to: 0047f32f (CONDITIONAL_JUMP)  ; LAB_0047f32f
    FLD float ptr [EBP + 0x1c]          ; 0047ee69
        ;   Label: LAB_0047ee69
    XOR ESI,ESI                         ; 0047ee6c
    FLDZ                                ; 0047ee6e
    MOV dword ptr [ESP + 0xc],ESI       ; 0047ee70
    FCOMPP                              ; 0047ee74
    FNSTSW AX                           ; 0047ee76
    SAHF                                ; 0047ee78
    JNC 0x0047eea5                      ; 0047ee79
        ;   XREF to: 0047eea5 (CONDITIONAL_JUMP)  ; LAB_0047eea5
    FLD float ptr [EBP + 0x18]          ; 0047ee7b
    FLDZ                                ; 0047ee7e
    FCOMPP                              ; 0047ee80
    FNSTSW AX                           ; 0047ee82
    SAHF                                ; 0047ee84
    JBE 0x0047ee8a                      ; 0047ee85
        ;   XREF to: 0047ee8a (CONDITIONAL_JUMP)  ; LAB_0047ee8a
    MOV dword ptr [EBP + 0x18],ESI      ; 0047ee87
    FLD float ptr [EBP + 0x18]          ; 0047ee8a
        ;   Label: LAB_0047ee8a
    FCOMP float ptr [EBP + 0x1c]        ; 0047ee8d
    FNSTSW AX                           ; 0047ee90
    SAHF                                ; 0047ee92
    JBE 0x0047ee9b                      ; 0047ee93
        ;   XREF to: 0047ee9b (CONDITIONAL_JUMP)  ; LAB_0047ee9b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047ee95
    MOV dword ptr [EBP + 0x18],EAX      ; 0047ee98
    FLD float ptr [EBP + 0x18]          ; 0047ee9b
        ;   Label: LAB_0047ee9b
    FDIV float ptr [EBP + 0x1c]         ; 0047ee9e
    FSTP float ptr [ESP + 0xc]          ; 0047eea1
    FLD float ptr [ESP + 0xc]           ; 0047eea5
        ;   Label: LAB_0047eea5
    FMUL double ptr [0x005bd18d]        ; 0047eea9 | DAT_005bd18d
    FADD double ptr [0x005bd195]        ; 0047eeaf | DAT_005bd195
    CALL crt_math.c_round_FUN_005a3120  ; 0047eeb5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x3c]        ; 0047eeba
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 0047eebe
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EBX,EAX                         ; 0047eec3
    MOV dword ptr [ESP + 0x30],EAX      ; 0047eec5
    MOV EAX,[0x01c5b104]                ; 0047eec9 | DAT_01c5b104
    DEC EAX                             ; 0047eece
    SHL EAX,0x3                         ; 0047eecf
    MOV EDX,EAX                         ; 0047eed2
    SHL EDX,0x6                         ; 0047eed4
    SUB EDX,EAX                         ; 0047eed7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047eed9
    CMP EAX,dword ptr [EDX + 0x1c5b2f8] ; 0047eedd
    JNZ 0x0047eef7                      ; 0047eee3
        ;   XREF to: 0047eef7 (CONDITIONAL_JUMP)  ; LAB_0047eef7
    SUB EBX,dword ptr [EDX + 0x1c5b2fc] ; 0047eee5
    CMP EBX,0x480000                    ; 0047eeeb
    JL 0x0047f328                       ; 0047eef1
        ;   XREF to: 0047f328 (CONDITIONAL_JUMP)  ; LAB_0047f328
    MOV EDI,dword ptr [EBP + 0x14]      ; 0047eef7
        ;   Label: LAB_0047eef7
    PUSH EDI                            ; 0047eefa
    CALL shape_edittool.cpp_FUN_0047fa80 ; 0047eefb
        ;   XREF to: 0047fa80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fa80()
    ADD ESP,0x4                         ; 0047ef00
    PUSH 0xffff                         ; 0047ef03
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047ef08
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047ef0d
    PUSH 0x3f800000                     ; 0047ef10
    CALL engine_mini3d.cpp_FUN_004edaf0 ; 0047ef15
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 0047ef1a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047ef1d
    PUSH EAX                            ; 0047ef21
    PUSH 0x5bd14e                       ; 0047ef22 | = "%d%% complete"
    PUSH -0x1                           ; 0047ef27
    MOV EDX,dword ptr [0x01c5bb20]      ; 0047ef29 | DAT_01c5bb20
    PUSH EDX                            ; 0047ef2f
    MOV ECX,dword ptr [0x01c6b5ac]      ; 0047ef30 | DAT_01c6b5ac
    PUSH ECX                            ; 0047ef36
    MOV EBX,dword ptr [0x01c6b5b0]      ; 0047ef37 | DAT_01c6b5b0
    PUSH EBX                            ; 0047ef3d
    MOV ESI,dword ptr [0x01c6b5a8]      ; 0047ef3e | DAT_01c6b5a8
    PUSH ESI                            ; 0047ef44
    MOV EDI,dword ptr [0x01c5b0e0]      ; 0047ef45 | DAT_01c5b0e0
    PUSH EDI                            ; 0047ef4b
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0 ; 0047ef4c
        ;   XREF to: 004b0ff0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    MOV EBX,dword ptr [0x01c6b5a8]      ; 0047ef51 | DAT_01c6b5a8
    MOV EAX,[0x01c5bae4]                ; 0047ef57 | DAT_01c5bae4
    MOV EDX,dword ptr [0x01c6b5ac]      ; 0047ef5c | DAT_01c6b5ac
    ADD EAX,EAX                         ; 0047ef62
    MOV ESI,dword ptr [0x01c6b5b0]      ; 0047ef64 | DAT_01c6b5b0
    ADD EAX,EDX                         ; 0047ef6a
    ADD ESP,0x20                        ; 0047ef6c
    LEA EDI,[EAX + 0x1]                 ; 0047ef6f
    INC EBX                             ; 0047ef72
    MOV EAX,[0x01c5bae4]                ; 0047ef73 | DAT_01c5bae4
    DEC ESI                             ; 0047ef78
    SHL EAX,0x2                         ; 0047ef79
    MOV dword ptr [ESP + 0x2c],EBX      ; 0047ef7c
    ADD EAX,EDX                         ; 0047ef80
    MOV dword ptr [ESP + 0x34],ESI      ; 0047ef82
    DEC EAX                             ; 0047ef86
    MOV dword ptr [ESP + 0x28],EDI      ; 0047ef87
    MOV dword ptr [ESP + 0x44],EAX      ; 0047ef8b
    MOV dword ptr [ESP + 0x24],EAX      ; 0047ef8f
    MOV EAX,[0x01c5bb2c]                ; 0047ef93 | DAT_01c5bb2c
    MOV EDX,dword ptr [0x01c5baec]      ; 0047ef98 | DAT_01c5baec
    MOV dword ptr [ESP + 0x38],EAX      ; 0047ef9e
    MOV EAX,[0x01c5bb34]                ; 0047efa2 | DAT_01c5bb34
    TEST EDX,EDX                        ; 0047efa7
    JZ 0x0047f36f                       ; 0047efa9
        ;   XREF to: 0047f36f (CONDITIONAL_JUMP)  ; LAB_0047f36f
    JZ 0x0047f357                       ; 0047efaf
        ;   XREF to: 0047f357 (CONDITIONAL_JUMP)  ; LAB_0047f357
    AND EAX,0xff                        ; 0047efb5
    MOV EDX,EAX                         ; 0047efba
    SHL EAX,0x2                         ; 0047efbc
    SUB EAX,EDX                         ; 0047efbf
    XOR ECX,ECX                         ; 0047efc1
    XOR EDX,EDX                         ; 0047efc3
    MOV CL,byte ptr [EAX + 0x1c6af98]   ; 0047efc5 | DAT_01c6af98
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047efcb | DAT_01c6af99
    SHL EDX,0x8                         ; 0047efd1
    SHL ECX,0x10                        ; 0047efd4
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047efd7 | DAT_01c6af9a
    OR EDX,ECX                          ; 0047efdd
    AND EAX,0xff                        ; 0047efdf
    OR EDX,EAX                          ; 0047efe4
    PUSH EDX                            ; 0047efe6
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047efe7
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047efec
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047efef
        ;   Label: LAB_0047efef
    INC EAX                             ; 0047eff3
    PUSH EAX                            ; 0047eff4
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047eff5
    INC EAX                             ; 0047eff9
    PUSH EAX                            ; 0047effa
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047effb
    DEC EAX                             ; 0047efff
    PUSH EAX                            ; 0047f000
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047f001
    DEC EAX                             ; 0047f005
    PUSH EAX                            ; 0047f006
    CALL engine_mini3d.cpp_FUN_004f3a60 ; 0047f007
        ;   XREF to: 004f3a60 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3a60()
    MOV EAX,[0x01c5baec]                ; 0047f00c | DAT_01c5baec
    ADD ESP,0x10                        ; 0047f011
    TEST EAX,EAX                        ; 0047f014
    JZ 0x0047f361                       ; 0047f016
        ;   XREF to: 0047f361 (CONDITIONAL_JUMP)  ; LAB_0047f361
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047f01c
    AND EDX,0xff                        ; 0047f020
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047f026
    SUB EAX,EDX                         ; 0047f02d
    XOR EDX,EDX                         ; 0047f02f
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047f031 | DAT_01c6af99
    SHL EDX,0x8                         ; 0047f037
    MOV dword ptr [ESP + 0x48],EDX      ; 0047f03a
    XOR EDX,EDX                         ; 0047f03e
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047f040 | DAT_01c6af98
    MOV ECX,dword ptr [ESP + 0x48]      ; 0047f046
    SHL EDX,0x10                        ; 0047f04a
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047f04d | DAT_01c6af9a
    OR EDX,ECX                          ; 0047f053
    AND EAX,0xff                        ; 0047f055
    OR EDX,EAX                          ; 0047f05a
    PUSH EDX                            ; 0047f05c
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047f05d
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047f062
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047f065
        ;   Label: LAB_0047f065
    PUSH EAX                            ; 0047f069
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047f06a
    PUSH EDX                            ; 0047f06e
    MOV ECX,dword ptr [ESP + 0x30]      ; 0047f06f
    PUSH ECX                            ; 0047f073
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047f074
    PUSH EAX                            ; 0047f078
    CALL engine_mini3d.cpp_FUN_004f37e0 ; 0047f079
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f37e0()
    ADD ESP,0x10                        ; 0047f07e
    MOV EDX,dword ptr [0x01c5baec]      ; 0047f081 | DAT_01c5baec
        ;   Label: LAB_0047f081
    MOV EAX,[0x01c5bb38]                ; 0047f087 | DAT_01c5bb38
    TEST EDX,EDX                        ; 0047f08c
    JZ 0x0047f38a                       ; 0047f08e
        ;   XREF to: 0047f38a (CONDITIONAL_JUMP)  ; LAB_0047f38a
    AND EAX,0xff                        ; 0047f094
    MOV EDX,EAX                         ; 0047f099
    SHL EAX,0x2                         ; 0047f09b
    SUB EAX,EDX                         ; 0047f09e
    XOR EDX,EDX                         ; 0047f0a0
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 0047f0a2 | DAT_01c6af99
    SHL EDX,0x8                         ; 0047f0a8
    MOV dword ptr [ESP + 0x48],EDX      ; 0047f0ab
    XOR EDX,EDX                         ; 0047f0af
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047f0b1 | DAT_01c6af98
    MOV ECX,dword ptr [ESP + 0x48]      ; 0047f0b7
    SHL EDX,0x10                        ; 0047f0bb
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047f0be | DAT_01c6af9a
    OR EDX,ECX                          ; 0047f0c4
    AND EAX,0xff                        ; 0047f0c6
    OR EAX,EDX                          ; 0047f0cb
    PUSH EAX                            ; 0047f0cd
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047f0ce
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047f0d3
    MOV ECX,dword ptr [0x01c5baec]      ; 0047f0d6 | DAT_01c5baec
        ;   Label: LAB_0047f0d6
    LEA EAX,[EDI + -0x1]                ; 0047f0dc
    LEA EDX,[EBX + -0x1]                ; 0047f0df
    TEST ECX,ECX                        ; 0047f0e2
    JZ 0x0047f394                       ; 0047f0e4
        ;   XREF to: 0047f394 (CONDITIONAL_JUMP)  ; LAB_0047f394
    PUSH ESI                            ; 0047f0ea
    PUSH EAX                            ; 0047f0eb
    PUSH EDX                            ; 0047f0ec
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 0047f0ed
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 0047f0f2
        ;   Label: LAB_0047f0f2
    MOV ECX,dword ptr [0x01c5baec]      ; 0047f0f5 | DAT_01c5baec
    LEA EDX,[EDI + -0x1]                ; 0047f0fb
    LEA EAX,[EBX + -0x1]                ; 0047f0fe
    TEST ECX,ECX                        ; 0047f101
    JZ 0x0047f3a1                       ; 0047f103
        ;   XREF to: 0047f3a1 (CONDITIONAL_JUMP)  ; LAB_0047f3a1
    MOV ECX,dword ptr [ESP + 0x44]      ; 0047f109
    PUSH ECX                            ; 0047f10d
    PUSH EDX                            ; 0047f10e
    PUSH EAX                            ; 0047f10f
    CALL engine_mini3d.cpp_FUN_004f3ad0 ; 0047f110
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ad0()
    ADD ESP,0xc                         ; 0047f115
        ;   Label: LAB_0047f115
    MOV EAX,ESI                         ; 0047f118
    SUB EAX,EBX                         ; 0047f11a
    INC EAX                             ; 0047f11c
    MOV dword ptr [ESP + 0x48],EAX      ; 0047f11d
    FILD dword ptr [ESP + 0x48]         ; 0047f121
    FMUL float ptr [ESP + 0xc]          ; 0047f125
    FADD double ptr [0x005bd195]        ; 0047f129 | DAT_005bd195
    CALL crt_math.c_round_FUN_005a3120  ; 0047f12f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x48]        ; 0047f134
    MOV EAX,dword ptr [ESP + 0x48]      ; 0047f138
    ADD EAX,EBX                         ; 0047f13c
    CMP EAX,EBX                         ; 0047f13e
    JLE 0x0047f1d6                      ; 0047f140
        ;   XREF to: 0047f1d6 (CONDITIONAL_JUMP)  ; LAB_0047f1d6
    CMP EAX,ESI                         ; 0047f146
    JL 0x0047f14d                       ; 0047f148
        ;   XREF to: 0047f14d (CONDITIONAL_JUMP)  ; LAB_0047f14d
    LEA EAX,[ESI + -0x1]                ; 0047f14a
    MOV EDX,dword ptr [ESP + 0x44]      ; 0047f14d
        ;   Label: LAB_0047f14d
    MOV ESI,dword ptr [0x01c5bb30]      ; 0047f151 | DAT_01c5bb30
    MOV dword ptr [ESP + 0x1c],EDI      ; 0047f157
    MOV dword ptr [ESP + 0x20],EAX      ; 0047f15b
    MOV dword ptr [ESP + 0x18],EDX      ; 0047f15f
    MOV EDX,dword ptr [0x01c5baec]      ; 0047f163 | DAT_01c5baec
    MOV dword ptr [ESP + 0x14],EBX      ; 0047f169
    TEST EDX,EDX                        ; 0047f16d
    JZ 0x0047f3bd                       ; 0047f16f
        ;   XREF to: 0047f3bd (CONDITIONAL_JUMP)  ; LAB_0047f3bd
    JZ 0x0047f3b2                       ; 0047f175
        ;   XREF to: 0047f3b2 (CONDITIONAL_JUMP)  ; LAB_0047f3b2
    MOV EDX,ESI                         ; 0047f17b
    AND EDX,0xff                        ; 0047f17d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047f183
    SUB EAX,EDX                         ; 0047f18a
    XOR EBX,EBX                         ; 0047f18c
    XOR EDX,EDX                         ; 0047f18e
    MOV BL,byte ptr [EAX + 0x1c6af99]   ; 0047f190 | DAT_01c6af99
    MOV DL,byte ptr [EAX + 0x1c6af98]   ; 0047f196 | DAT_01c6af98
    SHL EBX,0x8                         ; 0047f19c
    SHL EDX,0x10                        ; 0047f19f
    MOV AL,byte ptr [EAX + 0x1c6af9a]   ; 0047f1a2 | DAT_01c6af9a
    OR EDX,EBX                          ; 0047f1a8
    AND EAX,0xff                        ; 0047f1aa
    OR EAX,EDX                          ; 0047f1af
    PUSH EAX                            ; 0047f1b1
    CALL engine_mini3d.cpp_FUN_004f3520 ; 0047f1b2
        ;   XREF to: 004f3520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3520()
    ADD ESP,0x4                         ; 0047f1b7
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047f1ba
        ;   Label: LAB_0047f1ba
    PUSH ESI                            ; 0047f1be
    MOV EDI,dword ptr [ESP + 0x24]      ; 0047f1bf
    PUSH EDI                            ; 0047f1c3
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047f1c4
    PUSH EAX                            ; 0047f1c8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047f1c9
    PUSH EDX                            ; 0047f1cd
    CALL engine_mini3d.cpp_FUN_004f37e0 ; 0047f1ce
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f37e0()
    ADD ESP,0x10                        ; 0047f1d3
    CMP dword ptr [ESP + 0x3c],0x0      ; 0047f1d6
        ;   Label: LAB_0047f1d6
    JLE 0x0047f2fd                      ; 0047f1db
        ;   XREF to: 0047f2fd (CONDITIONAL_JUMP)  ; LAB_0047f2fd
    MOV EAX,[0x01c5b104]                ; 0047f1e1 | DAT_01c5b104
    DEC EAX                             ; 0047f1e6
    SHL EAX,0x3                         ; 0047f1e7
    MOV EBX,EAX                         ; 0047f1ea
    SHL EAX,0x6                         ; 0047f1ec
    SUB EAX,EBX                         ; 0047f1ef
    MOV EDX,dword ptr [ESP + 0x30]      ; 0047f1f1
    MOV EBX,dword ptr [EAX + 0x1c5b2f4] ; 0047f1f5
    MOV EAX,EDX                         ; 0047f1fb
    SUB EAX,EBX                         ; 0047f1fd
    MOV dword ptr [ESP + 0x48],EAX      ; 0047f1ff
    FILD dword ptr [ESP + 0x48]         ; 0047f203
    FMUL double ptr [0x005bd19d]        ; 0047f207 | DAT_005bd19d
    FST float ptr [ESP + 0x8]           ; 0047f20d
    FST double ptr [ESP]                ; 0047f211
    FCOMP double ptr [0x005bd1a5]       ; 0047f214 | DAT_005bd1a5
    FNSTSW AX                           ; 0047f21a
    SAHF                                ; 0047f21c
    JBE 0x0047f2fd                      ; 0047f21d
        ;   XREF to: 0047f2fd (CONDITIONAL_JUMP)  ; LAB_0047f2fd
    FLD float ptr [EBP + 0x18]          ; 0047f223
    FLD float ptr [EBP + 0x1c]          ; 0047f226
    FSUB ST0,ST1                        ; 0047f229
    FMUL float ptr [ESP + 0x8]          ; 0047f22b
    FDIVRP                              ; 0047f22f
    FADD double ptr [0x005bd195]        ; 0047f231 | DAT_005bd195
    CALL crt_math.c_round_FUN_005a3120  ; 0047f237
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x40]        ; 0047f23c
    MOV ESI,dword ptr [ESP + 0x40]      ; 0047f240
    TEST ESI,ESI                        ; 0047f244
    JLE 0x0047f2fd                      ; 0047f246
        ;   XREF to: 0047f2fd (CONDITIONAL_JUMP)  ; LAB_0047f2fd
    MOV EBX,0x3c                        ; 0047f24c
    MOV EDX,ESI                         ; 0047f251
    MOV EAX,ESI                         ; 0047f253
    SAR EDX,0x1f                        ; 0047f255
    IDIV EBX                            ; 0047f258
    MOV ESI,EAX                         ; 0047f25a
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047f25c
    MOV EDX,EAX                         ; 0047f260
    SAR EDX,0x1f                        ; 0047f262
    IDIV EBX                            ; 0047f265
    FLD double ptr [ESP]                ; 0047f267
    FADD double ptr [0x005bd195]        ; 0047f26a | DAT_005bd195
    CALL crt_math.c_round_FUN_005a3120  ; 0047f270
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 0047f275
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047f279
    MOV dword ptr [ESP + 0x40],EDX      ; 0047f27d
    MOV EDX,EAX                         ; 0047f281
    SAR EDX,0x1f                        ; 0047f283
    IDIV EBX                            ; 0047f286
    MOV EBX,EAX                         ; 0047f288
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047f28a
    MOV EDX,EAX                         ; 0047f28e
    MOV EDI,0x3c                        ; 0047f290
    SAR EDX,0x1f                        ; 0047f295
    IDIV EDI                            ; 0047f298
    PUSH 0xffff                         ; 0047f29a
    MOV dword ptr [ESP + 0x14],EDX      ; 0047f29f
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047f2a3
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047f2a8
    PUSH 0x3f800000                     ; 0047f2ab
    CALL engine_mini3d.cpp_FUN_004edaf0 ; 0047f2b0
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 0047f2b5
    MOV EDI,dword ptr [ESP + 0x40]      ; 0047f2b8
    PUSH EDI                            ; 0047f2bc
    PUSH ESI                            ; 0047f2bd
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047f2be
    PUSH EAX                            ; 0047f2c2
    PUSH EBX                            ; 0047f2c3
    PUSH 0x5bd15c                       ; 0047f2c4 | = "%d:%02d elapsed, approximately %d:%02..."
    MOV EDX,dword ptr [0x01c5bb20]      ; 0047f2c9 | DAT_01c5bb20
    PUSH -0x1                           ; 0047f2cf
    MOV ECX,dword ptr [0x01c5bae4]      ; 0047f2d1 | DAT_01c5bae4
    MOV EAX,[0x01c6b5b4]                ; 0047f2d7 | DAT_01c6b5b4
    PUSH EDX                            ; 0047f2dc
    SUB EAX,ECX                         ; 0047f2dd
    PUSH EAX                            ; 0047f2df
    MOV EBX,dword ptr [0x01c6b5b0]      ; 0047f2e0 | DAT_01c6b5b0
    PUSH EBX                            ; 0047f2e6
    MOV ESI,dword ptr [0x01c6b5a8]      ; 0047f2e7 | DAT_01c6b5a8
    PUSH ESI                            ; 0047f2ed
    MOV EDI,dword ptr [0x01c5b0e0]      ; 0047f2ee | DAT_01c5b0e0
    PUSH EDI                            ; 0047f2f4
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0 ; 0047f2f5
        ;   XREF to: 004b0ff0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x2c                        ; 0047f2fa
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 0047f2fd
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
        ;   Label: LAB_0047f2fd
    MOV EAX,[0x01c5b104]                ; 0047f302 | DAT_01c5b104
    DEC EAX                             ; 0047f307
    SHL EAX,0x3                         ; 0047f308
    MOV EBX,EAX                         ; 0047f30b
    SHL EAX,0x6                         ; 0047f30d
    SUB EAX,EBX                         ; 0047f310
    MOV EBX,EAX                         ; 0047f312
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047f314
    MOV dword ptr [EBX + 0x1c5b2f8],EAX ; 0047f318
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047f31e
    MOV dword ptr [EBX + 0x1c5b2fc],EAX ; 0047f322
    MOV ESP,EBP                         ; 0047f328
        ;   Label: LAB_0047f328
    POP EBP                             ; 0047f32a
    POP EDI                             ; 0047f32b
    POP ESI                             ; 0047f32c
    POP EBX                             ; 0047f32d
    RET                                 ; 0047f32e
    MOV ECX,0x5bd101                    ; 0047f32f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047f32f
    MOV EBX,0x7f0                       ; 0047f334
    PUSH 0x5bd117                       ; 0047f339 | = "CEditorTools::updatePercentageWindow ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0047f33e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047f344 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047f34a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047f34f
    JMP 0x0047ee69                      ; 0047f352
        ;   XREF to: 0047ee69 (UNCONDITIONAL_JUMP)  ; LAB_0047ee69
    MOV [0x01c6b5c0],EAX                ; 0047f357 | DAT_01c6b5c0
        ;   Label: LAB_0047f357
    JMP 0x0047efef                      ; 0047f35c
        ;   XREF to: 0047efef (UNCONDITIONAL_JUMP)  ; LAB_0047efef
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047f361
        ;   Label: LAB_0047f361
    MOV [0x01c6b5c0],EAX                ; 0047f365 | DAT_01c6b5c0
    JMP 0x0047f065                      ; 0047f36a
        ;   XREF to: 0047f065 (UNCONDITIONAL_JUMP)  ; LAB_0047f065
    PUSH EAX                            ; 0047f36f
        ;   Label: LAB_0047f36f
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0047f370
    PUSH ECX                            ; 0047f374
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047f375
    PUSH EAX                            ; 0047f379
    PUSH ESI                            ; 0047f37a
    PUSH EDI                            ; 0047f37b
    PUSH EBX                            ; 0047f37c
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 0047f37d
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 0047f382
    JMP 0x0047f081                      ; 0047f385
        ;   XREF to: 0047f081 (UNCONDITIONAL_JUMP)  ; LAB_0047f081
    MOV [0x01c6b5c0],EAX                ; 0047f38a | DAT_01c6b5c0
        ;   Label: LAB_0047f38a
    JMP 0x0047f0d6                      ; 0047f38f
        ;   XREF to: 0047f0d6 (UNCONDITIONAL_JUMP)  ; LAB_0047f0d6
    PUSH ESI                            ; 0047f394
        ;   Label: LAB_0047f394
    PUSH EAX                            ; 0047f395
    PUSH EDX                            ; 0047f396
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047f397
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047f0f2                      ; 0047f39c
        ;   XREF to: 0047f0f2 (UNCONDITIONAL_JUMP)  ; LAB_0047f0f2
    MOV ECX,dword ptr [ESP + 0x44]      ; 0047f3a1
        ;   Label: LAB_0047f3a1
    PUSH ECX                            ; 0047f3a5
    PUSH EDX                            ; 0047f3a6
    PUSH EAX                            ; 0047f3a7
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0047f3a8
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    JMP 0x0047f115                      ; 0047f3ad
        ;   XREF to: 0047f115 (UNCONDITIONAL_JUMP)  ; LAB_0047f115
    MOV dword ptr [0x01c6b5c0],ESI      ; 0047f3b2 | DAT_01c6b5c0
        ;   Label: LAB_0047f3b2
    JMP 0x0047f1ba                      ; 0047f3b8
        ;   XREF to: 0047f1ba (UNCONDITIONAL_JUMP)  ; LAB_0047f1ba
    PUSH ESI                            ; 0047f3bd
        ;   Label: LAB_0047f3bd
    MOV ECX,dword ptr [ESP + 0x48]      ; 0047f3be
    PUSH ECX                            ; 0047f3c2
    PUSH EAX                            ; 0047f3c3
    PUSH EDI                            ; 0047f3c4
    PUSH EBX                            ; 0047f3c5
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0047f3c6
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0047f3cb
    JMP 0x0047f1d6                      ; 0047f3ce
        ;   XREF to: 0047f1d6 (UNCONDITIONAL_JUMP)  ; LAB_0047f1d6

