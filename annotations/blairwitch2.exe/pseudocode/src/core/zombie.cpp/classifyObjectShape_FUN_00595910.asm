; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_zombie_cpp_classifyObjectShape_FUN_00595910(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_zombie.cpp_CZombie_processPickup_FUN_005984e0 at 00598c80
;
; Referenced Globals:
;   undefined4 DAT_005eee2a
;   undefined4 DAT_005eee32
;   undefined4 DAT_005eee3a
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00595910
        ;   Label: core_zombie.cpp_classifyObjectShape_FUN_00595910
    MOV EBP,ESP                         ; 00595911
    SUB ESP,0x28                        ; 00595913
    AND ESP,0xfffffff8                  ; 00595916
    MOV EDX,dword ptr [EBP + 0x8]       ; 00595919
    FLD float ptr [EDX]                 ; 0059591c
    FST double ptr [ESP + 0x8]          ; 0059591e
    FCOMP double ptr [0x005eee2a]       ; 00595922 | DAT_005eee2a
    FNSTSW AX                           ; 00595928
    SAHF                                ; 0059592a
    JC 0x005959e8                       ; 0059592b
        ;   XREF to: 005959e8 (CONDITIONAL_JUMP)  ; LAB_005959e8
    FLD float ptr [EDX]                 ; 00595931
        ;   Label: LAB_00595931
    FLD1                                ; 00595933
    FCOMPP                              ; 00595935
    FNSTSW AX                           ; 00595937
    SAHF                                ; 00595939
    JBE 0x00595982                      ; 0059593a
        ;   XREF to: 00595982 (CONDITIONAL_JUMP)  ; LAB_00595982
    FLD float ptr [EDX + 0x4]           ; 0059593c
    FLD1                                ; 0059593f
    FCOMPP                              ; 00595941
    FNSTSW AX                           ; 00595943
    SAHF                                ; 00595945
    JBE 0x00595982                      ; 00595946
        ;   XREF to: 00595982 (CONDITIONAL_JUMP)  ; LAB_00595982
    FLD float ptr [EDX + 0x8]           ; 00595948
    FST double ptr [ESP + 0x20]         ; 0059594b
    FCOMP double ptr [0x005eee2a]       ; 0059594f | DAT_005eee2a
    FNSTSW AX                           ; 00595955
    SAHF                                ; 00595957
    JBE 0x00595982                      ; 00595958
        ;   XREF to: 00595982 (CONDITIONAL_JUMP)  ; LAB_00595982
    FLD double ptr [ESP + 0x20]         ; 0059595a
    FCOMP double ptr [0x005eee3a]       ; 0059595e | DAT_005eee3a
    FNSTSW AX                           ; 00595964
    SAHF                                ; 00595966
    JNC 0x00595982                      ; 00595967
        ;   XREF to: 00595982 (CONDITIONAL_JUMP)  ; LAB_00595982
    FLD float ptr [EDX + 0x8]           ; 00595969
    FCOMP float ptr [EDX]               ; 0059596c
    FNSTSW AX                           ; 0059596e
    SAHF                                ; 00595970
    JBE 0x00595982                      ; 00595971
        ;   XREF to: 00595982 (CONDITIONAL_JUMP)  ; LAB_00595982
    FLD float ptr [EDX + 0x8]           ; 00595973
    FCOMP float ptr [EDX + 0x4]         ; 00595976
    FNSTSW AX                           ; 00595979
    SAHF                                ; 0059597b
    JA 0x00595a51                       ; 0059597c
        ;   XREF to: 00595a51 (CONDITIONAL_JUMP)  ; LAB_00595a51
    FLD float ptr [EDX]                 ; 00595982
        ;   Label: LAB_00595982
    FLD1                                ; 00595984
    FCOMPP                              ; 00595986
    FNSTSW AX                           ; 00595988
    SAHF                                ; 0059598a
    JBE 0x00595a4b                      ; 0059598b
        ;   XREF to: 00595a4b (CONDITIONAL_JUMP)  ; LAB_00595a4b
    FLD float ptr [EDX + 0x4]           ; 00595991
    FLD1                                ; 00595994
    FCOMPP                              ; 00595996
    FNSTSW AX                           ; 00595998
    SAHF                                ; 0059599a
    JBE 0x00595a4b                      ; 0059599b
        ;   XREF to: 00595a4b (CONDITIONAL_JUMP)  ; LAB_00595a4b
    FLD1                                ; 005959a1
    FLD float ptr [EDX + 0x8]           ; 005959a3
    FSTP double ptr [ESP + 0x10]        ; 005959a6
    FCOMP double ptr [ESP + 0x10]       ; 005959aa
    FNSTSW AX                           ; 005959ae
    SAHF                                ; 005959b0
    JNC 0x00595a4b                      ; 005959b1
        ;   XREF to: 00595a4b (CONDITIONAL_JUMP)  ; LAB_00595a4b
    FLD double ptr [ESP + 0x10]         ; 005959b7
    FCOMP double ptr [0x005eee2a]       ; 005959bb | DAT_005eee2a
    FNSTSW AX                           ; 005959c1
    SAHF                                ; 005959c3
    JNC 0x00595a4b                      ; 005959c4
        ;   XREF to: 00595a4b (CONDITIONAL_JUMP)  ; LAB_00595a4b
    FLD float ptr [EDX + 0x8]           ; 005959ca
    FCOMP float ptr [EDX]               ; 005959cd
    FNSTSW AX                           ; 005959cf
    SAHF                                ; 005959d1
    JBE 0x00595a4b                      ; 005959d2
        ;   XREF to: 00595a4b (CONDITIONAL_JUMP)  ; LAB_00595a4b
    FLD float ptr [EDX + 0x8]           ; 005959d4
    FCOMP float ptr [EDX + 0x4]         ; 005959d7
    FNSTSW AX                           ; 005959da
    SAHF                                ; 005959dc
    JBE 0x00595a4b                      ; 005959dd
        ;   XREF to: 00595a4b (CONDITIONAL_JUMP)  ; LAB_00595a4b
    MOV EAX,0x3                         ; 005959df
    MOV ESP,EBP                         ; 005959e4
    POP EBP                             ; 005959e6
    RET                                 ; 005959e7
    FLD float ptr [EDX + 0x4]           ; 005959e8
        ;   Label: LAB_005959e8
    FST double ptr [ESP + 0x18]         ; 005959eb
    FCOMP double ptr [0x005eee2a]       ; 005959ef | DAT_005eee2a
    FNSTSW AX                           ; 005959f5
    SAHF                                ; 005959f7
    JNC 0x00595931                      ; 005959f8
        ;   XREF to: 00595931 (CONDITIONAL_JUMP)  ; LAB_00595931
    FLD float ptr [EDX + 0x8]           ; 005959fe
    FST double ptr [ESP]                ; 00595a01
    FCOMP double ptr [0x005eee2a]       ; 00595a04 | DAT_005eee2a
    FNSTSW AX                           ; 00595a0a
    SAHF                                ; 00595a0c
    JNC 0x00595931                      ; 00595a0d
        ;   XREF to: 00595931 (CONDITIONAL_JUMP)  ; LAB_00595931
    FLD double ptr [ESP + 0x8]          ; 00595a13
    FCOMP double ptr [0x005eee32]       ; 00595a17 | DAT_005eee32
    FNSTSW AX                           ; 00595a1d
    SAHF                                ; 00595a1f
    JBE 0x00595931                      ; 00595a20
        ;   XREF to: 00595931 (CONDITIONAL_JUMP)  ; LAB_00595931
    FLD double ptr [ESP + 0x18]         ; 00595a26
    FCOMP double ptr [0x005eee32]       ; 00595a2a | DAT_005eee32
    FNSTSW AX                           ; 00595a30
    SAHF                                ; 00595a32
    JBE 0x00595931                      ; 00595a33
        ;   XREF to: 00595931 (CONDITIONAL_JUMP)  ; LAB_00595931
    FLD double ptr [ESP]                ; 00595a39
    FCOMP double ptr [0x005eee32]       ; 00595a3c | DAT_005eee32
    FNSTSW AX                           ; 00595a42
    SAHF                                ; 00595a44
    JBE 0x00595931                      ; 00595a45
        ;   XREF to: 00595931 (CONDITIONAL_JUMP)  ; LAB_00595931
    XOR EAX,EAX                         ; 00595a4b
        ;   Label: LAB_00595a4b
    MOV ESP,EBP                         ; 00595a4d
    POP EBP                             ; 00595a4f
    RET                                 ; 00595a50
    MOV EAX,0x1                         ; 00595a51
        ;   Label: LAB_00595a51
    MOV ESP,EBP                         ; 00595a56
    POP EBP                             ; 00595a58
    RET                                 ; 00595a59

