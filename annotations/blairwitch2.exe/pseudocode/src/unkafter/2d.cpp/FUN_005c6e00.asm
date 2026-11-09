; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005c6e00(int param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c6690 at 005c66e5
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005c6ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6e00
        ;   Label: unkafter_2d.cpp_FUN_005c6e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c6e01
    PUSH EBX                            ; 005c6e05
    CALL unkafter_2d.cpp_FUN_005c6ff0   ; 005c6e06
        ;   XREF to: 005c6ff0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c6ff0()
    ADD ESP,0x4                         ; 005c6e0b
    TEST EAX,EAX                        ; 005c6e0e
    JZ 0x005c6e17                       ; 005c6e10
        ;   XREF to: 005c6e17 (CONDITIONAL_JUMP)  ; LAB_005c6e17
    LEA EAX,[EBX + -0x21]               ; 005c6e12
    POP EBX                             ; 005c6e15
    RET                                 ; 005c6e16
    MOV EAX,EBX                         ; 005c6e17
        ;   Label: LAB_005c6e17
    POP EBX                             ; 005c6e19
    RET                                 ; 005c6e1a

