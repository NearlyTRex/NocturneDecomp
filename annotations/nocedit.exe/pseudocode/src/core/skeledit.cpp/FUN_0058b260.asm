; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_FUN_0058b260(void)
;
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x8                            ; 0058b260
        ;   Label: core_skeledit.cpp_FUN_0058b260
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058b265
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058b26a
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058b26b
    MOV ECX,dword ptr [EBX + 0x2936c]   ; 0058b26f
    XOR EDX,EDX                         ; 0058b275
    TEST ECX,ECX                        ; 0058b277
    JLE 0x0058b2b7                      ; 0058b279
        ;   XREF to: 0058b2b7 (CONDITIONAL_JUMP)  ; LAB_0058b2b7
    PUSH ESI                            ; 0058b27b
    FLD float ptr [ESP + 0x10]          ; 0058b27c
    XOR ECX,ECX                         ; 0058b280
    MOV EAX,dword ptr [EBX + 0x29374]   ; 0058b282
        ;   Label: LAB_0058b282
    FLD float ptr [ECX + EAX*0x1]       ; 0058b288
    FMUL ST1                            ; 0058b28b
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 0058b28d
    FMUL ST2                            ; 0058b291
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 0058b293
    FMUL ST3                            ; 0058b297
    INC EDX                             ; 0058b299
    FXCH ST2                            ; 0058b29a
    FSTP float ptr [ECX + EAX*0x1]      ; 0058b29c
    FSTP float ptr [ECX + EAX*0x1 + 0x4] ; 0058b29f
    FSTP float ptr [ECX + EAX*0x1 + 0x8] ; 0058b2a3
    MOV ESI,dword ptr [EBX + 0x2936c]   ; 0058b2a7
    ADD ECX,0xc                         ; 0058b2ad
    CMP EDX,ESI                         ; 0058b2b0
    JL 0x0058b282                       ; 0058b2b2
        ;   XREF to: 0058b282 (CONDITIONAL_JUMP)  ; LAB_0058b282
    FSTP ST0                            ; 0058b2b4
    POP ESI                             ; 0058b2b6
    POP EBX                             ; 0058b2b7
        ;   Label: LAB_0058b2b7
    RET                                 ; 0058b2b8

