; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_0056f210(CStranger *this_ptr,uint flags)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStrangerTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f210
        ;   Label: core_stranger.cpp_CStranger_dtor_FUN_0056f210
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f211
    TEST byte ptr [ESP + 0xc],0x4       ; 0056f215
    JNZ 0x0056f236                      ; 0056f21a
        ;   XREF to: 0056f236 (CONDITIONAL_JUMP)  ; LAB_0056f236
    PUSH 0x1                            ; 0056f21c
    PUSH EBX                            ; 0056f21e
    CALL core_hero.cpp_CHero_dtor_FUN_004ce3d0 ; 0056f21f
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004ce3d0(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056f224
    MOV DL,byte ptr [ESP + 0xc]         ; 0056f227
    MOV EBX,EAX                         ; 0056f22b
    TEST DL,0x2                         ; 0056f22d
    JNZ 0x0056f251                      ; 0056f230
        ;   XREF to: 0056f251 (CONDITIONAL_JUMP)  ; LAB_0056f251
    MOV EAX,EBX                         ; 0056f232
    POP EBX                             ; 0056f234
    RET                                 ; 0056f235
    PUSH 0x5fc390                       ; 0056f236 | g_CStrangerTypeInfo
        ;   Label: LAB_0056f236
    PUSH EBX                            ; 0056f23b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0056f23c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0056f241
    PUSH EAX                            ; 0056f244
    CALL crt_unknown.c_FUN_005b7fce     ; 0056f245
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0056f24a
    MOV EAX,EBX                         ; 0056f24d
    POP EBX                             ; 0056f24f
    RET                                 ; 0056f250
    PUSH EAX                            ; 0056f251
        ;   Label: LAB_0056f251
    CALL crt_unknown.c_FUN_005b7fdc     ; 0056f252
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0056f257
    MOV EAX,EBX                         ; 0056f25a
    POP EBX                             ; 0056f25c
    RET                                 ; 0056f25d

