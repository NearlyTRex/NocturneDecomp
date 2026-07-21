; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005055f0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   FUN_004a3b90 at 004a3d28
;
; Referenced Globals:
;   string s_//_CScript_version_0058fdd5
;   undefined4 DAT_0058fde9
;   string s_//_gGame->letterboxMode_0058fded
;   undefined4 DAT_0058fe06
;   string s_//_gGame->allowDamageFlag_0058fe0a
;   undefined4 DAT_0058fe25
;   string s_//_gGame->allowEnemyAttackFlag_0058fe29
;   undefined4 DAT_0058fe49
;   string s_//_letterBoxBlackT_0058fe4d
;   undefined4 DAT_0058fe61
;   string s_//_nextCmd_0058fe65
;   undefined4 DAT_0058fe71
;   string s_//_currentMessage_0058fe75
;   string s_\"%s\"_0058fe88
;   string s_//_cmdTimer_0058fe8e
;   ... and 17 more
;
; Called Functions:
;   core_script.cpp_CScript_computeChecksum_FUN_00505820
;   core_script.cpp_writeActorReference_FUN_00505280
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005055f0
        ;   Label: FUN_005055f0
    PUSH ESI                            ; 005055f1
    PUSH EDI                            ; 005055f2
    PUSH EBP                            ; 005055f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005055f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005055f8
    PUSH 0x58fdd5                       ; 005055fc | = "// CScript version\n"
    PUSH EDI                            ; 00505601
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505602
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 00505607
    PUSH 0x6                            ; 0050560a
    PUSH 0x58fde9                       ; 0050560c | DAT_0058fde9
    PUSH EDI                            ; 00505611
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505612
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 00505617
    PUSH 0x58fded                       ; 0050561a | = "// gGame->letterboxMode\n"
    PUSH EDI                            ; 0050561f
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505620
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,[0x005b9354]                ; 00505625 | DAT_005b9354
    ADD ESP,0x8                         ; 0050562a
    MOV EDX,dword ptr [EAX + 0x228]     ; 0050562d | DAT_01c77814
    PUSH EDX                            ; 00505633
    PUSH 0x58fe06                       ; 00505634 | DAT_0058fe06
    PUSH EDI                            ; 00505639
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050563a
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0050563f
    PUSH 0x58fe0a                       ; 00505642 | = "// gGame->allowDamageFlag\n"
    PUSH EDI                            ; 00505647
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505648
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,[0x005b9354]                ; 0050564d | DAT_005b9354
    ADD ESP,0x8                         ; 00505652
    MOV ECX,dword ptr [EAX + 0x22c]     ; 00505655 | DAT_01c77818
    PUSH ECX                            ; 0050565b
    PUSH 0x58fe25                       ; 0050565c | DAT_0058fe25
    PUSH EDI                            ; 00505661
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505662
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 00505667
    PUSH 0x58fe29                       ; 0050566a | = "// gGame->allowEnemyAttackFlag\n"
    PUSH EDI                            ; 0050566f
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505670
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,[0x005b9354]                ; 00505675 | DAT_005b9354
    ADD ESP,0x8                         ; 0050567a
    MOV EBX,dword ptr [EAX + 0x230]     ; 0050567d | DAT_01c7781c
    PUSH EBX                            ; 00505683
    PUSH 0x58fe49                       ; 00505684 | DAT_0058fe49
    PUSH EDI                            ; 00505689
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050568a
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0050568f
    PUSH 0x58fe4d                       ; 00505692 | = "// letterBoxBlackT\n"
    PUSH EDI                            ; 00505697
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505698
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0050569d
    SUB ESP,0x8                         ; 005056a0
    FLD float ptr [0x01e56c20]          ; 005056a3 | DAT_01e56c20
    FSTP double ptr [ESP]               ; 005056a9
    PUSH 0x58fe61                       ; 005056ac | DAT_0058fe61
    PUSH EDI                            ; 005056b1
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005056b2
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 005056b7
    PUSH 0x58fe65                       ; 005056ba | = "// nextCmd\n"
    PUSH EDI                            ; 005056bf
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005056c0
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 005056c5
    MOV ESI,dword ptr [EBP + 0x40]      ; 005056c8
    PUSH ESI                            ; 005056cb
    PUSH 0x58fe71                       ; 005056cc | DAT_0058fe71
    PUSH EDI                            ; 005056d1
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005056d2
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 005056d7
    PUSH 0x58fe75                       ; 005056da | = "// currentMessage\n"
    PUSH EDI                            ; 005056df
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005056e0
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 005056e5
    LEA EAX,[EBP + 0x4c]                ; 005056e8
    PUSH EAX                            ; 005056eb
    PUSH 0x58fe88                       ; 005056ec | = "\"%s\"\n"
    PUSH EDI                            ; 005056f1
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005056f2
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 005056f7
    PUSH 0x58fe8e                       ; 005056fa | = "// cmdTimer\n"
    PUSH EDI                            ; 005056ff
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505700
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 00505705
    SUB ESP,0x8                         ; 00505708
    FLD float ptr [EBP + 0x44]          ; 0050570b
    FSTP double ptr [ESP]               ; 0050570e
    PUSH 0x58fe9b                       ; 00505711 | DAT_0058fe9b
    PUSH EDI                            ; 00505716
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505717
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0050571c
    PUSH 0x58fe9f                       ; 0050571f | = "// dialogWavTime\n"
    PUSH EDI                            ; 00505724
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505725
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0050572a
    SUB ESP,0x8                         ; 0050572d
    FLD float ptr [EBP + 0x48]          ; 00505730
    FSTP double ptr [ESP]               ; 00505733
    PUSH 0x58feb1                       ; 00505736 | DAT_0058feb1
    PUSH EDI                            ; 0050573b
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050573c
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 00505741
    PUSH 0x58feb5                       ; 00505744 | = "// whoIsSpeaking\n"
    PUSH EDI                            ; 00505749
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050574a
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0050574f
    LEA EAX,[EBP + 0x4]                 ; 00505752
    PUSH EAX                            ; 00505755
    PUSH EDI                            ; 00505756
    CALL core_script.cpp_writeActorReference_FUN_00505280 ; 00505757
        ;   XREF to: 00505280 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_writeActorReference_FUN_00505280()
    ADD ESP,0x8                         ; 0050575c
    PUSH 0x58fec7                       ; 0050575f | = "// focusActor\n"
    PUSH EDI                            ; 00505764
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505765
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 0050576a
    LEA EAX,[EBP + 0xc]                 ; 0050576d
    PUSH EAX                            ; 00505770
    PUSH EDI                            ; 00505771
    CALL core_script.cpp_writeActorReference_FUN_00505280 ; 00505772
        ;   XREF to: 00505280 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_writeActorReference_FUN_00505280()
    ADD ESP,0x8                         ; 00505777
    PUSH 0x58fed6                       ; 0050577a | = "// focusActorLocked\n"
    PUSH EDI                            ; 0050577f
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505780
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 00505785
    MOV EAX,dword ptr [EBP + 0x14]      ; 00505788
    PUSH EAX                            ; 0050578b
    PUSH 0x58feeb                       ; 0050578c | DAT_0058feeb
    PUSH EDI                            ; 00505791
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00505792
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 00505797
    PUSH 0x58feef                       ; 0050579a | = "// callStack count, list\n"
    PUSH EDI                            ; 0050579f
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005057a0
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 005057a5
    MOV EDX,dword ptr [EBP + 0x454]     ; 005057a8
    PUSH EDX                            ; 005057ae
    PUSH 0x58ff09                       ; 005057af | DAT_0058ff09
    PUSH EDI                            ; 005057b4
    XOR ESI,ESI                         ; 005057b5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005057b7
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [EBP + 0x454]     ; 005057bc
    ADD ESP,0xc                         ; 005057c2
    TEST ECX,ECX                        ; 005057c5
    JLE 0x005057f0                      ; 005057c7
        ;   XREF to: 005057f0 (CONDITIONAL_JUMP)  ; LAB_005057f0
    MOV EBX,EBP                         ; 005057c9
    MOV EAX,dword ptr [EBX + 0x458]     ; 005057cb
        ;   Label: LAB_005057cb
    PUSH EAX                            ; 005057d1
    PUSH 0x58ff0d                       ; 005057d2 | DAT_0058ff0d
    PUSH EDI                            ; 005057d7
    ADD EBX,0x4                         ; 005057d8
    INC ESI                             ; 005057db
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005057dc
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [EBP + 0x454]     ; 005057e1
    ADD ESP,0xc                         ; 005057e7
    CMP ESI,EDX                         ; 005057ea
    JL 0x005057cb                       ; 005057ec
        ;   XREF to: 005057cb (CONDITIONAL_JUMP)  ; LAB_005057cb
    MOV EAX,EAX                         ; 005057ee
    PUSH 0x58ff11                       ; 005057f0 | = "// CRC\n"
        ;   Label: LAB_005057f0
    PUSH EDI                            ; 005057f5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 005057f6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 005057fb
    PUSH EBP                            ; 005057fe
    CALL core_script.cpp_CScript_computeChecksum_FUN_00505820 ; 005057ff
        ;   XREF to: 00505820 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_computeChecksum_FUN_00505820()
    ADD ESP,0x4                         ; 00505804
    PUSH EAX                            ; 00505807
    PUSH 0x58ff19                       ; 00505808 | DAT_0058ff19
    PUSH EDI                            ; 0050580d
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0050580e
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 00505813
    POP EBP                             ; 00505816
    POP EDI                             ; 00505817
    POP ESI                             ; 00505818
    POP EBX                             ; 00505819
    RET                                 ; 0050581a

