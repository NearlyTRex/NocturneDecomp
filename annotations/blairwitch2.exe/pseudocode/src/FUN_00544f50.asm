; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00544f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00450620 at 0045085f
;   FUN_00547620 at 0054765e
;   FUN_00562b90 at 00562dcb
;
; Called Functions:
;   FUN_00544f80
;   FUN_00546ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544f50
        ;   Label: FUN_00544f50
    PUSH -0x1                           ; 00544f51
    MOV EDX,dword ptr [ESP + 0x10]      ; 00544f53
    PUSH dword ptr [ESP + 0x14]         ; 00544f57
    PUSH EDX                            ; 00544f5b
    MOV ECX,dword ptr [ESP + 0x14]      ; 00544f5c
    PUSH ECX                            ; 00544f60
    CALL FUN_00544f80                   ; 00544f61
        ;   XREF to: 00544f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f80()
    ADD ESP,0x10                        ; 00544f66
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544f69
    PUSH EBX                            ; 00544f6d
    CALL FUN_00546ae0                   ; 00544f6e
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 00544f73
    POP EBX                             ; 00544f76
    RET                                 ; 00544f77

