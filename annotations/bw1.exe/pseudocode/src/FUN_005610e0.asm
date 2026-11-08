; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005610e0(int param_1)
;
;
; XREF[1]:
;   FUN_00560630 at 00560a4b
;
; Referenced Globals:
;   TerminatedCString s_scorp_emerge_wav_2_005f1926
;
; Called Functions:
;   FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005610e0
        ;   Label: FUN_005610e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005610e1
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 005610e5
    PUSH EDX                            ; 005610eb
    CALL FUN_005735a0                   ; 005610ec
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 005610f1
    TEST EAX,EAX                        ; 005610f4
    JZ 0x005610fa                       ; 005610f6
        ;   XREF to: 005610fa (CONDITIONAL_JUMP)  ; LAB_005610fa
    POP EBX                             ; 005610f8
    RET                                 ; 005610f9
    PUSH 0x5f1926                       ; 005610fa | = "scorp-emerge.wav @ 2"
        ;   Label: LAB_005610fa
    MOV EAX,dword ptr [EBX + 0x154]     ; 005610ff
    PUSH EBX                            ; 00561105
    CALL dword ptr [EAX + 0x2c]         ; 00561106
    MOV dword ptr [EBX + 0xc284],0x41000000 ; 00561109
    ADD ESP,0x8                         ; 00561113
    MOV dword ptr [EBX + 0xc27c],EAX    ; 00561116
    POP EBX                             ; 0056111c
    RET                                 ; 0056111d

