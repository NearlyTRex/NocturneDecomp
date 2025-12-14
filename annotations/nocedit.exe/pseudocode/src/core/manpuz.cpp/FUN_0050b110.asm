; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMirrorHack * core_manpuz.cpp_FUN_0050b110(CMirrorHack * this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_FUN_0050b0d0 at 0050b0ed
;
; Referenced Globals:
;   TerminatedCString s_mirrhack_kfm_00635918
;   CDemonActor_vtable PTR_core_manpuz.cpp_FUN_00660e94
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b110
        ;   Label: core_manpuz.cpp_FUN_0050b110
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050b111
    PUSH EBX                            ; 0050b115
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 0050b116
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050b11b
    ADD EAX,0x158                       ; 0050b11e
    PUSH EAX                            ; 0050b123
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 0050b124
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050b129
    LEA EBX,[EAX + 0xfffffea8]          ; 0050b12c
    PUSH 0x635918                       ; 0050b132 | = "mirrhack.kfm"
    LEA EAX,[EBX + 0x158]               ; 0050b137
    PUSH EAX                            ; 0050b13d
    MOV dword ptr [EBX + 0x154],0x660e94 ; 0050b13e | PTR_core_manpuz.cpp_FUN_00660e94
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0050b148
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0050b14d
    MOV EAX,EBX                         ; 0050b150
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0050b152
    POP EBX                             ; 0050b15c
    RET                                 ; 0050b15d

