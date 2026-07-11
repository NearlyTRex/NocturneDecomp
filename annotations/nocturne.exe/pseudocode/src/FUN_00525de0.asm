; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00525de0(int param_1,double param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   FUN_00523d10 at 00523d41
;   FUN_00525a80 at 00525af4
;
; Called Functions:
;   FUN_00525c70
;   FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525de0
        ;   Label: FUN_00525de0
    PUSH ESI                            ; 00525de1
    PUSH EDI                            ; 00525de2
    PUSH EBP                            ; 00525de3
    SUB ESP,0x10                        ; 00525de4
    MOV EBX,dword ptr [ESP + 0x24]      ; 00525de7
    PUSH 0x2                            ; 00525deb
    MOV EDX,dword ptr [ESP + 0x34]      ; 00525ded
    PUSH EDX                            ; 00525df1
    MOV ECX,dword ptr [ESP + 0x34]      ; 00525df2
    PUSH ECX                            ; 00525df6
    MOV ESI,dword ptr [ESP + 0x34]      ; 00525df7
    PUSH ESI                            ; 00525dfb
    PUSH EBX                            ; 00525dfc
    CALL FUN_00525c70                   ; 00525dfd
        ;   XREF to: 00525c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00525c70()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00525e02
    MOV dword ptr [ESP + 0x20],EDX      ; 00525e06
    FLD double ptr [ESP + 0x1c]         ; 00525e0a
    ADD ESP,0x14                        ; 00525e0e
    MOV EDI,dword ptr [EBX + 0x124]     ; 00525e11
    FSTP double ptr [ESP + 0x28]        ; 00525e17
    TEST EDI,EDI                        ; 00525e1b
    JNZ 0x00525e7e                      ; 00525e1d
        ;   XREF to: 00525e7e (CONDITIONAL_JUMP)  ; LAB_00525e7e
    FLDZ                                ; 00525e1f
    FCOMP double ptr [ESP + 0x28]       ; 00525e21
    FNSTSW AX                           ; 00525e25
    SAHF                                ; 00525e27
    JA 0x00525ea6                       ; 00525e28
        ;   XREF to: 00525ea6 (CONDITIONAL_JUMP)  ; LAB_00525ea6
    FLD1                                ; 00525e2e
    FCOMP double ptr [ESP + 0x28]       ; 00525e30
    FNSTSW AX                           ; 00525e34
    SAHF                                ; 00525e36
    JNC 0x00525e46                      ; 00525e37
        ;   XREF to: 00525e46 (CONDITIONAL_JUMP)  ; LAB_00525e46
    MOV EAX,0x3ff00000                  ; 00525e39
    MOV dword ptr [ESP + 0x28],EDI      ; 00525e3e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00525e42
    MOV EBP,dword ptr [ESP + 0x30]      ; 00525e46
        ;   Label: LAB_00525e46
    PUSH EBP                            ; 00525e4a
    PUSH 0x2                            ; 00525e4b
    MOV EAX,dword ptr [ESP + 0x34]      ; 00525e4d
    PUSH EAX                            ; 00525e51
    MOV EDX,dword ptr [ESP + 0x34]      ; 00525e52
    PUSH EDX                            ; 00525e56
    PUSH EBX                            ; 00525e57
    CALL FUN_00525c70                   ; 00525e58
        ;   XREF to: 00525c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00525c70()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00525e5d
    MOV dword ptr [ESP + 0x20],EDX      ; 00525e61
    FLD double ptr [ESP + 0x1c]         ; 00525e65
    ADD ESP,0x14                        ; 00525e69
    FSTP double ptr [ESP]               ; 00525e6c
    MOV EAX,dword ptr [ESP]             ; 00525e6f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00525e72
    ADD ESP,0x10                        ; 00525e76
    POP EBP                             ; 00525e79
    POP EDI                             ; 00525e7a
    POP ESI                             ; 00525e7b
    POP EBX                             ; 00525e7c
    RET                                 ; 00525e7d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00525e7e
        ;   Label: LAB_00525e7e
    PUSH ESI                            ; 00525e82
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00525e83
    PUSH EDI                            ; 00525e87
    CALL FUN_005648c0                   ; 00525e88
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x10],EAX      ; 00525e8d
    MOV dword ptr [ESP + 0x14],EDX      ; 00525e91
    FLD double ptr [ESP + 0x10]         ; 00525e95
    ADD ESP,0x8                         ; 00525e99
    FSUBR double ptr [ESP + 0x28]       ; 00525e9c
    FSTP double ptr [ESP + 0x28]        ; 00525ea0
    JMP 0x00525e46                      ; 00525ea4
        ;   XREF to: 00525e46 (UNCONDITIONAL_JUMP)  ; LAB_00525e46
    MOV dword ptr [ESP + 0x28],EDI      ; 00525ea6
        ;   Label: LAB_00525ea6
    MOV dword ptr [ESP + 0x2c],EDI      ; 00525eaa
    JMP 0x00525e46                      ; 00525eae
        ;   XREF to: 00525e46 (UNCONDITIONAL_JUMP)  ; LAB_00525e46

