; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_beast_cpp_FUN_00418400(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00418400
        ;   Label: core_beast.cpp_FUN_00418400
    CMP dword ptr [EAX],0x1             ; 00418404
    JZ 0x0041840c                       ; 00418407
        ;   XREF to: 0041840c (CONDITIONAL_JUMP)  ; LAB_0041840c
    XOR EAX,EAX                         ; 00418409
    RET                                 ; 0041840b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0041840c
        ;   Label: LAB_0041840c
    ADD EDX,0x158                       ; 00418410
    MOV dword ptr [EAX + 0x20],EDX      ; 00418416
    MOV EAX,0x1                         ; 00418419
    RET                                 ; 0041841e

