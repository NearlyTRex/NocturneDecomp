; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414e70(int param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_0041ceb0
;   FUN_004544d0
;   FUN_00460a00
;   FUN_00460aa0
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414e70
        ;   Label: FUN_00414e70
    PUSH ESI                            ; 00414e71
    SUB ESP,0x18                        ; 00414e72
    MOV EBX,dword ptr [ESP + 0x24]      ; 00414e75
    LEA EAX,[EBX + 0x20]                ; 00414e79
    PUSH EAX                            ; 00414e7c
    MOV EDX,dword ptr [0x005ae704]      ; 00414e7d | DAT_005ae704
    PUSH EDX                            ; 00414e83 | DAT_01b4d738
    CALL FUN_00460a00                   ; 00414e84
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 00414e89
    PUSH 0x0                            ; 00414e8c
    LEA EAX,[EBX + 0x30]                ; 00414e8e
    PUSH EAX                            ; 00414e91
    MOV ECX,dword ptr [0x005ae704]      ; 00414e92 | DAT_005ae704
    PUSH ECX                            ; 00414e98 | DAT_01b4d738
    CALL FUN_00460aa0                   ; 00414e99
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0xc                         ; 00414e9e
    PUSH 0x0                            ; 00414ea1
    LEA EAX,[ESP + 0x4]                 ; 00414ea3
    PUSH EAX                            ; 00414ea7
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00414ea8
    PUSH EBX                            ; 00414eae
    CALL dword ptr [ESI + 0x14]         ; 00414eaf
    ADD ESP,0x8                         ; 00414eb2
    PUSH EAX                            ; 00414eb5
    CALL FUN_0041ceb0                   ; 00414eb6
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ceb0()
    ADD ESP,0x8                         ; 00414ebb
    MOV ESI,EAX                         ; 00414ebe
    TEST EAX,EAX                        ; 00414ec0
    JNZ 0x00414edb                      ; 00414ec2
        ;   XREF to: 00414edb (CONDITIONAL_JUMP)  ; LAB_00414edb
    MOV EBX,dword ptr [0x005ae704]      ; 00414ec4 | DAT_005ae704
        ;   Label: LAB_00414ec4
    PUSH EBX                            ; 00414eca | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 00414ecb
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 00414ed0
    MOV EAX,ESI                         ; 00414ed3
    ADD ESP,0x18                        ; 00414ed5
    POP ESI                             ; 00414ed8
    POP EBX                             ; 00414ed9
    RET                                 ; 00414eda
    PUSH -0x1                           ; 00414edb
        ;   Label: LAB_00414edb
    ADD EBX,0x150                       ; 00414edd
    PUSH 0x0                            ; 00414ee3
    PUSH EBX                            ; 00414ee5
    CALL FUN_004544d0                   ; 00414ee6
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544d0()
    ADD ESP,0xc                         ; 00414eeb
    JMP 0x00414ec4                      ; 00414eee
        ;   XREF to: 00414ec4 (UNCONDITIONAL_JUMP)  ; LAB_00414ec4

