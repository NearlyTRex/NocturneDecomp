; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558ce0(void)
;
;
; XREF[2]:
;   FUN_00558010 at 0055802e
;   FUN_00558ab0 at 00558ab0
;
; Referenced Globals:
;   undefined4 DAT_02cf3c68
;   undefined4 DAT_02cf3c6c
;
; Called Functions:
;   FUN_00556fd0
;   FUN_00558e90
;
; *****************************************************************************

section .text

    CALL FUN_00558e90                   ; 00558ce0
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00558e90()
        ;   Label: FUN_00558ce0
    MOV EDX,dword ptr [0x02cf3c68]      ; 00558ce5 | DAT_02cf3c68
    TEST EDX,EDX                        ; 00558ceb
    JZ 0x00558cfe                       ; 00558ced
        ;   XREF to: 00558cfe (CONDITIONAL_JUMP)  ; LAB_00558cfe
    MOV EAX,EDX                         ; 00558cef
    PUSH EAX                            ; 00558cf1
    MOV EDX,dword ptr [EDX]             ; 00558cf2
    CALL dword ptr [EDX + 0x8]          ; 00558cf4
    ADD ESP,0x4                         ; 00558cf7
    TEST EAX,EAX                        ; 00558cfa
    JZ 0x00558d11                       ; 00558cfc
        ;   XREF to: 00558d11 (CONDITIONAL_JUMP)  ; LAB_00558d11
    XOR ECX,ECX                         ; 00558cfe
        ;   Label: LAB_00558cfe
    MOV dword ptr [0x02cf3c6c],ECX      ; 00558d00 | DAT_02cf3c6c
    CALL FUN_00556fd0                   ; 00558d06
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    MOV EAX,0x1                         ; 00558d0b
    RET                                 ; 00558d10
    CALL FUN_00556fd0                   ; 00558d11
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
        ;   Label: LAB_00558d11
    XOR EAX,EAX                         ; 00558d16
    RET                                 ; 00558d18

