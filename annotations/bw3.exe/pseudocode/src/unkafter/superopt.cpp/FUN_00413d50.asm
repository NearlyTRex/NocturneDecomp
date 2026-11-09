; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_superopt_cpp_FUN_00413d50(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_special.cpp_clearScreen_FUN_00560d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413d50
        ;   Label: unkafter_superopt.cpp_FUN_00413d50
    PUSH ESI                            ; 00413d51
    PUSH EDI                            ; 00413d52
    PUSH EBP                            ; 00413d53
    MOV EDI,dword ptr [ESP + 0x14]      ; 00413d54
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 00413d58
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    PUSH 0xffff                         ; 00413d5d
    PUSH 0x0                            ; 00413d62
    LEA EAX,[EDI + 0x4]                 ; 00413d64
    PUSH 0x0                            ; 00413d67
    LEA EBP,[EDI + 0x70]                ; 00413d69
    PUSH EAX                            ; 00413d6c
    XOR ESI,ESI                         ; 00413d6d
    MOV EBX,EDI                         ; 00413d6f
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 00413d71
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00413d76
    MOV EAX,dword ptr [EDI + 0x20]      ; 00413d79
        ;   Label: LAB_00413d79
    INC EAX                             ; 00413d7c
    CMP ESI,EAX                         ; 00413d7d
    JGE 0x00413db3                      ; 00413d7f
        ;   XREF to: 00413db3 (CONDITIONAL_JUMP)  ; LAB_00413db3
    IMUL EAX,ESI,0x2c                   ; 00413d81
    CMP dword ptr [EBX + 0x98],0x1      ; 00413d84
    JZ 0x00413d93                       ; 00413d8b
        ;   XREF to: 00413d93 (CONDITIONAL_JUMP)  ; LAB_00413d93
    INC ESI                             ; 00413d8d
        ;   Label: LAB_00413d8d
    ADD EBX,0x2c                        ; 00413d8e
    JMP 0x00413d79                      ; 00413d91
        ;   XREF to: 00413d79 (UNCONDITIONAL_JUMP)  ; LAB_00413d79
    PUSH 0xffff                         ; 00413d93
        ;   Label: LAB_00413d93
    MOV EDX,dword ptr [EBX + 0x8c]      ; 00413d98
    PUSH EDX                            ; 00413d9e
    MOV ECX,dword ptr [EBX + 0x88]      ; 00413d9f
    PUSH ECX                            ; 00413da5
    ADD EAX,EBP                         ; 00413da6
    PUSH EAX                            ; 00413da8
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 00413da9
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00413dae
    JMP 0x00413d8d                      ; 00413db1
        ;   XREF to: 00413d8d (UNCONDITIONAL_JUMP)  ; LAB_00413d8d
    CMP dword ptr [EDI + 0x34],0x0      ; 00413db3
        ;   Label: LAB_00413db3
    JNZ 0x00413dfe                      ; 00413db7
        ;   XREF to: 00413dfe (CONDITIONAL_JUMP)  ; LAB_00413dfe
    MOV EDX,dword ptr [EDI + 0x18]      ; 00413db9
        ;   Label: LAB_00413db9
    MOV EAX,[0x01c5fae0]                ; 00413dbc | DAT_01c5fae0
    MOV ECX,dword ptr [EDI + EDX*0x4 + 0x91c] ; 00413dc1
    PUSH 0xffff                         ; 00413dc8
    SUB EAX,ECX                         ; 00413dcd
    MOV EBX,dword ptr [EDI + EDX*0x4 + 0x908] ; 00413dcf
    PUSH EAX                            ; 00413dd6
    MOV EAX,[0x01c5fadc]                ; 00413dd7 | DAT_01c5fadc
    SUB EAX,EBX                         ; 00413ddc
    PUSH EAX                            ; 00413dde
    LEA EAX,[EDX*0x4 + 0x0]             ; 00413ddf
    ADD EAX,EDX                         ; 00413de6
    SHL EAX,0x2                         ; 00413de8
    ADD EAX,0x7e0010                    ; 00413deb
    PUSH EAX                            ; 00413df0
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 00413df1
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00413df6
    POP EBP                             ; 00413df9
    POP EDI                             ; 00413dfa
    POP ESI                             ; 00413dfb
    POP EBX                             ; 00413dfc
    RET                                 ; 00413dfd
    MOV EAX,[0x01c5fae0]                ; 00413dfe | DAT_01c5fae0
        ;   Label: LAB_00413dfe
    MOV ECX,dword ptr [EDI + 0x92c]     ; 00413e03
    PUSH 0xffff                         ; 00413e09
    SUB EAX,ECX                         ; 00413e0e
    MOV EBX,dword ptr [EDI + 0x918]     ; 00413e10
    PUSH EAX                            ; 00413e16
    MOV EAX,[0x01c5fadc]                ; 00413e17 | DAT_01c5fadc
    SUB EAX,EBX                         ; 00413e1c
    PUSH EAX                            ; 00413e1e
    PUSH 0x7e0060                       ; 00413e1f
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 00413e24
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00413e29
    JMP 0x00413db9                      ; 00413e2c
        ;   XREF to: 00413db9 (UNCONDITIONAL_JUMP)  ; LAB_00413db9

