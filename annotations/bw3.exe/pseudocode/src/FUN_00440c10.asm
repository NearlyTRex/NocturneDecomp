; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00440c10(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00440bf0 at 00440bf6
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440c10
        ;   Label: FUN_00440c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00440c11
    MOV EDX,dword ptr [EBX + 0x10]      ; 00440c15
    TEST EDX,EDX                        ; 00440c18
    JNZ 0x00440c2a                      ; 00440c1a
        ;   XREF to: 00440c2a (CONDITIONAL_JUMP)  ; LAB_00440c2a
    MOV dword ptr [EBX + 0xc],0x0       ; 00440c1c
    MOV EAX,dword ptr [EBX + 0xc]       ; 00440c23
    MOV dword ptr [EBX],EAX             ; 00440c26
    POP EBX                             ; 00440c28
    RET                                 ; 00440c29
    PUSH EDX                            ; 00440c2a
        ;   Label: LAB_00440c2a
    CALL FUN_005a3770                   ; 00440c2b
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00440c30
    MOV dword ptr [EBX + 0x10],0x0      ; 00440c33
    MOV dword ptr [EBX + 0xc],0x0       ; 00440c3a
    MOV EAX,dword ptr [EBX + 0xc]       ; 00440c41
    MOV dword ptr [EBX],EAX             ; 00440c44
    POP EBX                             ; 00440c46
    RET                                 ; 00440c47

