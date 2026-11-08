; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059f2a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059f1a0
;   FUN_005bfb70
;   Ordinal_57
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 0059f2a0
        ;   Label: FUN_0059f2a0
    PUSH 0x2b8                          ; 0059f2a6
    PUSH 0x0                            ; 0059f2ab
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0059f2ad
    PUSH EDX                            ; 0059f2b4
    CALL FUN_005bfb70                   ; 0059f2b5
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0059f2ba
    PUSH 0x100                          ; 0059f2bd
    LEA EAX,[ESP + 0x4]                 ; 0059f2c2
    PUSH EAX                            ; 0059f2c6
    CALL Ordinal_57                     ; 0059f2c7
        ;   XREF to: 005cf7cc (UNCONDITIONAL_CALL)  ; undefined Ordinal_57()
    TEST EAX,EAX                        ; 0059f2cc
    JZ 0x0059f2d9                       ; 0059f2ce
        ;   XREF to: 0059f2d9 (CONDITIONAL_JUMP)  ; LAB_0059f2d9
    XOR EAX,EAX                         ; 0059f2d0
    ADD ESP,0x100                       ; 0059f2d2
    RET                                 ; 0059f2d8
    MOV ECX,dword ptr [ESP + 0x104]     ; 0059f2d9
        ;   Label: LAB_0059f2d9
    PUSH ECX                            ; 0059f2e0
    LEA EAX,[ESP + 0x4]                 ; 0059f2e1
    PUSH EAX                            ; 0059f2e5
    CALL FUN_0059f1a0                   ; 0059f2e6
        ;   XREF to: 0059f1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f1a0()
    ADD ESP,0x8                         ; 0059f2eb
    ADD ESP,0x100                       ; 0059f2ee
    RET                                 ; 0059f2f4

