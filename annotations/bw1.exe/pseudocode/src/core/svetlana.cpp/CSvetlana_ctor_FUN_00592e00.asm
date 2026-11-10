; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_00592e00(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_svetlana.cpp_factoryFuncSvetlana_FUN_00592dd0 at 00592de3
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_0043e5c0
;   core_hero.cpp_CHero_ctor_FUN_004ea830
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592e00
        ;   Label: core_svetlana.cpp_CSvetlana_ctor_FUN_00592e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00592e01
    PUSH EBX                            ; 00592e05
    CALL core_hero.cpp_CHero_ctor_FUN_004ea830 ; 00592e06
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004ea830(CHero * this_ptr)
    ADD ESP,0x4                         ; 00592e0b
    ADD EAX,0x1ffb4                     ; 00592e0e
    PUSH EAX                            ; 00592e13
    CALL core_cloth.cpp_CCloth_ctor_FUN_0043e5c0 ; 00592e14
        ;   XREF to: 0043e5c0 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_0043e5c0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 00592e19
    ADD EAX,0x3ab30                     ; 00592e1c
    PUSH EAX                            ; 00592e21
    CALL core_cloth.cpp_CCloth_ctor_FUN_0043e5c0 ; 00592e22
        ;   XREF to: 0043e5c0 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_0043e5c0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 00592e27
    LEA EBX,[EAX + 0xfffa551c]          ; 00592e2a
    PUSH 0x5f73e9                       ; 00592e30
    MOV dword ptr [EBX + 0x154],0x606414 ; 00592e35
    LEA EAX,[EBX + 0x158]               ; 00592e3f
    MOV dword ptr [EBX + 0x1ffac],0x0   ; 00592e45
    PUSH EAX                            ; 00592e4f
    MOV dword ptr [EBX + 0x1ffb0],0x0   ; 00592e50
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00592e5a
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x95618]             ; 00592e5f
    MOV dword ptr [EBX + 0x95624],0x3f800000 ; 00592e65
    MOV dword ptr [EAX + 0x8],0x0       ; 00592e6f
    ADD ESP,0x8                         ; 00592e76
    MOV EDX,dword ptr [EAX + 0x8]       ; 00592e79
    MOV dword ptr [EAX + 0x4],EDX       ; 00592e7c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00592e7f
    MOV dword ptr [EAX],EDX             ; 00592e82
    MOV EAX,EBX                         ; 00592e84
    POP EBX                             ; 00592e86
    RET                                 ; 00592e87

