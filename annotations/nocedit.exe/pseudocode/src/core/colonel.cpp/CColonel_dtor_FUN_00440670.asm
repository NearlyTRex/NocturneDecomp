; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00440670(CColonel *this_ptr,uint d1,uint d2)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CColonelTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440670
        ;   Label: core_colonel.cpp_CColonel_dtor_FUN_00440670
    MOV EBX,dword ptr [ESP + 0x8]       ; 00440671
    TEST byte ptr [ESP + 0xc],0x4       ; 00440675
    JNZ 0x00440696                      ; 0044067a
        ;   XREF to: 00440696 (CONDITIONAL_JUMP)  ; LAB_00440696
    PUSH 0x1                            ; 0044067c
    PUSH EBX                            ; 0044067e
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 0044067f
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00440684
    MOV DL,byte ptr [ESP + 0xc]         ; 00440687
    MOV EBX,EAX                         ; 0044068b
    TEST DL,0x2                         ; 0044068d
    JNZ 0x004406b1                      ; 00440690
        ;   XREF to: 004406b1 (CONDITIONAL_JUMP)  ; LAB_004406b1
    MOV EAX,EBX                         ; 00440692
    POP EBX                             ; 00440694
    RET                                 ; 00440695
    PUSH 0x65bec0                       ; 00440696 | g_CColonelTypeInfo
        ;   Label: LAB_00440696
    PUSH EBX                            ; 0044069b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0044069c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004406a1
    PUSH EAX                            ; 004406a4
    CALL crt_memory.c_free_FUN_005fe659 ; 004406a5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004406aa
    MOV EAX,EBX                         ; 004406ad
    POP EBX                             ; 004406af
    RET                                 ; 004406b0
    PUSH EAX                            ; 004406b1
        ;   Label: LAB_004406b1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004406b2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004406b7
    MOV EAX,EBX                         ; 004406ba
    POP EBX                             ; 004406bc
    RET                                 ; 004406bd

