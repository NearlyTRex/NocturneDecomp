; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirrorHack * __cdecl core_manpuz_cpp_CMirrorHack_ctor_FUN_004e77b0(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_factoryFuncMirrorHack_FUN_004e7780 at 004e7793
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e77b0
        ;   Label: core_manpuz.cpp_CMirrorHack_ctor_FUN_004e77b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e77b1
    PUSH EBX                            ; 004e77b5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004e77b6
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e77bb
    ADD EAX,0x2b4                       ; 004e77be
    PUSH EAX                            ; 004e77c3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 004e77c4
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e77c9
    LEA EBX,[EAX + 0xfffffd4c]          ; 004e77cc
    PUSH 0x5dc71d                       ; 004e77d2
    LEA EAX,[EBX + 0x2b4]               ; 004e77d7
    PUSH EAX                            ; 004e77dd
    MOV dword ptr [EBX + 0x2b0],0x5f99c4 ; 004e77de
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004e77e8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e77ed
    MOV EAX,EBX                         ; 004e77f0
    MOV dword ptr [EBX + 0x430],0x0     ; 004e77f2
    POP EBX                             ; 004e77fc
    RET                                 ; 004e77fd

