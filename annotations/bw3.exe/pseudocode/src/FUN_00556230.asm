; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00556230(undefined4 param_1)
;
;
; XREF[19]:
;   FUN_0040f900 at 0040f912
;   FUN_00411810 at 00411822
;   FUN_004253d0 at 004253e2
;   FUN_0045c0d0 at 0045c0e2
;   FUN_0048b690 at 0048b6a3
;   FUN_004a4340 at 004a43a9
;   FUN_004a5870 at 004a5882
;   FUN_004af5b0 at 004af5c2
;   FUN_004d1c80 at 004d1c92
;   FUN_004d52e0 at 004d52f2
;   ... and 9 more
;
; Called Functions:
;   FUN_00551d20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00556230
        ;   Label: FUN_00556230
    PUSH EDX                            ; 00556234
    CALL FUN_00551d20                   ; 00556235
        ;   XREF to: 00551d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00551d20()
    ADD ESP,0x4                         ; 0055623a
    RET                                 ; 0055623d

