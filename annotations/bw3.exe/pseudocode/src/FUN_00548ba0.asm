; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548ba0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0054e4b0 at 0054e4da
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_00538ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548ba0
        ;   Label: FUN_00548ba0
    PUSH ESI                            ; 00548ba1
    MOV EAX,dword ptr [ESP + 0x10]      ; 00548ba2
    MOV ECX,dword ptr [ESP + 0xc]       ; 00548ba6
    SHL EAX,0x2                         ; 00548baa
    MOV EDX,dword ptr [ESP + 0x14]      ; 00548bad
    ADD EAX,ECX                         ; 00548bb1
    PUSH EDX                            ; 00548bb3
    MOV EBX,dword ptr [EAX + 0x2c]      ; 00548bb4
    PUSH EBX                            ; 00548bb7
    MOV ESI,dword ptr [0x00603b28]      ; 00548bb8 | DAT_00603b28
    PUSH ESI                            ; 00548bbe | DAT_01ed78c8
    CALL FUN_00538ad0                   ; 00548bbf
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538ad0()
    ADD ESP,0xc                         ; 00548bc4
    POP ESI                             ; 00548bc7
    POP EBX                             ; 00548bc8
    RET                                 ; 00548bc9

