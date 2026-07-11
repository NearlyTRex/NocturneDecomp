; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409f60(void)
;
;
; XREF[9]:
;   FUN_00426440 at 004264e9
;   FUN_00426510 at 0042655a
;   FUN_0043f330 at 0043f503
;   FUN_00482f50 at 0048326d
;   FUN_0048d5d0 at 0048db02
;   FUN_004ac7c0 at 004ac975
;   FUN_004d5860 at 004d58d9
;   FUN_005125a0 at 00512ed7
;   FUN_00553f50 at 00553f99
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005ae704]      ; 00409f60 | DAT_005ae704
        ;   Label: FUN_00409f60
    PUSH EDX                            ; 00409f66 | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 00409f67
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 00409f6c
    RET                                 ; 00409f6f

