; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00574520(int param_1)
;
;
; XREF[1]:
;   FUN_00573db0 at 00573e05
;
; Called Functions:
;   FUN_00574710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574520
        ;   Label: FUN_00574520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574521
    PUSH EBX                            ; 00574525
    CALL FUN_00574710                   ; 00574526
        ;   XREF to: 00574710 (UNCONDITIONAL_CALL)  ; undefined FUN_00574710()
    ADD ESP,0x4                         ; 0057452b
    TEST EAX,EAX                        ; 0057452e
    JZ 0x00574537                       ; 00574530
        ;   XREF to: 00574537 (CONDITIONAL_JUMP)  ; LAB_00574537
    LEA EAX,[EBX + -0x21]               ; 00574532
    POP EBX                             ; 00574535
    RET                                 ; 00574536
    MOV EAX,EBX                         ; 00574537
        ;   Label: LAB_00574537
    POP EBX                             ; 00574539
    RET                                 ; 0057453a

