; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_00535df0()
;
;
; Referenced Globals:
;   TerminatedCString s_ON_0063b2f0
;   TerminatedCString s_OFF_0063b2f3
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x0       ; 00535df0
        ;   Label: core_msnedit.cpp_FUN_00535df0
    JZ 0x00535dfd                       ; 00535df5 | LAB_00535dfd
        ;   XREF to: 00535dfd (CONDITIONAL_JUMP)
    MOV EAX,0x63b2f0                    ; 00535df7 | = "ON" | s_ON_0063b2f0 = ON
    RET                                 ; 00535dfc
    MOV EAX,0x63b2f3                    ; 00535dfd | = "OFF" | s_OFF_0063b2f3 = OFF
        ;   Label: LAB_00535dfd
    RET                                 ; 00535e02

