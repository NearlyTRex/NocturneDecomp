; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cf1a0(int param_1)
;
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf1a0
        ;   Label: FUN_004cf1a0
    PUSH 0x5db0f0                       ; 004cf1a4
    PUSH 0x4                            ; 004cf1a9
    ADD EAX,0xc                         ; 004cf1ab
    PUSH EAX                            ; 004cf1ae
    CALL FUN_005a30d7                   ; 004cf1af
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004cf1b4
    SUB EAX,0xc                         ; 004cf1b7
    RET                                 ; 004cf1ba

