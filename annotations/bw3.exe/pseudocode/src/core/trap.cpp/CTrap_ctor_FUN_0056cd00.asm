; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_0056cd00(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cd00
        ;   Label: core_trap.cpp_CTrap_ctor_FUN_0056cd00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056cd01
    PUSH EBX                            ; 0056cd05
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0056cd06
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056cd0b
    ADD EAX,0x158                       ; 0056cd0e
    PUSH EAX                            ; 0056cd13
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0056cd14
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056cd19
    LEA EBX,[EAX + 0xfffffea8]          ; 0056cd1c
    PUSH 0x5d6567                       ; 0056cd22
    LEA EAX,[EBX + 0x158]               ; 0056cd27
    PUSH EAX                            ; 0056cd2d
    MOV dword ptr [EBX + 0x154],0x5e5694 ; 0056cd2e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0056cd38
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0056cd3d
    MOV EAX,EBX                         ; 0056cd40
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0056cd42
    POP EBX                             ; 0056cd4c
    RET                                 ; 0056cd4d

