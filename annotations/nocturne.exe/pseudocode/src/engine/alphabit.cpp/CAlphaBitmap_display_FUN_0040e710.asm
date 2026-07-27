; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(int *param_1,int param_2,int param_3,undefined4 param_4)
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
; XREF[12]:
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a66cf
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6b5a
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a7030
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960 at 0049d9d8
;   core_inv.cpp_FUN_004c2470 at 004c2b14
;   core_level.cpp_CLevelLoader_show_FUN_004c5640 at 004c5744
;   core_main.c_FUN_004c85f0 at 004c8c56
;   core_main.c_FUN_004c8eb0 at 004c8f24
;   core_main.c_FUN_004c90e0 at 004c9173
;   core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50 at 004cfeea
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0
;   engine_special.cpp_renderAlphaRow16_FUN_005305f7
;   engine_special.cpp_renderAlphaRow32_FUN_0053055c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e710
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
    PUSH ESI                            ; 0040e711
    PUSH EDI                            ; 0040e712
    PUSH EBP                            ; 0040e713
    SUB ESP,0x1c                        ; 0040e714
    MOV ESI,dword ptr [ESP + 0x30]      ; 0040e717
    MOV EDI,dword ptr [ESP + 0x34]      ; 0040e71b
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040e71f
    ADD EAX,EDI                         ; 0040e722
    TEST EAX,EAX                        ; 0040e724
    JL 0x0040e747                       ; 0040e726
        ;   XREF to: 0040e747 (CONDITIONAL_JUMP)  ; LAB_0040e747
    CMP EDI,dword ptr [0x005b761c]      ; 0040e728 | DAT_005b761c
    JGE 0x0040e747                      ; 0040e72e
        ;   XREF to: 0040e747 (CONDITIONAL_JUMP)  ; LAB_0040e747
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040e730
    ADD EAX,dword ptr [ESI + 0x10]      ; 0040e734
    TEST EAX,EAX                        ; 0040e737
    JL 0x0040e747                       ; 0040e739
        ;   XREF to: 0040e747 (CONDITIONAL_JUMP)  ; LAB_0040e747
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040e73b
    CMP EAX,dword ptr [0x005b7620]      ; 0040e73f | DAT_005b7620
    JL 0x0040e74f                       ; 0040e745
        ;   XREF to: 0040e74f (CONDITIONAL_JUMP)  ; LAB_0040e74f
    ADD ESP,0x1c                        ; 0040e747
        ;   Label: LAB_0040e747
    POP EBP                             ; 0040e74a
    POP EDI                             ; 0040e74b
    POP ESI                             ; 0040e74c
    POP EBX                             ; 0040e74d
    RET                                 ; 0040e74e
    PUSH ESI                            ; 0040e74f
        ;   Label: LAB_0040e74f
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0 ; 0040e750
        ;   XREF to: 0040eab0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0()
    ADD ESP,0x4                         ; 0040e755
    MOV EAX,dword ptr [ESI]             ; 0040e758
    MOV dword ptr [ESP + 0x18],EAX      ; 0040e75a
    MOV EAX,[0x005b7624]                ; 0040e75e | DAT_005b7624
    MOV EBP,dword ptr [ESI + 0x4]       ; 0040e763
    CMP EAX,0x20                        ; 0040e766
    JNZ 0x0040e815                      ; 0040e769
        ;   XREF to: 0040e815 (CONDITIONAL_JUMP)  ; LAB_0040e815
    XOR EBX,EBX                         ; 0040e76f
    MOV EAX,dword ptr [ESI + 0x10]      ; 0040e771
    MOV dword ptr [ESP + 0x8],EBX       ; 0040e774
    TEST EAX,EAX                        ; 0040e778
    JLE 0x0040e747                      ; 0040e77a
        ;   XREF to: 0040e747 (CONDITIONAL_JUMP)  ; LAB_0040e747
    LEA EAX,[EDI*0x4 + 0x0]             ; 0040e77c
    MOV dword ptr [ESP + 0x4],EAX       ; 0040e783
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040e787
    MOV dword ptr [ESP + 0x14],EAX      ; 0040e78b
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040e78f
        ;   Label: LAB_0040e78f
    TEST ECX,ECX                        ; 0040e793
    JL 0x0040e7df                       ; 0040e795
        ;   XREF to: 0040e7df (CONDITIONAL_JUMP)  ; LAB_0040e7df
    CMP ECX,dword ptr [0x005b7620]      ; 0040e797 | DAT_005b7620
    JGE 0x0040e7df                      ; 0040e79d
        ;   XREF to: 0040e7df (CONDITIONAL_JUMP)  ; LAB_0040e7df
    MOV ECX,dword ptr [ECX*0x4 + 0x1bd2fa0] ; 0040e79f | DAT_01bd2fa0
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040e7a6
    XOR EDX,EDX                         ; 0040e7a9
    TEST EDI,EDI                        ; 0040e7ab
    JL 0x0040e80d                       ; 0040e7ad
        ;   XREF to: 0040e80d (CONDITIONAL_JUMP)  ; LAB_0040e80d
    ADD ECX,dword ptr [ESP + 0x4]       ; 0040e7af
    LEA EBX,[EDI + EAX*0x1]             ; 0040e7b3
        ;   Label: LAB_0040e7b3
    CMP EBX,dword ptr [0x005b761c]      ; 0040e7b6 | DAT_005b761c
    JLE 0x0040e7c5                      ; 0040e7bc
        ;   XREF to: 0040e7c5 (CONDITIONAL_JUMP)  ; LAB_0040e7c5
    MOV EAX,[0x005b761c]                ; 0040e7be | DAT_005b761c
    SUB EAX,EDI                         ; 0040e7c3
    PUSH EAX                            ; 0040e7c5
        ;   Label: LAB_0040e7c5
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040e7c6
    PUSH EAX                            ; 0040e7ca
    LEA EAX,[EDX + EBP*0x1]             ; 0040e7cb
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040e7ce
    PUSH EAX                            ; 0040e7d2
    ADD EDX,EBX                         ; 0040e7d3
    PUSH EDX                            ; 0040e7d5
    PUSH ECX                            ; 0040e7d6
    CALL engine_special.cpp_renderAlphaRow32_FUN_0053055c ; 0040e7d7
        ;   XREF to: 0053055c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_renderAlphaRow32_FUN_0053055c()
    ADD ESP,0x14                        ; 0040e7dc
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e7df
        ;   Label: LAB_0040e7df
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040e7e3
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040e7e7
    INC EBX                             ; 0040e7ea
    ADD EDX,EAX                         ; 0040e7eb
    ADD EBP,EAX                         ; 0040e7ed
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e7ef
    MOV dword ptr [ESP + 0x18],EDX      ; 0040e7f3
    MOV dword ptr [ESP + 0x14],EBX      ; 0040e7f7
    INC EAX                             ; 0040e7fb
    MOV EDX,dword ptr [ESI + 0x10]      ; 0040e7fc
    MOV dword ptr [ESP + 0x8],EAX       ; 0040e7ff
    CMP EAX,EDX                         ; 0040e803
    JGE 0x0040e747                      ; 0040e805
        ;   XREF to: 0040e747 (CONDITIONAL_JUMP)  ; LAB_0040e747
    JMP 0x0040e78f                      ; 0040e80b
        ;   XREF to: 0040e78f (UNCONDITIONAL_JUMP)  ; LAB_0040e78f
    MOV EDX,EDI                         ; 0040e80d
        ;   Label: LAB_0040e80d
    NEG EDX                             ; 0040e80f
    SUB EAX,EDX                         ; 0040e811
    JMP 0x0040e7b3                      ; 0040e813
        ;   XREF to: 0040e7b3 (UNCONDITIONAL_JUMP)  ; LAB_0040e7b3
    XOR EDX,EDX                         ; 0040e815
        ;   Label: LAB_0040e815
    MOV ECX,dword ptr [ESI + 0x10]      ; 0040e817
    MOV dword ptr [ESP + 0xc],EDX       ; 0040e81a
    TEST ECX,ECX                        ; 0040e81e
    JLE 0x0040e747                      ; 0040e820
        ;   XREF to: 0040e747 (CONDITIONAL_JUMP)  ; LAB_0040e747
    LEA EAX,[EDI + EDI*0x1]             ; 0040e826
    MOV dword ptr [ESP],EAX             ; 0040e829
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040e82c
    MOV dword ptr [ESP + 0x10],EAX      ; 0040e830
    MOV ECX,dword ptr [ESP + 0x10]      ; 0040e834
        ;   Label: LAB_0040e834
    TEST ECX,ECX                        ; 0040e838
    JL 0x0040e883                       ; 0040e83a
        ;   XREF to: 0040e883 (CONDITIONAL_JUMP)  ; LAB_0040e883
    CMP ECX,dword ptr [0x005b7620]      ; 0040e83c | DAT_005b7620
    JGE 0x0040e883                      ; 0040e842
        ;   XREF to: 0040e883 (CONDITIONAL_JUMP)  ; LAB_0040e883
    MOV ECX,dword ptr [ECX*0x4 + 0x1bd2fa0] ; 0040e844 | DAT_01bd2fa0
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040e84b
    XOR EDX,EDX                         ; 0040e84e
    TEST EDI,EDI                        ; 0040e850
    JL 0x0040e8b1                       ; 0040e852
        ;   XREF to: 0040e8b1 (CONDITIONAL_JUMP)  ; LAB_0040e8b1
    ADD ECX,dword ptr [ESP]             ; 0040e854
    LEA EBX,[EDI + EAX*0x1]             ; 0040e857
        ;   Label: LAB_0040e857
    CMP EBX,dword ptr [0x005b761c]      ; 0040e85a | DAT_005b761c
    JLE 0x0040e869                      ; 0040e860
        ;   XREF to: 0040e869 (CONDITIONAL_JUMP)  ; LAB_0040e869
    MOV EAX,[0x005b761c]                ; 0040e862 | DAT_005b761c
    SUB EAX,EDI                         ; 0040e867
    PUSH EAX                            ; 0040e869
        ;   Label: LAB_0040e869
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040e86a
    PUSH EAX                            ; 0040e86e
    LEA EAX,[EDX + EBP*0x1]             ; 0040e86f
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040e872
    PUSH EAX                            ; 0040e876
    ADD EDX,EBX                         ; 0040e877
    PUSH EDX                            ; 0040e879
    PUSH ECX                            ; 0040e87a
    CALL engine_special.cpp_renderAlphaRow16_FUN_005305f7 ; 0040e87b
        ;   XREF to: 005305f7 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_renderAlphaRow16_FUN_005305f7()
    ADD ESP,0x14                        ; 0040e880
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040e883
        ;   Label: LAB_0040e883
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e887
    MOV EAX,dword ptr [ESI + 0xc]       ; 0040e88b
    INC EBX                             ; 0040e88e
    ADD EDX,EAX                         ; 0040e88f
    ADD EBP,EAX                         ; 0040e891
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040e893
    MOV dword ptr [ESP + 0x18],EDX      ; 0040e897
    MOV dword ptr [ESP + 0x10],EBX      ; 0040e89b
    INC EAX                             ; 0040e89f
    MOV EDX,dword ptr [ESI + 0x10]      ; 0040e8a0
    MOV dword ptr [ESP + 0xc],EAX       ; 0040e8a3
    CMP EAX,EDX                         ; 0040e8a7
    JGE 0x0040e747                      ; 0040e8a9
        ;   XREF to: 0040e747 (CONDITIONAL_JUMP)  ; LAB_0040e747
    JMP 0x0040e834                      ; 0040e8af
        ;   XREF to: 0040e834 (UNCONDITIONAL_JUMP)  ; LAB_0040e834
    MOV EDX,EDI                         ; 0040e8b1
        ;   Label: LAB_0040e8b1
    NEG EDX                             ; 0040e8b3
    SUB EAX,EDX                         ; 0040e8b5
    JMP 0x0040e857                      ; 0040e8b7
        ;   XREF to: 0040e857 (UNCONDITIONAL_JUMP)  ; LAB_0040e857

