; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDog * core_dog1_cpp_CDog_dtor_FUN_005abd30(CDog *this_ptr,uint flags)
;
; Parameters:
; CDog *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 g_CDogVTable
;   WatcomTypeInfo g_CDogTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_cloth.cpp_FUN_005b1480
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;   unkafter_armour.cpp_FUN_0040f2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abd30
        ;   Label: core_dog1.cpp_CDog_dtor_FUN_005abd30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005abd31
    TEST byte ptr [ESP + 0xc],0x4       ; 005abd35
    JNZ 0x005abda7                      ; 005abd3a
        ;   XREF to: 005abda7 (CONDITIONAL_JUMP)  ; LAB_005abda7
    PUSH 0x0                            ; 005abd3c
    ADD EBX,0x3a20                      ; 005abd3e
    PUSH EBX                            ; 005abd44
    MOV dword ptr [EBX + 0xffffc890],0x600c64 ; 005abd45 | g_CDogVTable
    CALL unkafter_armour.cpp_FUN_0040f2b0 ; 005abd4f
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005abd54
    PUSH 0x0                            ; 005abd57
    SUB EAX,0x9c8                       ; 005abd59
    PUSH EAX                            ; 005abd5e
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 005abd5f
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005abd64
    PUSH 0x0                            ; 005abd67
    SUB EAX,0x34c                       ; 005abd69
    PUSH EAX                            ; 005abd6e
    CALL core_cloth.cpp_FUN_005b1480    ; 005abd6f
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005abd74
    PUSH 0x0                            ; 005abd77
    SUB EAX,0x2a58                      ; 005abd79
    PUSH EAX                            ; 005abd7e
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005abd7f
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005abd84
    PUSH 0x1                            ; 005abd87
    LEA EBX,[EAX + 0xfffffd4c]          ; 005abd89
    PUSH EBX                            ; 005abd8f
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005abd90
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005abd95
    MOV DL,byte ptr [ESP + 0xc]         ; 005abd98
    MOV EBX,EAX                         ; 005abd9c
    TEST DL,0x2                         ; 005abd9e
    JNZ 0x005abdc2                      ; 005abda1
        ;   XREF to: 005abdc2 (CONDITIONAL_JUMP)  ; LAB_005abdc2
    MOV EAX,EBX                         ; 005abda3
    POP EBX                             ; 005abda5
    RET                                 ; 005abda6
    PUSH 0x600df0                       ; 005abda7 | g_CDogTypeInfo
        ;   Label: LAB_005abda7
    PUSH EBX                            ; 005abdac
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005abdad
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005abdb2
    PUSH EAX                            ; 005abdb5
    CALL crt_unknown.c_FUN_005b7fce     ; 005abdb6
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005abdbb
    MOV EAX,EBX                         ; 005abdbe
    POP EBX                             ; 005abdc0
    RET                                 ; 005abdc1
    PUSH EAX                            ; 005abdc2
        ;   Label: LAB_005abdc2
    CALL crt_unknown.c_FUN_005b7fdc     ; 005abdc3
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005abdc8
    MOV EAX,EBX                         ; 005abdcb
    POP EBX                             ; 005abdcd
    RET                                 ; 005abdce

