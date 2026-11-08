; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fb450(int param_1)
;
;
; XREF[3]:
;   FUN_004fb440 at 004fb445
;   FUN_004fb590 at 004fb5a2
;   FUN_004fcb00 at 004fcbad
;
; Called Functions:
;   FUN_004fc640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb450
        ;   Label: FUN_004fb450
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fb451
    PUSH EBX                            ; 004fb455
    CALL FUN_004fc640                   ; 004fb456
        ;   XREF to: 004fc640 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc640()
    MOV dword ptr [EBX + 0x4],0x0       ; 004fb45b
    MOV byte ptr [EBX + 0x1014],0x0     ; 004fb462
    MOV dword ptr [EBX + 0x1010],0x0    ; 004fb469
    MOV dword ptr [EBX + 0x1454],0x0    ; 004fb473
    ADD ESP,0x4                         ; 004fb47d
    MOV dword ptr [EBX + 0x1458],0x0    ; 004fb480
    POP EBX                             ; 004fb48a
    RET                                 ; 004fb48b

