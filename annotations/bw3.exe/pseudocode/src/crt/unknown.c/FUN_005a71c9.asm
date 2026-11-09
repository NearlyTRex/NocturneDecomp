; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a71c9(undefined4 param_1,undefined8 *param_2)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005ad0f2
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a71c9
        ;   Label: crt_unknown.c_FUN_005a71c9
    MOV EBP,ESP                         ; 005a71ca
    SUB ESP,0x8                         ; 005a71cc
    PUSH 0x0                            ; 005a71cf
    MOV EDX,dword ptr [EBP + 0x8]       ; 005a71d1
    PUSH EDX                            ; 005a71d4
    CALL crt_unknown.c_FUN_005ad0f2     ; 005a71d5
        ;   XREF to: 005ad0f2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad0f2()
    MOV dword ptr [EBP + -0x8],EAX      ; 005a71da
    MOV dword ptr [EBP + -0x4],EDX      ; 005a71dd
    ADD ESP,0x8                         ; 005a71e0
    MOV EAX,dword ptr [EBP + 0xc]       ; 005a71e3
    MOV EDX,dword ptr [EBP + -0x8]      ; 005a71e6
    MOV dword ptr [EAX],EDX             ; 005a71e9
    MOV EDX,dword ptr [EBP + -0x4]      ; 005a71eb
    MOV dword ptr [EAX + 0x4],EDX       ; 005a71ee
    MOV ESP,EBP                         ; 005a71f1
    POP EBP                             ; 005a71f3
    RET                                 ; 005a71f4

