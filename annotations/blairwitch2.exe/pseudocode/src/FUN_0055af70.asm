; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055af70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[10]:
;   FUN_0041c090 at 0041c293
;   FUN_004392b0 at 004396c7
;   FUN_00439b30 at 00439b7e
;   FUN_0045e360 at 0045e71a
;   FUN_0045eb20 at 0045eb63
;   FUN_0049f2e0 at 0049f47c
;   FUN_004a0e60 at 004a0ebc
;   FUN_004c1bb0 at 004c1f6c
;   FUN_005184c0 at 0051869e
;   FUN_0055a3c0 at 0055a486
;
; Called Functions:
;   FUN_00550b70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0055af70
        ;   Label: FUN_0055af70
    PUSH EDX                            ; 0055af74
    CALL FUN_00550b70                   ; 0055af75
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 0055af7a
    RET                                 ; 0055af7d

