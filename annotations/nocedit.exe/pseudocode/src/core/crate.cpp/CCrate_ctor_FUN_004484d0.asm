; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_004484d0(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crate.cpp_factoryFuncCrate_FUN_00448490 at 004484aa
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_00619af3
;   CDemonActor_vtable g_CCrateVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004484d0
        ;   Label: core_crate.cpp_CCrate_ctor_FUN_004484d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004484d1
    PUSH EBX                            ; 004484d5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004484d6
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004484db
    ADD EAX,0x158                       ; 004484de
    PUSH EAX                            ; 004484e3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004484e4
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004484e9
    LEA EBX,[EAX + 0xfffffea8]          ; 004484ec
    PUSH 0x619af3                       ; 004484f2 | = "question.kfm"
    LEA EAX,[EBX + 0x158]               ; 004484f7
    PUSH EAX                            ; 004484fd
    MOV dword ptr [EBX + 0x154],0x65c264 ; 004484fe | g_CCrateVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00448508
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0044850d
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00448510
    MOV EAX,EBX                         ; 0044851a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0044851c
    POP EBX                             ; 00448526
    RET                                 ; 00448527

