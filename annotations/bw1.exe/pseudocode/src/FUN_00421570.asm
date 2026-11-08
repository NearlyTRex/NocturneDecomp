; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421570(undefined4 *param_1)
;
;
; XREF[4]:
;   FUN_00566fd0 at 00567001
;   FUN_0056ae70 at 0056ae9f
;   FUN_00583700 at 005837a2
;   FUN_005a2d00 at 005a2d52
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00421570
        ;   Label: FUN_00421570
    MOV dword ptr [EAX + 0x8],0x7cf0bdc2 ; 00421574
    MOV dword ptr [EAX + 0x14],0xfcf0bdc2 ; 0042157b
    FLD float ptr [EAX + 0x14]          ; 00421582
    MOV EDX,dword ptr [EAX + 0x8]       ; 00421585
    MOV dword ptr [EAX + 0x4],EDX       ; 00421588
    FST float ptr [EAX + 0x10]          ; 0042158b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042158e
    MOV dword ptr [EAX],EDX             ; 00421591
    FSTP float ptr [EAX + 0xc]          ; 00421593
    RET                                 ; 00421596

