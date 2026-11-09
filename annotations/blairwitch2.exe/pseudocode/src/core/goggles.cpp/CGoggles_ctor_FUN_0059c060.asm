; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGoggles * core_goggles_cpp_CGoggles_ctor_FUN_0059c060(CGoggles *this_ptr)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_goggles.cpp_factoryFuncGoggles_FUN_0059c030 at 0059c043
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c060
        ;   Label: core_goggles.cpp_CGoggles_ctor_FUN_0059c060
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c061
    PUSH EBX                            ; 0059c065
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 0059c066
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059c06b
    ADD EAX,0x2b4                       ; 0059c06e
    PUSH EAX                            ; 0059c073
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0059c074
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059c079
    LEA EBX,[EAX + 0xfffffd4c]          ; 0059c07c
    PUSH 0x5ef5b1                       ; 0059c082
    LEA EAX,[EBX + 0x2b4]               ; 0059c087
    PUSH EAX                            ; 0059c08d
    MOV dword ptr [EBX + 0x2b0],0x5fe634 ; 0059c08e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0059c098
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0059c09d
    MOV EAX,EBX                         ; 0059c0a0
    MOV dword ptr [EBX + 0x430],0x0     ; 0059c0a2
    POP EBX                             ; 0059c0ac
    RET                                 ; 0059c0ad

