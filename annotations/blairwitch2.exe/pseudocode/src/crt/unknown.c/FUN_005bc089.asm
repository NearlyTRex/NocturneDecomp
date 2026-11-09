; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc089(undefined4 param_1,undefined8 *param_2)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c1f32
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bc089
        ;   Label: crt_unknown.c_FUN_005bc089
    MOV EBP,ESP                         ; 005bc08a
    SUB ESP,0x8                         ; 005bc08c
    PUSH 0x0                            ; 005bc08f
    MOV EDX,dword ptr [EBP + 0x8]       ; 005bc091
    PUSH EDX                            ; 005bc094
    CALL crt_unknown.c_FUN_005c1f32     ; 005bc095
        ;   XREF to: 005c1f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1f32()
    MOV dword ptr [EBP + -0x8],EAX      ; 005bc09a
    MOV dword ptr [EBP + -0x4],EDX      ; 005bc09d
    ADD ESP,0x8                         ; 005bc0a0
    MOV EAX,dword ptr [EBP + 0xc]       ; 005bc0a3
    MOV EDX,dword ptr [EBP + -0x8]      ; 005bc0a6
    MOV dword ptr [EAX],EDX             ; 005bc0a9
    MOV EDX,dword ptr [EBP + -0x4]      ; 005bc0ab
    MOV dword ptr [EAX + 0x4],EDX       ; 005bc0ae
    MOV ESP,EBP                         ; 005bc0b1
    POP EBP                             ; 005bc0b3
    RET                                 ; 005bc0b4

