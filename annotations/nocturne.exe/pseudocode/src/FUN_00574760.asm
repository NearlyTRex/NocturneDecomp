; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00574760(uint param_1)
;
;
; XREF[1]:
;   FUN_00574710 at 00574716
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   FUN_005747b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574760
        ;   Label: FUN_00574760
    CMP dword ptr [0x02de5c30],0x0      ; 00574764 | DAT_02de5c30
    JZ 0x005747a0                       ; 0057476b
        ;   XREF to: 005747a0 (CONDITIONAL_JUMP)  ; LAB_005747a0
    MOV EAX,EDX                         ; 0057476d
    SHR EAX,0x8                         ; 0057476f
    AND EAX,0xff                        ; 00574772
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 00574777
    AND AL,0x1                          ; 0057477d
    AND EAX,0xff                        ; 0057477f
    JZ 0x005747a0                       ; 00574784
        ;   XREF to: 005747a0 (CONDITIONAL_JUMP)  ; LAB_005747a0
    MOV EAX,EDX                         ; 00574786
    AND EAX,0xff                        ; 00574788
    PUSH EAX                            ; 0057478d
    CALL FUN_005747b0                   ; 0057478e
        ;   XREF to: 005747b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005747b0()
    ADD ESP,0x4                         ; 00574793
    TEST EAX,EAX                        ; 00574796
    JZ 0x005747a0                       ; 00574798
        ;   XREF to: 005747a0 (CONDITIONAL_JUMP)  ; LAB_005747a0
    MOV EAX,0x1                         ; 0057479a
    RET                                 ; 0057479f
    XOR EAX,EAX                         ; 005747a0
        ;   Label: LAB_005747a0
    RET                                 ; 005747a2

