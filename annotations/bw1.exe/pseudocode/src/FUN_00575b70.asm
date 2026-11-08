; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00575b70(void)
;
;
; XREF[2]:
;   FUN_00574ea0 at 00574ebe
;   FUN_00575940 at 00575940
;
; Referenced Globals:
;   undefined4 DAT_02c81038
;   undefined4 DAT_02c8103c
;
; Called Functions:
;   FUN_00573e70
;   FUN_00575d20
;
; *****************************************************************************

section .text

    CALL FUN_00575d20                   ; 00575b70
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00575d20()
        ;   Label: FUN_00575b70
    MOV EDX,dword ptr [0x02c81038]      ; 00575b75 | DAT_02c81038
    TEST EDX,EDX                        ; 00575b7b
    JZ 0x00575b8e                       ; 00575b7d
        ;   XREF to: 00575b8e (CONDITIONAL_JUMP)  ; LAB_00575b8e
    MOV EAX,EDX                         ; 00575b7f
    PUSH EAX                            ; 00575b81
    MOV EDX,dword ptr [EDX]             ; 00575b82
    CALL dword ptr [EDX + 0x8]          ; 00575b84
    ADD ESP,0x4                         ; 00575b87
    TEST EAX,EAX                        ; 00575b8a
    JZ 0x00575ba1                       ; 00575b8c
        ;   XREF to: 00575ba1 (CONDITIONAL_JUMP)  ; LAB_00575ba1
    XOR ECX,ECX                         ; 00575b8e
        ;   Label: LAB_00575b8e
    MOV dword ptr [0x02c8103c],ECX      ; 00575b90 | DAT_02c8103c
    CALL FUN_00573e70                   ; 00575b96
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 00575b9b
    RET                                 ; 00575ba0
    CALL FUN_00573e70                   ; 00575ba1
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
        ;   Label: LAB_00575ba1
    XOR EAX,EAX                         ; 00575ba6
    RET                                 ; 00575ba8

