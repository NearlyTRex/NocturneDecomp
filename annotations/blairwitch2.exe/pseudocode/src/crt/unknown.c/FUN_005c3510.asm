; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005c3510(HANDLE param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined2       Stack[-0x20]:2  local_20
; undefined2       Stack[-0x1c]:2  local_1c
; undefined1       Stack[-0x1a]:1  local_1a
; undefined1       Stack[-0x17]:1  local_17
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3628 at 005c3688
;
; Referenced Globals:
;   void* PTR_ReadConsoleInputA_005c8600 = 001c90aa
;   undefined4 DAT_0061f6e8
;   undefined4 DAT_02681090
;   undefined4 DAT_02681094
;   undefined4 DAT_02681098
;
; Called Functions:
;   crt_unknown.c_FUN_005c4d20
;   ReadConsoleInputA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3510
        ;   Label: crt_unknown.c_FUN_005c3510
    PUSH ESI                            ; 005c3511
    PUSH EDI                            ; 005c3512
    PUSH EBP                            ; 005c3513
    SUB ESP,0x18                        ; 005c3514
    MOV ESI,dword ptr [0x02681098]      ; 005c3517 | DAT_02681098
    MOV EDI,dword ptr [0x02681094]      ; 005c351d | DAT_02681094
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005c3523
    MOV EAX,[0x0061f6e8]                ; 005c3527 | DAT_0061f6e8
    CMP EAX,0x1                         ; 005c352c
    JC 0x005c3575                       ; 005c352f
        ;   XREF to: 005c3575 (CONDITIONAL_JUMP)  ; LAB_005c3575
    JBE 0x005c353a                      ; 005c3531
        ;   XREF to: 005c353a (CONDITIONAL_JUMP)  ; LAB_005c353a
    CMP EAX,0x2                         ; 005c3533
    JZ 0x005c355c                       ; 005c3536
        ;   XREF to: 005c355c (CONDITIONAL_JUMP)  ; LAB_005c355c
    JMP 0x005c3575                      ; 005c3538
        ;   XREF to: 005c3575 (UNCONDITIONAL_JUMP)  ; LAB_005c3575
    DEC ESI                             ; 005c353a
        ;   Label: LAB_005c353a
    TEST EDI,EDI                        ; 005c353b
    JZ 0x005c354b                       ; 005c353d
        ;   XREF to: 005c354b (CONDITIONAL_JUMP)  ; LAB_005c354b
    TEST ESI,ESI                        ; 005c353f
    JNZ 0x005c3555                      ; 005c3541
        ;   XREF to: 005c3555 (CONDITIONAL_JUMP)  ; LAB_005c3555
    MOV dword ptr [0x0061f6e8],ESI      ; 005c3543 | DAT_0061f6e8
    JMP 0x005c3555                      ; 005c3549
        ;   XREF to: 005c3555 (UNCONDITIONAL_JUMP)  ; LAB_005c3555
    MOV dword ptr [0x0061f6e8],0x2      ; 005c354b | DAT_0061f6e8
        ;   Label: LAB_005c354b
    MOV EAX,EDI                         ; 005c3555
        ;   Label: LAB_005c3555
    JMP 0x005c3614                      ; 005c3557
        ;   XREF to: 005c3614 (UNCONDITIONAL_JUMP)  ; LAB_005c3614
    TEST ESI,ESI                        ; 005c355c
        ;   Label: LAB_005c355c
    SETNZ AL                            ; 005c355e
    AND EAX,0xff                        ; 005c3561
    MOV [0x0061f6e8],EAX                ; 005c3566 | DAT_0061f6e8
    MOV EAX,[0x02681090]                ; 005c356b | DAT_02681090
    JMP 0x005c3614                      ; 005c3570
        ;   XREF to: 005c3614 (UNCONDITIONAL_JUMP)  ; LAB_005c3614
    MOV dword ptr [0x02681098],ESI      ; 005c3575 | DAT_02681098
        ;   Label: LAB_005c3575
    MOV dword ptr [0x02681094],EDI      ; 005c357b | DAT_02681094
    LEA EAX,[ESP + 0x14]                ; 005c3581
        ;   Label: LAB_005c3581
    PUSH EAX                            ; 005c3585
    PUSH 0x1                            ; 005c3586
    LEA EAX,[ESP + 0x8]                 ; 005c3588
    PUSH EAX                            ; 005c358c
    PUSH EBX                            ; 005c358d
    CALL dword ptr CS:[0x5c8600]        ; 005c358e | PTR_ReadConsoleInputA_005c8600
    TEST EAX,EAX                        ; 005c3595
    JZ 0x005c3603                       ; 005c3597
        ;   XREF to: 005c3603 (CONDITIONAL_JUMP)  ; LAB_005c3603
    MOV EAX,ESP                         ; 005c3599
    PUSH EAX                            ; 005c359b
    CALL crt_unknown.c_FUN_005c4d20     ; 005c359c
        ;   XREF to: 005c4d20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4d20()
    ADD ESP,0x4                         ; 005c35a1
    TEST EAX,EAX                        ; 005c35a4
    JZ 0x005c3581                       ; 005c35a6
        ;   XREF to: 005c3581 (CONDITIONAL_JUMP)  ; LAB_005c3581
    XOR EAX,EAX                         ; 005c35a8
    MOV AX,word ptr [ESP + 0x8]         ; 005c35aa
    LEA ESI,[EAX + -0x1]                ; 005c35af
    MOV AH,byte ptr [ESP + 0x11]        ; 005c35b2
    MOVZX EDI,byte ptr [ESP + 0xe]      ; 005c35b6
    TEST AH,0x1                         ; 005c35bb
    JNZ 0x005c35c4                      ; 005c35be
        ;   XREF to: 005c35c4 (CONDITIONAL_JUMP)  ; LAB_005c35c4
    TEST EDI,EDI                        ; 005c35c0
    JNZ 0x005c35df                      ; 005c35c2
        ;   XREF to: 005c35df (CONDITIONAL_JUMP)  ; LAB_005c35df
    MOV EBP,0x2                         ; 005c35c4
        ;   Label: LAB_005c35c4
    XOR EAX,EAX                         ; 005c35c9
    XOR EDI,EDI                         ; 005c35cb
    MOV AX,word ptr [ESP + 0xc]         ; 005c35cd
    MOV dword ptr [0x0061f6e8],EBP      ; 005c35d2 | DAT_0061f6e8
    MOV [0x02681090],EAX                ; 005c35d8 | DAT_02681090
    JMP 0x005c35ed                      ; 005c35dd
        ;   XREF to: 005c35ed (UNCONDITIONAL_JUMP)  ; LAB_005c35ed
    TEST ESI,ESI                        ; 005c35df
        ;   Label: LAB_005c35df
    JZ 0x005c35ed                       ; 005c35e1
        ;   XREF to: 005c35ed (CONDITIONAL_JUMP)  ; LAB_005c35ed
    MOV dword ptr [0x0061f6e8],0x1      ; 005c35e3 | DAT_0061f6e8
    MOV EAX,EDI                         ; 005c35ed
        ;   Label: LAB_005c35ed
    MOV dword ptr [0x02681094],EDI      ; 005c35ef | DAT_02681094
    MOV dword ptr [0x02681098],ESI      ; 005c35f5 | DAT_02681098
    ADD ESP,0x18                        ; 005c35fb
    POP EBP                             ; 005c35fe
    POP EDI                             ; 005c35ff
    POP ESI                             ; 005c3600
    POP EBX                             ; 005c3601
    RET                                 ; 005c3602
    MOV EAX,0xffffffff                  ; 005c3603
        ;   Label: LAB_005c3603
    MOV EDI,dword ptr [0x02681094]      ; 005c3608 | DAT_02681094
    MOV ESI,dword ptr [0x02681098]      ; 005c360e | DAT_02681098
    MOV dword ptr [0x02681094],EDI      ; 005c3614 | DAT_02681094
        ;   Label: LAB_005c3614
    MOV dword ptr [0x02681098],ESI      ; 005c361a | DAT_02681098
    ADD ESP,0x18                        ; 005c3620
    POP EBP                             ; 005c3623
    POP EDI                             ; 005c3624
    POP ESI                             ; 005c3625
    POP EBX                             ; 005c3626
    RET                                 ; 005c3627

