; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540d50(int param_1)
;
;
; XREF[1]:
;   FUN_00540ad0 at 00540b27
;
; Referenced Globals:
;   TerminatedCString s_CBaronWeapon_005ede09
;   TerminatedCString s_BaronProxy_005ede16
;   undefined4 s_aronProxy_005ede16+1
;   undefined4 s_ronProxy_005ede16+2
;   undefined4 s_onProxy_005ede16+3
;
; Called Functions:
;   FUN_0040c2b0
;   FUN_004f7050
;   FUN_004f7690
;   FUN_004f8dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540d50
        ;   Label: FUN_00540d50
    PUSH ESI                            ; 00540d51
    PUSH EDI                            ; 00540d52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00540d53
    ADD EBX,0x1fae8                     ; 00540d57
    PUSH EBX                            ; 00540d5d
    CALL FUN_004f7050                   ; 00540d5e
        ;   XREF to: 004f7050 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7050()
    ADD ESP,0x4                         ; 00540d63
    PUSH 0x5ede09                       ; 00540d66 | = "CBaronWeapon"
    MOV ESI,0x5ede16                    ; 00540d6b | = "BaronProxy"
    CALL FUN_0040c2b0                   ; 00540d70
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c2b0()
    ADD ESP,0x4                         ; 00540d75
    MOV EDI,EAX                         ; 00540d78
    MOV EDX,EAX                         ; 00540d7a
    PUSH EDI                            ; 00540d7c
    MOV AL,byte ptr [ESI]               ; 00540d7d | = "BaronProxy" | s_ronProxy_005ede16+2
        ;   Label: LAB_00540d7d
    MOV byte ptr [EDI],AL               ; 00540d7f
    CMP AL,0x0                          ; 00540d81
    JZ 0x00540d95                       ; 00540d83
        ;   XREF to: 00540d95 (CONDITIONAL_JUMP)  ; LAB_00540d95
    MOV AL,byte ptr [ESI + 0x1]         ; 00540d85 | s_aronProxy_005ede16+1 | s_onProxy_005ede16+3
    ADD ESI,0x2                         ; 00540d88
    MOV byte ptr [EDI + 0x1],AL         ; 00540d8b
    ADD EDI,0x2                         ; 00540d8e
    CMP AL,0x0                          ; 00540d91
    JNZ 0x00540d7d                      ; 00540d93
        ;   XREF to: 00540d7d (CONDITIONAL_JUMP)  ; LAB_00540d7d
    POP EDI                             ; 00540d95
        ;   Label: LAB_00540d95
    PUSH 0x1                            ; 00540d96
    PUSH EDX                            ; 00540d98
    PUSH EBX                            ; 00540d99
    CALL FUN_004f7690                   ; 00540d9a
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7690()
    ADD ESP,0xc                         ; 00540d9f
    PUSH 0x1                            ; 00540da2
    PUSH 0x5                            ; 00540da4
    PUSH 0x0                            ; 00540da6
    PUSH EBX                            ; 00540da8
    CALL FUN_004f8dc0                   ; 00540da9
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 00540dae
    POP EDI                             ; 00540db1
    POP ESI                             ; 00540db2
    POP EBX                             ; 00540db3
    RET                                 ; 00540db4

