; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirrorHack * __cdecl core_manpuz_cpp_FUN_004cbb00(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_FUN_004cbad0 at 004cbae3
;
; Referenced Globals:
;   TerminatedCString s_mirrhack_kfm_0058815a
;   CDemonActor_vtable g_CMirrorHackVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbb00
        ;   Label: core_manpuz.cpp_FUN_004cbb00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cbb01
    PUSH EBX                            ; 004cbb05
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 004cbb06
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cbb0b
    ADD EAX,0x150                       ; 004cbb0e
    PUSH EAX                            ; 004cbb13
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004cbb14
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cbb19
    LEA EBX,[EAX + 0xfffffeb0]          ; 004cbb1c
    PUSH 0x58815a                       ; 004cbb22 | = "mirrhack.kfm"
    LEA EAX,[EBX + 0x150]               ; 004cbb27
    PUSH EAX                            ; 004cbb2d
    MOV dword ptr [EBX + 0x14c],0x5a0134 ; 004cbb2e | g_CMirrorHackVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004cbb38
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004cbb3d
    MOV EAX,EBX                         ; 004cbb40
    MOV dword ptr [EBX + 0x2cc],0x0     ; 004cbb42
    POP EBX                             ; 004cbb4c
    RET                                 ; 004cbb4d

