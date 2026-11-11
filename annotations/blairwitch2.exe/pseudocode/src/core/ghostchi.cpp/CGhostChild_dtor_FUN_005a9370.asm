; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGhostChild * core_ghostchi_cpp_CGhostChild_dtor_FUN_005a9370(CGhostChild *this_ptr,uint flags)
;
; Parameters:
; CGhostChild *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CGhostChild_full_vtable g_CGhostChildVTable
;   WatcomTypeInfo g_CGhostChildTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;   unkaddr_005a7eb0.cpp_CSimpleParticleSystem_stop_FUN_005a8100
;   unkafter_superopt.cpp_CSimpleParticleSystem_release_FUN_005a8220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9370
        ;   Label: core_ghostchi.cpp_CGhostChild_dtor_FUN_005a9370
    PUSH ESI                            ; 005a9371
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a9372
    TEST byte ptr [ESP + 0x10],0x4      ; 005a9376
    JNZ 0x005a9407                      ; 005a937b
        ;   XREF to: 005a9407 (CONDITIONAL_JUMP)  ; LAB_005a9407
    PUSH 0x0                            ; 005a9381
    LEA ESI,[EBX + 0x264]               ; 005a9383
    PUSH ESI                            ; 005a9389
    MOV dword ptr [EBX + 0x2b0],0x6006c4 ; 005a938a | g_CGhostChildVTable
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_stop_FUN_005a8100 ; 005a9394
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_stop_FUN_005a8100(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a9399
    PUSH ESI                            ; 005a939c
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_release_FUN_005a8220 ; 005a939d
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_release_FUN_005a8220(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005a93a2
    PUSH 0x0                            ; 005a93a5
    ADD EBX,0x3a20                      ; 005a93a7
    PUSH EBX                            ; 005a93ad
    CALL core_armour.cpp_FUN_0040f2b0   ; 005a93ae
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a93b3
    PUSH 0x0                            ; 005a93b6
    SUB EAX,0x9c8                       ; 005a93b8
    PUSH EAX                            ; 005a93bd
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 005a93be
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005a93c3
    PUSH 0x0                            ; 005a93c6
    SUB EAX,0x34c                       ; 005a93c8
    PUSH EAX                            ; 005a93cd
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005a93ce
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a93d3
    PUSH 0x0                            ; 005a93d6
    SUB EAX,0x2a58                      ; 005a93d8
    PUSH EAX                            ; 005a93dd
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005a93de
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a93e3
    PUSH 0x1                            ; 005a93e6
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a93e8
    PUSH EBX                            ; 005a93ee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005a93ef
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a93f4
    MOV DL,byte ptr [ESP + 0x10]        ; 005a93f7
    MOV EBX,EAX                         ; 005a93fb
    TEST DL,0x2                         ; 005a93fd
    JNZ 0x005a9423                      ; 005a9400
        ;   XREF to: 005a9423 (CONDITIONAL_JUMP)  ; LAB_005a9423
    MOV EAX,EBX                         ; 005a9402
    POP ESI                             ; 005a9404
    POP EBX                             ; 005a9405
    RET                                 ; 005a9406
    PUSH 0x600850                       ; 005a9407 | g_CGhostChildTypeInfo
        ;   Label: LAB_005a9407
    PUSH EBX                            ; 005a940c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005a940d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a9412
    PUSH EAX                            ; 005a9415
    CALL crt_unknown.c_FUN_005b7fce     ; 005a9416
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005a941b
    MOV EAX,EBX                         ; 005a941e
    POP ESI                             ; 005a9420
    POP EBX                             ; 005a9421
    RET                                 ; 005a9422
    PUSH EAX                            ; 005a9423
        ;   Label: LAB_005a9423
    CALL crt_unknown.c_FUN_005b7fdc     ; 005a9424
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a9429
    MOV EAX,EBX                         ; 005a942c
    POP ESI                             ; 005a942e
    POP EBX                             ; 005a942f
    RET                                 ; 005a9430

