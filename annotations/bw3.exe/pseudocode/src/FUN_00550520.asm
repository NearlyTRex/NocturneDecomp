; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00550520(int param_1)
;
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00550520
        ;   Label: FUN_00550520
    PUSH 0x5db0f0                       ; 00550524
    PUSH 0x3                            ; 00550529
    ADD EAX,0x10                        ; 0055052b
    PUSH EAX                            ; 0055052e
    CALL FUN_005a30d7                   ; 0055052f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 00550534
    SUB EAX,0x10                        ; 00550537
    RET                                 ; 0055053a

