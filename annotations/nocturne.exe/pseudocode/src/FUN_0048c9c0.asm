; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048c9c0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059d264 = 004ef040
;
; Called Functions:
;   FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048c9c0
        ;   Label: FUN_0048c9c0
    PUSH EDX                            ; 0048c9c4
    CALL FUN_004ef010                   ; 0048c9c5
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef010()
    ADD ESP,0x4                         ; 0048c9ca
    MOV dword ptr [EAX + 0x34],0x59d264 ; 0048c9cd | PTR_FUN_0059d264
    RET                                 ; 0048c9d4

