; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0046ef30(CDynamite *this_ptr,uint flags)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDynamiteTypeInfo_0059ca20
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ef30
        ;   Label: core_dynamite.cpp_CDynamite_dtor_FUN_0046ef30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046ef31
    TEST byte ptr [ESP + 0xc],0x4       ; 0046ef35
    JNZ 0x0046ef56                      ; 0046ef3a
        ;   XREF to: 0046ef56 (CONDITIONAL_JUMP)  ; LAB_0046ef56
    PUSH 0x1                            ; 0046ef3c
    PUSH EBX                            ; 0046ef3e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 ; 0046ef3f
        ;   XREF to: 00553ea0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_00553ea0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0046ef44
    MOV DL,byte ptr [ESP + 0xc]         ; 0046ef47
    MOV EBX,EAX                         ; 0046ef4b
    TEST DL,0x2                         ; 0046ef4d
    JNZ 0x0046ef71                      ; 0046ef50
        ;   XREF to: 0046ef71 (CONDITIONAL_JUMP)  ; LAB_0046ef71
    MOV EAX,EBX                         ; 0046ef52
    POP EBX                             ; 0046ef54
    RET                                 ; 0046ef55
    PUSH 0x59ca20                       ; 0046ef56 | g_CDynamiteTypeInfo_0059ca20
        ;   Label: LAB_0046ef56
    PUSH EBX                            ; 0046ef5b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0046ef5c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0046ef61
    PUSH EAX                            ; 0046ef64
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0046ef65
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0046ef6a
    MOV EAX,EBX                         ; 0046ef6d
    POP EBX                             ; 0046ef6f
    RET                                 ; 0046ef70
    PUSH EAX                            ; 0046ef71
        ;   Label: LAB_0046ef71
    CALL crt_unknown.c_FUN_00564494     ; 0046ef72
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0046ef77
    MOV EAX,EBX                         ; 0046ef7a
    POP EBX                             ; 0046ef7c
    RET                                 ; 0046ef7d

