; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_CDoor_process_FUN_00455640(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x50]:4  local_50
;
; Referenced Globals:
;   undefined1* switchdataD_00455630 = 0045569a
;   undefined4 DAT_005b7650
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa5f34
;   undefined4 DAT_01fa5f38
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_door.cpp_CDoor_reposition_FUN_004552a0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_setcolid.cpp_FUN_00511a10
;   core_setcolid.cpp_FUN_00511aa0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455640
        ;   Label: core_door.cpp_CDoor_process_FUN_00455640
    PUSH ESI                            ; 00455641
    PUSH EDI                            ; 00455642
    PUSH EBP                            ; 00455643
    SUB ESP,0xc0                        ; 00455644
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0045564a
    LEA EDX,[ESI + 0x20]                ; 00455651
    MOV EAX,dword ptr [EDX]             ; 00455654
    MOV dword ptr [ESP + 0x58],EAX      ; 00455656
    LEA EAX,[EDX + 0x4]                 ; 0045565a
    MOV EAX,dword ptr [EAX]             ; 0045565d
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045565f
    LEA EAX,[EDX + 0x8]                 ; 00455663
    MOV EAX,dword ptr [EAX]             ; 00455666
    MOV dword ptr [ESP + 0x60],EAX      ; 00455668
    MOV EAX,dword ptr [ESI + 0x9a4]     ; 0045566c
    MOV EDX,dword ptr [ESI + 0x9c0]     ; 00455672
    MOV dword ptr [ESP + 0x80],EAX      ; 00455678
    CMP EDX,0x2                         ; 0045567f
    JGE 0x0045579d                      ; 00455682
        ;   XREF to: 0045579d (CONDITIONAL_JUMP)  ; LAB_0045579d
    MOV EAX,dword ptr [ESI + 0x2d8]     ; 00455688
    CMP EAX,0x3                         ; 0045568e
    JA 0x004556f6                       ; 00455691
        ;   XREF to: 004556f6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x455630]  ; 00455693 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[ESI + 0x2e0]               ; 0045569a
        ;   Label: caseD_0
    PUSH EAX                            ; 004556a0
    MOV EBX,dword ptr [0x005b7650]      ; 004556a1 | DAT_005b7650
    PUSH EBX                            ; 004556a7
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004556a8
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004556ad
    TEST EAX,EAX                        ; 004556b0
    JZ 0x004556ec                       ; 004556b2
        ;   XREF to: 004556ec (CONDITIONAL_JUMP)  ; LAB_004556ec
    MOV DL,byte ptr [ESI + 0x85c]       ; 004556b4
    MOV dword ptr [ESI + 0x2d8],0x1     ; 004556ba
    TEST DL,DL                          ; 004556c4
    JZ 0x004556dc                       ; 004556c6
        ;   XREF to: 004556dc (CONDITIONAL_JUMP)  ; LAB_004556dc
    LEA EDX,[ESI + 0x85c]               ; 004556c8
    PUSH EDX                            ; 004556ce
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004556cf
    PUSH ESI                            ; 004556d5
    CALL dword ptr [EAX + 0x24]         ; 004556d6
    ADD ESP,0x8                         ; 004556d9
    PUSH ESI                            ; 004556dc
        ;   Label: LAB_004556dc
    MOV EDI,dword ptr [0x005be368]      ; 004556dd | DAT_005be368
    PUSH EDI                            ; 004556e3 | DAT_01e57284
    CALL core_setcolid.cpp_FUN_00511aa0 ; 004556e4
        ;   XREF to: 00511aa0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00511aa0()
    ADD ESP,0x8                         ; 004556e9
    MOV dword ptr [ESI + 0x9a4],0x0     ; 004556ec
        ;   Label: LAB_004556ec
    MOV EAX,dword ptr [ESI + 0x2d8]     ; 004556f6
        ;   Label: default
    TEST EAX,EAX                        ; 004556fc
    JBE 0x00455990                      ; 004556fe
        ;   XREF to: 00455990 (CONDITIONAL_JUMP)  ; LAB_00455990
    CMP EAX,0x2                         ; 00455704
    JNZ 0x00455728                      ; 00455707
        ;   XREF to: 00455728 (CONDITIONAL_JUMP)  ; LAB_00455728
    CMP byte ptr [ESI + 0x3a8],0x0      ; 00455709
    JZ 0x00455728                       ; 00455710
        ;   XREF to: 00455728 (CONDITIONAL_JUMP)  ; LAB_00455728
    LEA EAX,[ESI + 0x3a8]               ; 00455712
    PUSH EAX                            ; 00455718
    MOV EBP,dword ptr [0x005b7650]      ; 00455719 | DAT_005b7650
    PUSH EBP                            ; 0045571f
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 00455720
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
        ;   Label: LAB_00455720
    ADD ESP,0x8                         ; 00455725
    PUSH ESI                            ; 00455728
        ;   Label: LAB_00455728
    CALL core_door.cpp_CDoor_reposition_FUN_004552a0 ; 00455729
        ;   XREF to: 004552a0 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_CDoor_reposition_FUN_004552a0()
    ADD ESP,0x4                         ; 0045572e
    FLD float ptr [ESI + 0x9a4]         ; 00455731
    FCOMP float ptr [ESP + 0x80]        ; 00455737
    FNSTSW AX                           ; 0045573e
    SAHF                                ; 00455740
    JZ 0x0045579d                       ; 00455741
        ;   XREF to: 0045579d (CONDITIONAL_JUMP)  ; LAB_0045579d
    CMP dword ptr [ESI + 0x2d0],0x3     ; 00455743
    JZ 0x0045579d                       ; 0045574a
        ;   XREF to: 0045579d (CONDITIONAL_JUMP)  ; LAB_0045579d
    LEA EDX,[ESP + 0x28]                ; 0045574c
    PUSH EDX                            ; 00455750
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00455751
    PUSH ESI                            ; 00455757
    XOR EDI,EDI                         ; 00455758
    CALL dword ptr [EAX + 0x14]         ; 0045575a
    ADD ESP,0x8                         ; 0045575d
    XOR ECX,ECX                         ; 00455760
    LEA EBP,[ESI + 0x20]                ; 00455762
    MOV dword ptr [ESP + 0x7c],ECX      ; 00455765
    LEA EAX,[ESI + 0x3c]                ; 00455769
    MOV dword ptr [ESP + 0xb8],ECX      ; 0045576c
    MOV dword ptr [ESP + 0x84],EAX      ; 00455773
    MOV EAX,[0x005be368]                ; 0045577a | DAT_005be368 | DAT_01e57284
        ;   Label: LAB_0045577a
    MOV EDX,dword ptr [ESP + 0xb8]      ; 0045577f
    CMP EDX,dword ptr [EAX + 0x14ecb0]  ; 00455786 | DAT_01fa5f34
    JL 0x004559c6                       ; 0045578c
        ;   XREF to: 004559c6 (CONDITIONAL_JUMP)  ; LAB_004559c6
    CMP dword ptr [ESP + 0x7c],0x0      ; 00455792
    JNZ 0x00455b1d                      ; 00455797
        ;   XREF to: 00455b1d (CONDITIONAL_JUMP)  ; LAB_00455b1d
    ADD ESP,0xc0                        ; 0045579d
        ;   Label: LAB_0045579d
    POP EBP                             ; 004557a3
    POP EDI                             ; 004557a4
    POP ESI                             ; 004557a5
    POP EBX                             ; 004557a6
    RET                                 ; 004557a7
    LEA EAX,[ESI + 0x344]               ; 004557a8
        ;   Label: caseD_2
    PUSH EAX                            ; 004557ae
    MOV EAX,[0x005b7650]                ; 004557af | DAT_005b7650
    PUSH EAX                            ; 004557b4
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004557b5
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004557ba
    TEST EAX,EAX                        ; 004557bd
    JZ 0x004557e9                       ; 004557bf
        ;   XREF to: 004557e9 (CONDITIONAL_JUMP)  ; LAB_004557e9
    MOV AH,byte ptr [ESI + 0x8c0]       ; 004557c1
    MOV dword ptr [ESI + 0x2d8],0x3     ; 004557c7
    TEST AH,AH                          ; 004557d1
    JZ 0x004557e9                       ; 004557d3
        ;   XREF to: 004557e9 (CONDITIONAL_JUMP)  ; LAB_004557e9
    LEA EDX,[ESI + 0x8c0]               ; 004557d5
    PUSH EDX                            ; 004557db
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004557dc
    PUSH ESI                            ; 004557e2
    CALL dword ptr [EAX + 0x24]         ; 004557e3
    ADD ESP,0x8                         ; 004557e6
    MOV EAX,dword ptr [ESI + 0x9a8]     ; 004557e9
        ;   Label: LAB_004557e9
    MOV dword ptr [ESI + 0x9a4],EAX     ; 004557ef
    JMP 0x004556f6                      ; 004557f5
        ;   XREF to: 004556f6 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0xd8]          ; 004557fa
        ;   Label: caseD_1
    FMUL float ptr [ESI + 0x9a8]        ; 00455801
    FDIV float ptr [ESI + 0x9ac]        ; 00455807
    FLD float ptr [ESI + 0x9a8]         ; 0045580d
    FXCH                                ; 00455813
    FADD float ptr [ESP + 0x80]         ; 00455815
    FLDZ                                ; 0045581c
    FXCH                                ; 0045581e
    FSTP float ptr [ESI + 0x9a4]        ; 00455820
    FCOMPP                              ; 00455826
    FNSTSW AX                           ; 00455828
    SAHF                                ; 0045582a
    JNC 0x00455875                      ; 0045582b
        ;   XREF to: 00455875 (CONDITIONAL_JUMP)  ; LAB_00455875
    FLD float ptr [ESI + 0x9a4]         ; 0045582d
    FCOMP float ptr [ESI + 0x9a8]       ; 00455833
    FNSTSW AX                           ; 00455839
    SAHF                                ; 0045583b
    JBE 0x004556f6                      ; 0045583c
        ;   XREF to: 004556f6 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x2d8],0x2     ; 00455842
    FLD float ptr [ESI + 0x9a8]         ; 0045584c
    MOV ECX,dword ptr [ESI + 0x9c0]     ; 00455852
    FSTP float ptr [ESI + 0x9a4]        ; 00455858
    TEST ECX,ECX                        ; 0045585e
    JZ 0x004556f6                       ; 00455860
        ;   XREF to: 004556f6 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x9c0],0x2     ; 00455866
    JMP 0x004556f6                      ; 00455870
        ;   XREF to: 004556f6 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x9a4]         ; 00455875
        ;   Label: LAB_00455875
    FCOMP float ptr [ESI + 0x9a8]       ; 0045587b
    FNSTSW AX                           ; 00455881
    SAHF                                ; 00455883
    JNC 0x004556f6                      ; 00455884
        ;   XREF to: 004556f6 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x2d8],0x2     ; 0045588a
    FLD float ptr [ESI + 0x9a8]         ; 00455894
    MOV EDX,dword ptr [ESI + 0x9c0]     ; 0045589a
    FSTP float ptr [ESI + 0x9a4]        ; 004558a0
    TEST EDX,EDX                        ; 004558a6
    JZ 0x004556f6                       ; 004558a8
        ;   XREF to: 004556f6 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x9c0],0x2     ; 004558ae
    JMP 0x004556f6                      ; 004558b8
        ;   XREF to: 004556f6 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0xd8]          ; 004558bd
        ;   Label: caseD_3
    FMUL float ptr [ESI + 0x9a8]        ; 004558c4
    FDIV float ptr [ESI + 0x9b0]        ; 004558ca
    FLD float ptr [ESI + 0x9a8]         ; 004558d0
    FXCH                                ; 004558d6
    FSUBR float ptr [ESP + 0x80]        ; 004558d8
    FLDZ                                ; 004558df
    FXCH                                ; 004558e1
    FSTP float ptr [ESI + 0x9a4]        ; 004558e3
    FCOMPP                              ; 004558e9
    FNSTSW AX                           ; 004558eb
    SAHF                                ; 004558ed
    JNC 0x00455940                      ; 004558ee
        ;   XREF to: 00455940 (CONDITIONAL_JUMP)  ; LAB_00455940
    FLD float ptr [ESI + 0x9a4]         ; 004558f0
    FLDZ                                ; 004558f6
    FCOMPP                              ; 004558f8
    FNSTSW AX                           ; 004558fa
    SAHF                                ; 004558fc
    JBE 0x004556f6                      ; 004558fd
        ;   XREF to: 004556f6 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x2d8],0x0     ; 00455903
    MOV EDI,dword ptr [ESI + 0x9c0]     ; 0045590d
    MOV dword ptr [ESI + 0x9a4],0x0     ; 00455913
    TEST EDI,EDI                        ; 0045591d
    JZ 0x0045592b                       ; 0045591f
        ;   XREF to: 0045592b (CONDITIONAL_JUMP)  ; LAB_0045592b
    MOV dword ptr [ESI + 0x9c0],0x2     ; 00455921
    PUSH ESI                            ; 0045592b
        ;   Label: LAB_0045592b
    MOV EBP,dword ptr [0x005be368]      ; 0045592c | DAT_005be368
    PUSH EBP                            ; 00455932 | DAT_01e57284
    CALL core_setcolid.cpp_FUN_00511a10 ; 00455933
        ;   XREF to: 00511a10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00511a10()
    ADD ESP,0x8                         ; 00455938
    JMP 0x004556f6                      ; 0045593b
        ;   XREF to: 004556f6 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x9a4]         ; 00455940
        ;   Label: LAB_00455940
    FLDZ                                ; 00455946
    FCOMPP                              ; 00455948
    FNSTSW AX                           ; 0045594a
    SAHF                                ; 0045594c
    JNC 0x004556f6                      ; 0045594d
        ;   XREF to: 004556f6 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x2d8],0x0     ; 00455953
    MOV ECX,dword ptr [ESI + 0x9c0]     ; 0045595d
    MOV dword ptr [ESI + 0x9a4],0x0     ; 00455963
    TEST ECX,ECX                        ; 0045596d
    JZ 0x0045597b                       ; 0045596f
        ;   XREF to: 0045597b (CONDITIONAL_JUMP)  ; LAB_0045597b
    MOV dword ptr [ESI + 0x9c0],0x2     ; 00455971
    PUSH ESI                            ; 0045597b
        ;   Label: LAB_0045597b
    MOV EBX,dword ptr [0x005be368]      ; 0045597c | DAT_005be368
    PUSH EBX                            ; 00455982 | DAT_01e57284
    CALL core_setcolid.cpp_FUN_00511a10 ; 00455983
        ;   XREF to: 00511a10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00511a10()
    ADD ESP,0x8                         ; 00455988
    JMP 0x004556f6                      ; 0045598b
        ;   XREF to: 004556f6 (UNCONDITIONAL_JUMP)  ; default
    CMP byte ptr [ESI + 0x40c],0x0      ; 00455990
        ;   Label: LAB_00455990
    JZ 0x00455728                       ; 00455997
        ;   XREF to: 00455728 (CONDITIONAL_JUMP)  ; LAB_00455728
    LEA EAX,[ESI + 0x40c]               ; 0045599d
    PUSH EAX                            ; 004559a3
    MOV EAX,[0x005b7650]                ; 004559a4 | DAT_005b7650
    PUSH EAX                            ; 004559a9
    JMP 0x00455720                      ; 004559aa
        ;   XREF to: 00455720 (UNCONDITIONAL_JUMP)  ; LAB_00455720
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004559af
        ;   Label: LAB_004559af
    INC EDX                             ; 004559b6
    ADD EDI,0x4                         ; 004559b7
    MOV dword ptr [ESP + 0xb8],EDX      ; 004559ba
    JMP 0x0045577a                      ; 004559c1
        ;   XREF to: 0045577a (UNCONDITIONAL_JUMP)  ; LAB_0045577a
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14ecb4] ; 004559c6 | DAT_01fa5f38
        ;   Label: LAB_004559c6
    MOV EAX,ESP                         ; 004559cd
    PUSH EAX                            ; 004559cf
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 004559d0
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990()
    ADD ESP,0x4                         ; 004559d5
    MOV EAX,ESP                         ; 004559d8
    PUSH EAX                            ; 004559da
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004559db
    PUSH EBX                            ; 004559e1
    CALL dword ptr [EDX + 0x34]         ; 004559e2
    ADD ESP,0x8                         ; 004559e5
    CMP EAX,0x2                         ; 004559e8
    JNZ 0x004559af                      ; 004559eb
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    FLD float ptr [ESP + 0x14]          ; 004559ed
    FADD float ptr [EBX + 0x24]         ; 004559f1
    FLD float ptr [ESI + 0x24]          ; 004559f4
    FADD float ptr [ESP + 0x38]         ; 004559f7
    FCOMPP                              ; 004559fb
    FNSTSW AX                           ; 004559fd
    SAHF                                ; 004559ff
    JC 0x004559af                       ; 00455a00
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    FLD float ptr [ESP + 0x18]          ; 00455a02
    FADD float ptr [EBX + 0x24]         ; 00455a06
    FLD float ptr [ESI + 0x24]          ; 00455a09
    FADD float ptr [ESP + 0x2c]         ; 00455a0c
    FCOMPP                              ; 00455a10
    FNSTSW AX                           ; 00455a12
    SAHF                                ; 00455a14
    JA 0x004559af                       ; 00455a15
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    FLD float ptr [EBX + 0x20]          ; 00455a17
    LEA EAX,[ESP + 0x4c]                ; 00455a1a
    FSUB float ptr [EBP]                ; 00455a1e
    PUSH EAX                            ; 00455a21
    FSTP float ptr [ESP + 0x50]         ; 00455a22
    LEA EAX,[ESP + 0x44]                ; 00455a26
    FLD float ptr [EBX + 0x24]          ; 00455a2a
    PUSH EAX                            ; 00455a2d
    FSUB float ptr [EBP + 0x4]          ; 00455a2e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00455a31
    FSTP float ptr [ESP + 0x58]         ; 00455a38
    FLD float ptr [EBX + 0x28]          ; 00455a3c
    FSUB float ptr [EBP + 0x8]          ; 00455a3f
    PUSH EAX                            ; 00455a42
    FSTP float ptr [ESP + 0x60]         ; 00455a43
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00455a47
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    MOV EBX,EAX                         ; 00455a4c
    LEA EAX,[ESP + 0x70]                ; 00455a4e
    ADD ESP,0xc                         ; 00455a52
    CMP EAX,EBX                         ; 00455a55
    JZ 0x00455a6d                       ; 00455a57
        ;   XREF to: 00455a6d (CONDITIONAL_JUMP)  ; LAB_00455a6d
    MOV EAX,dword ptr [EBX]             ; 00455a59
    MOV dword ptr [ESP + 0x64],EAX      ; 00455a5b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00455a5f
    MOV dword ptr [ESP + 0x68],EAX      ; 00455a62
    MOV EAX,dword ptr [EBX + 0x8]       ; 00455a66
    MOV dword ptr [ESP + 0x6c],EAX      ; 00455a69
    FLD float ptr [ESP + 0x64]          ; 00455a6d
        ;   Label: LAB_00455a6d
    FADD float ptr [ESP + 0x1c]         ; 00455a71
    FST float ptr [ESP + 0x88]          ; 00455a75
    FCOMP float ptr [ESP + 0x28]        ; 00455a7c
    FNSTSW AX                           ; 00455a80
    SAHF                                ; 00455a82
    JC 0x004559af                       ; 00455a83
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    FLD float ptr [ESP + 0x64]          ; 00455a89
    FSUB float ptr [ESP + 0x1c]         ; 00455a8d
    FST float ptr [ESP + 0x8c]          ; 00455a91
    FCOMP float ptr [ESP + 0x34]        ; 00455a98
    FNSTSW AX                           ; 00455a9c
    SAHF                                ; 00455a9e
    JA 0x004559af                       ; 00455a9f
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    FLD float ptr [ESP + 0x6c]          ; 00455aa5
    FADD float ptr [ESP + 0x1c]         ; 00455aa9
    FST float ptr [ESP + 0x90]          ; 00455aad
    FCOMP float ptr [ESP + 0x30]        ; 00455ab4
    FNSTSW AX                           ; 00455ab8
    SAHF                                ; 00455aba
    JC 0x004559af                       ; 00455abb
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    FLD float ptr [ESP + 0x6c]          ; 00455ac1
    FSUB float ptr [ESP + 0x1c]         ; 00455ac5
    FST float ptr [ESP + 0x94]          ; 00455ac9
    FCOMP float ptr [ESP + 0x3c]        ; 00455ad0
    FNSTSW AX                           ; 00455ad4
    SAHF                                ; 00455ad6
    JA 0x004559af                       ; 00455ad7
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    FLD float ptr [ESP + 0x8c]          ; 00455add
    FCOMP float ptr [ESP + 0x28]        ; 00455ae4
    FNSTSW AX                           ; 00455ae8
    SAHF                                ; 00455aea
    JC 0x00455b55                       ; 00455aeb
        ;   XREF to: 00455b55 (CONDITIONAL_JUMP)  ; LAB_00455b55
    FLD float ptr [ESP + 0x88]          ; 00455aed
    FCOMP float ptr [ESP + 0x34]        ; 00455af4
    FNSTSW AX                           ; 00455af8
    SAHF                                ; 00455afa
    JA 0x00455b55                       ; 00455afb
        ;   XREF to: 00455b55 (CONDITIONAL_JUMP)  ; LAB_00455b55
    FLD float ptr [ESP + 0x94]          ; 00455afd
    FCOMP float ptr [ESP + 0x30]        ; 00455b04
    FNSTSW AX                           ; 00455b08
    SAHF                                ; 00455b0a
    JC 0x00455b55                       ; 00455b0b
        ;   XREF to: 00455b55 (CONDITIONAL_JUMP)  ; LAB_00455b55
    FLD float ptr [ESP + 0x90]          ; 00455b0d
    FCOMP float ptr [ESP + 0x3c]        ; 00455b14
    FNSTSW AX                           ; 00455b18
    SAHF                                ; 00455b1a
    JA 0x00455b55                       ; 00455b1b
        ;   XREF to: 00455b55 (CONDITIONAL_JUMP)  ; LAB_00455b55
    LEA EDX,[ESI + 0x20]                ; 00455b1d
        ;   Label: LAB_00455b1d
    MOV EAX,dword ptr [ESP + 0x58]      ; 00455b20
    MOV dword ptr [EDX],EAX             ; 00455b24
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00455b26
    MOV dword ptr [EDX + 0x4],EAX       ; 00455b2a
    MOV EAX,dword ptr [ESP + 0x60]      ; 00455b2d
    MOV dword ptr [EDX + 0x8],EAX       ; 00455b31
    MOV EAX,dword ptr [ESP + 0x80]      ; 00455b34
    PUSH ESI                            ; 00455b3b
    MOV dword ptr [ESI + 0x9a4],EAX     ; 00455b3c
    CALL core_door.cpp_CDoor_reposition_FUN_004552a0 ; 00455b42
        ;   XREF to: 004552a0 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_CDoor_reposition_FUN_004552a0()
    ADD ESP,0x4                         ; 00455b47
    ADD ESP,0xc0                        ; 00455b4a
    POP EBP                             ; 00455b50
    POP EDI                             ; 00455b51
    POP ESI                             ; 00455b52
    POP EBX                             ; 00455b53
    RET                                 ; 00455b54
    FLD float ptr [ESP + 0x1c]          ; 00455b55
        ;   Label: LAB_00455b55
    FMUL ST0                            ; 00455b59
    FLD float ptr [ESP + 0x34]          ; 00455b5b
    FSUB float ptr [ESP + 0x64]         ; 00455b5f
    FMUL ST0                            ; 00455b63
    FXCH                                ; 00455b65
    FSTP float ptr [ESP + 0xbc]         ; 00455b67
    FSUBR float ptr [ESP + 0xbc]        ; 00455b6e
    FSQRT                               ; 00455b75
    FLD float ptr [ESP + 0x6c]          ; 00455b77
    FLD ST0                             ; 00455b7b
    FADD ST0,ST2                        ; 00455b7d
    FXCH                                ; 00455b7f
    FSUBRP ST2,ST0                      ; 00455b81
    FSTP float ptr [ESP + 0x9c]         ; 00455b83
    FSTP float ptr [ESP + 0xa0]         ; 00455b8a
    FLD float ptr [ESP + 0x9c]          ; 00455b91
    FCOMP float ptr [ESP + 0x30]        ; 00455b98
    FNSTSW AX                           ; 00455b9c
    SAHF                                ; 00455b9e
    JC 0x00455bb5                       ; 00455b9f
        ;   XREF to: 00455bb5 (CONDITIONAL_JUMP)  ; LAB_00455bb5
    FLD float ptr [ESP + 0x9c]          ; 00455ba1
    FCOMP float ptr [ESP + 0x3c]        ; 00455ba8
    FNSTSW AX                           ; 00455bac
    SAHF                                ; 00455bae
    JBE 0x00455b1d                      ; 00455baf
        ;   XREF to: 00455b1d (CONDITIONAL_JUMP)  ; LAB_00455b1d
    FLD float ptr [ESP + 0xa0]          ; 00455bb5
        ;   Label: LAB_00455bb5
    FCOMP float ptr [ESP + 0x30]        ; 00455bbc
    FNSTSW AX                           ; 00455bc0
    SAHF                                ; 00455bc2
    JC 0x00455bd9                       ; 00455bc3
        ;   XREF to: 00455bd9 (CONDITIONAL_JUMP)  ; LAB_00455bd9
    FLD float ptr [ESP + 0xa0]          ; 00455bc5
    FCOMP float ptr [ESP + 0x3c]        ; 00455bcc
    FNSTSW AX                           ; 00455bd0
    SAHF                                ; 00455bd2
    JBE 0x00455b1d                      ; 00455bd3
        ;   XREF to: 00455b1d (CONDITIONAL_JUMP)  ; LAB_00455b1d
    FLD float ptr [ESP + 0x28]          ; 00455bd9
        ;   Label: LAB_00455bd9
    FSUB float ptr [ESP + 0x64]         ; 00455bdd
    FMUL ST0                            ; 00455be1
    FSUBR float ptr [ESP + 0xbc]        ; 00455be3
    FSQRT                               ; 00455bea
    FLD float ptr [ESP + 0x6c]          ; 00455bec
    FLD ST0                             ; 00455bf0
    FADD ST0,ST2                        ; 00455bf2
    FXCH                                ; 00455bf4
    FSUBRP ST2,ST0                      ; 00455bf6
    FSTP float ptr [ESP + 0xac]         ; 00455bf8
    FSTP float ptr [ESP + 0xb4]         ; 00455bff
    FLD float ptr [ESP + 0xac]          ; 00455c06
    FCOMP float ptr [ESP + 0x30]        ; 00455c0d
    FNSTSW AX                           ; 00455c11
    SAHF                                ; 00455c13
    JC 0x00455c2a                       ; 00455c14
        ;   XREF to: 00455c2a (CONDITIONAL_JUMP)  ; LAB_00455c2a
    FLD float ptr [ESP + 0xac]          ; 00455c16
    FCOMP float ptr [ESP + 0x3c]        ; 00455c1d
    FNSTSW AX                           ; 00455c21
    SAHF                                ; 00455c23
    JBE 0x00455b1d                      ; 00455c24
        ;   XREF to: 00455b1d (CONDITIONAL_JUMP)  ; LAB_00455b1d
    FLD float ptr [ESP + 0xb4]          ; 00455c2a
        ;   Label: LAB_00455c2a
    FCOMP float ptr [ESP + 0x30]        ; 00455c31
    FNSTSW AX                           ; 00455c35
    SAHF                                ; 00455c37
    JC 0x00455c4e                       ; 00455c38
        ;   XREF to: 00455c4e (CONDITIONAL_JUMP)  ; LAB_00455c4e
    FLD float ptr [ESP + 0xb4]          ; 00455c3a
    FCOMP float ptr [ESP + 0x3c]        ; 00455c41
    FNSTSW AX                           ; 00455c45
    SAHF                                ; 00455c47
    JBE 0x00455b1d                      ; 00455c48
        ;   XREF to: 00455b1d (CONDITIONAL_JUMP)  ; LAB_00455b1d
    FLD float ptr [ESP + 0x3c]          ; 00455c4e
        ;   Label: LAB_00455c4e
    FSUB float ptr [ESP + 0x6c]         ; 00455c52
    FMUL ST0                            ; 00455c56
    FSUBR float ptr [ESP + 0xbc]        ; 00455c58
    FSQRT                               ; 00455c5f
    FLD float ptr [ESP + 0x64]          ; 00455c61
    FLD ST0                             ; 00455c65
    FADD ST0,ST2                        ; 00455c67
    FXCH                                ; 00455c69
    FSUBRP ST2,ST0                      ; 00455c6b
    FSTP float ptr [ESP + 0xa8]         ; 00455c6d
    FSTP float ptr [ESP + 0xb0]         ; 00455c74
    FLD float ptr [ESP + 0xa8]          ; 00455c7b
    FCOMP float ptr [ESP + 0x28]        ; 00455c82
    FNSTSW AX                           ; 00455c86
    SAHF                                ; 00455c88
    JC 0x00455c9f                       ; 00455c89
        ;   XREF to: 00455c9f (CONDITIONAL_JUMP)  ; LAB_00455c9f
    FLD float ptr [ESP + 0xa8]          ; 00455c8b
    FCOMP float ptr [ESP + 0x34]        ; 00455c92
    FNSTSW AX                           ; 00455c96
    SAHF                                ; 00455c98
    JBE 0x00455b1d                      ; 00455c99
        ;   XREF to: 00455b1d (CONDITIONAL_JUMP)  ; LAB_00455b1d
    FLD float ptr [ESP + 0xb0]          ; 00455c9f
        ;   Label: LAB_00455c9f
    FCOMP float ptr [ESP + 0x28]        ; 00455ca6
    FNSTSW AX                           ; 00455caa
    SAHF                                ; 00455cac
    JC 0x00455cc3                       ; 00455cad
        ;   XREF to: 00455cc3 (CONDITIONAL_JUMP)  ; LAB_00455cc3
    FLD float ptr [ESP + 0xb0]          ; 00455caf
    FCOMP float ptr [ESP + 0x34]        ; 00455cb6
    FNSTSW AX                           ; 00455cba
    SAHF                                ; 00455cbc
    JBE 0x00455b1d                      ; 00455cbd
        ;   XREF to: 00455b1d (CONDITIONAL_JUMP)  ; LAB_00455b1d
    FLD float ptr [ESP + 0x30]          ; 00455cc3
        ;   Label: LAB_00455cc3
    FSUB float ptr [ESP + 0x6c]         ; 00455cc7
    FMUL ST0                            ; 00455ccb
    FSUBR float ptr [ESP + 0xbc]        ; 00455ccd
    FSQRT                               ; 00455cd4
    FLD float ptr [ESP + 0x64]          ; 00455cd6
    FLD ST0                             ; 00455cda
    FADD ST0,ST2                        ; 00455cdc
    FXCH                                ; 00455cde
    FSUBRP ST2,ST0                      ; 00455ce0
    FSTP float ptr [ESP + 0xa4]         ; 00455ce2
    FSTP float ptr [ESP + 0x98]         ; 00455ce9
    FLD float ptr [ESP + 0xa4]          ; 00455cf0
    FCOMP float ptr [ESP + 0x28]        ; 00455cf7
    FNSTSW AX                           ; 00455cfb
    SAHF                                ; 00455cfd
    JC 0x00455d14                       ; 00455cfe
        ;   XREF to: 00455d14 (CONDITIONAL_JUMP)  ; LAB_00455d14
    FLD float ptr [ESP + 0xa4]          ; 00455d00
    FCOMP float ptr [ESP + 0x34]        ; 00455d07
    FNSTSW AX                           ; 00455d0b
    SAHF                                ; 00455d0d
    JBE 0x00455b1d                      ; 00455d0e
        ;   XREF to: 00455b1d (CONDITIONAL_JUMP)  ; LAB_00455b1d
    FLD float ptr [ESP + 0x98]          ; 00455d14
        ;   Label: LAB_00455d14
    FCOMP float ptr [ESP + 0x28]        ; 00455d1b
    FNSTSW AX                           ; 00455d1f
    SAHF                                ; 00455d21
    JC 0x004559af                       ; 00455d22
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    FLD float ptr [ESP + 0x98]          ; 00455d28
    FCOMP float ptr [ESP + 0x34]        ; 00455d2f
    FNSTSW AX                           ; 00455d33
    SAHF                                ; 00455d35
    JA 0x004559af                       ; 00455d36
        ;   XREF to: 004559af (CONDITIONAL_JUMP)  ; LAB_004559af
    JMP 0x00455b1d                      ; 00455d3c
        ;   XREF to: 00455b1d (UNCONDITIONAL_JUMP)  ; LAB_00455b1d

