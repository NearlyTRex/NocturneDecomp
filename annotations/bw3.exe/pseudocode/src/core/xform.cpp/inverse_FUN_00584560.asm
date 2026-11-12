; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_inverse_FUN_00584560(CMatrix3x4f *param_1)
;
; Local Variables:
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
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[7]:
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042f770 at 0042fb0b
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00431d10 at 00431f56
;   core_charactr.cpp_FUN_00431ab0 at 00431b93
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043d830 at 0043d880
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0 at 004f44d1
;   core_toxhand.cpp_CTheHand_process_FUN_0056c140 at 0056c3bf
;   core_xform.cpp_FUN_00584490 at 005844a4
;
; Referenced Globals:
;   TerminatedCString s_core_xform_cpp_005d8147
;   TerminatedCString s_inverse_Singular_matrix_005d8159
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_xform.cpp_determinant_FUN_00584510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584560
        ;   Label: core_xform.cpp_inverse_FUN_00584560
    PUSH EDI                            ; 00584561
    PUSH EBP                            ; 00584562
    SUB ESP,0x60                        ; 00584563
    MOV EBX,dword ptr [ESP + 0x70]      ; 00584566
    MOV EBP,ESI                         ; 0058456a
    PUSH EBX                            ; 0058456c
    CALL core_xform.cpp_determinant_FUN_00584510 ; 0058456d
        ;   XREF to: 00584510 (UNCONDITIONAL_CALL)  ; double core_xform.cpp_determinant_FUN_00584510(CMatrix3x4f * matrix)
    MOV dword ptr [ESP + 0x34],EAX      ; 00584572
    MOV dword ptr [ESP + 0x38],EDX      ; 00584576
    FLD double ptr [ESP + 0x34]         ; 0058457a
    ADD ESP,0x4                         ; 0058457e
    FSTP float ptr [ESP + 0x5c]         ; 00584581
    TEST dword ptr [ESP + 0x5c],0x7fffffff ; 00584585
    JZ 0x00584762                       ; 0058458d
        ;   XREF to: 00584762 (CONDITIONAL_JUMP)  ; LAB_00584762
    FLD float ptr [EBX + 0x14]          ; 00584593
        ;   Label: LAB_00584593
    FMUL float ptr [EBX + 0x28]         ; 00584596
    FLD float ptr [EBX + 0x10]          ; 00584599
    FMUL float ptr [EBX + 0x28]         ; 0058459c
    FLD float ptr [EBX + 0x10]          ; 0058459f
    FMUL float ptr [EBX + 0x24]         ; 005845a2
    FLD float ptr [EBX + 0x4]           ; 005845a5
    FMUL float ptr [EBX + 0x28]         ; 005845a8
    FLD float ptr [EBX + 0x8]           ; 005845ab
    FMUL float ptr [EBX + 0x20]         ; 005845ae
    FLD float ptr [EBX + 0x18]          ; 005845b1
    FMUL float ptr [EBX + 0x24]         ; 005845b4
    FLD float ptr [EBX + 0x18]          ; 005845b7
    FXCH                                ; 005845ba
    FSUBP ST6,ST0                       ; 005845bc
    FMUL float ptr [EBX + 0x20]         ; 005845be
    FXCH ST5                            ; 005845c1
    FSTP float ptr [ESP + 0x58]         ; 005845c3
    FLD float ptr [EBX + 0x4]           ; 005845c7
    FMUL float ptr [EBX + 0x20]         ; 005845ca
    FXCH ST5                            ; 005845cd
    FSUBP ST4,ST0                       ; 005845cf
    FLD1                                ; 005845d1
    FXCH ST4                            ; 005845d3
    FCHS                                ; 005845d5
    FSTP float ptr [ESP + 0x38]         ; 005845d7
    FLD float ptr [EBX + 0x14]          ; 005845db
    FMUL float ptr [EBX + 0x20]         ; 005845de
    FXCH ST4                            ; 005845e1
    FDIV float ptr [ESP + 0x5c]         ; 005845e3
    FLD float ptr [EBX + 0x4]           ; 005845e7
    FMUL float ptr [EBX + 0x18]         ; 005845ea
    FXCH ST5                            ; 005845ed
    FSUBP ST4,ST0                       ; 005845ef
    FXCH ST3                            ; 005845f1
    FSTP float ptr [ESP + 0x54]         ; 005845f3
    FLD float ptr [EBX + 0x8]           ; 005845f7
    FMUL float ptr [EBX + 0x24]         ; 005845fa
    FLD float ptr [EBX + 0x8]           ; 005845fd
    FXCH                                ; 00584600
    FSUBP ST3,ST0                       ; 00584602
    FMUL float ptr [EBX + 0x10]         ; 00584604
    FXCH ST2                            ; 00584607
    FCHS                                ; 00584609
    FSTP float ptr [ESP + 0x3c]         ; 0058460b
    FLD float ptr [EBX]                 ; 0058460f
    FMUL float ptr [EBX + 0x28]         ; 00584611
    FLD float ptr [EBX + 0x4]           ; 00584614
    FMUL float ptr [EBX + 0x10]         ; 00584617
    FXCH                                ; 0058461a
    FSUBRP ST2,ST0                      ; 0058461c
    FXCH                                ; 0058461e
    FSTP float ptr [ESP + 0x40]         ; 00584620
    FLD float ptr [EBX]                 ; 00584624
    FMUL float ptr [EBX + 0x24]         ; 00584626
    FLD float ptr [EBX + 0x8]           ; 00584629
    FXCH                                ; 0058462c
    FSUBRP ST6,ST0                      ; 0058462e
    FMUL float ptr [EBX + 0x14]         ; 00584630
    FXCH ST5                            ; 00584633
    FCHS                                ; 00584635
    FSTP float ptr [ESP + 0x44]         ; 00584637
    FLD float ptr [EBX]                 ; 0058463b
    FMUL float ptr [EBX + 0x18]         ; 0058463d
    FLD float ptr [EBX]                 ; 00584640
    FMUL float ptr [EBX + 0x14]         ; 00584642
    FXCH ST6                            ; 00584645
    FSUBP ST5,ST0                       ; 00584647
    FLD float ptr [ESP + 0x58]          ; 00584649
    FXCH ST4                            ; 0058464d
    FSTP float ptr [ESP + 0x5c]         ; 0058464f
    FXCH ST3                            ; 00584653
    FMUL float ptr [ESP + 0x5c]         ; 00584655
    FXCH ST3                            ; 00584659
    FSUBRP ST2,ST0                      ; 0058465b
    FLD float ptr [ESP + 0x3c]          ; 0058465d
    FMUL float ptr [ESP + 0x5c]         ; 00584661
    FXCH ST2                            ; 00584665
    FCHS                                ; 00584667
    FXCH ST4                            ; 00584669
    FMUL float ptr [ESP + 0x5c]         ; 0058466b
    FLD float ptr [ESP + 0x38]          ; 0058466f
    FMUL float ptr [ESP + 0x5c]         ; 00584673
    FXCH ST6                            ; 00584677
    FSUBRP ST2,ST0                      ; 00584679
    FXCH                                ; 0058467b
    FSTP float ptr [ESP + 0x50]         ; 0058467d
    FLD float ptr [ESP + 0x40]          ; 00584681
    FMUL float ptr [ESP + 0x5c]         ; 00584685
    FXCH ST4                            ; 00584689
    FMUL float ptr [ESP + 0x5c]         ; 0058468b
    FLD float ptr [ESP + 0x54]          ; 0058468f
    FMUL float ptr [ESP + 0x5c]         ; 00584693
    FXCH ST4                            ; 00584697
    FSTP float ptr [ESP]                ; 00584699
    FLD float ptr [ESP + 0x44]          ; 0058469c
    FMUL float ptr [ESP + 0x5c]         ; 005846a0
    FXCH ST3                            ; 005846a4
    FSTP float ptr [ESP + 0x4]          ; 005846a6
    FLD float ptr [ESP + 0x50]          ; 005846aa
    FMUL float ptr [ESP + 0x5c]         ; 005846ae
    FXCH ST2                            ; 005846b2
    FSTP float ptr [ESP + 0x8]          ; 005846b4
    FLD float ptr [EBX + 0x1c]          ; 005846b8
    FMUL float ptr [ESP + 0x4]          ; 005846bb
    FXCH ST6                            ; 005846bf
    FSTP float ptr [ESP + 0x10]         ; 005846c1
    FLD float ptr [EBX + 0xc]           ; 005846c5
    FMUL float ptr [ESP + 0x10]         ; 005846c8
    FXCH ST5                            ; 005846cc
    FSTP float ptr [ESP + 0x14]         ; 005846ce
    FLD float ptr [EBX + 0xc]           ; 005846d2
    FXCH ST4                            ; 005846d5
    FSTP float ptr [ESP + 0x20]         ; 005846d7
    FXCH ST3                            ; 005846db
    FMUL float ptr [ESP + 0x20]         ; 005846dd
    FXCH ST3                            ; 005846e1
    FSTP float ptr [ESP + 0x18]         ; 005846e3
    FLD float ptr [EBX + 0xc]           ; 005846e7
    FMUL float ptr [ESP]                ; 005846ea
    FLD float ptr [EBX + 0x1c]          ; 005846ed
    FMUL float ptr [ESP + 0x14]         ; 005846f0
    FXCH ST3                            ; 005846f4
    FSTP float ptr [ESP + 0x24]         ; 005846f6
    FLD float ptr [EBX + 0x1c]          ; 005846fa
    FMUL float ptr [ESP + 0x24]         ; 005846fd
    FXCH                                ; 00584701
    FADDP ST6,ST0                       ; 00584703
    FXCH ST2                            ; 00584705
    FADDP ST4,ST0                       ; 00584707
    FLD float ptr [EBX + 0x2c]          ; 00584709
    FMUL float ptr [ESP + 0x8]          ; 0058470c
    FLD float ptr [EBX + 0x2c]          ; 00584710
    FMUL float ptr [ESP + 0x18]         ; 00584713
    FXCH ST3                            ; 00584717
    FADDP ST4,ST0                       ; 00584719
    FXCH                                ; 0058471b
    FSTP float ptr [ESP + 0x28]         ; 0058471d
    FLD float ptr [EBX + 0x2c]          ; 00584721
    FMUL float ptr [ESP + 0x28]         ; 00584724
    MOV ECX,0xc                         ; 00584728
    MOV ESI,ESP                         ; 0058472d
    MOV EDI,EBP                         ; 0058472f
    FXCH                                ; 00584731
    FADDP ST5,ST0                       ; 00584733
    FXCH                                ; 00584735
    FADDP ST3,ST0                       ; 00584737
    FADDP                               ; 00584739
    FXCH ST2                            ; 0058473b
    FCHS                                ; 0058473d
    FXCH                                ; 0058473f
    FCHS                                ; 00584741
    FXCH ST2                            ; 00584743
    FCHS                                ; 00584745
    FXCH                                ; 00584747
    FSTP float ptr [ESP + 0xc]          ; 00584749
    FXCH                                ; 0058474d
    FSTP float ptr [ESP + 0x1c]         ; 0058474f
    FSTP float ptr [ESP + 0x2c]         ; 00584753
    MOVSD.REP ES:EDI,ESI                ; 00584757
    MOV EAX,EBP                         ; 00584759
    ADD ESP,0x60                        ; 0058475b
    POP EBP                             ; 0058475e
    POP EDI                             ; 0058475f
    POP EBX                             ; 00584760
    RET                                 ; 00584761
    MOV ECX,0x5d8147                    ; 00584762 | = "..\\core\\xform.cpp"
        ;   Label: LAB_00584762
    MOV ESI,0x23d                       ; 00584767
    PUSH 0x5d8159                       ; 0058476c | = "inverse() - Singular matrix"
    MOV dword ptr [0x01d71de0],ECX      ; 00584771 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00584777 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0058477d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00584782
    JMP 0x00584593                      ; 00584785
        ;   XREF to: 00584593 (UNCONDITIONAL_JUMP)  ; LAB_00584593

