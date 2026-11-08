; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00561020(int param_1)
;
;
; XREF[1]:
;   FUN_00560630 at 00560b2a
;
; Referenced Globals:
;   TerminatedCString s_scorp_attack_wav_4_005f18e7
;
; Called Functions:
;   FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561020
        ;   Label: FUN_00561020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00561021
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 00561025
    PUSH EDX                            ; 0056102b
    CALL FUN_005735a0                   ; 0056102c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 00561031
    TEST EAX,EAX                        ; 00561034
    JZ 0x0056103a                       ; 00561036
        ;   XREF to: 0056103a (CONDITIONAL_JUMP)  ; LAB_0056103a
    POP EBX                             ; 00561038
    RET                                 ; 00561039
    PUSH 0x5f18e7                       ; 0056103a | = "scorp-attack?.wav @ 4"
        ;   Label: LAB_0056103a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056103f
    PUSH EBX                            ; 00561045
    CALL dword ptr [EAX + 0x2c]         ; 00561046
    MOV dword ptr [EBX + 0xc284],0x41000000 ; 00561049
    ADD ESP,0x8                         ; 00561053
    MOV dword ptr [EBX + 0xc27c],EAX    ; 00561056
    POP EBX                             ; 0056105c
    RET                                 ; 0056105d

