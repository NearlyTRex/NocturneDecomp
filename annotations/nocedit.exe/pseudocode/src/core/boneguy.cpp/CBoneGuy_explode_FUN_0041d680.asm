; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; float[1520]      Stack[-0x1824]:6080  afStackY_1824
; CQuaternion4f    Stack[-0x48]:16  local_48
; CVector3f        Stack[-0x38]:12  local_38
; UOrientationVector * Stack[-0x2c]:4  local_2c
; CVector3f *      Stack[-0x28]:4  local_28
; CDeformableModel * Stack[-0x24]:4  local_24
; SBoneGuyBox *    Stack[-0x20]:4  local_20
; CBoneGuy *       Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d4d0 at 0041d50b
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041bfe8
;
; Referenced Globals:
;   TerminatedCString s_core_boneguy_cpp_00616304
;   TerminatedCString s_CBoneGuy_explode_Not_eno_00616318
;   TerminatedCString s_boneguy_fallapart_wav_00616342
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050
;   core_bodypart.cpp_createBodyPart_FUN_00418e10
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d680
        ;   Label: core_boneguy.cpp_CBoneGuy_explode_FUN_0041d680
    PUSH ESI                            ; 0041d681
    PUSH EDI                            ; 0041d682
    PUSH EBP                            ; 0041d683
    SUB ESP,0x38                        ; 0041d684
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0041d687
    PUSH EDX                            ; 0041d68b
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060 ; 0041d68c
        ;   XREF to: 0042d060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041d691
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d694
    ADD EAX,0x158                       ; 0041d698
    MOV dword ptr [EAX + 0xc384],0x1    ; 0041d69d
    PUSH EAX                            ; 0041d6a7
    MOV dword ptr [EAX + 0xc388],0x0    ; 0041d6a8
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0041d6b2
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041d6b7
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0041d6ba
    MOV dword ptr [ESP + 0x24],EAX      ; 0041d6be
    MOV EAX,dword ptr [EAX + 0x7140]    ; 0041d6c2
    MOV dword ptr [EBX + 0xbf38],EAX    ; 0041d6c8
    CMP EAX,0x14                        ; 0041d6ce
    JG 0x0041d875                       ; 0041d6d1
        ;   XREF to: 0041d875 (CONDITIONAL_JUMP)  ; LAB_0041d875
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041d6d7
        ;   Label: LAB_0041d6d7
    XOR EDI,EDI                         ; 0041d6db
    MOV EBP,dword ptr [EAX + 0x7140]    ; 0041d6dd
    MOV dword ptr [ESP + 0x30],EDI      ; 0041d6e3
    TEST EBP,EBP                        ; 0041d6e7
    JLE 0x0041d853                      ; 0041d6e9
        ;   XREF to: 0041d853 (CONDITIONAL_JUMP)  ; LAB_0041d853
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d6ef
    ADD EAX,0xbf3c                      ; 0041d6f3
    MOV dword ptr [ESP + 0x28],EAX      ; 0041d6f8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d6fc
    ADD EAX,0x30                        ; 0041d700
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041d703
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d707
    ADD EAX,0x20                        ; 0041d70b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0041d70e
    MOV dword ptr [ESP + 0x20],EAX      ; 0041d712
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d716
    ADD EBP,0xc                         ; 0041d71a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041d71d
    PUSH 0x40a00000                     ; 0041d721
        ;   Label: LAB_0041d721
    PUSH 0xc0a00000                     ; 0041d726
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0041d72b
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041d730
    FLD float ptr [ESP + 0x3c]          ; 0041d734
    ADD ESP,0x8                         ; 0041d738
    PUSH 0x41200000                     ; 0041d73b
    PUSH 0x0                            ; 0041d740
    FSTP float ptr [ESP + 0x18]         ; 0041d742
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0041d746
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041d74b
    FLD float ptr [ESP + 0x3c]          ; 0041d74f
    ADD ESP,0x8                         ; 0041d753
    PUSH 0x40a00000                     ; 0041d756
    PUSH 0xc0a00000                     ; 0041d75b
    FSTP float ptr [ESP + 0x1c]         ; 0041d760
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0041d764
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041d769
    FLD float ptr [ESP + 0x3c]          ; 0041d76d
    ADD ESP,0x8                         ; 0041d771
    PUSH 0x2                            ; 0041d774
    PUSH 0x1                            ; 0041d776
    PUSH 0x1                            ; 0041d778
    MOV EBX,dword ptr [ESP + 0x58]      ; 0041d77a
    PUSH EBX                            ; 0041d77e
    LEA EAX,[ESP + 0x20]                ; 0041d77f
    PUSH EAX                            ; 0041d783
    MOV ESI,dword ptr [ESP + 0x30]      ; 0041d784
    PUSH ESI                            ; 0041d788
    MOV EDI,dword ptr [ESP + 0x38]      ; 0041d789
    PUSH EDI                            ; 0041d78d
    FSTP float ptr [ESP + 0x34]         ; 0041d78e
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 0041d792
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0041d797
    MOV EBX,EAX                         ; 0041d79a
    PUSH 0x0                            ; 0041d79c
    MOV ESI,EAX                         ; 0041d79e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d7a0
    PUSH EAX                            ; 0041d7a4
    PUSH EBX                            ; 0041d7a5
    MOV EDX,dword ptr [ESP + 0x58]      ; 0041d7a6
    PUSH EDX                            ; 0041d7aa
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 ; 0041d7ab
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0041d7b0
    PUSH EBX                            ; 0041d7b3
    MOV dword ptr [EBX + 0xcc4],0x1     ; 0041d7b4
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 ; 0041d7be
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0041d7c3
    IMUL EAX,dword ptr [ESP + 0x30],0x48 ; 0041d7c6
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0041d7cb
    MOV dword ptr [EDI + 0xbf80],EBX    ; 0041d7cf
    MOV EDI,dword ptr [ESP + 0x28]      ; 0041d7d5
    ADD EBX,0x20                        ; 0041d7d9
    ADD EAX,EDI                         ; 0041d7dc
    CMP EAX,EBX                         ; 0041d7de
    JZ 0x0041d7f2                       ; 0041d7e0
        ;   XREF to: 0041d7f2 (CONDITIONAL_JUMP)  ; LAB_0041d7f2
    MOV EDX,dword ptr [EBX]             ; 0041d7e2
    MOV dword ptr [EAX],EDX             ; 0041d7e4
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041d7e6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041d7e9
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041d7ec
    MOV dword ptr [EAX + 0x8],EDX       ; 0041d7ef
    LEA EAX,[ESI + 0x30]                ; 0041d7f2
        ;   Label: LAB_0041d7f2
    CMP EBP,EAX                         ; 0041d7f5
    JZ 0x0041d80a                       ; 0041d7f7
        ;   XREF to: 0041d80a (CONDITIONAL_JUMP)  ; LAB_0041d80a
    MOV EDX,dword ptr [EAX]             ; 0041d7f9
    MOV dword ptr [EBP],EDX             ; 0041d7fb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d7fe
    MOV dword ptr [EBP + 0x4],EDX       ; 0041d801
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d804
    MOV dword ptr [EBP + 0x8],EDX       ; 0041d807
    ADD ESI,0x30                        ; 0041d80a
        ;   Label: LAB_0041d80a
    PUSH ESI                            ; 0041d80d
    LEA ESI,[ESP + 0x4]                 ; 0041d80e
    ADD EBP,0x48                        ; 0041d812
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 0041d815
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 0041d81a
    MOV ESI,ESP                         ; 0041d81d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0041d81f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041d823
    MOV EDX,dword ptr [ESP + 0x30]      ; 0041d827
    MOV EBX,dword ptr [ESP + 0x24]      ; 0041d82b
    LEA EDI,[EDI + 0xbf64]              ; 0041d82f
    ADD EAX,0x48                        ; 0041d835
    INC EDX                             ; 0041d838
    MOVSD ES:EDI,ESI                    ; 0041d839
    MOVSD ES:EDI,ESI                    ; 0041d83a
    MOVSD ES:EDI,ESI                    ; 0041d83b
    MOVSD ES:EDI,ESI                    ; 0041d83c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041d83d
    MOV ECX,dword ptr [EBX + 0x7140]    ; 0041d841
    MOV dword ptr [ESP + 0x30],EDX      ; 0041d847
    CMP EDX,ECX                         ; 0041d84b
    JL 0x0041d721                       ; 0041d84d
        ;   XREF to: 0041d721 (CONDITIONAL_JUMP)  ; LAB_0041d721
    PUSH 0x616342                       ; 0041d853 | = "boneguy-fallapart.wav"
        ;   Label: LAB_0041d853
    MOV EBP,dword ptr [ESP + 0x50]      ; 0041d858
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041d85c
    PUSH EBP                            ; 0041d860
    MOV EAX,dword ptr [EAX + 0x154]     ; 0041d861
    CALL dword ptr [EAX + 0x24]         ; 0041d867
    ADD ESP,0x8                         ; 0041d86a
    ADD ESP,0x38                        ; 0041d86d
    POP EBP                             ; 0041d870
    POP EDI                             ; 0041d871
    POP ESI                             ; 0041d872
    POP EBX                             ; 0041d873
    RET                                 ; 0041d874
    MOV EBX,0x616304                    ; 0041d875 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_0041d875
    MOV ESI,0x443                       ; 0041d87a
    PUSH 0x616318                       ; 0041d87f | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0041d884 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0041d88a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041d890
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041d895
    JMP 0x0041d6d7                      ; 0041d898
        ;   XREF to: 0041d6d7 (UNCONDITIONAL_JUMP)  ; LAB_0041d6d7

