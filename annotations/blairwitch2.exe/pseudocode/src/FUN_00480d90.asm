; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00480d90(undefined4 *param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00480dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d90
        ;   Label: FUN_00480d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00480d91
    MOV EDX,dword ptr [ESP + 0xc]       ; 00480d95
    MOV dword ptr [EBX + 0xc],0x5f5d14  ; 00480d99
    PUSH EDX                            ; 00480da0
    MOV dword ptr [EBX],0x0             ; 00480da1
    PUSH EBX                            ; 00480da7
    MOV dword ptr [EBX + 0x8],0x0       ; 00480da8
    CALL FUN_00480dc0                   ; 00480daf
        ;   XREF to: 00480dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00480dc0()
    ADD ESP,0x8                         ; 00480db4
    MOV EAX,EBX                         ; 00480db7
    POP EBX                             ; 00480db9
    RET                                 ; 00480dba

