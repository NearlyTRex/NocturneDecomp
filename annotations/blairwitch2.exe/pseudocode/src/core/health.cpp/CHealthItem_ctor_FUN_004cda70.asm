; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * core_health_cpp_CHealthItem_ctor_FUN_004cda70(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_health.cpp_factoryFuncHealthItem_FUN_004cda40 at 004cda53
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cda70
        ;   Label: core_health.cpp_CHealthItem_ctor_FUN_004cda70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cda71
    PUSH EBX                            ; 004cda75
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004cda76
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cda7b
    ADD EAX,0x2b4                       ; 004cda7e
    PUSH EAX                            ; 004cda83
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004cda84
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cda89
    LEA EBX,[EAX + 0xfffffd4c]          ; 004cda8c
    PUSH 0x5d99b0                       ; 004cda92
    LEA EAX,[EBX + 0x2b4]               ; 004cda97
    PUSH EAX                            ; 004cda9d
    MOV dword ptr [EBX + 0x2b0],0x5f8144 ; 004cda9e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004cdaa8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x430],0x1     ; 004cdaad
    MOV dword ptr [EBX + 0x434],0x42480000 ; 004cdab7
    ADD ESP,0x8                         ; 004cdac1
    MOV dword ptr [EBX + 0xfc],0x0      ; 004cdac4
    MOV EAX,EBX                         ; 004cdace
    MOV dword ptr [EBX + 0x438],0x3e800000 ; 004cdad0
    POP EBX                             ; 004cdada
    RET                                 ; 004cdadb

