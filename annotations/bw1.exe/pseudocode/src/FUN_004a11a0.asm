; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a11a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b514
;   undefined4 DAT_0061b518
;   undefined4 DAT_0061b55c
;   undefined4 DAT_0061b560
;   undefined4 DAT_007c637c
;
; Called Functions:
;   FUN_004a19d0
;
; *****************************************************************************

section .text

    PUSH 0x1c51d80                      ; 004a11a0
        ;   Label: FUN_004a11a0
    CALL FUN_004a19d0                   ; 004a11a5
        ;   XREF to: 004a19d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a19d0()
    MOV EDX,0x27a8                      ; 004a11aa
    MOV ECX,0x27b0                      ; 004a11af
    MOV EAX,[0x007c637c]                ; 004a11b4 | DAT_007c637c
    ADD ESP,0x4                         ; 004a11b9
    MOV dword ptr [0x0061b514],EDX      ; 004a11bc | DAT_0061b514
    MOV [0x0061b518],EAX                ; 004a11c2 | DAT_0061b518
    MOV dword ptr [0x0061b55c],ECX      ; 004a11c7 | DAT_0061b55c
    MOV [0x0061b560],EAX                ; 004a11cd | DAT_0061b560
    RET                                 ; 004a11d2

