; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00554a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_005551f0 at 005552dd
;
; Called Functions:
;   FUN_00554ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554a90
        ;   Label: FUN_00554a90
    PUSH ESI                            ; 00554a91
    PUSH 0x48                           ; 00554a92
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00554a94
    PUSH EDX                            ; 00554a98
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00554a99
    PUSH ECX                            ; 00554a9d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00554a9e
    PUSH EBX                            ; 00554aa2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00554aa3
    PUSH ESI                            ; 00554aa7
    CALL FUN_00554ac0                   ; 00554aa8
        ;   XREF to: 00554ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ac0()
    ADD ESP,0x14                        ; 00554aad
    POP ESI                             ; 00554ab0
    POP EBX                             ; 00554ab1
    RET                                 ; 00554ab2

