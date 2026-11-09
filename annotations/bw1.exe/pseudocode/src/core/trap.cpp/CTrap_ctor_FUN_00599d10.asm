; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_00599d10(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_trap.cpp_factoryFuncTrap_FUN_00599ce0 at 00599cf3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599d10
        ;   Label: core_trap.cpp_CTrap_ctor_FUN_00599d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599d11
    PUSH EBX                            ; 00599d15
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00599d16
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00599d1b
    ADD EAX,0x158                       ; 00599d1e
    PUSH EAX                            ; 00599d23
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00599d24
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00599d29
    LEA EBX,[EAX + 0xfffffea8]          ; 00599d2c
    PUSH 0x5f7ff8                       ; 00599d32
    LEA EAX,[EBX + 0x158]               ; 00599d37
    PUSH EAX                            ; 00599d3d
    MOV dword ptr [EBX + 0x154],0x606f94 ; 00599d3e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00599d48
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00599d4d
    MOV EAX,EBX                         ; 00599d50
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00599d52
    POP EBX                             ; 00599d5c
    RET                                 ; 00599d5d

