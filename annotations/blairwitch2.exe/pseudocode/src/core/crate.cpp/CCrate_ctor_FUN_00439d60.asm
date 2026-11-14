; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_CCrate_ctor_FUN_00439d60(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crate.cpp_factoryFuncCrate_FUN_00439d30 at 00439d43
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439d60
        ;   Label: core_crate.cpp_CCrate_ctor_FUN_00439d60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439d61
    PUSH EBX                            ; 00439d65
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00439d66
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00439d6b
    ADD EAX,0x2b4                       ; 00439d6e
    PUSH EAX                            ; 00439d73
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00439d74
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00439d79
    LEA EBX,[EAX + 0xfffffd4c]          ; 00439d7c
    PUSH 0x5ce1ba                       ; 00439d82
    LEA EAX,[EBX + 0x2b4]               ; 00439d87
    PUSH EAX                            ; 00439d8d
    MOV dword ptr [EBX + 0x2b0],0x5f4b64 ; 00439d8e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00439d98
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00439d9d
    MOV dword ptr [EBX + 0x438],0x0     ; 00439da0
    MOV EAX,EBX                         ; 00439daa
    MOV dword ptr [EBX + 0x430],0x0     ; 00439dac
    POP EBX                             ; 00439db6
    RET                                 ; 00439db7

