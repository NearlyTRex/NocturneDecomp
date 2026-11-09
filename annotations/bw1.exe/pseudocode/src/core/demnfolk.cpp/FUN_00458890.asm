; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_demnfolk_cpp_FUN_00458890(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_demnfolk.cpp_FUN_0045b560 at 0045bd00
;
; Referenced Globals:
;   undefined4 DAT_005d7d3b
;   undefined4 DAT_005d7d43
;   undefined4 DAT_005d7d4b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00458890
        ;   Label: core_demnfolk.cpp_FUN_00458890
    MOV EBP,ESP                         ; 00458891
    SUB ESP,0x28                        ; 00458893
    AND ESP,0xfffffff8                  ; 00458896
    MOV EDX,dword ptr [EBP + 0x8]       ; 00458899
    FLD float ptr [EDX]                 ; 0045889c
    FST double ptr [ESP + 0x8]          ; 0045889e
    FCOMP double ptr [0x005d7d3b]       ; 004588a2 | DAT_005d7d3b
    FNSTSW AX                           ; 004588a8
    SAHF                                ; 004588aa
    JC 0x00458968                       ; 004588ab
        ;   XREF to: 00458968 (CONDITIONAL_JUMP)  ; LAB_00458968
    FLD float ptr [EDX]                 ; 004588b1
        ;   Label: LAB_004588b1
    FLD1                                ; 004588b3
    FCOMPP                              ; 004588b5
    FNSTSW AX                           ; 004588b7
    SAHF                                ; 004588b9
    JBE 0x00458902                      ; 004588ba
        ;   XREF to: 00458902 (CONDITIONAL_JUMP)  ; LAB_00458902
    FLD float ptr [EDX + 0x4]           ; 004588bc
    FLD1                                ; 004588bf
    FCOMPP                              ; 004588c1
    FNSTSW AX                           ; 004588c3
    SAHF                                ; 004588c5
    JBE 0x00458902                      ; 004588c6
        ;   XREF to: 00458902 (CONDITIONAL_JUMP)  ; LAB_00458902
    FLD float ptr [EDX + 0x8]           ; 004588c8
    FST double ptr [ESP + 0x20]         ; 004588cb
    FCOMP double ptr [0x005d7d3b]       ; 004588cf | DAT_005d7d3b
    FNSTSW AX                           ; 004588d5
    SAHF                                ; 004588d7
    JBE 0x00458902                      ; 004588d8
        ;   XREF to: 00458902 (CONDITIONAL_JUMP)  ; LAB_00458902
    FLD double ptr [ESP + 0x20]         ; 004588da
    FCOMP double ptr [0x005d7d4b]       ; 004588de | DAT_005d7d4b
    FNSTSW AX                           ; 004588e4
    SAHF                                ; 004588e6
    JNC 0x00458902                      ; 004588e7
        ;   XREF to: 00458902 (CONDITIONAL_JUMP)  ; LAB_00458902
    FLD float ptr [EDX + 0x8]           ; 004588e9
    FCOMP float ptr [EDX]               ; 004588ec
    FNSTSW AX                           ; 004588ee
    SAHF                                ; 004588f0
    JBE 0x00458902                      ; 004588f1
        ;   XREF to: 00458902 (CONDITIONAL_JUMP)  ; LAB_00458902
    FLD float ptr [EDX + 0x8]           ; 004588f3
    FCOMP float ptr [EDX + 0x4]         ; 004588f6
    FNSTSW AX                           ; 004588f9
    SAHF                                ; 004588fb
    JA 0x004589d1                       ; 004588fc
        ;   XREF to: 004589d1 (CONDITIONAL_JUMP)  ; LAB_004589d1
    FLD float ptr [EDX]                 ; 00458902
        ;   Label: LAB_00458902
    FLD1                                ; 00458904
    FCOMPP                              ; 00458906
    FNSTSW AX                           ; 00458908
    SAHF                                ; 0045890a
    JBE 0x004589cb                      ; 0045890b
        ;   XREF to: 004589cb (CONDITIONAL_JUMP)  ; LAB_004589cb
    FLD float ptr [EDX + 0x4]           ; 00458911
    FLD1                                ; 00458914
    FCOMPP                              ; 00458916
    FNSTSW AX                           ; 00458918
    SAHF                                ; 0045891a
    JBE 0x004589cb                      ; 0045891b
        ;   XREF to: 004589cb (CONDITIONAL_JUMP)  ; LAB_004589cb
    FLD1                                ; 00458921
    FLD float ptr [EDX + 0x8]           ; 00458923
    FSTP double ptr [ESP + 0x10]        ; 00458926
    FCOMP double ptr [ESP + 0x10]       ; 0045892a
    FNSTSW AX                           ; 0045892e
    SAHF                                ; 00458930
    JNC 0x004589cb                      ; 00458931
        ;   XREF to: 004589cb (CONDITIONAL_JUMP)  ; LAB_004589cb
    FLD double ptr [ESP + 0x10]         ; 00458937
    FCOMP double ptr [0x005d7d3b]       ; 0045893b | DAT_005d7d3b
    FNSTSW AX                           ; 00458941
    SAHF                                ; 00458943
    JNC 0x004589cb                      ; 00458944
        ;   XREF to: 004589cb (CONDITIONAL_JUMP)  ; LAB_004589cb
    FLD float ptr [EDX + 0x8]           ; 0045894a
    FCOMP float ptr [EDX]               ; 0045894d
    FNSTSW AX                           ; 0045894f
    SAHF                                ; 00458951
    JBE 0x004589cb                      ; 00458952
        ;   XREF to: 004589cb (CONDITIONAL_JUMP)  ; LAB_004589cb
    FLD float ptr [EDX + 0x8]           ; 00458954
    FCOMP float ptr [EDX + 0x4]         ; 00458957
    FNSTSW AX                           ; 0045895a
    SAHF                                ; 0045895c
    JBE 0x004589cb                      ; 0045895d
        ;   XREF to: 004589cb (CONDITIONAL_JUMP)  ; LAB_004589cb
    MOV EAX,0x3                         ; 0045895f
    MOV ESP,EBP                         ; 00458964
    POP EBP                             ; 00458966
    RET                                 ; 00458967
    FLD float ptr [EDX + 0x4]           ; 00458968
        ;   Label: LAB_00458968
    FST double ptr [ESP + 0x18]         ; 0045896b
    FCOMP double ptr [0x005d7d3b]       ; 0045896f | DAT_005d7d3b
    FNSTSW AX                           ; 00458975
    SAHF                                ; 00458977
    JNC 0x004588b1                      ; 00458978
        ;   XREF to: 004588b1 (CONDITIONAL_JUMP)  ; LAB_004588b1
    FLD float ptr [EDX + 0x8]           ; 0045897e
    FST double ptr [ESP]                ; 00458981
    FCOMP double ptr [0x005d7d3b]       ; 00458984 | DAT_005d7d3b
    FNSTSW AX                           ; 0045898a
    SAHF                                ; 0045898c
    JNC 0x004588b1                      ; 0045898d
        ;   XREF to: 004588b1 (CONDITIONAL_JUMP)  ; LAB_004588b1
    FLD double ptr [ESP + 0x8]          ; 00458993
    FCOMP double ptr [0x005d7d43]       ; 00458997 | DAT_005d7d43
    FNSTSW AX                           ; 0045899d
    SAHF                                ; 0045899f
    JBE 0x004588b1                      ; 004589a0
        ;   XREF to: 004588b1 (CONDITIONAL_JUMP)  ; LAB_004588b1
    FLD double ptr [ESP + 0x18]         ; 004589a6
    FCOMP double ptr [0x005d7d43]       ; 004589aa | DAT_005d7d43
    FNSTSW AX                           ; 004589b0
    SAHF                                ; 004589b2
    JBE 0x004588b1                      ; 004589b3
        ;   XREF to: 004588b1 (CONDITIONAL_JUMP)  ; LAB_004588b1
    FLD double ptr [ESP]                ; 004589b9
    FCOMP double ptr [0x005d7d43]       ; 004589bc | DAT_005d7d43
    FNSTSW AX                           ; 004589c2
    SAHF                                ; 004589c4
    JBE 0x004588b1                      ; 004589c5
        ;   XREF to: 004588b1 (CONDITIONAL_JUMP)  ; LAB_004588b1
    XOR EAX,EAX                         ; 004589cb
        ;   Label: LAB_004589cb
    MOV ESP,EBP                         ; 004589cd
    POP EBP                             ; 004589cf
    RET                                 ; 004589d0
    MOV EAX,0x1                         ; 004589d1
        ;   Label: LAB_004589d1
    MOV ESP,EBP                         ; 004589d6
    POP EBP                             ; 004589d8
    RET                                 ; 004589d9

