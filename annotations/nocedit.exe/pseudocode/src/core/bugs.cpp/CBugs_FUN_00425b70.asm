; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bugs_cpp_CBugs_FUN_00425b70(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_bugs.cpp_CBugs_FUN_00426420 at 0042649b
;
; Referenced Globals:
;   float FLOAT_0065b5c8 = 0.5
;
; Called Functions:
;   core_bugs.cpp_FUN_00427ba0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425b70
        ;   Label: core_bugs.cpp_CBugs_FUN_00425b70
    PUSH ESI                            ; 00425b71
    SUB ESP,0x14                        ; 00425b72
    MOV ESI,dword ptr [ESP + 0x20]      ; 00425b75
    FLD float ptr [ESP + 0x24]          ; 00425b79
    FSUB float ptr [ESI + 0x199ec]      ; 00425b7d
    FLD1                                ; 00425b83
    FDIV float ptr [0x0065b5c8]         ; 00425b85 | FLOAT_0065b5c8
    FLD float ptr [ESP + 0x28]          ; 00425b8b
    FSUB float ptr [ESI + 0x199f0]      ; 00425b8f
    FXCH ST2                            ; 00425b95
    FMUL ST1                            ; 00425b97
    FXCH ST2                            ; 00425b99
    FMULP                               ; 00425b9b
    FXCH                                ; 00425b9d
    FSTP float ptr [ESP + 0x24]         ; 00425b9f
    FST float ptr [ESP + 0x28]          ; 00425ba3
    FLD float ptr [ESP + 0x24]          ; 00425ba7
    CALL crt_math.c_round_FUN_005fe6b0  ; 00425bab
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00425bb0
    CALL crt_math.c_round_FUN_005fe6b0  ; 00425bb2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00425bb7
    FISTP dword ptr [ESP + 0xc]         ; 00425bb9
    MOV EDX,dword ptr [ESP + 0xc]       ; 00425bbd
    FISTP dword ptr [ESP + 0x8]         ; 00425bc1
    TEST EDX,EDX                        ; 00425bc5
    JL 0x00425c2b                       ; 00425bc7
        ;   XREF to: 00425c2b (CONDITIONAL_JUMP)  ; LAB_00425c2b
    CMP EDX,0xb                         ; 00425bc9
    JGE 0x00425c33                      ; 00425bcc
        ;   XREF to: 00425c33 (CONDITIONAL_JUMP)  ; LAB_00425c33
    LEA EBX,[EDX + 0x1]                 ; 00425bce
    MOV EDX,dword ptr [ESP + 0xc]       ; 00425bd1
        ;   Label: LAB_00425bd1
    LEA EAX,[EDX*0x4 + 0x0]             ; 00425bd5
    SUB EAX,EDX                         ; 00425bdc
    MOV EDX,EAX                         ; 00425bde
    LEA EAX,[EBX*0x4 + 0x0]             ; 00425be0
    SUB EAX,EBX                         ; 00425be7
    SHL EDX,0x4                         ; 00425be9
    SHL EAX,0x4                         ; 00425bec
    LEA EBX,[ESI + EDX*0x1]             ; 00425bef
    ADD ESI,EAX                         ; 00425bf2
    MOV EAX,dword ptr [ESP + 0x8]       ; 00425bf4
    TEST EAX,EAX                        ; 00425bf8
    JL 0x00425c3e                       ; 00425bfa
        ;   XREF to: 00425c3e (CONDITIONAL_JUMP)  ; LAB_00425c3e
    CMP EAX,0xb                         ; 00425bfc
    JL 0x00425c4c                       ; 00425bff
        ;   XREF to: 00425c4c (CONDITIONAL_JUMP)  ; LAB_00425c4c
    PUSH dword ptr [ESI + 0x128e4]      ; 00425c01
    PUSH dword ptr [EBX + 0x128e4]      ; 00425c07
    CALL core_bugs.cpp_FUN_00427ba0     ; 00425c0d
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_FUN_00427ba0()
        ;   Label: LAB_00425c0d
    MOV dword ptr [ESP + 0x18],EAX      ; 00425c12
    FLD float ptr [ESP + 0x18]          ; 00425c16
    ADD ESP,0x8                         ; 00425c1a
    FSTP float ptr [ESP + 0x4]          ; 00425c1d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00425c21
    ADD ESP,0x14                        ; 00425c25
    POP ESI                             ; 00425c28
    POP EBX                             ; 00425c29
    RET                                 ; 00425c2a
    XOR EBX,EBX                         ; 00425c2b
        ;   Label: LAB_00425c2b
    MOV dword ptr [ESP + 0xc],EBX       ; 00425c2d
    JMP 0x00425bd1                      ; 00425c31
        ;   XREF to: 00425bd1 (UNCONDITIONAL_JUMP)  ; LAB_00425bd1
    MOV EBX,0xb                         ; 00425c33
        ;   Label: LAB_00425c33
    MOV dword ptr [ESP + 0xc],EBX       ; 00425c38
    JMP 0x00425bd1                      ; 00425c3c
        ;   XREF to: 00425bd1 (UNCONDITIONAL_JUMP)  ; LAB_00425bd1
    PUSH dword ptr [ESI + 0x128b8]      ; 00425c3e
        ;   Label: LAB_00425c3e
    PUSH dword ptr [EBX + 0x128b8]      ; 00425c44
    JMP 0x00425c0d                      ; 00425c4a
        ;   XREF to: 00425c0d (UNCONDITIONAL_JUMP)  ; LAB_00425c0d
    PUSH EDI                            ; 00425c4c
        ;   Label: LAB_00425c4c
    MOV EDI,EAX                         ; 00425c4d
    SHL EAX,0x2                         ; 00425c4f
    LEA EDX,[ESI + EAX*0x1]             ; 00425c52
    PUSH dword ptr [EDX + 0x128b8]      ; 00425c55
    PUSH dword ptr [EBX + EAX*0x1 + 0x128b8] ; 00425c5b
    CALL core_bugs.cpp_FUN_00427ba0     ; 00425c62
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_FUN_00427ba0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00425c67
    FLD float ptr [ESP + 0x1c]          ; 00425c6b
    ADD ESP,0x8                         ; 00425c6f
    PUSH dword ptr [ESI + EDI*0x4 + 0x128bc] ; 00425c72
    PUSH dword ptr [EBX + EDI*0x4 + 0x128bc] ; 00425c79
    FSTP float ptr [ESP + 0xc]          ; 00425c80
    CALL core_bugs.cpp_FUN_00427ba0     ; 00425c84
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_FUN_00427ba0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00425c89
    FLD float ptr [ESP + 0x1c]          ; 00425c8d
    ADD ESP,0x8                         ; 00425c91
    SUB ESP,0x4                         ; 00425c94
    FSTP float ptr [ESP]                ; 00425c97
    PUSH dword ptr [ESP + 0x8]          ; 00425c9a
    CALL core_bugs.cpp_FUN_00427ba0     ; 00425c9e
        ;   XREF to: 00427ba0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_FUN_00427ba0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00425ca3
    FLD float ptr [ESP + 0x1c]          ; 00425ca7
    ADD ESP,0x8                         ; 00425cab
    FSTP float ptr [ESP + 0x8]          ; 00425cae
    POP EDI                             ; 00425cb2
    MOV EAX,dword ptr [ESP + 0x4]       ; 00425cb3
    ADD ESP,0x14                        ; 00425cb7
    POP ESI                             ; 00425cba
    POP EBX                             ; 00425cbb
    RET                                 ; 00425cbc

