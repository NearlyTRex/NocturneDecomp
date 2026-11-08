; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005182e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_004962b0 at 0049654d
;   FUN_00496ee0 at 004970fc
;   FUN_00497660 at 0049773d
;   FUN_0049c500 at 0049c582
;   FUN_0049c750 at 0049c89c
;   FUN_0049d580 at 0049d853
;   FUN_00518290 at 005182a7
;
; Called Functions:
;   FUN_00518010
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005182e0
        ;   Label: FUN_005182e0
    PUSH EAX                            ; 005182e4
    MOV EDX,dword ptr [ESP + 0x10]      ; 005182e5
    PUSH EDX                            ; 005182e9
    PUSH EAX                            ; 005182ea
    MOV ECX,dword ptr [ESP + 0x10]      ; 005182eb
    PUSH ECX                            ; 005182ef
    CALL FUN_00518010                   ; 005182f0
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined FUN_00518010()
    ADD ESP,0x10                        ; 005182f5
    RET                                 ; 005182f8

