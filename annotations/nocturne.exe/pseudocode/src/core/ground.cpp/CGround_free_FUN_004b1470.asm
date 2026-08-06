; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_free_FUN_004b1470(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_ground.cpp_CGround_dtor_FUN_004b13b0 at 004b13b6
;   core_ground.cpp_CGround_init_FUN_004b13d0 at 004b13d6
;   core_terrain.cpp_CTerrain_free_FUN_005492f0 at 005492f7
;
; Called Functions:
;   core_texlist.cpp_CTextureList_dtor_FUN_00544940
;   crt_memory.c_free_FUN_005638d0
;   crt_memory.c_operator_delete_FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1470
        ;   Label: core_ground.cpp_CGround_free_FUN_004b1470
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b1471
    MOV EDX,dword ptr [EBX + 0x24]      ; 004b1475
    TEST EDX,EDX                        ; 004b1478
    JNZ 0x004b148c                      ; 004b147a
        ;   XREF to: 004b148c (CONDITIONAL_JUMP)  ; LAB_004b148c
    MOV EAX,dword ptr [EBX + 0x28]      ; 004b147c
    TEST EAX,EAX                        ; 004b147f
    JNZ 0x004b14ac                      ; 004b1481
        ;   XREF to: 004b14ac (CONDITIONAL_JUMP)  ; LAB_004b14ac
    MOV dword ptr [EBX + 0x28],0x0      ; 004b1483
    POP EBX                             ; 004b148a
    RET                                 ; 004b148b
    PUSH EDX                            ; 004b148c
        ;   Label: LAB_004b148c
    CALL crt_memory.c_free_FUN_005638d0 ; 004b148d
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004b1492
    MOV dword ptr [EBX + 0x24],0x0      ; 004b1495
    MOV EAX,dword ptr [EBX + 0x28]      ; 004b149c
    TEST EAX,EAX                        ; 004b149f
    JNZ 0x004b14ac                      ; 004b14a1
        ;   XREF to: 004b14ac (CONDITIONAL_JUMP)  ; LAB_004b14ac
    MOV dword ptr [EBX + 0x28],0x0      ; 004b14a3
    POP EBX                             ; 004b14aa
    RET                                 ; 004b14ab
    PUSH 0x0                            ; 004b14ac
        ;   Label: LAB_004b14ac
    PUSH EAX                            ; 004b14ae
    CALL core_texlist.cpp_CTextureList_dtor_FUN_00544940 ; 004b14af
        ;   XREF to: 00544940 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_dtor_FUN_00544940(CTextureList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b14b4
    PUSH EAX                            ; 004b14b7
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004b14b8
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004b14bd
    MOV dword ptr [EBX + 0x28],0x0      ; 004b14c0
    POP EBX                             ; 004b14c7
    RET                                 ; 004b14c8

