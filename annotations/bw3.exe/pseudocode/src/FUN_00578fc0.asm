; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00578fc0(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   FUN_004096c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578fc0
        ;   Label: FUN_00578fc0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00578fc1
    PUSH EBX                            ; 00578fc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00578fc6
    PUSH EDX                            ; 00578fca
    CALL FUN_004096c0                   ; 00578fcb
        ;   XREF to: 004096c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004096c0()
    MOV dword ptr [EBX + 0x50],0x3e99999a ; 00578fd0
    ADD ESP,0x8                         ; 00578fd7
    MOV dword ptr [EBX + 0x48],0x3f4ccccd ; 00578fda
    POP EBX                             ; 00578fe1
    RET                                 ; 00578fe2

