; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_carved_cpp_FUN_00428550(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_carved.cpp_FUN_0042a930 at 0042b0c5
;
; Referenced Globals:
;   undefined4 DAT_005d51cd
;   undefined4 DAT_005d51d5
;   undefined4 DAT_005d51dd
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00428550
        ;   Label: core_carved.cpp_FUN_00428550
    MOV EBP,ESP                         ; 00428551
    SUB ESP,0x28                        ; 00428553
    AND ESP,0xfffffff8                  ; 00428556
    MOV EDX,dword ptr [EBP + 0x8]       ; 00428559
    FLD float ptr [EDX]                 ; 0042855c
    FST double ptr [ESP + 0x8]          ; 0042855e
    FCOMP double ptr [0x005d51cd]       ; 00428562 | DAT_005d51cd
    FNSTSW AX                           ; 00428568
    SAHF                                ; 0042856a
    JC 0x00428628                       ; 0042856b
        ;   XREF to: 00428628 (CONDITIONAL_JUMP)  ; LAB_00428628
    FLD float ptr [EDX]                 ; 00428571
        ;   Label: LAB_00428571
    FLD1                                ; 00428573
    FCOMPP                              ; 00428575
    FNSTSW AX                           ; 00428577
    SAHF                                ; 00428579
    JBE 0x004285c2                      ; 0042857a
        ;   XREF to: 004285c2 (CONDITIONAL_JUMP)  ; LAB_004285c2
    FLD float ptr [EDX + 0x4]           ; 0042857c
    FLD1                                ; 0042857f
    FCOMPP                              ; 00428581
    FNSTSW AX                           ; 00428583
    SAHF                                ; 00428585
    JBE 0x004285c2                      ; 00428586
        ;   XREF to: 004285c2 (CONDITIONAL_JUMP)  ; LAB_004285c2
    FLD float ptr [EDX + 0x8]           ; 00428588
    FST double ptr [ESP + 0x20]         ; 0042858b
    FCOMP double ptr [0x005d51cd]       ; 0042858f | DAT_005d51cd
    FNSTSW AX                           ; 00428595
    SAHF                                ; 00428597
    JBE 0x004285c2                      ; 00428598
        ;   XREF to: 004285c2 (CONDITIONAL_JUMP)  ; LAB_004285c2
    FLD double ptr [ESP + 0x20]         ; 0042859a
    FCOMP double ptr [0x005d51dd]       ; 0042859e | DAT_005d51dd
    FNSTSW AX                           ; 004285a4
    SAHF                                ; 004285a6
    JNC 0x004285c2                      ; 004285a7
        ;   XREF to: 004285c2 (CONDITIONAL_JUMP)  ; LAB_004285c2
    FLD float ptr [EDX + 0x8]           ; 004285a9
    FCOMP float ptr [EDX]               ; 004285ac
    FNSTSW AX                           ; 004285ae
    SAHF                                ; 004285b0
    JBE 0x004285c2                      ; 004285b1
        ;   XREF to: 004285c2 (CONDITIONAL_JUMP)  ; LAB_004285c2
    FLD float ptr [EDX + 0x8]           ; 004285b3
    FCOMP float ptr [EDX + 0x4]         ; 004285b6
    FNSTSW AX                           ; 004285b9
    SAHF                                ; 004285bb
    JA 0x00428691                       ; 004285bc
        ;   XREF to: 00428691 (CONDITIONAL_JUMP)  ; LAB_00428691
    FLD float ptr [EDX]                 ; 004285c2
        ;   Label: LAB_004285c2
    FLD1                                ; 004285c4
    FCOMPP                              ; 004285c6
    FNSTSW AX                           ; 004285c8
    SAHF                                ; 004285ca
    JBE 0x0042868b                      ; 004285cb
        ;   XREF to: 0042868b (CONDITIONAL_JUMP)  ; LAB_0042868b
    FLD float ptr [EDX + 0x4]           ; 004285d1
    FLD1                                ; 004285d4
    FCOMPP                              ; 004285d6
    FNSTSW AX                           ; 004285d8
    SAHF                                ; 004285da
    JBE 0x0042868b                      ; 004285db
        ;   XREF to: 0042868b (CONDITIONAL_JUMP)  ; LAB_0042868b
    FLD1                                ; 004285e1
    FLD float ptr [EDX + 0x8]           ; 004285e3
    FSTP double ptr [ESP + 0x10]        ; 004285e6
    FCOMP double ptr [ESP + 0x10]       ; 004285ea
    FNSTSW AX                           ; 004285ee
    SAHF                                ; 004285f0
    JNC 0x0042868b                      ; 004285f1
        ;   XREF to: 0042868b (CONDITIONAL_JUMP)  ; LAB_0042868b
    FLD double ptr [ESP + 0x10]         ; 004285f7
    FCOMP double ptr [0x005d51cd]       ; 004285fb | DAT_005d51cd
    FNSTSW AX                           ; 00428601
    SAHF                                ; 00428603
    JNC 0x0042868b                      ; 00428604
        ;   XREF to: 0042868b (CONDITIONAL_JUMP)  ; LAB_0042868b
    FLD float ptr [EDX + 0x8]           ; 0042860a
    FCOMP float ptr [EDX]               ; 0042860d
    FNSTSW AX                           ; 0042860f
    SAHF                                ; 00428611
    JBE 0x0042868b                      ; 00428612
        ;   XREF to: 0042868b (CONDITIONAL_JUMP)  ; LAB_0042868b
    FLD float ptr [EDX + 0x8]           ; 00428614
    FCOMP float ptr [EDX + 0x4]         ; 00428617
    FNSTSW AX                           ; 0042861a
    SAHF                                ; 0042861c
    JBE 0x0042868b                      ; 0042861d
        ;   XREF to: 0042868b (CONDITIONAL_JUMP)  ; LAB_0042868b
    MOV EAX,0x3                         ; 0042861f
    MOV ESP,EBP                         ; 00428624
    POP EBP                             ; 00428626
    RET                                 ; 00428627
    FLD float ptr [EDX + 0x4]           ; 00428628
        ;   Label: LAB_00428628
    FST double ptr [ESP + 0x18]         ; 0042862b
    FCOMP double ptr [0x005d51cd]       ; 0042862f | DAT_005d51cd
    FNSTSW AX                           ; 00428635
    SAHF                                ; 00428637
    JNC 0x00428571                      ; 00428638
        ;   XREF to: 00428571 (CONDITIONAL_JUMP)  ; LAB_00428571
    FLD float ptr [EDX + 0x8]           ; 0042863e
    FST double ptr [ESP]                ; 00428641
    FCOMP double ptr [0x005d51cd]       ; 00428644 | DAT_005d51cd
    FNSTSW AX                           ; 0042864a
    SAHF                                ; 0042864c
    JNC 0x00428571                      ; 0042864d
        ;   XREF to: 00428571 (CONDITIONAL_JUMP)  ; LAB_00428571
    FLD double ptr [ESP + 0x8]          ; 00428653
    FCOMP double ptr [0x005d51d5]       ; 00428657 | DAT_005d51d5
    FNSTSW AX                           ; 0042865d
    SAHF                                ; 0042865f
    JBE 0x00428571                      ; 00428660
        ;   XREF to: 00428571 (CONDITIONAL_JUMP)  ; LAB_00428571
    FLD double ptr [ESP + 0x18]         ; 00428666
    FCOMP double ptr [0x005d51d5]       ; 0042866a | DAT_005d51d5
    FNSTSW AX                           ; 00428670
    SAHF                                ; 00428672
    JBE 0x00428571                      ; 00428673
        ;   XREF to: 00428571 (CONDITIONAL_JUMP)  ; LAB_00428571
    FLD double ptr [ESP]                ; 00428679
    FCOMP double ptr [0x005d51d5]       ; 0042867c | DAT_005d51d5
    FNSTSW AX                           ; 00428682
    SAHF                                ; 00428684
    JBE 0x00428571                      ; 00428685
        ;   XREF to: 00428571 (CONDITIONAL_JUMP)  ; LAB_00428571
    XOR EAX,EAX                         ; 0042868b
        ;   Label: LAB_0042868b
    MOV ESP,EBP                         ; 0042868d
    POP EBP                             ; 0042868f
    RET                                 ; 00428690
    MOV EAX,0x1                         ; 00428691
        ;   Label: LAB_00428691
    MOV ESP,EBP                         ; 00428696
    POP EBP                             ; 00428698
    RET                                 ; 00428699

