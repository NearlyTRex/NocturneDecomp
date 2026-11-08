; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a2820(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Finger0_005effcc
;   TerminatedCString s_SM_TWIG_DFM_005effdc
;
; Called Functions:
;   FUN_00540e80
;   FUN_00547890
;   FUN_0059e6a0
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2820
        ;   Label: FUN_005a2820
    PUSH ESI                            ; 005a2821
    PUSH EBP                            ; 005a2822
    MOV EBP,ESP                         ; 005a2823
    MOV EBX,dword ptr [EBP + 0x10]      ; 005a2825
    PUSH EBX                            ; 005a2828
    CALL FUN_0059e6a0                   ; 005a2829
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e6a0()
    ADD ESP,0x4                         ; 005a282e
    LEA EAX,[EBX + 0x2b4]               ; 005a2831
    PUSH EAX                            ; 005a2837
    CALL FUN_00547890                   ; 005a2838
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 005a283d
    PUSH 0x1                            ; 005a2840
    PUSH 0x5effcc                       ; 005a2842 | = "Bip01 L Finger0"
    PUSH EAX                            ; 005a2847
    MOV ESI,EAX                         ; 005a2848
    CALL FUN_00540e80                   ; 005a284a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV EDX,EAX                         ; 005a284f
    MOV dword ptr [EBX + 0x11854],EAX   ; 005a2851
    SHL EAX,0x3                         ; 005a2857
    ADD EAX,EDX                         ; 005a285a
    ADD ESP,0xc                         ; 005a285c
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x1d21c] ; 005a285f
    PUSH 0x5effdc                       ; 005a2866 | = "SM_TWIG.DFM"
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a286b
    LEA EAX,[EBX + 0x2514]              ; 005a2871
    PUSH EAX                            ; 005a2877
    CALL FUN_005b8c30                   ; 005a2878
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 005a287d
    TEST EAX,EAX                        ; 005a2880
    JZ 0x005a2888                       ; 005a2882
        ;   XREF to: 005a2888 (CONDITIONAL_JUMP)  ; LAB_005a2888
    POP EBP                             ; 005a2884
    POP ESI                             ; 005a2885
    POP EBX                             ; 005a2886
    RET                                 ; 005a2887
    MOV dword ptr [EBX + 0x11388],0x6   ; 005a2888
        ;   Label: LAB_005a2888
    POP EBP                             ; 005a2892
    POP ESI                             ; 005a2893
    POP EBX                             ; 005a2894
    RET                                 ; 005a2895

