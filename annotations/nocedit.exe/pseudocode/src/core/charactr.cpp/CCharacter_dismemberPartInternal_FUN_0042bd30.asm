; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CBodyPart *      Stack[0x8]:4   body_part
; int              Stack[0xc]:4   part_index
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; CMatrix3x4f      Stack[-0x9c]:48  local_9c
; CMatrix3x4f      Stack[-0x6c]:48  local_6c
; CVector3i        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; CVector3f        Stack[-0x24]:12  local_24
; CMatrix3x4f *    Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[14]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00415dd0 at 00415f74
;   core_batman.cpp_CBatman_processDismemberment_FUN_00417660 at 00417781
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041d680 at 0041d7ab
;   core_bride.cpp_CBride_processDismemberment_FUN_00424600 at 004246d7
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 at 0042bd14
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_004448c0 at 0044497a
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_00485b20 at 00485b73
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004e5530 at 004e5641
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e8520 at 004e8600
;   core_imp.cpp_CImp_processDismemberment_FUN_004fab60 at 004fac81
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 CKeyFramedModelInstance_00823a98.model_name[0]
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041add0
;   core_bodypart.cpp_CBodyPart_addFire_FUN_0041ae50
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042bd30
        ;   Label: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
    PUSH ESI                            ; 0042bd31
    PUSH EDI                            ; 0042bd32
    PUSH EBP                            ; 0042bd33
    MOV EBP,ESP                         ; 0042bd34
    SUB ESP,0x8c                        ; 0042bd36
    SUB EBP,0x72                        ; 0042bd3c
    MOV EAX,dword ptr [EBP + 0x86]      ; 0042bd3f
    MOV EBX,dword ptr [EBP + 0x86]      ; 0042bd45
    MOV DL,byte ptr [EAX + 0x23b8]      ; 0042bd4b
    ADD EBX,0x158                       ; 0042bd51
    TEST DL,DL                          ; 0042bd57
    JZ 0x0042bd75                       ; 0042bd59
        ;   XREF to: 0042bd75 (CONDITIONAL_JUMP)  ; LAB_0042bd75
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0042bd5b
    MOV EDX,dword ptr [EBP + 0x86]      ; 0042bd61
    SHL EAX,0x2                         ; 0042bd67
    ADD EAX,EDX                         ; 0042bd6a
    CMP dword ptr [EAX + 0x2298],0x0    ; 0042bd6c
    JNZ 0x0042bd7d                      ; 0042bd73
        ;   XREF to: 0042bd7d (CONDITIONAL_JUMP)  ; LAB_0042bd7d
    LEA ESP,[EBP + 0x72]                ; 0042bd75
        ;   Label: LAB_0042bd75
    POP EBP                             ; 0042bd78
    POP EDI                             ; 0042bd79
    POP ESI                             ; 0042bd7a
    POP EBX                             ; 0042bd7b
    RET                                 ; 0042bd7c
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0042bd7d
        ;   Label: LAB_0042bd7d
    PUSH ESI                            ; 0042bd83
    MOV EDI,dword ptr [EBP + 0x8a]      ; 0042bd84
    PUSH EDI                            ; 0042bd8a
    PUSH EBX                            ; 0042bd8b
    CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040 ; 0042bd8c
        ;   XREF to: 005a1040 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040(CDeformableModelInstance * this_ptr, CBodyPart * body_part, int part_index)
    XOR EAX,EAX                         ; 0042bd91
    MOV dword ptr [EBP + 0x6e],EAX      ; 0042bd93
    MOV EAX,dword ptr [EBP + 0x86]      ; 0042bd96
    MOV EDX,dword ptr [EAX + 0x2df4]    ; 0042bd9c
    ADD ESP,0xc                         ; 0042bda2
    TEST EDX,EDX                        ; 0042bda5
    JLE 0x0042bde5                      ; 0042bda7
        ;   XREF to: 0042bde5 (CONDITIONAL_JUMP)  ; LAB_0042bde5
    MOV EBX,dword ptr [EBP + 0x86]      ; 0042bda9
    ADD EAX,0xfd8                       ; 0042bdaf
    ADD EBX,0x2df8                      ; 0042bdb4
    MOV dword ptr [EBP + 0x6a],EAX      ; 0042bdba
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0042bdbd
        ;   Label: LAB_0042bdbd
    CMP ECX,dword ptr [EBX]             ; 0042bdc3
    JZ 0x0042be7d                       ; 0042bdc5
        ;   XREF to: 0042be7d (CONDITIONAL_JUMP)  ; LAB_0042be7d
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0042bdcb
        ;   Label: LAB_0042bdcb
    MOV ESI,dword ptr [EBP + 0x86]      ; 0042bdce
    ADD EBX,0x38                        ; 0042bdd4
    INC ECX                             ; 0042bdd7
    MOV EDI,dword ptr [ESI + 0x2df4]    ; 0042bdd8
    MOV dword ptr [EBP + 0x6e],ECX      ; 0042bdde
    CMP ECX,EDI                         ; 0042bde1
    JL 0x0042bdbd                       ; 0042bde3
        ;   XREF to: 0042bdbd (CONDITIONAL_JUMP)  ; LAB_0042bdbd
    MOV EAX,dword ptr [EBP + 0x86]      ; 0042bde5
        ;   Label: LAB_0042bde5
    MOV EDX,dword ptr [EAX + 0x2f10]    ; 0042bdeb
    XOR ESI,ESI                         ; 0042bdf1
    TEST EDX,EDX                        ; 0042bdf3
    JLE 0x0042be25                      ; 0042bdf5
        ;   XREF to: 0042be25 (CONDITIONAL_JUMP)  ; LAB_0042be25
    LEA EDI,[EAX + 0xfd8]               ; 0042bdf7
    LEA EBX,[EAX + 0x2f1c]              ; 0042bdfd
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0042be03
        ;   Label: LAB_0042be03
    CMP ECX,dword ptr [EBX]             ; 0042be09
    JZ 0x0042beee                       ; 0042be0b
        ;   XREF to: 0042beee (CONDITIONAL_JUMP)  ; LAB_0042beee
    MOV EAX,dword ptr [EBP + 0x86]      ; 0042be11
        ;   Label: LAB_0042be11
    INC ESI                             ; 0042be17
    MOV EDX,dword ptr [EAX + 0x2f10]    ; 0042be18
    ADD EBX,0x18                        ; 0042be1e
    CMP ESI,EDX                         ; 0042be21
    JL 0x0042be03                       ; 0042be23
        ;   XREF to: 0042be03 (CONDITIONAL_JUMP)  ; LAB_0042be03
    MOV ESI,dword ptr [EBP + 0x86]      ; 0042be25
        ;   Label: LAB_0042be25
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0042be2b
    XOR EBX,EBX                         ; 0042be31
    CMP EDI,dword ptr [ESI + 0x24b0]    ; 0042be33
        ;   Label: LAB_0042be33
    JNZ 0x0042be5a                      ; 0042be39
        ;   XREF to: 0042be5a (CONDITIONAL_JUMP)  ; LAB_0042be5a
    PUSH 0x0                            ; 0042be3b
    MOV EAX,dword ptr [EBP + 0x86]      ; 0042be3d
    PUSH EBX                            ; 0042be43
    MOV EDX,dword ptr [EBP + 0x86]      ; 0042be44
    MOV EAX,dword ptr [EAX + 0x154]     ; 0042be4a
    PUSH EDX                            ; 0042be50
    CALL dword ptr [EAX + 0x13c]        ; 0042be51
    ADD ESP,0xc                         ; 0042be57
    INC EBX                             ; 0042be5a
        ;   Label: LAB_0042be5a
    ADD ESI,0x44                        ; 0042be5b
    CMP EBX,0x2                         ; 0042be5e
    JL 0x0042be33                       ; 0042be61
        ;   XREF to: 0042be33 (CONDITIONAL_JUMP)  ; LAB_0042be33
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0042be63
    MOV EBX,dword ptr [EBP + 0x92]      ; 0042be69
    MOV dword ptr [EAX + 0x158],EBX     ; 0042be6f
    LEA ESP,[EBP + 0x72]                ; 0042be75
    POP EBP                             ; 0042be78
    POP EDI                             ; 0042be79
    POP ESI                             ; 0042be7a
    POP EBX                             ; 0042be7b
    RET                                 ; 0042be7c
    MOV ESI,dword ptr [EBX + 0x4]       ; 0042be7d
        ;   Label: LAB_0042be7d
    LEA EAX,[ESI*0x4 + 0x0]             ; 0042be80
    SUB EAX,ESI                         ; 0042be87
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0042be89
    SHL EAX,0x4                         ; 0042be8c
    ADD EAX,ESI                         ; 0042be8f
    PUSH EAX                            ; 0042be91
    LEA EAX,[EBX + 0x8]                 ; 0042be92
    PUSH EAX                            ; 0042be95
    LEA ESI,[EBP + 0x16]                ; 0042be96
    LEA EDI,[EBP + -0x1a]               ; 0042be99
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0042be9c
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0042bea1
    LEA EAX,[EBP + 0x5e]                ; 0042bea4
    JMP 0x03fc4726                      ; 0042bea7
        ;   XREF to: 03fc4726 (UNCONDITIONAL_JUMP)  ; LAB_03fc4726
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0042beb6
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f * matrix_in, CVector3f * euler_out)
        ;   Label: LAB_0042beb6
    ADD ESP,0x8                         ; 0042bebb
    PUSH EAX                            ; 0042bebe
    MOV EAX,dword ptr [EBP + -0xe]      ; 0042bebf
    MOV dword ptr [EBP + 0x46],EAX      ; 0042bec2
    MOV EAX,dword ptr [EBP + 0x2]       ; 0042bec5
    MOV dword ptr [EBP + 0x4a],EAX      ; 0042bec8
    MOV EAX,dword ptr [EBP + 0x12]      ; 0042becb
    MOV dword ptr [EBP + 0x4e],EAX      ; 0042bece
    LEA EAX,[EBP + 0x46]                ; 0042bed1
    PUSH EAX                            ; 0042bed4
    PUSH 0x823b10                       ; 0042bed5 | CKeyFramedModelInstance_00823a98.model_name[0]
    MOV EDI,dword ptr [EBP + 0x8a]      ; 0042beda
    PUSH EDI                            ; 0042bee0
    CALL core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041add0 ; 0042bee1
        ;   XREF to: 0041add0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart * this_ptr, char * model_name, CVector3i * scale, CVector3i * position)
    ADD ESP,0x10                        ; 0042bee6
    JMP 0x0042bdcb                      ; 0042bee9
        ;   XREF to: 0042bdcb (UNCONDITIONAL_JUMP)  ; LAB_0042bdcb
    MOV EAX,dword ptr [EBX + 0x4]       ; 0042beee
        ;   Label: LAB_0042beee
    TEST EAX,EAX                        ; 0042bef1
    JL 0x0042be11                       ; 0042bef3
        ;   XREF to: 0042be11 (CONDITIONAL_JUMP)  ; LAB_0042be11
    IMUL EAX,EAX,0x30                   ; 0042bef9
    ADD EAX,EDI                         ; 0042befc
    PUSH EAX                            ; 0042befe
    LEA EAX,[EBX + 0x8]                 ; 0042beff
    PUSH EAX                            ; 0042bf02
    LEA EAX,[EBP + 0x52]                ; 0042bf03
    PUSH EAX                            ; 0042bf06
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0042bf07
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042bf0c
    LEA EAX,[EBP + 0x52]                ; 0042bf0f
    PUSH EAX                            ; 0042bf12
    MOV ECX,dword ptr [EBP + 0x8a]      ; 0042bf13
    PUSH ECX                            ; 0042bf19
    CALL core_bodypart.cpp_CBodyPart_addFire_FUN_0041ae50 ; 0042bf1a
        ;   XREF to: 0041ae50 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_addFire_FUN_0041ae50(CBodyPart * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0042bf1f
    JMP 0x0042be11                      ; 0042bf22
        ;   XREF to: 0042be11 (UNCONDITIONAL_JUMP)  ; LAB_0042be11
    MOV ECX,0xc                         ; 03fc4726
        ;   Label: LAB_03fc4726
    PUSH EAX                            ; 03fc472b
    LEA EAX,[EBP + -0x1a]               ; 03fc472c
    LEA ESI,[EBP + 0x16]                ; 03fc472f
    PUSH EAX                            ; 03fc4732
    MOV ECX,dword ptr [ESI]             ; 03fc4733
    MOV dword ptr [EDI],ECX             ; 03fc4735
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4737
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc473a
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc473d
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc4740
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4743
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4746
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc4749
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc474c
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc474f
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc4752
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc4755
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc4758
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc475b
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc475e
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc4761
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc4764
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc4767
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc476a
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc476d
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc4770
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc4773
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc4776
    ADD ESI,0x30                        ; 03fc4779
    ADD EDI,0x30                        ; 03fc477c
    XOR ECX,ECX                         ; 03fc477f
    JMP 0x0042beb6                      ; 03fc4781
        ;   XREF to: 0042beb6 (UNCONDITIONAL_JUMP)  ; LAB_0042beb6

