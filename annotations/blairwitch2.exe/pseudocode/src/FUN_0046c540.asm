; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046c540(int param_1,int param_2)
;
;
; XREF[8]:
;   FUN_00410670 at 004107d6
;   FUN_00413c70 at 00413dd9
;   FUN_00419b80 at 00419be3
;   FUN_00464ac0 at 00464c38
;   FUN_004dbd80 at 004dc1e8
;   FUN_0053e6c0 at 0053e797
;   FUN_00585810 at 00585925
;   FUN_005b6c90 at 005b6ca4
;
; Referenced Globals:
;   undefined4 DAT_01ba5cc4
;   undefined4 DAT_01ba5cc8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046c540
        ;   Label: FUN_0046c540
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046c544
    TEST ECX,ECX                        ; 0046c547
    JZ 0x0046c553                       ; 0046c549
        ;   XREF to: 0046c553 (CONDITIONAL_JUMP)  ; LAB_0046c553
    MOV dword ptr [EDX + 0x1c],0x0      ; 0046c54b
    RET                                 ; 0046c552
    PUSH EDI                            ; 0046c553
        ;   Label: LAB_0046c553
    CMP dword ptr [ESP + 0xc],0x0       ; 0046c554
    SETNZ AL                            ; 0046c559
    MOV EDI,0xffffffff                  ; 0046c55c
    AND EAX,0xff                        ; 0046c561
    MOV dword ptr [0x01ba5cc4],ECX      ; 0046c566 | DAT_01ba5cc4
    INC EAX                             ; 0046c56c
    MOV dword ptr [0x01ba5cc8],EDI      ; 0046c56d | DAT_01ba5cc8
    MOV dword ptr [EDX + 0x1c],EAX      ; 0046c573
    POP EDI                             ; 0046c576
    RET                                 ; 0046c577

