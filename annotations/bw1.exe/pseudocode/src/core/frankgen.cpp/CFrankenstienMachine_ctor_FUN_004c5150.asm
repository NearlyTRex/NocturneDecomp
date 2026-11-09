; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004c5150(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004c5120 at 004c5133
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_course.cpp_CCourse_ctor_FUN_00447d10
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5150
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004c5150
    PUSH EAX                            ; 004c5154
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004c5155
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c515a
    ADD EAX,0x184                       ; 004c515d
    PUSH EAX                            ; 004c5162
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004c5163
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c5168
    ADD EAX,0x17c                       ; 004c516b
    PUSH EAX                            ; 004c5170
    CALL core_course.cpp_CCourse_ctor_FUN_00447d10 ; 004c5171
        ;   XREF to: 00447d10 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_ctor_FUN_00447d10(CCourse * this_ptr)
    ADD ESP,0x4                         ; 004c5176
    ADD EAX,0xc                         ; 004c5179
    PUSH EAX                            ; 004c517c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 004c517d
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EAX + 0xfffffe48],0x600c34 ; 004c5182
    MOV dword ptr [EAX + 0xfffffe50],0x0 ; 004c518c
    MOV byte ptr [EAX + 0xfffffe54],0x0 ; 004c5196
    MOV dword ptr [EAX + 0xfffffe74],0x0 ; 004c519d
    ADD ESP,0x4                         ; 004c51a7
    MOV dword ptr [EAX + 0x180],0x0     ; 004c51aa
    SUB EAX,0x30c                       ; 004c51b4
    RET                                 ; 004c51b9

