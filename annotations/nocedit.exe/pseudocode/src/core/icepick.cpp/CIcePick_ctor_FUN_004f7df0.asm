; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CIcePick * core_icepick.cpp_CIcePick_ctor_FUN_004f7df0(CIcePick * this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_icepick.cpp_FUN_004f7db0 at 004f7dca
;
; Referenced Globals:
;   TerminatedCString s_icepick_dfm_0062f5a8
;   CDemonActor_vtable g_CIcePickVTable
;
; Called Functions:
;   core_hero.cpp_CHero_ctor_FUN_004f2340
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7df0
        ;   Label: core_icepick.cpp_CIcePick_ctor_FUN_004f7df0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f7df1
    PUSH EDX                            ; 004f7df5
    CALL core_hero.cpp_CHero_ctor_FUN_004f2340 ; 004f7df6
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004f2340(CHero * this_ptr)
    MOV EBX,EAX                         ; 004f7dfb
    ADD EAX,0x158                       ; 004f7dfd
    ADD ESP,0x4                         ; 004f7e02
    MOV dword ptr [EAX + -0x4],0x660034 ; 004f7e05 | g_CIcePickVTable
    PUSH 0x62f5a8                       ; 004f7e0c | = "icepick.dfm"
    MOV dword ptr [EAX + 0x1fa7c],0x0   ; 004f7e11
    PUSH EAX                            ; 004f7e1b
    MOV dword ptr [EAX + 0x1fa80],0x0   ; 004f7e1c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004f7e26
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1fbe4]             ; 004f7e2b
    MOV dword ptr [EBX + 0x1fbf0],0x3f800000 ; 004f7e31
    MOV dword ptr [EAX + 0x8],0x0       ; 004f7e3b
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f7e42
    MOV dword ptr [EAX + 0x4],EDX       ; 004f7e45
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f7e48
    MOV dword ptr [EAX],EDX             ; 004f7e4b
    MOV dword ptr [EBX + 0x1fbf4],0x0   ; 004f7e4d
    ADD ESP,0x8                         ; 004f7e57
    MOV dword ptr [EBX + 0x1fbf8],0x0   ; 004f7e5a
    MOV EAX,EBX                         ; 004f7e64
    MOV dword ptr [EBX + 0x243c],0x43960000 ; 004f7e66
    POP EBX                             ; 004f7e70
    RET                                 ; 004f7e71

