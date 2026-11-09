; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_trisock_cpp_FUN_00579cf0(int *param_1,code *param_2,undefined4 param_3)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_00579dc0 at 00579dde
;   support_trisock.cpp_FUN_00579e40 at 00579fac
;
; Called Functions:
;   support_trisock.cpp_FUN_00579240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579cf0
        ;   Label: support_trisock.cpp_FUN_00579cf0
    PUSH ESI                            ; 00579cf1
    PUSH EDI                            ; 00579cf2
    PUSH EBP                            ; 00579cf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00579cf4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00579cf8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00579cfc
    CMP dword ptr [EBX + 0x808],0x0     ; 00579d00
    JLE 0x00579d2d                      ; 00579d07
        ;   XREF to: 00579d2d (CONDITIONAL_JUMP)  ; LAB_00579d2d
    MOV EDX,dword ptr [EBX + 0x80c]     ; 00579d09
    MOV ECX,dword ptr [EBX + 0x808]     ; 00579d0f
    INC EDX                             ; 00579d15
    XOR EAX,EAX                         ; 00579d16
    DEC ECX                             ; 00579d18
    MOV AL,byte ptr [EDX + -0x1]        ; 00579d19
    MOV dword ptr [EBX + 0x80c],EDX     ; 00579d1c
    MOV dword ptr [EBX + 0x808],ECX     ; 00579d22
    POP EBP                             ; 00579d28
        ;   Label: LAB_00579d28
    POP EDI                             ; 00579d29
    POP ESI                             ; 00579d2a
    POP EBX                             ; 00579d2b
    RET                                 ; 00579d2c
    LEA EAX,[EBX + 0x8]                 ; 00579d2d
        ;   Label: LAB_00579d2d
    MOV dword ptr [EBX + 0x808],0x0     ; 00579d30
    MOV ESI,EAX                         ; 00579d3a
    MOV dword ptr [EBX + 0x80c],EAX     ; 00579d3c
    PUSH EBP                            ; 00579d42
        ;   Label: LAB_00579d42
    PUSH 0x0                            ; 00579d43
    CALL EDI                            ; 00579d45
    ADD ESP,0x8                         ; 00579d47
    TEST EAX,EAX                        ; 00579d4a
    JNZ 0x00579d58                      ; 00579d4c
        ;   XREF to: 00579d58 (CONDITIONAL_JUMP)  ; LAB_00579d58
    MOV EAX,0xffffffff                  ; 00579d4e
    POP EBP                             ; 00579d53
    POP EDI                             ; 00579d54
    POP ESI                             ; 00579d55
    POP EBX                             ; 00579d56
    RET                                 ; 00579d57
    PUSH 0x0                            ; 00579d58
        ;   Label: LAB_00579d58
    PUSH 0x800                          ; 00579d5a
    PUSH ESI                            ; 00579d5f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00579d60
    PUSH EAX                            ; 00579d63
    CALL support_trisock.cpp_FUN_00579240 ; 00579d64
        ;   XREF to: 00579240 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_FUN_00579240(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 00579d69
    MOV EDX,EAX                         ; 00579d6c
    CMP EAX,-0x2                        ; 00579d6e
    JNZ 0x00579d78                      ; 00579d71
        ;   XREF to: 00579d78 (CONDITIONAL_JUMP)  ; LAB_00579d78
    CMP dword ptr [EBX],0x0             ; 00579d73
    JNZ 0x00579d28                      ; 00579d76
        ;   XREF to: 00579d28 (CONDITIONAL_JUMP)  ; LAB_00579d28
    TEST EDX,EDX                        ; 00579d78
        ;   Label: LAB_00579d78
    JL 0x00579da0                       ; 00579d7a
        ;   XREF to: 00579da0 (CONDITIONAL_JUMP)  ; LAB_00579da0
    JLE 0x00579d42                      ; 00579d7c
        ;   XREF to: 00579d42 (CONDITIONAL_JUMP)  ; LAB_00579d42
    LEA EAX,[EBX + 0x9]                 ; 00579d7e
    MOV dword ptr [EBX + 0x808],EDX     ; 00579d81
    LEA ESI,[EDX + -0x1]                ; 00579d87
    MOV dword ptr [EBX + 0x80c],EAX     ; 00579d8a
    XOR EAX,EAX                         ; 00579d90
    MOV dword ptr [EBX + 0x808],ESI     ; 00579d92
    MOV AL,byte ptr [EBX + 0x8]         ; 00579d98
    POP EBP                             ; 00579d9b
    POP EDI                             ; 00579d9c
    POP ESI                             ; 00579d9d
    POP EBX                             ; 00579d9e
    RET                                 ; 00579d9f
    PUSH 0x5ed12f                       ; 00579da0
        ;   Label: LAB_00579da0
    PUSH 0x1                            ; 00579da5
    CALL EDI                            ; 00579da7
    MOV EAX,0xffffffff                  ; 00579da9
    ADD ESP,0x8                         ; 00579dae
    POP EBP                             ; 00579db1
    POP EDI                             ; 00579db2
    POP ESI                             ; 00579db3
    POP EBX                             ; 00579db4
    RET                                 ; 00579db5

