; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CIcePick * core_icepick.cpp_FUN_004f97e0(CIcePick * this_ptr, uint d1, uint d2)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CIcePickTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f97e0
        ;   Label: core_icepick.cpp_FUN_004f97e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f97e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004f97e5
    JNZ 0x004f9806                      ; 004f97ea
        ;   XREF to: 004f9806 (CONDITIONAL_JUMP)  ; LAB_004f9806
    PUSH 0x1                            ; 004f97ec
    PUSH EBX                            ; 004f97ee
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 004f97ef
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004f97f4
    MOV DL,byte ptr [ESP + 0xc]         ; 004f97f7
    MOV EBX,EAX                         ; 004f97fb
    TEST DL,0x2                         ; 004f97fd
    JNZ 0x004f9821                      ; 004f9800
        ;   XREF to: 004f9821 (CONDITIONAL_JUMP)  ; LAB_004f9821
    MOV EAX,EBX                         ; 004f9802
    POP EBX                             ; 004f9804
    RET                                 ; 004f9805
    PUSH 0x6601a0                       ; 004f9806 | g_CIcePickTypeInfo
        ;   Label: LAB_004f9806
    PUSH EBX                            ; 004f980b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004f980c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f9811
    PUSH EAX                            ; 004f9814
    CALL crt_memory.c_free_FUN_005fe659 ; 004f9815
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004f981a
    MOV EAX,EBX                         ; 004f981d
    POP EBX                             ; 004f981f
    RET                                 ; 004f9820
    PUSH EAX                            ; 004f9821
        ;   Label: LAB_004f9821
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004f9822
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004f9827
    MOV EAX,EBX                         ; 004f982a
    POP EBX                             ; 004f982c
    RET                                 ; 004f982d

