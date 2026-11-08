; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041e8b0(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_0054bb60 at 0054bb91
;   FUN_0054fa00 at 0054fa2f
;   FUN_00566fd0 at 00567072
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041e8b0
        ;   Label: FUN_0041e8b0
    MOV dword ptr [EAX + 0x8],0x7cf0bdc2 ; 0041e8b4
    MOV dword ptr [EAX + 0x14],0xfcf0bdc2 ; 0041e8bb
    FLD float ptr [EAX + 0x14]          ; 0041e8c2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041e8c5
    MOV dword ptr [EAX + 0x4],EDX       ; 0041e8c8
    FST float ptr [EAX + 0x10]          ; 0041e8cb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041e8ce
    MOV dword ptr [EAX],EDX             ; 0041e8d1
    FSTP float ptr [EAX + 0xc]          ; 0041e8d3
    RET                                 ; 0041e8d6

