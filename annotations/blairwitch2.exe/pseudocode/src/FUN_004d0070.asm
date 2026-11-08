; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0070(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00522350 at 00526be2
;
; Called Functions:
;   FUN_004def40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0070
        ;   Label: FUN_004d0070
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0074
    PUSH EDX                            ; 004d0078
    ADD EAX,0x2437c                     ; 004d0079
    PUSH EAX                            ; 004d007e
    CALL FUN_004def40                   ; 004d007f
        ;   XREF to: 004def40 (UNCONDITIONAL_CALL)  ; undefined FUN_004def40()
    ADD ESP,0x8                         ; 004d0084
    RET                                 ; 004d0087

