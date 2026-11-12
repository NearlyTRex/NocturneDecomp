; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004cd9c0(CHaystack *this_ptr,uint flags)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHaystackTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd9c0
        ;   Label: core_haystack.cpp_CHaystack_dtor_FUN_004cd9c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cd9c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cd9c5
    JNZ 0x004cd9e6                      ; 004cd9ca
        ;   XREF to: 004cd9e6 (CONDITIONAL_JUMP)  ; LAB_004cd9e6
    PUSH 0x1                            ; 004cd9cc
    PUSH EBX                            ; 004cd9ce
    CALL core_hero.cpp_CHero_dtor_FUN_004ce3d0 ; 004cd9cf
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004ce3d0(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cd9d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004cd9d7
    MOV EBX,EAX                         ; 004cd9db
    TEST DL,0x2                         ; 004cd9dd
    JNZ 0x004cda01                      ; 004cd9e0
        ;   XREF to: 004cda01 (CONDITIONAL_JUMP)  ; LAB_004cda01
    MOV EAX,EBX                         ; 004cd9e2
    POP EBX                             ; 004cd9e4
    RET                                 ; 004cd9e5
    PUSH 0x5f8100                       ; 004cd9e6 | g_CHaystackTypeInfo
        ;   Label: LAB_004cd9e6
    PUSH EBX                            ; 004cd9eb
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004cd9ec
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004cd9f1
    PUSH EAX                            ; 004cd9f4
    CALL crt_unknown.c_FUN_005b7fce     ; 004cd9f5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004cd9fa
    MOV EAX,EBX                         ; 004cd9fd
    POP EBX                             ; 004cd9ff
    RET                                 ; 004cda00
    PUSH EAX                            ; 004cda01
        ;   Label: LAB_004cda01
    CALL crt_unknown.c_FUN_005b7fdc     ; 004cda02
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004cda07
    MOV EAX,EBX                         ; 004cda0a
    POP EBX                             ; 004cda0c
    RET                                 ; 004cda0d

