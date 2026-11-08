; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a8650(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004a87a0 at 004a87b1
;
; Referenced Globals:
;   void* PTR_FUN_005e02a4 = 004a8710
;
; Called Functions:
;   FUN_0040d2e0
;   FUN_004a8370
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8650
        ;   Label: FUN_004a8650
    PUSH EAX                            ; 004a8654
    CALL FUN_004a8370                   ; 004a8655
        ;   XREF to: 004a8370 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8370()
    ADD ESP,0x4                         ; 004a865a
    ADD EAX,0x18                        ; 004a865d
    PUSH EAX                            ; 004a8660
    CALL FUN_0040d2e0                   ; 004a8661
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004a8666
    MOV dword ptr [EAX + -0x4],0x5e02a4 ; 004a8669 | PTR_FUN_005e02a4
    SUB EAX,0x18                        ; 004a8670
    RET                                 ; 004a8673

