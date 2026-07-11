; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00530d40(void)
;
;
; XREF[2]:
;   FUN_00531780 at 0053226f
;   FUN_005322b0 at 005322c5
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9d74
;   undefined4 DAT_02dc9d78
;   undefined4 DAT_02dc9d7c
;   undefined4 DAT_02dc9d80
;   undefined4 DAT_02dc9d84
;   undefined4 DAT_02dc9d88
;   undefined4 DAT_02dc9d8c
;   undefined4 DAT_02dc9d90
;   undefined4 DAT_02dc9d94
;   undefined4 DAT_02dc9d98
;   undefined4 DAT_02dc9d9c
;   undefined4 DAT_02dc9da0
;   undefined4 DAT_02dc9da4
;   undefined4 DAT_02dc9da8
;   ... and 24 more
;
; Called Functions:
;   FUN_00553d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530d40
        ;   Label: FUN_00530d40
    PUSH EBP                            ; 00530d41
    XOR EDX,EDX                         ; 00530d42
    MOV EBX,dword ptr [0x02dc9e08]      ; 00530d44 | DAT_02dc9e08
    MOV dword ptr [0x01c02594],EDX      ; 00530d4a | DAT_01c02594
    MOV dword ptr [0x02dc9e04],EDX      ; 00530d50 | DAT_02dc9e04
    TEST EBX,EBX                        ; 00530d56
    JNZ 0x00530e3b                      ; 00530d58
        ;   XREF to: 00530e3b (CONDITIONAL_JUMP)  ; LAB_00530e3b
    XOR EBP,EBP                         ; 00530d5e
        ;   Label: LAB_00530d5e
    MOV dword ptr [0x02dc9d78],EBP      ; 00530d60 | DAT_02dc9d78
    MOV dword ptr [0x02dc9d7c],EBP      ; 00530d66 | DAT_02dc9d7c
    MOV dword ptr [0x02dc9d80],EBP      ; 00530d6c | DAT_02dc9d80
    MOV dword ptr [0x02dc9d84],EBP      ; 00530d72 | DAT_02dc9d84
    MOV dword ptr [0x02dc9d88],EBP      ; 00530d78 | DAT_02dc9d88
    MOV dword ptr [0x02dc9d8c],EBP      ; 00530d7e | DAT_02dc9d8c
    MOV dword ptr [0x02dc9d90],EBP      ; 00530d84 | DAT_02dc9d90
    MOV dword ptr [0x02dc9d94],EBP      ; 00530d8a | DAT_02dc9d94
    MOV dword ptr [0x02dc9d98],EBP      ; 00530d90 | DAT_02dc9d98
    MOV dword ptr [0x02dc9d9c],EBP      ; 00530d96 | DAT_02dc9d9c
    MOV dword ptr [0x02dc9da0],EBP      ; 00530d9c | DAT_02dc9da0
    MOV dword ptr [0x02dc9da4],EBP      ; 00530da2 | DAT_02dc9da4
    MOV dword ptr [0x02dc9da8],EBP      ; 00530da8 | DAT_02dc9da8
    MOV dword ptr [0x02dc9dac],EBP      ; 00530dae | DAT_02dc9dac
    MOV dword ptr [0x02dc9db0],EBP      ; 00530db4 | DAT_02dc9db0
    MOV dword ptr [0x02dc9db4],EBP      ; 00530dba | DAT_02dc9db4
    MOV dword ptr [0x02dc9db8],EBP      ; 00530dc0 | DAT_02dc9db8
    MOV dword ptr [0x02dc9dbc],EBP      ; 00530dc6 | DAT_02dc9dbc
    MOV dword ptr [0x02dc9dc0],EBP      ; 00530dcc | DAT_02dc9dc0
    MOV dword ptr [0x02dc9dc4],EBP      ; 00530dd2 | DAT_02dc9dc4
    MOV dword ptr [0x02dc9dc8],EBP      ; 00530dd8 | DAT_02dc9dc8
    MOV dword ptr [0x02dc9dcc],EBP      ; 00530dde | DAT_02dc9dcc
    MOV dword ptr [0x02dc9dd0],EBP      ; 00530de4 | DAT_02dc9dd0
    MOV dword ptr [0x02dc9dd4],EBP      ; 00530dea | DAT_02dc9dd4
    MOV dword ptr [0x02dc9dd8],EBP      ; 00530df0 | DAT_02dc9dd8
    MOV dword ptr [0x02dc9ddc],EBP      ; 00530df6 | DAT_02dc9ddc
    MOV dword ptr [0x02dc9de0],EBP      ; 00530dfc | DAT_02dc9de0
    MOV dword ptr [0x02dc9de4],EBP      ; 00530e02 | DAT_02dc9de4
    MOV dword ptr [0x02dc9de8],EBP      ; 00530e08 | DAT_02dc9de8
    MOV dword ptr [0x02dc9dec],EBP      ; 00530e0e | DAT_02dc9dec
    MOV dword ptr [0x02dc9df0],EBP      ; 00530e14 | DAT_02dc9df0
    MOV dword ptr [0x02dc9df4],EBP      ; 00530e1a | DAT_02dc9df4
    MOV dword ptr [0x02dc9df8],EBP      ; 00530e20 | DAT_02dc9df8
    MOV dword ptr [0x02dc9dfc],EBP      ; 00530e26 | DAT_02dc9dfc
    MOV dword ptr [0x02dc9e00],EBP      ; 00530e2c | DAT_02dc9e00
    MOV dword ptr [0x02dc9d74],EBP      ; 00530e32 | DAT_02dc9d74
    POP EBP                             ; 00530e38
    POP EBX                             ; 00530e39
    RET                                 ; 00530e3a
    PUSH EDI                            ; 00530e3b
        ;   Label: LAB_00530e3b
    PUSH EBX                            ; 00530e3c
    CALL FUN_00553d20                   ; 00530e3d
        ;   XREF to: 00553d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00553d20()
    XOR EDI,EDI                         ; 00530e42
    ADD ESP,0x4                         ; 00530e44
    MOV dword ptr [0x02dc9e08],EDI      ; 00530e47 | DAT_02dc9e08
    POP EDI                             ; 00530e4d
    JMP 0x00530d5e                      ; 00530e4e
        ;   XREF to: 00530d5e (UNCONDITIONAL_JUMP)  ; LAB_00530d5e

