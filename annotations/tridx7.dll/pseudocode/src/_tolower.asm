; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl _tolower(int _C)
;
; Parameters:
; int              Stack[0x4]:4   _C
;
; Referenced Globals:
;   undefined4 DAT_10017760
;   undefined4 DAT_10240854
;   undefined4 DAT_10240858
;
; Called Functions:
;   __lock
;   __tolower_lk
;   FUN_10005a10
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10017760],0x0      ; 10009b70 | DAT_10017760
        ;   Label: _tolower
    PUSH ESI                            ; 10009b77
    PUSH EDI                            ; 10009b78
    JNZ 0x10009b8f                      ; 10009b79
        ;   XREF to: 10009b8f (CONDITIONAL_JUMP)  ; LAB_10009b8f
    MOV EAX,dword ptr [ESP + 0xc]       ; 10009b7b
    CMP EAX,0x41                        ; 10009b7f
    JL 0x10009bdb                       ; 10009b82
        ;   XREF to: 10009bdb (CONDITIONAL_JUMP)  ; LAB_10009bdb
    CMP EAX,0x5a                        ; 10009b84
    JG 0x10009bdb                       ; 10009b87
        ;   XREF to: 10009bdb (CONDITIONAL_JUMP)  ; LAB_10009bdb
    ADD EAX,0x20                        ; 10009b89
    POP EDI                             ; 10009b8c
    POP ESI                             ; 10009b8d
    RET                                 ; 10009b8e
    CMP dword ptr [0x10240854],0x0      ; 10009b8f | DAT_10240854
        ;   Label: LAB_10009b8f
    JZ 0x10009ba9                       ; 10009b96
        ;   XREF to: 10009ba9 (CONDITIONAL_JUMP)  ; LAB_10009ba9
    PUSH 0x13                           ; 10009b98
    MOV ESI,0x1                         ; 10009b9a
    CALL __lock                         ; 10009b9f
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 10009ba4
    JMP 0x10009bb1                      ; 10009ba7
        ;   XREF to: 10009bb1 (UNCONDITIONAL_JUMP)  ; LAB_10009bb1
    XOR ESI,ESI                         ; 10009ba9
        ;   Label: LAB_10009ba9
    INC dword ptr [0x10240858]          ; 10009bab | DAT_10240858
    MOV EAX,dword ptr [ESP + 0xc]       ; 10009bb1
        ;   Label: LAB_10009bb1
    PUSH EAX                            ; 10009bb5
    CALL __tolower_lk                   ; 10009bb6
        ;   XREF to: 10009be0 (UNCONDITIONAL_CALL)  ; undefined __tolower_lk()
    ADD ESP,0x4                         ; 10009bbb
    MOV EDI,EAX                         ; 10009bbe
    TEST ESI,ESI                        ; 10009bc0
    JZ 0x10009bd3                       ; 10009bc2
        ;   XREF to: 10009bd3 (CONDITIONAL_JUMP)  ; LAB_10009bd3
    PUSH 0x13                           ; 10009bc4
    CALL FUN_10005a10                   ; 10009bc6
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10009bcb
    MOV EAX,EDI                         ; 10009bce
    POP EDI                             ; 10009bd0
    POP ESI                             ; 10009bd1
    RET                                 ; 10009bd2
    MOV EAX,EDI                         ; 10009bd3
        ;   Label: LAB_10009bd3
    DEC dword ptr [0x10240858]          ; 10009bd5 | DAT_10240858
    POP EDI                             ; 10009bdb
        ;   Label: LAB_10009bdb
    POP ESI                             ; 10009bdc
    RET                                 ; 10009bdd

