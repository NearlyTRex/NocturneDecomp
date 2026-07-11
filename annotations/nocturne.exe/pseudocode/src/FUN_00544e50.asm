; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00544e50(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005458d0 at 005458d8
;
; Called Functions:
;   FUN_00544e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00544e50
        ;   Label: FUN_00544e50
    PUSH EDX                            ; 00544e54
    CALL FUN_00544e60                   ; 00544e55
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    ADD ESP,0x4                         ; 00544e5a
    RET                                 ; 00544e5d

