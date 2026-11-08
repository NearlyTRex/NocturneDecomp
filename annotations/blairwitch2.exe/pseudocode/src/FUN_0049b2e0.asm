; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049b2e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_0049e7f0 at 0049e81f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049b2e0
        ;   Label: FUN_0049b2e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049b2e4
    CMP EAX,EDX                         ; 0049b2e8
    JNZ 0x0049b313                      ; 0049b2ea
        ;   XREF to: 0049b313 (CONDITIONAL_JUMP)  ; LAB_0049b313
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049b2ec
        ;   Label: LAB_0049b2ec
    MOV dword ptr [EAX + 0xc],EDX       ; 0049b2f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049b2f3
    MOV dword ptr [EAX + 0x14],EDX      ; 0049b2f7
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049b2fa
    MOV dword ptr [EAX + 0x10],EDX      ; 0049b2fe
    MOV dword ptr [EAX + 0x18],EDX      ; 0049b301
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049b304
    MOV dword ptr [EAX + 0x1c],EDX      ; 0049b308
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049b30b
    MOV dword ptr [EAX + 0x20],EDX      ; 0049b30f
    RET                                 ; 0049b312
    MOV ECX,dword ptr [EDX]             ; 0049b313
        ;   Label: LAB_0049b313
    MOV dword ptr [EAX],ECX             ; 0049b315
    MOV ECX,dword ptr [EDX + 0x4]       ; 0049b317
    MOV dword ptr [EAX + 0x4],ECX       ; 0049b31a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0049b31d
    MOV dword ptr [EAX + 0x8],ECX       ; 0049b320
    JMP 0x0049b2ec                      ; 0049b323
        ;   XREF to: 0049b2ec (UNCONDITIONAL_JUMP)  ; LAB_0049b2ec

