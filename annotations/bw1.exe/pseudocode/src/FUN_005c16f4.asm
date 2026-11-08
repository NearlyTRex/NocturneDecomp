; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c16f4(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_005c170c at 005c181f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c16f4
        ;   Label: FUN_005c16f4
    AND byte ptr [EAX + 0xc],0xef       ; 005c16f8
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c16fc
    MOV EDX,dword ptr [EDX + 0x8]       ; 005c16ff
    MOV dword ptr [EAX + 0x4],0x0       ; 005c1702
    MOV dword ptr [EAX],EDX             ; 005c1709
    RET                                 ; 005c170b

