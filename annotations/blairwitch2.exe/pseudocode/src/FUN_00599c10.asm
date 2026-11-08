; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00599c10(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_005ef3e1+1
;
; Called Functions:
;   FUN_0040c840
;   FUN_00427a00
;
; *****************************************************************************

section .text

    PUSH 0x5ef3e2                       ; 00599c10 | s_CTentacle_005ef3e1+1
        ;   Label: FUN_00599c10
    MOV EDX,dword ptr [ESP + 0xc]       ; 00599c15
    PUSH EDX                            ; 00599c19
    CALL FUN_0040c840                   ; 00599c1a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00599c1f
    TEST EAX,EAX                        ; 00599c22
    JZ 0x00599c2c                       ; 00599c24
        ;   XREF to: 00599c2c (CONDITIONAL_JUMP)  ; LAB_00599c2c
    MOV EAX,0x1                         ; 00599c26
    RET                                 ; 00599c2b
    PUSH EBX                            ; 00599c2c
        ;   Label: LAB_00599c2c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00599c2d
    PUSH ECX                            ; 00599c31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00599c32
    PUSH EBX                            ; 00599c36
    CALL FUN_00427a00                   ; 00599c37
        ;   XREF to: 00427a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00427a00()
    ADD ESP,0x8                         ; 00599c3c
    POP EBX                             ; 00599c3f
    RET                                 ; 00599c40

