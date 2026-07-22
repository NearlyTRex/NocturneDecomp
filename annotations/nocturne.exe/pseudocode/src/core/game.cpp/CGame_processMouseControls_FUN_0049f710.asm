; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processMouseControls_FUN_0049f710(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_0049e7d0 at 0049e856
;
; Referenced Globals:
;   double DOUBLE_00582a1a = 0.0000152587890625
;   double DOUBLE_00582a22 = 0.75
;   double DOUBLE_00582a2a = -1
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005be368
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01c7841c
;   undefined4 DAT_01fb1d40
;
; Called Functions:
;   core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30
;   wincore_winrun.cpp_setCursorPosition_FUN_00558d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f710
        ;   Label: core_game.cpp_CGame_processMouseControls_FUN_0049f710
    PUSH ESI                            ; 0049f711
    PUSH EDI                            ; 0049f712
    PUSH EBP                            ; 0049f713
    MOV EBP,ESP                         ; 0049f714
    SUB ESP,0x2c                        ; 0049f716
    AND ESP,0xfffffff8                  ; 0049f719
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049f71c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0049f71f
    PUSH EBX                            ; 0049f722
    PUSH EDI                            ; 0049f723
    CALL core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30 ; 0049f724
        ;   XREF to: 0049ee30 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30()
    MOV EDX,dword ptr [EDI + 0x27c]     ; 0049f729
    ADD ESP,0x8                         ; 0049f72f
    TEST EDX,EDX                        ; 0049f732
    JZ 0x0049f73d                       ; 0049f734
        ;   XREF to: 0049f73d (CONDITIONAL_JUMP)  ; LAB_0049f73d
    MOV ESP,EBP                         ; 0049f736
        ;   Label: LAB_0049f736
    POP EBP                             ; 0049f738
    POP EDI                             ; 0049f739
    POP ESI                             ; 0049f73a
    POP EBX                             ; 0049f73b
    RET                                 ; 0049f73c
    MOV EAX,[0x005b761c]                ; 0049f73d | DAT_005b761c
        ;   Label: LAB_0049f73d
    MOV EDX,EAX                         ; 0049f742
    SAR EDX,0x1f                        ; 0049f744
    SUB EAX,EDX                         ; 0049f747
    SAR EAX,0x1                         ; 0049f749
    MOV dword ptr [ESP + 0x20],EAX      ; 0049f74b
    MOV EAX,[0x005b7620]                ; 0049f74f | DAT_005b7620
    MOV EDX,EAX                         ; 0049f754
    SAR EDX,0x1f                        ; 0049f756
    SUB EAX,EDX                         ; 0049f759
    SAR EAX,0x1                         ; 0049f75b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0049f75d
    MOV ESI,EAX                         ; 0049f761
    MOV EAX,[0x01bd1d8c]                ; 0049f763 | DAT_01bd1d8c
    SUB EAX,ECX                         ; 0049f768
    MOV dword ptr [ESP + 0x18],EAX      ; 0049f76a
    MOV EAX,[0x01bd1d90]                ; 0049f76e | DAT_01bd1d90
    PUSH ESI                            ; 0049f773
    SUB EAX,ESI                         ; 0049f774
    PUSH ECX                            ; 0049f776
    MOV dword ptr [ESP + 0x24],EAX      ; 0049f777
    CALL wincore_winrun.cpp_setCursorPosition_FUN_00558d60 ; 0049f77b
        ;   XREF to: 00558d60 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_setCursorPosition_FUN_00558d60()
    MOV EAX,[0x005be368]                ; 0049f780 | DAT_005be368
    MOV EDX,dword ptr [0x01c7841c]      ; 0049f785 | DAT_01c7841c
    MOV EAX,dword ptr [EAX + 0x15aabc]  ; 0049f78b | DAT_01fb1d40
    ADD ESP,0x8                         ; 0049f791
    CMP EAX,EDX                         ; 0049f794
    JNZ 0x0049f736                      ; 0049f796
        ;   XREF to: 0049f736 (CONDITIONAL_JUMP)  ; LAB_0049f736
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049f798
    MOV dword ptr [ESP + 0x28],EAX      ; 0049f79c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049f7a0
    MOV dword ptr [ESP + 0x24],EAX      ; 0049f7a4
    FILD dword ptr [ESP + 0x28]         ; 0049f7a8
    FILD dword ptr [ESP + 0x24]         ; 0049f7ac
    FDIVP                               ; 0049f7b0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049f7b2
    MOV dword ptr [ESP + 0x24],EAX      ; 0049f7b6
    MOV dword ptr [ESP + 0x28],ESI      ; 0049f7ba
    FILD dword ptr [ESP + 0x24]         ; 0049f7be
    FILD dword ptr [ESP + 0x28]         ; 0049f7c2
    FDIVP                               ; 0049f7c6
    FLD double ptr [0x00582a1a]         ; 0049f7c8 | DOUBLE_00582a1a
    FILD dword ptr [EDI + 0x9c]         ; 0049f7ce
    FMUL ST1                            ; 0049f7d4
    FILD dword ptr [EDI + 0xa0]         ; 0049f7d6
    FMULP ST2                           ; 0049f7dc
    FMUL double ptr [0x00582a22]        ; 0049f7de | DOUBLE_00582a22
    FMUL ST3                            ; 0049f7e4
    FXCH ST2                            ; 0049f7e6
    FXCH                                ; 0049f7e8
    FMUL ST1                            ; 0049f7ea
    FXCH ST2                            ; 0049f7ec
    FSTP ST3                            ; 0049f7ee
    FXCH ST2                            ; 0049f7f0
    FST float ptr [ESP + 0x4]           ; 0049f7f2
    FXCH                                ; 0049f7f6
    FSTP ST2                            ; 0049f7f8
    FXCH                                ; 0049f7fa
    FSTP float ptr [ESP]                ; 0049f7fc
    FCOMP double ptr [0x00582a2a]       ; 0049f7ff | DOUBLE_00582a2a
    FNSTSW AX                           ; 0049f805
    SAHF                                ; 0049f807
    JNC 0x0049f812                      ; 0049f808
        ;   XREF to: 0049f812 (CONDITIONAL_JUMP)  ; LAB_0049f812
    MOV dword ptr [ESP + 0x4],0xbf800000 ; 0049f80a
    FLD float ptr [ESP + 0x4]           ; 0049f812
        ;   Label: LAB_0049f812
    FLD1                                ; 0049f816
    FCOMPP                              ; 0049f818
    FNSTSW AX                           ; 0049f81a
    SAHF                                ; 0049f81c
    JNC 0x0049f827                      ; 0049f81d
        ;   XREF to: 0049f827 (CONDITIONAL_JUMP)  ; LAB_0049f827
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0049f81f
    FLD float ptr [ESP]                 ; 0049f827
        ;   Label: LAB_0049f827
    FCOMP double ptr [0x00582a2a]       ; 0049f82a | DOUBLE_00582a2a
    FNSTSW AX                           ; 0049f830
    SAHF                                ; 0049f832
    JNC 0x0049f83c                      ; 0049f833
        ;   XREF to: 0049f83c (CONDITIONAL_JUMP)  ; LAB_0049f83c
    MOV dword ptr [ESP],0xbf800000      ; 0049f835
    FLD float ptr [ESP]                 ; 0049f83c
        ;   Label: LAB_0049f83c
    FLD1                                ; 0049f83f
    FCOMPP                              ; 0049f841
    FNSTSW AX                           ; 0049f843
    SAHF                                ; 0049f845
    JNC 0x0049f84f                      ; 0049f846
        ;   XREF to: 0049f84f (CONDITIONAL_JUMP)  ; LAB_0049f84f
    MOV dword ptr [ESP],0x3f800000      ; 0049f848
    CMP dword ptr [EDI + 0x94],0x0      ; 0049f84f
        ;   Label: LAB_0049f84f
    JZ 0x0049f85d                       ; 0049f856
        ;   XREF to: 0049f85d (CONDITIONAL_JUMP)  ; LAB_0049f85d
    XOR byte ptr [ESP + 0x3],0x80       ; 0049f858
    MOV EAX,dword ptr [EDI + 0x34]      ; 0049f85d
        ;   Label: LAB_0049f85d
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049f860
    JZ 0x0049f8a4                       ; 0049f867
        ;   XREF to: 0049f8a4 (CONDITIONAL_JUMP)  ; LAB_0049f8a4
    FLD float ptr [EBX + 0x20]          ; 0049f869
    FABS                                ; 0049f86c
    FLD float ptr [ESP + 0x4]           ; 0049f86e
    FABS                                ; 0049f872
    FCOMPP                              ; 0049f874
    FNSTSW AX                           ; 0049f876
    SAHF                                ; 0049f878
    JBE 0x0049f882                      ; 0049f879
        ;   XREF to: 0049f882 (CONDITIONAL_JUMP)  ; LAB_0049f882
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049f87b
    MOV dword ptr [EBX + 0x20],EAX      ; 0049f87f
    FLD float ptr [EBX + 0x28]          ; 0049f882
        ;   Label: LAB_0049f882
    FABS                                ; 0049f885
    FLD float ptr [ESP]                 ; 0049f887
    FABS                                ; 0049f88a
    FCOMPP                              ; 0049f88c
    FNSTSW AX                           ; 0049f88e
    SAHF                                ; 0049f890
    JBE 0x0049f736                      ; 0049f891
        ;   XREF to: 0049f736 (CONDITIONAL_JUMP)  ; LAB_0049f736
    MOV EAX,dword ptr [ESP]             ; 0049f897
    MOV dword ptr [EBX + 0x28],EAX      ; 0049f89a
    MOV ESP,EBP                         ; 0049f89d
    POP EBP                             ; 0049f89f
    POP EDI                             ; 0049f8a0
    POP ESI                             ; 0049f8a1
    POP EBX                             ; 0049f8a2
    RET                                 ; 0049f8a3
    FLD float ptr [EBX + 0x24]          ; 0049f8a4
        ;   Label: LAB_0049f8a4
    FABS                                ; 0049f8a7
    FLD float ptr [ESP + 0x4]           ; 0049f8a9
    FABS                                ; 0049f8ad
    FCOMPP                              ; 0049f8af
    FNSTSW AX                           ; 0049f8b1
    SAHF                                ; 0049f8b3
    JBE 0x0049f882                      ; 0049f8b4
        ;   XREF to: 0049f882 (CONDITIONAL_JUMP)  ; LAB_0049f882
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049f8b6
    MOV dword ptr [EBX + 0x24],EAX      ; 0049f8ba
    JMP 0x0049f882                      ; 0049f8bd
        ;   XREF to: 0049f882 (UNCONDITIONAL_JUMP)  ; LAB_0049f882

