; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTeleportDest * core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0(CTeleportDest * this_ptr, uint d1, uint d2)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CTeleportDestTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005daea0
        ;   Label: core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005daea1
    TEST byte ptr [ESP + 0xc],0x4       ; 005daea5
    JNZ 0x005daec6                      ; 005daeaa
        ;   XREF to: 005daec6 (CONDITIONAL_JUMP)  ; LAB_005daec6
    PUSH 0x1                            ; 005daeac
    PUSH EBX                            ; 005daeae
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 005daeaf
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
    ADD ESP,0x8                         ; 005daeb4
    MOV DL,byte ptr [ESP + 0xc]         ; 005daeb7
    MOV EBX,EAX                         ; 005daebb
    TEST DL,0x2                         ; 005daebd
    JNZ 0x005daee1                      ; 005daec0
        ;   XREF to: 005daee1 (CONDITIONAL_JUMP)  ; LAB_005daee1
    MOV EAX,EBX                         ; 005daec2
    POP EBX                             ; 005daec4
    RET                                 ; 005daec5
    PUSH 0x664430                       ; 005daec6 | g_CTeleportDestTypeInfo
        ;   Label: LAB_005daec6
    PUSH EBX                            ; 005daecb
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005daecc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005daed1
    PUSH EAX                            ; 005daed4
    CALL crt_memory.c_free_FUN_005fe659 ; 005daed5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005daeda
    MOV EAX,EBX                         ; 005daedd
    POP EBX                             ; 005daedf
    RET                                 ; 005daee0
    PUSH EAX                            ; 005daee1
        ;   Label: LAB_005daee1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005daee2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005daee7
    MOV EAX,EBX                         ; 005daeea
    POP EBX                             ; 005daeec
    RET                                 ; 005daeed

