; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_00417610(CBodyPart *this_ptr,char *model_name,CVector3f *position_offset,CVector3f *euler_angles)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
; CVector3f *      Stack[0xc]:4   position_offset
; CVector3f *      Stack[0x10]:4   euler_angles
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 at 004279a8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417610
        ;   Label: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417610
    PUSH ESI                            ; 00417611
    PUSH EBP                            ; 00417612
    MOV EDX,dword ptr [ESP + 0x10]      ; 00417613
    MOV ECX,dword ptr [ESP + 0x18]      ; 00417617
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041761b
    MOV ESI,dword ptr [EDX + 0x3e8]     ; 0041761f
    CMP ESI,0x3                         ; 00417625
    JGE 0x00417676                      ; 00417628
        ;   XREF to: 00417676 (CONDITIONAL_JUMP)  ; LAB_00417676
    MOV EBP,ESI                         ; 0041762a
    IMUL ESI,ESI,0x194                  ; 0041762c
    LEA EAX,[EDX + 0x3ec]               ; 00417632
    INC EBP                             ; 00417638
    ADD EAX,ESI                         ; 00417639
    MOV dword ptr [EDX + 0x3e8],EBP     ; 0041763b
    CMP EAX,ECX                         ; 00417641
    JNZ 0x0041767a                      ; 00417643
        ;   XREF to: 0041767a (CONDITIONAL_JUMP)  ; LAB_0041767a
    LEA EDX,[EAX + 0xc]                 ; 00417645
        ;   Label: LAB_00417645
    CMP EDX,EBX                         ; 00417648
    JZ 0x0041765c                       ; 0041764a
        ;   XREF to: 0041765c (CONDITIONAL_JUMP)  ; LAB_0041765c
    MOV ECX,dword ptr [EBX]             ; 0041764c
    MOV dword ptr [EDX],ECX             ; 0041764e
    MOV ECX,dword ptr [EBX + 0x4]       ; 00417650
    MOV dword ptr [EDX + 0x4],ECX       ; 00417653
    MOV ECX,dword ptr [EBX + 0x8]       ; 00417656
    MOV dword ptr [EDX + 0x8],ECX       ; 00417659
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041765c
        ;   Label: LAB_0041765c
    PUSH EDX                            ; 00417660
    LEA EBX,[EAX + 0x18]                ; 00417661
    PUSH EBX                            ; 00417664
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00417665
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041766a
    PUSH EBX                            ; 0041766d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0041766e
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00417673
    POP EBP                             ; 00417676
        ;   Label: LAB_00417676
    POP ESI                             ; 00417677
    POP EBX                             ; 00417678
    RET                                 ; 00417679
    MOV EDX,dword ptr [ECX]             ; 0041767a
        ;   Label: LAB_0041767a
    MOV dword ptr [EAX],EDX             ; 0041767c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041767e
    MOV dword ptr [EAX + 0x4],EDX       ; 00417681
    MOV EDX,dword ptr [ECX + 0x8]       ; 00417684
    MOV dword ptr [EAX + 0x8],EDX       ; 00417687
    JMP 0x00417645                      ; 0041768a
        ;   XREF to: 00417645 (UNCONDITIONAL_JUMP)  ; LAB_00417645

