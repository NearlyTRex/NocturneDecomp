; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00572520(CTeleportDest *this_ptr,uint flags)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTeleportDestTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572520
        ;   Label: core_teleport.cpp_CTeleportDest_dtor_FUN_00572520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572521
    TEST byte ptr [ESP + 0xc],0x4       ; 00572525
    JNZ 0x00572546                      ; 0057252a
        ;   XREF to: 00572546 (CONDITIONAL_JUMP)  ; LAB_00572546
    PUSH 0x1                            ; 0057252c
    PUSH EBX                            ; 0057252e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0057252f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00572534
    MOV DL,byte ptr [ESP + 0xc]         ; 00572537
    MOV EBX,EAX                         ; 0057253b
    TEST DL,0x2                         ; 0057253d
    JNZ 0x00572561                      ; 00572540
        ;   XREF to: 00572561 (CONDITIONAL_JUMP)  ; LAB_00572561
    MOV EAX,EBX                         ; 00572542
    POP EBX                             ; 00572544
    RET                                 ; 00572545
    PUSH 0x5fcc40                       ; 00572546 | g_CTeleportDestTypeInfo
        ;   Label: LAB_00572546
    PUSH EBX                            ; 0057254b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0057254c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00572551
    PUSH EAX                            ; 00572554
    CALL crt_unknown.c_FUN_005b7fce     ; 00572555
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0057255a
    MOV EAX,EBX                         ; 0057255d
    POP EBX                             ; 0057255f
    RET                                 ; 00572560
    PUSH EAX                            ; 00572561
        ;   Label: LAB_00572561
    CALL crt_unknown.c_FUN_005b7fdc     ; 00572562
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00572567
    MOV EAX,EBX                         ; 0057256a
    POP EBX                             ; 0057256c
    RET                                 ; 0057256d

