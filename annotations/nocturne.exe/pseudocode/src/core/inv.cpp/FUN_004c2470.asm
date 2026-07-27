; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004c2470(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x690]:8  local_690
; undefined8       Stack[-0x688]:8  local_688
; undefined4       Stack[-0x680]:4  local_680
; undefined4       Stack[-0x67c]:4  local_67c
; undefined        Stack[-0x678]:1  local_678
; undefined        Stack[-0x578]:1  local_578
; undefined        Stack[-0x478]:1  local_478
; undefined        Stack[-0x378]:1  local_378
; undefined        Stack[-0x278]:1  local_278
; undefined        Stack[-0x178]:1  local_178
; undefined1       Stack[-0x177]:1  local_177
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
; XREF[1]:
;   core_game.cpp_FUN_0049cc10 at 0049cfc3
;
; Referenced Globals:
;   TerminatedCString s_d_0058746d
;   TerminatedCString s_CTommyGun_00587472
;   TerminatedCString s_CShotgun_0058747c
;   TerminatedCString s_CElephantGun_00587485
;   TerminatedCString s_CGun_00587492
;   TerminatedCString s_d_00587497
;   TerminatedCString s_s_d_0058749a
;   TerminatedCString s_s_s_005874a0
;   TerminatedCString s_s_s_s_005874a7
;   TerminatedCString s_are_loaded_005874b1
;   TerminatedCString s_s_s_005874be
;   TerminatedCString s_d_x_3_0f_005874c5
;   TerminatedCString s_s_005874d1
;   TerminatedCString s_s_s_005874d4
;   float FLOAT_005874dd = 65535
;   ... and 21 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
;   core_inv.cpp_getItemDisplayName_FUN_004beca0
;   core_inv.cpp_getItemIconName_FUN_004bed10
;   core_inv.cpp_loadAssets_FUN_004befa0
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2470
        ;   Label: core_inv.cpp_FUN_004c2470
    PUSH ESI                            ; 004c2471
    PUSH EDI                            ; 004c2472
    PUSH EBP                            ; 004c2473
    MOV EBP,ESP                         ; 004c2474
    SUB ESP,0x678                       ; 004c2476
    AND ESP,0xfffffff8                  ; 004c247c
    MOV EAX,[0x005b9354]                ; 004c247f | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0x228],0x0     ; 004c2484 | DAT_01c77814
    JNZ 0x004c2dcc                      ; 004c248b
        ;   XREF to: 004c2dcc (CONDITIONAL_JUMP)  ; LAB_004c2dcc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2491
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c2494 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX + 0x4]       ; 004c249a
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c249d
    JNZ 0x004c2dcc                      ; 004c24a4
        ;   XREF to: 004c2dcc (CONDITIONAL_JUMP)  ; LAB_004c2dcc
    MOV EBX,dword ptr [0x005b7620]      ; 004c24aa | DAT_005b7620
    CMP EBX,dword ptr [0x01cc30a0]      ; 004c24b0 | DAT_01cc30a0
    JNZ 0x004c2dd3                      ; 004c24b6
        ;   XREF to: 004c2dd3 (CONDITIONAL_JUMP)  ; LAB_004c2dd3
    MOV EAX,[0x01c02594]                ; 004c24bc | DAT_01c02594
        ;   Label: LAB_004c24bc
    MOV EDI,dword ptr [0x005b7620]      ; 004c24c1 | DAT_005b7620
    XOR ESI,ESI                         ; 004c24c7
    MOV dword ptr [ESP + 0x61c],EAX     ; 004c24c9
    MOV EAX,[0x014b9904]                ; 004c24d0 | DAT_014b9904
    MOV dword ptr [0x01c02594],ESI      ; 004c24d5 | DAT_01c02594
    MOV dword ptr [ESP + 0x644],EAX     ; 004c24db
    CMP EDI,0x180                       ; 004c24e2
    JGE 0x004c24fa                      ; 004c24e8
        ;   XREF to: 004c24fa (CONDITIONAL_JUMP)  ; LAB_004c24fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c24ea
    CMP dword ptr [EAX + 0x44c],0x0     ; 004c24ed
    JZ 0x004c2ddd                       ; 004c24f4
        ;   XREF to: 004c2ddd (CONDITIONAL_JUMP)  ; LAB_004c2ddd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c24fa
        ;   Label: LAB_004c24fa
    CMP dword ptr [EAX + 0x330],0x0     ; 004c24fd
    JZ 0x004c27a0                       ; 004c2504
        ;   XREF to: 004c27a0 (CONDITIONAL_JUMP)  ; LAB_004c27a0
    FLD float ptr [EAX + 0x338]         ; 004c250a
    FLDZ                                ; 004c2510
    FCOMPP                              ; 004c2512
    FNSTSW AX                           ; 004c2514
    SAHF                                ; 004c2516
    JNC 0x004c27a0                      ; 004c2517
        ;   XREF to: 004c27a0 (CONDITIONAL_JUMP)  ; LAB_004c27a0
    MOV EBX,0x10                        ; 004c251d
    MOV ESI,0x70                        ; 004c2522
    MOV EAX,[0x005bab60]                ; 004c2527 | INT_005bab60
    MOV EDI,dword ptr [0x005b7620]      ; 004c252c | DAT_005b7620
    MOV dword ptr [ESP + 0x638],EAX     ; 004c2532
    MOV dword ptr [ESP + 0x640],EBX     ; 004c2539
    MOV dword ptr [ESP + 0x630],ESI     ; 004c2540
    MOV EAX,[0x005bab64]                ; 004c2547 | INT_005bab64
    MOV EBX,0x24                        ; 004c254c
    MOV dword ptr [ESP + 0x634],EAX     ; 004c2551
    CMP EDI,0x180                       ; 004c2558
    JGE 0x004c2570                      ; 004c255e
        ;   XREF to: 004c2570 (CONDITIONAL_JUMP)  ; LAB_004c2570
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2560
    CMP dword ptr [EAX + 0x44c],0x0     ; 004c2563
    JZ 0x004c2dee                       ; 004c256a
        ;   XREF to: 004c2dee (CONDITIONAL_JUMP)  ; LAB_004c2dee
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2570
        ;   Label: LAB_004c2570
    MOV EDI,0xffff                      ; 004c2573
    FLD float ptr [EAX + 0x338]         ; 004c2578
    FLD1                                ; 004c257e
    MOV dword ptr [ESP + 0x620],EDI     ; 004c2580
    FCOMPP                              ; 004c2587
    FNSTSW AX                           ; 004c2589
    SAHF                                ; 004c258b
    JBE 0x004c25a9                      ; 004c258c
        ;   XREF to: 004c25a9 (CONDITIONAL_JUMP)  ; LAB_004c25a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c258e
    FLD float ptr [EAX + 0x338]         ; 004c2591
    FMUL float ptr [0x005874dd]         ; 004c2597 | FLOAT_005874dd
    CALL crt_math.c_round_FUN_00563a30  ; 004c259d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x620]       ; 004c25a2
    MOV EAX,[0x01cc36c0]                ; 004c25a9 | g_CLightGunActorType_01cc3688.name_hash
        ;   Label: LAB_004c25a9
    PUSH EAX                            ; 004c25ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c25af
    MOV EDX,dword ptr [EAX + 0x330]     ; 004c25b2
    PUSH EDX                            ; 004c25b8
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c25b9
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c25be
    TEST EAX,EAX                        ; 004c25c1
    JZ 0x004c2e3e                       ; 004c25c3
        ;   XREF to: 004c2e3e (CONDITIONAL_JUMP)  ; LAB_004c2e3e
    FLD float ptr [EAX + 0x57c]         ; 004c25c9
    FMUL double ptr [0x005874e1]        ; 004c25cf | DOUBLE_005874e1
    CALL crt_math.c_round_FUN_00563a30  ; 004c25d5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x674]       ; 004c25da
    MOV ESI,dword ptr [ESP + 0x674]     ; 004c25e1
    PUSH ESI                            ; 004c25e8
    PUSH 0x58746d                       ; 004c25e9 | = "%d%%"
    LEA EAX,[ESP + 0x218]               ; 004c25ee
    PUSH EAX                            ; 004c25f5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c25f6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004c25fb
    PUSH 0x58                           ; 004c25fe
    MOV EDI,dword ptr [ESP + 0x648]     ; 004c2600
    PUSH EDI                            ; 004c2607
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c2608
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c260d
    MOV EBX,EAX                         ; 004c2610
    LEA EAX,[ESP + 0x210]               ; 004c2612
    PUSH EAX                            ; 004c2619
    PUSH EDI                            ; 004c261a
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c261b
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 004c2620
    MOV EDX,dword ptr [0x005b7620]      ; 004c2623 | DAT_005b7620
    MOV ECX,dword ptr [ESP + 0x640]     ; 004c2629
    PUSH 0x0                            ; 004c2630
    SUB EDX,ECX                         ; 004c2632
    PUSH 0xf8                           ; 004c2634
    SUB EDX,EBX                         ; 004c2639
    PUSH EDX                            ; 004c263b
    MOV EDX,dword ptr [0x005b761c]      ; 004c263c | DAT_005b761c
    SUB EDX,ECX                         ; 004c2642
    SUB EDX,EAX                         ; 004c2644
    PUSH EDX                            ; 004c2646
    LEA EAX,[ESP + 0x220]               ; 004c2647
    PUSH EAX                            ; 004c264e
    PUSH EDI                            ; 004c264f
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c2650
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
        ;   Label: LAB_004c2650
    ADD ESP,0x18                        ; 004c2655
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2658
        ;   Label: LAB_004c2658
    CMP dword ptr [EAX + 0x44c],0x0     ; 004c265b
    JZ 0x004c27a0                       ; 004c2662
        ;   XREF to: 004c27a0 (CONDITIONAL_JUMP)  ; LAB_004c27a0
    PUSH 0x3                            ; 004c2668
    MOV EDX,dword ptr [EAX + 0x330]     ; 004c266a
    PUSH EDX                            ; 004c2670
    PUSH EAX                            ; 004c2671
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0 ; 004c2672
        ;   XREF to: 004c1bf0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0()
    ADD ESP,0xc                         ; 004c2677
    TEST EAX,EAX                        ; 004c267a
    JZ 0x004c3056                       ; 004c267c
        ;   XREF to: 004c3056 (CONDITIONAL_JUMP)  ; LAB_004c3056
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2682
    MOV EDX,dword ptr [EAX + 0x330]     ; 004c2685
    PUSH EDX                            ; 004c268b
    CALL core_inv.cpp_getItemIconName_FUN_004bed10 ; 004c268c
        ;   XREF to: 004bed10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemIconName_FUN_004bed10()
    ADD ESP,0x4                         ; 004c2691
    PUSH EAX                            ; 004c2694
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2695
    MOV ECX,dword ptr [EAX + 0x330]     ; 004c2698
    PUSH ECX                            ; 004c269e
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004c269f
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004beca0()
    ADD ESP,0x4                         ; 004c26a4
    PUSH EAX                            ; 004c26a7
    PUSH 0x5874a0                       ; 004c26a8 | = "%s\n\n%s"
    LEA EAX,[ESP + 0x51c]               ; 004c26ad
        ;   Label: LAB_004c26ad
    PUSH EAX                            ; 004c26b4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c26b5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004c26ba
    MOV EAX,dword ptr [ESP + 0x644]     ; 004c26bd
        ;   Label: LAB_004c26bd
    MOV EBX,dword ptr [ESP + 0x630]     ; 004c26c4
    MOV dword ptr [ESP + 0x660],EAX     ; 004c26cb
    MOV EAX,dword ptr [ESP + 0x638]     ; 004c26d2
    SUB EAX,EBX                         ; 004c26d9
    PUSH EAX                            ; 004c26db
    PUSH 0x100                          ; 004c26dc
    PUSH 0xa                            ; 004c26e1
    PUSH 0x1cae580                      ; 004c26e3
    LEA EAX,[ESP + 0x520]               ; 004c26e8
    PUSH EAX                            ; 004c26ef
    MOV ESI,dword ptr [ESP + 0x658]     ; 004c26f0
    PUSH ESI                            ; 004c26f7
    CALL engine_font.cpp_CBitFont_wrapText_FUN_00492f30 ; 004c26f8
        ;   XREF to: 00492f30 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_wrapText_FUN_00492f30()
    ADD ESP,0x18                        ; 004c26fd
    PUSH 0x58                           ; 004c2700
    MOV EDI,dword ptr [ESP + 0x648]     ; 004c2702
    PUSH EDI                            ; 004c2709
    MOV ESI,EAX                         ; 004c270a
    MOV dword ptr [ESP + 0x660],EAX     ; 004c270c
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c2713
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c2718
    MOV EBX,dword ptr [0x005b7620]      ; 004c271b | DAT_005b7620
    MOV dword ptr [ESP + 0x654],EAX     ; 004c2721
    MOV EAX,dword ptr [ESP + 0x634]     ; 004c2728
    MOV ECX,dword ptr [ESP + 0x638]     ; 004c272f
    SUB EBX,EAX                         ; 004c2736
    MOV EAX,[0x005b761c]                ; 004c2738 | DAT_005b761c
    MOV EDX,dword ptr [ESP + 0x640]     ; 004c273d
    SUB EAX,ECX                         ; 004c2744
    ADD EBX,EDX                         ; 004c2746
    ADD EDX,EAX                         ; 004c2748
    XOR EDI,EDI                         ; 004c274a
    MOV dword ptr [ESP + 0x65c],EDX     ; 004c274c
    TEST ESI,ESI                        ; 004c2753
    JLE 0x004c27a0                      ; 004c2755
        ;   XREF to: 004c27a0 (CONDITIONAL_JUMP)  ; LAB_004c27a0
    MOV ESI,0x1cae580                   ; 004c2757
    PUSH 0x0                            ; 004c275c
        ;   Label: LAB_004c275c
    PUSH 0xf8                           ; 004c275e
    PUSH EBX                            ; 004c2763
    MOV EAX,dword ptr [ESP + 0x668]     ; 004c2764
    PUSH EAX                            ; 004c276b
    PUSH ESI                            ; 004c276c
    MOV EDX,dword ptr [ESP + 0x674]     ; 004c276d
    PUSH EDX                            ; 004c2774
    INC EDI                             ; 004c2775
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c2776
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c277b
    ADD ESI,0x100                       ; 004c277e
    MOV ECX,dword ptr [ESP + 0x654]     ; 004c2784
    MOV EAX,dword ptr [ESP + 0x658]     ; 004c278b
    ADD EBX,ECX                         ; 004c2792
    CMP EDI,EAX                         ; 004c2794
    JL 0x004c275c                       ; 004c2796
        ;   XREF to: 004c275c (CONDITIONAL_JUMP)  ; LAB_004c275c
    LEA EAX,[EAX]                       ; 004c2798
    MOV EDX,EDX                         ; 004c279e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c27a0
        ;   Label: LAB_004c27a0
    CMP dword ptr [EAX + 0x334],0x0     ; 004c27a3
    JZ 0x004c2a80                       ; 004c27aa
        ;   XREF to: 004c2a80 (CONDITIONAL_JUMP)  ; LAB_004c2a80
    FLD float ptr [EAX + 0x33c]         ; 004c27b0
    FLDZ                                ; 004c27b6
    FCOMPP                              ; 004c27b8
    FNSTSW AX                           ; 004c27ba
    SAHF                                ; 004c27bc
    JNC 0x004c2a80                      ; 004c27bd
        ;   XREF to: 004c2a80 (CONDITIONAL_JUMP)  ; LAB_004c2a80
    MOV EBX,0x70                        ; 004c27c3
    MOV ECX,0x10                        ; 004c27c8
    MOV ESI,dword ptr [0x005bab64]      ; 004c27cd | INT_005bab64
    MOV EDI,dword ptr [0x005b7620]      ; 004c27d3 | DAT_005b7620
    MOV dword ptr [ESP + 0x62c],EBX     ; 004c27d9
    MOV dword ptr [ESP + 0x63c],ECX     ; 004c27e0
    MOV EBX,dword ptr [0x005bab60]      ; 004c27e7 | INT_005bab60
    CMP EDI,0x180                       ; 004c27ed
    JGE 0x004c2805                      ; 004c27f3
        ;   XREF to: 004c2805 (CONDITIONAL_JUMP)  ; LAB_004c2805
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c27f5
    CMP dword ptr [EAX + 0x44c],0x0     ; 004c27f8
    JZ 0x004c3146                       ; 004c27ff
        ;   XREF to: 004c3146 (CONDITIONAL_JUMP)  ; LAB_004c3146
    MOV EAX,[0x01cae0d0]                ; 004c2805 | g_CHealthItemActorType_01cae098.name_hash
        ;   Label: LAB_004c2805
    PUSH EAX                            ; 004c280a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c280b
    MOV EDX,dword ptr [EAX + 0x334]     ; 004c280e
    PUSH EDX                            ; 004c2814
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c2815
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c281a
    TEST EAX,EAX                        ; 004c281d
    JZ 0x004c28b5                       ; 004c281f
        ;   XREF to: 004c28b5 (CONDITIONAL_JUMP)  ; LAB_004c28b5
    SUB ESP,0x8                         ; 004c2825
    FLD float ptr [EAX + 0x2d0]         ; 004c2828
    FSTP double ptr [ESP]               ; 004c282e
    MOV ECX,dword ptr [EAX + 0x2cc]     ; 004c2831
    PUSH ECX                            ; 004c2837
    PUSH 0x5874c5                       ; 004c2838 | = "%d x%3.0f%%"
    LEA EAX,[ESP + 0x320]               ; 004c283d
    PUSH EAX                            ; 004c2844
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c2845
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 004c284a
    PUSH 0x58                           ; 004c284d
    MOV EDI,dword ptr [ESP + 0x648]     ; 004c284f
    PUSH EDI                            ; 004c2856
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c2857
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c285c
    MOV EDI,EAX                         ; 004c285f
    LEA EAX,[ESP + 0x310]               ; 004c2861
    PUSH EAX                            ; 004c2868
    MOV EAX,dword ptr [ESP + 0x648]     ; 004c2869
    PUSH EAX                            ; 004c2870
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c2871
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 004c2876
    MOV EDX,dword ptr [0x005b7620]      ; 004c2879 | DAT_005b7620
    MOV ECX,dword ptr [ESP + 0x63c]     ; 004c287f
    PUSH 0x0                            ; 004c2886
    SUB EDX,ECX                         ; 004c2888
    PUSH 0xf8                           ; 004c288a
    SUB EDX,EDI                         ; 004c288f
    PUSH EDX                            ; 004c2891
    MOV EDX,dword ptr [0x005b761c]      ; 004c2892 | DAT_005b761c
    SUB EDX,ECX                         ; 004c2898
    SUB EDX,EAX                         ; 004c289a
    PUSH EDX                            ; 004c289c
    LEA EAX,[ESP + 0x320]               ; 004c289d
    PUSH EAX                            ; 004c28a4
    MOV EAX,dword ptr [ESP + 0x658]     ; 004c28a5
    PUSH EAX                            ; 004c28ac
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c28ad
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c28b2
    MOV EDX,dword ptr [0x01c08cc4]      ; 004c28b5 | g_CFilmReelActorType_01c08c8c.name_hash
        ;   Label: LAB_004c28b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c28bb
    PUSH EDX                            ; 004c28be
    MOV ECX,dword ptr [EAX + 0x334]     ; 004c28bf
    PUSH ECX                            ; 004c28c5
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c28c6
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c28cb
    TEST EAX,EAX                        ; 004c28ce
    JZ 0x004c295d                       ; 004c28d0
        ;   XREF to: 004c295d (CONDITIONAL_JUMP)  ; LAB_004c295d
    PUSH EAX                            ; 004c28d6
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004c28d7
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004beca0()
    ADD ESP,0x4                         ; 004c28dc
    PUSH EAX                            ; 004c28df
    PUSH 0x5874d1                       ; 004c28e0 | = "%s"
    LEA EAX,[ESP + 0x418]               ; 004c28e5
    PUSH EAX                            ; 004c28ec
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c28ed
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004c28f2
    PUSH 0x58                           ; 004c28f5
    MOV EDI,dword ptr [ESP + 0x648]     ; 004c28f7
    PUSH EDI                            ; 004c28fe
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c28ff
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c2904
    MOV EDI,EAX                         ; 004c2907
    LEA EAX,[ESP + 0x410]               ; 004c2909
    PUSH EAX                            ; 004c2910
    MOV EAX,dword ptr [ESP + 0x648]     ; 004c2911
    PUSH EAX                            ; 004c2918
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c2919
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 004c291e
    MOV EDX,dword ptr [0x005b7620]      ; 004c2921 | DAT_005b7620
    MOV ECX,dword ptr [ESP + 0x63c]     ; 004c2927
    PUSH 0x0                            ; 004c292e
    SUB EDX,ECX                         ; 004c2930
    PUSH 0xf8                           ; 004c2932
    SUB EDX,EDI                         ; 004c2937
    PUSH EDX                            ; 004c2939
    MOV EDX,dword ptr [0x005b761c]      ; 004c293a | DAT_005b761c
    SUB EDX,ECX                         ; 004c2940
    SUB EDX,EAX                         ; 004c2942
    PUSH EDX                            ; 004c2944
    LEA EAX,[ESP + 0x420]               ; 004c2945
    PUSH EAX                            ; 004c294c
    MOV EAX,dword ptr [ESP + 0x658]     ; 004c294d
    PUSH EAX                            ; 004c2954
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c2955
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c295a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c295d
        ;   Label: LAB_004c295d
    CMP dword ptr [EAX + 0x44c],0x0     ; 004c2960
    JZ 0x004c2a80                       ; 004c2967
        ;   XREF to: 004c2a80 (CONDITIONAL_JUMP)  ; LAB_004c2a80
    MOV ECX,dword ptr [EAX + 0x334]     ; 004c296d
    PUSH ECX                            ; 004c2973
    CALL core_inv.cpp_getItemIconName_FUN_004bed10 ; 004c2974
        ;   XREF to: 004bed10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemIconName_FUN_004bed10()
    ADD ESP,0x4                         ; 004c2979
    PUSH EAX                            ; 004c297c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c297d
    MOV EDI,dword ptr [EAX + 0x334]     ; 004c2980
    PUSH EDI                            ; 004c2986
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004c2987
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004beca0()
    ADD ESP,0x4                         ; 004c298c
    PUSH EAX                            ; 004c298f
    PUSH 0x5874d4                       ; 004c2990 | = "%s\n\n%s"
    LEA EAX,[ESP + 0x11c]               ; 004c2995
    PUSH EAX                            ; 004c299c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c299d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004c29a2
    MOV EAX,dword ptr [ESP + 0x644]     ; 004c29a5
    MOV EDX,dword ptr [ESP + 0x62c]     ; 004c29ac
    MOV dword ptr [ESP + 0x664],EAX     ; 004c29b3
    MOV EAX,EBX                         ; 004c29ba
    SUB EAX,EDX                         ; 004c29bc
    PUSH EAX                            ; 004c29be
    PUSH 0x100                          ; 004c29bf
    PUSH 0xa                            ; 004c29c4
    PUSH 0x1caef80                      ; 004c29c6
    LEA EAX,[ESP + 0x120]               ; 004c29cb
    PUSH EAX                            ; 004c29d2
    MOV ECX,dword ptr [ESP + 0x658]     ; 004c29d3
    PUSH ECX                            ; 004c29da
    CALL engine_font.cpp_CBitFont_wrapText_FUN_00492f30 ; 004c29db
        ;   XREF to: 00492f30 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_wrapText_FUN_00492f30()
    MOV dword ptr [ESP + 0x68c],EAX     ; 004c29e0
    ADD ESP,0x18                        ; 004c29e7
    PUSH 0x58                           ; 004c29ea
    MOV EDI,dword ptr [ESP + 0x648]     ; 004c29ec
    PUSH EDI                            ; 004c29f3
    MOV dword ptr [ESP + 0x650],EAX     ; 004c29f4
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c29fb
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c2a00
    MOV EDI,dword ptr [0x005b7620]      ; 004c2a03 | DAT_005b7620
    MOV dword ptr [ESP + 0x64c],EAX     ; 004c2a09
    SUB EDI,ESI                         ; 004c2a10
    ADD EDI,dword ptr [ESP + 0x63c]     ; 004c2a12
    MOV EAX,[0x005b761c]                ; 004c2a19 | DAT_005b761c
    MOV EDX,dword ptr [ESP + 0x63c]     ; 004c2a1e
    SUB EAX,EBX                         ; 004c2a25
    ADD EDX,EAX                         ; 004c2a27
    MOV dword ptr [ESP + 0x650],EDX     ; 004c2a29
    MOV EDX,dword ptr [ESP + 0x674]     ; 004c2a30
    XOR ESI,ESI                         ; 004c2a37
    TEST EDX,EDX                        ; 004c2a39
    JLE 0x004c2a80                      ; 004c2a3b
        ;   XREF to: 004c2a80 (CONDITIONAL_JUMP)  ; LAB_004c2a80
    MOV EBX,0x1caef80                   ; 004c2a3d
    PUSH 0x0                            ; 004c2a42
        ;   Label: LAB_004c2a42
    PUSH 0xf8                           ; 004c2a44
    PUSH EDI                            ; 004c2a49
    MOV ECX,dword ptr [ESP + 0x65c]     ; 004c2a4a
    PUSH ECX                            ; 004c2a51
    PUSH EBX                            ; 004c2a52
    MOV EAX,dword ptr [ESP + 0x678]     ; 004c2a53
    PUSH EAX                            ; 004c2a5a
    INC ESI                             ; 004c2a5b
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c2a5c
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c2a61
    ADD EBX,0x100                       ; 004c2a64
    MOV EDX,dword ptr [ESP + 0x64c]     ; 004c2a6a
    MOV ECX,dword ptr [ESP + 0x648]     ; 004c2a71
    ADD EDI,EDX                         ; 004c2a78
    CMP ESI,ECX                         ; 004c2a7a
    JL 0x004c2a42                       ; 004c2a7c
        ;   XREF to: 004c2a42 (CONDITIONAL_JUMP)  ; LAB_004c2a42
    MOV EAX,EAX                         ; 004c2a7e
    MOV EAX,[0x005b9354]                ; 004c2a80 | DAT_005b9354
        ;   Label: LAB_004c2a80
    CMP dword ptr [EAX + 0x244],0x0     ; 004c2a85 | DAT_01c77830
    JZ 0x004c317d                       ; 004c2a8c
        ;   XREF to: 004c317d (CONDITIONAL_JUMP)  ; LAB_004c317d
    MOV EAX,[0x005b7620]                ; 004c2a92 | DAT_005b7620
        ;   Label: LAB_004c2a92
    SUB EAX,0x21                        ; 004c2a97
    MOV dword ptr [ESP + 0x610],EAX     ; 004c2a9a
    MOV EAX,[0x005b7620]                ; 004c2aa1 | DAT_005b7620
    MOV EDX,dword ptr [ESP + 0x610]     ; 004c2aa6
    SUB EAX,0x6                         ; 004c2aad
    SUB EDX,EAX                         ; 004c2ab0
    MOV dword ptr [ESP + 0x674],EDX     ; 004c2ab2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c2ab9
    FILD dword ptr [ESP + 0x674]        ; 004c2abc
    FMUL float ptr [EDX]                ; 004c2ac3
    FMUL double ptr [0x005874e9]        ; 004c2ac5 | DOUBLE_005874e9
    PUSH 0x2                            ; 004c2acb
    MOV dword ptr [ESP + 0x678],EAX     ; 004c2acd
    PUSH EAX                            ; 004c2ad4
    FILD dword ptr [ESP + 0x67c]        ; 004c2ad5
    FADDP                               ; 004c2adc
    PUSH 0x10                           ; 004c2ade
    CALL crt_math.c_round_FUN_00563a30  ; 004c2ae0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x61c]       ; 004c2ae5
    MOV EDI,dword ptr [ESP + 0x61c]     ; 004c2aec
    PUSH EDI                            ; 004c2af3
    PUSH 0x6                            ; 004c2af4
    MOV EBX,dword ptr [0x005b7620]      ; 004c2af6 | DAT_005b7620
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004c2afc
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_fillRectColor_FUN_00403e60()
    ADD ESP,0x14                        ; 004c2b01
    PUSH 0xffff                         ; 004c2b04
    SUB EBX,0x24                        ; 004c2b09
    PUSH EBX                            ; 004c2b0c
    PUSH 0x4                            ; 004c2b0d
    PUSH 0x1cc2fd8                      ; 004c2b0f
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c2b14
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
    ADD ESP,0x10                        ; 004c2b19
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2b1c
        ;   Label: LAB_004c2b1c
    FLD float ptr [EAX + 0x33c]         ; 004c2b1f
    FLDZ                                ; 004c2b25
    FCOMPP                              ; 004c2b27
    FNSTSW AX                           ; 004c2b29
    SAHF                                ; 004c2b2b
    JNC 0x004c318f                      ; 004c2b2c
        ;   XREF to: 004c318f (CONDITIONAL_JUMP)  ; LAB_004c318f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2b32
        ;   Label: LAB_004c2b32
    MOV EAX,dword ptr [EAX + 0x340]     ; 004c2b35
    MOV dword ptr [ESP + 0xc],EAX       ; 004c2b3b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2b3f
    FLD float ptr [EAX + 0x33c]         ; 004c2b42
    FCOMP float ptr [ESP + 0xc]         ; 004c2b48
    FNSTSW AX                           ; 004c2b4c
    SAHF                                ; 004c2b4e
    JBE 0x004c2b5e                      ; 004c2b4f
        ;   XREF to: 004c2b5e (CONDITIONAL_JUMP)  ; LAB_004c2b5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2b51
    MOV EAX,dword ptr [EAX + 0x33c]     ; 004c2b54
    MOV dword ptr [ESP + 0xc],EAX       ; 004c2b5a
    FLD float ptr [ESP + 0xc]           ; 004c2b5e
        ;   Label: LAB_004c2b5e
    MOV EAX,0xffff                      ; 004c2b62
    FLD1                                ; 004c2b67
    MOV dword ptr [ESP + 0x624],EAX     ; 004c2b69
    FCOMPP                              ; 004c2b70
    FNSTSW AX                           ; 004c2b72
    SAHF                                ; 004c2b74
    JBE 0x004c2b8d                      ; 004c2b75
        ;   XREF to: 004c2b8d (CONDITIONAL_JUMP)  ; LAB_004c2b8d
    FLD float ptr [ESP + 0xc]           ; 004c2b77
    FMUL float ptr [0x005874dd]         ; 004c2b7b | FLOAT_005874dd
    CALL crt_math.c_round_FUN_00563a30  ; 004c2b81
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x624]       ; 004c2b86
    MOV EAX,[0x01cae0e8]                ; 004c2b8d | DAT_01cae0e8
        ;   Label: LAB_004c2b8d
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004c2b92
    FLD float ptr [EAX + 0x2434]        ; 004c2b99
    FMUL double ptr [0x005874e9]        ; 004c2b9f | DOUBLE_005874e9
    FST float ptr [ESP + 0x8]           ; 004c2ba5
    FLDZ                                ; 004c2ba9
    FCOMPP                              ; 004c2bab
    FNSTSW AX                           ; 004c2bad
    SAHF                                ; 004c2baf
    JBE 0x004c2bb8                      ; 004c2bb0
        ;   XREF to: 004c2bb8 (CONDITIONAL_JUMP)  ; LAB_004c2bb8
    XOR EDX,EDX                         ; 004c2bb2
    MOV dword ptr [ESP + 0x8],EDX       ; 004c2bb4
    FLD float ptr [ESP + 0x8]           ; 004c2bb8
        ;   Label: LAB_004c2bb8
    FLD1                                ; 004c2bbc
    FCOMPP                              ; 004c2bbe
    FNSTSW AX                           ; 004c2bc0
    SAHF                                ; 004c2bc2
    JNC 0x004c2bcd                      ; 004c2bc3
        ;   XREF to: 004c2bcd (CONDITIONAL_JUMP)  ; LAB_004c2bcd
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004c2bc5
    MOV EBX,0x3f                        ; 004c2bcd
        ;   Label: LAB_004c2bcd
    MOV ESI,dword ptr [0x005b7620]      ; 004c2bd2 | DAT_005b7620
    MOV EDI,0x1b                        ; 004c2bd8
    CMP ESI,0x180                       ; 004c2bdd
    JGE 0x004c2bef                      ; 004c2be3
        ;   XREF to: 004c2bef (CONDITIONAL_JUMP)  ; LAB_004c2bef
    MOV EBX,0x1f                        ; 004c2be5
    MOV EDI,0xd                         ; 004c2bea
    MOV EAX,[0x005b761c]                ; 004c2bef | DAT_005b761c
        ;   Label: LAB_004c2bef
    SUB EAX,0x4                         ; 004c2bf4
    SUB EAX,EDI                         ; 004c2bf7
    MOV dword ptr [ESP + 0x614],EAX     ; 004c2bf9
    MOV EAX,dword ptr [ESP + 0x624]     ; 004c2c00
    MOV EDX,EAX                         ; 004c2c07
    SAR EDX,0x1f                        ; 004c2c09
    SUB EAX,EDX                         ; 004c2c0c
    SAR EAX,0x1                         ; 004c2c0e
    MOV dword ptr [ESP + 0x674],EBX     ; 004c2c10
    FILD dword ptr [ESP + 0x674]        ; 004c2c17
    FLD ST0                             ; 004c2c1e
    FMUL float ptr [ESP + 0x8]          ; 004c2c20
    DEC EDI                             ; 004c2c24
    PUSH EAX                            ; 004c2c25
    FSUBP                               ; 004c2c26
    PUSH EBX                            ; 004c2c28
    CALL crt_math.c_round_FUN_00563a30  ; 004c2c29
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EDI                            ; 004c2c2e
    FISTP dword ptr [ESP + 0x624]       ; 004c2c2f
    MOV EDI,dword ptr [ESP + 0x624]     ; 004c2c36
    PUSH EDI                            ; 004c2c3d
    PUSH 0x0                            ; 004c2c3e
    MOV ESI,EAX                         ; 004c2c40
    LEA EAX,[EDI + 0x4]                 ; 004c2c42
    PUSH EAX                            ; 004c2c45
    MOV EAX,dword ptr [ESP + 0x62c]     ; 004c2c46
    PUSH EAX                            ; 004c2c4d
    PUSH 0x1cc2fec                      ; 004c2c4e
    CALL engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0 ; 004c2c53
        ;   XREF to: 0040e8c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0()
    ADD ESP,0x20                        ; 004c2c58
    PUSH ESI                            ; 004c2c5b
    PUSH 0x4                            ; 004c2c5c
    MOV EDX,dword ptr [ESP + 0x61c]     ; 004c2c5e
    PUSH EDX                            ; 004c2c65
    PUSH 0x1cc3000                      ; 004c2c66
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c2c6b
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
    ADD ESP,0x10                        ; 004c2c70
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2c73
        ;   Label: LAB_004c2c73
    FLDZ                                ; 004c2c76
    FLD float ptr [EAX + 0x344]         ; 004c2c78
    FSTP double ptr [ESP]               ; 004c2c7e
    FCOMP double ptr [ESP]              ; 004c2c81
    FNSTSW AX                           ; 004c2c84
    SAHF                                ; 004c2c86
    JNC 0x004c2dc0                      ; 004c2c87
        ;   XREF to: 004c2dc0 (CONDITIONAL_JUMP)  ; LAB_004c2dc0
    MOV ECX,0xffff                      ; 004c2c8d
    FLD1                                ; 004c2c92
    MOV dword ptr [ESP + 0x628],ECX     ; 004c2c94
    FCOMP double ptr [ESP]              ; 004c2c9b
    FNSTSW AX                           ; 004c2c9e
    SAHF                                ; 004c2ca0
    JBE 0x004c2cb8                      ; 004c2ca1
        ;   XREF to: 004c2cb8 (CONDITIONAL_JUMP)  ; LAB_004c2cb8
    FLD double ptr [ESP]                ; 004c2ca3
    FMUL double ptr [0x005874f1]        ; 004c2ca6 | DOUBLE_005874f1
    CALL crt_math.c_round_FUN_00563a30  ; 004c2cac
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x628]       ; 004c2cb1
    MOV EBX,dword ptr [ESP + 0x628]     ; 004c2cb8
        ;   Label: LAB_004c2cb8
    PUSH EBX                            ; 004c2cbf
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004c2cc0
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    MOV EAX,[0x014b9904]                ; 004c2cc5 | DAT_014b9904
    MOV EDX,dword ptr [0x005bab64]      ; 004c2cca | INT_005bab64
    ADD ESP,0x4                         ; 004c2cd0
    MOV ESI,dword ptr [0x005b7620]      ; 004c2cd3 | DAT_005b7620
    MOV dword ptr [ESP + 0x670],EAX     ; 004c2cd9
    CMP ESI,0x180                       ; 004c2ce0
    JGE 0x004c2cff                      ; 004c2ce6
        ;   XREF to: 004c2cff (CONDITIONAL_JUMP)  ; LAB_004c2cff
    MOV EAX,EDX                         ; 004c2ce8
    SAR EDX,0x1f                        ; 004c2cea
    SUB EAX,EDX                         ; 004c2ced
    SAR EAX,0x1                         ; 004c2cef
    MOV EDX,EAX                         ; 004c2cf1
    MOV EAX,[0x014b990c]                ; 004c2cf3 | DAT_014b990c
    MOV dword ptr [ESP + 0x670],EAX     ; 004c2cf8
    MOV EAX,[0x005b761c]                ; 004c2cff | DAT_005b761c
        ;   Label: LAB_004c2cff
    SUB EAX,EDX                         ; 004c2d04
    SUB EAX,0x4                         ; 004c2d06
    PUSH EAX                            ; 004c2d09
    PUSH 0x100                          ; 004c2d0a
    PUSH 0xa                            ; 004c2d0f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2d11
    PUSH 0x1caf980                      ; 004c2d14
    ADD EAX,0x34c                       ; 004c2d19
    PUSH EAX                            ; 004c2d1e
    MOV EDI,dword ptr [ESP + 0x684]     ; 004c2d1f
    PUSH EDI                            ; 004c2d26
    CALL engine_font.cpp_CBitFont_wrapText_FUN_00492f30 ; 004c2d27
        ;   XREF to: 00492f30 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_wrapText_FUN_00492f30()
    ADD ESP,0x18                        ; 004c2d2c
    PUSH 0x58                           ; 004c2d2f
    PUSH EDI                            ; 004c2d31
    MOV EBX,EAX                         ; 004c2d32
    MOV dword ptr [ESP + 0x674],EAX     ; 004c2d34
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c2d3b
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c2d40
    MOV dword ptr [ESP + 0x668],EAX     ; 004c2d43
    IMUL EAX,EBX                        ; 004c2d4a
    MOV EDI,dword ptr [0x005b7620]      ; 004c2d4d | DAT_005b7620
    SUB EDI,0x4                         ; 004c2d53
    MOV EDX,dword ptr [0x014b990c]      ; 004c2d56 | DAT_014b990c
    SUB EDI,EAX                         ; 004c2d5c
    CMP EDX,dword ptr [ESP + 0x670]     ; 004c2d5e
    JNZ 0x004c2d70                      ; 004c2d65
        ;   XREF to: 004c2d70 (CONDITIONAL_JUMP)  ; LAB_004c2d70
    CMP dword ptr [0x01d16810],0x0      ; 004c2d67 | DAT_01d16810
    JNZ 0x004c2dc0                      ; 004c2d6e
        ;   XREF to: 004c2dc0 (CONDITIONAL_JUMP)  ; LAB_004c2dc0
    MOV ESI,dword ptr [ESP + 0x66c]     ; 004c2d70
        ;   Label: LAB_004c2d70
    XOR EBX,EBX                         ; 004c2d77
    TEST ESI,ESI                        ; 004c2d79
    JLE 0x004c2dc0                      ; 004c2d7b
        ;   XREF to: 004c2dc0 (CONDITIONAL_JUMP)  ; LAB_004c2dc0
    MOV ESI,0x1caf980                   ; 004c2d7d
    PUSH 0x0                            ; 004c2d82
        ;   Label: LAB_004c2d82
    PUSH 0xf8                           ; 004c2d84
    PUSH EDI                            ; 004c2d89
    PUSH 0x4                            ; 004c2d8a
    PUSH ESI                            ; 004c2d8c
    MOV EAX,dword ptr [ESP + 0x684]     ; 004c2d8d
    PUSH EAX                            ; 004c2d94
    INC EBX                             ; 004c2d95
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c2d96
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004c2d9b
    ADD ESI,0x100                       ; 004c2d9e
    MOV EDX,dword ptr [ESP + 0x668]     ; 004c2da4
    MOV ECX,dword ptr [ESP + 0x66c]     ; 004c2dab
    ADD EDI,EDX                         ; 004c2db2
    CMP EBX,ECX                         ; 004c2db4
    JL 0x004c2d82                       ; 004c2db6
        ;   XREF to: 004c2d82 (CONDITIONAL_JUMP)  ; LAB_004c2d82
    LEA EAX,[EAX]                       ; 004c2db8
    MOV EDX,EDX                         ; 004c2dbe
    MOV EAX,dword ptr [ESP + 0x61c]     ; 004c2dc0
        ;   Label: LAB_004c2dc0
    MOV [0x01c02594],EAX                ; 004c2dc7 | DAT_01c02594
    MOV ESP,EBP                         ; 004c2dcc
        ;   Label: LAB_004c2dcc
    POP EBP                             ; 004c2dce
    POP EDI                             ; 004c2dcf
    POP ESI                             ; 004c2dd0
    POP EBX                             ; 004c2dd1
    RET                                 ; 004c2dd2
    CALL core_inv.cpp_loadAssets_FUN_004befa0 ; 004c2dd3
        ;   XREF to: 004befa0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_loadAssets_FUN_004befa0()
        ;   Label: LAB_004c2dd3
    JMP 0x004c24bc                      ; 004c2dd8
        ;   XREF to: 004c24bc (UNCONDITIONAL_JUMP)  ; LAB_004c24bc
    MOV EAX,[0x014b990c]                ; 004c2ddd | DAT_014b990c
        ;   Label: LAB_004c2ddd
    MOV dword ptr [ESP + 0x644],EAX     ; 004c2de2
    JMP 0x004c24fa                      ; 004c2de9
        ;   XREF to: 004c24fa (UNCONDITIONAL_JUMP)  ; LAB_004c24fa
    MOV EAX,dword ptr [ESP + 0x638]     ; 004c2dee
        ;   Label: LAB_004c2dee
    MOV EDX,EAX                         ; 004c2df5
    SAR EDX,0x1f                        ; 004c2df7
    SUB EAX,EDX                         ; 004c2dfa
    SAR EAX,0x1                         ; 004c2dfc
    MOV dword ptr [ESP + 0x638],EAX     ; 004c2dfe
    MOV EAX,dword ptr [ESP + 0x634]     ; 004c2e05
    MOV EDX,EAX                         ; 004c2e0c
    SAR EDX,0x1f                        ; 004c2e0e
    SUB EAX,EDX                         ; 004c2e11
    SAR EAX,0x1                         ; 004c2e13
    MOV ESI,0x28                        ; 004c2e15
    MOV ECX,0x8                         ; 004c2e1a
    MOV EBX,0x12                        ; 004c2e1f
    MOV dword ptr [ESP + 0x630],ESI     ; 004c2e24
    MOV dword ptr [ESP + 0x640],ECX     ; 004c2e2b
    MOV dword ptr [ESP + 0x634],EAX     ; 004c2e32
    JMP 0x004c2570                      ; 004c2e39
        ;   XREF to: 004c2570 (UNCONDITIONAL_JUMP)  ; LAB_004c2570
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2e3e
        ;   Label: LAB_004c2e3e
    PUSH 0x3                            ; 004c2e41
    MOV ECX,dword ptr [EAX + 0x330]     ; 004c2e43
    PUSH ECX                            ; 004c2e49
    PUSH EAX                            ; 004c2e4a
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0 ; 004c2e4b
        ;   XREF to: 004c1bf0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0()
    ADD ESP,0xc                         ; 004c2e50
    TEST EAX,EAX                        ; 004c2e53
    JNZ 0x004c2658                      ; 004c2e55
        ;   XREF to: 004c2658 (CONDITIONAL_JUMP)  ; LAB_004c2658
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2e5b
    PUSH 0x587472                       ; 004c2e5e | = "CTommyGun"
    MOV ESI,dword ptr [0x005b761c]      ; 004c2e63 | DAT_005b761c
    MOV EDX,dword ptr [EAX + 0x330]     ; 004c2e69
    MOV EDI,dword ptr [0x005b7620]      ; 004c2e6f | DAT_005b7620
    PUSH EDX                            ; 004c2e75
    SUB ESI,EBX                         ; 004c2e76
    SUB EDI,EBX                         ; 004c2e78
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c2e7a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    XOR EBX,EBX                         ; 004c2e7f
    ADD ESP,0x8                         ; 004c2e81
    TEST EAX,EAX                        ; 004c2e84
    JZ 0x004c2e8d                       ; 004c2e86
        ;   XREF to: 004c2e8d (CONDITIONAL_JUMP)  ; LAB_004c2e8d
    MOV EBX,0x1cc3014                   ; 004c2e88
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2e8d
        ;   Label: LAB_004c2e8d
    PUSH 0x58747c                       ; 004c2e90 | = "CShotgun"
    MOV ECX,dword ptr [EAX + 0x330]     ; 004c2e95
    PUSH ECX                            ; 004c2e9b
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c2e9c
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c2ea1
    TEST EAX,EAX                        ; 004c2ea4
    JZ 0x004c2ead                       ; 004c2ea6
        ;   XREF to: 004c2ead (CONDITIONAL_JUMP)  ; LAB_004c2ead
    MOV EBX,0x1cc3064                   ; 004c2ea8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2ead
        ;   Label: LAB_004c2ead
    PUSH 0x587485                       ; 004c2eb0 | = "CElephantGun"
    MOV EDX,dword ptr [EAX + 0x330]     ; 004c2eb5
    PUSH EDX                            ; 004c2ebb
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c2ebc
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c2ec1
    TEST EAX,EAX                        ; 004c2ec4
    JZ 0x004c2ecd                       ; 004c2ec6
        ;   XREF to: 004c2ecd (CONDITIONAL_JUMP)  ; LAB_004c2ecd
    MOV EBX,0x1cc3064                   ; 004c2ec8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2ecd
        ;   Label: LAB_004c2ecd
    PUSH 0x587492                       ; 004c2ed0 | = "CGun"
    MOV ECX,dword ptr [EAX + 0x330]     ; 004c2ed5
    PUSH ECX                            ; 004c2edb
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c2edc
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c2ee1
    TEST EAX,EAX                        ; 004c2ee4
    JZ 0x004c2f5f                       ; 004c2ee6
        ;   XREF to: 004c2f5f (CONDITIONAL_JUMP)  ; LAB_004c2f5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2eec
    MOV EAX,dword ptr [EAX + 0x330]     ; 004c2eef
    CMP dword ptr [EAX + 0x564],0x0     ; 004c2ef5
    JNZ 0x004c2f03                      ; 004c2efc
        ;   XREF to: 004c2f03 (CONDITIONAL_JUMP)  ; LAB_004c2f03
    MOV EBX,0x1cc3028                   ; 004c2efe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2f03
        ;   Label: LAB_004c2f03
    MOV EAX,dword ptr [EAX + 0x330]     ; 004c2f06
    CMP dword ptr [EAX + 0x564],0x3     ; 004c2f0c
    JNZ 0x004c2f1a                      ; 004c2f13
        ;   XREF to: 004c2f1a (CONDITIONAL_JUMP)  ; LAB_004c2f1a
    MOV EBX,0x1cc303c                   ; 004c2f15
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2f1a
        ;   Label: LAB_004c2f1a
    MOV EAX,dword ptr [EAX + 0x330]     ; 004c2f1d
    CMP dword ptr [EAX + 0x564],0x7     ; 004c2f23
    JNZ 0x004c2f31                      ; 004c2f2a
        ;   XREF to: 004c2f31 (CONDITIONAL_JUMP)  ; LAB_004c2f31
    MOV EBX,0x1cc3050                   ; 004c2f2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2f31
        ;   Label: LAB_004c2f31
    MOV EAX,dword ptr [EAX + 0x330]     ; 004c2f34
    CMP dword ptr [EAX + 0x564],0x8     ; 004c2f3a
    JNZ 0x004c2f48                      ; 004c2f41
        ;   XREF to: 004c2f48 (CONDITIONAL_JUMP)  ; LAB_004c2f48
    MOV EBX,0x1cc3078                   ; 004c2f43
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2f48
        ;   Label: LAB_004c2f48
    MOV EAX,dword ptr [EAX + 0x330]     ; 004c2f4b
    CMP dword ptr [EAX + 0x564],0x1     ; 004c2f51
    JNZ 0x004c2f5f                      ; 004c2f58
        ;   XREF to: 004c2f5f (CONDITIONAL_JUMP)  ; LAB_004c2f5f
    MOV EBX,0x1cc308c                   ; 004c2f5a
    TEST EBX,EBX                        ; 004c2f5f
        ;   Label: LAB_004c2f5f
    JNZ 0x004c2ff7                      ; 004c2f61
        ;   XREF to: 004c2ff7 (CONDITIONAL_JUMP)  ; LAB_004c2ff7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2f67
        ;   Label: LAB_004c2f67
    FLD float ptr [EAX + 0x348]         ; 004c2f6a
    FLDZ                                ; 004c2f70
    FCOMPP                              ; 004c2f72
    FNSTSW AX                           ; 004c2f74
    SAHF                                ; 004c2f76
    JC 0x004c300f                       ; 004c2f77
        ;   XREF to: 004c300f (CONDITIONAL_JUMP)  ; LAB_004c300f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2f7d
        ;   Label: LAB_004c2f7d
    MOV EAX,dword ptr [EAX + 0x330]     ; 004c2f80
    MOV EDX,dword ptr [EAX + 0x560]     ; 004c2f86
    PUSH EDX                            ; 004c2f8c
    PUSH 0x587497                       ; 004c2f8d | = "%d"
    LEA EAX,[ESP + 0x18]                ; 004c2f92
    PUSH EAX                            ; 004c2f96
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c2f97
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004c2f9c
    PUSH 0x58                           ; 004c2f9f
        ;   Label: LAB_004c2f9f
    MOV ECX,dword ptr [ESP + 0x648]     ; 004c2fa1
    PUSH ECX                            ; 004c2fa8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004c2fa9
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004c2fae
    MOV EBX,EAX                         ; 004c2fb1
    LEA EAX,[ESP + 0x10]                ; 004c2fb3
    PUSH EAX                            ; 004c2fb7
    MOV ESI,dword ptr [ESP + 0x648]     ; 004c2fb8
    PUSH ESI                            ; 004c2fbf
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c2fc0
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 004c2fc5
    MOV EDX,dword ptr [0x005b7620]      ; 004c2fc8 | DAT_005b7620
    MOV EDI,dword ptr [ESP + 0x640]     ; 004c2fce
    PUSH 0x0                            ; 004c2fd5
    SUB EDX,EDI                         ; 004c2fd7
    PUSH 0xf8                           ; 004c2fd9
    SUB EDX,EBX                         ; 004c2fde
    PUSH EDX                            ; 004c2fe0
    MOV EDX,dword ptr [0x005b761c]      ; 004c2fe1 | DAT_005b761c
    SUB EDX,EDI                         ; 004c2fe7
    SUB EDX,EAX                         ; 004c2fe9
    PUSH EDX                            ; 004c2feb
    LEA EAX,[ESP + 0x20]                ; 004c2fec
    PUSH EAX                            ; 004c2ff0
    PUSH ESI                            ; 004c2ff1
    JMP 0x004c2650                      ; 004c2ff2
        ;   XREF to: 004c2650 (UNCONDITIONAL_JUMP)  ; LAB_004c2650
    MOV ECX,dword ptr [ESP + 0x620]     ; 004c2ff7
        ;   Label: LAB_004c2ff7
    PUSH ECX                            ; 004c2ffe
    PUSH EDI                            ; 004c2fff
    PUSH ESI                            ; 004c3000
    PUSH EBX                            ; 004c3001
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004c3002
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
    ADD ESP,0x10                        ; 004c3007
    JMP 0x004c2f67                      ; 004c300a
        ;   XREF to: 004c2f67 (UNCONDITIONAL_JUMP)  ; LAB_004c2f67
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c300f
        ;   Label: LAB_004c300f
    CMP dword ptr [EAX + 0x44c],0x0     ; 004c3012
    JNZ 0x004c2f7d                      ; 004c3019
        ;   XREF to: 004c2f7d (CONDITIONAL_JUMP)  ; LAB_004c2f7d
    MOV EAX,dword ptr [EAX + 0x330]     ; 004c301f
    MOV ESI,dword ptr [EAX + 0x560]     ; 004c3025
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c302b
    PUSH ESI                            ; 004c302e
    MOV EDI,dword ptr [EAX + 0x458]     ; 004c302f
    PUSH EDI                            ; 004c3035
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004c3036
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004beca0()
    ADD ESP,0x4                         ; 004c303b
    PUSH EAX                            ; 004c303e
    PUSH 0x58749a                       ; 004c303f | = "%s %d"
    LEA EAX,[ESP + 0x1c]                ; 004c3044
    PUSH EAX                            ; 004c3048
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c3049
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004c304e
    JMP 0x004c2f9f                      ; 004c3051
        ;   XREF to: 004c2f9f (UNCONDITIONAL_JUMP)  ; LAB_004c2f9f
    PUSH EAX                            ; 004c3056
        ;   Label: LAB_004c3056
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3057
    MOV EBX,dword ptr [EAX + 0x330]     ; 004c305a
    PUSH EBX                            ; 004c3060
    PUSH EAX                            ; 004c3061
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0 ; 004c3062
        ;   XREF to: 004c1bf0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0()
    ADD ESP,0xc                         ; 004c3067
    TEST EAX,EAX                        ; 004c306a
    JNZ 0x004c308b                      ; 004c306c
        ;   XREF to: 004c308b (CONDITIONAL_JUMP)  ; LAB_004c308b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c306e
    PUSH 0x1                            ; 004c3071
    MOV EDI,dword ptr [EAX + 0x330]     ; 004c3073
    PUSH EDI                            ; 004c3079
    PUSH EAX                            ; 004c307a
    CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0 ; 004c307b
        ;   XREF to: 004c1bf0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0()
    ADD ESP,0xc                         ; 004c3080
    TEST EAX,EAX                        ; 004c3083
    JZ 0x004c3116                       ; 004c3085
        ;   XREF to: 004c3116 (CONDITIONAL_JUMP)  ; LAB_004c3116
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c308b
        ;   Label: LAB_004c308b
    MOV EBX,dword ptr [EAX + 0x458]     ; 004c308e
    PUSH EBX                            ; 004c3094
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004c3095
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004beca0()
    ADD ESP,0x4                         ; 004c309a
    PUSH EAX                            ; 004c309d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c309e
    MOV ESI,dword ptr [EAX + 0x330]     ; 004c30a1
    PUSH ESI                            ; 004c30a7
    CALL core_inv.cpp_getItemIconName_FUN_004bed10 ; 004c30a8
        ;   XREF to: 004bed10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemIconName_FUN_004bed10()
    ADD ESP,0x4                         ; 004c30ad
    PUSH EAX                            ; 004c30b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c30b1
    MOV EDI,dword ptr [EAX + 0x330]     ; 004c30b4
    PUSH EDI                            ; 004c30ba
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004c30bb
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004beca0()
    ADD ESP,0x4                         ; 004c30c0
    PUSH EAX                            ; 004c30c3
    PUSH 0x5874a7                       ; 004c30c4 | = "%s\n\n%s %s"
    LEA EAX,[ESP + 0x520]               ; 004c30c9
    PUSH EAX                            ; 004c30d0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004c30d1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 004c30d6
    PUSH 0x5874b1                       ; 004c30d9 | = " are loaded."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c30de
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004c30e3
    LEA EDI,[ESP + 0x510]               ; 004c30e6
    MOV ESI,EAX                         ; 004c30ed
    PUSH EDI                            ; 004c30ef
    SUB ECX,ECX                         ; 004c30f0
    DEC ECX                             ; 004c30f2
    MOV AL,0x0                          ; 004c30f3
    SCASB.REPNE ES:EDI                  ; 004c30f5
    DEC EDI                             ; 004c30f7
    MOV AL,byte ptr [ESI]               ; 004c30f8
        ;   Label: LAB_004c30f8
    MOV byte ptr [EDI],AL               ; 004c30fa
    CMP AL,0x0                          ; 004c30fc
    JZ 0x004c3110                       ; 004c30fe
        ;   XREF to: 004c3110 (CONDITIONAL_JUMP)  ; LAB_004c3110
    MOV AL,byte ptr [ESI + 0x1]         ; 004c3100
    ADD ESI,0x2                         ; 004c3103
    MOV byte ptr [EDI + 0x1],AL         ; 004c3106
    ADD EDI,0x2                         ; 004c3109
    CMP AL,0x0                          ; 004c310c
    JNZ 0x004c30f8                      ; 004c310e
        ;   XREF to: 004c30f8 (CONDITIONAL_JUMP)  ; LAB_004c30f8
    POP EDI                             ; 004c3110
        ;   Label: LAB_004c3110
    JMP 0x004c26bd                      ; 004c3111
        ;   XREF to: 004c26bd (UNCONDITIONAL_JUMP)  ; LAB_004c26bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3116
        ;   Label: LAB_004c3116
    MOV EDX,dword ptr [EAX + 0x330]     ; 004c3119
    PUSH EDX                            ; 004c311f
    CALL core_inv.cpp_getItemIconName_FUN_004bed10 ; 004c3120
        ;   XREF to: 004bed10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemIconName_FUN_004bed10()
    ADD ESP,0x4                         ; 004c3125
    PUSH EAX                            ; 004c3128
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3129
    MOV ECX,dword ptr [EAX + 0x330]     ; 004c312c
    PUSH ECX                            ; 004c3132
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004c3133
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004beca0()
    ADD ESP,0x4                         ; 004c3138
    PUSH EAX                            ; 004c313b
    PUSH 0x5874be                       ; 004c313c | = "%s\n\n%s"
    JMP 0x004c26ad                      ; 004c3141
        ;   XREF to: 004c26ad (UNCONDITIONAL_JUMP)  ; LAB_004c26ad
    MOV EDX,EBX                         ; 004c3146
        ;   Label: LAB_004c3146
    MOV EAX,EBX                         ; 004c3148
    SAR EDX,0x1f                        ; 004c314a
    SUB EAX,EDX                         ; 004c314d
    SAR EAX,0x1                         ; 004c314f
    MOV EBX,EAX                         ; 004c3151
    MOV EDX,ESI                         ; 004c3153
    MOV EAX,ESI                         ; 004c3155
    SAR EDX,0x1f                        ; 004c3157
    SUB EAX,EDX                         ; 004c315a
    SAR EAX,0x1                         ; 004c315c
    MOV EDI,0x28                        ; 004c315e
    MOV ECX,0x8                         ; 004c3163
    MOV dword ptr [ESP + 0x62c],EDI     ; 004c3168
    MOV dword ptr [ESP + 0x63c],ECX     ; 004c316f
    MOV ESI,EAX                         ; 004c3176
    JMP 0x004c2805                      ; 004c3178
        ;   XREF to: 004c2805 (UNCONDITIONAL_JUMP)  ; LAB_004c2805
    CMP dword ptr [EAX + 0x240],0x0     ; 004c317d | DAT_01c7782c
        ;   Label: LAB_004c317d
    JNZ 0x004c2a92                      ; 004c3184
        ;   XREF to: 004c2a92 (CONDITIONAL_JUMP)  ; LAB_004c2a92
    JMP 0x004c2b1c                      ; 004c318a
        ;   XREF to: 004c2b1c (UNCONDITIONAL_JUMP)  ; LAB_004c2b1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c318f
        ;   Label: LAB_004c318f
    FLD float ptr [EAX + 0x340]         ; 004c3192
    FLDZ                                ; 004c3198
    FCOMPP                              ; 004c319a
    FNSTSW AX                           ; 004c319c
    SAHF                                ; 004c319e
    JC 0x004c2b32                       ; 004c319f
        ;   XREF to: 004c2b32 (CONDITIONAL_JUMP)  ; LAB_004c2b32
    JMP 0x004c2c73                      ; 004c31a5
        ;   XREF to: 004c2c73 (UNCONDITIONAL_JUMP)  ; LAB_004c2c73

