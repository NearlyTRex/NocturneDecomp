; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_0051e380(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 0051992b
;
; Referenced Globals:
;   undefined4 DAT_005cd3cf
;   undefined4 DAT_005cd3d7
;   undefined4 DAT_005cd3df
;   undefined4 DAT_005cd3e7
;   undefined4 DAT_005cd3ef
;   undefined4 DAT_01ed373c
;   undefined4 DAT_01ed3740
;
; Called Functions:
;   core_motion.cpp_FUN_004fc350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e380
        ;   Label: core_prye.cpp_FUN_0051e380
    PUSH ESI                            ; 0051e381
    PUSH EDI                            ; 0051e382
    PUSH EBP                            ; 0051e383
    MOV EBP,ESP                         ; 0051e384
    SUB ESP,0x34                        ; 0051e386
    AND ESP,0xfffffff8                  ; 0051e389
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051e38c
    LEA EAX,[EBX + 0x20c6c]             ; 0051e38f
    MOV dword ptr [EAX + 0x8],0x0       ; 0051e395
    PUSH 0x0                            ; 0051e39c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051e39e
    MOV dword ptr [EAX + 0x4],EDX       ; 0051e3a1
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051e3a4
    MOV dword ptr [EAX],EDX             ; 0051e3a7
    LEA EAX,[EBX + 0x158]               ; 0051e3a9
    PUSH EAX                            ; 0051e3af
    CALL core_motion.cpp_FUN_004fc350   ; 0051e3b0
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x38],EAX      ; 0051e3b5
    FLD float ptr [ESP + 0x38]          ; 0051e3b9
    ADD ESP,0x8                         ; 0051e3bd
    FLDZ                                ; 0051e3c0
    FXCH                                ; 0051e3c2
    FSTP double ptr [ESP + 0x8]         ; 0051e3c4
    FCOMP double ptr [ESP + 0x8]        ; 0051e3c8
    FNSTSW AX                           ; 0051e3cc
    SAHF                                ; 0051e3ce
    JNC 0x0051e528                      ; 0051e3cf
        ;   XREF to: 0051e528 (CONDITIONAL_JUMP)  ; LAB_0051e528
    FLD float ptr [EBX + 0x20c48]       ; 0051e3d5
    FLD1                                ; 0051e3db
    FCOMPP                              ; 0051e3dd
    FNSTSW AX                           ; 0051e3df
    SAHF                                ; 0051e3e1
    JBE 0x0051e528                      ; 0051e3e2
        ;   XREF to: 0051e528 (CONDITIONAL_JUMP)  ; LAB_0051e528
    FLD1                                ; 0051e3e8
    FCOMP double ptr [ESP + 0x8]        ; 0051e3ea
    FNSTSW AX                           ; 0051e3ee
    SAHF                                ; 0051e3f0
    JA 0x0051e561                       ; 0051e3f1
        ;   XREF to: 0051e561 (CONDITIONAL_JUMP)  ; LAB_0051e561
    MOV EAX,[0x01ed373c]                ; 0051e3f7 | DAT_01ed373c
        ;   Label: LAB_0051e3f7
    MOV EDX,dword ptr [EBX + 0x20c78]   ; 0051e3fc
    MOV dword ptr [EBX + 0x20c78],EAX   ; 0051e402
    FLDZ                                ; 0051e408
    FCOMP float ptr [EBX + 0x20c44]     ; 0051e40a
    FNSTSW AX                           ; 0051e410
    SAHF                                ; 0051e412
    JBE 0x0051e420                      ; 0051e413
        ;   XREF to: 0051e420 (CONDITIONAL_JUMP)  ; LAB_0051e420
    MOV EAX,[0x01ed3740]                ; 0051e415 | DAT_01ed3740
    MOV dword ptr [EBX + 0x20c78],EAX   ; 0051e41a
    MOV ECX,0x3fcccccd                  ; 0051e420
        ;   Label: LAB_0051e420
    FLD float ptr [EBX + 0x20c48]       ; 0051e425
    MOV dword ptr [ESP + 0x18],ECX      ; 0051e42b
    FCOMP double ptr [0x005cd3d7]       ; 0051e42f | DAT_005cd3d7
    FNSTSW AX                           ; 0051e435
    SAHF                                ; 0051e437
    JBE 0x0051e5c9                      ; 0051e438
        ;   XREF to: 0051e5c9 (CONDITIONAL_JUMP)  ; LAB_0051e5c9
    FLD float ptr [EBX + 0x20c50]       ; 0051e43e
    FADD float ptr [EBP + 0x18]         ; 0051e444
    FSTP float ptr [EBX + 0x20c50]      ; 0051e447
    FLD float ptr [EBX + 0x20c4c]       ; 0051e44d
        ;   Label: LAB_0051e44d
    FLDZ                                ; 0051e453
    FCOMPP                              ; 0051e455
    FNSTSW AX                           ; 0051e457
    SAHF                                ; 0051e459
    JC 0x0051e485                       ; 0051e45a
        ;   XREF to: 0051e485 (CONDITIONAL_JUMP)  ; LAB_0051e485
    FLD float ptr [EBX + 0x20c48]       ; 0051e45c
    FCOMP double ptr [0x005cd3df]       ; 0051e462 | DAT_005cd3df
    FNSTSW AX                           ; 0051e468
    SAHF                                ; 0051e46a
    JC 0x0051e5d8                       ; 0051e46b
        ;   XREF to: 0051e5d8 (CONDITIONAL_JUMP)  ; LAB_0051e5d8
    FLD float ptr [EBX + 0x20c48]       ; 0051e471
        ;   Label: LAB_0051e471
    FLD1                                ; 0051e477
    FSUBRP                              ; 0051e479
    FMUL float ptr [ESP + 0x18]         ; 0051e47b
    FSTP float ptr [EBX + 0x20c4c]      ; 0051e47f
    FLD float ptr [EBX + 0x20c4c]       ; 0051e485
        ;   Label: LAB_0051e485
    FLDZ                                ; 0051e48b
    FCOMPP                              ; 0051e48d
    FNSTSW AX                           ; 0051e48f
    SAHF                                ; 0051e491
    JNC 0x0051e623                      ; 0051e492
        ;   XREF to: 0051e623 (CONDITIONAL_JUMP)  ; LAB_0051e623
    MOV EAX,dword ptr [EBX + 0x20c4c]   ; 0051e498
    MOV dword ptr [ESP + 0x28],EAX      ; 0051e49e
    FLD float ptr [ESP + 0x28]          ; 0051e4a2
    FSUB float ptr [EBP + 0x18]         ; 0051e4a6
    FST float ptr [EBX + 0x20c4c]       ; 0051e4a9
    FLDZ                                ; 0051e4af
    FCOMPP                              ; 0051e4b1
    FNSTSW AX                           ; 0051e4b3
    SAHF                                ; 0051e4b5
    JC 0x0051e5f0                       ; 0051e4b6
        ;   XREF to: 0051e5f0 (CONDITIONAL_JUMP)  ; LAB_0051e5f0
    FLD float ptr [EBX + 0x20c48]       ; 0051e4bc
    FLD1                                ; 0051e4c2
    FSUBRP                              ; 0051e4c4
    MOV dword ptr [EBX + 0x20c4c],0x0   ; 0051e4c6
    FSTP float ptr [ESP + 0x2c]         ; 0051e4d0
        ;   Label: LAB_0051e4d0
    MOV EAX,dword ptr [EBX + 0x20c48]   ; 0051e4d4
    MOV dword ptr [ESP + 0x14],EAX      ; 0051e4da
    FLD float ptr [ESP + 0x14]          ; 0051e4de
    FADD float ptr [ESP + 0x2c]         ; 0051e4e2
    FST float ptr [EBX + 0x20c48]       ; 0051e4e6
    FLD1                                ; 0051e4ec
    FCOMPP                              ; 0051e4ee
    FNSTSW AX                           ; 0051e4f0
    SAHF                                ; 0051e4f2
    JA 0x0051e5fc                       ; 0051e4f3
        ;   XREF to: 0051e5fc (CONDITIONAL_JUMP)  ; LAB_0051e5fc
    MOV dword ptr [EBX + 0x20c44],0x0   ; 0051e4f9
    MOV dword ptr [EBX + 0x20c4c],0x0   ; 0051e503
    MOV dword ptr [EBX + 0x20c50],0x0   ; 0051e50d
    MOV dword ptr [EBX + 0x20c48],0x3f800000 ; 0051e517
    MOV ESP,EBP                         ; 0051e521
        ;   Label: LAB_0051e521
    POP EBP                             ; 0051e523
    POP EDI                             ; 0051e524
    POP ESI                             ; 0051e525
    POP EBX                             ; 0051e526
    RET                                 ; 0051e527
    MOV dword ptr [EBX + 0x20c44],0x0   ; 0051e528
        ;   Label: LAB_0051e528
    MOV dword ptr [EBX + 0x20c78],0xffffffff ; 0051e532
    MOV dword ptr [EBX + 0x20c4c],0x0   ; 0051e53c
    MOV dword ptr [EBX + 0x20c50],0x0   ; 0051e546
    MOV dword ptr [EBX + 0x20c48],0x0   ; 0051e550
    MOV ESP,EBP                         ; 0051e55a
    POP EBP                             ; 0051e55c
    POP EDI                             ; 0051e55d
    POP ESI                             ; 0051e55e
    POP EBX                             ; 0051e55f
    RET                                 ; 0051e560
    FLD float ptr [EBX + 0x20c44]       ; 0051e561
        ;   Label: LAB_0051e561
    FST double ptr [ESP]                ; 0051e567
    FABS                                ; 0051e56a
    FLD1                                ; 0051e56c
    FSUB double ptr [ESP + 0x8]         ; 0051e56e
    FMUL float ptr [EBP + 0x18]         ; 0051e572
    FMUL double ptr [0x005cd3cf]        ; 0051e575 | DAT_005cd3cf
    FST float ptr [ESP + 0x10]          ; 0051e57b
    FCOMPP                              ; 0051e57f
    FNSTSW AX                           ; 0051e581
    SAHF                                ; 0051e583
    JBE 0x0051e595                      ; 0051e584
        ;   XREF to: 0051e595 (CONDITIONAL_JUMP)  ; LAB_0051e595
    MOV dword ptr [EBX + 0x20c44],0x0   ; 0051e586
    JMP 0x0051e3f7                      ; 0051e590
        ;   XREF to: 0051e3f7 (UNCONDITIONAL_JUMP)  ; LAB_0051e3f7
    FLDZ                                ; 0051e595
        ;   Label: LAB_0051e595
    FCOMP double ptr [ESP]              ; 0051e597
    FNSTSW AX                           ; 0051e59a
    SAHF                                ; 0051e59c
    JBE 0x0051e5b4                      ; 0051e59d
        ;   XREF to: 0051e5b4 (CONDITIONAL_JUMP)  ; LAB_0051e5b4
    FLD float ptr [EBX + 0x20c44]       ; 0051e59f
    FADD float ptr [ESP + 0x10]         ; 0051e5a5
    FSTP float ptr [EBX + 0x20c44]      ; 0051e5a9
    JMP 0x0051e3f7                      ; 0051e5af
        ;   XREF to: 0051e3f7 (UNCONDITIONAL_JUMP)  ; LAB_0051e3f7
    FLD float ptr [EBX + 0x20c44]       ; 0051e5b4
        ;   Label: LAB_0051e5b4
    FSUB float ptr [ESP + 0x10]         ; 0051e5ba
    FSTP float ptr [EBX + 0x20c44]      ; 0051e5be
    JMP 0x0051e3f7                      ; 0051e5c4
        ;   XREF to: 0051e3f7 (UNCONDITIONAL_JUMP)  ; LAB_0051e3f7
    MOV dword ptr [EBX + 0x20c50],0x0   ; 0051e5c9
        ;   Label: LAB_0051e5c9
    JMP 0x0051e44d                      ; 0051e5d3
        ;   XREF to: 0051e44d (UNCONDITIONAL_JUMP)  ; LAB_0051e44d
    FLD float ptr [EBX + 0x20c50]       ; 0051e5d8
        ;   Label: LAB_0051e5d8
    FLD1                                ; 0051e5de
    FCOMPP                              ; 0051e5e0
    FNSTSW AX                           ; 0051e5e2
    SAHF                                ; 0051e5e4
    JC 0x0051e471                       ; 0051e5e5
        ;   XREF to: 0051e471 (CONDITIONAL_JUMP)  ; LAB_0051e471
    JMP 0x0051e485                      ; 0051e5eb
        ;   XREF to: 0051e485 (UNCONDITIONAL_JUMP)  ; LAB_0051e485
    FLD float ptr [EBP + 0x18]          ; 0051e5f0
        ;   Label: LAB_0051e5f0
    FDIV float ptr [ESP + 0x28]         ; 0051e5f3
    JMP 0x0051e4d0                      ; 0051e5f7
        ;   XREF to: 0051e4d0 (UNCONDITIONAL_JUMP)  ; LAB_0051e4d0
    FLD float ptr [EBX + 0x20c44]       ; 0051e5fc
        ;   Label: LAB_0051e5fc
    FMUL float ptr [ESP + 0x2c]         ; 0051e602
    FLD float ptr [ESP + 0x14]          ; 0051e606
    FLD1                                ; 0051e60a
    FSUBRP                              ; 0051e60c
    FDIVP                               ; 0051e60e
    FSUBR float ptr [EBX + 0x20c44]     ; 0051e610
    FSTP float ptr [EBX + 0x20c44]      ; 0051e616
    MOV ESP,EBP                         ; 0051e61c
    POP EBP                             ; 0051e61e
    POP EDI                             ; 0051e61f
    POP ESI                             ; 0051e620
    POP EBX                             ; 0051e621
    RET                                 ; 0051e622
    FLD float ptr [EBX + 0x20c44]       ; 0051e623
        ;   Label: LAB_0051e623
    FMUL float ptr [0x005cd3e7]         ; 0051e629 | DAT_005cd3e7
    FABS                                ; 0051e62f
    MOV ESI,dword ptr [EBX + 0x20c78]   ; 0051e631
    FSTP float ptr [ESP + 0x1c]         ; 0051e637
    CMP EDX,ESI                         ; 0051e63b
    JZ 0x0051e645                       ; 0051e63d
        ;   XREF to: 0051e645 (CONDITIONAL_JUMP)  ; LAB_0051e645
    XOR EDI,EDI                         ; 0051e63f
    MOV dword ptr [ESP + 0x1c],EDI      ; 0051e641
    FLD float ptr [ESP + 0x1c]          ; 0051e645
        ;   Label: LAB_0051e645
    FLD1                                ; 0051e649
    FCOMPP                              ; 0051e64b
    FNSTSW AX                           ; 0051e64d
    SAHF                                ; 0051e64f
    JNC 0x0051e65a                      ; 0051e650
        ;   XREF to: 0051e65a (CONDITIONAL_JUMP)  ; LAB_0051e65a
    MOV dword ptr [ESP + 0x1c],0x3f800000 ; 0051e652
    FLD float ptr [ESP + 0x1c]          ; 0051e65a
        ;   Label: LAB_0051e65a
    FSUB float ptr [EBX + 0x20c48]      ; 0051e65e
    FADD float ptr [EBX + 0x20c48]      ; 0051e664
    FST float ptr [EBX + 0x20c48]       ; 0051e66a
    FCOMP double ptr [0x005cd3ef]       ; 0051e670 | DAT_005cd3ef
    FNSTSW AX                           ; 0051e676
    SAHF                                ; 0051e678
    JBE 0x0051e521                      ; 0051e679
        ;   XREF to: 0051e521 (CONDITIONAL_JUMP)  ; LAB_0051e521
    MOV dword ptr [EBX + 0x20c78],EDX   ; 0051e67f
    MOV ESP,EBP                         ; 0051e685
    POP EBP                             ; 0051e687
    POP EDI                             ; 0051e688
    POP ESI                             ; 0051e689
    POP EBX                             ; 0051e68a
    RET                                 ; 0051e68b

