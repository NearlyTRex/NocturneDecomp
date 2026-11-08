; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523880(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00522fc0 at 00522fd4
;
; Referenced Globals:
;   undefined4 DAT_00604280
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x604280                       ; 00523880 | DAT_00604280
        ;   Label: FUN_00523880
    PUSH 0x2                            ; 00523885
    MOV EDX,dword ptr [ESP + 0xc]       ; 00523887
    PUSH EDX                            ; 0052388b
    CALL FUN_005c1066                   ; 0052388c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 00523891
    RET                                 ; 00523894

