; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00520f40(CScat *this_ptr,uint flags)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CScatTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520f40
        ;   Label: core_scat.cpp_CScat_dtor_FUN_00520f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00520f41
    TEST byte ptr [ESP + 0xc],0x4       ; 00520f45
    JNZ 0x00520f66                      ; 00520f4a
        ;   XREF to: 00520f66 (CONDITIONAL_JUMP)  ; LAB_00520f66
    PUSH 0x1                            ; 00520f4c
    PUSH EBX                            ; 00520f4e
    CALL core_hero.cpp_CHero_dtor_FUN_004ce3d0 ; 00520f4f
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004ce3d0(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00520f54
    MOV DL,byte ptr [ESP + 0xc]         ; 00520f57
    MOV EBX,EAX                         ; 00520f5b
    TEST DL,0x2                         ; 00520f5d
    JNZ 0x00520f81                      ; 00520f60
        ;   XREF to: 00520f81 (CONDITIONAL_JUMP)  ; LAB_00520f81
    MOV EAX,EBX                         ; 00520f62
    POP EBX                             ; 00520f64
    RET                                 ; 00520f65
    PUSH 0x5fafb0                       ; 00520f66 | g_CScatTypeInfo
        ;   Label: LAB_00520f66
    PUSH EBX                            ; 00520f6b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00520f6c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00520f71
    PUSH EAX                            ; 00520f74
    CALL crt_unknown.c_FUN_005b7fce     ; 00520f75
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00520f7a
    MOV EAX,EBX                         ; 00520f7d
    POP EBX                             ; 00520f7f
    RET                                 ; 00520f80
    PUSH EAX                            ; 00520f81
        ;   Label: LAB_00520f81
    CALL crt_unknown.c_FUN_005b7fdc     ; 00520f82
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00520f87
    MOV EAX,EBX                         ; 00520f8a
    POP EBX                             ; 00520f8c
    RET                                 ; 00520f8d

