; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemnfolk * core_demnfolk_cpp_CDemnfolk_dtor_FUN_0045d0e0(CDemnfolk *this_ptr,uint flags)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemnfolkTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d0e0
        ;   Label: core_demnfolk.cpp_CDemnfolk_dtor_FUN_0045d0e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d0e1
    TEST byte ptr [ESP + 0xc],0x4       ; 0045d0e5
    JNZ 0x0045d13d                      ; 0045d0ea
        ;   XREF to: 0045d13d (CONDITIONAL_JUMP)  ; LAB_0045d13d
    PUSH 0x0                            ; 0045d0ec
    ADD EBX,0x35dc                      ; 0045d0ee
    PUSH EBX                            ; 0045d0f4
    CALL core_armour.cpp_FUN_0040ee30   ; 0045d0f5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0045d0fa
    PUSH 0x0                            ; 0045d0fd
    SUB EAX,0x93c                       ; 0045d0ff
    PUSH EAX                            ; 0045d104
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 0045d105
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045d10a
    PUSH 0x0                            ; 0045d10d
    SUB EAX,0x2b48                      ; 0045d10f
    PUSH EAX                            ; 0045d114
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0045d115
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045d11a
    PUSH 0x1                            ; 0045d11d
    LEA EBX,[EAX + 0xfffffea8]          ; 0045d11f
    PUSH EBX                            ; 0045d125
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0045d126
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045d12b
    MOV DL,byte ptr [ESP + 0xc]         ; 0045d12e
    MOV EBX,EAX                         ; 0045d132
    TEST DL,0x2                         ; 0045d134
    JNZ 0x0045d158                      ; 0045d137
        ;   XREF to: 0045d158 (CONDITIONAL_JUMP)  ; LAB_0045d158
    MOV EAX,EBX                         ; 0045d139
    POP EBX                             ; 0045d13b
    RET                                 ; 0045d13c
    PUSH 0x5fe810                       ; 0045d13d | g_CDemnfolkTypeInfo
        ;   Label: LAB_0045d13d
    PUSH EBX                            ; 0045d142
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0045d143
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0045d148
    PUSH EAX                            ; 0045d14b
    CALL crt_unknown.c_FUN_005c0336     ; 0045d14c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0045d151
    MOV EAX,EBX                         ; 0045d154
    POP EBX                             ; 0045d156
    RET                                 ; 0045d157
    PUSH EAX                            ; 0045d158
        ;   Label: LAB_0045d158
    CALL crt_unknown.c_FUN_005c0344     ; 0045d159
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045d15e
    MOV EAX,EBX                         ; 0045d161
    POP EBX                             ; 0045d163
    RET                                 ; 0045d164

