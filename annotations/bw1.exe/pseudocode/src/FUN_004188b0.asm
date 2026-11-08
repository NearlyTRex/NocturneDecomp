; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004188b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00415df0 at 00415e08
;
; Referenced Globals:
;   undefined4 DAT_005fca50
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca50                       ; 004188b0 | DAT_005fca50
        ;   Label: FUN_004188b0
    PUSH 0x32                           ; 004188b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004188b7
    PUSH EDX                            ; 004188bb
    CALL FUN_005c1066                   ; 004188bc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004188c1
    RET                                 ; 004188c4

