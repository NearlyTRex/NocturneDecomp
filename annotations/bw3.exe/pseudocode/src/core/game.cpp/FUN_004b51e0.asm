; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b51e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1c10]:1  local_1c10
; undefined        Stack[-0x1b10]:1  local_1b10
; undefined        Stack[-0x1a10]:1  local_1a10
; undefined        Stack[-0x1910]:1  local_1910
; undefined        Stack[-0x1810]:1  local_1810
; undefined        Stack[-0x1710]:1  local_1710
; undefined        Stack[-0x1610]:1  local_1610
; undefined        Stack[-0x1510]:1  local_1510
; undefined        Stack[-0x1410]:1  local_1410
; undefined        Stack[-0x1310]:1  local_1310
; undefined        Stack[-0x1210]:1  local_1210
; undefined        Stack[-0x1110]:1  local_1110
; undefined        Stack[-0x1010]:1  local_1010
; undefined        Stack[-0xf10]:1  local_f10
; undefined        Stack[-0xe10]:1  local_e10
; undefined        Stack[-0xd10]:1  local_d10
; undefined        Stack[-0xc10]:1  local_c10
; undefined        Stack[-0xb10]:1  local_b10
; undefined        Stack[-0xa10]:1  local_a10
; undefined        Stack[-0x910]:1  local_910
; undefined        Stack[-0x810]:1  local_810
; undefined        Stack[-0x710]:1  local_710
; undefined        Stack[-0x610]:1  local_610
; undefined        Stack[-0x510]:1  local_510
; undefined        Stack[-0x410]:1  local_410
; undefined        Stack[-0x310]:1  local_310
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b791f
;
; Referenced Globals:
;   undefined4 s_s_s_005c223f+1
;   TerminatedCString s_Quick_help_005c2248
;   TerminatedCString s_F1_Toggle_help_005c2253
;   TerminatedCString s_F2_Save_game_005c2264
;   TerminatedCString s_F3_Restore_game_005c2273
;   TerminatedCString s_F5_Toggle_mute_005c2285
;   TerminatedCString s_F6_Quick_save_005c2296
;   TerminatedCString s_F9_Quick_load_005c22a6
;   TerminatedCString s_ESC_Pause_game_005c22b6
;   TerminatedCString s_Forward_005c22c7
;   undefined4 DAT_005c22cf
;   undefined4 DAT_005c22d4
;   undefined4 DAT_005c22d9
;   TerminatedCString s_Strafe_on_005c22dd
;   TerminatedCString s_Strafe_left_005c22e7
;   ... and 31 more
;
; Called Functions:
;   core_menu.cpp_FUN_004eaa60
;   crt_unknown.c_FUN_005a28c0
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_FUN_004b0a20
;   engine_font.cpp_FUN_004b30c0
;   engine_font.cpp_FUN_004b30f0
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b51e0
        ;   Label: core_game.cpp_FUN_004b51e0
    PUSH ESI                            ; 004b51e1
    PUSH EDI                            ; 004b51e2
    PUSH EBP                            ; 004b51e3
    SUB ESP,0x1c00                      ; 004b51e4
    MOV EBX,dword ptr [0x005fba18]      ; 004b51ea | DAT_005fba18
    MOV ESI,dword ptr [ESP + 0x1c14]    ; 004b51f0
    PUSH 0xffff                         ; 004b51f7
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 004b51fc
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 004b5201
    PUSH 0x58                           ; 004b5204
    MOV EDX,dword ptr [0x01549aa8]      ; 004b5206 | DAT_01549aa8
    PUSH EDX                            ; 004b520c
    CALL engine_font.cpp_FUN_004b30f0   ; 004b520d
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004b5212
    PUSH 0x58                           ; 004b5215
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5217 | DAT_01549aa8
    PUSH ECX                            ; 004b521d
    MOV [0x01d22c5c],EAX                ; 004b521e | DAT_01d22c5c
    CALL engine_font.cpp_FUN_004b30c0   ; 004b5223
        ;   XREF to: 004b30c0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b30c0()
    ADD ESP,0x8                         ; 004b5228
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b522b | DAT_01d22c5c
    MOV [0x01d22c60],EAX                ; 004b5231 | DAT_01d22c60
    PUSH 0x5c2248                       ; 004b5236 | = "Quick help"
    SHL EDI,0x2                         ; 004b523b
    SHL EAX,0x2                         ; 004b523e
    MOV dword ptr [0x01d22c58],EDI      ; 004b5241 | DAT_01d22c58
    MOV [0x01d22c54],EAX                ; 004b5247 | DAT_01d22c54
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b524c
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5251
    PUSH -0x1                           ; 004b5254
    MOV EDI,EAX                         ; 004b5256
    MOV EAX,[0x01d22c58]                ; 004b5258 | DAT_01d22c58
    PUSH 0x0                            ; 004b525d
    ADD EAX,0x2                         ; 004b525f
    PUSH EAX                            ; 004b5262
    MOV EAX,[0x01d22c54]                ; 004b5263 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5268
    PUSH EAX                            ; 004b526b
    PUSH EDI                            ; 004b526c
    MOV EBP,dword ptr [0x01549aa8]      ; 004b526d | DAT_01549aa8
    PUSH EBP                            ; 004b5273
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5274
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5279
    PUSH -0x1                           ; 004b527c
    PUSH 0x7                            ; 004b527e
    MOV EAX,[0x01d22c58]                ; 004b5280 | DAT_01d22c58
    PUSH EAX                            ; 004b5285
    MOV EDX,dword ptr [0x01d22c54]      ; 004b5286 | DAT_01d22c54
    PUSH EDX                            ; 004b528c
    PUSH EDI                            ; 004b528d
    MOV ECX,dword ptr [0x01549aa8]      ; 004b528e | DAT_01549aa8
    PUSH ECX                            ; 004b5294
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5295
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b529a | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b529f | DAT_01d22c58
    SHL EAX,0x2                         ; 004b52a5
    MOV EDI,dword ptr [0x005fba1c]      ; 004b52a8 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b52ae | DAT_01d22c58
    SUB EDI,EAX                         ; 004b52b4
    ADD ESP,0x18                        ; 004b52b6
    CMP EDI,EBP                         ; 004b52b9
    JGE 0x004b52ed                      ; 004b52bb
        ;   XREF to: 004b52ed (CONDITIONAL_JUMP)  ; LAB_004b52ed
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b52bd | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b52c3 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b52c9
    MOV EDX,EBX                         ; 004b52d0
    SUB EAX,EDI                         ; 004b52d2
    SAR EDX,0x1f                        ; 004b52d4
    ADD EAX,EAX                         ; 004b52d7
    MOV EDI,0x3                         ; 004b52d9
    MOV [0x01d22c58],EAX                ; 004b52de | DAT_01d22c58
    MOV EAX,EBX                         ; 004b52e3
    IDIV EDI                            ; 004b52e5
    ADD dword ptr [0x01d22c54],EAX      ; 004b52e7 | DAT_01d22c54
    MOV EAX,[0x01d22c5c]                ; 004b52ed | DAT_01d22c5c
        ;   Label: LAB_004b52ed
    MOV ECX,dword ptr [0x01d22c58]      ; 004b52f2 | DAT_01d22c58
    ADD ECX,EAX                         ; 004b52f8
    PUSH 0x5c2253                       ; 004b52fa | = "F1 = Toggle help"
    MOV dword ptr [0x01d22c58],ECX      ; 004b52ff | DAT_01d22c58
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5305
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b530a
    PUSH -0x1                           ; 004b530d
    MOV EDI,EAX                         ; 004b530f
    MOV EAX,[0x01d22c58]                ; 004b5311 | DAT_01d22c58
    PUSH 0x0                            ; 004b5316
    ADD EAX,0x2                         ; 004b5318
    PUSH EAX                            ; 004b531b
    MOV EAX,[0x01d22c54]                ; 004b531c | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5321
    PUSH EAX                            ; 004b5324
    PUSH EDI                            ; 004b5325
    MOV EBP,dword ptr [0x01549aa8]      ; 004b5326 | DAT_01549aa8
    PUSH EBP                            ; 004b532c
    CALL engine_font.cpp_FUN_004b0a20   ; 004b532d
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5332
    PUSH -0x1                           ; 004b5335
    PUSH 0x7                            ; 004b5337
    MOV EAX,[0x01d22c58]                ; 004b5339 | DAT_01d22c58
    PUSH EAX                            ; 004b533e
    MOV EDX,dword ptr [0x01d22c54]      ; 004b533f | DAT_01d22c54
    PUSH EDX                            ; 004b5345
    PUSH EDI                            ; 004b5346
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5347 | DAT_01549aa8
    PUSH ECX                            ; 004b534d
    CALL engine_font.cpp_FUN_004b0a20   ; 004b534e
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5353 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b5358 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b535e
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5361 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b5367 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b536d
    ADD ESP,0x18                        ; 004b536f
    CMP EDI,EBP                         ; 004b5372
    JGE 0x004b53a6                      ; 004b5374
        ;   XREF to: 004b53a6 (CONDITIONAL_JUMP)  ; LAB_004b53a6
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5376 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b537c | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5382
    MOV EDX,EBX                         ; 004b5389
    SUB EAX,EDI                         ; 004b538b
    SAR EDX,0x1f                        ; 004b538d
    ADD EAX,EAX                         ; 004b5390
    MOV EDI,0x3                         ; 004b5392
    MOV [0x01d22c58],EAX                ; 004b5397 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b539c
    IDIV EDI                            ; 004b539e
    ADD dword ptr [0x01d22c54],EAX      ; 004b53a0 | DAT_01d22c54
    PUSH 0x5c2264                       ; 004b53a6 | = "F2 = Save game"
        ;   Label: LAB_004b53a6
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b53ab
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b53b0
    PUSH -0x1                           ; 004b53b3
    MOV EDI,EAX                         ; 004b53b5
    MOV EAX,[0x01d22c58]                ; 004b53b7 | DAT_01d22c58
    PUSH 0x0                            ; 004b53bc
    ADD EAX,0x2                         ; 004b53be
    PUSH EAX                            ; 004b53c1
    MOV EAX,[0x01d22c54]                ; 004b53c2 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b53c7
    PUSH EAX                            ; 004b53ca
    PUSH EDI                            ; 004b53cb
    MOV ECX,dword ptr [0x01549aa8]      ; 004b53cc | DAT_01549aa8
    PUSH ECX                            ; 004b53d2
    CALL engine_font.cpp_FUN_004b0a20   ; 004b53d3
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b53d8
    PUSH -0x1                           ; 004b53db
    PUSH 0x7                            ; 004b53dd
    MOV EBP,dword ptr [0x01d22c58]      ; 004b53df | DAT_01d22c58
    PUSH EBP                            ; 004b53e5
    MOV EAX,[0x01d22c54]                ; 004b53e6 | DAT_01d22c54
    PUSH EAX                            ; 004b53eb
    PUSH EDI                            ; 004b53ec
    MOV EDX,dword ptr [0x01549aa8]      ; 004b53ed | DAT_01549aa8
    PUSH EDX                            ; 004b53f3
    CALL engine_font.cpp_FUN_004b0a20   ; 004b53f4
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b53f9 | DAT_01d22c5c
    MOV ECX,dword ptr [0x01d22c58]      ; 004b53fe | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5404 | DAT_005fba1c
    ADD ECX,EAX                         ; 004b540a
    SHL EAX,0x2                         ; 004b540c
    ADD ESP,0x18                        ; 004b540f
    SUB EDI,EAX                         ; 004b5412
    MOV dword ptr [0x01d22c58],ECX      ; 004b5414 | DAT_01d22c58
    CMP EDI,ECX                         ; 004b541a
    JGE 0x004b544e                      ; 004b541c
        ;   XREF to: 004b544e (CONDITIONAL_JUMP)  ; LAB_004b544e
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b541e | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5424 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b542a
    MOV EDX,EBX                         ; 004b5431
    SUB EAX,EDI                         ; 004b5433
    SAR EDX,0x1f                        ; 004b5435
    ADD EAX,EAX                         ; 004b5438
    MOV EDI,0x3                         ; 004b543a
    MOV [0x01d22c58],EAX                ; 004b543f | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5444
    IDIV EDI                            ; 004b5446
    ADD dword ptr [0x01d22c54],EAX      ; 004b5448 | DAT_01d22c54
    PUSH 0x5c2273                       ; 004b544e | = "F3 = Restore game"
        ;   Label: LAB_004b544e
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5453
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5458
    PUSH -0x1                           ; 004b545b
    MOV EDI,EAX                         ; 004b545d
    MOV EAX,[0x01d22c58]                ; 004b545f | DAT_01d22c58
    PUSH 0x0                            ; 004b5464
    ADD EAX,0x2                         ; 004b5466
    PUSH EAX                            ; 004b5469
    MOV EAX,[0x01d22c54]                ; 004b546a | DAT_01d22c54
    ADD EAX,0x2                         ; 004b546f
    PUSH EAX                            ; 004b5472
    PUSH EDI                            ; 004b5473
    MOV EAX,[0x01549aa8]                ; 004b5474 | DAT_01549aa8
    PUSH EAX                            ; 004b5479
    CALL engine_font.cpp_FUN_004b0a20   ; 004b547a
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b547f
    PUSH -0x1                           ; 004b5482
    PUSH 0x7                            ; 004b5484
    MOV EDX,dword ptr [0x01d22c58]      ; 004b5486 | DAT_01d22c58
    PUSH EDX                            ; 004b548c
    MOV ECX,dword ptr [0x01d22c54]      ; 004b548d | DAT_01d22c54
    PUSH ECX                            ; 004b5493
    PUSH EDI                            ; 004b5494
    MOV EDI,dword ptr [0x01549aa8]      ; 004b5495 | DAT_01549aa8
    PUSH EDI                            ; 004b549b
    CALL engine_font.cpp_FUN_004b0a20   ; 004b549c
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b54a1 | DAT_01d22c5c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b54a6 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b54ac | DAT_005fba1c
    ADD EBP,EAX                         ; 004b54b2
    SHL EAX,0x2                         ; 004b54b4
    ADD ESP,0x18                        ; 004b54b7
    SUB EDI,EAX                         ; 004b54ba
    MOV dword ptr [0x01d22c58],EBP      ; 004b54bc | DAT_01d22c58
    CMP EDI,EBP                         ; 004b54c2
    JGE 0x004b54f6                      ; 004b54c4
        ;   XREF to: 004b54f6 (CONDITIONAL_JUMP)  ; LAB_004b54f6
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b54c6 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b54cc | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b54d2
    MOV EDX,EBX                         ; 004b54d9
    SUB EAX,EDI                         ; 004b54db
    SAR EDX,0x1f                        ; 004b54dd
    ADD EAX,EAX                         ; 004b54e0
    MOV EDI,0x3                         ; 004b54e2
    MOV [0x01d22c58],EAX                ; 004b54e7 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b54ec
    IDIV EDI                            ; 004b54ee
    ADD dword ptr [0x01d22c54],EAX      ; 004b54f0 | DAT_01d22c54
    PUSH 0x5c2285                       ; 004b54f6 | = "F5 = Toggle mute"
        ;   Label: LAB_004b54f6
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b54fb
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5500
    PUSH -0x1                           ; 004b5503
    MOV EDI,EAX                         ; 004b5505
    MOV EAX,[0x01d22c58]                ; 004b5507 | DAT_01d22c58
    PUSH 0x0                            ; 004b550c
    ADD EAX,0x2                         ; 004b550e
    PUSH EAX                            ; 004b5511
    MOV EAX,[0x01d22c54]                ; 004b5512 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5517
    PUSH EAX                            ; 004b551a
    PUSH EDI                            ; 004b551b
    MOV EBP,dword ptr [0x01549aa8]      ; 004b551c | DAT_01549aa8
    PUSH EBP                            ; 004b5522
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5523
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5528
    PUSH -0x1                           ; 004b552b
    PUSH 0x7                            ; 004b552d
    MOV EAX,[0x01d22c58]                ; 004b552f | DAT_01d22c58
    PUSH EAX                            ; 004b5534
    MOV EDX,dword ptr [0x01d22c54]      ; 004b5535 | DAT_01d22c54
    PUSH EDX                            ; 004b553b
    PUSH EDI                            ; 004b553c
    MOV ECX,dword ptr [0x01549aa8]      ; 004b553d | DAT_01549aa8
    PUSH ECX                            ; 004b5543
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5544
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5549 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b554e | DAT_01d22c58
    SHL EAX,0x2                         ; 004b5554
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5557 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b555d | DAT_01d22c58
    SUB EDI,EAX                         ; 004b5563
    ADD ESP,0x18                        ; 004b5565
    CMP EDI,EBP                         ; 004b5568
    JGE 0x004b559c                      ; 004b556a
        ;   XREF to: 004b559c (CONDITIONAL_JUMP)  ; LAB_004b559c
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b556c | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5572 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5578
    MOV EDX,EBX                         ; 004b557f
    SUB EAX,EDI                         ; 004b5581
    SAR EDX,0x1f                        ; 004b5583
    ADD EAX,EAX                         ; 004b5586
    MOV EDI,0x3                         ; 004b5588
    MOV [0x01d22c58],EAX                ; 004b558d | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5592
    IDIV EDI                            ; 004b5594
    ADD dword ptr [0x01d22c54],EAX      ; 004b5596 | DAT_01d22c54
    PUSH 0x5c2296                       ; 004b559c | = "F6 = Quick save"
        ;   Label: LAB_004b559c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b55a1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b55a6
    PUSH -0x1                           ; 004b55a9
    MOV EDI,EAX                         ; 004b55ab
    MOV EAX,[0x01d22c58]                ; 004b55ad | DAT_01d22c58
    PUSH 0x0                            ; 004b55b2
    ADD EAX,0x2                         ; 004b55b4
    PUSH EAX                            ; 004b55b7
    MOV EAX,[0x01d22c54]                ; 004b55b8 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b55bd
    PUSH EAX                            ; 004b55c0
    PUSH EDI                            ; 004b55c1
    MOV ECX,dword ptr [0x01549aa8]      ; 004b55c2 | DAT_01549aa8
    PUSH ECX                            ; 004b55c8
    CALL engine_font.cpp_FUN_004b0a20   ; 004b55c9
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b55ce
    PUSH -0x1                           ; 004b55d1
    PUSH 0x7                            ; 004b55d3
    MOV EBP,dword ptr [0x01d22c58]      ; 004b55d5 | DAT_01d22c58
    PUSH EBP                            ; 004b55db
    MOV EAX,[0x01d22c54]                ; 004b55dc | DAT_01d22c54
    PUSH EAX                            ; 004b55e1
    PUSH EDI                            ; 004b55e2
    MOV EDX,dword ptr [0x01549aa8]      ; 004b55e3 | DAT_01549aa8
    PUSH EDX                            ; 004b55e9
    CALL engine_font.cpp_FUN_004b0a20   ; 004b55ea
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b55ef | DAT_01d22c5c
    MOV ECX,dword ptr [0x01d22c58]      ; 004b55f4 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b55fa | DAT_005fba1c
    ADD ECX,EAX                         ; 004b5600
    SHL EAX,0x2                         ; 004b5602
    ADD ESP,0x18                        ; 004b5605
    SUB EDI,EAX                         ; 004b5608
    MOV dword ptr [0x01d22c58],ECX      ; 004b560a | DAT_01d22c58
    CMP EDI,ECX                         ; 004b5610
    JGE 0x004b5644                      ; 004b5612
        ;   XREF to: 004b5644 (CONDITIONAL_JUMP)  ; LAB_004b5644
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5614 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b561a | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5620
    MOV EDX,EBX                         ; 004b5627
    SUB EAX,EDI                         ; 004b5629
    SAR EDX,0x1f                        ; 004b562b
    ADD EAX,EAX                         ; 004b562e
    MOV EDI,0x3                         ; 004b5630
    MOV [0x01d22c58],EAX                ; 004b5635 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b563a
    IDIV EDI                            ; 004b563c
    ADD dword ptr [0x01d22c54],EAX      ; 004b563e | DAT_01d22c54
    PUSH 0x5c22a6                       ; 004b5644 | = "F9 = Quick load"
        ;   Label: LAB_004b5644
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5649
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b564e
    PUSH -0x1                           ; 004b5651
    MOV EDI,EAX                         ; 004b5653
    MOV EAX,[0x01d22c58]                ; 004b5655 | DAT_01d22c58
    PUSH 0x0                            ; 004b565a
    ADD EAX,0x2                         ; 004b565c
    PUSH EAX                            ; 004b565f
    MOV EAX,[0x01d22c54]                ; 004b5660 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5665
    PUSH EAX                            ; 004b5668
    PUSH EDI                            ; 004b5669
    MOV EAX,[0x01549aa8]                ; 004b566a | DAT_01549aa8
    PUSH EAX                            ; 004b566f
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5670
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5675
    PUSH -0x1                           ; 004b5678
    PUSH 0x7                            ; 004b567a
    MOV EDX,dword ptr [0x01d22c58]      ; 004b567c | DAT_01d22c58
    PUSH EDX                            ; 004b5682
    MOV ECX,dword ptr [0x01d22c54]      ; 004b5683 | DAT_01d22c54
    PUSH ECX                            ; 004b5689
    PUSH EDI                            ; 004b568a
    MOV EDI,dword ptr [0x01549aa8]      ; 004b568b | DAT_01549aa8
    PUSH EDI                            ; 004b5691
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5692
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5697 | DAT_01d22c5c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b569c | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b56a2 | DAT_005fba1c
    ADD EBP,EAX                         ; 004b56a8
    SHL EAX,0x2                         ; 004b56aa
    ADD ESP,0x18                        ; 004b56ad
    SUB EDI,EAX                         ; 004b56b0
    MOV dword ptr [0x01d22c58],EBP      ; 004b56b2 | DAT_01d22c58
    CMP EDI,EBP                         ; 004b56b8
    JGE 0x004b56ec                      ; 004b56ba
        ;   XREF to: 004b56ec (CONDITIONAL_JUMP)  ; LAB_004b56ec
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b56bc | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b56c2 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b56c8
    MOV EDX,EBX                         ; 004b56cf
    SUB EAX,EDI                         ; 004b56d1
    SAR EDX,0x1f                        ; 004b56d3
    ADD EAX,EAX                         ; 004b56d6
    MOV EDI,0x3                         ; 004b56d8
    MOV [0x01d22c58],EAX                ; 004b56dd | DAT_01d22c58
    MOV EAX,EBX                         ; 004b56e2
    IDIV EDI                            ; 004b56e4
    ADD dword ptr [0x01d22c54],EAX      ; 004b56e6 | DAT_01d22c54
    PUSH 0x5c22b6                       ; 004b56ec | = "ESC = Pause game"
        ;   Label: LAB_004b56ec
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b56f1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b56f6
    PUSH -0x1                           ; 004b56f9
    MOV EDI,EAX                         ; 004b56fb
    MOV EAX,[0x01d22c58]                ; 004b56fd | DAT_01d22c58
    PUSH 0x0                            ; 004b5702
    ADD EAX,0x2                         ; 004b5704
    PUSH EAX                            ; 004b5707
    MOV EAX,[0x01d22c54]                ; 004b5708 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b570d
    PUSH EAX                            ; 004b5710
    PUSH EDI                            ; 004b5711
    MOV EBP,dword ptr [0x01549aa8]      ; 004b5712 | DAT_01549aa8
    PUSH EBP                            ; 004b5718
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5719
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b571e
    PUSH -0x1                           ; 004b5721
    PUSH 0x7                            ; 004b5723
    MOV EAX,[0x01d22c58]                ; 004b5725 | DAT_01d22c58
    PUSH EAX                            ; 004b572a
    MOV EDX,dword ptr [0x01d22c54]      ; 004b572b | DAT_01d22c54
    PUSH EDX                            ; 004b5731
    PUSH EDI                            ; 004b5732
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5733 | DAT_01549aa8
    PUSH ECX                            ; 004b5739
    CALL engine_font.cpp_FUN_004b0a20   ; 004b573a
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b573f | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b5744 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b574a
    MOV EDI,dword ptr [0x005fba1c]      ; 004b574d | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b5753 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b5759
    ADD ESP,0x18                        ; 004b575b
    CMP EDI,EBP                         ; 004b575e
    JGE 0x004b5792                      ; 004b5760
        ;   XREF to: 004b5792 (CONDITIONAL_JUMP)  ; LAB_004b5792
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5762 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5768 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b576e
    MOV EDX,EBX                         ; 004b5775
    SUB EAX,EDI                         ; 004b5777
    SAR EDX,0x1f                        ; 004b5779
    ADD EAX,EAX                         ; 004b577c
    MOV EDI,0x3                         ; 004b577e
    MOV [0x01d22c58],EAX                ; 004b5783 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5788
    IDIV EDI                            ; 004b578a
    ADD dword ptr [0x01d22c54],EAX      ; 004b578c | DAT_01d22c54
    MOV EAX,[0x01d22c5c]                ; 004b5792 | DAT_01d22c5c
        ;   Label: LAB_004b5792
    MOV ECX,dword ptr [0x01d22c58]      ; 004b5797 | DAT_01d22c58
    ADD ECX,EAX                         ; 004b579d
    PUSH 0x5c22c7                       ; 004b579f | = "Forward"
    MOV dword ptr [0x01d22c58],ECX      ; 004b57a4 | DAT_01d22c58
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b57aa
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b57af
    PUSH EAX                            ; 004b57b2
    MOV EDI,dword ptr [ESI + 0x28]      ; 004b57b3
    PUSH EDI                            ; 004b57b6
    CALL core_menu.cpp_FUN_004eaa60     ; 004b57b7
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b57bc
    PUSH EAX                            ; 004b57bf
    PUSH 0x5c2240                       ; 004b57c0 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0xa0c]               ; 004b57c5
    PUSH EAX                            ; 004b57cc
    CALL crt_unknown.c_FUN_005a28c0     ; 004b57cd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b57d2
    PUSH -0x1                           ; 004b57d5
    MOV EAX,[0x01d22c58]                ; 004b57d7 | DAT_01d22c58
    PUSH 0x0                            ; 004b57dc
    ADD EAX,0x2                         ; 004b57de
    PUSH EAX                            ; 004b57e1
    MOV EAX,[0x01d22c54]                ; 004b57e2 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b57e7
    PUSH EAX                            ; 004b57ea
    LEA EAX,[ESP + 0xa10]               ; 004b57eb
    PUSH EAX                            ; 004b57f2
    MOV EDI,dword ptr [0x01549aa8]      ; 004b57f3 | DAT_01549aa8
    PUSH EDI                            ; 004b57f9
    CALL engine_font.cpp_FUN_004b0a20   ; 004b57fa
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b57ff
    PUSH -0x1                           ; 004b5802
    PUSH 0x7                            ; 004b5804
    MOV EBP,dword ptr [0x01d22c58]      ; 004b5806 | DAT_01d22c58
    PUSH EBP                            ; 004b580c
    MOV EAX,[0x01d22c54]                ; 004b580d | DAT_01d22c54
    PUSH EAX                            ; 004b5812
    LEA EAX,[ESP + 0xa10]               ; 004b5813
    PUSH EAX                            ; 004b581a
    MOV EDX,dword ptr [0x01549aa8]      ; 004b581b | DAT_01549aa8
    PUSH EDX                            ; 004b5821
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5822
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5827 | DAT_01d22c5c
    MOV ECX,dword ptr [0x01d22c58]      ; 004b582c | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5832 | DAT_005fba1c
    ADD ECX,EAX                         ; 004b5838
    SHL EAX,0x2                         ; 004b583a
    ADD ESP,0x18                        ; 004b583d
    SUB EDI,EAX                         ; 004b5840
    MOV dword ptr [0x01d22c58],ECX      ; 004b5842 | DAT_01d22c58
    CMP EDI,ECX                         ; 004b5848
    JGE 0x004b587c                      ; 004b584a
        ;   XREF to: 004b587c (CONDITIONAL_JUMP)  ; LAB_004b587c
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b584c | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5852 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5858
    MOV EDX,EBX                         ; 004b585f
    SUB EAX,EDI                         ; 004b5861
    SAR EDX,0x1f                        ; 004b5863
    ADD EAX,EAX                         ; 004b5866
    MOV EDI,0x3                         ; 004b5868
    MOV [0x01d22c58],EAX                ; 004b586d | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5872
    IDIV EDI                            ; 004b5874
    ADD dword ptr [0x01d22c54],EAX      ; 004b5876 | DAT_01d22c54
    PUSH 0x5c22cf                       ; 004b587c | DAT_005c22cf
        ;   Label: LAB_004b587c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5881
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5886
    PUSH EAX                            ; 004b5889
    MOV EDI,dword ptr [ESI + 0x2c]      ; 004b588a
    PUSH EDI                            ; 004b588d
    CALL core_menu.cpp_FUN_004eaa60     ; 004b588e
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b5893
    PUSH EAX                            ; 004b5896
    PUSH 0x5c2240                       ; 004b5897 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x130c]              ; 004b589c
    PUSH EAX                            ; 004b58a3
    CALL crt_unknown.c_FUN_005a28c0     ; 004b58a4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b58a9
    PUSH -0x1                           ; 004b58ac
    MOV EAX,[0x01d22c58]                ; 004b58ae | DAT_01d22c58
    PUSH 0x0                            ; 004b58b3
    ADD EAX,0x2                         ; 004b58b5
    PUSH EAX                            ; 004b58b8
    MOV EAX,[0x01d22c54]                ; 004b58b9 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b58be
    PUSH EAX                            ; 004b58c1
    LEA EAX,[ESP + 0x1310]              ; 004b58c2
    PUSH EAX                            ; 004b58c9
    MOV EAX,[0x01549aa8]                ; 004b58ca | DAT_01549aa8
    PUSH EAX                            ; 004b58cf
    CALL engine_font.cpp_FUN_004b0a20   ; 004b58d0
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b58d5
    PUSH -0x1                           ; 004b58d8
    PUSH 0x7                            ; 004b58da
    MOV EDX,dword ptr [0x01d22c58]      ; 004b58dc | DAT_01d22c58
    PUSH EDX                            ; 004b58e2
    MOV ECX,dword ptr [0x01d22c54]      ; 004b58e3 | DAT_01d22c54
    PUSH ECX                            ; 004b58e9
    LEA EAX,[ESP + 0x1310]              ; 004b58ea
    PUSH EAX                            ; 004b58f1
    MOV EDI,dword ptr [0x01549aa8]      ; 004b58f2 | DAT_01549aa8
    PUSH EDI                            ; 004b58f8
    CALL engine_font.cpp_FUN_004b0a20   ; 004b58f9
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b58fe | DAT_01d22c5c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b5903 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5909 | DAT_005fba1c
    ADD EBP,EAX                         ; 004b590f
    SHL EAX,0x2                         ; 004b5911
    ADD ESP,0x18                        ; 004b5914
    SUB EDI,EAX                         ; 004b5917
    MOV dword ptr [0x01d22c58],EBP      ; 004b5919 | DAT_01d22c58
    CMP EDI,EBP                         ; 004b591f
    JGE 0x004b5953                      ; 004b5921
        ;   XREF to: 004b5953 (CONDITIONAL_JUMP)  ; LAB_004b5953
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5923 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5929 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b592f
    MOV EDX,EBX                         ; 004b5936
    SUB EAX,EDI                         ; 004b5938
    SAR EDX,0x1f                        ; 004b593a
    ADD EAX,EAX                         ; 004b593d
    MOV EDI,0x3                         ; 004b593f
    MOV [0x01d22c58],EAX                ; 004b5944 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5949
    IDIV EDI                            ; 004b594b
    ADD dword ptr [0x01d22c54],EAX      ; 004b594d | DAT_01d22c54
    MOV EAX,[0x005fe9dc]                ; 004b5953 | g_CGamePtr
        ;   Label: LAB_004b5953
    CMP dword ptr [EAX + 0xb0],0x0      ; 004b5958 | g_CGameInstance.field176_0xb0
    JZ 0x004b6e44                       ; 004b595f
        ;   XREF to: 004b6e44 (CONDITIONAL_JUMP)  ; LAB_004b6e44
    PUSH 0x5c22d4                       ; 004b5965 | DAT_005c22d4
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b596a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b596f
    PUSH EAX                            ; 004b5972
    MOV EDI,dword ptr [ESI + 0x30]      ; 004b5973
    PUSH EDI                            ; 004b5976
    CALL core_menu.cpp_FUN_004eaa60     ; 004b5977
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b597c
    PUSH EAX                            ; 004b597f
    PUSH 0x5c2240                       ; 004b5980 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x80c]               ; 004b5985
    PUSH EAX                            ; 004b598c
    CALL crt_unknown.c_FUN_005a28c0     ; 004b598d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b5992
    PUSH -0x1                           ; 004b5995
    MOV EAX,[0x01d22c58]                ; 004b5997 | DAT_01d22c58
    PUSH 0x0                            ; 004b599c
    ADD EAX,0x2                         ; 004b599e
    PUSH EAX                            ; 004b59a1
    MOV EAX,[0x01d22c54]                ; 004b59a2 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b59a7
    PUSH EAX                            ; 004b59aa
    LEA EAX,[ESP + 0x810]               ; 004b59ab
    PUSH EAX                            ; 004b59b2
    MOV ECX,dword ptr [0x01549aa8]      ; 004b59b3 | DAT_01549aa8
    PUSH ECX                            ; 004b59b9
    CALL engine_font.cpp_FUN_004b0a20   ; 004b59ba
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b59bf
    PUSH -0x1                           ; 004b59c2
    PUSH 0x7                            ; 004b59c4
    MOV EDI,dword ptr [0x01d22c58]      ; 004b59c6 | DAT_01d22c58
    PUSH EDI                            ; 004b59cc
    MOV EBP,dword ptr [0x01d22c54]      ; 004b59cd | DAT_01d22c54
    PUSH EBP                            ; 004b59d3
    LEA EAX,[ESP + 0x810]               ; 004b59d4
    PUSH EAX                            ; 004b59db
    MOV EAX,[0x01549aa8]                ; 004b59dc | DAT_01549aa8
    PUSH EAX                            ; 004b59e1
    CALL engine_font.cpp_FUN_004b0a20   ; 004b59e2
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b59e7 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b59ec | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b59f2 | DAT_005fba1c
    ADD EDX,EAX                         ; 004b59f8
    SHL EAX,0x2                         ; 004b59fa
    ADD ESP,0x18                        ; 004b59fd
    SUB EDI,EAX                         ; 004b5a00
    MOV dword ptr [0x01d22c58],EDX      ; 004b5a02 | DAT_01d22c58
    CMP EDI,EDX                         ; 004b5a08
    JGE 0x004b5a3c                      ; 004b5a0a
        ;   XREF to: 004b5a3c (CONDITIONAL_JUMP)  ; LAB_004b5a3c
        ;   Label: LAB_004b5a0a
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5a0c | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5a12 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5a18
    MOV EDX,EBX                         ; 004b5a1f
    SUB EAX,EDI                         ; 004b5a21
    SAR EDX,0x1f                        ; 004b5a23
    ADD EAX,EAX                         ; 004b5a26
    MOV EDI,0x3                         ; 004b5a28
    MOV [0x01d22c58],EAX                ; 004b5a2d | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5a32
    IDIV EDI                            ; 004b5a34
    ADD dword ptr [0x01d22c54],EAX      ; 004b5a36 | DAT_01d22c54
    PUSH 0x5c22dd                       ; 004b5a3c | = "Strafe on"
        ;   Label: LAB_004b5a3c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5a41
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5a46
    PUSH EAX                            ; 004b5a49
    MOV EDI,dword ptr [ESI + 0x34]      ; 004b5a4a
    PUSH EDI                            ; 004b5a4d
    CALL core_menu.cpp_FUN_004eaa60     ; 004b5a4e
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b5a53
    PUSH EAX                            ; 004b5a56
    PUSH 0x5c2240                       ; 004b5a57 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x50c]               ; 004b5a5c
    PUSH EAX                            ; 004b5a63
    CALL crt_unknown.c_FUN_005a28c0     ; 004b5a64
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b5a69
    PUSH -0x1                           ; 004b5a6c
    MOV EAX,[0x01d22c58]                ; 004b5a6e | DAT_01d22c58
    PUSH 0x0                            ; 004b5a73
    ADD EAX,0x2                         ; 004b5a75
    PUSH EAX                            ; 004b5a78
    MOV EAX,[0x01d22c54]                ; 004b5a79 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5a7e
    PUSH EAX                            ; 004b5a81
    LEA EAX,[ESP + 0x510]               ; 004b5a82
    PUSH EAX                            ; 004b5a89
    MOV EBP,dword ptr [0x01549aa8]      ; 004b5a8a | DAT_01549aa8
    PUSH EBP                            ; 004b5a90
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5a91
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5a96
    PUSH -0x1                           ; 004b5a99
    PUSH 0x7                            ; 004b5a9b
    MOV EAX,[0x01d22c58]                ; 004b5a9d | DAT_01d22c58
    PUSH EAX                            ; 004b5aa2
    MOV EDX,dword ptr [0x01d22c54]      ; 004b5aa3 | DAT_01d22c54
    PUSH EDX                            ; 004b5aa9
    LEA EAX,[ESP + 0x510]               ; 004b5aaa
    PUSH EAX                            ; 004b5ab1
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5ab2 | DAT_01549aa8
    PUSH ECX                            ; 004b5ab8
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5ab9
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5abe | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b5ac3 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b5ac9
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5acc | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b5ad2 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b5ad8
    ADD ESP,0x18                        ; 004b5ada
    CMP EDI,EBP                         ; 004b5add
    JGE 0x004b5b11                      ; 004b5adf
        ;   XREF to: 004b5b11 (CONDITIONAL_JUMP)  ; LAB_004b5b11
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5ae1 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5ae7 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5aed
    MOV EDX,EBX                         ; 004b5af4
    SUB EAX,EDI                         ; 004b5af6
    SAR EDX,0x1f                        ; 004b5af8
    ADD EAX,EAX                         ; 004b5afb
    MOV EDI,0x3                         ; 004b5afd
    MOV [0x01d22c58],EAX                ; 004b5b02 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5b07
    IDIV EDI                            ; 004b5b09
    ADD dword ptr [0x01d22c54],EAX      ; 004b5b0b | DAT_01d22c54
    PUSH 0x5c22e7                       ; 004b5b11 | = "Strafe left"
        ;   Label: LAB_004b5b11
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5b16
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5b1b
    PUSH EAX                            ; 004b5b1e
    MOV EDI,dword ptr [ESI + 0x38]      ; 004b5b1f
    PUSH EDI                            ; 004b5b22
    CALL core_menu.cpp_FUN_004eaa60     ; 004b5b23
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b5b28
    PUSH EAX                            ; 004b5b2b
    PUSH 0x5c2240                       ; 004b5b2c | s_s_s_005c223f+1
    LEA EAX,[ESP + 0xe0c]               ; 004b5b31
    PUSH EAX                            ; 004b5b38
    CALL crt_unknown.c_FUN_005a28c0     ; 004b5b39
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b5b3e
    PUSH -0x1                           ; 004b5b41
    MOV EAX,[0x01d22c58]                ; 004b5b43 | DAT_01d22c58
    PUSH 0x0                            ; 004b5b48
    ADD EAX,0x2                         ; 004b5b4a
    PUSH EAX                            ; 004b5b4d
    MOV EAX,[0x01d22c54]                ; 004b5b4e | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5b53
    PUSH EAX                            ; 004b5b56
    LEA EAX,[ESP + 0xe10]               ; 004b5b57
    PUSH EAX                            ; 004b5b5e
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5b5f | DAT_01549aa8
    PUSH ECX                            ; 004b5b65
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5b66
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5b6b
    PUSH -0x1                           ; 004b5b6e
    PUSH 0x7                            ; 004b5b70
    MOV EDI,dword ptr [0x01d22c58]      ; 004b5b72 | DAT_01d22c58
    PUSH EDI                            ; 004b5b78
    MOV EBP,dword ptr [0x01d22c54]      ; 004b5b79 | DAT_01d22c54
    PUSH EBP                            ; 004b5b7f
    LEA EAX,[ESP + 0xe10]               ; 004b5b80
    PUSH EAX                            ; 004b5b87
    MOV EAX,[0x01549aa8]                ; 004b5b88 | DAT_01549aa8
    PUSH EAX                            ; 004b5b8d
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5b8e
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5b93 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b5b98 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5b9e | DAT_005fba1c
    ADD EDX,EAX                         ; 004b5ba4
    SHL EAX,0x2                         ; 004b5ba6
    ADD ESP,0x18                        ; 004b5ba9
    SUB EDI,EAX                         ; 004b5bac
    MOV dword ptr [0x01d22c58],EDX      ; 004b5bae | DAT_01d22c58
    CMP EDI,EDX                         ; 004b5bb4
    JGE 0x004b5be8                      ; 004b5bb6
        ;   XREF to: 004b5be8 (CONDITIONAL_JUMP)  ; LAB_004b5be8
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5bb8 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5bbe | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5bc4
    MOV EDX,EBX                         ; 004b5bcb
    SUB EAX,EDI                         ; 004b5bcd
    SAR EDX,0x1f                        ; 004b5bcf
    ADD EAX,EAX                         ; 004b5bd2
    MOV EDI,0x3                         ; 004b5bd4
    MOV [0x01d22c58],EAX                ; 004b5bd9 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5bde
    IDIV EDI                            ; 004b5be0
    ADD dword ptr [0x01d22c54],EAX      ; 004b5be2 | DAT_01d22c54
    PUSH 0x5c22f3                       ; 004b5be8 | = "Strafe right"
        ;   Label: LAB_004b5be8
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5bed
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5bf2
    PUSH EAX                            ; 004b5bf5
    MOV EDI,dword ptr [ESI + 0x3c]      ; 004b5bf6
    PUSH EDI                            ; 004b5bf9
    CALL core_menu.cpp_FUN_004eaa60     ; 004b5bfa
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b5bff
    PUSH EAX                            ; 004b5c02
    PUSH 0x5c2240                       ; 004b5c03 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0xc0c]               ; 004b5c08
    PUSH EAX                            ; 004b5c0f
    CALL crt_unknown.c_FUN_005a28c0     ; 004b5c10
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b5c15
    PUSH -0x1                           ; 004b5c18
    MOV EAX,[0x01d22c58]                ; 004b5c1a | DAT_01d22c58
    PUSH 0x0                            ; 004b5c1f
    ADD EAX,0x2                         ; 004b5c21
    PUSH EAX                            ; 004b5c24
    MOV EAX,[0x01d22c54]                ; 004b5c25 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5c2a
    PUSH EAX                            ; 004b5c2d
    LEA EAX,[ESP + 0xc10]               ; 004b5c2e
    PUSH EAX                            ; 004b5c35
    MOV EBP,dword ptr [0x01549aa8]      ; 004b5c36 | DAT_01549aa8
    PUSH EBP                            ; 004b5c3c
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5c3d
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5c42
    PUSH -0x1                           ; 004b5c45
    PUSH 0x7                            ; 004b5c47
    MOV EAX,[0x01d22c58]                ; 004b5c49 | DAT_01d22c58
    PUSH EAX                            ; 004b5c4e
    MOV EDX,dword ptr [0x01d22c54]      ; 004b5c4f | DAT_01d22c54
    PUSH EDX                            ; 004b5c55
    LEA EAX,[ESP + 0xc10]               ; 004b5c56
    PUSH EAX                            ; 004b5c5d
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5c5e | DAT_01549aa8
    PUSH ECX                            ; 004b5c64
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5c65
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5c6a | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b5c6f | DAT_01d22c58
    SHL EAX,0x2                         ; 004b5c75
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5c78 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b5c7e | DAT_01d22c58
    SUB EDI,EAX                         ; 004b5c84
    ADD ESP,0x18                        ; 004b5c86
    CMP EDI,EBP                         ; 004b5c89
    JGE 0x004b5cbd                      ; 004b5c8b
        ;   XREF to: 004b5cbd (CONDITIONAL_JUMP)  ; LAB_004b5cbd
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5c8d | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5c93 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5c99
    MOV EDX,EBX                         ; 004b5ca0
    SUB EAX,EDI                         ; 004b5ca2
    SAR EDX,0x1f                        ; 004b5ca4
    ADD EAX,EAX                         ; 004b5ca7
    MOV EDI,0x3                         ; 004b5ca9
    MOV [0x01d22c58],EAX                ; 004b5cae | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5cb3
    IDIV EDI                            ; 004b5cb5
    ADD dword ptr [0x01d22c54],EAX      ; 004b5cb7 | DAT_01d22c54
    PUSH 0x5c2300                       ; 004b5cbd | = "Turn left"
        ;   Label: LAB_004b5cbd
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5cc2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5cc7
    PUSH EAX                            ; 004b5cca
    MOV EDI,dword ptr [ESI + 0x44]      ; 004b5ccb
    PUSH EDI                            ; 004b5cce
    CALL core_menu.cpp_FUN_004eaa60     ; 004b5ccf
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b5cd4
    PUSH EAX                            ; 004b5cd7
    PUSH 0x5c2240                       ; 004b5cd8 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x180c]              ; 004b5cdd
    PUSH EAX                            ; 004b5ce4
    CALL crt_unknown.c_FUN_005a28c0     ; 004b5ce5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b5cea
    PUSH -0x1                           ; 004b5ced
    MOV EAX,[0x01d22c58]                ; 004b5cef | DAT_01d22c58
    PUSH 0x0                            ; 004b5cf4
    ADD EAX,0x2                         ; 004b5cf6
    PUSH EAX                            ; 004b5cf9
    MOV EAX,[0x01d22c54]                ; 004b5cfa | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5cff
    PUSH EAX                            ; 004b5d02
    LEA EAX,[ESP + 0x1810]              ; 004b5d03
    PUSH EAX                            ; 004b5d0a
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5d0b | DAT_01549aa8
    PUSH ECX                            ; 004b5d11
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5d12
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5d17
    PUSH -0x1                           ; 004b5d1a
    PUSH 0x7                            ; 004b5d1c
    MOV EDI,dword ptr [0x01d22c58]      ; 004b5d1e | DAT_01d22c58
    PUSH EDI                            ; 004b5d24
    MOV EBP,dword ptr [0x01d22c54]      ; 004b5d25 | DAT_01d22c54
    PUSH EBP                            ; 004b5d2b
    LEA EAX,[ESP + 0x1810]              ; 004b5d2c
    PUSH EAX                            ; 004b5d33
    MOV EAX,[0x01549aa8]                ; 004b5d34 | DAT_01549aa8
    PUSH EAX                            ; 004b5d39
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5d3a
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5d3f | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b5d44 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5d4a | DAT_005fba1c
    ADD EDX,EAX                         ; 004b5d50
    SHL EAX,0x2                         ; 004b5d52
    ADD ESP,0x18                        ; 004b5d55
    SUB EDI,EAX                         ; 004b5d58
    MOV dword ptr [0x01d22c58],EDX      ; 004b5d5a | DAT_01d22c58
    CMP EDI,EDX                         ; 004b5d60
    JGE 0x004b5d94                      ; 004b5d62
        ;   XREF to: 004b5d94 (CONDITIONAL_JUMP)  ; LAB_004b5d94
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5d64 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5d6a | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5d70
    MOV EDX,EBX                         ; 004b5d77
    SUB EAX,EDI                         ; 004b5d79
    SAR EDX,0x1f                        ; 004b5d7b
    ADD EAX,EAX                         ; 004b5d7e
    MOV EDI,0x3                         ; 004b5d80
    MOV [0x01d22c58],EAX                ; 004b5d85 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5d8a
    IDIV EDI                            ; 004b5d8c
    ADD dword ptr [0x01d22c54],EAX      ; 004b5d8e | DAT_01d22c54
    PUSH 0x5c230a                       ; 004b5d94 | = "Turn right"
        ;   Label: LAB_004b5d94
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5d99
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5d9e
    PUSH EAX                            ; 004b5da1
    MOV EDI,dword ptr [ESI + 0x40]      ; 004b5da2
    PUSH EDI                            ; 004b5da5
    CALL core_menu.cpp_FUN_004eaa60     ; 004b5da6
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b5dab
    PUSH EAX                            ; 004b5dae
    PUSH 0x5c2240                       ; 004b5daf | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x1a0c]              ; 004b5db4
    PUSH EAX                            ; 004b5dbb
    CALL crt_unknown.c_FUN_005a28c0     ; 004b5dbc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b5dc1
    PUSH -0x1                           ; 004b5dc4
    MOV EAX,[0x01d22c58]                ; 004b5dc6 | DAT_01d22c58
    PUSH 0x0                            ; 004b5dcb
    ADD EAX,0x2                         ; 004b5dcd
    PUSH EAX                            ; 004b5dd0
    MOV EAX,[0x01d22c54]                ; 004b5dd1 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5dd6
    PUSH EAX                            ; 004b5dd9
    LEA EAX,[ESP + 0x1a10]              ; 004b5dda
    PUSH EAX                            ; 004b5de1
    MOV EBP,dword ptr [0x01549aa8]      ; 004b5de2 | DAT_01549aa8
    PUSH EBP                            ; 004b5de8
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5de9
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5dee
    PUSH -0x1                           ; 004b5df1
    PUSH 0x7                            ; 004b5df3
    MOV EAX,[0x01d22c58]                ; 004b5df5 | DAT_01d22c58
    PUSH EAX                            ; 004b5dfa
    MOV EDX,dword ptr [0x01d22c54]      ; 004b5dfb | DAT_01d22c54
    PUSH EDX                            ; 004b5e01
    LEA EAX,[ESP + 0x1a10]              ; 004b5e02
    PUSH EAX                            ; 004b5e09
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5e0a | DAT_01549aa8
    PUSH ECX                            ; 004b5e10
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5e11
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5e16 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b5e1b | DAT_01d22c58
    SHL EAX,0x2                         ; 004b5e21
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5e24 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b5e2a | DAT_01d22c58
    SUB EDI,EAX                         ; 004b5e30
    ADD ESP,0x18                        ; 004b5e32
    CMP EDI,EBP                         ; 004b5e35
    JGE 0x004b5e69                      ; 004b5e37
        ;   XREF to: 004b5e69 (CONDITIONAL_JUMP)  ; LAB_004b5e69
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5e39 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5e3f | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5e45
    MOV EDX,EBX                         ; 004b5e4c
    SUB EAX,EDI                         ; 004b5e4e
    SAR EDX,0x1f                        ; 004b5e50
    ADD EAX,EAX                         ; 004b5e53
    MOV EDI,0x3                         ; 004b5e55
    MOV [0x01d22c58],EAX                ; 004b5e5a | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5e5f
    IDIV EDI                            ; 004b5e61
    ADD dword ptr [0x01d22c54],EAX      ; 004b5e63 | DAT_01d22c54
    PUSH 0x5c2315                       ; 004b5e69 | DAT_005c2315
        ;   Label: LAB_004b5e69
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5e6e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5e73
    PUSH EAX                            ; 004b5e76
    MOV EDI,dword ptr [ESI + 0x48]      ; 004b5e77
    PUSH EDI                            ; 004b5e7a
    CALL core_menu.cpp_FUN_004eaa60     ; 004b5e7b
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b5e80
    PUSH EAX                            ; 004b5e83
    PUSH 0x5c2240                       ; 004b5e84 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x70c]               ; 004b5e89
    PUSH EAX                            ; 004b5e90
    CALL crt_unknown.c_FUN_005a28c0     ; 004b5e91
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b5e96
    PUSH -0x1                           ; 004b5e99
    MOV EAX,[0x01d22c58]                ; 004b5e9b | DAT_01d22c58
    PUSH 0x0                            ; 004b5ea0
    ADD EAX,0x2                         ; 004b5ea2
    PUSH EAX                            ; 004b5ea5
    MOV EAX,[0x01d22c54]                ; 004b5ea6 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5eab
    PUSH EAX                            ; 004b5eae
    LEA EAX,[ESP + 0x710]               ; 004b5eaf
    PUSH EAX                            ; 004b5eb6
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5eb7 | DAT_01549aa8
    PUSH ECX                            ; 004b5ebd
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5ebe
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5ec3
    PUSH -0x1                           ; 004b5ec6
    PUSH 0x7                            ; 004b5ec8
    MOV EDI,dword ptr [0x01d22c58]      ; 004b5eca | DAT_01d22c58
    PUSH EDI                            ; 004b5ed0
    MOV EBP,dword ptr [0x01d22c54]      ; 004b5ed1 | DAT_01d22c54
    PUSH EBP                            ; 004b5ed7
    LEA EAX,[ESP + 0x710]               ; 004b5ed8
    PUSH EAX                            ; 004b5edf
    MOV EAX,[0x01549aa8]                ; 004b5ee0 | DAT_01549aa8
    PUSH EAX                            ; 004b5ee5
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5ee6
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5eeb | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b5ef0 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5ef6 | DAT_005fba1c
    ADD EDX,EAX                         ; 004b5efc
    SHL EAX,0x2                         ; 004b5efe
    ADD ESP,0x18                        ; 004b5f01
    SUB EDI,EAX                         ; 004b5f04
    MOV dword ptr [0x01d22c58],EDX      ; 004b5f06 | DAT_01d22c58
    CMP EDI,EDX                         ; 004b5f0c
    JGE 0x004b5f40                      ; 004b5f0e
        ;   XREF to: 004b5f40 (CONDITIONAL_JUMP)  ; LAB_004b5f40
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5f10 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5f16 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5f1c
    MOV EDX,EBX                         ; 004b5f23
    SUB EAX,EDI                         ; 004b5f25
    SAR EDX,0x1f                        ; 004b5f27
    ADD EAX,EAX                         ; 004b5f2a
    MOV EDI,0x3                         ; 004b5f2c
    MOV [0x01d22c58],EAX                ; 004b5f31 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b5f36
    IDIV EDI                            ; 004b5f38
    ADD dword ptr [0x01d22c54],EAX      ; 004b5f3a | DAT_01d22c54
    PUSH 0x5c231a                       ; 004b5f40 | = "Use item"
        ;   Label: LAB_004b5f40
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b5f45
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b5f4a
    PUSH EAX                            ; 004b5f4d
    MOV EDI,dword ptr [ESI + 0x50]      ; 004b5f4e
    PUSH EDI                            ; 004b5f51
    CALL core_menu.cpp_FUN_004eaa60     ; 004b5f52
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b5f57
    PUSH EAX                            ; 004b5f5a
    PUSH 0x5c2240                       ; 004b5f5b | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x100c]              ; 004b5f60
    PUSH EAX                            ; 004b5f67
    CALL crt_unknown.c_FUN_005a28c0     ; 004b5f68
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b5f6d
    PUSH -0x1                           ; 004b5f70
    MOV EAX,[0x01d22c58]                ; 004b5f72 | DAT_01d22c58
    PUSH 0x0                            ; 004b5f77
    ADD EAX,0x2                         ; 004b5f79
    PUSH EAX                            ; 004b5f7c
    MOV EAX,[0x01d22c54]                ; 004b5f7d | DAT_01d22c54
    ADD EAX,0x2                         ; 004b5f82
    PUSH EAX                            ; 004b5f85
    LEA EAX,[ESP + 0x1010]              ; 004b5f86
    PUSH EAX                            ; 004b5f8d
    MOV EBP,dword ptr [0x01549aa8]      ; 004b5f8e | DAT_01549aa8
    PUSH EBP                            ; 004b5f94
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5f95
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b5f9a
    PUSH -0x1                           ; 004b5f9d
    PUSH 0x7                            ; 004b5f9f
    MOV EAX,[0x01d22c58]                ; 004b5fa1 | DAT_01d22c58
    PUSH EAX                            ; 004b5fa6
    MOV EDX,dword ptr [0x01d22c54]      ; 004b5fa7 | DAT_01d22c54
    PUSH EDX                            ; 004b5fad
    LEA EAX,[ESP + 0x1010]              ; 004b5fae
    PUSH EAX                            ; 004b5fb5
    MOV ECX,dword ptr [0x01549aa8]      ; 004b5fb6 | DAT_01549aa8
    PUSH ECX                            ; 004b5fbc
    CALL engine_font.cpp_FUN_004b0a20   ; 004b5fbd
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b5fc2 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b5fc7 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b5fcd
    MOV EDI,dword ptr [0x005fba1c]      ; 004b5fd0 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b5fd6 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b5fdc
    ADD ESP,0x18                        ; 004b5fde
    CMP EDI,EBP                         ; 004b5fe1
    JGE 0x004b6015                      ; 004b5fe3
        ;   XREF to: 004b6015 (CONDITIONAL_JUMP)  ; LAB_004b6015
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b5fe5 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b5feb | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b5ff1
    MOV EDX,EBX                         ; 004b5ff8
    SUB EAX,EDI                         ; 004b5ffa
    SAR EDX,0x1f                        ; 004b5ffc
    ADD EAX,EAX                         ; 004b5fff
    MOV EDI,0x3                         ; 004b6001
    MOV [0x01d22c58],EAX                ; 004b6006 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b600b
    IDIV EDI                            ; 004b600d
    ADD dword ptr [0x01d22c54],EAX      ; 004b600f | DAT_01d22c54
    PUSH 0x5c2323                       ; 004b6015 | = "Lantern"
        ;   Label: LAB_004b6015
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b601a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b601f
    PUSH EAX                            ; 004b6022
    MOV EDI,dword ptr [ESI + 0x54]      ; 004b6023
    PUSH EDI                            ; 004b6026
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6027
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b602c
    PUSH EAX                            ; 004b602f
    PUSH 0x5c2240                       ; 004b6030 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x40c]               ; 004b6035
    PUSH EAX                            ; 004b603c
    CALL crt_unknown.c_FUN_005a28c0     ; 004b603d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6042
    PUSH -0x1                           ; 004b6045
    MOV EAX,[0x01d22c58]                ; 004b6047 | DAT_01d22c58
    PUSH 0x0                            ; 004b604c
    ADD EAX,0x2                         ; 004b604e
    PUSH EAX                            ; 004b6051
    MOV EAX,[0x01d22c54]                ; 004b6052 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6057
    PUSH EAX                            ; 004b605a
    LEA EAX,[ESP + 0x410]               ; 004b605b
    PUSH EAX                            ; 004b6062
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6063 | DAT_01549aa8
    PUSH ECX                            ; 004b6069
    CALL engine_font.cpp_FUN_004b0a20   ; 004b606a
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b606f
    PUSH -0x1                           ; 004b6072
    PUSH 0x7                            ; 004b6074
    MOV EDI,dword ptr [0x01d22c58]      ; 004b6076 | DAT_01d22c58
    PUSH EDI                            ; 004b607c
    MOV EBP,dword ptr [0x01d22c54]      ; 004b607d | DAT_01d22c54
    PUSH EBP                            ; 004b6083
    LEA EAX,[ESP + 0x410]               ; 004b6084
    PUSH EAX                            ; 004b608b
    MOV EAX,[0x01549aa8]                ; 004b608c | DAT_01549aa8
    PUSH EAX                            ; 004b6091
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6092
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6097 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b609c | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b60a2 | DAT_005fba1c
    ADD EDX,EAX                         ; 004b60a8
    SHL EAX,0x2                         ; 004b60aa
    ADD ESP,0x18                        ; 004b60ad
    SUB EDI,EAX                         ; 004b60b0
    MOV dword ptr [0x01d22c58],EDX      ; 004b60b2 | DAT_01d22c58
    CMP EDI,EDX                         ; 004b60b8
    JGE 0x004b60ec                      ; 004b60ba
        ;   XREF to: 004b60ec (CONDITIONAL_JUMP)  ; LAB_004b60ec
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b60bc | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b60c2 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b60c8
    MOV EDX,EBX                         ; 004b60cf
    SUB EAX,EDI                         ; 004b60d1
    SAR EDX,0x1f                        ; 004b60d3
    ADD EAX,EAX                         ; 004b60d6
    MOV EDI,0x3                         ; 004b60d8
    MOV [0x01d22c58],EAX                ; 004b60dd | DAT_01d22c58
    MOV EAX,EBX                         ; 004b60e2
    IDIV EDI                            ; 004b60e4
    ADD dword ptr [0x01d22c54],EAX      ; 004b60e6 | DAT_01d22c54
    PUSH 0x5c232b                       ; 004b60ec | = "Journal"
        ;   Label: LAB_004b60ec
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b60f1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b60f6
    PUSH EAX                            ; 004b60f9
    MOV EDI,dword ptr [ESI + 0x5c]      ; 004b60fa
    PUSH EDI                            ; 004b60fd
    CALL core_menu.cpp_FUN_004eaa60     ; 004b60fe
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6103
    PUSH EAX                            ; 004b6106
    PUSH 0x5c2240                       ; 004b6107 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0xd0c]               ; 004b610c
    PUSH EAX                            ; 004b6113
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6114
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6119
    PUSH -0x1                           ; 004b611c
    MOV EAX,[0x01d22c58]                ; 004b611e | DAT_01d22c58
    PUSH 0x0                            ; 004b6123
    ADD EAX,0x2                         ; 004b6125
    PUSH EAX                            ; 004b6128
    MOV EAX,[0x01d22c54]                ; 004b6129 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b612e
    PUSH EAX                            ; 004b6131
    LEA EAX,[ESP + 0xd10]               ; 004b6132
    PUSH EAX                            ; 004b6139
    MOV EBP,dword ptr [0x01549aa8]      ; 004b613a | DAT_01549aa8
    PUSH EBP                            ; 004b6140
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6141
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6146
    PUSH -0x1                           ; 004b6149
    PUSH 0x7                            ; 004b614b
    MOV EAX,[0x01d22c58]                ; 004b614d | DAT_01d22c58
    PUSH EAX                            ; 004b6152
    MOV EDX,dword ptr [0x01d22c54]      ; 004b6153 | DAT_01d22c54
    PUSH EDX                            ; 004b6159
    LEA EAX,[ESP + 0xd10]               ; 004b615a
    PUSH EAX                            ; 004b6161
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6162 | DAT_01549aa8
    PUSH ECX                            ; 004b6168
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6169
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b616e | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b6173 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b6179
    MOV EDI,dword ptr [0x005fba1c]      ; 004b617c | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b6182 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b6188
    ADD ESP,0x18                        ; 004b618a
    CMP EDI,EBP                         ; 004b618d
    JGE 0x004b61c1                      ; 004b618f
        ;   XREF to: 004b61c1 (CONDITIONAL_JUMP)  ; LAB_004b61c1
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b6191 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6197 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b619d
    MOV EDX,EBX                         ; 004b61a4
    SUB EAX,EDI                         ; 004b61a6
    SAR EDX,0x1f                        ; 004b61a8
    ADD EAX,EAX                         ; 004b61ab
    MOV EDI,0x3                         ; 004b61ad
    MOV [0x01d22c58],EAX                ; 004b61b2 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b61b7
    IDIV EDI                            ; 004b61b9
    ADD dword ptr [0x01d22c54],EAX      ; 004b61bb | DAT_01d22c54
    PUSH 0x5c2333                       ; 004b61c1 | DAT_005c2333
        ;   Label: LAB_004b61c1
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b61c6
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b61cb
    PUSH EAX                            ; 004b61ce
    MOV EDI,dword ptr [ESI + 0x60]      ; 004b61cf
    PUSH EDI                            ; 004b61d2
    CALL core_menu.cpp_FUN_004eaa60     ; 004b61d3
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b61d8
    PUSH EAX                            ; 004b61db
    PUSH 0x5c2240                       ; 004b61dc | s_s_s_005c223f+1
    LEA EAX,[ESP + 0xc]                 ; 004b61e1
    PUSH EAX                            ; 004b61e5
    CALL crt_unknown.c_FUN_005a28c0     ; 004b61e6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b61eb
    PUSH -0x1                           ; 004b61ee
    MOV EAX,[0x01d22c58]                ; 004b61f0 | DAT_01d22c58
    PUSH 0x0                            ; 004b61f5
    ADD EAX,0x2                         ; 004b61f7
    PUSH EAX                            ; 004b61fa
    MOV EAX,[0x01d22c54]                ; 004b61fb | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6200
    PUSH EAX                            ; 004b6203
    LEA EAX,[ESP + 0x10]                ; 004b6204
    PUSH EAX                            ; 004b6208
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6209 | DAT_01549aa8
    PUSH ECX                            ; 004b620f
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6210
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6215
    PUSH -0x1                           ; 004b6218
    PUSH 0x7                            ; 004b621a
    MOV EDI,dword ptr [0x01d22c58]      ; 004b621c | DAT_01d22c58
    PUSH EDI                            ; 004b6222
    MOV EBP,dword ptr [0x01d22c54]      ; 004b6223 | DAT_01d22c54
    PUSH EBP                            ; 004b6229
    LEA EAX,[ESP + 0x10]                ; 004b622a
    PUSH EAX                            ; 004b622e
    MOV EAX,[0x01549aa8]                ; 004b622f | DAT_01549aa8
    PUSH EAX                            ; 004b6234
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6235
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b623a | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b623f | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b6245 | DAT_005fba1c
    ADD EDX,EAX                         ; 004b624b
    SHL EAX,0x2                         ; 004b624d
    ADD ESP,0x18                        ; 004b6250
    SUB EDI,EAX                         ; 004b6253
    MOV dword ptr [0x01d22c58],EDX      ; 004b6255 | DAT_01d22c58
    CMP EDI,EDX                         ; 004b625b
    JGE 0x004b628f                      ; 004b625d
        ;   XREF to: 004b628f (CONDITIONAL_JUMP)  ; LAB_004b628f
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b625f | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6265 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b626b
    MOV EDX,EBX                         ; 004b6272
    SUB EAX,EDI                         ; 004b6274
    SAR EDX,0x1f                        ; 004b6276
    ADD EAX,EAX                         ; 004b6279
    MOV EDI,0x3                         ; 004b627b
    MOV [0x01d22c58],EAX                ; 004b6280 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6285
    IDIV EDI                            ; 004b6287
    ADD dword ptr [0x01d22c54],EAX      ; 004b6289 | DAT_01d22c54
    PUSH 0x5c2337                       ; 004b628f | = "Voodoo Doll"
        ;   Label: LAB_004b628f
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6294
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6299
    PUSH EAX                            ; 004b629c
    MOV EDI,dword ptr [ESI + 0x68]      ; 004b629d
    PUSH EDI                            ; 004b62a0
    CALL core_menu.cpp_FUN_004eaa60     ; 004b62a1
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b62a6
    PUSH EAX                            ; 004b62a9
    PUSH 0x5c2240                       ; 004b62aa | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x90c]               ; 004b62af
    PUSH EAX                            ; 004b62b6
    CALL crt_unknown.c_FUN_005a28c0     ; 004b62b7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b62bc
    PUSH -0x1                           ; 004b62bf
    MOV EAX,[0x01d22c58]                ; 004b62c1 | DAT_01d22c58
    PUSH 0x0                            ; 004b62c6
    ADD EAX,0x2                         ; 004b62c8
    PUSH EAX                            ; 004b62cb
    MOV EAX,[0x01d22c54]                ; 004b62cc | DAT_01d22c54
    ADD EAX,0x2                         ; 004b62d1
    PUSH EAX                            ; 004b62d4
    LEA EAX,[ESP + 0x910]               ; 004b62d5
    PUSH EAX                            ; 004b62dc
    MOV EBP,dword ptr [0x01549aa8]      ; 004b62dd | DAT_01549aa8
    PUSH EBP                            ; 004b62e3
    CALL engine_font.cpp_FUN_004b0a20   ; 004b62e4
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b62e9
    PUSH -0x1                           ; 004b62ec
    PUSH 0x7                            ; 004b62ee
    MOV EAX,[0x01d22c58]                ; 004b62f0 | DAT_01d22c58
    PUSH EAX                            ; 004b62f5
    MOV EDX,dword ptr [0x01d22c54]      ; 004b62f6 | DAT_01d22c54
    PUSH EDX                            ; 004b62fc
    LEA EAX,[ESP + 0x910]               ; 004b62fd
    PUSH EAX                            ; 004b6304
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6305 | DAT_01549aa8
    PUSH ECX                            ; 004b630b
    CALL engine_font.cpp_FUN_004b0a20   ; 004b630c
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6311 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b6316 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b631c
    MOV EDI,dword ptr [0x005fba1c]      ; 004b631f | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b6325 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b632b
    ADD ESP,0x18                        ; 004b632d
    CMP EDI,EBP                         ; 004b6330
    JGE 0x004b6364                      ; 004b6332
        ;   XREF to: 004b6364 (CONDITIONAL_JUMP)  ; LAB_004b6364
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b6334 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b633a | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6340
    MOV EDX,EBX                         ; 004b6347
    SUB EAX,EDI                         ; 004b6349
    SAR EDX,0x1f                        ; 004b634b
    ADD EAX,EAX                         ; 004b634e
    MOV EDI,0x3                         ; 004b6350
    MOV [0x01d22c58],EAX                ; 004b6355 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b635a
    IDIV EDI                            ; 004b635c
    ADD dword ptr [0x01d22c54],EAX      ; 004b635e | DAT_01d22c54
    PUSH 0x5c2343                       ; 004b6364 | DAT_005c2343
        ;   Label: LAB_004b6364
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6369
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b636e
    PUSH EAX                            ; 004b6371
    MOV EDI,dword ptr [ESI + 0x6c]      ; 004b6372
    PUSH EDI                            ; 004b6375
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6376
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b637b
    PUSH EAX                            ; 004b637e
    PUSH 0x5c2240                       ; 004b637f | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x120c]              ; 004b6384
    PUSH EAX                            ; 004b638b
    CALL crt_unknown.c_FUN_005a28c0     ; 004b638c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6391
    PUSH -0x1                           ; 004b6394
    MOV EAX,[0x01d22c58]                ; 004b6396 | DAT_01d22c58
    PUSH 0x0                            ; 004b639b
    ADD EAX,0x2                         ; 004b639d
    PUSH EAX                            ; 004b63a0
    MOV EAX,[0x01d22c54]                ; 004b63a1 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b63a6
    PUSH EAX                            ; 004b63a9
    LEA EAX,[ESP + 0x1210]              ; 004b63aa
    PUSH EAX                            ; 004b63b1
    MOV ECX,dword ptr [0x01549aa8]      ; 004b63b2 | DAT_01549aa8
    PUSH ECX                            ; 004b63b8
    CALL engine_font.cpp_FUN_004b0a20   ; 004b63b9
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b63be
    PUSH -0x1                           ; 004b63c1
    PUSH 0x7                            ; 004b63c3
    MOV EDI,dword ptr [0x01d22c58]      ; 004b63c5 | DAT_01d22c58
    PUSH EDI                            ; 004b63cb
    MOV EBP,dword ptr [0x01d22c54]      ; 004b63cc | DAT_01d22c54
    PUSH EBP                            ; 004b63d2
    LEA EAX,[ESP + 0x1210]              ; 004b63d3
    PUSH EAX                            ; 004b63da
    MOV EAX,[0x01549aa8]                ; 004b63db | DAT_01549aa8
    PUSH EAX                            ; 004b63e0
    CALL engine_font.cpp_FUN_004b0a20   ; 004b63e1
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b63e6 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b63eb | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b63f1 | DAT_005fba1c
    ADD EDX,EAX                         ; 004b63f7
    SHL EAX,0x2                         ; 004b63f9
    ADD ESP,0x18                        ; 004b63fc
    SUB EDI,EAX                         ; 004b63ff
    MOV dword ptr [0x01d22c58],EDX      ; 004b6401 | DAT_01d22c58
    CMP EDI,EDX                         ; 004b6407
    JGE 0x004b643b                      ; 004b6409
        ;   XREF to: 004b643b (CONDITIONAL_JUMP)  ; LAB_004b643b
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b640b | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6411 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6417
    MOV EDX,EBX                         ; 004b641e
    SUB EAX,EDI                         ; 004b6420
    SAR EDX,0x1f                        ; 004b6422
    ADD EAX,EAX                         ; 004b6425
    MOV EDI,0x3                         ; 004b6427
    MOV [0x01d22c58],EAX                ; 004b642c | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6431
    IDIV EDI                            ; 004b6433
    ADD dword ptr [0x01d22c54],EAX      ; 004b6435 | DAT_01d22c54
    PUSH 0x5c2348                       ; 004b643b | = "Point up"
        ;   Label: LAB_004b643b
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6440
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6445
    PUSH EAX                            ; 004b6448
    MOV EDI,dword ptr [ESI + 0x78]      ; 004b6449
    PUSH EDI                            ; 004b644c
    CALL core_menu.cpp_FUN_004eaa60     ; 004b644d
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6452
    PUSH EAX                            ; 004b6455
    PUSH 0x5c2240                       ; 004b6456 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x160c]              ; 004b645b
    PUSH EAX                            ; 004b6462
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6463
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6468
    PUSH -0x1                           ; 004b646b
    MOV EAX,[0x01d22c58]                ; 004b646d | DAT_01d22c58
    PUSH 0x0                            ; 004b6472
    ADD EAX,0x2                         ; 004b6474
    PUSH EAX                            ; 004b6477
    MOV EAX,[0x01d22c54]                ; 004b6478 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b647d
    PUSH EAX                            ; 004b6480
    LEA EAX,[ESP + 0x1610]              ; 004b6481
    PUSH EAX                            ; 004b6488
    MOV EBP,dword ptr [0x01549aa8]      ; 004b6489 | DAT_01549aa8
    PUSH EBP                            ; 004b648f
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6490
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6495
    PUSH -0x1                           ; 004b6498
    PUSH 0x7                            ; 004b649a
    MOV EAX,[0x01d22c58]                ; 004b649c | DAT_01d22c58
    PUSH EAX                            ; 004b64a1
    MOV EDX,dword ptr [0x01d22c54]      ; 004b64a2 | DAT_01d22c54
    PUSH EDX                            ; 004b64a8
    LEA EAX,[ESP + 0x1610]              ; 004b64a9
    PUSH EAX                            ; 004b64b0
    MOV ECX,dword ptr [0x01549aa8]      ; 004b64b1 | DAT_01549aa8
    PUSH ECX                            ; 004b64b7
    CALL engine_font.cpp_FUN_004b0a20   ; 004b64b8
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b64bd | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b64c2 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b64c8
    MOV EDI,dword ptr [0x005fba1c]      ; 004b64cb | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b64d1 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b64d7
    ADD ESP,0x18                        ; 004b64d9
    CMP EDI,EBP                         ; 004b64dc
    JGE 0x004b6510                      ; 004b64de
        ;   XREF to: 004b6510 (CONDITIONAL_JUMP)  ; LAB_004b6510
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b64e0 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b64e6 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b64ec
    MOV EDX,EBX                         ; 004b64f3
    SUB EAX,EDI                         ; 004b64f5
    SAR EDX,0x1f                        ; 004b64f7
    ADD EAX,EAX                         ; 004b64fa
    MOV EDI,0x3                         ; 004b64fc
    MOV [0x01d22c58],EAX                ; 004b6501 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6506
    IDIV EDI                            ; 004b6508
    ADD dword ptr [0x01d22c54],EAX      ; 004b650a | DAT_01d22c54
    PUSH 0x5c2351                       ; 004b6510 | = "Point down"
        ;   Label: LAB_004b6510
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6515
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b651a
    PUSH EAX                            ; 004b651d
    MOV EDI,dword ptr [ESI + 0x7c]      ; 004b651e
    PUSH EDI                            ; 004b6521
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6522
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6527
    PUSH EAX                            ; 004b652a
    PUSH 0x5c2240                       ; 004b652b | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x190c]              ; 004b6530
    PUSH EAX                            ; 004b6537
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6538
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b653d
    PUSH -0x1                           ; 004b6540
    MOV EAX,[0x01d22c58]                ; 004b6542 | DAT_01d22c58
    PUSH 0x0                            ; 004b6547
    ADD EAX,0x2                         ; 004b6549
    PUSH EAX                            ; 004b654c
    MOV EAX,[0x01d22c54]                ; 004b654d | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6552
    PUSH EAX                            ; 004b6555
    LEA EAX,[ESP + 0x1910]              ; 004b6556
    PUSH EAX                            ; 004b655d
    MOV ECX,dword ptr [0x01549aa8]      ; 004b655e | DAT_01549aa8
    PUSH ECX                            ; 004b6564
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6565
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b656a
    PUSH -0x1                           ; 004b656d
    PUSH 0x7                            ; 004b656f
    MOV EDI,dword ptr [0x01d22c58]      ; 004b6571 | DAT_01d22c58
    PUSH EDI                            ; 004b6577
    MOV EBP,dword ptr [0x01d22c54]      ; 004b6578 | DAT_01d22c54
    PUSH EBP                            ; 004b657e
    LEA EAX,[ESP + 0x1910]              ; 004b657f
    PUSH EAX                            ; 004b6586
    MOV EAX,[0x01549aa8]                ; 004b6587 | DAT_01549aa8
    PUSH EAX                            ; 004b658c
    CALL engine_font.cpp_FUN_004b0a20   ; 004b658d
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6592 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b6597 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b659d | DAT_005fba1c
    ADD EDX,EAX                         ; 004b65a3
    SHL EAX,0x2                         ; 004b65a5
    ADD ESP,0x18                        ; 004b65a8
    SUB EDI,EAX                         ; 004b65ab
    MOV dword ptr [0x01d22c58],EDX      ; 004b65ad | DAT_01d22c58
    CMP EDI,EDX                         ; 004b65b3
    JGE 0x004b65e7                      ; 004b65b5
        ;   XREF to: 004b65e7 (CONDITIONAL_JUMP)  ; LAB_004b65e7
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b65b7 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b65bd | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b65c3
    MOV EDX,EBX                         ; 004b65ca
    SUB EAX,EDI                         ; 004b65cc
    SAR EDX,0x1f                        ; 004b65ce
    ADD EAX,EAX                         ; 004b65d1
    MOV EDI,0x3                         ; 004b65d3
    MOV [0x01d22c58],EAX                ; 004b65d8 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b65dd
    IDIV EDI                            ; 004b65df
    ADD dword ptr [0x01d22c54],EAX      ; 004b65e1 | DAT_01d22c54
    PUSH 0x5c235c                       ; 004b65e7 | = "Quick turn"
        ;   Label: LAB_004b65e7
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b65ec
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b65f1
    PUSH EAX                            ; 004b65f4
    MOV EDI,dword ptr [ESI + 0x74]      ; 004b65f5
    PUSH EDI                            ; 004b65f8
    CALL core_menu.cpp_FUN_004eaa60     ; 004b65f9
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b65fe
    PUSH EAX                            ; 004b6601
    PUSH 0x5c2240                       ; 004b6602 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x20c]               ; 004b6607
    PUSH EAX                            ; 004b660e
    CALL crt_unknown.c_FUN_005a28c0     ; 004b660f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6614
    PUSH -0x1                           ; 004b6617
    MOV EAX,[0x01d22c58]                ; 004b6619 | DAT_01d22c58
    PUSH 0x0                            ; 004b661e
    ADD EAX,0x2                         ; 004b6620
    PUSH EAX                            ; 004b6623
    MOV EAX,[0x01d22c54]                ; 004b6624 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6629
    PUSH EAX                            ; 004b662c
    LEA EAX,[ESP + 0x210]               ; 004b662d
    PUSH EAX                            ; 004b6634
    MOV EBP,dword ptr [0x01549aa8]      ; 004b6635 | DAT_01549aa8
    PUSH EBP                            ; 004b663b
    CALL engine_font.cpp_FUN_004b0a20   ; 004b663c
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6641
    PUSH -0x1                           ; 004b6644
    PUSH 0x7                            ; 004b6646
    MOV EAX,[0x01d22c58]                ; 004b6648 | DAT_01d22c58
    PUSH EAX                            ; 004b664d
    MOV EDX,dword ptr [0x01d22c54]      ; 004b664e | DAT_01d22c54
    PUSH EDX                            ; 004b6654
    LEA EAX,[ESP + 0x210]               ; 004b6655
    PUSH EAX                            ; 004b665c
    MOV ECX,dword ptr [0x01549aa8]      ; 004b665d | DAT_01549aa8
    PUSH ECX                            ; 004b6663
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6664
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6669 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b666e | DAT_01d22c58
    SHL EAX,0x2                         ; 004b6674
    MOV EDI,dword ptr [0x005fba1c]      ; 004b6677 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b667d | DAT_01d22c58
    SUB EDI,EAX                         ; 004b6683
    ADD ESP,0x18                        ; 004b6685
    CMP EDI,EBP                         ; 004b6688
    JGE 0x004b66bc                      ; 004b668a
        ;   XREF to: 004b66bc (CONDITIONAL_JUMP)  ; LAB_004b66bc
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b668c | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6692 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6698
    MOV EDX,EBX                         ; 004b669f
    SUB EAX,EDI                         ; 004b66a1
    SAR EDX,0x1f                        ; 004b66a3
    ADD EAX,EAX                         ; 004b66a6
    MOV EDI,0x3                         ; 004b66a8
    MOV [0x01d22c58],EAX                ; 004b66ad | DAT_01d22c58
    MOV EAX,EBX                         ; 004b66b2
    IDIV EDI                            ; 004b66b4
    ADD dword ptr [0x01d22c54],EAX      ; 004b66b6 | DAT_01d22c54
    PUSH 0x5c2367                       ; 004b66bc | = "Cycle conventional weapons"
        ;   Label: LAB_004b66bc
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b66c1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b66c6
    PUSH EAX                            ; 004b66c9
    MOV EDI,dword ptr [ESI + 0x80]      ; 004b66ca
    PUSH EDI                            ; 004b66d0
    CALL core_menu.cpp_FUN_004eaa60     ; 004b66d1
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b66d6
    PUSH EAX                            ; 004b66d9
    PUSH 0x5c2240                       ; 004b66da | s_s_s_005c223f+1
    LEA EAX,[ESP + 0xb0c]               ; 004b66df
    PUSH EAX                            ; 004b66e6
    CALL crt_unknown.c_FUN_005a28c0     ; 004b66e7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b66ec
    PUSH -0x1                           ; 004b66ef
    MOV EAX,[0x01d22c58]                ; 004b66f1 | DAT_01d22c58
    PUSH 0x0                            ; 004b66f6
    ADD EAX,0x2                         ; 004b66f8
    PUSH EAX                            ; 004b66fb
    MOV EAX,[0x01d22c54]                ; 004b66fc | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6701
    PUSH EAX                            ; 004b6704
    LEA EAX,[ESP + 0xb10]               ; 004b6705
    PUSH EAX                            ; 004b670c
    MOV ECX,dword ptr [0x01549aa8]      ; 004b670d | DAT_01549aa8
    PUSH ECX                            ; 004b6713
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6714
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6719
    PUSH -0x1                           ; 004b671c
    PUSH 0x7                            ; 004b671e
    MOV EDI,dword ptr [0x01d22c58]      ; 004b6720 | DAT_01d22c58
    PUSH EDI                            ; 004b6726
    MOV EBP,dword ptr [0x01d22c54]      ; 004b6727 | DAT_01d22c54
    PUSH EBP                            ; 004b672d
    LEA EAX,[ESP + 0xb10]               ; 004b672e
    PUSH EAX                            ; 004b6735
    MOV EAX,[0x01549aa8]                ; 004b6736 | DAT_01549aa8
    PUSH EAX                            ; 004b673b
    CALL engine_font.cpp_FUN_004b0a20   ; 004b673c
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6741 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b6746 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b674c | DAT_005fba1c
    ADD EDX,EAX                         ; 004b6752
    SHL EAX,0x2                         ; 004b6754
    ADD ESP,0x18                        ; 004b6757
    SUB EDI,EAX                         ; 004b675a
    MOV dword ptr [0x01d22c58],EDX      ; 004b675c | DAT_01d22c58
    CMP EDI,EDX                         ; 004b6762
    JGE 0x004b6796                      ; 004b6764
        ;   XREF to: 004b6796 (CONDITIONAL_JUMP)  ; LAB_004b6796
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b6766 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b676c | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6772
    MOV EDX,EBX                         ; 004b6779
    SUB EAX,EDI                         ; 004b677b
    SAR EDX,0x1f                        ; 004b677d
    ADD EAX,EAX                         ; 004b6780
    MOV EDI,0x3                         ; 004b6782
    MOV [0x01d22c58],EAX                ; 004b6787 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b678c
    IDIV EDI                            ; 004b678e
    ADD dword ptr [0x01d22c54],EAX      ; 004b6790 | DAT_01d22c54
    PUSH 0x5c2382                       ; 004b6796 | = "Cycle staves"
        ;   Label: LAB_004b6796
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b679b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b67a0
    PUSH EAX                            ; 004b67a3
    MOV EDI,dword ptr [ESI + 0x84]      ; 004b67a4
    PUSH EDI                            ; 004b67aa
    CALL core_menu.cpp_FUN_004eaa60     ; 004b67ab
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b67b0
    PUSH EAX                            ; 004b67b3
    PUSH 0x5c2240                       ; 004b67b4 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x140c]              ; 004b67b9
    PUSH EAX                            ; 004b67c0
    CALL crt_unknown.c_FUN_005a28c0     ; 004b67c1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b67c6
    PUSH -0x1                           ; 004b67c9
    MOV EAX,[0x01d22c58]                ; 004b67cb | DAT_01d22c58
    PUSH 0x0                            ; 004b67d0
    ADD EAX,0x2                         ; 004b67d2
    PUSH EAX                            ; 004b67d5
    MOV EAX,[0x01d22c54]                ; 004b67d6 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b67db
    PUSH EAX                            ; 004b67de
    LEA EAX,[ESP + 0x1410]              ; 004b67df
    PUSH EAX                            ; 004b67e6
    MOV EBP,dword ptr [0x01549aa8]      ; 004b67e7 | DAT_01549aa8
    PUSH EBP                            ; 004b67ed
    CALL engine_font.cpp_FUN_004b0a20   ; 004b67ee
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b67f3
    PUSH -0x1                           ; 004b67f6
    PUSH 0x7                            ; 004b67f8
    MOV EAX,[0x01d22c58]                ; 004b67fa | DAT_01d22c58
    PUSH EAX                            ; 004b67ff
    MOV EDX,dword ptr [0x01d22c54]      ; 004b6800 | DAT_01d22c54
    PUSH EDX                            ; 004b6806
    LEA EAX,[ESP + 0x1410]              ; 004b6807
    PUSH EAX                            ; 004b680e
    MOV ECX,dword ptr [0x01549aa8]      ; 004b680f | DAT_01549aa8
    PUSH ECX                            ; 004b6815
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6816
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b681b | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b6820 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b6826
    MOV EDI,dword ptr [0x005fba1c]      ; 004b6829 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b682f | DAT_01d22c58
    SUB EDI,EAX                         ; 004b6835
    ADD ESP,0x18                        ; 004b6837
    CMP EDI,EBP                         ; 004b683a
    JGE 0x004b686e                      ; 004b683c
        ;   XREF to: 004b686e (CONDITIONAL_JUMP)  ; LAB_004b686e
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b683e | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6844 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b684a
    MOV EDX,EBX                         ; 004b6851
    SUB EAX,EDI                         ; 004b6853
    SAR EDX,0x1f                        ; 004b6855
    ADD EAX,EAX                         ; 004b6858
    MOV EDI,0x3                         ; 004b685a
    MOV [0x01d22c58],EAX                ; 004b685f | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6864
    IDIV EDI                            ; 004b6866
    ADD dword ptr [0x01d22c54],EAX      ; 004b6868 | DAT_01d22c54
    PUSH 0x5c238f                       ; 004b686e | = "Cycle Christian weapons"
        ;   Label: LAB_004b686e
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6873
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6878
    PUSH EAX                            ; 004b687b
    MOV EDI,dword ptr [ESI + 0x88]      ; 004b687c
    PUSH EDI                            ; 004b6882
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6883
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6888
    PUSH EAX                            ; 004b688b
    PUSH 0x5c2240                       ; 004b688c | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x1b0c]              ; 004b6891
    PUSH EAX                            ; 004b6898
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6899
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b689e
    PUSH -0x1                           ; 004b68a1
    MOV EAX,[0x01d22c58]                ; 004b68a3 | DAT_01d22c58
    PUSH 0x0                            ; 004b68a8
    ADD EAX,0x2                         ; 004b68aa
    PUSH EAX                            ; 004b68ad
    MOV EAX,[0x01d22c54]                ; 004b68ae | DAT_01d22c54
    ADD EAX,0x2                         ; 004b68b3
    PUSH EAX                            ; 004b68b6
    LEA EAX,[ESP + 0x1b10]              ; 004b68b7
    PUSH EAX                            ; 004b68be
    MOV ECX,dword ptr [0x01549aa8]      ; 004b68bf | DAT_01549aa8
    PUSH ECX                            ; 004b68c5
    CALL engine_font.cpp_FUN_004b0a20   ; 004b68c6
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b68cb
    PUSH -0x1                           ; 004b68ce
    PUSH 0x7                            ; 004b68d0
    MOV EDI,dword ptr [0x01d22c58]      ; 004b68d2 | DAT_01d22c58
    PUSH EDI                            ; 004b68d8
    MOV EBP,dword ptr [0x01d22c54]      ; 004b68d9 | DAT_01d22c54
    PUSH EBP                            ; 004b68df
    LEA EAX,[ESP + 0x1b10]              ; 004b68e0
    PUSH EAX                            ; 004b68e7
    MOV EAX,[0x01549aa8]                ; 004b68e8 | DAT_01549aa8
    PUSH EAX                            ; 004b68ed
    CALL engine_font.cpp_FUN_004b0a20   ; 004b68ee
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b68f3 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b68f8 | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b68fe | DAT_005fba1c
    ADD EDX,EAX                         ; 004b6904
    SHL EAX,0x2                         ; 004b6906
    ADD ESP,0x18                        ; 004b6909
    SUB EDI,EAX                         ; 004b690c
    MOV dword ptr [0x01d22c58],EDX      ; 004b690e | DAT_01d22c58
    CMP EDI,EDX                         ; 004b6914
    JGE 0x004b6948                      ; 004b6916
        ;   XREF to: 004b6948 (CONDITIONAL_JUMP)  ; LAB_004b6948
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b6918 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b691e | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6924
    MOV EDX,EBX                         ; 004b692b
    SUB EAX,EDI                         ; 004b692d
    SAR EDX,0x1f                        ; 004b692f
    ADD EAX,EAX                         ; 004b6932
    MOV EDI,0x3                         ; 004b6934
    MOV [0x01d22c58],EAX                ; 004b6939 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b693e
    IDIV EDI                            ; 004b6940
    ADD dword ptr [0x01d22c54],EAX      ; 004b6942 | DAT_01d22c54
    PUSH 0x5c23a7                       ; 004b6948 | = "Cycle Shaman weapons"
        ;   Label: LAB_004b6948
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b694d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6952
    PUSH EAX                            ; 004b6955
    MOV EDI,dword ptr [ESI + 0x8c]      ; 004b6956
    PUSH EDI                            ; 004b695c
    CALL core_menu.cpp_FUN_004eaa60     ; 004b695d
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6962
    PUSH EAX                            ; 004b6965
    PUSH 0x5c2240                       ; 004b6966 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x170c]              ; 004b696b
    PUSH EAX                            ; 004b6972
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6973
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6978
    PUSH -0x1                           ; 004b697b
    MOV EAX,[0x01d22c58]                ; 004b697d | DAT_01d22c58
    PUSH 0x0                            ; 004b6982
    ADD EAX,0x2                         ; 004b6984
    PUSH EAX                            ; 004b6987
    MOV EAX,[0x01d22c54]                ; 004b6988 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b698d
    PUSH EAX                            ; 004b6990
    LEA EAX,[ESP + 0x1710]              ; 004b6991
    PUSH EAX                            ; 004b6998
    MOV EBP,dword ptr [0x01549aa8]      ; 004b6999 | DAT_01549aa8
    PUSH EBP                            ; 004b699f
    CALL engine_font.cpp_FUN_004b0a20   ; 004b69a0
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b69a5
    PUSH -0x1                           ; 004b69a8
    PUSH 0x7                            ; 004b69aa
    MOV EAX,[0x01d22c58]                ; 004b69ac | DAT_01d22c58
    PUSH EAX                            ; 004b69b1
    MOV EDX,dword ptr [0x01d22c54]      ; 004b69b2 | DAT_01d22c54
    PUSH EDX                            ; 004b69b8
    LEA EAX,[ESP + 0x1710]              ; 004b69b9
    PUSH EAX                            ; 004b69c0
    MOV ECX,dword ptr [0x01549aa8]      ; 004b69c1 | DAT_01549aa8
    PUSH ECX                            ; 004b69c7
    CALL engine_font.cpp_FUN_004b0a20   ; 004b69c8
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b69cd | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b69d2 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b69d8
    MOV EDI,dword ptr [0x005fba1c]      ; 004b69db | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b69e1 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b69e7
    ADD ESP,0x18                        ; 004b69e9
    CMP EDI,EBP                         ; 004b69ec
    JGE 0x004b6a20                      ; 004b69ee
        ;   XREF to: 004b6a20 (CONDITIONAL_JUMP)  ; LAB_004b6a20
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b69f0 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b69f6 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b69fc
    MOV EDX,EBX                         ; 004b6a03
    SUB EAX,EDI                         ; 004b6a05
    SAR EDX,0x1f                        ; 004b6a07
    ADD EAX,EAX                         ; 004b6a0a
    MOV EDI,0x3                         ; 004b6a0c
    MOV [0x01d22c58],EAX                ; 004b6a11 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6a16
    IDIV EDI                            ; 004b6a18
    ADD dword ptr [0x01d22c54],EAX      ; 004b6a1a | DAT_01d22c54
    PUSH 0x5c23bc                       ; 004b6a20 | = "Cycle Pagan weapons"
        ;   Label: LAB_004b6a20
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6a25
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6a2a
    PUSH EAX                            ; 004b6a2d
    MOV EDI,dword ptr [ESI + 0x90]      ; 004b6a2e
    PUSH EDI                            ; 004b6a34
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6a35
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6a3a
    PUSH EAX                            ; 004b6a3d
    PUSH 0x5c2240                       ; 004b6a3e | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x60c]               ; 004b6a43
    PUSH EAX                            ; 004b6a4a
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6a4b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6a50
    PUSH -0x1                           ; 004b6a53
    MOV EAX,[0x01d22c58]                ; 004b6a55 | DAT_01d22c58
    PUSH 0x0                            ; 004b6a5a
    ADD EAX,0x2                         ; 004b6a5c
    PUSH EAX                            ; 004b6a5f
    MOV EAX,[0x01d22c54]                ; 004b6a60 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6a65
    PUSH EAX                            ; 004b6a68
    LEA EAX,[ESP + 0x610]               ; 004b6a69
    PUSH EAX                            ; 004b6a70
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6a71 | DAT_01549aa8
    PUSH ECX                            ; 004b6a77
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6a78
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6a7d
    PUSH -0x1                           ; 004b6a80
    PUSH 0x7                            ; 004b6a82
    MOV EDI,dword ptr [0x01d22c58]      ; 004b6a84 | DAT_01d22c58
    PUSH EDI                            ; 004b6a8a
    MOV EBP,dword ptr [0x01d22c54]      ; 004b6a8b | DAT_01d22c54
    PUSH EBP                            ; 004b6a91
    LEA EAX,[ESP + 0x610]               ; 004b6a92
    PUSH EAX                            ; 004b6a99
    MOV EAX,[0x01549aa8]                ; 004b6a9a | DAT_01549aa8
    PUSH EAX                            ; 004b6a9f
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6aa0
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6aa5 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b6aaa | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b6ab0 | DAT_005fba1c
    ADD EDX,EAX                         ; 004b6ab6
    SHL EAX,0x2                         ; 004b6ab8
    ADD ESP,0x18                        ; 004b6abb
    SUB EDI,EAX                         ; 004b6abe
    MOV dword ptr [0x01d22c58],EDX      ; 004b6ac0 | DAT_01d22c58
    CMP EDI,EDX                         ; 004b6ac6
    JGE 0x004b6afa                      ; 004b6ac8
        ;   XREF to: 004b6afa (CONDITIONAL_JUMP)  ; LAB_004b6afa
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b6aca | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6ad0 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6ad6
    MOV EDX,EBX                         ; 004b6add
    SUB EAX,EDI                         ; 004b6adf
    SAR EDX,0x1f                        ; 004b6ae1
    ADD EAX,EAX                         ; 004b6ae4
    MOV EDI,0x3                         ; 004b6ae6
    MOV [0x01d22c58],EAX                ; 004b6aeb | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6af0
    IDIV EDI                            ; 004b6af2
    ADD dword ptr [0x01d22c54],EAX      ; 004b6af4 | DAT_01d22c54
    PUSH 0x5c23d0                       ; 004b6afa | = "Next weapon"
        ;   Label: LAB_004b6afa
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6aff
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6b04
    PUSH EAX                            ; 004b6b07
    MOV EDI,dword ptr [ESI + 0x94]      ; 004b6b08
    PUSH EDI                            ; 004b6b0e
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6b0f
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6b14
    PUSH EAX                            ; 004b6b17
    PUSH 0x5c2240                       ; 004b6b18 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0xf0c]               ; 004b6b1d
    PUSH EAX                            ; 004b6b24
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6b25
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6b2a
    PUSH -0x1                           ; 004b6b2d
    MOV EAX,[0x01d22c58]                ; 004b6b2f | DAT_01d22c58
    PUSH 0x0                            ; 004b6b34
    ADD EAX,0x2                         ; 004b6b36
    PUSH EAX                            ; 004b6b39
    MOV EAX,[0x01d22c54]                ; 004b6b3a | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6b3f
    PUSH EAX                            ; 004b6b42
    LEA EAX,[ESP + 0xf10]               ; 004b6b43
    PUSH EAX                            ; 004b6b4a
    MOV EBP,dword ptr [0x01549aa8]      ; 004b6b4b | DAT_01549aa8
    PUSH EBP                            ; 004b6b51
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6b52
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6b57
    PUSH -0x1                           ; 004b6b5a
    PUSH 0x7                            ; 004b6b5c
    MOV EAX,[0x01d22c58]                ; 004b6b5e | DAT_01d22c58
    PUSH EAX                            ; 004b6b63
    MOV EDX,dword ptr [0x01d22c54]      ; 004b6b64 | DAT_01d22c54
    PUSH EDX                            ; 004b6b6a
    LEA EAX,[ESP + 0xf10]               ; 004b6b6b
    PUSH EAX                            ; 004b6b72
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6b73 | DAT_01549aa8
    PUSH ECX                            ; 004b6b79
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6b7a
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6b7f | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b6b84 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b6b8a
    MOV EDI,dword ptr [0x005fba1c]      ; 004b6b8d | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b6b93 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b6b99
    ADD ESP,0x18                        ; 004b6b9b
    CMP EDI,EBP                         ; 004b6b9e
    JGE 0x004b6bd2                      ; 004b6ba0
        ;   XREF to: 004b6bd2 (CONDITIONAL_JUMP)  ; LAB_004b6bd2
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b6ba2 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6ba8 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6bae
    MOV EDX,EBX                         ; 004b6bb5
    SUB EAX,EDI                         ; 004b6bb7
    SAR EDX,0x1f                        ; 004b6bb9
    ADD EAX,EAX                         ; 004b6bbc
    MOV EDI,0x3                         ; 004b6bbe
    MOV [0x01d22c58],EAX                ; 004b6bc3 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6bc8
    IDIV EDI                            ; 004b6bca
    ADD dword ptr [0x01d22c54],EAX      ; 004b6bcc | DAT_01d22c54
    PUSH 0x5c23dc                       ; 004b6bd2 | = "Previous weapon"
        ;   Label: LAB_004b6bd2
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6bd7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6bdc
    PUSH EAX                            ; 004b6bdf
    MOV EDI,dword ptr [ESI + 0x98]      ; 004b6be0
    PUSH EDI                            ; 004b6be6
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6be7
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6bec
    PUSH EAX                            ; 004b6bef
    PUSH 0x5c2240                       ; 004b6bf0 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x30c]               ; 004b6bf5
    PUSH EAX                            ; 004b6bfc
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6bfd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6c02
    PUSH -0x1                           ; 004b6c05
    MOV EAX,[0x01d22c58]                ; 004b6c07 | DAT_01d22c58
    PUSH 0x0                            ; 004b6c0c
    ADD EAX,0x2                         ; 004b6c0e
    PUSH EAX                            ; 004b6c11
    MOV EAX,[0x01d22c54]                ; 004b6c12 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6c17
    PUSH EAX                            ; 004b6c1a
    LEA EAX,[ESP + 0x310]               ; 004b6c1b
    PUSH EAX                            ; 004b6c22
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6c23 | DAT_01549aa8
    PUSH ECX                            ; 004b6c29
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6c2a
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6c2f
    PUSH -0x1                           ; 004b6c32
    PUSH 0x7                            ; 004b6c34
    MOV EDI,dword ptr [0x01d22c58]      ; 004b6c36 | DAT_01d22c58
    PUSH EDI                            ; 004b6c3c
    MOV EBP,dword ptr [0x01d22c54]      ; 004b6c3d | DAT_01d22c54
    PUSH EBP                            ; 004b6c43
    LEA EAX,[ESP + 0x310]               ; 004b6c44
    PUSH EAX                            ; 004b6c4b
    MOV EAX,[0x01549aa8]                ; 004b6c4c | DAT_01549aa8
    PUSH EAX                            ; 004b6c51
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6c52
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6c57 | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b6c5c | DAT_01d22c58
    MOV EDI,dword ptr [0x005fba1c]      ; 004b6c62 | DAT_005fba1c
    ADD EDX,EAX                         ; 004b6c68
    SHL EAX,0x2                         ; 004b6c6a
    ADD ESP,0x18                        ; 004b6c6d
    SUB EDI,EAX                         ; 004b6c70
    MOV dword ptr [0x01d22c58],EDX      ; 004b6c72 | DAT_01d22c58
    CMP EDI,EDX                         ; 004b6c78
    JGE 0x004b6cac                      ; 004b6c7a
        ;   XREF to: 004b6cac (CONDITIONAL_JUMP)  ; LAB_004b6cac
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b6c7c | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6c82 | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6c88
    MOV EDX,EBX                         ; 004b6c8f
    SUB EAX,EDI                         ; 004b6c91
    SAR EDX,0x1f                        ; 004b6c93
    ADD EAX,EAX                         ; 004b6c96
    MOV EDI,0x3                         ; 004b6c98
    MOV [0x01d22c58],EAX                ; 004b6c9d | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6ca2
    IDIV EDI                            ; 004b6ca4
    ADD dword ptr [0x01d22c54],EAX      ; 004b6ca6 | DAT_01d22c54
    PUSH 0x5c23ec                       ; 004b6cac | = "Next item"
        ;   Label: LAB_004b6cac
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6cb1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6cb6
    PUSH EAX                            ; 004b6cb9
    MOV EDI,dword ptr [ESI + 0x9c]      ; 004b6cba
    PUSH EDI                            ; 004b6cc0
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6cc1
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6cc6
    PUSH EAX                            ; 004b6cc9
    PUSH 0x5c2240                       ; 004b6cca | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x10c]               ; 004b6ccf
    PUSH EAX                            ; 004b6cd6
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6cd7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6cdc
    PUSH -0x1                           ; 004b6cdf
    MOV EAX,[0x01d22c58]                ; 004b6ce1 | DAT_01d22c58
    PUSH 0x0                            ; 004b6ce6
    ADD EAX,0x2                         ; 004b6ce8
    PUSH EAX                            ; 004b6ceb
    MOV EAX,[0x01d22c54]                ; 004b6cec | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6cf1
    PUSH EAX                            ; 004b6cf4
    LEA EAX,[ESP + 0x110]               ; 004b6cf5
    PUSH EAX                            ; 004b6cfc
    MOV EBP,dword ptr [0x01549aa8]      ; 004b6cfd | DAT_01549aa8
    PUSH EBP                            ; 004b6d03
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6d04
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6d09
    PUSH -0x1                           ; 004b6d0c
    PUSH 0x7                            ; 004b6d0e
    MOV EAX,[0x01d22c58]                ; 004b6d10 | DAT_01d22c58
    PUSH EAX                            ; 004b6d15
    MOV EDX,dword ptr [0x01d22c54]      ; 004b6d16 | DAT_01d22c54
    PUSH EDX                            ; 004b6d1c
    LEA EAX,[ESP + 0x110]               ; 004b6d1d
    PUSH EAX                            ; 004b6d24
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6d25 | DAT_01549aa8
    PUSH ECX                            ; 004b6d2b
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6d2c
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6d31 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b6d36 | DAT_01d22c58
    SHL EAX,0x2                         ; 004b6d3c
    MOV EDI,dword ptr [0x005fba1c]      ; 004b6d3f | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b6d45 | DAT_01d22c58
    SUB EDI,EAX                         ; 004b6d4b
    ADD ESP,0x18                        ; 004b6d4d
    CMP EDI,EBP                         ; 004b6d50
    JGE 0x004b6d84                      ; 004b6d52
        ;   XREF to: 004b6d84 (CONDITIONAL_JUMP)  ; LAB_004b6d84
    MOV EDI,dword ptr [0x01d22c5c]      ; 004b6d54 | DAT_01d22c5c
    MOV EBX,dword ptr [0x005fba18]      ; 004b6d5a | DAT_005fba18
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b6d60
    MOV EDX,EBX                         ; 004b6d67
    SUB EAX,EDI                         ; 004b6d69
    SAR EDX,0x1f                        ; 004b6d6b
    ADD EAX,EAX                         ; 004b6d6e
    MOV EDI,0x3                         ; 004b6d70
    MOV [0x01d22c58],EAX                ; 004b6d75 | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6d7a
    IDIV EDI                            ; 004b6d7c
    ADD dword ptr [0x01d22c54],EAX      ; 004b6d7e | DAT_01d22c54
    PUSH 0x5c23f6                       ; 004b6d84 | = "Previous item"
        ;   Label: LAB_004b6d84
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6d89
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6d8e
    PUSH EAX                            ; 004b6d91
    MOV ESI,dword ptr [ESI + 0xa0]      ; 004b6d92
    PUSH ESI                            ; 004b6d98
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6d99
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6d9e
    PUSH EAX                            ; 004b6da1
    PUSH 0x5c2240                       ; 004b6da2 | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x150c]              ; 004b6da7
    PUSH EAX                            ; 004b6dae
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6daf
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6db4
    PUSH -0x1                           ; 004b6db7
    MOV EAX,[0x01d22c58]                ; 004b6db9 | DAT_01d22c58
    PUSH 0x0                            ; 004b6dbe
    ADD EAX,0x2                         ; 004b6dc0
    PUSH EAX                            ; 004b6dc3
    MOV EAX,[0x01d22c54]                ; 004b6dc4 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6dc9
    PUSH EAX                            ; 004b6dcc
    LEA EAX,[ESP + 0x1510]              ; 004b6dcd
    PUSH EAX                            ; 004b6dd4
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6dd5 | DAT_01549aa8
    PUSH ECX                            ; 004b6ddb
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6ddc
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6de1
    PUSH -0x1                           ; 004b6de4
    PUSH 0x7                            ; 004b6de6
    MOV ESI,dword ptr [0x01d22c58]      ; 004b6de8 | DAT_01d22c58
    PUSH ESI                            ; 004b6dee
    MOV EDI,dword ptr [0x01d22c54]      ; 004b6def | DAT_01d22c54
    PUSH EDI                            ; 004b6df5
    LEA EAX,[ESP + 0x1510]              ; 004b6df6
    PUSH EAX                            ; 004b6dfd
    MOV EBP,dword ptr [0x01549aa8]      ; 004b6dfe | DAT_01549aa8
    PUSH EBP                            ; 004b6e04
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6e05
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6e0a | DAT_01d22c5c
    MOV EDX,dword ptr [0x01d22c58]      ; 004b6e0f | DAT_01d22c58
    MOV ESI,dword ptr [0x005fba1c]      ; 004b6e15 | DAT_005fba1c
    ADD EDX,EAX                         ; 004b6e1b
    SHL EAX,0x2                         ; 004b6e1d
    ADD ESP,0x18                        ; 004b6e20
    SUB ESI,EAX                         ; 004b6e23
    MOV dword ptr [0x01d22c58],EDX      ; 004b6e25 | DAT_01d22c58
    CMP ESI,EDX                         ; 004b6e2b
    JL 0x004b6eec                       ; 004b6e2d
        ;   XREF to: 004b6eec (CONDITIONAL_JUMP)  ; LAB_004b6eec
    MOV EBX,dword ptr [0x005fba18]      ; 004b6e33 | DAT_005fba18
    ADD ESP,0x1c00                      ; 004b6e39
    POP EBP                             ; 004b6e3f
    POP EDI                             ; 004b6e40
    POP ESI                             ; 004b6e41
    POP EBX                             ; 004b6e42
    RET                                 ; 004b6e43
    PUSH 0x5c22d9                       ; 004b6e44 | DAT_005c22d9
        ;   Label: LAB_004b6e44
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004b6e49
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004b6e4e
    PUSH EAX                            ; 004b6e51
    MOV EDI,dword ptr [ESI + 0x30]      ; 004b6e52
    PUSH EDI                            ; 004b6e55
    CALL core_menu.cpp_FUN_004eaa60     ; 004b6e56
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004b6e5b
    PUSH EAX                            ; 004b6e5e
    PUSH 0x5c2240                       ; 004b6e5f | s_s_s_005c223f+1
    LEA EAX,[ESP + 0x110c]              ; 004b6e64
    PUSH EAX                            ; 004b6e6b
    CALL crt_unknown.c_FUN_005a28c0     ; 004b6e6c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004b6e71
    PUSH -0x1                           ; 004b6e74
    MOV EAX,[0x01d22c58]                ; 004b6e76 | DAT_01d22c58
    PUSH 0x0                            ; 004b6e7b
    ADD EAX,0x2                         ; 004b6e7d
    PUSH EAX                            ; 004b6e80
    MOV EAX,[0x01d22c54]                ; 004b6e81 | DAT_01d22c54
    ADD EAX,0x2                         ; 004b6e86
    PUSH EAX                            ; 004b6e89
    LEA EAX,[ESP + 0x1110]              ; 004b6e8a
    PUSH EAX                            ; 004b6e91
    MOV EBP,dword ptr [0x01549aa8]      ; 004b6e92 | DAT_01549aa8
    PUSH EBP                            ; 004b6e98
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6e99
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004b6e9e
    PUSH -0x1                           ; 004b6ea1
    PUSH 0x7                            ; 004b6ea3
    MOV EAX,[0x01d22c58]                ; 004b6ea5 | DAT_01d22c58
    PUSH EAX                            ; 004b6eaa
    MOV EDX,dword ptr [0x01d22c54]      ; 004b6eab | DAT_01d22c54
    PUSH EDX                            ; 004b6eb1
    LEA EAX,[ESP + 0x1110]              ; 004b6eb2
    PUSH EAX                            ; 004b6eb9
    MOV ECX,dword ptr [0x01549aa8]      ; 004b6eba | DAT_01549aa8
    PUSH ECX                            ; 004b6ec0
    CALL engine_font.cpp_FUN_004b0a20   ; 004b6ec1
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    MOV EAX,[0x01d22c5c]                ; 004b6ec6 | DAT_01d22c5c
    ADD dword ptr [0x01d22c58],EAX      ; 004b6ecb | DAT_01d22c58
    SHL EAX,0x2                         ; 004b6ed1
    MOV EDI,dword ptr [0x005fba1c]      ; 004b6ed4 | DAT_005fba1c
    MOV EBP,dword ptr [0x01d22c58]      ; 004b6eda | DAT_01d22c58
    SUB EDI,EAX                         ; 004b6ee0
    ADD ESP,0x18                        ; 004b6ee2
    CMP EDI,EBP                         ; 004b6ee5
    JMP 0x004b5a0a                      ; 004b6ee7
        ;   XREF to: 004b5a0a (UNCONDITIONAL_JUMP)  ; LAB_004b5a0a
    MOV ESI,dword ptr [0x01d22c5c]      ; 004b6eec | DAT_01d22c5c
        ;   Label: LAB_004b6eec
    MOV EBX,dword ptr [0x005fba18]      ; 004b6ef2 | DAT_005fba18
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b6ef8
    MOV EDX,EBX                         ; 004b6eff
    SUB EAX,ESI                         ; 004b6f01
    SAR EDX,0x1f                        ; 004b6f03
    ADD EAX,EAX                         ; 004b6f06
    MOV ESI,0x3                         ; 004b6f08
    MOV [0x01d22c58],EAX                ; 004b6f0d | DAT_01d22c58
    MOV EAX,EBX                         ; 004b6f12
    IDIV ESI                            ; 004b6f14
    ADD dword ptr [0x01d22c54],EAX      ; 004b6f16 | DAT_01d22c54
    MOV EBX,dword ptr [0x005fba18]      ; 004b6f1c | DAT_005fba18
    ADD ESP,0x1c00                      ; 004b6f22
    POP EBP                             ; 004b6f28
    POP EDI                             ; 004b6f29
    POP ESI                             ; 004b6f2a
    POP EBX                             ; 004b6f2b
    RET                                 ; 004b6f2c

