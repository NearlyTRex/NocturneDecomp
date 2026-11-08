; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004087f0(void)
;
;
; XREF[65]:
;   FUN_0040dc80 at 0040dcc9
;   FUN_0040e320 at 0040e367
;   FUN_0040ef70 at 0040efda
;   FUN_004101f0 at 004103ac
;   FUN_00410f70 at 00410fb9
;   FUN_00413970 at 00413a6b
;   FUN_00414e00 at 00414f04
;   FUN_00419280 at 004192f2
;   FUN_0041d000 at 0041d0b6
;   FUN_00425480 at 0042563b
;   ... and 55 more
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00612560]      ; 004087f0 | DAT_00612560
        ;   Label: FUN_004087f0
    PUSH EDX                            ; 004087f6 | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 004087f7
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004087fc
    RET                                 ; 004087ff

