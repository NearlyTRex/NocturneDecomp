; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0e60(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6b50
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_0055af70
;   FUN_0055af80
;   FUN_00589c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0e60
        ;   Label: FUN_004a0e60
    PUSH EDI                            ; 004a0e61
    PUSH EBP                            ; 004a0e62
    MOV EBP,ESP                         ; 004a0e63
    SUB ESP,0x8                         ; 004a0e65
    AND ESP,0xfffffff8                  ; 004a0e68
    MOV EBX,dword ptr [EBP + 0x10]      ; 004a0e6b
    PUSH dword ptr [EBP + 0x14]         ; 004a0e6e
    PUSH EBX                            ; 004a0e71
    CALL FUN_00589c80                   ; 004a0e72
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00589c80()
    MOV EDX,dword ptr [EBX + 0x6d4]     ; 004a0e77
    ADD ESP,0x8                         ; 004a0e7d
    TEST EDX,EDX                        ; 004a0e80
    JNZ 0x004a0eae                      ; 004a0e82
        ;   XREF to: 004a0eae (CONDITIONAL_JUMP)  ; LAB_004a0eae
    MOV ECX,dword ptr [EBX + 0x6d8]     ; 004a0e84
    TEST ECX,ECX                        ; 004a0e8a
    JNZ 0x004a0f33                      ; 004a0e8c
        ;   XREF to: 004a0f33 (CONDITIONAL_JUMP)  ; LAB_004a0f33
    MOV EAX,dword ptr [EBX + 0x6d4]     ; 004a0e92
        ;   Label: LAB_004a0e92
    MOV dword ptr [EBX + 0x6d4],0x0     ; 004a0e98
    MOV dword ptr [EBX + 0x6dc],EAX     ; 004a0ea2
    MOV ESP,EBP                         ; 004a0ea8
    POP EBP                             ; 004a0eaa
    POP EDI                             ; 004a0eab
    POP EBX                             ; 004a0eac
    RET                                 ; 004a0ead
    MOV EAX,dword ptr [EBX + 0x6d8]     ; 004a0eae
        ;   Label: LAB_004a0eae
    PUSH EAX                            ; 004a0eb4
    MOV EDX,dword ptr [0x0061c068]      ; 004a0eb5 | DAT_0061c068
    PUSH EDX                            ; 004a0ebb
    CALL FUN_0055af70                   ; 004a0ebc
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; undefined FUN_0055af70()
    ADD ESP,0x8                         ; 004a0ec1
    TEST EAX,EAX                        ; 004a0ec4
    JZ 0x004a0f19                       ; 004a0ec6
        ;   XREF to: 004a0f19 (CONDITIONAL_JUMP)  ; LAB_004a0f19
    FLD float ptr [EBX + 0x6e0]         ; 004a0ec8
        ;   Label: LAB_004a0ec8
    FSUB float ptr [EBP + 0x14]         ; 004a0ece
    FLDZ                                ; 004a0ed1
    FXCH                                ; 004a0ed3
    FST float ptr [EBX + 0x6e0]         ; 004a0ed5
    FSTP double ptr [ESP]               ; 004a0edb
    FCOMP double ptr [ESP]              ; 004a0ede
    FNSTSW AX                           ; 004a0ee1
    SAHF                                ; 004a0ee3
    JBE 0x004a0e92                      ; 004a0ee4
        ;   XREF to: 004a0e92 (CONDITIONAL_JUMP)  ; LAB_004a0e92
    FLD float ptr [0x005f6b50]          ; 004a0ee6 | DAT_005f6b50
    FLD1                                ; 004a0eec
    FDIVRP                              ; 004a0eee
    MOV ECX,dword ptr [EBX + 0x6c4]     ; 004a0ef0
    DEC ECX                             ; 004a0ef6
    FADD double ptr [ESP]               ; 004a0ef7
    MOV dword ptr [EBX + 0x6c4],ECX     ; 004a0efa
    FSTP float ptr [EBX + 0x6e0]        ; 004a0f00
    TEST ECX,ECX                        ; 004a0f06
    JGE 0x004a0e92                      ; 004a0f08
        ;   XREF to: 004a0e92 (CONDITIONAL_JUMP)  ; LAB_004a0e92
    MOV dword ptr [EBX + 0x6c4],0x0     ; 004a0f0a
    JMP 0x004a0e92                      ; 004a0f14
        ;   XREF to: 004a0e92 (UNCONDITIONAL_JUMP)  ; LAB_004a0e92
    PUSH 0x5d59ab                       ; 004a0f19
        ;   Label: LAB_004a0f19
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004a0f1e
    PUSH EBX                            ; 004a0f24
    CALL dword ptr [EAX + 0x34]         ; 004a0f25
    ADD ESP,0x8                         ; 004a0f28
    MOV dword ptr [EBX + 0x6d8],EAX     ; 004a0f2b
    JMP 0x004a0ec8                      ; 004a0f31
        ;   XREF to: 004a0ec8 (UNCONDITIONAL_JUMP)  ; LAB_004a0ec8
    PUSH ECX                            ; 004a0f33
        ;   Label: LAB_004a0f33
    MOV EDI,dword ptr [0x0061c068]      ; 004a0f34 | DAT_0061c068
    PUSH EDI                            ; 004a0f3a
    CALL FUN_0055af80                   ; 004a0f3b
        ;   XREF to: 0055af80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055af80()
    ADD ESP,0x8                         ; 004a0f40
    MOV dword ptr [EBX + 0x6d8],0x0     ; 004a0f43
    JMP 0x004a0e92                      ; 004a0f4d
        ;   XREF to: 004a0e92 (UNCONDITIONAL_JUMP)  ; LAB_004a0e92

