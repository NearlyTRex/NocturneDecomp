; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00568d58(uint param_1)
;
;
; XREF[1]:
;   FUN_00568e08 at 00568e12
;
; Referenced Globals:
;   void* PTR_VirtualAlloc_005755d4 = 001760d4
;   undefined4 DAT_005c1cc8
;   undefined4 DAT_005c1fe8
;
; Called Functions:
;   FUN_005638e0
;   FUN_00568ce0
;   FUN_00568e1c
;   VirtualAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568d58
        ;   Label: FUN_00568d58
    PUSH ESI                            ; 00568d59
    PUSH EDI                            ; 00568d5a
    CMP dword ptr [0x005c1fe8],0x0      ; 00568d5b | DAT_005c1fe8
    JNZ 0x00568d6a                      ; 00568d62
        ;   XREF to: 00568d6a (CONDITIONAL_JUMP)  ; LAB_00568d6a
    XOR EAX,EAX                         ; 00568d64
    POP EDI                             ; 00568d66
    POP ESI                             ; 00568d67
    POP EBX                             ; 00568d68
    RET                                 ; 00568d69
    CMP dword ptr [0x005c1cc8],-0x2     ; 00568d6a | DAT_005c1cc8
        ;   Label: LAB_00568d6a
    JNZ 0x00568d79                      ; 00568d71
        ;   XREF to: 00568d79 (CONDITIONAL_JUMP)  ; LAB_00568d79
    XOR EAX,EAX                         ; 00568d73
    POP EDI                             ; 00568d75
    POP ESI                             ; 00568d76
    POP EBX                             ; 00568d77
    RET                                 ; 00568d78
    LEA EAX,[ESP + 0x10]                ; 00568d79
        ;   Label: LAB_00568d79
    PUSH EAX                            ; 00568d7d
    CALL FUN_00568e1c                   ; 00568d7e
        ;   XREF to: 00568e1c (UNCONDITIONAL_CALL)  ; undefined FUN_00568e1c()
    ADD ESP,0x4                         ; 00568d83
    TEST EAX,EAX                        ; 00568d86
    JZ 0x00568e03                       ; 00568d88
        ;   XREF to: 00568e03 (CONDITIONAL_JUMP)  ; LAB_00568e03
    PUSH 0x40                           ; 00568d8e
    PUSH 0x1000                         ; 00568d90
    MOV ECX,dword ptr [ESP + 0x18]      ; 00568d95
    PUSH ECX                            ; 00568d99
    PUSH 0x0                            ; 00568d9a
    CALL dword ptr CS:[0x5755d4]        ; 00568d9c | PTR_VirtualAlloc_005755d4
    MOV EBX,EAX                         ; 00568da3
    TEST EAX,EAX                        ; 00568da5
    JZ 0x00568e03                       ; 00568da7
        ;   XREF to: 00568e03 (CONDITIONAL_JUMP)  ; LAB_00568e03
    MOV EAX,dword ptr [ESP + 0x10]      ; 00568da9
    MOV ESI,dword ptr [ESP + 0x10]      ; 00568dad
    SUB EAX,0x4                         ; 00568db1
    CMP EAX,ESI                         ; 00568db4
    JBE 0x00568dbe                      ; 00568db6
        ;   XREF to: 00568dbe (CONDITIONAL_JUMP)  ; LAB_00568dbe
    XOR EAX,EAX                         ; 00568db8
    POP EDI                             ; 00568dba
    POP ESI                             ; 00568dbb
    POP EBX                             ; 00568dbc
    RET                                 ; 00568dbd
    MOV dword ptr [ESP + 0x10],EAX      ; 00568dbe
        ;   Label: LAB_00568dbe
    CMP EAX,0x38                        ; 00568dc2
    JNC 0x00568dcd                      ; 00568dc5
        ;   XREF to: 00568dcd (CONDITIONAL_JUMP)  ; LAB_00568dcd
    XOR EAX,EAX                         ; 00568dc7
    POP EDI                             ; 00568dc9
    POP ESI                             ; 00568dca
    POP EBX                             ; 00568dcb
    RET                                 ; 00568dcc
    PUSH EBX                            ; 00568dcd
        ;   Label: LAB_00568dcd
    MOV dword ptr [EBX],EAX             ; 00568dce
    CALL FUN_00568ce0                   ; 00568dd0
        ;   XREF to: 00568ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00568ce0()
    MOV EDX,EAX                         ; 00568dd5
    ADD ESP,0x4                         ; 00568dd7
    MOV EAX,dword ptr [EAX]             ; 00568dda
    MOV dword ptr [ESP + 0x10],EAX      ; 00568ddc
    OR AL,0x1                           ; 00568de0
    MOV dword ptr [EDX],EAX             ; 00568de2
    ADD EDX,0x4                         ; 00568de4
    MOV EDI,dword ptr [EBX + 0x18]      ; 00568de7
    MOV dword ptr [EBX + 0x14],0x0      ; 00568dea
    INC EDI                             ; 00568df1
    PUSH EDX                            ; 00568df2
    MOV dword ptr [EBX + 0x18],EDI      ; 00568df3
    CALL FUN_005638e0                   ; 00568df6
        ;   XREF to: 005638e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638e0()
    MOV EAX,0x1                         ; 00568dfb
    ADD ESP,0x4                         ; 00568e00
    POP EDI                             ; 00568e03
        ;   Label: LAB_00568e03
    POP ESI                             ; 00568e04
    POP EBX                             ; 00568e05
    RET                                 ; 00568e06

