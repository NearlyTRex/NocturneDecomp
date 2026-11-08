; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e160(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e160
        ;   Label: FUN_0040e160
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e161
    LEA EAX,[EBX + 0x158]               ; 0040e165
    PUSH EAX                            ; 0040e16b
    CALL FUN_004688e0                   ; 0040e16c
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 0040e171
    PUSH EBX                            ; 0040e174
    CALL FUN_00408850                   ; 0040e175
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 0040e17a
    MOV dword ptr [EBX + 0x348],0x0     ; 0040e17d
    POP EBX                             ; 0040e187
    LEA EAX,[EAX]                       ; 0040e188
    MOV EDX,EDX                         ; 0040e18e
    RET                                 ; 0040e190

