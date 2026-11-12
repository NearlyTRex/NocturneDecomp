; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBird * core_bird_cpp_CBird_dtor_FUN_004101f0(CBird *this_ptr,uint flags)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBirdTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_path.cpp_CPathMap_dtor_FUN_0050ad40
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004101f0
        ;   Label: core_bird.cpp_CBird_dtor_FUN_004101f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004101f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004101f5
    JNZ 0x0041025d                      ; 004101fa
        ;   XREF to: 0041025d (CONDITIONAL_JUMP)  ; LAB_0041025d
    PUSH 0x0                            ; 004101fc
    ADD EBX,0xcdcc                      ; 004101fe
    PUSH EBX                            ; 00410204
    CALL core_path.cpp_CPathMap_dtor_FUN_0050ad40 ; 00410205
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_0050ad40(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041020a
    PUSH 0x0                            ; 0041020d
    SUB EAX,0x9570                      ; 0041020f
    PUSH EAX                            ; 00410214
    CALL core_armour.cpp_FUN_00410370   ; 00410215
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0041021a
    PUSH 0x0                            ; 0041021d
    SUB EAX,0x954                       ; 0041021f
    PUSH EAX                            ; 00410224
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00410225
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041022a
    PUSH 0x0                            ; 0041022d
    SUB EAX,0x2db0                      ; 0041022f
    PUSH EAX                            ; 00410234
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00410235
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041023a
    PUSH 0x1                            ; 0041023d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041023f
    PUSH EBX                            ; 00410245
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00410246
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041024b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041024e
    MOV EBX,EAX                         ; 00410252
    TEST DL,0x2                         ; 00410254
    JNZ 0x00410278                      ; 00410257
        ;   XREF to: 00410278 (CONDITIONAL_JUMP)  ; LAB_00410278
    MOV EAX,EBX                         ; 00410259
    POP EBX                             ; 0041025b
    RET                                 ; 0041025c
    PUSH 0x5dbc60                       ; 0041025d | g_CBirdTypeInfo
        ;   Label: LAB_0041025d
    PUSH EBX                            ; 00410262
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00410263
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00410268
    PUSH EAX                            ; 0041026b
    CALL crt_unknown.c_FUN_005a30b6     ; 0041026c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00410271
    MOV EAX,EBX                         ; 00410274
    POP EBX                             ; 00410276
    RET                                 ; 00410277
    PUSH EAX                            ; 00410278
        ;   Label: LAB_00410278
    CALL crt_unknown.c_FUN_005a30c4     ; 00410279
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0041027e
    MOV EAX,EBX                         ; 00410281
    POP EBX                             ; 00410283
    RET                                 ; 00410284

