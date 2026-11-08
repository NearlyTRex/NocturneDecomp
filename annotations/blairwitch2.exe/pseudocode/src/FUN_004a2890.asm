; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_004a41b0 at 004a434f
;   FUN_004a5490 at 004a54f2
;   FUN_004a5700 at 004a5756
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2890
        ;   Label: FUN_004a2890
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a2894
    MOV dword ptr [EAX],EDX             ; 004a2898
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a289a
    MOV dword ptr [EAX + 0x4],EDX       ; 004a289e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a28a1
    MOV dword ptr [EAX + 0x8],EDX       ; 004a28a5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a28a8
    MOV dword ptr [EAX + 0xc],EDX       ; 004a28ac
    RET                                 ; 004a28af

