; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a8eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_004aa810 at 004aa9af
;   FUN_004abb90 at 004abbf2
;   FUN_004abe00 at 004abe5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8eb0
        ;   Label: FUN_004a8eb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a8eb4
    MOV dword ptr [EAX],EDX             ; 004a8eb8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a8eba
    MOV dword ptr [EAX + 0x4],EDX       ; 004a8ebe
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a8ec1
    MOV dword ptr [EAX + 0x8],EDX       ; 004a8ec5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a8ec8
    MOV dword ptr [EAX + 0xc],EDX       ; 004a8ecc
    RET                                 ; 004a8ecf

