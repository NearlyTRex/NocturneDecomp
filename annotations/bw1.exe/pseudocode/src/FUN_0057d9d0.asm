; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d9d0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[9]:
;   FUN_00460230 at 004603a7
;   FUN_004926d0 at 0049275e
;   FUN_004b7b90 at 004b7f7f
;   FUN_004b9710 at 004b97eb
;   FUN_004de330 at 004dffac
;   FUN_00539810 at 00539dd2
;   FUN_0057ce10 at 0057d454
;   FUN_0057d810 at 0057d81e
;   FUN_005b9170 at 005b9205
;
; Called Functions:
;   FUN_00573a80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d9d0
        ;   Label: FUN_0057d9d0
    PUSH EDX                            ; 0057d9d4
    CALL FUN_00573a80                   ; 0057d9d5
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 0057d9da
    RET                                 ; 0057d9dd

