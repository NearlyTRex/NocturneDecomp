; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496dd0(undefined4 param_1)
;
;
; XREF[8]:
;   FUN_00493720 at 004939ff
;   FUN_00493d40 at 0049400c
;   FUN_00494690 at 00494c63
;   FUN_004958d0 at 00495bab
;   FUN_0049a8b0 at 0049a95f
;   FUN_004cf5e0 at 004cfba3
;   FUN_0050a5e0 at 0050a81c
;   FUN_0052cab0 at 0052cc2b
;
; Called Functions:
;   FUN_00494110
;   FUN_004941e0
;   FUN_00496df0
;
; *****************************************************************************

section .text

    CALL FUN_004941e0                   ; 00496dd0
        ;   XREF to: 004941e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004941e0()
        ;   Label: FUN_00496dd0
    CALL FUN_00494110                   ; 00496dd5
        ;   XREF to: 00494110 (UNCONDITIONAL_CALL)  ; undefined FUN_00494110()
    MOV EDX,dword ptr [ESP + 0x4]       ; 00496dda
    PUSH EDX                            ; 00496dde
    CALL FUN_00496df0                   ; 00496ddf
        ;   XREF to: 00496df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00496df0()
    ADD ESP,0x4                         ; 00496de4
    RET                                 ; 00496de7

