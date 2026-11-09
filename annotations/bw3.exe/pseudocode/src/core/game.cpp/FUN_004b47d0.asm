; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b47d0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x170]:8  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined        Stack[-0x164]:1  local_164
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
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b73c2
;
; Referenced Globals:
;   undefined4 s_d_s_005c2217+1
;   undefined4 DAT_005c2220
;   undefined4 DAT_005c2228
;   undefined4 DAT_005c2230
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   CScript* g_CScriptPtr = 01ed73e0
;   undefined4 DAT_01549aa0
;   undefined4 DAT_01549aa4
;   undefined4 DAT_01549aa8
;   undefined4 DAT_01549ab4
;   undefined4 DAT_01d229f0
;   undefined4 DAT_01d22af0
;   undefined4 DAT_01d22af4
;   CScript g_CScriptInstance
;   ... and 1 more
;
; Called Functions:
;   core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_FUN_005a28c0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
;   engine_font.cpp_FUN_004b0a20
;   engine_font.cpp_FUN_004b2a80
;   engine_font.cpp_FUN_004b2e40
;   engine_font.cpp_FUN_004b30c0
;   engine_font.cpp_FUN_004b30f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b47d0
        ;   Label: core_game.cpp_FUN_004b47d0
    PUSH ESI                            ; 004b47d1
    PUSH EDI                            ; 004b47d2
    PUSH EBP                            ; 004b47d3
    MOV EBP,ESP                         ; 004b47d4
    SUB ESP,0x160                       ; 004b47d6
    AND ESP,0xfffffff8                  ; 004b47dc
    MOV EAX,[0x005fba18]                ; 004b47df | DAT_005fba18
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b47e4
    MOV dword ptr [ESP + 0x110],EAX     ; 004b47e7
    ADD EDX,0xb80                       ; 004b47ee
    MOV EAX,[0x005fba1c]                ; 004b47f4 | DAT_005fba1c
    MOV EDI,EDX                         ; 004b47f9
    MOV dword ptr [ESP + 0x114],EAX     ; 004b47fb
    MOV dword ptr [ESP + 0x10c],EAX     ; 004b4802
    SUB ECX,ECX                         ; 004b4809
    DEC ECX                             ; 004b480b
    XOR EAX,EAX                         ; 004b480c
    SCASB.REPNE ES:EDI                  ; 004b480e
    NOT ECX                             ; 004b4810
    DEC ECX                             ; 004b4812
    TEST ECX,ECX                        ; 004b4813
    JA 0x004b4d0d                       ; 004b4815
        ;   XREF to: 004b4d0d (CONDITIONAL_JUMP)  ; LAB_004b4d0d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b481b
        ;   Label: LAB_004b481b
    TEST dword ptr [EAX + 0x434],0x7fffffff ; 004b481e
    JZ 0x004b49a0                       ; 004b4828
        ;   XREF to: 004b49a0 (CONDITIONAL_JUMP)  ; LAB_004b49a0
    FLD1                                ; 004b482e
    FLD float ptr [EAX + 0x434]         ; 004b4830
    FSTP double ptr [ESP]               ; 004b4836
    FCOMP double ptr [ESP]              ; 004b4839
    FNSTSW AX                           ; 004b483c
    SAHF                                ; 004b483e
    JBE 0x004b4d32                      ; 004b483f
        ;   XREF to: 004b4d32 (CONDITIONAL_JUMP)  ; LAB_004b4d32
    FLD double ptr [ESP]                ; 004b4845
    FMUL double ptr [0x005c2220]        ; 004b4848 | DAT_005c2220
    CALL crt_math.c_round_FUN_005a3120  ; 004b484e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x15c]       ; 004b4853
    MOV EBX,dword ptr [ESP + 0x15c]     ; 004b485a
    PUSH EBX                            ; 004b4861
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 004b4862
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
        ;   Label: LAB_004b4862
    ADD ESP,0x4                         ; 004b4867
    MOV EAX,[0x01549aa8]                ; 004b486a | DAT_01549aa8
    MOV dword ptr [ESP + 0x138],EAX     ; 004b486f
    MOV EAX,[0x02039090]                ; 004b4876 | g_CDemonCameraInstance.field324_0x144
    CMP EAX,0x1e0                       ; 004b487b
    JGE 0x004b488e                      ; 004b4880
        ;   XREF to: 004b488e (CONDITIONAL_JUMP)  ; LAB_004b488e
    MOV EAX,[0x01549ab4]                ; 004b4882 | DAT_01549ab4
    MOV dword ptr [ESP + 0x138],EAX     ; 004b4887
    MOV EDX,dword ptr [0x02039090]      ; 004b488e | g_CDemonCameraInstance.field324_0x144
        ;   Label: LAB_004b488e
    LEA EAX,[EDX*0x8 + 0x0]             ; 004b4894
    ADD EDX,EAX                         ; 004b489b
    MOV ECX,0xa                         ; 004b489d
    MOV EAX,EDX                         ; 004b48a2
    SAR EDX,0x1f                        ; 004b48a4
    IDIV ECX                            ; 004b48a7
    PUSH EAX                            ; 004b48a9
    PUSH 0x100                          ; 004b48aa
    PUSH ECX                            ; 004b48af
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b48b0
    PUSH 0x1d1b110                      ; 004b48b3
    ADD EAX,0x334                       ; 004b48b8
    PUSH EAX                            ; 004b48bd
    MOV ESI,dword ptr [ESP + 0x14c]     ; 004b48be
    PUSH ESI                            ; 004b48c5
    CALL engine_font.cpp_FUN_004b2e40   ; 004b48c6
        ;   XREF to: 004b2e40 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b2e40()
    ADD ESP,0x18                        ; 004b48cb
    PUSH 0x58                           ; 004b48ce
    PUSH ESI                            ; 004b48d0
    MOV EBX,EAX                         ; 004b48d1
    MOV dword ptr [ESP + 0x130],EAX     ; 004b48d3
    CALL engine_font.cpp_FUN_004b30f0   ; 004b48da
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    IMUL EBX,EAX                        ; 004b48df
    MOV EDI,ESI                         ; 004b48e2
    ADD ESP,0x8                         ; 004b48e4
    MOV ESI,EAX                         ; 004b48e7
    MOV dword ptr [ESP + 0x11c],EAX     ; 004b48e9
    MOV EAX,[0x005fba1c]                ; 004b48f0 | DAT_005fba1c
    SUB EAX,EBX                         ; 004b48f5
    MOV EBX,EAX                         ; 004b48f7
    MOV EAX,[0x006039e0]                ; 004b48f9 | g_CScriptPtr
    PUSH EAX                            ; 004b48fe | g_CScriptInstance
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60 ; 004b48ff
        ;   XREF to: 00528f60 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60(CScript * this_ptr)
    SUB EBX,EAX                         ; 004b4904
    MOV EAX,EBX                         ; 004b4906
    SUB EAX,ESI                         ; 004b4908
    MOV EDX,dword ptr [0x01549ab4]      ; 004b490a | DAT_01549ab4
    MOV ESI,EAX                         ; 004b4910
    MOV EAX,EDI                         ; 004b4912
    ADD ESP,0x4                         ; 004b4914
    CMP EAX,EDX                         ; 004b4917
    JNZ 0x004b491e                      ; 004b4919
        ;   XREF to: 004b491e (CONDITIONAL_JUMP)  ; LAB_004b491e
    SUB ESI,0x7                         ; 004b491b
    MOV ECX,dword ptr [ESP + 0x128]     ; 004b491e
        ;   Label: LAB_004b491e
    MOV EAX,[0x005fba18]                ; 004b4925 | DAT_005fba18
    XOR EDI,EDI                         ; 004b492a
    DEC EAX                             ; 004b492c
    TEST ECX,ECX                        ; 004b492d
    JLE 0x004b49a0                      ; 004b492f
        ;   XREF to: 004b49a0 (CONDITIONAL_JUMP)  ; LAB_004b49a0
    MOV EBX,0x1d1b110                   ; 004b4931
    MOV dword ptr [ESP + 0x124],EAX     ; 004b4936
    PUSH EBX                            ; 004b493d
        ;   Label: LAB_004b493d
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004b493e
    PUSH EAX                            ; 004b4945
    CALL engine_font.cpp_FUN_004b2a80   ; 004b4946
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004b494b
    MOV EDX,dword ptr [ESP + 0x124]     ; 004b494e
    SUB EDX,EAX                         ; 004b4955
    MOV EAX,EDX                         ; 004b4957
    SAR EDX,0x1f                        ; 004b4959
    SUB EAX,EDX                         ; 004b495c
    SAR EAX,0x1                         ; 004b495e
    PUSH 0x0                            ; 004b4960
    PUSH 0xf8                           ; 004b4962
    PUSH ESI                            ; 004b4967
    PUSH EAX                            ; 004b4968
    PUSH EBX                            ; 004b4969
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004b496a
    PUSH EDX                            ; 004b4971
    INC EDI                             ; 004b4972
    CALL engine_font.cpp_FUN_004b0a20   ; 004b4973
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b4978
    ADD EBX,0x100                       ; 004b497b
    MOV ECX,dword ptr [ESP + 0x11c]     ; 004b4981
    MOV EAX,dword ptr [ESP + 0x128]     ; 004b4988
    ADD ESI,ECX                         ; 004b498f
    CMP EDI,EAX                         ; 004b4991
    JL 0x004b493d                       ; 004b4993
        ;   XREF to: 004b493d (CONDITIONAL_JUMP)  ; LAB_004b493d
    LEA EAX,[EAX]                       ; 004b4995
    LEA EDX,[EDX]                       ; 004b499b
    MOV EBX,EBX                         ; 004b499e
    FLD float ptr [0x01d22af4]          ; 004b49a0 | DAT_01d22af4
        ;   Label: LAB_004b49a0
    FLDZ                                ; 004b49a6
    FCOMPP                              ; 004b49a8
    FNSTSW AX                           ; 004b49aa
    SAHF                                ; 004b49ac
    JNC 0x004b4a66                      ; 004b49ad
        ;   XREF to: 004b4a66 (CONDITIONAL_JUMP)  ; LAB_004b4a66
    MOV EDX,dword ptr [0x005fba1c]      ; 004b49b3 | DAT_005fba1c
    MOV EBX,dword ptr [0x01549aa0]      ; 004b49b9 | DAT_01549aa0
    CMP EDX,0x1e0                       ; 004b49bf
    JGE 0x004b49db                      ; 004b49c5
        ;   XREF to: 004b49db (CONDITIONAL_JUMP)  ; LAB_004b49db
    MOV EBX,dword ptr [0x01549aa4]      ; 004b49c7 | DAT_01549aa4
    CMP EDX,0x180                       ; 004b49cd
    JGE 0x004b49db                      ; 004b49d3
        ;   XREF to: 004b49db (CONDITIONAL_JUMP)  ; LAB_004b49db
    MOV EBX,dword ptr [0x01549ab4]      ; 004b49d5 | DAT_01549ab4
    PUSH 0x58                           ; 004b49db
        ;   Label: LAB_004b49db
    PUSH EBX                            ; 004b49dd
    CALL engine_font.cpp_FUN_004b30f0   ; 004b49de
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b49e3
    PUSH 0x58                           ; 004b49e6
    PUSH EBX                            ; 004b49e8
    MOV EDI,EAX                         ; 004b49e9
    CALL engine_font.cpp_FUN_004b30c0   ; 004b49eb
        ;   XREF to: 004b30c0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b30c0()
    ADD ESP,0x8                         ; 004b49f0
    MOV ESI,EAX                         ; 004b49f3
    MOV EAX,[0x006039e0]                ; 004b49f5 | g_CScriptPtr
    PUSH EAX                            ; 004b49fa | g_CScriptInstance
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60 ; 004b49fb
        ;   XREF to: 00528f60 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60(CScript * this_ptr)
    ADD ESP,0x4                         ; 004b4a00
    MOV EDX,dword ptr [0x006039e0]      ; 004b4a03 | g_CScriptPtr
    PUSH EDX                            ; 004b4a09 | g_CScriptInstance
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60 ; 004b4a0a
        ;   XREF to: 00528f60 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00528f60(CScript * this_ptr)
    MOV EDX,dword ptr [0x005fba1c]      ; 004b4a0f | DAT_005fba1c
    SUB EDX,EAX                         ; 004b4a15
    MOV EAX,EDX                         ; 004b4a17
    ADD ESP,0x4                         ; 004b4a19
    SUB EAX,EDI                         ; 004b4a1c
    PUSH 0xffff                         ; 004b4a1e
    MOV EDI,EAX                         ; 004b4a23
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 004b4a25
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 004b4a2a
    PUSH 0x1d229f0                      ; 004b4a2d | DAT_01d229f0
    MOV ECX,dword ptr [0x01d22af0]      ; 004b4a32 | DAT_01d22af0
    PUSH ECX                            ; 004b4a38
    PUSH 0x5c2218                       ; 004b4a39 | s_d_s_005c2217+1
    LEA EAX,[ESP + 0x18]                ; 004b4a3e
    PUSH EAX                            ; 004b4a42
    CALL crt_unknown.c_FUN_005a28c0     ; 004b4a43
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b4a48
    PUSH 0x0                            ; 004b4a4b
    PUSH 0xf8                           ; 004b4a4d
    SUB EDI,ESI                         ; 004b4a52
    PUSH EDI                            ; 004b4a54
    ADD ESI,ESI                         ; 004b4a55
    PUSH ESI                            ; 004b4a57
    LEA EAX,[ESP + 0x1c]                ; 004b4a58
    PUSH EAX                            ; 004b4a5c
    PUSH EBX                            ; 004b4a5d
    CALL engine_font.cpp_FUN_004b0a20   ; 004b4a5e
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b4a63
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b4a66
        ;   Label: LAB_004b4a66
    CMP dword ptr [EAX + 0x24c],0x0     ; 004b4a69
    JNZ 0x004b4d06                      ; 004b4a70
        ;   XREF to: 004b4d06 (CONDITIONAL_JUMP)  ; LAB_004b4d06
    CMP dword ptr [EAX + 0x43c],0x0     ; 004b4a76
    JLE 0x004b4d06                      ; 004b4a7d
        ;   XREF to: 004b4d06 (CONDITIONAL_JUMP)  ; LAB_004b4d06
    MOV EAX,dword ptr [ESP + 0x110]     ; 004b4a83
    MOV EDX,EAX                         ; 004b4a8a
    SAR EDX,0x1f                        ; 004b4a8c
    SHL EDX,0x2                         ; 004b4a8f
    SBB EAX,EDX                         ; 004b4a92
    SAR EAX,0x2                         ; 004b4a94
    MOV EBX,EAX                         ; 004b4a97
    MOV EAX,dword ptr [ESP + 0x114]     ; 004b4a99
    MOV EDX,EAX                         ; 004b4aa0
    MOV ECX,0x28                        ; 004b4aa2
    SAR EDX,0x1f                        ; 004b4aa7
    IDIV ECX                            ; 004b4aaa
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b4aac
    MOV EAX,[0x01549ab4]                ; 004b4ab3 | DAT_01549ab4
    MOV EDI,dword ptr [0x005fba18]      ; 004b4ab8 | DAT_005fba18
    MOV dword ptr [ESP + 0x130],EAX     ; 004b4abe
    CMP EDI,0x280                       ; 004b4ac5
    JG 0x004b4d3c                       ; 004b4acb
        ;   XREF to: 004b4d3c (CONDITIONAL_JUMP)  ; LAB_004b4d3c
    CMP dword ptr [0x005fba18],0x320    ; 004b4ad1 | DAT_005fba18
        ;   Label: LAB_004b4ad1
    JLE 0x004b4ae9                      ; 004b4adb
        ;   XREF to: 004b4ae9 (CONDITIONAL_JUMP)  ; LAB_004b4ae9
    MOV EAX,[0x01549aa0]                ; 004b4add | DAT_01549aa0
    MOV dword ptr [ESP + 0x130],EAX     ; 004b4ae2
    PUSH 0x58                           ; 004b4ae9
        ;   Label: LAB_004b4ae9
    MOV EDX,dword ptr [ESP + 0x134]     ; 004b4aeb
    PUSH EDX                            ; 004b4af2
    CALL engine_font.cpp_FUN_004b30f0   ; 004b4af3
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b4af8
    CMP EAX,dword ptr [ESP + 0x12c]     ; 004b4afb
    JLE 0x004b4b1d                      ; 004b4b02
        ;   XREF to: 004b4b1d (CONDITIONAL_JUMP)  ; LAB_004b4b1d
    PUSH 0x58                           ; 004b4b04
    MOV ESI,dword ptr [ESP + 0x134]     ; 004b4b06
    PUSH ESI                            ; 004b4b0d
    CALL engine_font.cpp_FUN_004b30f0   ; 004b4b0e
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b4b13
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b4b16
    MOV EAX,dword ptr [ESP + 0x110]     ; 004b4b1d
        ;   Label: LAB_004b4b1d
    MOV EDX,EAX                         ; 004b4b24
    MOV ECX,0x50                        ; 004b4b26
    SAR EDX,0x1f                        ; 004b4b2b
    IDIV ECX                            ; 004b4b2e
    MOV dword ptr [ESP + 0x134],EAX     ; 004b4b30
    ADD EAX,EBX                         ; 004b4b37
    MOV dword ptr [ESP + 0x120],EAX     ; 004b4b39
    MOV EAX,dword ptr [ESP + 0x114]     ; 004b4b40
    MOV EDX,EAX                         ; 004b4b47
    SAR EDX,0x1f                        ; 004b4b49
    IDIV ECX                            ; 004b4b4c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 004b4b4e
    SUB ESI,EAX                         ; 004b4b55
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b4b57
    XOR EDI,EDI                         ; 004b4b5a
    MOV EDX,dword ptr [EAX + 0x43c]     ; 004b4b5c
    MOV dword ptr [ESP + 0x150],EDI     ; 004b4b62
    TEST EDX,EDX                        ; 004b4b69
    JLE 0x004b4d06                      ; 004b4b6b
        ;   XREF to: 004b4d06 (CONDITIONAL_JUMP)  ; LAB_004b4d06
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004b4b71
    LEA ECX,[EAX + 0x440]               ; 004b4b78
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b4b7e
    SUB EAX,EDX                         ; 004b4b85
    MOV EDX,EAX                         ; 004b4b87
    SAR EDX,0x1f                        ; 004b4b89
    SUB EAX,EDX                         ; 004b4b8c
    SAR EAX,0x1                         ; 004b4b8e
    MOV dword ptr [ESP + 0x118],EAX     ; 004b4b90
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b4b97
    MOV dword ptr [ESP + 0x158],ECX     ; 004b4b9a
    MOV dword ptr [ESP + 0x154],EAX     ; 004b4ba1
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004b4ba8
        ;   Label: LAB_004b4ba8
    MOV EAX,ESI                         ; 004b4baf
    SUB EAX,EBX                         ; 004b4bb1
    MOV dword ptr [ESP + 0x13c],EAX     ; 004b4bb3
    MOV dword ptr [ESP + 0x144],EAX     ; 004b4bba
    MOV EAX,dword ptr [ESP + 0x120]     ; 004b4bc1
    MOV dword ptr [ESP + 0x140],EAX     ; 004b4bc8
    MOV EAX,dword ptr [ESP + 0x154]     ; 004b4bcf
    MOV EDI,0x2                         ; 004b4bd6
    MOV EAX,dword ptr [EAX + 0x940]     ; 004b4bdb
    MOV dword ptr [ESP + 0x148],ESI     ; 004b4be1
    MOV dword ptr [ESP + 0x8],EAX       ; 004b4be8
    MOV EBX,dword ptr [ESP + 0x134]     ; 004b4bec
    FLD float ptr [ESP + 0x8]           ; 004b4bf3
    FCOMP double ptr [0x005c2228]       ; 004b4bf7 | DAT_005c2228
    FNSTSW AX                           ; 004b4bfd
    SAHF                                ; 004b4bff
    JNC 0x004b4c07                      ; 004b4c00
        ;   XREF to: 004b4c07 (CONDITIONAL_JUMP)  ; LAB_004b4c07
    MOV EDI,0xfb                        ; 004b4c02
    FLD float ptr [ESP + 0x8]           ; 004b4c07
        ;   Label: LAB_004b4c07
    FCOMP double ptr [0x005c2230]       ; 004b4c0b | DAT_005c2230
    FNSTSW AX                           ; 004b4c11
    SAHF                                ; 004b4c13
    JNC 0x004b4c1b                      ; 004b4c14
        ;   XREF to: 004b4c1b (CONDITIONAL_JUMP)  ; LAB_004b4c1b
    MOV EDI,0x1                         ; 004b4c16
    PUSH 0x0                            ; 004b4c1b
        ;   Label: LAB_004b4c1b
    PUSH 0x0                            ; 004b4c1d
    MOV EAX,dword ptr [ESP + 0x150]     ; 004b4c1f
    PUSH EAX                            ; 004b4c26
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004b4c27
    PUSH EDX                            ; 004b4c2e
    MOV ECX,dword ptr [ESP + 0x154]     ; 004b4c2f
    PUSH ECX                            ; 004b4c36
    PUSH EBX                            ; 004b4c37
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004b4c38
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004b4c3d
    MOV EAX,dword ptr [ESP + 0x140]     ; 004b4c40
    SUB EAX,EBX                         ; 004b4c47
    INC EAX                             ; 004b4c49
    MOV dword ptr [ESP + 0x15c],EAX     ; 004b4c4a
    FILD dword ptr [ESP + 0x15c]        ; 004b4c51
    FMUL float ptr [ESP + 0x8]          ; 004b4c58
    CALL crt_math.c_round_FUN_005a3120  ; 004b4c5c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x14c]       ; 004b4c61
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004b4c68
    TEST EAX,EAX                        ; 004b4c6f
    JLE 0x004b4c90                      ; 004b4c71
        ;   XREF to: 004b4c90 (CONDITIONAL_JUMP)  ; LAB_004b4c90
    PUSH EDI                            ; 004b4c73
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004b4c74
    PUSH EDX                            ; 004b4c7b
    ADD EAX,EBX                         ; 004b4c7c
    PUSH EAX                            ; 004b4c7e
    MOV ECX,dword ptr [ESP + 0x150]     ; 004b4c7f
    PUSH ECX                            ; 004b4c86
    PUSH EBX                            ; 004b4c87
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004b4c88
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004b4c8d
    PUSH 0x0                            ; 004b4c90
        ;   Label: LAB_004b4c90
    PUSH 0xf8                           ; 004b4c92
    MOV ECX,dword ptr [ESP + 0x144]     ; 004b4c97
    PUSH ECX                            ; 004b4c9e
    MOV EBX,dword ptr [ESP + 0x140]     ; 004b4c9f
    PUSH EBX                            ; 004b4ca6
    MOV EDI,dword ptr [ESP + 0x168]     ; 004b4ca7
    PUSH EDI                            ; 004b4cae
    MOV EAX,dword ptr [ESP + 0x144]     ; 004b4caf
    PUSH EAX                            ; 004b4cb6
    CALL engine_font.cpp_FUN_004b0a20   ; 004b4cb7
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b4cbc
    LEA EBX,[EDI + 0x100]               ; 004b4cbf
    MOV EDX,dword ptr [ESP + 0x118]     ; 004b4cc5
    MOV ECX,dword ptr [ESP + 0x154]     ; 004b4ccc
    MOV EDI,dword ptr [ESP + 0x150]     ; 004b4cd3
    MOV dword ptr [ESP + 0x158],EBX     ; 004b4cda
    ADD ECX,0x4                         ; 004b4ce1
    SUB ESI,EDX                         ; 004b4ce4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b4ce6
    INC EDI                             ; 004b4ce9
    MOV dword ptr [ESP + 0x154],ECX     ; 004b4cea
    MOV ECX,dword ptr [EDX + 0x43c]     ; 004b4cf1
    MOV dword ptr [ESP + 0x150],EDI     ; 004b4cf7
    CMP EDI,ECX                         ; 004b4cfe
    JL 0x004b4ba8                       ; 004b4d00
        ;   XREF to: 004b4ba8 (CONDITIONAL_JUMP)  ; LAB_004b4ba8
    MOV ESP,EBP                         ; 004b4d06
        ;   Label: LAB_004b4d06
    POP EBP                             ; 004b4d08
    POP EDI                             ; 004b4d09
    POP ESI                             ; 004b4d0a
    POP EBX                             ; 004b4d0b
    RET                                 ; 004b4d0c
    PUSH EDX                            ; 004b4d0d
        ;   Label: LAB_004b4d0d
    PUSH 0x0                            ; 004b4d0e
    PUSH 0xf8                           ; 004b4d10
    PUSH 0xa                            ; 004b4d15
    PUSH 0x27f                          ; 004b4d17
    PUSH 0x0                            ; 004b4d1c
    MOV EDX,dword ptr [0x01549aa0]      ; 004b4d1e | DAT_01549aa0
    PUSH EDX                            ; 004b4d24
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0 ; 004b4d25
        ;   XREF to: 004b0fa0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004b4d2a
    JMP 0x004b481b                      ; 004b4d2d
        ;   XREF to: 004b481b (UNCONDITIONAL_JUMP)  ; LAB_004b481b
    PUSH 0xffff                         ; 004b4d32
        ;   Label: LAB_004b4d32
    JMP 0x004b4862                      ; 004b4d37
        ;   XREF to: 004b4862 (UNCONDITIONAL_JUMP)  ; LAB_004b4862
    MOV EAX,[0x01549aa4]                ; 004b4d3c | DAT_01549aa4
        ;   Label: LAB_004b4d3c
    MOV dword ptr [ESP + 0x130],EAX     ; 004b4d41
    JMP 0x004b4ad1                      ; 004b4d48
        ;   XREF to: 004b4ad1 (UNCONDITIONAL_JUMP)  ; LAB_004b4ad1

