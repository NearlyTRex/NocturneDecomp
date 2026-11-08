; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00539820(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00489670 at 0048dbe4
;   FUN_005184c0 at 005185eb
;   FUN_00522350 at 00529111
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00539820
        ;   Label: FUN_00539820
    MOV EDX,dword ptr [ESP + 0x8]       ; 00539824
    MOV dword ptr [EAX + 0x15aec4],EDX  ; 00539828
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053982e
    MOV dword ptr [EAX + 0x15aec8],EDX  ; 00539832
    RET                                 ; 00539838

