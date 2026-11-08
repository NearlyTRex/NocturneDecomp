; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005cf100(int param_1)
;
;
; XREF[1]:
;   FUN_005ce990 at 005ce9e5
;
; Called Functions:
;   FUN_005cf2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cf100
        ;   Label: FUN_005cf100
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cf101
    PUSH EBX                            ; 005cf105
    CALL FUN_005cf2f0                   ; 005cf106
        ;   XREF to: 005cf2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cf2f0()
    ADD ESP,0x4                         ; 005cf10b
    TEST EAX,EAX                        ; 005cf10e
    JZ 0x005cf117                       ; 005cf110
        ;   XREF to: 005cf117 (CONDITIONAL_JUMP)  ; LAB_005cf117
    LEA EAX,[EBX + -0x21]               ; 005cf112
    POP EBX                             ; 005cf115
    RET                                 ; 005cf116
    MOV EAX,EBX                         ; 005cf117
        ;   Label: LAB_005cf117
    POP EBX                             ; 005cf119
    RET                                 ; 005cf11a

