; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_00546c90(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trash.cpp_FUN_00546c60 at 00546c73
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_00596932
;   undefined1* PTR_core_trash.cpp_CTrash_setup_FUN_00546ce0_005a3544 = 00546ce0
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546c90
        ;   Label: core_trash.cpp_CTrash_ctor_FUN_00546c90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546c91
    PUSH EBX                            ; 00546c95
    CALL core_actor.cpp_FUN_00409d30    ; 00546c96
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 00546c9b
    ADD EAX,0x150                       ; 00546c9e
    PUSH EAX                            ; 00546ca3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00546ca4
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00546ca9
    LEA EBX,[EAX + 0xfffffeb0]          ; 00546cac
    PUSH 0x596932                       ; 00546cb2 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 00546cb7
    PUSH EAX                            ; 00546cbd
    MOV dword ptr [EBX + 0x14c],0x5a3544 ; 00546cbe | PTR_core_trash.cpp_CTrash_setup_FUN_00546ce0_005a3544
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00546cc8
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00546ccd
    MOV EAX,EBX                         ; 00546cd0
    POP EBX                             ; 00546cd2
    RET                                 ; 00546cd3

