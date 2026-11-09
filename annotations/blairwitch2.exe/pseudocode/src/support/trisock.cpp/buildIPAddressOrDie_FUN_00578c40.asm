; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00578c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   support_trisock.cpp_staticInit_FUN_00578b90 at 00578ba9
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   support_trisock.cpp_buildIPAddress_FUN_00578d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578c40
        ;   Label: support_trisock.cpp_buildIPAddressOrDie_FUN_00578c40
    PUSH ESI                            ; 00578c41
    PUSH EDI                            ; 00578c42
    PUSH EBP                            ; 00578c43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00578c44
    MOV EDX,dword ptr [ESP + 0x24]      ; 00578c48
    PUSH EDX                            ; 00578c4c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00578c4d
    PUSH ECX                            ; 00578c51
    MOV ESI,dword ptr [ESP + 0x24]      ; 00578c52
    PUSH ESI                            ; 00578c56
    MOV EDI,dword ptr [ESP + 0x24]      ; 00578c57
    PUSH EDI                            ; 00578c5b
    PUSH EBX                            ; 00578c5c
    CALL support_trisock.cpp_buildIPAddress_FUN_00578d60 ; 00578c5d
        ;   XREF to: 00578d60 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddress_FUN_00578d60()
    ADD ESP,0x14                        ; 00578c62
    TEST EAX,EAX                        ; 00578c65
    JZ 0x00578c70                       ; 00578c67
        ;   XREF to: 00578c70 (CONDITIONAL_JUMP)  ; LAB_00578c70
    MOV EAX,EBX                         ; 00578c69
    POP EBP                             ; 00578c6b
    POP EDI                             ; 00578c6c
    POP ESI                             ; 00578c6d
    POP EBX                             ; 00578c6e
    RET                                 ; 00578c6f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00578c70
        ;   Label: LAB_00578c70
    PUSH EDX                            ; 00578c74
    MOV ECX,dword ptr [ESP + 0x24]      ; 00578c75
    PUSH ECX                            ; 00578c79
    PUSH ESI                            ; 00578c7a
    PUSH EDI                            ; 00578c7b
    MOV EBP,0x5ecfc3                    ; 00578c7c
    MOV EAX,0x60                        ; 00578c81
    PUSH 0x5ecfda                       ; 00578c86
    MOV dword ptr [0x01d046a0],EBP      ; 00578c8b | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00578c91 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00578c96
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x14                        ; 00578c9b
    MOV EAX,EBX                         ; 00578c9e
    POP EBP                             ; 00578ca0
    POP EDI                             ; 00578ca1
    POP ESI                             ; 00578ca2
    POP EBX                             ; 00578ca3
    RET                                 ; 00578ca4

