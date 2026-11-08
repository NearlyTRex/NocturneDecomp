; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00556c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   FUN_0048c2e0 at 0048e040
;   FUN_004c4a60 at 004c4aa5
;   FUN_004c4bc0 at 004c4c42
;
; Called Functions:
;   FUN_00552f10
;   FUN_00556fd0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00556c10
        ;   Label: FUN_00556c10
    PUSH 0x1                            ; 00556c13
    MOV EDX,dword ptr [ESP + 0xc]       ; 00556c15
    PUSH EDX                            ; 00556c19
    CALL FUN_00552f10                   ; 00556c1a
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f10()
    ADD ESP,0x8                         ; 00556c1f
    TEST EAX,EAX                        ; 00556c22
    JNZ 0x00556c2a                      ; 00556c24
        ;   XREF to: 00556c2a (CONDITIONAL_JUMP)  ; LAB_00556c2a
    ADD ESP,0x4                         ; 00556c26
    RET                                 ; 00556c29
    MOV EDX,dword ptr [ESP + 0xc]       ; 00556c2a
        ;   Label: LAB_00556c2a
    MOV dword ptr [EAX + 0xfc],EDX      ; 00556c2e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00556c34
    MOV dword ptr [EAX + 0x100],EDX     ; 00556c38
    MOV EDX,dword ptr [ESP + 0x14]      ; 00556c3e
    MOV dword ptr [ESP],EDX             ; 00556c42
    FILD dword ptr [ESP]                ; 00556c45
    FSTP float ptr [EAX + 0x104]        ; 00556c48
    CALL FUN_00556fd0                   ; 00556c4e
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    MOV EAX,0x1                         ; 00556c53
    ADD ESP,0x4                         ; 00556c58
    RET                                 ; 00556c5b

