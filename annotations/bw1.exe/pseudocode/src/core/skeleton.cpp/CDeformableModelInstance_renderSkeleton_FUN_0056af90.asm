; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0056af90(CDeformableModelInstance *this_ptr,undefined4 param_2,undefined4 param_3)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_FUN_00564b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056af90
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0056af90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056af91
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056af95
    PUSH ECX                            ; 0056af99
    LEA EAX,[EDX + 0xe80]               ; 0056af9a
    PUSH EAX                            ; 0056afa0
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056afa1
    PUSH EBX                            ; 0056afa5
    PUSH EDX                            ; 0056afa6
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0056afa7
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056afac
    PUSH EAX                            ; 0056afaf
    CALL core_skeleton.cpp_FUN_00564b20 ; 0056afb0
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00564b20()
    ADD ESP,0x10                        ; 0056afb5
    POP EBX                             ; 0056afb8
    RET                                 ; 0056afb9

