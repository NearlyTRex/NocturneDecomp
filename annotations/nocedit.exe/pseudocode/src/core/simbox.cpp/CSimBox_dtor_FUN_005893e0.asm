; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_005893e0(CSimBox *this_ptr,uint d1,uint d2,uint d3)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; Referenced Globals:
;   WatcomTypeInfo g_CSimBoxTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_box.cpp_CBox_dtor_FUN_0041dd00
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005893e0
        ;   Label: core_simbox.cpp_CSimBox_dtor_FUN_005893e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005893e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005893e5
    JNZ 0x0058941d                      ; 005893ea
        ;   XREF to: 0058941d (CONDITIONAL_JUMP)  ; LAB_0058941d
    PUSH 0x0                            ; 005893ec
    ADD EBX,0x358                       ; 005893ee
    PUSH EBX                            ; 005893f4
    CALL core_box.cpp_CBox_dtor_FUN_0041dd00 ; 005893f5
        ;   XREF to: 0041dd00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr)
    ADD ESP,0x8                         ; 005893fa
    PUSH 0x1                            ; 005893fd
    LEA EBX,[EAX + 0xfffffca8]          ; 005893ff
    PUSH EBX                            ; 00589405
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 00589406
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 0058940b
    MOV DL,byte ptr [ESP + 0xc]         ; 0058940e
    MOV EBX,EAX                         ; 00589412
    TEST DL,0x2                         ; 00589414
    JNZ 0x00589438                      ; 00589417
        ;   XREF to: 00589438 (CONDITIONAL_JUMP)  ; LAB_00589438
    MOV EAX,EBX                         ; 00589419
    POP EBX                             ; 0058941b
    RET                                 ; 0058941c
    PUSH 0x662e10                       ; 0058941d | g_CSimBoxTypeInfo
        ;   Label: LAB_0058941d
    PUSH EBX                            ; 00589422
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00589423
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00589428
    PUSH EAX                            ; 0058942b
    CALL crt_memory.c_free_FUN_005fe659 ; 0058942c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00589431
    MOV EAX,EBX                         ; 00589434
    POP EBX                             ; 00589436
    RET                                 ; 00589437
    PUSH EAX                            ; 00589438
        ;   Label: LAB_00589438
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00589439
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0058943e
    MOV EAX,EBX                         ; 00589441
    POP EBX                             ; 00589443
    RET                                 ; 00589444

