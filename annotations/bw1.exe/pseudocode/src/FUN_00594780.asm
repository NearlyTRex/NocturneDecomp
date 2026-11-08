; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00594780(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00531670
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594780
        ;   Label: FUN_00594780
    MOV EDX,dword ptr [ESP + 0x8]       ; 00594781
    PUSH EDX                            ; 00594785
    CALL FUN_00531670                   ; 00594786
        ;   XREF to: 00531670 (UNCONDITIONAL_CALL)  ; undefined FUN_00531670()
    ADD ESP,0x4                         ; 0059478b
    PUSH 0x5f7657                       ; 0059478e
    MOV EBX,EAX                         ; 00594793
    ADD EAX,0x158                       ; 00594795
    PUSH EAX                            ; 0059479a
    MOV dword ptr [EAX + -0x4],0x6065c4 ; 0059479b
    CALL FUN_00569f50                   ; 005947a2
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 005947a7
    MOV EAX,EBX                         ; 005947aa
    POP EBX                             ; 005947ac
    RET                                 ; 005947ad

