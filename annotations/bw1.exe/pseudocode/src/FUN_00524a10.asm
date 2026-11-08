; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00524a10(int *param_1)
;
;
; XREF[2]:
;   FUN_00431c30 at 00431c4f
;   FUN_005254b0 at 005255ec
;
; Called Functions:
;   FUN_00524770
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00524a10
        ;   Label: FUN_00524a10
    PUSH EDX                            ; 00524a14
    CALL FUN_00524770                   ; 00524a15
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00524a1a
    ADD EAX,EAX                         ; 00524a1d
    MOV EDX,EAX                         ; 00524a1f
    SHL EAX,0x4                         ; 00524a21
    ADD ESP,0x4                         ; 00524a24
    SUB EAX,EDX                         ; 00524a27
    MOV EDX,dword ptr [ESP + 0x4]       ; 00524a29
    MOV EDX,dword ptr [EDX]             ; 00524a2d
    ADD EDX,0x4                         ; 00524a2f
    ADD EAX,EDX                         ; 00524a32
    RET                                 ; 00524a34

