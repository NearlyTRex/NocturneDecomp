; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049b240(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004c9cf0 at 004c9df3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049b240
        ;   Label: FUN_0049b240
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049b244
    MOV dword ptr [EAX + 0x9bc],EDX     ; 0049b248
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049b24e
    MOV dword ptr [EAX + 0x9c0],EDX     ; 0049b252
    RET                                 ; 0049b258

