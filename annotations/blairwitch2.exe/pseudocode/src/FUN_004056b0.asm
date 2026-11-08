; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004056b0(int param_1)
;
;
; XREF[1]:
;   FUN_00406e00 at 00406f2c
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e68
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00431d90
;   FUN_00433000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004056b0
        ;   Label: FUN_004056b0
    PUSH ESI                            ; 004056b1
    PUSH EBP                            ; 004056b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004056b3
    LEA ESI,[EBX + 0x18]                ; 004056b7
    LEA EAX,[EBX + 0x8]                 ; 004056ba
    PUSH EAX                            ; 004056bd
    CALL FUN_00403970                   ; 004056be
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 004056c3
    TEST EAX,EAX                        ; 004056c6
    JZ 0x00405715                       ; 004056c8
        ;   XREF to: 00405715 (CONDITIONAL_JUMP)  ; LAB_00405715
    CMP dword ptr [0x01c35e68],0x0      ; 004056ca | DAT_01c35e68
    JZ 0x00405751                       ; 004056d1
        ;   XREF to: 00405751 (CONDITIONAL_JUMP)  ; LAB_00405751
    CMP dword ptr [0x01c38b40],0x0      ; 004056d7 | DAT_01c38b40
    JNZ 0x00405730                      ; 004056de
        ;   XREF to: 00405730 (CONDITIONAL_JUMP)  ; LAB_00405730
    CMP dword ptr [0x006141c0],0x20     ; 004056e0 | DAT_006141c0
    JNZ 0x00405724                      ; 004056e7
        ;   XREF to: 00405724 (CONDITIONAL_JUMP)  ; LAB_00405724
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004056e9 | DAT_01c35e6c
    MOV EBP,0xd                         ; 004056f3
        ;   Label: LAB_004056f3
    PUSH ESI                            ; 004056f8
    MOV EDX,dword ptr [EBX + 0x4]       ; 004056f9
    MOV EAX,0x4                         ; 004056fc
    PUSH EDX                            ; 00405701
    MOV dword ptr [0x01c38b54],EBP      ; 00405702 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 00405708 | DAT_01c38b58
    CALL FUN_00431d90                   ; 0040570d
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00405712
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405715
        ;   Label: LAB_00405715
    LEA EAX,[EBX + 0x18]                ; 00405718
    SHL ESI,0x2                         ; 0040571b
    ADD EAX,ESI                         ; 0040571e
    POP EBP                             ; 00405720
    POP ESI                             ; 00405721
    POP EBX                             ; 00405722
    RET                                 ; 00405723
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405724 | DAT_01c35e6c
        ;   Label: LAB_00405724
    JMP 0x004056f3                      ; 0040572e
        ;   XREF to: 004056f3 (UNCONDITIONAL_JUMP)  ; LAB_004056f3
    CMP dword ptr [0x006141c0],0x20     ; 00405730 | DAT_006141c0
        ;   Label: LAB_00405730
    JNZ 0x00405745                      ; 00405737
        ;   XREF to: 00405745 (CONDITIONAL_JUMP)  ; LAB_00405745
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405739 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x004056f3                      ; 00405743
        ;   XREF to: 004056f3 (UNCONDITIONAL_JUMP)  ; LAB_004056f3
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405745 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00405745
    JMP 0x004056f3                      ; 0040574f
        ;   XREF to: 004056f3 (UNCONDITIONAL_JUMP)  ; LAB_004056f3
    CMP dword ptr [0x01c38b40],0x0      ; 00405751 | DAT_01c38b40
        ;   Label: LAB_00405751
    JNZ 0x004057a7                      ; 00405758
        ;   XREF to: 004057a7 (CONDITIONAL_JUMP)  ; LAB_004057a7
    CMP dword ptr [0x006141c0],0x20     ; 0040575a | DAT_006141c0
    JNZ 0x0040579b                      ; 00405761
        ;   XREF to: 0040579b (CONDITIONAL_JUMP)  ; LAB_0040579b
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405763 | DAT_01c35e6c
    MOV EBP,0x20d                       ; 0040576d
        ;   Label: LAB_0040576d
    PUSH ESI                            ; 00405772
    MOV EDX,dword ptr [EBX + 0x4]       ; 00405773
    XOR EAX,EAX                         ; 00405776
    PUSH EDX                            ; 00405778
    MOV dword ptr [0x01c38b54],EBP      ; 00405779 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 0040577f | DAT_01c38b58
    CALL FUN_00433000                   ; 00405784
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; undefined FUN_00433000()
    ADD ESP,0x8                         ; 00405789
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040578c
    LEA EAX,[EBX + 0x18]                ; 0040578f
    SHL ESI,0x2                         ; 00405792
    ADD EAX,ESI                         ; 00405795
    POP EBP                             ; 00405797
    POP ESI                             ; 00405798
    POP EBX                             ; 00405799
    RET                                 ; 0040579a
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040579b | DAT_01c35e6c
        ;   Label: LAB_0040579b
    JMP 0x0040576d                      ; 004057a5
        ;   XREF to: 0040576d (UNCONDITIONAL_JUMP)  ; LAB_0040576d
    CMP dword ptr [0x006141c0],0x20     ; 004057a7 | DAT_006141c0
        ;   Label: LAB_004057a7
    JNZ 0x004057bc                      ; 004057ae
        ;   XREF to: 004057bc (CONDITIONAL_JUMP)  ; LAB_004057bc
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004057b0 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x0040576d                      ; 004057ba
        ;   XREF to: 0040576d (UNCONDITIONAL_JUMP)  ; LAB_0040576d
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004057bc | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_004057bc
    JMP 0x0040576d                      ; 004057c6
        ;   XREF to: 0040576d (UNCONDITIONAL_JUMP)  ; LAB_0040576d

