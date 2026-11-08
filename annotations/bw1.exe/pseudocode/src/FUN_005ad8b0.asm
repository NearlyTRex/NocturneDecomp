; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad8b0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[2]:
;   FUN_005096a0 at 005096a6
;   FUN_005a2bf0 at 005a2bf6
;
; Referenced Globals:
;   TerminatedCString s_modelName_005f98a2
;   TerminatedCString s_carriedByActor_005f98ac
;   TerminatedCString s_weaponState_005f98bb
;   TerminatedCString s_ammoCount_005f98c7
;   TerminatedCString s_ammoType_005f98d1
;   TerminatedCString s_descriptiveName_005f98da
;   TerminatedCString s_simTimer_005f98ea
;   undefined4 DAT_00626038
;
; Called Functions:
;   FUN_0040b560
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad8b0
        ;   Label: FUN_005ad8b0
    SUB ESP,0x100                       ; 005ad8b1
    MOV EBX,dword ptr [ESP + 0x108]     ; 005ad8b7
    PUSH EBX                            ; 005ad8be
    CALL FUN_0040c040                   ; 005ad8bf
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 005ad8c4
    PUSH 0x5f98a2                       ; 005ad8c7 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005ad8cc
    PUSH EAX                            ; 005ad8d2
    CALL FUN_0040b770                   ; 005ad8d3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    MOV EDX,dword ptr [0x00626038]      ; 005ad8d8 | DAT_00626038
    ADD ESP,0x8                         ; 005ad8de
    CMP EDX,0x3                         ; 005ad8e1
    JGE 0x005ad957                      ; 005ad8e4
        ;   XREF to: 005ad957 (CONDITIONAL_JUMP)  ; LAB_005ad957
    CMP dword ptr [0x00626038],0x4      ; 005ad8e6 | DAT_00626038
        ;   Label: LAB_005ad8e6
    JL 0x005ad92b                       ; 005ad8ed
        ;   XREF to: 005ad92b (CONDITIONAL_JUMP)  ; LAB_005ad92b
    PUSH 0x5f98bb                       ; 005ad8ef | = "weaponState"
    LEA EAX,[EBX + 0x2d4]               ; 005ad8f4
    PUSH EAX                            ; 005ad8fa
    CALL FUN_0040b670                   ; 005ad8fb
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005ad900
    PUSH 0x5f98c7                       ; 005ad903 | = "ammoCount"
    LEA EAX,[EBX + 0x568]               ; 005ad908
    PUSH EAX                            ; 005ad90e
    CALL FUN_0040b670                   ; 005ad90f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005ad914
    PUSH 0x5f98d1                       ; 005ad917 | = "ammoType"
    LEA EAX,[EBX + 0x56c]               ; 005ad91c
    PUSH EAX                            ; 005ad922
    CALL FUN_0040b670                   ; 005ad923
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 005ad928
    CMP dword ptr [0x00626038],0x5      ; 005ad92b | DAT_00626038
        ;   Label: LAB_005ad92b
    JNZ 0x005ad946                      ; 005ad932
        ;   XREF to: 005ad946 (CONDITIONAL_JUMP)  ; LAB_005ad946
    PUSH 0x5f98da                       ; 005ad934 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 005ad939
    PUSH EAX                            ; 005ad93d
    CALL FUN_0040b560                   ; 005ad93e
        ;   XREF to: 0040b560 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b560()
    ADD ESP,0x8                         ; 005ad943
    CMP dword ptr [0x00626038],0x7      ; 005ad946 | DAT_00626038
        ;   Label: LAB_005ad946
    JGE 0x005ad970                      ; 005ad94d
        ;   XREF to: 005ad970 (CONDITIONAL_JUMP)  ; LAB_005ad970
    ADD ESP,0x100                       ; 005ad94f
    POP EBX                             ; 005ad955
    RET                                 ; 005ad956
    PUSH 0x5f98ac                       ; 005ad957 | = "carriedByActor"
        ;   Label: LAB_005ad957
    LEA EAX,[EBX + 0x304]               ; 005ad95c
    PUSH EAX                            ; 005ad962
    CALL FUN_0040b6f0                   ; 005ad963
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 005ad968
    JMP 0x005ad8e6                      ; 005ad96b
        ;   XREF to: 005ad8e6 (UNCONDITIONAL_JUMP)  ; LAB_005ad8e6
    PUSH 0x5f98ea                       ; 005ad970 | = "simTimer"
        ;   Label: LAB_005ad970
    ADD EBX,0x570                       ; 005ad975
    PUSH EBX                            ; 005ad97b
    CALL FUN_0040b5f0                   ; 005ad97c
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ad981
    ADD ESP,0x100                       ; 005ad984
    POP EBX                             ; 005ad98a
    RET                                 ; 005ad98b

