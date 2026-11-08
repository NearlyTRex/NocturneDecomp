; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00561060(int param_1)
;
;
; XREF[1]:
;   FUN_00561330 at 0056143c
;
; Referenced Globals:
;   TerminatedCString s_scorp_damage_wav_4_005f18fd
;
; Called Functions:
;   FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561060
        ;   Label: FUN_00561060
    MOV EBX,dword ptr [ESP + 0x8]       ; 00561061
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 00561065
    PUSH EDX                            ; 0056106b
    CALL FUN_005735a0                   ; 0056106c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 00561071
    TEST EAX,EAX                        ; 00561074
    JZ 0x0056107a                       ; 00561076
        ;   XREF to: 0056107a (CONDITIONAL_JUMP)  ; LAB_0056107a
    POP EBX                             ; 00561078
    RET                                 ; 00561079
    PUSH 0x5f18fd                       ; 0056107a | = "scorp-damage?.wav @ 4"
        ;   Label: LAB_0056107a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056107f
    PUSH EBX                            ; 00561085
    CALL dword ptr [EAX + 0x2c]         ; 00561086
    MOV dword ptr [EBX + 0xc284],0x40800000 ; 00561089
    ADD ESP,0x8                         ; 00561093
    MOV dword ptr [EBX + 0xc27c],EAX    ; 00561096
    POP EBX                             ; 0056109c
    RET                                 ; 0056109d

