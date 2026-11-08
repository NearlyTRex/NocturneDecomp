; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_0041cf60 at 0041cf7d
;   FUN_004b28b0 at 004b28bf
;   FUN_0053b6b0 at 0053b7ed
;
; Referenced Globals:
;   undefined1* PTR_FUN_005f5074 = 00449d30
;
; Called Functions:
;   FUN_0043b400
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00449c70
        ;   Label: FUN_00449c70
    PUSH EDX                            ; 00449c74
    CALL FUN_0043b400                   ; 00449c75
        ;   XREF to: 0043b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b400()
    MOV dword ptr [EAX + 0x3c],0x5f5074 ; 00449c7a | PTR_FUN_005f5074
    MOV dword ptr [EAX + 0x1cb4],0x1    ; 00449c81
    MOV dword ptr [EAX + 0x1cb8],0x1    ; 00449c8b
    MOV dword ptr [EAX + 0x2f94],0x0    ; 00449c95
    MOV dword ptr [EAX + 0x2f98],0x0    ; 00449c9f
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 00449ca9
    MOV dword ptr [EAX + 0x164],0x0     ; 00449cb3
    MOV dword ptr [EAX + 0x140],0x437f0000 ; 00449cbd
    MOV dword ptr [EAX + 0x2fa0],0x0    ; 00449cc7
    MOV dword ptr [EAX + 0x1c6c],0x0    ; 00449cd1
    MOV dword ptr [EAX + 0x1c54],0x0    ; 00449cdb
    MOV dword ptr [EAX + 0x2fa4],0x10000 ; 00449ce5
    MOV dword ptr [EAX + 0x2fa8],0x3f800000 ; 00449cef
    MOV dword ptr [EAX + 0x1cbc],0x0    ; 00449cf9
    MOV dword ptr [EAX + 0x1cd0],0x1    ; 00449d03
    ADD ESP,0x4                         ; 00449d0d
    MOV dword ptr [EAX + 0x2fac],0x3f800000 ; 00449d10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00449d1a
    MOV dword ptr [EAX + 0x1cc0],EDX    ; 00449d1e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00449d24
    MOV dword ptr [EAX + 0x1cc4],EDX    ; 00449d28
    RET                                 ; 00449d2e

