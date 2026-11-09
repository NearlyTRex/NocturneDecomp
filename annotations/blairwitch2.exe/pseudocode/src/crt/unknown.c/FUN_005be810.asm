; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005be810(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005b8a04 at 005b8a1e
;   crt_unknown.c_FUN_005b8f9c at 005b9043
;
; Referenced Globals:
;   undefined4 DAT_02680160
;   undefined4 DAT_02680164
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be810
        ;   Label: crt_unknown.c_FUN_005be810
    MOV EBX,dword ptr [ESP + 0x8]       ; 005be811
    MOV EDX,0x2680160                   ; 005be815
    MOV EAX,dword ptr [EDX]             ; 005be81a | DAT_02680160
        ;   Label: LAB_005be81a
    TEST EAX,EAX                        ; 005be81c
    JZ 0x005be845                       ; 005be81e
        ;   XREF to: 005be845 (CONDITIONAL_JUMP)  ; LAB_005be845
    MOV ECX,dword ptr [EAX + 0x4]       ; 005be820
    CMP EBX,ECX                         ; 005be823
    JZ 0x005be82b                       ; 005be825
        ;   XREF to: 005be82b (CONDITIONAL_JUMP)  ; LAB_005be82b
    MOV EDX,EAX                         ; 005be827
    JMP 0x005be81a                      ; 005be829
        ;   XREF to: 005be81a (UNCONDITIONAL_JUMP)  ; LAB_005be81a
    MOV CL,byte ptr [ECX + 0xc]         ; 005be82b
        ;   Label: LAB_005be82b
    OR CL,0x3                           ; 005be82e
    MOV byte ptr [EBX + 0xc],CL         ; 005be831
    MOV EBX,dword ptr [EAX]             ; 005be834
    MOV dword ptr [EDX],EBX             ; 005be836
    MOV EDX,dword ptr [0x02680164]      ; 005be838 | DAT_02680164
    MOV [0x02680164],EAX                ; 005be83e | DAT_02680164
    MOV dword ptr [EAX],EDX             ; 005be843
    POP EBX                             ; 005be845
        ;   Label: LAB_005be845
    RET                                 ; 005be846

