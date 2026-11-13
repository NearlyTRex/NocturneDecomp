; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040f330(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040f300 at 0040f313
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f330
        ;   Label: core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f331
    PUSH EBX                            ; 0040f335
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 0040f336
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f33b
    ADD EAX,0x2b8                       ; 0040f33e
    PUSH EAX                            ; 0040f343
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0040f344
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f349
    LEA EBX,[EAX + 0xfffffd48]          ; 0040f34c
    PUSH 0x5cb3c1                       ; 0040f352
    LEA EAX,[EBX + 0x2b8]               ; 0040f357
    PUSH EAX                            ; 0040f35d
    MOV dword ptr [EBX + 0x2b0],0x5f2864 ; 0040f35e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0040f368
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x434],0x0     ; 0040f36d
    ADD ESP,0x8                         ; 0040f377
    MOV dword ptr [EBX + 0x438],0x0     ; 0040f37a
    MOV EAX,EBX                         ; 0040f384
    MOV dword ptr [EBX + 0x2b4],0x1     ; 0040f386
    POP EBX                             ; 0040f390
    RET                                 ; 0040f391

