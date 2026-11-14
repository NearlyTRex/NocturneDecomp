; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_CTVBat_dtor_FUN_005761a0(CTVBat *this_ptr,uint flags)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTVBatTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005761a0
        ;   Label: core_tvbat.cpp_CTVBat_dtor_FUN_005761a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005761a1
    TEST byte ptr [ESP + 0xc],0x4       ; 005761a5
    JNZ 0x005761fd                      ; 005761aa
        ;   XREF to: 005761fd (CONDITIONAL_JUMP)  ; LAB_005761fd
    PUSH 0x0                            ; 005761ac
    ADD EBX,0x385c                      ; 005761ae
    PUSH EBX                            ; 005761b4
    CALL core_armour.cpp_FUN_00410370   ; 005761b5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 005761ba
    PUSH 0x0                            ; 005761bd
    SUB EAX,0x954                       ; 005761bf
    PUSH EAX                            ; 005761c4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 005761c5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005761ca
    PUSH 0x0                            ; 005761cd
    SUB EAX,0x2db0                      ; 005761cf
    PUSH EAX                            ; 005761d4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 005761d5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005761da
    PUSH 0x1                            ; 005761dd
    LEA EBX,[EAX + 0xfffffea8]          ; 005761df
    PUSH EBX                            ; 005761e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 005761e6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005761eb
    MOV DL,byte ptr [ESP + 0xc]         ; 005761ee
    MOV EBX,EAX                         ; 005761f2
    TEST DL,0x2                         ; 005761f4
    JNZ 0x00576218                      ; 005761f7
        ;   XREF to: 00576218 (CONDITIONAL_JUMP)  ; LAB_00576218
    MOV EAX,EBX                         ; 005761f9
    POP EBX                             ; 005761fb
    RET                                 ; 005761fc
    PUSH 0x5e5d20                       ; 005761fd | g_CTVBatTypeInfo
        ;   Label: LAB_005761fd
    PUSH EBX                            ; 00576202
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00576203
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00576208
    PUSH EAX                            ; 0057620b
    CALL crt_unknown.c_FUN_005a30b6     ; 0057620c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00576211
    MOV EAX,EBX                         ; 00576214
    POP EBX                             ; 00576216
    RET                                 ; 00576217
    PUSH EAX                            ; 00576218
        ;   Label: LAB_00576218
    CALL crt_unknown.c_FUN_005a30c4     ; 00576219
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0057621e
    MOV EAX,EBX                         ; 00576221
    POP EBX                             ; 00576223
    RET                                 ; 00576224

