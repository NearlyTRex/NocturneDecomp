; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005187f0(int param_1)
;
;
; XREF[1]:
;   FUN_004e1010 at 004e1025
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005187f0
        ;   Label: FUN_005187f0
    PUSH 0x603d00                       ; 005187f4
    PUSH 0x5                            ; 005187f9
    ADD EAX,0x98                        ; 005187fb
    PUSH EAX                            ; 00518800
    CALL FUN_005c0357                   ; 00518801
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00518806
    SUB EAX,0x98                        ; 00518809
    RET                                 ; 0051880e

