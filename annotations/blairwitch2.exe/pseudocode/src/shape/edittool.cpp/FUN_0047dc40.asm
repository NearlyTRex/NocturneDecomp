; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047dc40(undefined4 param_1,float param_2,float param_3)
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
;   core_dtrace.cpp_FUN_004725fe at 00472747
;   core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 at 0050ba84
;   engine_pod.cpp_FUN_0051aa80 at 0051ac4f
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40 at 0047dc00
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d22a6
;   TerminatedCString s_CEditorTools_updatePerce_005d22bc
;   TerminatedCString s_d_complete_005d22f3
;   TerminatedCString s_d_02d_elapsed_approximat_005d2301
;   undefined4 DAT_005d2337
;   undefined4 DAT_005d233f
;   undefined4 DAT_005d2347
;   undefined4 DAT_005d234f
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c2559c
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c263b8
;   undefined4 DAT_01c263c4
;   undefined4 DAT_01c263c8
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   engine_2d.c_drawHLine_FUN_00402f30
;   engine_2d.c_drawVLine_FUN_00403040
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
;   engine_mini3d.cpp_FUN_004f3570
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f90d0
;   engine_mini3d.cpp_FUN_004f9340
;   engine_mini3d.cpp_FUN_004f9390
;   engine_mini3d.cpp_FUN_004f93b0
;   shape_edittool.cpp_FUN_0047e870
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dc40
        ;   Label: shape_edittool.cpp_FUN_0047dc40
    PUSH ESI                            ; 0047dc41
    PUSH EDI                            ; 0047dc42
    PUSH EBP                            ; 0047dc43
    MOV EBP,ESP                         ; 0047dc44
    SUB ESP,0x4c                        ; 0047dc46
    AND ESP,0xfffffff8                  ; 0047dc49
    CMP dword ptr [0x01c2559c],0x1      ; 0047dc4c | DAT_01c2559c
    JL 0x0047e11f                       ; 0047dc53
        ;   XREF to: 0047e11f (CONDITIONAL_JUMP)  ; LAB_0047e11f
    FLD float ptr [EBP + 0x1c]          ; 0047dc59
        ;   Label: LAB_0047dc59
    XOR ESI,ESI                         ; 0047dc5c
    FLDZ                                ; 0047dc5e
    MOV dword ptr [ESP + 0xc],ESI       ; 0047dc60
    FCOMPP                              ; 0047dc64
    FNSTSW AX                           ; 0047dc66
    SAHF                                ; 0047dc68
    JNC 0x0047dc95                      ; 0047dc69
        ;   XREF to: 0047dc95 (CONDITIONAL_JUMP)  ; LAB_0047dc95
    FLD float ptr [EBP + 0x18]          ; 0047dc6b
    FLDZ                                ; 0047dc6e
    FCOMPP                              ; 0047dc70
    FNSTSW AX                           ; 0047dc72
    SAHF                                ; 0047dc74
    JBE 0x0047dc7a                      ; 0047dc75
        ;   XREF to: 0047dc7a (CONDITIONAL_JUMP)  ; LAB_0047dc7a
    MOV dword ptr [EBP + 0x18],ESI      ; 0047dc77
    FLD float ptr [EBP + 0x18]          ; 0047dc7a
        ;   Label: LAB_0047dc7a
    FCOMP float ptr [EBP + 0x1c]        ; 0047dc7d
    FNSTSW AX                           ; 0047dc80
    SAHF                                ; 0047dc82
    JBE 0x0047dc8b                      ; 0047dc83
        ;   XREF to: 0047dc8b (CONDITIONAL_JUMP)  ; LAB_0047dc8b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047dc85
    MOV dword ptr [EBP + 0x18],EAX      ; 0047dc88
    FLD float ptr [EBP + 0x18]          ; 0047dc8b
        ;   Label: LAB_0047dc8b
    FDIV float ptr [EBP + 0x1c]         ; 0047dc8e
    FSTP float ptr [ESP + 0xc]          ; 0047dc91
    FLD float ptr [ESP + 0xc]           ; 0047dc95
        ;   Label: LAB_0047dc95
    FMUL double ptr [0x005d2337]        ; 0047dc99 | DAT_005d2337
    FADD double ptr [0x005d233f]        ; 0047dc9f | DAT_005d233f
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047dca5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x3c]        ; 0047dcaa
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0047dcae
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EBX,EAX                         ; 0047dcb3
    MOV dword ptr [ESP + 0x30],EAX      ; 0047dcb5
    MOV EAX,[0x01c2559c]                ; 0047dcb9 | DAT_01c2559c
    DEC EAX                             ; 0047dcbe
    SHL EAX,0x3                         ; 0047dcbf
    MOV EDX,EAX                         ; 0047dcc2
    SHL EDX,0x6                         ; 0047dcc4
    SUB EDX,EAX                         ; 0047dcc7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047dcc9
    CMP EAX,dword ptr [EDX + 0x1c25790] ; 0047dccd
    JNZ 0x0047dce7                      ; 0047dcd3
        ;   XREF to: 0047dce7 (CONDITIONAL_JUMP)  ; LAB_0047dce7
    SUB EBX,dword ptr [EDX + 0x1c25794] ; 0047dcd5
    CMP EBX,0x480000                    ; 0047dcdb
    JL 0x0047e118                       ; 0047dce1
        ;   XREF to: 0047e118 (CONDITIONAL_JUMP)  ; LAB_0047e118
    MOV EDI,dword ptr [EBP + 0x14]      ; 0047dce7
        ;   Label: LAB_0047dce7
    PUSH EDI                            ; 0047dcea
    CALL shape_edittool.cpp_FUN_0047e870 ; 0047dceb
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 0047dcf0
    PUSH 0xffff                         ; 0047dcf3
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047dcf8
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047dcfd
    PUSH 0x3f800000                     ; 0047dd00
    CALL engine_mini3d.cpp_FUN_004f3570 ; 0047dd05
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3570()
    ADD ESP,0x4                         ; 0047dd0a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047dd0d
    PUSH EAX                            ; 0047dd11
    PUSH 0x5d22f3                       ; 0047dd12 | = "%d%% complete"
    PUSH -0x1                           ; 0047dd17
    MOV EDX,dword ptr [0x01c263b8]      ; 0047dd19 | DAT_01c263b8
    PUSH EDX                            ; 0047dd1f
    MOV ECX,dword ptr [0x01c35e4c]      ; 0047dd20 | DAT_01c35e4c
    PUSH ECX                            ; 0047dd26
    MOV EBX,dword ptr [0x01c35e50]      ; 0047dd27 | DAT_01c35e50
    PUSH EBX                            ; 0047dd2d
    MOV ESI,dword ptr [0x01c35e48]      ; 0047dd2e | DAT_01c35e48
    PUSH ESI                            ; 0047dd34
    MOV EDI,dword ptr [0x01c25590]      ; 0047dd35 | DAT_01c25590
    PUSH EDI                            ; 0047dd3b
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0 ; 0047dd3c
        ;   XREF to: 004a93f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    MOV EBX,dword ptr [0x01c35e48]      ; 0047dd41 | DAT_01c35e48
    MOV EAX,[0x01c25f7c]                ; 0047dd47 | DAT_01c25f7c
    MOV EDX,dword ptr [0x01c35e4c]      ; 0047dd4c | DAT_01c35e4c
    ADD EAX,EAX                         ; 0047dd52
    MOV ESI,dword ptr [0x01c35e50]      ; 0047dd54 | DAT_01c35e50
    ADD EAX,EDX                         ; 0047dd5a
    ADD ESP,0x20                        ; 0047dd5c
    LEA EDI,[EAX + 0x1]                 ; 0047dd5f
    INC EBX                             ; 0047dd62
    MOV EAX,[0x01c25f7c]                ; 0047dd63 | DAT_01c25f7c
    DEC ESI                             ; 0047dd68
    SHL EAX,0x2                         ; 0047dd69
    MOV dword ptr [ESP + 0x2c],EBX      ; 0047dd6c
    ADD EAX,EDX                         ; 0047dd70
    MOV dword ptr [ESP + 0x34],ESI      ; 0047dd72
    DEC EAX                             ; 0047dd76
    MOV dword ptr [ESP + 0x28],EDI      ; 0047dd77
    MOV dword ptr [ESP + 0x44],EAX      ; 0047dd7b
    MOV dword ptr [ESP + 0x24],EAX      ; 0047dd7f
    MOV EAX,[0x01c263c4]                ; 0047dd83 | DAT_01c263c4
    MOV EDX,dword ptr [0x01c25f84]      ; 0047dd88 | DAT_01c25f84
    MOV dword ptr [ESP + 0x38],EAX      ; 0047dd8e
    MOV EAX,[0x01c263cc]                ; 0047dd92 | DAT_01c263cc
    TEST EDX,EDX                        ; 0047dd97
    JZ 0x0047e15f                       ; 0047dd99
        ;   XREF to: 0047e15f (CONDITIONAL_JUMP)  ; LAB_0047e15f
    JZ 0x0047e147                       ; 0047dd9f
        ;   XREF to: 0047e147 (CONDITIONAL_JUMP)  ; LAB_0047e147
    AND EAX,0xff                        ; 0047dda5
    MOV EDX,EAX                         ; 0047ddaa
    SHL EAX,0x2                         ; 0047ddac
    SUB EAX,EDX                         ; 0047ddaf
    XOR ECX,ECX                         ; 0047ddb1
    XOR EDX,EDX                         ; 0047ddb3
    MOV CL,byte ptr [EAX + 0x1c35838]   ; 0047ddb5 | DAT_01c35838
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047ddbb | DAT_01c35839
    SHL EDX,0x8                         ; 0047ddc1
    SHL ECX,0x10                        ; 0047ddc4
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047ddc7 | DAT_01c3583a
    OR EDX,ECX                          ; 0047ddcd
    AND EAX,0xff                        ; 0047ddcf
    OR EDX,EAX                          ; 0047ddd4
    PUSH EDX                            ; 0047ddd6
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047ddd7
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047dddc
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047dddf
        ;   Label: LAB_0047dddf
    INC EAX                             ; 0047dde3
    PUSH EAX                            ; 0047dde4
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047dde5
    INC EAX                             ; 0047dde9
    PUSH EAX                            ; 0047ddea
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047ddeb
    DEC EAX                             ; 0047ddef
    PUSH EAX                            ; 0047ddf0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047ddf1
    DEC EAX                             ; 0047ddf5
    PUSH EAX                            ; 0047ddf6
    CALL engine_mini3d.cpp_FUN_004f9340 ; 0047ddf7
        ;   XREF to: 004f9340 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9340()
    MOV EAX,[0x01c25f84]                ; 0047ddfc | DAT_01c25f84
    ADD ESP,0x10                        ; 0047de01
    TEST EAX,EAX                        ; 0047de04
    JZ 0x0047e151                       ; 0047de06
        ;   XREF to: 0047e151 (CONDITIONAL_JUMP)  ; LAB_0047e151
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047de0c
    AND EDX,0xff                        ; 0047de10
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047de16
    SUB EAX,EDX                         ; 0047de1d
    XOR EDX,EDX                         ; 0047de1f
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047de21 | DAT_01c35839
    SHL EDX,0x8                         ; 0047de27
    MOV dword ptr [ESP + 0x48],EDX      ; 0047de2a
    XOR EDX,EDX                         ; 0047de2e
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047de30 | DAT_01c35838
    MOV ECX,dword ptr [ESP + 0x48]      ; 0047de36
    SHL EDX,0x10                        ; 0047de3a
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047de3d | DAT_01c3583a
    OR EDX,ECX                          ; 0047de43
    AND EAX,0xff                        ; 0047de45
    OR EDX,EAX                          ; 0047de4a
    PUSH EDX                            ; 0047de4c
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047de4d
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047de52
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047de55
        ;   Label: LAB_0047de55
    PUSH EAX                            ; 0047de59
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047de5a
    PUSH EDX                            ; 0047de5e
    MOV ECX,dword ptr [ESP + 0x30]      ; 0047de5f
    PUSH ECX                            ; 0047de63
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047de64
    PUSH EAX                            ; 0047de68
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047de69
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 0047de6e
    MOV EDX,dword ptr [0x01c25f84]      ; 0047de71 | DAT_01c25f84
        ;   Label: LAB_0047de71
    MOV EAX,[0x01c263d0]                ; 0047de77 | DAT_01c263d0
    TEST EDX,EDX                        ; 0047de7c
    JZ 0x0047e17a                       ; 0047de7e
        ;   XREF to: 0047e17a (CONDITIONAL_JUMP)  ; LAB_0047e17a
    AND EAX,0xff                        ; 0047de84
    MOV EDX,EAX                         ; 0047de89
    SHL EAX,0x2                         ; 0047de8b
    SUB EAX,EDX                         ; 0047de8e
    XOR EDX,EDX                         ; 0047de90
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047de92 | DAT_01c35839
    SHL EDX,0x8                         ; 0047de98
    MOV dword ptr [ESP + 0x48],EDX      ; 0047de9b
    XOR EDX,EDX                         ; 0047de9f
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047dea1 | DAT_01c35838
    MOV ECX,dword ptr [ESP + 0x48]      ; 0047dea7
    SHL EDX,0x10                        ; 0047deab
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047deae | DAT_01c3583a
    OR EDX,ECX                          ; 0047deb4
    AND EAX,0xff                        ; 0047deb6
    OR EAX,EDX                          ; 0047debb
    PUSH EAX                            ; 0047debd
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047debe
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047dec3
    MOV ECX,dword ptr [0x01c25f84]      ; 0047dec6 | DAT_01c25f84
        ;   Label: LAB_0047dec6
    LEA EAX,[EDI + -0x1]                ; 0047decc
    LEA EDX,[EBX + -0x1]                ; 0047decf
    TEST ECX,ECX                        ; 0047ded2
    JZ 0x0047e184                       ; 0047ded4
        ;   XREF to: 0047e184 (CONDITIONAL_JUMP)  ; LAB_0047e184
    PUSH ESI                            ; 0047deda
    PUSH EAX                            ; 0047dedb
    PUSH EDX                            ; 0047dedc
    CALL engine_mini3d.cpp_FUN_004f9390 ; 0047dedd
        ;   XREF to: 004f9390 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f9390()
    ADD ESP,0xc                         ; 0047dee2
        ;   Label: LAB_0047dee2
    MOV ECX,dword ptr [0x01c25f84]      ; 0047dee5 | DAT_01c25f84
    LEA EDX,[EDI + -0x1]                ; 0047deeb
    LEA EAX,[EBX + -0x1]                ; 0047deee
    TEST ECX,ECX                        ; 0047def1
    JZ 0x0047e191                       ; 0047def3
        ;   XREF to: 0047e191 (CONDITIONAL_JUMP)  ; LAB_0047e191
    MOV ECX,dword ptr [ESP + 0x44]      ; 0047def9
    PUSH ECX                            ; 0047defd
    PUSH EDX                            ; 0047defe
    PUSH EAX                            ; 0047deff
    CALL engine_mini3d.cpp_FUN_004f93b0 ; 0047df00
        ;   XREF to: 004f93b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f93b0()
    ADD ESP,0xc                         ; 0047df05
        ;   Label: LAB_0047df05
    MOV EAX,ESI                         ; 0047df08
    SUB EAX,EBX                         ; 0047df0a
    INC EAX                             ; 0047df0c
    MOV dword ptr [ESP + 0x48],EAX      ; 0047df0d
    FILD dword ptr [ESP + 0x48]         ; 0047df11
    FMUL float ptr [ESP + 0xc]          ; 0047df15
    FADD double ptr [0x005d233f]        ; 0047df19 | DAT_005d233f
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047df1f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x48]        ; 0047df24
    MOV EAX,dword ptr [ESP + 0x48]      ; 0047df28
    ADD EAX,EBX                         ; 0047df2c
    CMP EAX,EBX                         ; 0047df2e
    JLE 0x0047dfc6                      ; 0047df30
        ;   XREF to: 0047dfc6 (CONDITIONAL_JUMP)  ; LAB_0047dfc6
    CMP EAX,ESI                         ; 0047df36
    JL 0x0047df3d                       ; 0047df38
        ;   XREF to: 0047df3d (CONDITIONAL_JUMP)  ; LAB_0047df3d
    LEA EAX,[ESI + -0x1]                ; 0047df3a
    MOV EDX,dword ptr [ESP + 0x44]      ; 0047df3d
        ;   Label: LAB_0047df3d
    MOV ESI,dword ptr [0x01c263c8]      ; 0047df41 | DAT_01c263c8
    MOV dword ptr [ESP + 0x1c],EDI      ; 0047df47
    MOV dword ptr [ESP + 0x20],EAX      ; 0047df4b
    MOV dword ptr [ESP + 0x18],EDX      ; 0047df4f
    MOV EDX,dword ptr [0x01c25f84]      ; 0047df53 | DAT_01c25f84
    MOV dword ptr [ESP + 0x14],EBX      ; 0047df59
    TEST EDX,EDX                        ; 0047df5d
    JZ 0x0047e1ad                       ; 0047df5f
        ;   XREF to: 0047e1ad (CONDITIONAL_JUMP)  ; LAB_0047e1ad
    JZ 0x0047e1a2                       ; 0047df65
        ;   XREF to: 0047e1a2 (CONDITIONAL_JUMP)  ; LAB_0047e1a2
    MOV EDX,ESI                         ; 0047df6b
    AND EDX,0xff                        ; 0047df6d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047df73
    SUB EAX,EDX                         ; 0047df7a
    XOR EBX,EBX                         ; 0047df7c
    XOR EDX,EDX                         ; 0047df7e
    MOV BL,byte ptr [EAX + 0x1c35839]   ; 0047df80 | DAT_01c35839
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047df86 | DAT_01c35838
    SHL EBX,0x8                         ; 0047df8c
    SHL EDX,0x10                        ; 0047df8f
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047df92 | DAT_01c3583a
    OR EDX,EBX                          ; 0047df98
    AND EAX,0xff                        ; 0047df9a
    OR EAX,EDX                          ; 0047df9f
    PUSH EAX                            ; 0047dfa1
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047dfa2
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047dfa7
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047dfaa
        ;   Label: LAB_0047dfaa
    PUSH ESI                            ; 0047dfae
    MOV EDI,dword ptr [ESP + 0x24]      ; 0047dfaf
    PUSH EDI                            ; 0047dfb3
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047dfb4
    PUSH EAX                            ; 0047dfb8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047dfb9
    PUSH EDX                            ; 0047dfbd
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 0047dfbe
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 0047dfc3
    CMP dword ptr [ESP + 0x3c],0x0      ; 0047dfc6
        ;   Label: LAB_0047dfc6
    JLE 0x0047e0ed                      ; 0047dfcb
        ;   XREF to: 0047e0ed (CONDITIONAL_JUMP)  ; LAB_0047e0ed
    MOV EAX,[0x01c2559c]                ; 0047dfd1 | DAT_01c2559c
    DEC EAX                             ; 0047dfd6
    SHL EAX,0x3                         ; 0047dfd7
    MOV EBX,EAX                         ; 0047dfda
    SHL EAX,0x6                         ; 0047dfdc
    SUB EAX,EBX                         ; 0047dfdf
    MOV EDX,dword ptr [ESP + 0x30]      ; 0047dfe1
    MOV EBX,dword ptr [EAX + 0x1c2578c] ; 0047dfe5
    MOV EAX,EDX                         ; 0047dfeb
    SUB EAX,EBX                         ; 0047dfed
    MOV dword ptr [ESP + 0x48],EAX      ; 0047dfef
    FILD dword ptr [ESP + 0x48]         ; 0047dff3
    FMUL double ptr [0x005d2347]        ; 0047dff7 | DAT_005d2347
    FST float ptr [ESP + 0x8]           ; 0047dffd
    FST double ptr [ESP]                ; 0047e001
    FCOMP double ptr [0x005d234f]       ; 0047e004 | DAT_005d234f
    FNSTSW AX                           ; 0047e00a
    SAHF                                ; 0047e00c
    JBE 0x0047e0ed                      ; 0047e00d
        ;   XREF to: 0047e0ed (CONDITIONAL_JUMP)  ; LAB_0047e0ed
    FLD float ptr [EBP + 0x18]          ; 0047e013
    FLD float ptr [EBP + 0x1c]          ; 0047e016
    FSUB ST0,ST1                        ; 0047e019
    FMUL float ptr [ESP + 0x8]          ; 0047e01b
    FDIVRP                              ; 0047e01f
    FADD double ptr [0x005d233f]        ; 0047e021 | DAT_005d233f
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047e027
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x40]        ; 0047e02c
    MOV ESI,dword ptr [ESP + 0x40]      ; 0047e030
    TEST ESI,ESI                        ; 0047e034
    JLE 0x0047e0ed                      ; 0047e036
        ;   XREF to: 0047e0ed (CONDITIONAL_JUMP)  ; LAB_0047e0ed
    MOV EBX,0x3c                        ; 0047e03c
    MOV EDX,ESI                         ; 0047e041
    MOV EAX,ESI                         ; 0047e043
    SAR EDX,0x1f                        ; 0047e045
    IDIV EBX                            ; 0047e048
    MOV ESI,EAX                         ; 0047e04a
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047e04c
    MOV EDX,EAX                         ; 0047e050
    SAR EDX,0x1f                        ; 0047e052
    IDIV EBX                            ; 0047e055
    FLD double ptr [ESP]                ; 0047e057
    FADD double ptr [0x005d233f]        ; 0047e05a | DAT_005d233f
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047e060
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 0047e065
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047e069
    MOV dword ptr [ESP + 0x40],EDX      ; 0047e06d
    MOV EDX,EAX                         ; 0047e071
    SAR EDX,0x1f                        ; 0047e073
    IDIV EBX                            ; 0047e076
    MOV EBX,EAX                         ; 0047e078
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047e07a
    MOV EDX,EAX                         ; 0047e07e
    MOV EDI,0x3c                        ; 0047e080
    SAR EDX,0x1f                        ; 0047e085
    IDIV EDI                            ; 0047e088
    PUSH 0xffff                         ; 0047e08a
    MOV dword ptr [ESP + 0x14],EDX      ; 0047e08f
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047e093
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047e098
    PUSH 0x3f800000                     ; 0047e09b
    CALL engine_mini3d.cpp_FUN_004f3570 ; 0047e0a0
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3570()
    ADD ESP,0x4                         ; 0047e0a5
    MOV EDI,dword ptr [ESP + 0x40]      ; 0047e0a8
    PUSH EDI                            ; 0047e0ac
    PUSH ESI                            ; 0047e0ad
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047e0ae
    PUSH EAX                            ; 0047e0b2
    PUSH EBX                            ; 0047e0b3
    PUSH 0x5d2301                       ; 0047e0b4 | = "%d:%02d elapsed, approximately %d:%02..."
    MOV EDX,dword ptr [0x01c263b8]      ; 0047e0b9 | DAT_01c263b8
    PUSH -0x1                           ; 0047e0bf
    MOV ECX,dword ptr [0x01c25f7c]      ; 0047e0c1 | DAT_01c25f7c
    MOV EAX,[0x01c35e54]                ; 0047e0c7 | DAT_01c35e54
    PUSH EDX                            ; 0047e0cc
    SUB EAX,ECX                         ; 0047e0cd
    PUSH EAX                            ; 0047e0cf
    MOV EBX,dword ptr [0x01c35e50]      ; 0047e0d0 | DAT_01c35e50
    PUSH EBX                            ; 0047e0d6
    MOV ESI,dword ptr [0x01c35e48]      ; 0047e0d7 | DAT_01c35e48
    PUSH ESI                            ; 0047e0dd
    MOV EDI,dword ptr [0x01c25590]      ; 0047e0de | DAT_01c25590
    PUSH EDI                            ; 0047e0e4
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0 ; 0047e0e5
        ;   XREF to: 004a93f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x2c                        ; 0047e0ea
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0047e0ed
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
        ;   Label: LAB_0047e0ed
    MOV EAX,[0x01c2559c]                ; 0047e0f2 | DAT_01c2559c
    DEC EAX                             ; 0047e0f7
    SHL EAX,0x3                         ; 0047e0f8
    MOV EBX,EAX                         ; 0047e0fb
    SHL EAX,0x6                         ; 0047e0fd
    SUB EAX,EBX                         ; 0047e100
    MOV EBX,EAX                         ; 0047e102
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0047e104
    MOV dword ptr [EBX + 0x1c25790],EAX ; 0047e108
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047e10e
    MOV dword ptr [EBX + 0x1c25794],EAX ; 0047e112
    MOV ESP,EBP                         ; 0047e118
        ;   Label: LAB_0047e118
    POP EBP                             ; 0047e11a
    POP EDI                             ; 0047e11b
    POP ESI                             ; 0047e11c
    POP EBX                             ; 0047e11d
    RET                                 ; 0047e11e
    MOV ECX,0x5d22a6                    ; 0047e11f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047e11f
    MOV EBX,0x795                       ; 0047e124
    PUSH 0x5d22bc                       ; 0047e129 | = "CEditorTools::updatePercentageWindow ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0047e12e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047e134 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047e13a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047e13f
    JMP 0x0047dc59                      ; 0047e142
        ;   XREF to: 0047dc59 (UNCONDITIONAL_JUMP)  ; LAB_0047dc59
    MOV [0x01c35e60],EAX                ; 0047e147 | DAT_01c35e60
        ;   Label: LAB_0047e147
    JMP 0x0047dddf                      ; 0047e14c
        ;   XREF to: 0047dddf (UNCONDITIONAL_JUMP)  ; LAB_0047dddf
    MOV EAX,dword ptr [ESP + 0x38]      ; 0047e151
        ;   Label: LAB_0047e151
    MOV [0x01c35e60],EAX                ; 0047e155 | DAT_01c35e60
    JMP 0x0047de55                      ; 0047e15a
        ;   XREF to: 0047de55 (UNCONDITIONAL_JUMP)  ; LAB_0047de55
    PUSH EAX                            ; 0047e15f
        ;   Label: LAB_0047e15f
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0047e160
    PUSH ECX                            ; 0047e164
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047e165
    PUSH EAX                            ; 0047e169
    PUSH ESI                            ; 0047e16a
    PUSH EDI                            ; 0047e16b
    PUSH EBX                            ; 0047e16c
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 0047e16d
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 0047e172
    JMP 0x0047de71                      ; 0047e175
        ;   XREF to: 0047de71 (UNCONDITIONAL_JUMP)  ; LAB_0047de71
    MOV [0x01c35e60],EAX                ; 0047e17a | DAT_01c35e60
        ;   Label: LAB_0047e17a
    JMP 0x0047dec6                      ; 0047e17f
        ;   XREF to: 0047dec6 (UNCONDITIONAL_JUMP)  ; LAB_0047dec6
    PUSH ESI                            ; 0047e184
        ;   Label: LAB_0047e184
    PUSH EAX                            ; 0047e185
    PUSH EDX                            ; 0047e186
    CALL engine_2d.c_drawHLine_FUN_00402f30 ; 0047e187
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402f30(int x1, int y, int x2)
    JMP 0x0047dee2                      ; 0047e18c
        ;   XREF to: 0047dee2 (UNCONDITIONAL_JUMP)  ; LAB_0047dee2
    MOV ECX,dword ptr [ESP + 0x44]      ; 0047e191
        ;   Label: LAB_0047e191
    PUSH ECX                            ; 0047e195
    PUSH EDX                            ; 0047e196
    PUSH EAX                            ; 0047e197
    CALL engine_2d.c_drawVLine_FUN_00403040 ; 0047e198
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403040(int x, int y1, int y2)
    JMP 0x0047df05                      ; 0047e19d
        ;   XREF to: 0047df05 (UNCONDITIONAL_JUMP)  ; LAB_0047df05
    MOV dword ptr [0x01c35e60],ESI      ; 0047e1a2 | DAT_01c35e60
        ;   Label: LAB_0047e1a2
    JMP 0x0047dfaa                      ; 0047e1a8
        ;   XREF to: 0047dfaa (UNCONDITIONAL_JUMP)  ; LAB_0047dfaa
    PUSH ESI                            ; 0047e1ad
        ;   Label: LAB_0047e1ad
    MOV ECX,dword ptr [ESP + 0x48]      ; 0047e1ae
    PUSH ECX                            ; 0047e1b2
    PUSH EAX                            ; 0047e1b3
    PUSH EDI                            ; 0047e1b4
    PUSH EBX                            ; 0047e1b5
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0047e1b6
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0047e1bb
    JMP 0x0047dfc6                      ; 0047e1be
        ;   XREF to: 0047dfc6 (UNCONDITIONAL_JUMP)  ; LAB_0047dfc6

