; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005593c0(undefined4 *param_1)
;
;
; XREF[16]:
;   FUN_00408cd0 at 00408cdb
;   FUN_00408d60 at 00408d7a
;   FUN_00473c10 at 00473d3f
;   FUN_00477ab0 at 00477e67
;   FUN_004b7b90 at 004b7d51
;   FUN_00536290 at 005362a5
;   FUN_00539810 at 00539f52
;   FUN_0053ab00 at 0053ab26
;   FUN_005562c0 at 005564a1
;   FUN_005578b0 at 00557a4b
;   ... and 6 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005593c0
        ;   Label: FUN_005593c0
    MOV dword ptr [EAX + 0x20],0x0      ; 005593c4
    MOV dword ptr [EAX + 0x24],0x0      ; 005593cb
    MOV dword ptr [EAX],0x0             ; 005593d2
    RET                                 ; 005593d8

