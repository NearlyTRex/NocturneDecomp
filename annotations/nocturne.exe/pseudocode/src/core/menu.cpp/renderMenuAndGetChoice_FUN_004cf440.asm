; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440(undefined4 *param_1,int param_2,int *param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_004d23d0 at 004d25c0
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20 at 004d1011
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d0559
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1b37
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d22d2
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_c_1999_Terminal_0058847b
;   TerminatedCString s_Nocturne_1999_Terminal_R_005884b4
;   TerminatedCString s_anon_005884ea
;   int INT_005bac64 = 0x1cc30e4
;   undefined4 DAT_014b9900
;   undefined4 DAT_014b9904
;   undefined4 DAT_01cc30e4
;   undefined4 DAT_01cc5b5c
;   undefined4 DAT_01cc5b68
;   undefined4 DAT_01d16810
;
; Called Functions:
;   core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004df170
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf440
        ;   Label: core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
    PUSH ESI                            ; 004cf441
    PUSH EDI                            ; 004cf442
    PUSH EBP                            ; 004cf443
    SUB ESP,0x1c                        ; 004cf444
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004cf447
    MOV EAX,[0x014b9900]                ; 004cf44b | DAT_014b9900
    MOV EDX,dword ptr [ESP + 0x40]      ; 004cf450
    MOV dword ptr [ESP + 0x18],EAX      ; 004cf454
    TEST EDX,EDX                        ; 004cf458
    JNZ 0x004cf74b                      ; 004cf45a
        ;   XREF to: 004cf74b (CONDITIONAL_JUMP)  ; LAB_004cf74b
    XOR EDI,EDI                         ; 004cf460
        ;   Label: LAB_004cf460
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cf462
    MOV dword ptr [ESP + 0xc],EDI       ; 004cf466
    TEST EAX,EAX                        ; 004cf46a
    JLE 0x004cf59e                      ; 004cf46c
        ;   XREF to: 004cf59e (CONDITIONAL_JUMP)  ; LAB_004cf59e
    MOV EAX,dword ptr [ESP + 0x30]      ; 004cf472
    MOV dword ptr [ESP + 0x10],EAX      ; 004cf476
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cf47a
        ;   Label: LAB_004cf47a
    MOV ECX,dword ptr [EAX]             ; 004cf47e
    PUSH ECX                            ; 004cf480
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004cf481
    PUSH EBX                            ; 004cf485
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004cf486
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 004cf48b
    PUSH 0x58                           ; 004cf48e
    PUSH EBX                            ; 004cf490
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004cf491
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004cf496
    MOV EDI,0xa0                        ; 004cf499
    MOV EDX,dword ptr [ESP + 0x38]      ; 004cf49e
    MOV dword ptr [ESP + 0x4],EAX       ; 004cf4a2
    MOV EAX,0xf8                        ; 004cf4a6
    MOV ECX,dword ptr [EDX]             ; 004cf4ab
    MOV dword ptr [ESP + 0x8],EAX       ; 004cf4ad
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cf4b1
    MOV dword ptr [ESP],EDI             ; 004cf4b5
    CMP EAX,ECX                         ; 004cf4b8
    JNZ 0x004cf540                      ; 004cf4ba
        ;   XREF to: 004cf540 (CONDITIONAL_JUMP)  ; LAB_004cf540
    PUSH 0x1cc5780                      ; 004cf4c0
    MOV EBX,0x7                         ; 004cf4c5
    CALL core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004df170 ; 004cf4ca
        ;   XREF to: 004df170 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004df170()
    MOV dword ptr [ESP + 0xc],EBX       ; 004cf4cf
    ADD ESP,0x4                         ; 004cf4d3
    TEST EAX,EAX                        ; 004cf4d6
    JZ 0x004cf777                       ; 004cf4d8
        ;   XREF to: 004cf777 (CONDITIONAL_JUMP)  ; LAB_004cf777
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cf4de
    XOR EBX,EBX                         ; 004cf4e2
    MOV dword ptr [ESP + 0x14],EAX      ; 004cf4e4
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004cf4e8
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_004cf4e8
    MOV EDI,EAX                         ; 004cf4ed
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004cf4ef
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    AND EAX,0x3                         ; 004cf4f4
    LEA ESI,[EAX + -0x2]                ; 004cf4f7
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004cf4fa
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 004cf4ff
    MOV EAX,0xbb80                      ; 004cf501
    IMUL EDX                            ; 004cf506
    SHRD EAX,EDX,0x10                   ; 004cf508
    PUSH EAX                            ; 004cf50c
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004cf50d
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 004cf512
    PUSH -0x1                           ; 004cf515
    PUSH 0x7                            ; 004cf517
    ADD ESI,EBP                         ; 004cf519
    AND EDI,0x3                         ; 004cf51b
    PUSH ESI                            ; 004cf51e
    ADD EDI,0x9e                        ; 004cf51f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cf525
    PUSH EDI                            ; 004cf529
    MOV EDI,dword ptr [EAX]             ; 004cf52a
    PUSH EDI                            ; 004cf52c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004cf52d
    PUSH EAX                            ; 004cf531
    INC EBX                             ; 004cf532
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cf533
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004cf538
    CMP EBX,0x5                         ; 004cf53b
    JL 0x004cf4e8                       ; 004cf53e
        ;   XREF to: 004cf4e8 (CONDITIONAL_JUMP)  ; LAB_004cf4e8
    PUSH 0xbb80                         ; 004cf540
        ;   Label: LAB_004cf540
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004cf545
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 004cf54a
    PUSH -0x1                           ; 004cf54d
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cf54f
    PUSH EDX                            ; 004cf553
    PUSH EBP                            ; 004cf554
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cf555
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004cf559
    PUSH ECX                            ; 004cf55d
    MOV EBX,dword ptr [EAX]             ; 004cf55e
    PUSH EBX                            ; 004cf560
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004cf561
    PUSH ESI                            ; 004cf565
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cf566
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004cf56b
    MOV EDI,dword ptr [ESP + 0x4]       ; 004cf56e
    MOV EAX,dword ptr [ESP + 0x40]      ; 004cf572
    ADD EBP,EDI                         ; 004cf576
    TEST EAX,EAX                        ; 004cf578
    JNZ 0x004cf57e                      ; 004cf57a
        ;   XREF to: 004cf57e (CONDITIONAL_JUMP)  ; LAB_004cf57e
    ADD EBP,EDI                         ; 004cf57c
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cf57e
        ;   Label: LAB_004cf57e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cf582
    MOV EBX,dword ptr [ESP + 0x34]      ; 004cf586
    ADD EDX,0x4                         ; 004cf58a
    INC ECX                             ; 004cf58d
    MOV dword ptr [ESP + 0x10],EDX      ; 004cf58e
    MOV dword ptr [ESP + 0xc],ECX       ; 004cf592
    CMP ECX,EBX                         ; 004cf596
    JL 0x004cf47a                       ; 004cf598
        ;   XREF to: 004cf47a (CONDITIONAL_JUMP)  ; LAB_004cf47a
    PUSH 0xffff                         ; 004cf59e
        ;   Label: LAB_004cf59e
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004cf5a3
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    MOV ESI,dword ptr [0x01d16810]      ; 004cf5a8 | DAT_01d16810
    ADD ESP,0x4                         ; 004cf5ae
    TEST ESI,ESI                        ; 004cf5b1
    JZ 0x004cf784                       ; 004cf5b3
        ;   XREF to: 004cf784 (CONDITIONAL_JUMP)  ; LAB_004cf784
    PUSH 0x58847b                       ; 004cf5b9 | = "Nocturne (c) 1999 Terminal Reality In..."
    MOV EDX,dword ptr [0x014b9904]      ; 004cf5be | DAT_014b9904
    PUSH EDX                            ; 004cf5c4
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004cf5c5
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 004cf5ca
    PUSH 0x58847b                       ; 004cf5cd | = "Nocturne (c) 1999 Terminal Reality In..."
    MOV ECX,dword ptr [0x014b9904]      ; 004cf5d2 | DAT_014b9904
    PUSH ECX                            ; 004cf5d8
    MOV EBX,EAX                         ; 004cf5d9
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 004cf5db
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60()
    ADD ESP,0x8                         ; 004cf5e0
    PUSH 0x0                            ; 004cf5e3
    MOV EDX,0x1df                       ; 004cf5e5
    PUSH 0xf8                           ; 004cf5ea
    SUB EDX,EAX                         ; 004cf5ef
    MOV EAX,0x27f                       ; 004cf5f1
    PUSH EDX                            ; 004cf5f6
    SUB EAX,EBX                         ; 004cf5f7
    PUSH EAX                            ; 004cf5f9
    PUSH 0x58847b                       ; 004cf5fa | = "Nocturne (c) 1999 Terminal Reality In..."
    MOV EBX,dword ptr [0x014b9904]      ; 004cf5ff | DAT_014b9904
    PUSH EBX                            ; 004cf605
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cf606
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
        ;   Label: LAB_004cf606
    ADD ESP,0x18                        ; 004cf60b
    PUSH 0x8000                         ; 004cf60e
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004cf613
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 004cf618
    PUSH 0x0                            ; 004cf61b
    PUSH 0xf8                           ; 004cf61d
    PUSH 0x63                           ; 004cf622
    PUSH 0x206                          ; 004cf624
    PUSH 0x5884ea                       ; 004cf629 | = ""
    MOV ESI,dword ptr [0x014b9904]      ; 004cf62e | DAT_014b9904
    PUSH ESI                            ; 004cf634
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cf635
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004cf63a
    PUSH 0xffff                         ; 004cf63d
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004cf642
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 004cf647
    MOV EAX,dword ptr [ESP + 0x38]      ; 004cf64a
    MOV EAX,dword ptr [EAX]             ; 004cf64e
    MOV EDI,dword ptr [ESP + 0x30]      ; 004cf650
    SHL EAX,0x2                         ; 004cf654
    ADD EAX,EDI                         ; 004cf657
    MOV DL,0x3a                         ; 004cf659
    MOV ESI,dword ptr [EAX]             ; 004cf65b
    XOR EBX,EBX                         ; 004cf65d
    MOV AL,byte ptr [ESI]               ; 004cf65f
        ;   Label: LAB_004cf65f
    CMP AL,DL                           ; 004cf661
    JZ 0x004cf677                       ; 004cf663
        ;   XREF to: 004cf677 (CONDITIONAL_JUMP)  ; LAB_004cf677
    CMP AL,0x0                          ; 004cf665
    JZ 0x004cf675                       ; 004cf667
        ;   XREF to: 004cf675 (CONDITIONAL_JUMP)  ; LAB_004cf675
    INC ESI                             ; 004cf669
    MOV AL,byte ptr [ESI]               ; 004cf66a
    CMP AL,DL                           ; 004cf66c
    JZ 0x004cf677                       ; 004cf66e
        ;   XREF to: 004cf677 (CONDITIONAL_JUMP)  ; LAB_004cf677
    INC ESI                             ; 004cf670
    CMP AL,0x0                          ; 004cf671
    JNZ 0x004cf65f                      ; 004cf673
        ;   XREF to: 004cf65f (CONDITIONAL_JUMP)  ; LAB_004cf65f
    SUB ESI,ESI                         ; 004cf675
        ;   Label: LAB_004cf675
    TEST ESI,ESI                        ; 004cf677
        ;   Label: LAB_004cf677
    JZ 0x004cf680                       ; 004cf679
        ;   XREF to: 004cf680 (CONDITIONAL_JUMP)  ; LAB_004cf680
    MOV EBX,0x1                         ; 004cf67b
    PUSH 0x48                           ; 004cf680
        ;   Label: LAB_004cf680
    MOV EAX,[0x005bac64]                ; 004cf682 | INT_005bac64
    XOR EBP,EBP                         ; 004cf687
    PUSH EAX                            ; 004cf689 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cf68a | DAT_01cc30e4
    MOV dword ptr [0x01cc5b68],EBP      ; 004cf68c | DAT_01cc5b68
    CALL dword ptr [EDX + 0x4]          ; 004cf692
    ADD ESP,0x8                         ; 004cf695
    TEST EAX,EAX                        ; 004cf698
    JZ 0x004cf6b7                       ; 004cf69a
        ;   XREF to: 004cf6b7 (CONDITIONAL_JUMP)  ; LAB_004cf6b7
    MOV dword ptr [0x01cc5b68],0x1      ; 004cf69c | DAT_01cc5b68
    MOV EAX,dword ptr [ESP + 0x38]      ; 004cf6a6
    MOV EDX,dword ptr [EAX]             ; 004cf6aa
    DEC EDX                             ; 004cf6ac
    MOV dword ptr [EAX],EDX             ; 004cf6ad
    TEST EDX,EDX                        ; 004cf6af
    JL 0x004cf7d4                       ; 004cf6b1
        ;   XREF to: 004cf7d4 (CONDITIONAL_JUMP)  ; LAB_004cf7d4
    PUSH 0x50                           ; 004cf6b7
        ;   Label: LAB_004cf6b7
    MOV EAX,[0x005bac64]                ; 004cf6b9 | INT_005bac64
    PUSH EAX                            ; 004cf6be | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cf6bf | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cf6c1
    ADD ESP,0x8                         ; 004cf6c4
    TEST EAX,EAX                        ; 004cf6c7
    JZ 0x004cf6ee                       ; 004cf6c9
        ;   XREF to: 004cf6ee (CONDITIONAL_JUMP)  ; LAB_004cf6ee
    MOV EAX,dword ptr [ESP + 0x38]      ; 004cf6cb
    MOV ESI,0x1                         ; 004cf6cf
    MOV EDI,dword ptr [EAX]             ; 004cf6d4
    MOV EBP,dword ptr [ESP + 0x34]      ; 004cf6d6
    ADD EDI,ESI                         ; 004cf6da
    MOV dword ptr [0x01cc5b68],ESI      ; 004cf6dc | DAT_01cc5b68
    MOV dword ptr [EAX],EDI             ; 004cf6e2
    CMP EDI,EBP                         ; 004cf6e4
    JL 0x004cf6ee                       ; 004cf6e6
        ;   XREF to: 004cf6ee (CONDITIONAL_JUMP)  ; LAB_004cf6ee
    MOV dword ptr [EAX],0x0             ; 004cf6e8
    TEST EBX,EBX                        ; 004cf6ee
        ;   Label: LAB_004cf6ee
    JZ 0x004cf725                       ; 004cf6f0
        ;   XREF to: 004cf725 (CONDITIONAL_JUMP)  ; LAB_004cf725
    XOR EAX,EAX                         ; 004cf6f2
    PUSH 0x4b                           ; 004cf6f4
    MOV [0x01cc5b5c],EAX                ; 004cf6f6 | DAT_01cc5b5c
    MOV EAX,[0x005bac64]                ; 004cf6fb | INT_005bac64
    PUSH EAX                            ; 004cf700 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cf701 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cf703
    ADD ESP,0x8                         ; 004cf706
    TEST EAX,EAX                        ; 004cf709
    JNZ 0x004cf7e4                      ; 004cf70b
        ;   XREF to: 004cf7e4 (CONDITIONAL_JUMP)  ; LAB_004cf7e4
    PUSH 0x4d                           ; 004cf711
    MOV EAX,[0x005bac64]                ; 004cf713 | INT_005bac64
    PUSH EAX                            ; 004cf718 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cf719 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cf71b
    ADD ESP,0x8                         ; 004cf71e
    TEST EAX,EAX                        ; 004cf721
    JNZ 0x004cf73d                      ; 004cf723
        ;   XREF to: 004cf73d (CONDITIONAL_JUMP)  ; LAB_004cf73d
    PUSH 0x1c                           ; 004cf725
        ;   Label: LAB_004cf725
    MOV EAX,[0x005bac64]                ; 004cf727 | INT_005bac64
    PUSH EAX                            ; 004cf72c | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004cf72d | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004cf72f
    ADD ESP,0x8                         ; 004cf732
    TEST EAX,EAX                        ; 004cf735
    JZ 0x004cf7fd                       ; 004cf737
        ;   XREF to: 004cf7fd (CONDITIONAL_JUMP)  ; LAB_004cf7fd
    MOV EAX,dword ptr [ESP + 0x38]      ; 004cf73d
        ;   Label: LAB_004cf73d
    MOV EAX,dword ptr [EAX]             ; 004cf741
    ADD ESP,0x1c                        ; 004cf743
    POP EBP                             ; 004cf746
    POP EDI                             ; 004cf747
    POP ESI                             ; 004cf748
    POP EBX                             ; 004cf749
    RET                                 ; 004cf74a
    PUSH 0x0                            ; 004cf74b
        ;   Label: LAB_004cf74b
    PUSH 0x7                            ; 004cf74d
    PUSH EBP                            ; 004cf74f
    PUSH 0xa0                           ; 004cf750
    PUSH EDX                            ; 004cf755
    PUSH EAX                            ; 004cf756
    MOV EBX,EAX                         ; 004cf757
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cf759
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawText_FUN_00490980()
    ADD ESP,0x18                        ; 004cf75e
    PUSH 0x58                           ; 004cf761
    MOV ESI,EBX                         ; 004cf763
    PUSH ESI                            ; 004cf765
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004cf766
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD EAX,EAX                         ; 004cf76b
    ADD ESP,0x8                         ; 004cf76d
    ADD EBP,EAX                         ; 004cf770
    JMP 0x004cf460                      ; 004cf772
        ;   XREF to: 004cf460 (UNCONDITIONAL_JUMP)  ; LAB_004cf460
    MOV dword ptr [ESP + 0x8],0xff      ; 004cf777
        ;   Label: LAB_004cf777
    JMP 0x004cf540                      ; 004cf77f
        ;   XREF to: 004cf540 (UNCONDITIONAL_JUMP)  ; LAB_004cf540
    PUSH 0x5884b4                       ; 004cf784 | = "Nocturne 1999 Terminal Reality Inc.  ..."
        ;   Label: LAB_004cf784
    MOV EDI,dword ptr [0x014b9904]      ; 004cf789 | DAT_014b9904
    PUSH EDI                            ; 004cf78f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004cf790
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0()
    ADD ESP,0x8                         ; 004cf795
    PUSH 0x5884b4                       ; 004cf798 | = "Nocturne 1999 Terminal Reality Inc.  ..."
    MOV EBP,dword ptr [0x014b9904]      ; 004cf79d | DAT_014b9904
    PUSH EBP                            ; 004cf7a3
    MOV EBX,EAX                         ; 004cf7a4
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 004cf7a6
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60()
    ADD ESP,0x8                         ; 004cf7ab
    PUSH ESI                            ; 004cf7ae
    MOV EDX,0x1df                       ; 004cf7af
    PUSH 0xf8                           ; 004cf7b4
    SUB EDX,EAX                         ; 004cf7b9
    MOV EAX,0x27f                       ; 004cf7bb
    PUSH EDX                            ; 004cf7c0
    SUB EAX,EBX                         ; 004cf7c1
    PUSH EAX                            ; 004cf7c3
    PUSH 0x5884b4                       ; 004cf7c4 | = "Nocturne 1999 Terminal Reality Inc.  ..."
    MOV EAX,[0x014b9904]                ; 004cf7c9 | DAT_014b9904
    PUSH EAX                            ; 004cf7ce
    JMP 0x004cf606                      ; 004cf7cf
        ;   XREF to: 004cf606 (UNCONDITIONAL_JUMP)  ; LAB_004cf606
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cf7d4
        ;   Label: LAB_004cf7d4
    MOV EDX,dword ptr [ESP + 0x38]      ; 004cf7d8
    DEC EAX                             ; 004cf7dc
    MOV dword ptr [EDX],EAX             ; 004cf7dd
    JMP 0x004cf6b7                      ; 004cf7df
        ;   XREF to: 004cf6b7 (UNCONDITIONAL_JUMP)  ; LAB_004cf6b7
    MOV EDX,0x1                         ; 004cf7e4
        ;   Label: LAB_004cf7e4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004cf7e9
    MOV dword ptr [0x01cc5b5c],EDX      ; 004cf7ed | DAT_01cc5b5c
    MOV EAX,dword ptr [EAX]             ; 004cf7f3
    ADD ESP,0x1c                        ; 004cf7f5
    POP EBP                             ; 004cf7f8
    POP EDI                             ; 004cf7f9
    POP ESI                             ; 004cf7fa
    POP EBX                             ; 004cf7fb
    RET                                 ; 004cf7fc
    MOV EAX,0xffffffff                  ; 004cf7fd
        ;   Label: LAB_004cf7fd
    ADD ESP,0x1c                        ; 004cf802
    POP EBP                             ; 004cf805
    POP EDI                             ; 004cf806
    POP ESI                             ; 004cf807
    POP EBX                             ; 004cf808
    RET                                 ; 004cf809

