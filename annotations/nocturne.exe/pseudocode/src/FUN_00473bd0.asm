; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00473bd0(undefined4 *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059ca74 = 00473b80
;
; Called Functions:
;   FUN_00473c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473bd0
        ;   Label: FUN_00473bd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00473bd1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00473bd5
    MOV dword ptr [EBX + 0xc],0x59ca74  ; 00473bd9 | PTR_FUN_0059ca74
    PUSH EDX                            ; 00473be0
    MOV dword ptr [EBX],0x0             ; 00473be1
    PUSH EBX                            ; 00473be7
    MOV dword ptr [EBX + 0x8],0x0       ; 00473be8
    CALL FUN_00473c00                   ; 00473bef
        ;   XREF to: 00473c00 (UNCONDITIONAL_CALL)  ; undefined FUN_00473c00()
    ADD ESP,0x8                         ; 00473bf4
    MOV EAX,EBX                         ; 00473bf7
    POP EBX                             ; 00473bf9
    RET                                 ; 00473bfa

