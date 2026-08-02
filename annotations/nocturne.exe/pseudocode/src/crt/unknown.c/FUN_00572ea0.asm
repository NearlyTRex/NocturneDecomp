; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00572ea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_00573ed0_005c2168 = 00573ed0
;   undefined1* PTR_crt_unknown.c_FUN_00573fc8_005c216c = 00573fc8
;   undefined1* PTR_crt_unknown.c_FUN_00572e60_005c2170 = 00572e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572ea0
        ;   Label: crt_unknown.c_FUN_00572ea0
    PUSH ESI                            ; 00572ea1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00572ea2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00572ea6
    MOV ECX,dword ptr [ESP + 0x14]      ; 00572eaa
    TEST EBX,EBX                        ; 00572eae
    JZ 0x00572ec1                       ; 00572eb0
        ;   XREF to: 00572ec1 (CONDITIONAL_JUMP)  ; LAB_00572ec1
    MOV EAX,dword ptr [EBX]             ; 00572eb2
    MOV EDX,dword ptr [0x005c2168]      ; 00572eb4 | PTR_crt_unknown.c_FUN_00573ed0_005c2168
    MOV [0x005c2168],EAX                ; 00572eba | PTR_crt_unknown.c_FUN_00573ed0_005c2168
    MOV dword ptr [EBX],EDX             ; 00572ebf
    TEST ESI,ESI                        ; 00572ec1
        ;   Label: LAB_00572ec1
    JZ 0x00572ed4                       ; 00572ec3
        ;   XREF to: 00572ed4 (CONDITIONAL_JUMP)  ; LAB_00572ed4
    MOV EAX,dword ptr [ESI]             ; 00572ec5
    MOV EDX,dword ptr [0x005c216c]      ; 00572ec7 | PTR_crt_unknown.c_FUN_00573fc8_005c216c
    MOV [0x005c216c],EAX                ; 00572ecd | PTR_crt_unknown.c_FUN_00573fc8_005c216c
    MOV dword ptr [ESI],EDX             ; 00572ed2
    TEST ECX,ECX                        ; 00572ed4
        ;   Label: LAB_00572ed4
    JZ 0x00572ee7                       ; 00572ed6
        ;   XREF to: 00572ee7 (CONDITIONAL_JUMP)  ; LAB_00572ee7
    MOV EAX,dword ptr [ECX]             ; 00572ed8
    MOV EDX,dword ptr [0x005c2170]      ; 00572eda | PTR_crt_unknown.c_FUN_00572e60_005c2170
    MOV [0x005c2170],EAX                ; 00572ee0 | PTR_crt_unknown.c_FUN_00572e60_005c2170
    MOV dword ptr [ECX],EDX             ; 00572ee5
    POP ESI                             ; 00572ee7
        ;   Label: LAB_00572ee7
    POP EBX                             ; 00572ee8
    RET                                 ; 00572ee9

