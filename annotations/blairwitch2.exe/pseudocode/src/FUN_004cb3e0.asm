; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cb3e0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004cb400 at 004cb53c
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_00469c60
;
; *****************************************************************************

section .text

    PUSH 0x24d                          ; 004cb3e0
        ;   Label: FUN_004cb3e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cb3e5
    PUSH EDX                            ; 004cb3e9
    MOV ECX,dword ptr [0x0060b280]      ; 004cb3ea | DAT_0060b280
    PUSH ECX                            ; 004cb3f0 | DAT_01ba5c50
    CALL FUN_00469c60                   ; 004cb3f1
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00469c60()
    ADD ESP,0xc                         ; 004cb3f6
    RET                                 ; 004cb3f9

