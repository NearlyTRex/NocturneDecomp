; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056b990(int param_1)
;
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b990
        ;   Label: FUN_0056b990
    PUSH 0x5fb430                       ; 0056b994
    PUSH 0x3                            ; 0056b999
    ADD EAX,0x10                        ; 0056b99b
    PUSH EAX                            ; 0056b99e
    CALL FUN_005c0357                   ; 0056b99f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 0056b9a4
    SUB EAX,0x10                        ; 0056b9a7
    RET                                 ; 0056b9aa

