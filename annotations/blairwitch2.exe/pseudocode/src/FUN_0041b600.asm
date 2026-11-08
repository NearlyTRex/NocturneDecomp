; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041b600(undefined4 *param_1)
;
;
; XREF[4]:
;   FUN_00544930 at 00544961
;   FUN_005487d0 at 005487ff
;   FUN_00560cb0 at 00560d52
;   FUN_0057f0b0 at 0057f102
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b600
        ;   Label: FUN_0041b600
    MOV dword ptr [EAX + 0x8],0x7cf0bdc2 ; 0041b604
    MOV dword ptr [EAX + 0x14],0xfcf0bdc2 ; 0041b60b
    FLD float ptr [EAX + 0x14]          ; 0041b612
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041b615
    MOV dword ptr [EAX + 0x4],EDX       ; 0041b618
    FST float ptr [EAX + 0x10]          ; 0041b61b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041b61e
    MOV dword ptr [EAX],EDX             ; 0041b621
    FSTP float ptr [EAX + 0xc]          ; 0041b623
    RET                                 ; 0041b626

