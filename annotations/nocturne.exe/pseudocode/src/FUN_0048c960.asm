; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048c960(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059d224 = 004ef040
;
; Called Functions:
;   FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048c960
        ;   Label: FUN_0048c960
    PUSH EDX                            ; 0048c964
    CALL FUN_004ef010                   ; 0048c965
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef010()
    ADD ESP,0x4                         ; 0048c96a
    MOV dword ptr [EAX + 0x34],0x59d224 ; 0048c96d | PTR_FUN_0059d224
    RET                                 ; 0048c974

