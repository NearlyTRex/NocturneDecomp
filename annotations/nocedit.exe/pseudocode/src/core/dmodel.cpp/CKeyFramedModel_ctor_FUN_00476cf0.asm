; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_cloth.cpp_FUN_00438ba0 at 00438ba5
;   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 at 0047eecd
;   core_level.cpp_staticInit_FUN_00503d80 at 00503d92
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005077c2
;   core_moon.cpp_CMoon_ctor_FUN_00529a80 at 00529a88
;   core_moon.cpp_staticInit_FUN_005299f0 at 00529a65
;   core_set.cpp_staticInit_FUN_00569040 at 00569093
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00596cd3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00476cf0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
    MOV dword ptr [EAX + 0x104],0x0     ; 00476cf4
    MOV dword ptr [EAX + 0x10c],0x0     ; 00476cfe
    MOV dword ptr [EAX + 0x108],0x0     ; 00476d08
    MOV dword ptr [EAX + 0x110],0x0     ; 00476d12
    MOV dword ptr [EAX + 0x114],0x0     ; 00476d1c
    MOV dword ptr [EAX + 0x118],0x0     ; 00476d26
    MOV dword ptr [EAX + 0x11c],0x0     ; 00476d30
    MOV dword ptr [EAX + 0x120],0x0     ; 00476d3a
    MOV dword ptr [EAX + 0x5584],0x0    ; 00476d44
    MOV dword ptr [EAX + 0x5690],0x0    ; 00476d4e
    MOV dword ptr [EAX + 0x100],0x0     ; 00476d58
    MOV dword ptr [EAX + 0x5694],0x0    ; 00476d62
    MOV dword ptr [EAX + 0x5698],0x0    ; 00476d6c
    MOV dword ptr [EAX + 0x569c],0x0    ; 00476d76
    MOV dword ptr [EAX + 0x56a0],0x0    ; 00476d80
    MOV byte ptr [EAX],0x0              ; 00476d8a
    RET                                 ; 00476d8d

