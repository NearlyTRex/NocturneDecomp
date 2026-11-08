; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504cb0(int param_1)
;
;
; XREF[1]:
;   FUN_00503b40 at 00503c75
;
; Called Functions:
;   FUN_005056f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504cb0
        ;   Label: FUN_00504cb0
    PUSH ESI                            ; 00504cb1
    PUSH EDI                            ; 00504cb2
    PUSH EBP                            ; 00504cb3
    SUB ESP,0x4                         ; 00504cb4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00504cb7
    MOV EBX,EAX                         ; 00504cbb
    LEA ESI,[EAX + 0x30]                ; 00504cbd
    MOV dword ptr [EBX + 0x5f4],0x0     ; 00504cc0
        ;   Label: LAB_00504cc0
    MOV dword ptr [EBX + 0x5f8],0x0     ; 00504cca
    MOV dword ptr [EBX + 0x63c],0x0     ; 00504cd4
    MOV dword ptr [EBX + 0x640],0x0     ; 00504cde
    MOV dword ptr [EBX + 0x644],0x0     ; 00504ce8
    ADD EAX,0x4                         ; 00504cf2
    MOV dword ptr [EBX + 0x5f0],0x1     ; 00504cf5
    MOV dword ptr [EAX + 0x13fc],0x0    ; 00504cff
    MOV dword ptr [EAX + 0x142c],0x0    ; 00504d09
    MOV dword ptr [EAX + 0x145c],0x0    ; 00504d13
    ADD EBX,0x64                        ; 00504d1d
    MOV dword ptr [EAX + 0x148c],0x0    ; 00504d20
    CMP EAX,ESI                         ; 00504d2a
    JNZ 0x00504cc0                      ; 00504d2c
        ;   XREF to: 00504cc0 (CONDITIONAL_JUMP)  ; LAB_00504cc0
    MOV EAX,dword ptr [ESP + 0x18]      ; 00504d2e
    MOV dword ptr [EAX + 0x644],0xff    ; 00504d32
    MOV EBX,dword ptr [ESP + 0x18]      ; 00504d3c
    MOV EAX,dword ptr [EAX + 0x644]     ; 00504d40
    MOV dword ptr [EBX + 0x6a0],0xff    ; 00504d46
    MOV dword ptr [EBX + 0x704],0xff    ; 00504d50
    MOV dword ptr [EBX + 0x71c],0x0     ; 00504d5a
    MOV dword ptr [EBX + 0x7cc],0xff    ; 00504d64
    MOV dword ptr [EBX + 0x838],0xff    ; 00504d6e
    MOV dword ptr [EBX + 0x848],0x0     ; 00504d78
    MOV dword ptr [EBX + 0x8f8],0xff    ; 00504d82
    MOV dword ptr [EBX + 0x964],0xff    ; 00504d8c
    MOV dword ptr [EBX + 0x9c0],0xff    ; 00504d96
    MOV dword ptr [EBX + 0xa2c],0xff    ; 00504da0
    MOV dword ptr [EBX + 0xa90],0xff    ; 00504daa
    MOV dword ptr [EBX + 0x1460],0xff   ; 00504db4
    MOV dword ptr [EBX + 0x1464],0xff   ; 00504dbe
    MOV dword ptr [EBX + 0x1408],0xff   ; 00504dc8
    MOV dword ptr [EBX + 0x140c],0xff   ; 00504dd2
    MOV dword ptr [EBX + 0x1470],0xff   ; 00504ddc
    MOV dword ptr [EBX + 0x1414],0xff   ; 00504de6
    MOV dword ptr [EBX + 0x1418],0xff   ; 00504df0
    MOV dword ptr [EBX + 0x147c],0xff   ; 00504dfa
    MOV dword ptr [EBX + 0x1480],0xff   ; 00504e04
    MOV dword ptr [EBX + 0x1484],0xff   ; 00504e0e
    MOV dword ptr [EBX + 0x1428],0xff   ; 00504e18
    MOV dword ptr [EBX + 0x63c],EAX     ; 00504e22
    MOV EAX,dword ptr [EBX + 0x1460]    ; 00504e28
    XOR ESI,ESI                         ; 00504e2e
    MOV dword ptr [EBX + 0x1400],EAX    ; 00504e30
    LEA EAX,[EBX + 0xaa0]               ; 00504e36
    MOV dword ptr [EBX + 0x142c],0xff   ; 00504e3c
    LEA EDI,[EBX + 0xaa4]               ; 00504e46
    MOV dword ptr [ESP],EAX             ; 00504e4c
    LEA EBP,[EBX + 0xaa8]               ; 00504e4f
    IMUL EBX,ESI,0xb8                   ; 00504e55
        ;   Label: LAB_00504e55
    PUSH EBP                            ; 00504e5b
    MOV EDX,dword ptr [ESP + 0x4]       ; 00504e5c
    PUSH EDI                            ; 00504e60
    ADD EBX,EDX                         ; 00504e61
    PUSH EBX                            ; 00504e63
    PUSH ESI                            ; 00504e64
    MOV ECX,dword ptr [ESP + 0x28]      ; 00504e65
    PUSH ECX                            ; 00504e69
    ADD EBP,0xb8                        ; 00504e6a
    ADD EDI,0xb8                        ; 00504e70
    CALL FUN_005056f0                   ; 00504e76
        ;   XREF to: 005056f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005056f0()
    MOV dword ptr [EBX + 0x14],0x0      ; 00504e7b
    INC ESI                             ; 00504e82
    MOV dword ptr [EBX + 0x20],0x0      ; 00504e83
    ADD ESP,0x14                        ; 00504e8a
    FLD float ptr [EBX + 0x20]          ; 00504e8d
    MOV EAX,dword ptr [EBX + 0x14]      ; 00504e90
    MOV dword ptr [EBX + 0x10],EAX      ; 00504e93
    FST float ptr [EBX + 0x1c]          ; 00504e96
    MOV EAX,dword ptr [EBX + 0x10]      ; 00504e99
    MOV dword ptr [EBX + 0xc],EAX       ; 00504e9c
    FSTP float ptr [EBX + 0x18]         ; 00504e9f
    CMP ESI,0xc                         ; 00504ea2
    JL 0x00504e55                       ; 00504ea5
        ;   XREF to: 00504e55 (CONDITIONAL_JUMP)  ; LAB_00504e55
    MOV EAX,dword ptr [ESP + 0x18]      ; 00504ea7
    MOV dword ptr [EAX + 0x139c],0x1    ; 00504eab
    MOV dword ptr [EAX + 0x13b8],0x0    ; 00504eb5
    MOV dword ptr [EAX + 0x13fc],0xb    ; 00504ebf
    MOV dword ptr [EAX + 0x1358],0x0    ; 00504ec9
    ADD ESP,0x4                         ; 00504ed3
    POP EBP                             ; 00504ed6
    POP EDI                             ; 00504ed7
    POP ESI                             ; 00504ed8
    POP EBX                             ; 00504ed9
    RET                                 ; 00504eda

