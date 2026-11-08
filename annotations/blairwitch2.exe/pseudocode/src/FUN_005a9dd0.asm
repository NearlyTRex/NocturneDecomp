; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9dd0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_R_Hand_005f0a0f
;
; Called Functions:
;   FUN_00540e80
;   FUN_0059e6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9dd0
        ;   Label: FUN_005a9dd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9dd1
    PUSH EBX                            ; 005a9dd5
    CALL FUN_0059e6a0                   ; 005a9dd6
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e6a0()
    ADD ESP,0x4                         ; 005a9ddb
    PUSH 0x1                            ; 005a9dde
    PUSH 0x5f0a0f                       ; 005a9de0 | = "Bip01 R Hand"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a9de5
    PUSH EDX                            ; 005a9deb
    CALL FUN_00540e80                   ; 005a9dec
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a9df1
    ADD ESP,0xc                         ; 005a9df7
    MOV dword ptr [EBX + 0x1137c],EAX   ; 005a9dfa
    POP EBX                             ; 005a9e00
    RET                                 ; 005a9e01

