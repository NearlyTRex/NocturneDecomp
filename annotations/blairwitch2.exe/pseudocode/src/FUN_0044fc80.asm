; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0044fc80(int param_1)
;
;
; XREF[47]:
;   FUN_0040ddb0 at 0040ddc6
;   FUN_0040e510 at 0040e526
;   FUN_0040ea30 at 0040ea46
;   FUN_0040f330 at 0040f344
;   FUN_0040f600 at 0040f628
;   FUN_00410fd0 at 00410ff2
;   FUN_00414720 at 00414734
;   FUN_00414d10 at 00414d26
;   FUN_00417cf0 at 00417cf8
;   FUN_0041bd30 at 0041bd44
;   ... and 37 more
;
; Called Functions:
;   FUN_0044fca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fc80
        ;   Label: FUN_0044fc80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044fc81
    MOV byte ptr [EBX + 0x78],0x0       ; 0044fc85
    PUSH EBX                            ; 0044fc89
    MOV dword ptr [EBX + 0x178],0x0     ; 0044fc8a
    CALL FUN_0044fca0                   ; 0044fc94
        ;   XREF to: 0044fca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fca0()
    ADD ESP,0x4                         ; 0044fc99
    MOV EAX,EBX                         ; 0044fc9c
    POP EBX                             ; 0044fc9e
    RET                                 ; 0044fc9f

