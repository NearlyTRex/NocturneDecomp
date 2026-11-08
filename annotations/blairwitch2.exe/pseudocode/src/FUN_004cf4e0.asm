; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cf4e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[3]:
;   FUN_004ad640 at 004ae94e
;   FUN_004d0780 at 004d087b
;   FUN_0056e4d0 at 0056e6c5
;
; Referenced Globals:
;   undefined4 DAT_005d9d00
;   undefined4 DAT_005d9d04
;   undefined4 DAT_005d9d0c
;   undefined4 DAT_005d9d14
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_007bc9e8
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_00408d70
;   FUN_00408de0
;   FUN_0040c8f0
;   FUN_0040d0c0
;   FUN_00429180
;   FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf4e0
        ;   Label: FUN_004cf4e0
    PUSH ESI                            ; 004cf4e1
    PUSH EDI                            ; 004cf4e2
    PUSH EBP                            ; 004cf4e3
    MOV EBP,ESP                         ; 004cf4e4
    SUB ESP,0xec                        ; 004cf4e6
    AND ESP,0xfffffff8                  ; 004cf4ec
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cf4ef
    PUSH EDX                            ; 004cf4f2
    CALL FUN_00429180                   ; 004cf4f3
        ;   XREF to: 00429180 (UNCONDITIONAL_CALL)  ; undefined FUN_00429180()
    ADD ESP,0x4                         ; 004cf4f8
    TEST EAX,EAX                        ; 004cf4fb
    JNZ 0x004cf58b                      ; 004cf4fd
        ;   XREF to: 004cf58b (CONDITIONAL_JUMP)  ; LAB_004cf58b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf503
    MOV ECX,dword ptr [EAX + 0x2560c]   ; 004cf506
    TEST ECX,ECX                        ; 004cf50c
    JNZ 0x004cf57d                      ; 004cf50e
        ;   XREF to: 004cf57d (CONDITIONAL_JUMP)  ; LAB_004cf57d
    MOV dword ptr [ESP + 0xe0],ECX      ; 004cf510
    MOV dword ptr [ESP + 0xe4],ECX      ; 004cf517
    MOV EBX,dword ptr [0x0061b5a8]      ; 004cf51e | DAT_0061b5a8
        ;   Label: LAB_004cf51e
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004cf524
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004cf52b | DAT_01fb331c
    JL 0x004cf5bb                       ; 004cf531
        ;   XREF to: 004cf5bb (CONDITIONAL_JUMP)  ; LAB_004cf5bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf537
        ;   Label: LAB_004cf537
    MOV ECX,dword ptr [EAX + 0x2560c]   ; 004cf53a
    TEST ECX,ECX                        ; 004cf540
    JZ 0x004cf58b                       ; 004cf542
        ;   XREF to: 004cf58b (CONDITIONAL_JUMP)  ; LAB_004cf58b
    MOV EBX,dword ptr [0x007bc9e8]      ; 004cf544 | DAT_007bc9e8
    PUSH EBX                            ; 004cf54a
    PUSH ECX                            ; 004cf54b
    CALL FUN_0040c8f0                   ; 004cf54c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV EBX,EAX                         ; 004cf551
    ADD ESP,0x8                         ; 004cf553
    TEST EAX,EAX                        ; 004cf556
    JZ 0x004cf57d                       ; 004cf558
        ;   XREF to: 004cf57d (CONDITIONAL_JUMP)  ; LAB_004cf57d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf55a
    MOV dword ptr [EBX + 0x47c],EAX     ; 004cf55d
    LEA EAX,[EBX + 0x488]               ; 004cf563
    PUSH EAX                            ; 004cf569
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004cf56a
    PUSH EBX                            ; 004cf570
    CALL dword ptr [ESI + 0x38]         ; 004cf571
    ADD ESP,0x8                         ; 004cf574
    MOV dword ptr [EBX + 0x484],EAX     ; 004cf577
    MOV ESI,0x1                         ; 004cf57d
        ;   Label: LAB_004cf57d
    MOV EAX,ESI                         ; 004cf582
    MOV ESP,EBP                         ; 004cf584
    POP EBP                             ; 004cf586
    POP EDI                             ; 004cf587
    POP ESI                             ; 004cf588
    POP EBX                             ; 004cf589
    RET                                 ; 004cf58a
    XOR ESI,ESI                         ; 004cf58b
        ;   Label: LAB_004cf58b
    MOV EAX,ESI                         ; 004cf58d
    MOV ESP,EBP                         ; 004cf58f
    POP EBP                             ; 004cf591
    POP EDI                             ; 004cf592
    POP ESI                             ; 004cf593
    POP EBX                             ; 004cf594
    RET                                 ; 004cf595
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004cf596
        ;   Label: LAB_004cf596
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004cf59d
    INC EAX                             ; 004cf5a4
    ADD EDI,0x4                         ; 004cf5a5
    MOV dword ptr [ESP + 0xe0],EAX      ; 004cf5a8
    MOV dword ptr [ESP + 0xe4],EDI      ; 004cf5af
    JMP 0x004cf51e                      ; 004cf5b6
        ;   XREF to: 004cf51e (UNCONDITIONAL_JUMP)  ; LAB_004cf51e
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cf5bb
        ;   Label: LAB_004cf5bb
    MOV EAX,[0x007bc9e8]                ; 004cf5c2 | DAT_007bc9e8
    ADD EBX,EDX                         ; 004cf5c7
    PUSH EAX                            ; 004cf5c9
    MOV ECX,dword ptr [EBX + 0x14d168]  ; 004cf5ca | DAT_01fb3320
    PUSH ECX                            ; 004cf5d0
    CALL FUN_0040c8f0                   ; 004cf5d1
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV EBX,EAX                         ; 004cf5d6
    ADD ESP,0x8                         ; 004cf5d8
    TEST EAX,EAX                        ; 004cf5db
    JZ 0x004cf596                       ; 004cf5dd
        ;   XREF to: 004cf596 (CONDITIONAL_JUMP)  ; LAB_004cf596
    CMP dword ptr [EAX + 0x478],0x0     ; 004cf5df
    JZ 0x004cf596                       ; 004cf5e6
        ;   XREF to: 004cf596 (CONDITIONAL_JUMP)  ; LAB_004cf596
    CMP dword ptr [EAX + 0x47c],0x0     ; 004cf5e8
    JNZ 0x004cf596                      ; 004cf5ef
        ;   XREF to: 004cf596 (CONDITIONAL_JUMP)  ; LAB_004cf596
    PUSH EBX                            ; 004cf5f1
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004cf5f2
    LEA ESI,[ESP + 0x24]                ; 004cf5f8
    LEA EDI,[ESP + 0xc]                 ; 004cf5fc
    CALL dword ptr [EAX + 0x24]         ; 004cf600
    MOV ECX,0x6                         ; 004cf603
    LEA ESI,[ESP + 0x24]                ; 004cf608
    ADD ESP,0x4                         ; 004cf60c
    MOVSD.REP ES:EDI,ESI                ; 004cf60f
    FLD float ptr [ESP + 0x8]           ; 004cf611
    FLD float ptr [ESP + 0xc]           ; 004cf615
    FLD float ptr [ESP + 0x10]          ; 004cf619
    LEA EDI,[ESP + 0xb0]                ; 004cf61d
    LEA ESI,[ESP + 0x38]                ; 004cf624
    FXCH ST2                            ; 004cf628
    FADD float ptr [ESP + 0x14]         ; 004cf62a
    FXCH                                ; 004cf62e
    FADD float ptr [ESP + 0x18]         ; 004cf630
    FXCH ST2                            ; 004cf634
    FADD float ptr [ESP + 0x1c]         ; 004cf636
    FXCH                                ; 004cf63a
    FSTP float ptr [ESP + 0x38]         ; 004cf63c
    FXCH                                ; 004cf640
    FSTP float ptr [ESP + 0x3c]         ; 004cf642
    FSTP float ptr [ESP + 0x40]         ; 004cf646
    MOVSD ES:EDI,ESI                    ; 004cf64a
    MOVSD ES:EDI,ESI                    ; 004cf64b
    MOVSD ES:EDI,ESI                    ; 004cf64c
    FLD float ptr [ESP + 0xb0]          ; 004cf64d
    FMUL float ptr [0x005d9d00]         ; 004cf654 | DAT_005d9d00
    FLD float ptr [ESP + 0xb4]          ; 004cf65a
    FMUL float ptr [0x005d9d00]         ; 004cf661 | DAT_005d9d00
    FLD float ptr [ESP + 0xb8]          ; 004cf667
    FMUL float ptr [0x005d9d00]         ; 004cf66e | DAT_005d9d00
    LEA EDI,[ESP + 0xd4]                ; 004cf674
    LEA ESI,[ESP + 0xbc]                ; 004cf67b
    FXCH ST2                            ; 004cf682
    FSTP float ptr [ESP + 0xbc]         ; 004cf684
    FSTP float ptr [ESP + 0xc0]         ; 004cf68b
    FSTP float ptr [ESP + 0xc4]         ; 004cf692
    MOVSD ES:EDI,ESI                    ; 004cf699
    MOVSD ES:EDI,ESI                    ; 004cf69a
    MOVSD ES:EDI,ESI                    ; 004cf69b
    LEA ESI,[ESP + 0xd4]                ; 004cf69c
    PUSH ESI                            ; 004cf6a3
    PUSH EBX                            ; 004cf6a4
    LEA ESI,[ESP + 0x70]                ; 004cf6a5
    LEA EDI,[ESP + 0x58]                ; 004cf6a9
    CALL FUN_00408d70                   ; 004cf6ad
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004cf6b2
    LEA EAX,[ESP + 0x50]                ; 004cf6b5
    LEA ESI,[ESP + 0x68]                ; 004cf6b9
    PUSH EAX                            ; 004cf6bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf6be
    MOVSD ES:EDI,ESI                    ; 004cf6c1
    MOVSD ES:EDI,ESI                    ; 004cf6c2
    MOVSD ES:EDI,ESI                    ; 004cf6c3
    PUSH EAX                            ; 004cf6c4
    LEA ESI,[ESP + 0xd0]                ; 004cf6c5
    LEA EDI,[ESP + 0x64]                ; 004cf6cc
    CALL FUN_00408de0                   ; 004cf6d0
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    ADD ESP,0x8                         ; 004cf6d5
    LEA ESI,[ESP + 0xc8]                ; 004cf6d8
    FLD float ptr [ESP + 0x14]          ; 004cf6df
    FLD float ptr [ESP + 0x18]          ; 004cf6e3
    MOVSD ES:EDI,ESI                    ; 004cf6e7
    MOVSD ES:EDI,ESI                    ; 004cf6e8
    MOVSD ES:EDI,ESI                    ; 004cf6e9
    FLD float ptr [ESP + 0x1c]          ; 004cf6ea
    LEA EDI,[ESP + 0x44]                ; 004cf6ee
    LEA ESI,[ESP + 0xa4]                ; 004cf6f2
    FXCH ST2                            ; 004cf6f9
    FSUB float ptr [ESP + 0x8]          ; 004cf6fb
    FXCH                                ; 004cf6ff
    FSUB float ptr [ESP + 0xc]          ; 004cf701
    FXCH ST2                            ; 004cf705
    FSUB float ptr [ESP + 0x10]         ; 004cf707
    FXCH                                ; 004cf70b
    FSTP float ptr [ESP + 0xa4]         ; 004cf70d
    FXCH                                ; 004cf714
    FSTP float ptr [ESP + 0xa8]         ; 004cf716
    FSTP float ptr [ESP + 0xac]         ; 004cf71d
    MOVSD ES:EDI,ESI                    ; 004cf724
    MOVSD ES:EDI,ESI                    ; 004cf725
    MOVSD ES:EDI,ESI                    ; 004cf726
    FLD float ptr [ESP + 0x44]          ; 004cf727
    FMUL float ptr [0x005d9d00]         ; 004cf72b | DAT_005d9d00
    FLD float ptr [ESP + 0x48]          ; 004cf731
    FMUL float ptr [0x005d9d00]         ; 004cf735 | DAT_005d9d00
    FLD float ptr [ESP + 0x4c]          ; 004cf73b
    FMUL float ptr [0x005d9d00]         ; 004cf73f | DAT_005d9d00
    LEA EDI,[ESP + 0x98]                ; 004cf745
    LEA ESI,[ESP + 0x8c]                ; 004cf74c
    FXCH ST2                            ; 004cf753
    FSTP float ptr [ESP + 0x8c]         ; 004cf755
    FSTP float ptr [ESP + 0x90]         ; 004cf75c
    FSTP float ptr [ESP + 0x94]         ; 004cf763
    MOVSD ES:EDI,ESI                    ; 004cf76a
    MOVSD ES:EDI,ESI                    ; 004cf76b
    MOVSD ES:EDI,ESI                    ; 004cf76c
    FLD float ptr [ESP + 0x98]          ; 004cf76d
    FMUL ST0                            ; 004cf774
    FLD float ptr [ESP + 0xa0]          ; 004cf776
    FMUL ST0                            ; 004cf77d
    FADDP                               ; 004cf77f
    FSQRT                               ; 004cf781
    XOR EDX,EDX                         ; 004cf783
    FSUBR float ptr [ESP + 0x64]        ; 004cf785
    MOV dword ptr [ESP + 0x9c],EDX      ; 004cf789
    FCOMP double ptr [0x005d9d04]       ; 004cf790 | DAT_005d9d04
    FNSTSW AX                           ; 004cf796
    SAHF                                ; 004cf798
    JA 0x004cf596                       ; 004cf799
        ;   XREF to: 004cf596 (CONDITIONAL_JUMP)  ; LAB_004cf596
    FLD float ptr [ESP + 0x60]          ; 004cf79f
    FLD1                                ; 004cf7a3
    FXCH                                ; 004cf7a5
    FSTP double ptr [ESP]               ; 004cf7a7
    FCOMP double ptr [ESP]              ; 004cf7aa
    FNSTSW AX                           ; 004cf7ad
    SAHF                                ; 004cf7af
    JA 0x004cf596                       ; 004cf7b0
        ;   XREF to: 004cf596 (CONDITIONAL_JUMP)  ; LAB_004cf596
    FLD double ptr [ESP]                ; 004cf7b6
    FCOMP double ptr [0x005d9d0c]       ; 004cf7b9 | DAT_005d9d0c
    FNSTSW AX                           ; 004cf7bf
    SAHF                                ; 004cf7c1
    JA 0x004cf596                       ; 004cf7c2
        ;   XREF to: 004cf596 (CONDITIONAL_JUMP)  ; LAB_004cf596
    LEA ESI,[ESP + 0x5c]                ; 004cf7c8
    PUSH ESI                            ; 004cf7cc
    LEA ESI,[ESP + 0x78]                ; 004cf7cd
    LEA EDI,[ESP + 0x84]                ; 004cf7d1
    CALL FUN_005838f0                   ; 004cf7d8
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x78]                ; 004cf7dd
    ADD ESP,0x4                         ; 004cf7e1
    MOVSD ES:EDI,ESI                    ; 004cf7e4
    MOVSD ES:EDI,ESI                    ; 004cf7e5
    MOVSD ES:EDI,ESI                    ; 004cf7e6
    PUSH dword ptr [ESP + 0x84]         ; 004cf7e7
    CALL FUN_0040d0c0                   ; 004cf7ee
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xec],EAX      ; 004cf7f3
    FLD float ptr [ESP + 0xec]          ; 004cf7fa
    FABS                                ; 004cf801
    ADD ESP,0x4                         ; 004cf803
    FCOMP double ptr [0x005d9d14]       ; 004cf806 | DAT_005d9d14
    FNSTSW AX                           ; 004cf80c
    SAHF                                ; 004cf80e
    JA 0x004cf596                       ; 004cf80f
        ;   XREF to: 004cf596 (CONDITIONAL_JUMP)  ; LAB_004cf596
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf815
    MOV dword ptr [EAX + 0x2560c],EBX   ; 004cf818
    JMP 0x004cf537                      ; 004cf81e
        ;   XREF to: 004cf537 (UNCONDITIONAL_JUMP)  ; LAB_004cf537

