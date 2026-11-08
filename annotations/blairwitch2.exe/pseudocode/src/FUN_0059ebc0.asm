; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059ebc0(int param_1)
;
;
; XREF[1]:
;   FUN_0059e8c0 at 0059e9ca
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0059ebc0
        ;   Label: FUN_0059ebc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059ebc2
    PUSH 0x0                            ; 0059ebc6
    ADD EAX,0x2b4                       ; 0059ebc8
    PUSH EAX                            ; 0059ebcd
    CALL FUN_00503620                   ; 0059ebce
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0059ebd3
    RET                                 ; 0059ebd6

