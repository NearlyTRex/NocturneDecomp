; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c9988(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c9a88 at 005c9aba
;
; Referenced Globals:
;   undefined4 DAT_0060852a
;   undefined4 DAT_0060852c
;   undefined4 DAT_00608544
;   undefined4 DAT_00608546
;
; Called Functions:
;   crt_unknown.c_FUN_005c9950
;   unkafter_zombie.cpp_FUN_005cc6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9988
        ;   Label: crt_unknown.c_FUN_005c9988
    PUSH ESI                            ; 005c9989
    PUSH EDI                            ; 005c998a
    PUSH EBP                            ; 005c998b
    SUB ESP,0x24                        ; 005c998c
    MOV EBX,dword ptr [ESP + 0x38]      ; 005c998f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005c9993
    MOV EDX,dword ptr [EBX + 0x20]      ; 005c9997
    TEST EDX,EDX                        ; 005c999a
    JNZ 0x005c9a68                      ; 005c999c
        ;   XREF to: 005c9a68 (CONDITIONAL_JUMP)  ; LAB_005c9a68
    LEA EAX,[EDI + 0x76c]               ; 005c99a2
    PUSH EAX                            ; 005c99a8
    CALL crt_unknown.c_FUN_005c9950     ; 005c99a9
        ;   XREF to: 005c9950 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9950()
    ADD ESP,0x4                         ; 005c99ae
    TEST EAX,EAX                        ; 005c99b1
    JZ 0x005c99c8                       ; 005c99b3
        ;   XREF to: 005c99c8 (CONDITIONAL_JUMP)  ; LAB_005c99c8
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c99b5
    MOV ESI,dword ptr [EAX*0x2 + 0x608546] ; 005c99b8 | DAT_00608546
    MOV EAX,dword ptr [EAX*0x2 + 0x608544] ; 005c99bf | DAT_00608544
    JMP 0x005c99d9                      ; 005c99c6
        ;   XREF to: 005c99d9 (UNCONDITIONAL_JUMP)  ; LAB_005c99d9
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c99c8
        ;   Label: LAB_005c99c8
    MOV ESI,dword ptr [EAX*0x2 + 0x60852c] ; 005c99cb | DAT_0060852c
    MOV EAX,dword ptr [EAX*0x2 + 0x60852a] ; 005c99d2 | DAT_0060852a
    SAR ESI,0x10                        ; 005c99d9
        ;   Label: LAB_005c99d9
    SAR EAX,0x10                        ; 005c99dc
    SUB ESI,EAX                         ; 005c99df
    XOR EBP,EBP                         ; 005c99e1
    MOV ECX,0x1                         ; 005c99e3
    MOV dword ptr [ESP],EBP             ; 005c99e8
    MOV dword ptr [ESP + 0x4],EBP       ; 005c99eb
    MOV dword ptr [ESP + 0x8],EBP       ; 005c99ef
    MOV dword ptr [ESP + 0xc],ECX       ; 005c99f3
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c99f7
    MOV dword ptr [ESP + 0x10],EAX      ; 005c99fa
    MOV EAX,ESP                         ; 005c99fe
    PUSH EAX                            ; 005c9a00
    MOV dword ptr [ESP + 0x18],EDI      ; 005c9a01
    MOV dword ptr [ESP + 0x24],EBP      ; 005c9a05
    CALL unkafter_zombie.cpp_FUN_005cc6e0 ; 005c9a09
        ;   XREF to: 005cc6e0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc6e0()
    ADD ESP,0x4                         ; 005c9a0e
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c9a11
    SUB EDX,dword ptr [ESP + 0x18]      ; 005c9a14
    ADD EDX,0x7                         ; 005c9a18
    MOV ECX,0x7                         ; 005c9a1b
    MOV EAX,EDX                         ; 005c9a20
    SAR EDX,0x1f                        ; 005c9a22
    IDIV ECX                            ; 005c9a25
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c9a27
    CMP EAX,0x5                         ; 005c9a2a
    JNZ 0x005c9a50                      ; 005c9a2d
        ;   XREF to: 005c9a50 (CONDITIONAL_JUMP)  ; LAB_005c9a50
    LEA EDI,[EAX + -0x1]                ; 005c9a2f
    LEA ECX,[EDI*0x8 + 0x0]             ; 005c9a32
    LEA EAX,[EDX + 0x1]                 ; 005c9a39
    SUB ECX,EDI                         ; 005c9a3c
    ADD EAX,ECX                         ; 005c9a3e
    CMP EAX,ESI                         ; 005c9a40
    JLE 0x005c9a4c                      ; 005c9a42
        ;   XREF to: 005c9a4c (CONDITIONAL_JUMP)  ; LAB_005c9a4c
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c9a44
    SUB EAX,0x2                         ; 005c9a47
    JMP 0x005c9a51                      ; 005c9a4a
        ;   XREF to: 005c9a51 (UNCONDITIONAL_JUMP)  ; LAB_005c9a51
    MOV EAX,EDI                         ; 005c9a4c
        ;   Label: LAB_005c9a4c
    JMP 0x005c9a51                      ; 005c9a4e
        ;   XREF to: 005c9a51 (UNCONDITIONAL_JUMP)  ; LAB_005c9a51
    DEC EAX                             ; 005c9a50
        ;   Label: LAB_005c9a50
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c9a51
        ;   Label: LAB_005c9a51
    ADD EBX,EDX                         ; 005c9a55
    MOV EDX,EAX                         ; 005c9a57
    SHL EAX,0x3                         ; 005c9a59
    SUB EAX,EDX                         ; 005c9a5c
    ADD EAX,EBX                         ; 005c9a5e
    ADD ESP,0x24                        ; 005c9a60
    POP EBP                             ; 005c9a63
    POP EDI                             ; 005c9a64
    POP ESI                             ; 005c9a65
    POP EBX                             ; 005c9a66
    RET                                 ; 005c9a67
    CMP EDX,0x1                         ; 005c9a68
        ;   Label: LAB_005c9a68
    JNZ 0x005c9a7a                      ; 005c9a6b
        ;   XREF to: 005c9a7a (CONDITIONAL_JUMP)  ; LAB_005c9a7a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c9a6d
    SUB EAX,EDX                         ; 005c9a70
    ADD ESP,0x24                        ; 005c9a72
    POP EBP                             ; 005c9a75
    POP EDI                             ; 005c9a76
    POP ESI                             ; 005c9a77
    POP EBX                             ; 005c9a78
    RET                                 ; 005c9a79
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c9a7a
        ;   Label: LAB_005c9a7a
    ADD ESP,0x24                        ; 005c9a7d
    POP EBP                             ; 005c9a80
    POP EDI                             ; 005c9a81
    POP ESI                             ; 005c9a82
    POP EBX                             ; 005c9a83
    RET                                 ; 005c9a84

