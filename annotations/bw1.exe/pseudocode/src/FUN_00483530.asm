; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483530(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[7]:
;   FUN_00416fa0 at 004170f1
;   FUN_004f90d0 at 004f9332
;   FUN_004fe9c0 at 004fea78
;   FUN_00550da0 at 005510fa
;   FUN_00555590 at 005555c8
;   FUN_00559f80 at 0055a99a
;   FUN_0055b330 at 0055b3ec
;
; Called Functions:
;   FUN_0045f3e0
;   FUN_00483560
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 00483530
        ;   Label: FUN_00483530
    MOV EDX,dword ptr [ESP + 0x30]      ; 00483533
    PUSH EDX                            ; 00483537
    LEA EAX,[ESP + 0x4]                 ; 00483538
    PUSH EAX                            ; 0048353c
    CALL FUN_0045f3e0                   ; 0048353d
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 00483542
    MOV EAX,ESP                         ; 00483545
    PUSH EAX                            ; 00483547
    MOV ECX,dword ptr [ESP + 0x30]      ; 00483548
    PUSH ECX                            ; 0048354c
    CALL FUN_00483560                   ; 0048354d
        ;   XREF to: 00483560 (UNCONDITIONAL_CALL)  ; undefined FUN_00483560()
    ADD ESP,0x8                         ; 00483552
    ADD ESP,0x28                        ; 00483555
    RET                                 ; 00483558

