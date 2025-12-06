; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonLight * core_dlight.cpp_CDemonLight_dtor_FUN_00472760(CDemonLight * this_ptr, uint d1, uint d2, uint d3)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_dtor_FUN_004235f0 at 00423605
;
; Referenced Globals:
;   CCameraView_vtable g_CDemonLightVTable
;   WatcomTypeInfo g_CDemonLight
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090
;   core_dlight.cpp_CDemonLight_free_FUN_004728b0
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472760
        ;   Label: core_dlight.cpp_CDemonLight_dtor_FUN_00472760
    MOV EBX,dword ptr [ESP + 0x8]       ; 00472761
    TEST byte ptr [ESP + 0xc],0x4       ; 00472765
    JNZ 0x00472796                      ; 0047276a | LAB_00472796
        ;   XREF to: 00472796 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0047276c
    MOV dword ptr [EBX + 0x3c],0x65c924 ; 0047276d | CCameraView_vtable g_CDemonLightVTable
    CALL core_dlight.cpp_CDemonLight_free_FUN_004728b0 ; 00472774 | void core_dlight.cpp_CDemonLight_free_FUN_004728b0(CDemonLight * this_ptr)
        ;   XREF to: 004728b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00472779
    PUSH 0x1                            ; 0047277c
    PUSH EBX                            ; 0047277e
    CALL core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090 ; 0047277f | CDemonCamera * core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090(CDemonCamera * this_ptr, uint d1, uint d2, uint d3)
        ;   XREF to: 0044c090 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00472784
    MOV DL,byte ptr [ESP + 0xc]         ; 00472787
    MOV EBX,EAX                         ; 0047278b
    TEST DL,0x2                         ; 0047278d
    JNZ 0x004727b1                      ; 00472790 | LAB_004727b1
        ;   XREF to: 004727b1 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00472792
    POP EBX                             ; 00472794
    RET                                 ; 00472795
    PUSH 0x65c940                       ; 00472796 | WatcomTypeInfo g_CDemonLight
        ;   Label: LAB_00472796
    PUSH EBX                            ; 0047279b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0047279c | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004727a1
    PUSH EAX                            ; 004727a4
    CALL crt_memory.c_free_FUN_005fe659 ; 004727a5 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004727aa
    MOV EAX,EBX                         ; 004727ad
    POP EBX                             ; 004727af
    RET                                 ; 004727b0
    PUSH EAX                            ; 004727b1
        ;   Label: LAB_004727b1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004727b2 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004727b7
    MOV EAX,EBX                         ; 004727ba
    POP EBX                             ; 004727bc
    RET                                 ; 004727bd

