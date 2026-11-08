; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4c70(void)
;
;
; XREF[1]:
;   FUN_00581080 at 005812d7
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_00603450
;   undefined4 DAT_006035d0
;   undefined4 DAT_0060395c
;   undefined4 DAT_006045f8
;   undefined4 DAT_01da62f0
;
; Called Functions:
;   FUN_004119e0
;   FUN_0045a8d0
;   FUN_004624d0
;   FUN_004d95c0
;   FUN_004e4d80
;   FUN_004f5b70
;   FUN_00503ed0
;   FUN_00508c70
;   FUN_00514650
;   FUN_005501a0
;   FUN_005502d0
;   FUN_00580690
;   FUN_00581cf0
;   thunk_FUN_00558010
;   thunk_FUN_0056a9c0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4c70
        ;   Label: FUN_004e4c70
    PUSH ESI                            ; 004e4c71
    PUSH EDI                            ; 004e4c72
    CALL FUN_004119e0                   ; 004e4c73
        ;   XREF to: 004119e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004119e0()
    MOV EDX,dword ptr [0x00603450]      ; 004e4c78 | DAT_00603450
    PUSH EDX                            ; 004e4c7e | DAT_01da62f0
    CALL FUN_00503ed0                   ; 004e4c7f
        ;   XREF to: 00503ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00503ed0()
    ADD ESP,0x4                         ; 004e4c84
    MOV ECX,dword ptr [0x006035d0]      ; 004e4c87 | DAT_006035d0
    PUSH ECX                            ; 004e4c8d
    CALL FUN_00508c70                   ; 004e4c8e
        ;   XREF to: 00508c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00508c70()
    ADD ESP,0x4                         ; 004e4c93
    MOV EBX,dword ptr [0x00600530]      ; 004e4c96 | DAT_00600530
    PUSH EBX                            ; 004e4c9c
    CALL FUN_004f5b70                   ; 004e4c9d
        ;   XREF to: 004f5b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5b70()
    ADD ESP,0x4                         ; 004e4ca2
    MOV ESI,dword ptr [0x006045f8]      ; 004e4ca5 | DAT_006045f8
    PUSH ESI                            ; 004e4cab
    CALL thunk_FUN_00558010             ; 004e4cac
        ;   XREF to: 0055fcc0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00558010()
    ADD ESP,0x4                         ; 004e4cb1
    CALL FUN_004624d0                   ; 004e4cb4
        ;   XREF to: 004624d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004624d0()
    CALL FUN_005501a0                   ; 004e4cb9
        ;   XREF to: 005501a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005501a0()
    CALL FUN_005502d0                   ; 004e4cbe
        ;   XREF to: 005502d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005502d0()
    CALL FUN_004e4d80                   ; 004e4cc3
        ;   XREF to: 004e4d80 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4d80()
    CALL FUN_00580690                   ; 004e4cc8
        ;   XREF to: 00580690 (UNCONDITIONAL_CALL)  ; undefined FUN_00580690()
    CALL thunk_FUN_00579a60             ; 004e4ccd
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00579a60()
    CALL thunk_FUN_0056a9c0             ; 004e4cd2
        ;   XREF to: 004037a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_0056a9c0()
    CALL FUN_0045a8d0                   ; 004e4cd7
        ;   XREF to: 0045a8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045a8d0()
    CALL FUN_00581cf0                   ; 004e4cdc
        ;   XREF to: 00581cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00581cf0()
    MOV EDI,dword ptr [0x0060395c]      ; 004e4ce1 | DAT_0060395c
    PUSH EDI                            ; 004e4ce7
    CALL FUN_00514650                   ; 004e4ce8
        ;   XREF to: 00514650 (UNCONDITIONAL_CALL)  ; undefined FUN_00514650()
    ADD ESP,0x4                         ; 004e4ced
    CALL FUN_004d95c0                   ; 004e4cf0
        ;   XREF to: 004d95c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d95c0()
    POP EDI                             ; 004e4cf5
    POP ESI                             ; 004e4cf6
    POP EBX                             ; 004e4cf7
    RET                                 ; 004e4cf8

