; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CImp * core_imp_cpp_CImp_dtor_FUN_004d81f0(CImp *this_ptr,uint flags)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CImpTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d81f0
        ;   Label: core_imp.cpp_CImp_dtor_FUN_004d81f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d81f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d81f5
    JNZ 0x004d824d                      ; 004d81fa
        ;   XREF to: 004d824d (CONDITIONAL_JUMP)  ; LAB_004d824d
    PUSH 0x0                            ; 004d81fc
    ADD EBX,0x385c                      ; 004d81fe
    PUSH EBX                            ; 004d8204
    CALL unkafter_armour.cpp_FUN_00410370 ; 004d8205
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 004d820a
    PUSH 0x0                            ; 004d820d
    SUB EAX,0x954                       ; 004d820f
    PUSH EAX                            ; 004d8214
    CALL core_cloth.cpp_FUN_0043f900    ; 004d8215
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d821a
    PUSH 0x0                            ; 004d821d
    SUB EAX,0x2db0                      ; 004d821f
    PUSH EAX                            ; 004d8224
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 004d8225
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d822a
    PUSH 0x1                            ; 004d822d
    LEA EBX,[EAX + 0xfffffea8]          ; 004d822f
    PUSH EBX                            ; 004d8235
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004d8236
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d823b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d823e
    MOV EBX,EAX                         ; 004d8242
    TEST DL,0x2                         ; 004d8244
    JNZ 0x004d8268                      ; 004d8247
        ;   XREF to: 004d8268 (CONDITIONAL_JUMP)  ; LAB_004d8268
    MOV EAX,EBX                         ; 004d8249
    POP EBX                             ; 004d824b
    RET                                 ; 004d824c
    PUSH 0x5e2050                       ; 004d824d | g_CImpTypeInfo
        ;   Label: LAB_004d824d
    PUSH EBX                            ; 004d8252
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d8253
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004d8258
    PUSH EAX                            ; 004d825b
    CALL crt_unknown.c_FUN_005a30b6     ; 004d825c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d8261
    MOV EAX,EBX                         ; 004d8264
    POP EBX                             ; 004d8266
    RET                                 ; 004d8267
    PUSH EAX                            ; 004d8268
        ;   Label: LAB_004d8268
    CALL crt_unknown.c_FUN_005a30c4     ; 004d8269
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d826e
    MOV EAX,EBX                         ; 004d8271
    POP EBX                             ; 004d8273
    RET                                 ; 004d8274

