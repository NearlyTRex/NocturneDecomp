; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10006da0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   __fpmath at 10005585
;
; Referenced Globals:
;   undefined4 s_GetCurrentThread_10012397+1
;   string s_SetThreadAffinityMask_100123ac
;   string s_GetCurrentProcess_100123c4
;   string s_GetProcessAffinityMask_100123d8
;   string s_KERNEL32_100123f0
;   void* PTR_GetProcAddress_102421a4 = 00242364
;   void* PTR_GetModuleHandleA_102421a8 = 00242376
;
; Called Functions:
;   __ms_p5_test_fdiv
;   GetModuleHandleA
;   GetProcAddress
;
; *****************************************************************************

section .text

    SUB ESP,0x14                        ; 10006da0
        ;   Label: FUN_10006da0
    MOV dword ptr [ESP + 0x10],0x0      ; 10006da3
    PUSH EBX                            ; 10006dab
    PUSH ESI                            ; 10006dac
    PUSH EDI                            ; 10006dad
    PUSH EBP                            ; 10006dae
    CALL __ms_p5_test_fdiv              ; 10006daf
        ;   XREF to: 10006d50 (UNCONDITIONAL_CALL)  ; undefined __ms_p5_test_fdiv()
    TEST EAX,EAX                        ; 10006db4
    JZ 0x10006dc5                       ; 10006db6
        ;   XREF to: 10006dc5 (CONDITIONAL_JUMP)  ; LAB_10006dc5
    MOV EAX,0x1                         ; 10006db8
    POP EBP                             ; 10006dbd
    POP EDI                             ; 10006dbe
    POP ESI                             ; 10006dbf
    POP EBX                             ; 10006dc0
    ADD ESP,0x14                        ; 10006dc1
    RET                                 ; 10006dc4
    PUSH 0x100123f0                     ; 10006dc5 | = "KERNEL32"
        ;   Label: LAB_10006dc5
    CALL dword ptr [0x102421a8]         ; 10006dca | PTR_GetModuleHandleA_102421a8
    MOV EBX,EAX                         ; 10006dd0
    TEST EBX,EBX                        ; 10006dd2
    JNZ 0x10006de0                      ; 10006dd4
        ;   XREF to: 10006de0 (CONDITIONAL_JUMP)  ; LAB_10006de0
    XOR EAX,EAX                         ; 10006dd6
    POP EBP                             ; 10006dd8
    POP EDI                             ; 10006dd9
    POP ESI                             ; 10006dda
    POP EBX                             ; 10006ddb
    ADD ESP,0x14                        ; 10006ddc
    RET                                 ; 10006ddf
    PUSH 0x100123d8                     ; 10006de0 | = "GetProcessAffinityMask"
        ;   Label: LAB_10006de0
    MOV ESI,dword ptr [0x102421a4]      ; 10006de5 | PTR_GetProcAddress_102421a4
    PUSH EBX                            ; 10006deb
    CALL ESI                            ; 10006dec | FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
    MOV dword ptr [ESP + 0x14],EAX      ; 10006dee
    TEST EAX,EAX                        ; 10006df2
    JNZ 0x10006e00                      ; 10006df4
        ;   XREF to: 10006e00 (CONDITIONAL_JUMP)  ; LAB_10006e00
    XOR EAX,EAX                         ; 10006df6
    POP EBP                             ; 10006df8
    POP EDI                             ; 10006df9
    POP ESI                             ; 10006dfa
    POP EBX                             ; 10006dfb
    ADD ESP,0x14                        ; 10006dfc
    RET                                 ; 10006dff
    PUSH 0x100123c4                     ; 10006e00 | = "GetCurrentProcess"
        ;   Label: LAB_10006e00
    PUSH EBX                            ; 10006e05
    CALL ESI                            ; 10006e06 | FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
    TEST EAX,EAX                        ; 10006e08
    JNZ 0x10006e16                      ; 10006e0a
        ;   XREF to: 10006e16 (CONDITIONAL_JUMP)  ; LAB_10006e16
    XOR EAX,EAX                         ; 10006e0c
    POP EBP                             ; 10006e0e
    POP EDI                             ; 10006e0f
    POP ESI                             ; 10006e10
    POP EBX                             ; 10006e11
    ADD ESP,0x14                        ; 10006e12
    RET                                 ; 10006e15
    CALL EAX                            ; 10006e16
        ;   Label: LAB_10006e16
    MOV EBP,EAX                         ; 10006e18
    LEA ECX,[ESP + 0x18]                ; 10006e1a
    LEA EAX,[ESP + 0x10]                ; 10006e1e
    PUSH EAX                            ; 10006e22
    PUSH ECX                            ; 10006e23
    PUSH EBP                            ; 10006e24
    CALL dword ptr [ESP + 0x20]         ; 10006e25
    TEST EAX,EAX                        ; 10006e29
    JNZ 0x10006e37                      ; 10006e2b
        ;   XREF to: 10006e37 (CONDITIONAL_JUMP)  ; LAB_10006e37
    XOR EAX,EAX                         ; 10006e2d
    POP EBP                             ; 10006e2f
    POP EDI                             ; 10006e30
    POP ESI                             ; 10006e31
    POP EBX                             ; 10006e32
    ADD ESP,0x14                        ; 10006e33
    RET                                 ; 10006e36
    CMP dword ptr [ESP + 0x10],0x1      ; 10006e37
        ;   Label: LAB_10006e37
    JNZ 0x10006e48                      ; 10006e3c
        ;   XREF to: 10006e48 (CONDITIONAL_JUMP)  ; LAB_10006e48
    XOR EAX,EAX                         ; 10006e3e
    POP EBP                             ; 10006e40
    POP EDI                             ; 10006e41
    POP ESI                             ; 10006e42
    POP EBX                             ; 10006e43
    ADD ESP,0x14                        ; 10006e44
    RET                                 ; 10006e47
    PUSH 0x100123ac                     ; 10006e48 | = "SetThreadAffinityMask"
        ;   Label: LAB_10006e48
    PUSH EBX                            ; 10006e4d
    CALL ESI                            ; 10006e4e | FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
    MOV EDI,EAX                         ; 10006e50
    TEST EDI,EDI                        ; 10006e52
    JNZ 0x10006e60                      ; 10006e54
        ;   XREF to: 10006e60 (CONDITIONAL_JUMP)  ; LAB_10006e60
    XOR EAX,EAX                         ; 10006e56
    POP EBP                             ; 10006e58
    POP EDI                             ; 10006e59
    POP ESI                             ; 10006e5a
    POP EBX                             ; 10006e5b
    ADD ESP,0x14                        ; 10006e5c
    RET                                 ; 10006e5f
    PUSH 0x10012398                     ; 10006e60 | s_GetCurrentThread_10012397+1
        ;   Label: LAB_10006e60
    PUSH EBX                            ; 10006e65
    CALL ESI                            ; 10006e66 | FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
    MOV ESI,EAX                         ; 10006e68
    TEST ESI,ESI                        ; 10006e6a
    JNZ 0x10006e78                      ; 10006e6c
        ;   XREF to: 10006e78 (CONDITIONAL_JUMP)  ; LAB_10006e78
    XOR EAX,EAX                         ; 10006e6e
    POP EBP                             ; 10006e70
    POP EDI                             ; 10006e71
    POP ESI                             ; 10006e72
    POP EBX                             ; 10006e73
    ADD ESP,0x14                        ; 10006e74
    RET                                 ; 10006e77
    XOR EBX,EBX                         ; 10006e78
        ;   Label: LAB_10006e78
    MOV EAX,0x1                         ; 10006e7a
        ;   Label: LAB_10006e7a
    MOV CL,BL                           ; 10006e7f
    SHL EAX,CL                          ; 10006e81
    TEST dword ptr [ESP + 0x10],EAX     ; 10006e83
    JZ 0x10006e98                       ; 10006e87
        ;   XREF to: 10006e98 (CONDITIONAL_JUMP)  ; LAB_10006e98
    PUSH EAX                            ; 10006e89
    CALL ESI                            ; 10006e8a
    PUSH EAX                            ; 10006e8c
    CALL EDI                            ; 10006e8d
    CALL __ms_p5_test_fdiv              ; 10006e8f
        ;   XREF to: 10006d50 (UNCONDITIONAL_CALL)  ; undefined __ms_p5_test_fdiv()
    TEST EAX,EAX                        ; 10006e94
    JNZ 0x10006ea0                      ; 10006e96
        ;   XREF to: 10006ea0 (CONDITIONAL_JUMP)  ; LAB_10006ea0
    INC EBX                             ; 10006e98
        ;   Label: LAB_10006e98
    CMP EBX,0x20                        ; 10006e99
    JL 0x10006e7a                       ; 10006e9c
        ;   XREF to: 10006e7a (CONDITIONAL_JUMP)  ; LAB_10006e7a
    JMP 0x10006ea8                      ; 10006e9e
        ;   XREF to: 10006ea8 (UNCONDITIONAL_JUMP)  ; LAB_10006ea8
    MOV dword ptr [ESP + 0x20],0x1      ; 10006ea0
        ;   Label: LAB_10006ea0
    MOV EAX,dword ptr [ESP + 0x18]      ; 10006ea8
        ;   Label: LAB_10006ea8
    PUSH EAX                            ; 10006eac
    CALL ESI                            ; 10006ead
    PUSH EAX                            ; 10006eaf
    CALL EDI                            ; 10006eb0
    TEST EAX,EAX                        ; 10006eb2
    JNZ 0x10006edb                      ; 10006eb4
        ;   XREF to: 10006edb (CONDITIONAL_JUMP)  ; LAB_10006edb
    LEA EAX,[ESP + 0x10]                ; 10006eb6
    LEA ECX,[ESP + 0x1c]                ; 10006eba
    PUSH EAX                            ; 10006ebe
    PUSH ECX                            ; 10006ebf
    PUSH EBP                            ; 10006ec0
    CALL dword ptr [ESP + 0x20]         ; 10006ec1
    TEST EAX,EAX                        ; 10006ec5
    JNZ 0x10006ed1                      ; 10006ec7
        ;   XREF to: 10006ed1 (CONDITIONAL_JUMP)  ; LAB_10006ed1
    MOV EAX,dword ptr [ESP + 0x18]      ; 10006ec9
    MOV dword ptr [ESP + 0x1c],EAX      ; 10006ecd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10006ed1
        ;   Label: LAB_10006ed1
    PUSH EAX                            ; 10006ed5
    CALL ESI                            ; 10006ed6
    PUSH EAX                            ; 10006ed8
    CALL EDI                            ; 10006ed9
    MOV EAX,dword ptr [ESP + 0x20]      ; 10006edb
        ;   Label: LAB_10006edb
    POP EBP                             ; 10006edf
    POP EDI                             ; 10006ee0
    POP ESI                             ; 10006ee1
    POP EBX                             ; 10006ee2
    ADD ESP,0x14                        ; 10006ee3
    RET                                 ; 10006ee6

