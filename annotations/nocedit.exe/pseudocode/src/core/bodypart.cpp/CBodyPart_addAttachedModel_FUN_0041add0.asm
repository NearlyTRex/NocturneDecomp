; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0(CBodyPart *this_ptr,char *model_name,CVector3i *scale,CVector3i *position)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
; CVector3i *      Stack[0xc]:4   scale
; CVector3i *      Stack[0x10]:4   position
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 at 0042bee1
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041add0
        ;   Label: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041add0
    PUSH ESI                            ; 0041add1
    PUSH EBP                            ; 0041add2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0041add3
    MOV ECX,dword ptr [ESP + 0x18]      ; 0041add7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041addb
    MOV ESI,dword ptr [EDX + 0x28c]     ; 0041addf
    CMP ESI,0x3                         ; 0041ade5
    JGE 0x0041ae36                      ; 0041ade8
        ;   XREF to: 0041ae36 (CONDITIONAL_JUMP)  ; LAB_0041ae36
    MOV EBP,ESI                         ; 0041adea
    IMUL ESI,ESI,0x194                  ; 0041adec
    LEA EAX,[EDX + 0x290]               ; 0041adf2
    INC EBP                             ; 0041adf8
    ADD EAX,ESI                         ; 0041adf9
    MOV dword ptr [EDX + 0x28c],EBP     ; 0041adfb
    CMP EAX,ECX                         ; 0041ae01
    JNZ 0x0041ae3a                      ; 0041ae03
        ;   XREF to: 0041ae3a (CONDITIONAL_JUMP)  ; LAB_0041ae3a
    LEA EDX,[EAX + 0xc]                 ; 0041ae05
        ;   Label: LAB_0041ae05
    CMP EDX,EBX                         ; 0041ae08
    JZ 0x0041ae1c                       ; 0041ae0a
        ;   XREF to: 0041ae1c (CONDITIONAL_JUMP)  ; LAB_0041ae1c
    MOV ECX,dword ptr [EBX]             ; 0041ae0c
    MOV dword ptr [EDX],ECX             ; 0041ae0e
    MOV ECX,dword ptr [EBX + 0x4]       ; 0041ae10
    MOV dword ptr [EDX + 0x4],ECX       ; 0041ae13
    MOV ECX,dword ptr [EBX + 0x8]       ; 0041ae16
    MOV dword ptr [EDX + 0x8],ECX       ; 0041ae19
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041ae1c
        ;   Label: LAB_0041ae1c
    PUSH EDX                            ; 0041ae20
    LEA EBX,[EAX + 0x18]                ; 0041ae21
    PUSH EBX                            ; 0041ae24
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0041ae25
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041ae2a
    PUSH EBX                            ; 0041ae2d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 0041ae2e
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041ae33
    POP EBP                             ; 0041ae36
        ;   Label: LAB_0041ae36
    POP ESI                             ; 0041ae37
    POP EBX                             ; 0041ae38
    RET                                 ; 0041ae39
    MOV EDX,dword ptr [ECX]             ; 0041ae3a
        ;   Label: LAB_0041ae3a
    MOV dword ptr [EAX],EDX             ; 0041ae3c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041ae3e
    MOV dword ptr [EAX + 0x4],EDX       ; 0041ae41
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041ae44
    MOV dword ptr [EAX + 0x8],EDX       ; 0041ae47
    JMP 0x0041ae05                      ; 0041ae4a
        ;   XREF to: 0041ae05 (UNCONDITIONAL_JUMP)  ; LAB_0041ae05

