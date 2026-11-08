; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00448c40(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_0045c240 at 0045c25f
;
; Referenced Globals:
;   undefined1* PTR_FUN_005ddfe4 = 00448c40
;   undefined4 DAT_005de000
;
; Called Functions:
;   FUN_004254d0
;   FUN_00448f30
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448c40
        ;   Label: FUN_00448c40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448c41
    TEST byte ptr [ESP + 0xc],0x4       ; 00448c45
    JNZ 0x00448c76                      ; 00448c4a
        ;   XREF to: 00448c76 (CONDITIONAL_JUMP)  ; LAB_00448c76
    PUSH EBX                            ; 00448c4c
    MOV dword ptr [EBX + 0x3c],0x5ddfe4 ; 00448c4d | PTR_FUN_005ddfe4
    CALL FUN_00448f30                   ; 00448c54
        ;   XREF to: 00448f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00448f30()
    ADD ESP,0x4                         ; 00448c59
    PUSH 0x1                            ; 00448c5c
    PUSH EBX                            ; 00448c5e
    CALL FUN_004254d0                   ; 00448c5f
        ;   XREF to: 004254d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004254d0()
    ADD ESP,0x8                         ; 00448c64
    MOV DL,byte ptr [ESP + 0xc]         ; 00448c67
    MOV EBX,EAX                         ; 00448c6b
    TEST DL,0x2                         ; 00448c6d
    JNZ 0x00448c91                      ; 00448c70
        ;   XREF to: 00448c91 (CONDITIONAL_JUMP)  ; LAB_00448c91
    MOV EAX,EBX                         ; 00448c72
    POP EBX                             ; 00448c74
    RET                                 ; 00448c75
    PUSH 0x5de000                       ; 00448c76 | DAT_005de000
        ;   Label: LAB_00448c76
    PUSH EBX                            ; 00448c7b
    CALL FUN_005a308f                   ; 00448c7c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00448c81
    PUSH EAX                            ; 00448c84
    CALL FUN_005a30b6                   ; 00448c85
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00448c8a
    MOV EAX,EBX                         ; 00448c8d
    POP EBX                             ; 00448c8f
    RET                                 ; 00448c90
    PUSH EAX                            ; 00448c91
        ;   Label: LAB_00448c91
    CALL FUN_005a30c4                   ; 00448c92
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00448c97
    MOV EAX,EBX                         ; 00448c9a
    POP EBX                             ; 00448c9c
    RET                                 ; 00448c9d

