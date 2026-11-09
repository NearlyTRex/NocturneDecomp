; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00434a10(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004bbf70 at 004bc2a4
;
; Called Functions:
;   support_codec.cpp_FUN_00434490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434a10
        ;   Label: support_codec.cpp_FUN_00434a10
    PUSH ESI                            ; 00434a11
    PUSH EDI                            ; 00434a12
    PUSH EBP                            ; 00434a13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00434a14
    LEA EDI,[EBX + 0x18]                ; 00434a18
    MOV EBP,dword ptr [ESP + 0x18]      ; 00434a1b
    LEA ESI,[EBX + 0x4]                 ; 00434a1f
    CMP dword ptr [EBX + 0x2c],0x0      ; 00434a22
        ;   Label: LAB_00434a22
    JL 0x00434a40                       ; 00434a26
        ;   XREF to: 00434a40 (CONDITIONAL_JUMP)  ; LAB_00434a40
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00434a28
        ;   Label: LAB_00434a28
    PUSH ECX                            ; 00434a2c
    MOV EAX,dword ptr [EBX]             ; 00434a2d
    PUSH EBX                            ; 00434a2f
    CALL dword ptr [EAX + 0xc]          ; 00434a30
    ADD ESP,0x8                         ; 00434a33
    CMP EAX,0x1                         ; 00434a36
    JZ 0x00434a22                       ; 00434a39
        ;   XREF to: 00434a22 (CONDITIONAL_JUMP)  ; LAB_00434a22
    POP EBP                             ; 00434a3b
    POP EDI                             ; 00434a3c
    POP ESI                             ; 00434a3d
    POP EBX                             ; 00434a3e
    RET                                 ; 00434a3f
    PUSH EBP                            ; 00434a40
        ;   Label: LAB_00434a40
    PUSH EDI                            ; 00434a41
    PUSH ESI                            ; 00434a42
    CALL support_codec.cpp_FUN_00434490 ; 00434a43
        ;   XREF to: 00434490 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434490()
    ADD ESP,0xc                         ; 00434a48
    TEST EAX,EAX                        ; 00434a4b
    JL 0x00434a54                       ; 00434a4d
        ;   XREF to: 00434a54 (CONDITIONAL_JUMP)  ; LAB_00434a54
    MOV dword ptr [EBX + 0x2c],EAX      ; 00434a4f
    JMP 0x00434a28                      ; 00434a52
        ;   XREF to: 00434a28 (UNCONDITIONAL_JUMP)  ; LAB_00434a28
    CMP EAX,-0x1                        ; 00434a54
        ;   Label: LAB_00434a54
    JNZ 0x00434a63                      ; 00434a57
        ;   XREF to: 00434a63 (CONDITIONAL_JUMP)  ; LAB_00434a63
    MOV EAX,0x1                         ; 00434a59
    POP EBP                             ; 00434a5e
    POP EDI                             ; 00434a5f
    POP ESI                             ; 00434a60
    POP EBX                             ; 00434a61
    RET                                 ; 00434a62
    XOR EAX,EAX                         ; 00434a63
        ;   Label: LAB_00434a63
    POP EBP                             ; 00434a65
    POP EDI                             ; 00434a66
    POP ESI                             ; 00434a67
    POP EBX                             ; 00434a68
    RET                                 ; 00434a69

