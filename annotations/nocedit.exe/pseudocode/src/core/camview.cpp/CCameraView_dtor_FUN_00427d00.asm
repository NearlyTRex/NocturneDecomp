; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCameraView * core_camview.cpp_CCameraView_dtor_FUN_00427d00(CCameraView * this_ptr, uint d1)
;
; Parameters:
; CCameraView *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090 at 0044c0af
;
; Referenced Globals:
;   CCameraView_vtable g_CCameraViewVTable
;   WatcomTypeInfo g_CCameraViewTypeInfo
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427d00
        ;   Label: core_camview.cpp_CCameraView_dtor_FUN_00427d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00427d01
    MOV EAX,dword ptr [ESP + 0xc]       ; 00427d05
    TEST AL,0x4                         ; 00427d09
    JNZ 0x00427d21                      ; 00427d0b | LAB_00427d21
        ;   XREF to: 00427d21 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x3c],0x65b7d4 ; 00427d0d | CCameraView_vtable g_CCameraViewVTable
    TEST AL,0x2                         ; 00427d14
    JNZ 0x00427d3c                      ; 00427d16 | LAB_00427d3c
        ;   XREF to: 00427d3c (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00427d18
    POP EBX                             ; 00427d1a
    LEA EAX,[EAX]                       ; 00427d1b
    MOV ECX,ECX                         ; 00427d1e
    PUSH 0x65b7f0                       ; 00427d21 | WatcomTypeInfo g_CCameraViewTypeInfo
        ;   Label: LAB_00427d21
    PUSH EBX                            ; 00427d26
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00427d27 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00427d2c
    PUSH EAX                            ; 00427d2f
    CALL crt_memory.c_free_FUN_005fe659 ; 00427d30 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00427d35
    MOV EAX,EBX                         ; 00427d38
    POP EBX                             ; 00427d3a
    RET                                 ; 00427d3b
    PUSH EBX                            ; 00427d3c
        ;   Label: LAB_00427d3c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00427d3d | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00427d42
    MOV EAX,EBX                         ; 00427d45
    POP EBX                             ; 00427d47
    RET                                 ; 00427d48

