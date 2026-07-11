; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00473b60(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00474c90 at 00474c95
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059ca74 = 00473b80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00473b60
        ;   Label: FUN_00473b60
    MOV dword ptr [EAX],0x0             ; 00473b64
    MOV dword ptr [EAX + 0x8],0x0       ; 00473b6a
    MOV dword ptr [EAX + 0x4],0x0       ; 00473b71
    MOV dword ptr [EAX + 0xc],0x59ca74  ; 00473b78 | PTR_FUN_0059ca74
    RET                                 ; 00473b7f

