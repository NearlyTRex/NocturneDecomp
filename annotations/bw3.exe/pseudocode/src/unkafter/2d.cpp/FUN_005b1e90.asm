; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005b1e90(int param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b1720 at 005b1775
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005b2080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1e90
        ;   Label: unkafter_2d.cpp_FUN_005b1e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1e91
    PUSH EBX                            ; 005b1e95
    CALL unkafter_2d.cpp_FUN_005b2080   ; 005b1e96
        ;   XREF to: 005b2080 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b2080()
    ADD ESP,0x4                         ; 005b1e9b
    TEST EAX,EAX                        ; 005b1e9e
    JZ 0x005b1ea7                       ; 005b1ea0
        ;   XREF to: 005b1ea7 (CONDITIONAL_JUMP)  ; LAB_005b1ea7
    LEA EAX,[EBX + -0x21]               ; 005b1ea2
    POP EBX                             ; 005b1ea5
    RET                                 ; 005b1ea6
    MOV EAX,EBX                         ; 005b1ea7
        ;   Label: LAB_005b1ea7
    POP EBX                             ; 005b1ea9
    RET                                 ; 005b1eaa

