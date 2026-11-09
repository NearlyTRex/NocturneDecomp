; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_00576930(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trash.cpp_factoryFuncTrash_FUN_00576900 at 00576913
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576930
        ;   Label: core_trash.cpp_CTrash_ctor_FUN_00576930
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576931
    PUSH EBX                            ; 00576935
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00576936
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057693b
    ADD EAX,0x2b4                       ; 0057693e
    PUSH EAX                            ; 00576943
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00576944
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00576949
    LEA EBX,[EAX + 0xfffffd4c]          ; 0057694c
    PUSH 0x5ecd0d                       ; 00576952
    LEA EAX,[EBX + 0x2b4]               ; 00576957
    PUSH EAX                            ; 0057695d
    MOV dword ptr [EBX + 0x2b0],0x5fd0f4 ; 0057695e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00576968
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0057696d
    MOV EAX,EBX                         ; 00576970
    POP EBX                             ; 00576972
    RET                                 ; 00576973

