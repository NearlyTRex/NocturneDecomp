; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_10010750(uint param_1)
;
;
; XREF[1]:
;   FUN_1000fc30 at 1000fd49
;
; Referenced Globals:
;   undefined4 DAT_10017760
;   undefined4 DAT_10240854
;   undefined4 DAT_10240858
;
; Called Functions:
;   __lock
;   FUN_10005a10
;   FUN_100107d0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10017760],0x0      ; 10010750 | DAT_10017760
        ;   Label: FUN_10010750
    PUSH ESI                            ; 10010757
    PUSH EDI                            ; 10010758
    JNZ 0x10010773                      ; 10010759
        ;   XREF to: 10010773 (CONDITIONAL_JUMP)  ; LAB_10010773
    MOV AX,word ptr [ESP + 0xc]         ; 1001075b
    CMP AX,0x61                         ; 10010760
    JC 0x100107c2                       ; 10010764
        ;   XREF to: 100107c2 (CONDITIONAL_JUMP)  ; LAB_100107c2
    CMP AX,0x7a                         ; 10010766
    JA 0x100107c2                       ; 1001076a
        ;   XREF to: 100107c2 (CONDITIONAL_JUMP)  ; LAB_100107c2
    SUB AX,0x20                         ; 1001076c
    POP EDI                             ; 10010770
    POP ESI                             ; 10010771
    RET                                 ; 10010772
    CMP dword ptr [0x10240854],0x0      ; 10010773 | DAT_10240854
        ;   Label: LAB_10010773
    JZ 0x1001078d                       ; 1001077a
        ;   XREF to: 1001078d (CONDITIONAL_JUMP)  ; LAB_1001078d
    PUSH 0x13                           ; 1001077c
    MOV ESI,0x1                         ; 1001077e
    CALL __lock                         ; 10010783
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 10010788
    JMP 0x10010795                      ; 1001078b
        ;   XREF to: 10010795 (UNCONDITIONAL_JUMP)  ; LAB_10010795
    XOR ESI,ESI                         ; 1001078d
        ;   Label: LAB_1001078d
    INC dword ptr [0x10240858]          ; 1001078f | DAT_10240858
    MOV EAX,dword ptr [ESP + 0xc]       ; 10010795
        ;   Label: LAB_10010795
    PUSH EAX                            ; 10010799
    CALL FUN_100107d0                   ; 1001079a
        ;   XREF to: 100107d0 (UNCONDITIONAL_CALL)  ; undefined FUN_100107d0()
    MOV DI,AX                           ; 1001079f
    ADD ESP,0x4                         ; 100107a2
    TEST ESI,ESI                        ; 100107a5
    JZ 0x100107b9                       ; 100107a7
        ;   XREF to: 100107b9 (CONDITIONAL_JUMP)  ; LAB_100107b9
    PUSH 0x13                           ; 100107a9
    CALL FUN_10005a10                   ; 100107ab
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    MOV AX,DI                           ; 100107b0
    ADD ESP,0x4                         ; 100107b3
    POP EDI                             ; 100107b6
    POP ESI                             ; 100107b7
    RET                                 ; 100107b8
    MOV AX,DI                           ; 100107b9
        ;   Label: LAB_100107b9
    DEC dword ptr [0x10240858]          ; 100107bc | DAT_10240858
    POP EDI                             ; 100107c2
        ;   Label: LAB_100107c2
    POP ESI                             ; 100107c3
    RET                                 ; 100107c4

