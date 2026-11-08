; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054cfc0(void)
;
;
; XREF[1]:
;   FUN_005526b0 at 005526d7
;
; Referenced Globals:
;   undefined4 DAT_02648e90
;   undefined4 DAT_02648e94
;   undefined4 DAT_02648e98
;   undefined4 DAT_02648e9c
;   undefined4 DAT_02648ea0
;   undefined4 DAT_02648ec4
;   undefined4 DAT_02648ee8
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cfc0
        ;   Label: FUN_0054cfc0
    PUSH EBP                            ; 0054cfc1
    MOV EDX,dword ptr [0x02648ec4]      ; 0054cfc2 | DAT_02648ec4
    TEST EDX,EDX                        ; 0054cfc8
    JNZ 0x0054d033                      ; 0054cfca
        ;   XREF to: 0054d033 (CONDITIONAL_JUMP)  ; LAB_0054d033
    PUSH ESI                            ; 0054cfcc
        ;   Label: LAB_0054cfcc
    MOV ESI,dword ptr [0x02648ee8]      ; 0054cfcd | DAT_02648ee8
    TEST ESI,ESI                        ; 0054cfd3
    JZ 0x0054cfe8                       ; 0054cfd5
        ;   XREF to: 0054cfe8 (CONDITIONAL_JUMP)  ; LAB_0054cfe8
    PUSH ESI                            ; 0054cfd7
    CALL FUN_005b86a0                   ; 0054cfd8
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    XOR EBP,EBP                         ; 0054cfdd
    ADD ESP,0x4                         ; 0054cfdf
    MOV dword ptr [0x02648ee8],EBP      ; 0054cfe2 | DAT_02648ee8
    MOV EAX,[0x02648ea0]                ; 0054cfe8 | DAT_02648ea0
        ;   Label: LAB_0054cfe8
    TEST EAX,EAX                        ; 0054cfed
    JNZ 0x0054d046                      ; 0054cfef
        ;   XREF to: 0054d046 (CONDITIONAL_JUMP)  ; LAB_0054d046
    XOR EAX,EAX                         ; 0054cff1
        ;   Label: LAB_0054cff1
    XOR EDX,EDX                         ; 0054cff3
    POP ESI                             ; 0054cff5
    ADD EAX,0x4                         ; 0054cff6
        ;   Label: LAB_0054cff6
    MOV dword ptr [EAX + 0x2648ea0],EDX ; 0054cff9
    MOV dword ptr [EAX + 0x2648ee8],EDX ; 0054cfff
    MOV dword ptr [EAX + 0x2648f08],EDX ; 0054d005
    MOV dword ptr [EAX + 0x2648ec4],EDX ; 0054d00b
    CMP EAX,0x20                        ; 0054d011
    JNZ 0x0054cff6                      ; 0054d014
        ;   XREF to: 0054cff6 (CONDITIONAL_JUMP)  ; LAB_0054cff6
    XOR EBX,EBX                         ; 0054d016
    MOV dword ptr [0x02648e9c],EBX      ; 0054d018 | DAT_02648e9c
    MOV dword ptr [0x02648e90],EBX      ; 0054d01e | DAT_02648e90
    MOV dword ptr [0x02648e94],EBX      ; 0054d024 | DAT_02648e94
    MOV dword ptr [0x02648e98],EBX      ; 0054d02a | DAT_02648e98
    POP EBP                             ; 0054d030
    POP EBX                             ; 0054d031
    RET                                 ; 0054d032
    PUSH EDX                            ; 0054d033
        ;   Label: LAB_0054d033
    CALL FUN_005b86a0                   ; 0054d034
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    XOR EBX,EBX                         ; 0054d039
    ADD ESP,0x4                         ; 0054d03b
    MOV dword ptr [0x02648ec4],EBX      ; 0054d03e | DAT_02648ec4
    JMP 0x0054cfcc                      ; 0054d044
        ;   XREF to: 0054cfcc (UNCONDITIONAL_JUMP)  ; LAB_0054cfcc
    PUSH EAX                            ; 0054d046
        ;   Label: LAB_0054d046
    CALL FUN_005b86a0                   ; 0054d047
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    XOR ECX,ECX                         ; 0054d04c
    ADD ESP,0x4                         ; 0054d04e
    MOV dword ptr [0x02648ea0],ECX      ; 0054d051 | DAT_02648ea0
    JMP 0x0054cff1                      ; 0054d057
        ;   XREF to: 0054cff1 (UNCONDITIONAL_JUMP)  ; LAB_0054cff1

