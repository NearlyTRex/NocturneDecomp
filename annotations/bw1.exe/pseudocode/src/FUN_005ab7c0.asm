; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ab7c0(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   FUN_00409680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab7c0
        ;   Label: FUN_005ab7c0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ab7c1
    PUSH EBX                            ; 005ab7c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ab7c6
    PUSH EDX                            ; 005ab7ca
    CALL FUN_00409680                   ; 005ab7cb
        ;   XREF to: 00409680 (UNCONDITIONAL_CALL)  ; undefined FUN_00409680()
    MOV dword ptr [EBX + 0x50],0x3e99999a ; 005ab7d0
    ADD ESP,0x8                         ; 005ab7d7
    MOV dword ptr [EBX + 0x48],0x3f4ccccd ; 005ab7da
    POP EBX                             ; 005ab7e1
    RET                                 ; 005ab7e2

