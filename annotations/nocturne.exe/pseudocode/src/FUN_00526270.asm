; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526270(uint param_1)
;
;
; XREF[3]:
;   FUN_00480eb0 at 00480f00
;   FUN_0052e850 at 0052e969
;   FUN_00535900 at 00537c26
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00526270 | DAT_02dc1b74
        ;   Label: FUN_00526270
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526276
    SUB EAX,EDX                         ; 0052627d
    SHL EAX,0x2                         ; 0052627f
    MOV EDX,EAX                         ; 00526282
    SHL EAX,0x3                         ; 00526284
    ADD EAX,EDX                         ; 00526287
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526289
    OR dword ptr [EAX + 0x2dc1bd4],EDX  ; 0052628d
    RET                                 ; 00526293

