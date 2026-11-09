; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_00576450(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trap.cpp_factoryFuncTrap_FUN_00576420 at 00576433
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576450
        ;   Label: core_trap.cpp_CTrap_ctor_FUN_00576450
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576451
    PUSH EBX                            ; 00576455
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00576456
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057645b
    ADD EAX,0x2b4                       ; 0057645e
    PUSH EAX                            ; 00576463
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00576464
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00576469
    LEA EBX,[EAX + 0xfffffd4c]          ; 0057646c
    PUSH 0x5eccde                       ; 00576472
    LEA EAX,[EBX + 0x2b4]               ; 00576477
    PUSH EAX                            ; 0057647d
    MOV dword ptr [EBX + 0x2b0],0x5fcfc4 ; 0057647e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00576488
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0057648d
    MOV EAX,EBX                         ; 00576490
    MOV dword ptr [EBX + 0x434],0x0     ; 00576492
    POP EBX                             ; 0057649c
    RET                                 ; 0057649d

