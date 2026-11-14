; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b0da0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_005b1840_00607f14 = 005b1840
;   undefined1* PTR_crt_unknown.c_FUN_005b1938_00607f18 = 005b1938
;   undefined1* PTR_crt_unknown.c_FUN_005b0d60_00607f1c = 005b0d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0da0
        ;   Label: crt_unknown.c_FUN_005b0da0
    PUSH ESI                            ; 005b0da1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b0da2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b0da6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b0daa
    TEST EBX,EBX                        ; 005b0dae
    JZ 0x005b0dc1                       ; 005b0db0
        ;   XREF to: 005b0dc1 (CONDITIONAL_JUMP)  ; LAB_005b0dc1
    MOV EAX,dword ptr [EBX]             ; 005b0db2
    MOV EDX,dword ptr [0x00607f14]      ; 005b0db4 | PTR_crt_unknown.c_FUN_005b1840_00607f14
    MOV [0x00607f14],EAX                ; 005b0dba | PTR_crt_unknown.c_FUN_005b1840_00607f14
    MOV dword ptr [EBX],EDX             ; 005b0dbf
    TEST ESI,ESI                        ; 005b0dc1
        ;   Label: LAB_005b0dc1
    JZ 0x005b0dd4                       ; 005b0dc3
        ;   XREF to: 005b0dd4 (CONDITIONAL_JUMP)  ; LAB_005b0dd4
    MOV EAX,dword ptr [ESI]             ; 005b0dc5
    MOV EDX,dword ptr [0x00607f18]      ; 005b0dc7 | PTR_crt_unknown.c_FUN_005b1938_00607f18
    MOV [0x00607f18],EAX                ; 005b0dcd | PTR_crt_unknown.c_FUN_005b1938_00607f18
    MOV dword ptr [ESI],EDX             ; 005b0dd2
    TEST ECX,ECX                        ; 005b0dd4
        ;   Label: LAB_005b0dd4
    JZ 0x005b0de7                       ; 005b0dd6
        ;   XREF to: 005b0de7 (CONDITIONAL_JUMP)  ; LAB_005b0de7
    MOV EAX,dword ptr [ECX]             ; 005b0dd8
    MOV EDX,dword ptr [0x00607f1c]      ; 005b0dda | PTR_crt_unknown.c_FUN_005b0d60_00607f1c
    MOV [0x00607f1c],EAX                ; 005b0de0 | PTR_crt_unknown.c_FUN_005b0d60_00607f1c
    MOV dword ptr [ECX],EDX             ; 005b0de5
    POP ESI                             ; 005b0de7
        ;   Label: LAB_005b0de7
    POP EBX                             ; 005b0de8
    RET                                 ; 005b0de9

