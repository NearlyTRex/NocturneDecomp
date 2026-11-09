; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004ac1a0(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004ac170 at 004ac183
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_course.cpp_CCourse_ctor_FUN_00438a50
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ac1a0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004ac1a0
    PUSH EAX                            ; 004ac1a4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004ac1a5
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ac1aa
    ADD EAX,0x2e0                       ; 004ac1ad
    PUSH EAX                            ; 004ac1b2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004ac1b3
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ac1b8
    ADD EAX,0x17c                       ; 004ac1bb
    PUSH EAX                            ; 004ac1c0
    CALL core_course.cpp_CCourse_ctor_FUN_00438a50 ; 004ac1c1
        ;   XREF to: 00438a50 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00438a50(CCourse * this_ptr)
    ADD ESP,0x4                         ; 004ac1c6
    ADD EAX,0xc                         ; 004ac1c9
    PUSH EAX                            ; 004ac1cc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004ac1cd
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EAX + 0xfffffe48],0x5f7204 ; 004ac1d2
    MOV dword ptr [EAX + 0xfffffe50],0x0 ; 004ac1dc
    MOV byte ptr [EAX + 0xfffffe54],0x0 ; 004ac1e6
    MOV dword ptr [EAX + 0xfffffe74],0x0 ; 004ac1ed
    ADD ESP,0x4                         ; 004ac1f7
    MOV dword ptr [EAX + 0x180],0x0     ; 004ac1fa
    SUB EAX,0x468                       ; 004ac204
    RET                                 ; 004ac209

