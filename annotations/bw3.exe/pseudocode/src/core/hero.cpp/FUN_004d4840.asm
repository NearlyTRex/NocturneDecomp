; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004d4840(CCharacter *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_prye.cpp_CPrye_canDoHeroAction_FUN_005260b0 at 0052627c
;
; Referenced Globals:
;   undefined1* switchdataD_004d4800 = 004d4897
;
; Called Functions:
;   core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d4840
        ;   Label: core_hero.cpp_FUN_004d4840
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d4844
    CMP dword ptr [EAX + 0x20ba8],0x0   ; 004d4848
    JNZ 0x004d48b0                      ; 004d484f
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [EAX + 0x20b94],0x0   ; 004d4855
    JNZ 0x004d48b0                      ; 004d485c
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [EAX + 0x20b98],0x0   ; 004d485e
    JNZ 0x004d48b0                      ; 004d4865
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [EAX + 0x20b9c],0x0   ; 004d4867
    JNZ 0x004d48b0                      ; 004d486e
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [EAX + 0x20ba0],0x0   ; 004d4870
    JNZ 0x004d48b0                      ; 004d4877
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [EAX + 0x20ba4],0x0   ; 004d4879
    JNZ 0x004d48b0                      ; 004d4880
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    CMP dword ptr [EAX + 0x20bac],0x0   ; 004d4882
    JNZ 0x004d48b0                      ; 004d4889
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    CMP EDX,0xc                         ; 004d488b
    JA 0x004d48b0                       ; 004d488e
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EDX*0x4 + 0x4d4800]  ; 004d4890 | caseD_c | caseD_3 | caseD_5
        ;   Label: switchD
    PUSH EAX                            ; 004d4897
        ;   Label: caseD_0
    CALL core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060 ; 004d4898
        ;   XREF to: 00432060 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d489d
    TEST EAX,EAX                        ; 004d48a0
    JZ 0x004d2ab0                       ; 004d48a2
        ;   XREF to: 004d2ab0 (CONDITIONAL_JUMP)  ; caseD_3
    LEA EAX,[EAX]                       ; 004d48a8
    MOV EDX,EDX                         ; 004d48ae
    XOR EAX,EAX                         ; 004d48b0
        ;   Label: caseD_5
    RET                                 ; 004d48b2
    PUSH EAX                            ; 004d48b3
        ;   Label: caseD_a
    CALL core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060 ; 004d48b4
        ;   XREF to: 00432060 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d48b9
    TEST EAX,EAX                        ; 004d48bc
    JNZ 0x004d48b0                      ; 004d48be
        ;   XREF to: 004d48b0 (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,0x1                         ; 004d48c0
    RET                                 ; 004d48c5

