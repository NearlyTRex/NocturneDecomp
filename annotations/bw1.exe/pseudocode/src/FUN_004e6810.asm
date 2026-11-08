; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e6810(int param_1)
;
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e6810
        ;   Label: FUN_004e6810
    PUSH 0x5fb430                       ; 004e6814
    PUSH 0x4                            ; 004e6819
    ADD EAX,0x8                         ; 004e681b
    PUSH EAX                            ; 004e681e
    CALL FUN_005c0357                   ; 004e681f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004e6824
    SUB EAX,0x8                         ; 004e6827
    RET                                 ; 004e682a

