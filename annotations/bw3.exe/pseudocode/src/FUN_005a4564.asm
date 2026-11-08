; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4564(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_005a457c at 005a468f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a4564
        ;   Label: FUN_005a4564
    AND byte ptr [EAX + 0xc],0xef       ; 005a4568
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a456c
    MOV EDX,dword ptr [EDX + 0x8]       ; 005a456f
    MOV dword ptr [EAX + 0x4],0x0       ; 005a4572
    MOV dword ptr [EAX],EDX             ; 005a4579
    RET                                 ; 005a457b

