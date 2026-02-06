; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_dtor_FUN_005f2220(CWerewolf *this_ptr,uint flags)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWerewolfTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_armour.cpp_freeFires_FUN_00412700
;   core_armour.cpp_freeFlames_FUN_00412720
;   core_armour.cpp_freeVectors_FUN_004126e0
;   core_cloth.cpp_CClothList_dtor_FUN_0043bf80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2220
        ;   Label: core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220
    MOV EBX,dword ptr [ESP + 0x8]       ; 005f2221
    TEST byte ptr [ESP + 0xc],0x4       ; 005f2225
    JNZ 0x005f22b1                      ; 005f222a
        ;   XREF to: 005f22b1 (CONDITIONAL_JUMP)  ; LAB_005f22b1
    PUSH 0x0                            ; 005f2230
    ADD EBX,0x33cc                      ; 005f2232
    PUSH EBX                            ; 005f2238
    CALL core_armour.cpp_freeFlames_FUN_00412720 ; 005f2239
        ;   XREF to: 00412720 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_freeFlames_FUN_00412720(CFlame * objs)
    ADD ESP,0x8                         ; 005f223e
    PUSH 0x0                            ; 005f2241
    SUB EAX,0x4b0                       ; 005f2243
    PUSH EAX                            ; 005f2248
    CALL core_armour.cpp_freeFires_FUN_00412700 ; 005f2249
        ;   XREF to: 00412700 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_freeFires_FUN_00412700(SFire * objs)
    ADD ESP,0x8                         ; 005f224e
    PUSH 0x0                            ; 005f2251
    SUB EAX,0x20c                       ; 005f2253
    PUSH EAX                            ; 005f2258
    CALL core_armour.cpp_freeVectors_FUN_004126e0 ; 005f2259
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_freeVectors_FUN_004126e0(CVector3f * objs)
    ADD ESP,0x8                         ; 005f225e
    PUSH 0x0                            ; 005f2261
    SUB EAX,0xb4                        ; 005f2263
    PUSH EAX                            ; 005f2268
    CALL core_armour.cpp_freeVectors_FUN_004126e0 ; 005f2269
        ;   XREF to: 004126e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_freeVectors_FUN_004126e0(CVector3f * objs)
    ADD ESP,0x8                         ; 005f226e
    PUSH 0x0                            ; 005f2271
    SUB EAX,0x1c8                       ; 005f2273
    PUSH EAX                            ; 005f2278
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043bf80 ; 005f2279
        ;   XREF to: 0043bf80 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043bf80(CClothList * this_ptr)
    ADD ESP,0x8                         ; 005f227e
    PUSH 0x0                            ; 005f2281
    SUB EAX,0x293c                      ; 005f2283
    PUSH EAX                            ; 005f2288
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 ; 005f2289
        ;   XREF to: 0059de40 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005f228e
    PUSH 0x1                            ; 005f2291
    LEA EBX,[EAX + 0xfffffea8]          ; 005f2293
    PUSH EBX                            ; 005f2299
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005f229a
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005f229f
    MOV DL,byte ptr [ESP + 0xc]         ; 005f22a2
    MOV EBX,EAX                         ; 005f22a6
    TEST DL,0x2                         ; 005f22a8
    JNZ 0x005f22cc                      ; 005f22ab
        ;   XREF to: 005f22cc (CONDITIONAL_JUMP)  ; LAB_005f22cc
    MOV EAX,EBX                         ; 005f22ad
    POP EBX                             ; 005f22af
    RET                                 ; 005f22b0
    PUSH 0x6658f0                       ; 005f22b1 | g_CWerewolfTypeInfo
        ;   Label: LAB_005f22b1
    PUSH EBX                            ; 005f22b6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005f22b7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005f22bc
    PUSH EAX                            ; 005f22bf
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005f22c0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005f22c5
    MOV EAX,EBX                         ; 005f22c8
    POP EBX                             ; 005f22ca
    RET                                 ; 005f22cb
    PUSH EAX                            ; 005f22cc
        ;   Label: LAB_005f22cc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005f22cd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005f22d2
    MOV EAX,EBX                         ; 005f22d5
    POP EBX                             ; 005f22d7
    RET                                 ; 005f22d8

