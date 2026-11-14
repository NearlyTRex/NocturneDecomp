; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041aaa0(CBodyPart *this_ptr,char *model_name,CVector3f *position_offset,CVector3f *euler_angles)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
; CVector3f *      Stack[0xc]:4   position_offset
; CVector3f *      Stack[0x10]:4   euler_angles
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210 at 004313d8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041aaa0
        ;   Label: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041aaa0
    PUSH ESI                            ; 0041aaa1
    PUSH EBP                            ; 0041aaa2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0041aaa3
    MOV ECX,dword ptr [ESP + 0x18]      ; 0041aaa7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041aaab
    MOV ESI,dword ptr [EDX + 0x28c]     ; 0041aaaf
    CMP ESI,0x3                         ; 0041aab5
    JGE 0x0041ab06                      ; 0041aab8
        ;   XREF to: 0041ab06 (CONDITIONAL_JUMP)  ; LAB_0041ab06
    MOV EBP,ESI                         ; 0041aaba
    IMUL ESI,ESI,0x194                  ; 0041aabc
    LEA EAX,[EDX + 0x290]               ; 0041aac2
    INC EBP                             ; 0041aac8
    ADD EAX,ESI                         ; 0041aac9
    MOV dword ptr [EDX + 0x28c],EBP     ; 0041aacb
    CMP EAX,ECX                         ; 0041aad1
    JNZ 0x0041ab0a                      ; 0041aad3
        ;   XREF to: 0041ab0a (CONDITIONAL_JUMP)  ; LAB_0041ab0a
    LEA EDX,[EAX + 0xc]                 ; 0041aad5
        ;   Label: LAB_0041aad5
    CMP EDX,EBX                         ; 0041aad8
    JZ 0x0041aaec                       ; 0041aada
        ;   XREF to: 0041aaec (CONDITIONAL_JUMP)  ; LAB_0041aaec
    MOV ECX,dword ptr [EBX]             ; 0041aadc
    MOV dword ptr [EDX],ECX             ; 0041aade
    MOV ECX,dword ptr [EBX + 0x4]       ; 0041aae0
    MOV dword ptr [EDX + 0x4],ECX       ; 0041aae3
    MOV ECX,dword ptr [EBX + 0x8]       ; 0041aae6
    MOV dword ptr [EDX + 0x8],ECX       ; 0041aae9
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041aaec
        ;   Label: LAB_0041aaec
    PUSH EDX                            ; 0041aaf0
    LEA EBX,[EAX + 0x18]                ; 0041aaf1
    PUSH EBX                            ; 0041aaf4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0041aaf5
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041aafa
    PUSH EBX                            ; 0041aafd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0041aafe
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041ab03
    POP EBP                             ; 0041ab06
        ;   Label: LAB_0041ab06
    POP ESI                             ; 0041ab07
    POP EBX                             ; 0041ab08
    RET                                 ; 0041ab09
    MOV EDX,dword ptr [ECX]             ; 0041ab0a
        ;   Label: LAB_0041ab0a
    MOV dword ptr [EAX],EDX             ; 0041ab0c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041ab0e
    MOV dword ptr [EAX + 0x4],EDX       ; 0041ab11
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041ab14
    MOV dword ptr [EAX + 0x8],EDX       ; 0041ab17
    JMP 0x0041aad5                      ; 0041ab1a
        ;   XREF to: 0041aad5 (UNCONDITIONAL_JUMP)  ; LAB_0041aad5

