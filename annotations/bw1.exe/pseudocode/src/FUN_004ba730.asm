; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ba730(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_004ba850 at 004ba858
;   FUN_004baa10 at 004baa15
;   FUN_004baa40 at 004baa50
;   FUN_004bac90 at 004bac96
;   FUN_004bcb10 at 004bcb15
;
; Referenced Globals:
;   void* PTR_FUN_00600924 = 004ba760
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ba730
        ;   Label: FUN_004ba730
    MOV dword ptr [EAX + 0x10],0x0      ; 004ba734
    MOV dword ptr [EAX + 0xc],0x0       ; 004ba73b
    MOV dword ptr [EAX + 0x4],0x0       ; 004ba742
    MOV dword ptr [EAX + 0x14],0x600924 ; 004ba749 | PTR_FUN_00600924
    MOV EDX,dword ptr [EAX + 0xc]       ; 004ba750
    MOV dword ptr [EAX + 0x8],EDX       ; 004ba753
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ba756
    MOV dword ptr [EAX],EDX             ; 004ba759
    RET                                 ; 004ba75b

