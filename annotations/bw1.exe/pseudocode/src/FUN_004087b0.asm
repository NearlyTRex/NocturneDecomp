; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004087b0(int param_1)
;
;
; XREF[69]:
;   FUN_0040dc80 at 0040dc8b
;   FUN_0040e320 at 0040e32d
;   FUN_0040ef70 at 0040ef8b
;   FUN_004101f0 at 004102e8
;   FUN_00410f70 at 00410f7b
;   FUN_00413970 at 004139d8
;   FUN_00414e00 at 00414e1d
;   FUN_00418fc0 at 00419009
;   FUN_00419130 at 0041919c
;   FUN_00419280 at 004192c6
;   ... and 59 more
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_004837b0
;   FUN_00483850
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004087b0
        ;   Label: FUN_004087b0
    ADD EAX,0x20                        ; 004087b4
    PUSH EAX                            ; 004087b7
    MOV EDX,dword ptr [0x00612560]      ; 004087b8 | DAT_00612560
    PUSH EDX                            ; 004087be | DAT_01bc120c
    CALL FUN_004837b0                   ; 004087bf
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004087c4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004087c7
    PUSH 0x0                            ; 004087cb
    ADD EAX,0x30                        ; 004087cd
    PUSH EAX                            ; 004087d0
    MOV ECX,dword ptr [0x00612560]      ; 004087d1 | DAT_00612560
    PUSH ECX                            ; 004087d7 | DAT_01bc120c
    CALL FUN_00483850                   ; 004087d8
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 004087dd
    RET                                 ; 004087e0

