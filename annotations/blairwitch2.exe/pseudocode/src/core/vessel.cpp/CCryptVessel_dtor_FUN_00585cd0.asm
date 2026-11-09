; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_dtor_FUN_00585cd0(CCryptVessel *this_ptr,uint flags)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCryptVesselTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585cd0
        ;   Label: core_vessel.cpp_CCryptVessel_dtor_FUN_00585cd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00585cd1
    TEST byte ptr [ESP + 0xc],0x4       ; 00585cd5
    JNZ 0x00585d0d                      ; 00585cda
        ;   XREF to: 00585d0d (CONDITIONAL_JUMP)  ; LAB_00585d0d
    PUSH 0x1                            ; 00585cdc
    ADD EBX,0x520                       ; 00585cde
    PUSH EBX                            ; 00585ce4
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00585ce5
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00585cea
    PUSH 0x1                            ; 00585ced
    LEA EBX,[EAX + 0xfffffae0]          ; 00585cef
    PUSH EBX                            ; 00585cf5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00585cf6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00585cfb
    MOV DL,byte ptr [ESP + 0xc]         ; 00585cfe
    MOV EBX,EAX                         ; 00585d02
    TEST DL,0x2                         ; 00585d04
    JNZ 0x00585d28                      ; 00585d07
        ;   XREF to: 00585d28 (CONDITIONAL_JUMP)  ; LAB_00585d28
    MOV EAX,EBX                         ; 00585d09
    POP EBX                             ; 00585d0b
    RET                                 ; 00585d0c
    PUSH 0x5fdc30                       ; 00585d0d | g_CCryptVesselTypeInfo
        ;   Label: LAB_00585d0d
    PUSH EBX                            ; 00585d12
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00585d13
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00585d18
    PUSH EAX                            ; 00585d1b
    CALL crt_unknown.c_FUN_005b7fce     ; 00585d1c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00585d21
    MOV EAX,EBX                         ; 00585d24
    POP EBX                             ; 00585d26
    RET                                 ; 00585d27
    PUSH EAX                            ; 00585d28
        ;   Label: LAB_00585d28
    CALL crt_unknown.c_FUN_005b7fdc     ; 00585d29
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00585d2e
    MOV EAX,EBX                         ; 00585d31
    POP EBX                             ; 00585d33
    RET                                 ; 00585d34

