; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_dtor_FUN_00572110(CBassPlayer *this_ptr,uint flags)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBassPlayerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_path.cpp_CPathMap_dtor_FUN_00511d10
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572110
        ;   Label: core_tbplayer.cpp_CBassPlayer_dtor_FUN_00572110
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572111
    TEST byte ptr [ESP + 0xc],0x4       ; 00572115
    JNZ 0x0057218d                      ; 0057211a
        ;   XREF to: 0057218d (CONDITIONAL_JUMP)  ; LAB_0057218d
    PUSH 0x0                            ; 0057211c
    ADD EBX,0x10a60                     ; 0057211e
    PUSH EBX                            ; 00572124
    CALL core_path.cpp_CPathMap_dtor_FUN_00511d10 ; 00572125
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00511d10(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057212a
    PUSH 0x0                            ; 0057212d
    SUB EAX,0xd040                      ; 0057212f
    PUSH EAX                            ; 00572134
    CALL core_armour.cpp_FUN_0040f2b0   ; 00572135
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0057213a
    PUSH 0x0                            ; 0057213d
    SUB EAX,0x9c8                       ; 0057213f
    PUSH EAX                            ; 00572144
    CALL core_muzzle.cpp_FUN_0059df70   ; 00572145
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0057214a
    PUSH 0x0                            ; 0057214d
    SUB EAX,0x34c                       ; 0057214f
    PUSH EAX                            ; 00572154
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00572155
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057215a
    PUSH 0x0                            ; 0057215d
    SUB EAX,0x2a58                      ; 0057215f
    PUSH EAX                            ; 00572164
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00572165
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057216a
    PUSH 0x1                            ; 0057216d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0057216f
    PUSH EBX                            ; 00572175
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00572176
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057217b
    MOV DL,byte ptr [ESP + 0xc]         ; 0057217e
    MOV EBX,EAX                         ; 00572182
    TEST DL,0x2                         ; 00572184
    JNZ 0x005721a8                      ; 00572187
        ;   XREF to: 005721a8 (CONDITIONAL_JUMP)  ; LAB_005721a8
    MOV EAX,EBX                         ; 00572189
    POP EBX                             ; 0057218b
    RET                                 ; 0057218c
    PUSH 0x5fca00                       ; 0057218d | g_CBassPlayerTypeInfo
        ;   Label: LAB_0057218d
    PUSH EBX                            ; 00572192
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00572193
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00572198
    PUSH EAX                            ; 0057219b
    CALL crt_unknown.c_FUN_005b7fce     ; 0057219c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005721a1
    MOV EAX,EBX                         ; 005721a4
    POP EBX                             ; 005721a6
    RET                                 ; 005721a7
    PUSH EAX                            ; 005721a8
        ;   Label: LAB_005721a8
    CALL crt_unknown.c_FUN_005b7fdc     ; 005721a9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005721ae
    MOV EAX,EBX                         ; 005721b1
    POP EBX                             ; 005721b3
    RET                                 ; 005721b4

