; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_005724d0(CTeleport *this_ptr,uint flags)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTeleportTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005724d0
        ;   Label: core_teleport.cpp_CTeleport_dtor_FUN_005724d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005724d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005724d5
    JNZ 0x005724f6                      ; 005724da
        ;   XREF to: 005724f6 (CONDITIONAL_JUMP)  ; LAB_005724f6
    PUSH 0x1                            ; 005724dc
    PUSH EBX                            ; 005724de
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005724df
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005724e4
    MOV DL,byte ptr [ESP + 0xc]         ; 005724e7
    MOV EBX,EAX                         ; 005724eb
    TEST DL,0x2                         ; 005724ed
    JNZ 0x00572511                      ; 005724f0
        ;   XREF to: 00572511 (CONDITIONAL_JUMP)  ; LAB_00572511
    MOV EAX,EBX                         ; 005724f2
    POP EBX                             ; 005724f4
    RET                                 ; 005724f5
    PUSH 0x5fcc20                       ; 005724f6 | g_CTeleportTypeInfo
        ;   Label: LAB_005724f6
    PUSH EBX                            ; 005724fb
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005724fc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00572501
    PUSH EAX                            ; 00572504
    CALL crt_unknown.c_FUN_005b7fce     ; 00572505
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0057250a
    MOV EAX,EBX                         ; 0057250d
    POP EBX                             ; 0057250f
    RET                                 ; 00572510
    PUSH EAX                            ; 00572511
        ;   Label: LAB_00572511
    CALL crt_unknown.c_FUN_005b7fdc     ; 00572512
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00572517
    MOV EAX,EBX                         ; 0057251a
    POP EBX                             ; 0057251c
    RET                                 ; 0057251d

