; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a76f0_cpp_FUN_004a7bb0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe3a8
;   undefined4 DAT_01549aa4
;   undefined4 DAT_01d19f78
;   undefined4 DAT_01d19f7c
;   undefined4 DAT_01d19f80
;   undefined4 DAT_01d19f84
;   undefined4 DAT_01d19f88
;   undefined4 DAT_01d19f8c
;   undefined4 DAT_01d19f90
;   undefined4 DAT_01d1a058
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_font.cpp_FUN_004b0a20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a7bb0
        ;   Label: unkaddr_004a76f0.cpp_FUN_004a7bb0
    PUSH EBP                            ; 004a7bb1
    MOV EDX,dword ptr [0x005fe3a8]      ; 004a7bb2 | DAT_005fe3a8
    TEST EDX,EDX                        ; 004a7bb8
    JL 0x004a7bdf                       ; 004a7bba
        ;   XREF to: 004a7bdf (CONDITIONAL_JUMP)  ; LAB_004a7bdf
    MOV ECX,dword ptr [0x01d1a058]      ; 004a7bbc | DAT_01d1a058
    TEST ECX,ECX                        ; 004a7bc2
    JNZ 0x004a7be2                      ; 004a7bc4
        ;   XREF to: 004a7be2 (CONDITIONAL_JUMP)  ; LAB_004a7be2
    MOV ESI,0xffffffff                  ; 004a7bc6
    XOR AH,AH                           ; 004a7bcb
    MOV dword ptr [0x01d19f78],ECX      ; 004a7bcd | DAT_01d19f78
    MOV byte ptr [0x01d19f90],AH        ; 004a7bd3 | DAT_01d19f90
    MOV dword ptr [0x005fe3a8],ESI      ; 004a7bd9 | DAT_005fe3a8
    POP EBP                             ; 004a7bdf
        ;   Label: LAB_004a7bdf
    POP ESI                             ; 004a7be0
    RET                                 ; 004a7be1
    PUSH EBX                            ; 004a7be2
        ;   Label: LAB_004a7be2
    MOV EAX,[0x01d19f84]                ; 004a7be3 | DAT_01d19f84
    PUSH 0x0                            ; 004a7be8
    DEC EAX                             ; 004a7bea
    PUSH EAX                            ; 004a7beb
    MOV EAX,[0x01d19f80]                ; 004a7bec | DAT_01d19f80
    DEC EAX                             ; 004a7bf1
    PUSH EAX                            ; 004a7bf2
    MOV EBP,dword ptr [0x01d19f7c]      ; 004a7bf3 | DAT_01d19f7c
    PUSH EBP                            ; 004a7bf9
    PUSH EDX                            ; 004a7bfa
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004a7bfb
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a7c00
    PUSH -0x1                           ; 004a7c03
    PUSH 0xff                           ; 004a7c05
    MOV EDX,dword ptr [0x01d19f8c]      ; 004a7c0a | DAT_01d19f8c
    PUSH EDX                            ; 004a7c10
    MOV ECX,dword ptr [0x01d19f88]      ; 004a7c11 | DAT_01d19f88
    PUSH ECX                            ; 004a7c17
    PUSH 0x1d19f90                      ; 004a7c18
    MOV EBX,dword ptr [0x01549aa4]      ; 004a7c1d | DAT_01549aa4
    PUSH EBX                            ; 004a7c23
    CALL engine_font.cpp_FUN_004b0a20   ; 004a7c24
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004a7c29
    POP EBX                             ; 004a7c2c
    POP EBP                             ; 004a7c2d
    POP ESI                             ; 004a7c2e
    RET                                 ; 004a7c2f

