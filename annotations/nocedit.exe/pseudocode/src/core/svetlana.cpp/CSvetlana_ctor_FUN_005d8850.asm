; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_svetlana.cpp_factoryFunc_FUN_005d8810 at 005d882a
;
; Referenced Globals:
;   TerminatedCString s_svetlana_dfm_006548f9
;   CDemonActor_vtable g_CSvetlanaVTable
;
; Called Functions:
;   core_cloth.cpp_FUN_00438ba0
;   core_hero.cpp_CHero_ctor_FUN_004f2340
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d8850
        ;   Label: core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d8851
    PUSH EBX                            ; 005d8855
    CALL core_hero.cpp_CHero_ctor_FUN_004f2340 ; 005d8856
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004f2340(CHero * this_ptr)
    ADD ESP,0x4                         ; 005d885b
    ADD EAX,0x1fbdc                     ; 005d885e
    PUSH EAX                            ; 005d8863
    CALL core_cloth.cpp_FUN_00438ba0    ; 005d8864
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00438ba0()
    ADD ESP,0x4                         ; 005d8869
    ADD EAX,0x3fe70                     ; 005d886c
    PUSH EAX                            ; 005d8871
    CALL core_cloth.cpp_FUN_00438ba0    ; 005d8872
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00438ba0()
    ADD ESP,0x4                         ; 005d8877
    LEA EBX,[EAX + 0xfffa05b4]          ; 005d887a
    PUSH 0x6548f9                       ; 005d8880 | = "svetlana.dfm"
    MOV dword ptr [EBX + 0x154],0x663d64 ; 005d8885 | g_CSvetlanaVTable
    LEA EAX,[EBX + 0x158]               ; 005d888f
    MOV dword ptr [EBX + 0x1fbd4],0x0   ; 005d8895
    PUSH EAX                            ; 005d889f
    MOV dword ptr [EBX + 0x1fbd8],0x0   ; 005d88a0
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005d88aa
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x9f8c0]             ; 005d88af
    MOV dword ptr [EBX + 0x9f8cc],0x3f800000 ; 005d88b5
    MOV dword ptr [EAX + 0x8],0x0       ; 005d88bf
    ADD ESP,0x8                         ; 005d88c6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d88c9
    MOV dword ptr [EAX + 0x4],EDX       ; 005d88cc
    MOV EDX,dword ptr [EAX + 0x4]       ; 005d88cf
    MOV dword ptr [EAX],EDX             ; 005d88d2
    MOV EAX,EBX                         ; 005d88d4
    POP EBX                             ; 005d88d6
    RET                                 ; 005d88d7

