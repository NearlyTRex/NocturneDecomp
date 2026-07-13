; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409f60(void)
;
;
; XREF[59]:
;   FUN_0040ff80 at 0040ffd2
;   FUN_004110f0 at 0041129a
;   FUN_00411e30 at 00411e66
;   FUN_00414340 at 00414429
;   FUN_00415760 at 00415852
;   FUN_00416430 at 004164a2
;   FUN_00419c20 at 00419cc5
;   FUN_00421540 at 004216be
;   FUN_00426440 at 004264e9
;   FUN_00426510 at 0042655a
;   ... and 49 more
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

