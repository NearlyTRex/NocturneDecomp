; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_baron.cpp_factoryFuncBaron_FUN_00412b80 at 00412b9a
;
; Referenced Globals:
;   TerminatedCString s_baron_dfm_00614ed7
;   TerminatedCString s_none_00614ee1
;   undefined4 s_one_00614ee2
;   undefined4 s_ne_00614ee3
;   undefined4 s_e_00614ee4
;   TerminatedCString s_none_00614ee6
;   undefined4 s_one_00614ee7
;   undefined4 s_ne_00614ee8
;   undefined4 s_e_00614ee9
;   TerminatedCString s_baronshell_kfm_00614eeb
;   CHero_full_vtable g_CBaronVTable
;   CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_hero.cpp_CHero_ctor_FUN_004f2340
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412bc0
        ;   Label: core_baron.cpp_CBaron_ctor_FUN_00412bc0
    PUSH ESI                            ; 00412bc1
    PUSH EDI                            ; 00412bc2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00412bc3
    PUSH EDX                            ; 00412bc7
    CALL core_hero.cpp_CHero_ctor_FUN_004f2340 ; 00412bc8
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004f2340(CHero * this_ptr)
    ADD ESP,0x4                         ; 00412bcd
    PUSH 0x614ed7                       ; 00412bd0 | = "baron.dfm"
    MOV EBX,EAX                         ; 00412bd5
    ADD EAX,0x158                       ; 00412bd7
    PUSH EAX                            ; 00412bdc
    MOV dword ptr [EAX + -0x4],0x65a074 ; 00412bdd | g_CBaronVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00412be4
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1fc9c]             ; 00412be9
    MOV dword ptr [EBX + 0x1fca8],0x3f800000 ; 00412bef
    MOV dword ptr [EAX + 0x8],0x0       ; 00412bf9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412c00
    MOV dword ptr [EAX + 0x4],EDX       ; 00412c03
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412c06
    MOV dword ptr [EAX],EDX             ; 00412c09
    MOV dword ptr [EBX + 0x1fcac],0x0   ; 00412c0b
    MOV ESI,0x614ee1                    ; 00412c15 | = "none"
    MOV dword ptr [EBX + 0x1fcb0],0x0   ; 00412c1a
    ADD ESP,0x8                         ; 00412c24
    MOV dword ptr [EBX + 0xfc],0x1      ; 00412c27
    LEA EDI,[EBX + 0x1fbd4]             ; 00412c31
    MOV dword ptr [EBX + 0x1fccc],0x0   ; 00412c37
    PUSH EDI                            ; 00412c41
    MOV AL,byte ptr [ESI]               ; 00412c42 | = "none" | s_ne_00614ee3
        ;   Label: LAB_00412c42
    MOV byte ptr [EDI],AL               ; 00412c44
    CMP AL,0x0                          ; 00412c46
    JZ 0x00412c5a                       ; 00412c48
        ;   XREF to: 00412c5a (CONDITIONAL_JUMP)  ; LAB_00412c5a
    MOV AL,byte ptr [ESI + 0x1]         ; 00412c4a | s_one_00614ee2 | s_e_00614ee4
    ADD ESI,0x2                         ; 00412c4d
    MOV byte ptr [EDI + 0x1],AL         ; 00412c50
    ADD EDI,0x2                         ; 00412c53
    CMP AL,0x0                          ; 00412c56
    JNZ 0x00412c42                      ; 00412c58
        ;   XREF to: 00412c42 (CONDITIONAL_JUMP)  ; LAB_00412c42
    POP EDI                             ; 00412c5a
        ;   Label: LAB_00412c5a
    MOV ESI,0x614ee6                    ; 00412c5b | = "none"
    LEA EDI,[EBX + 0x1fc38]             ; 00412c60
    PUSH EDI                            ; 00412c66
    MOV AL,byte ptr [ESI]               ; 00412c67 | = "none" | s_ne_00614ee8
        ;   Label: LAB_00412c67
    MOV byte ptr [EDI],AL               ; 00412c69
    CMP AL,0x0                          ; 00412c6b
    JZ 0x00412c7f                       ; 00412c6d
        ;   XREF to: 00412c7f (CONDITIONAL_JUMP)  ; LAB_00412c7f
    MOV AL,byte ptr [ESI + 0x1]         ; 00412c6f | s_one_00614ee7 | s_e_00614ee9
    ADD ESI,0x2                         ; 00412c72
    MOV byte ptr [EDI + 0x1],AL         ; 00412c75
    ADD EDI,0x2                         ; 00412c78
    CMP AL,0x0                          ; 00412c7b
    JNZ 0x00412c67                      ; 00412c7d
        ;   XREF to: 00412c67 (CONDITIONAL_JUMP)  ; LAB_00412c67
    POP EDI                             ; 00412c7f
        ;   Label: LAB_00412c7f
    PUSH 0x614eeb                       ; 00412c80 | = "baronshell.kfm"
    PUSH 0x82251c                       ; 00412c85 | g_CKeyFramedModelInstanceInstance
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00412c8a
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00412c8f
    MOV EAX,EBX                         ; 00412c92
    MOV dword ptr [EBX + 0x1fcd0],0x0   ; 00412c94
    POP EDI                             ; 00412c9e
    POP ESI                             ; 00412c9f
    POP EBX                             ; 00412ca0
    RET                                 ; 00412ca1

