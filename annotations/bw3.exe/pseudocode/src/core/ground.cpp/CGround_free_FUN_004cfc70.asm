; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_free_FUN_004cfc70(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_ground.cpp_CGround_dtor_FUN_004cfbb0 at 004cfbb6
;   core_ground.cpp_CGround_init_FUN_004cfbd0 at 004cfbd6
;   core_terrain.cpp_CTerrain_free_FUN_005723b0 at 005723b7
;
; Called Functions:
;   core_texlist.cpp_CTextureList_dtor_FUN_005690b0
;   crt_unknown.c_FUN_005a30c4
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfc70
        ;   Label: core_ground.cpp_CGround_free_FUN_004cfc70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cfc71
    MOV EDX,dword ptr [EBX + 0x24]      ; 004cfc75
    TEST EDX,EDX                        ; 004cfc78
    JNZ 0x004cfc8c                      ; 004cfc7a
        ;   XREF to: 004cfc8c (CONDITIONAL_JUMP)  ; LAB_004cfc8c
    MOV EAX,dword ptr [EBX + 0x28]      ; 004cfc7c
    TEST EAX,EAX                        ; 004cfc7f
    JNZ 0x004cfcac                      ; 004cfc81
        ;   XREF to: 004cfcac (CONDITIONAL_JUMP)  ; LAB_004cfcac
    MOV dword ptr [EBX + 0x28],0x0      ; 004cfc83
    POP EBX                             ; 004cfc8a
    RET                                 ; 004cfc8b
    PUSH EDX                            ; 004cfc8c
        ;   Label: LAB_004cfc8c
    CALL crt_unknown.c_FUN_005a3770     ; 004cfc8d
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004cfc92
    MOV dword ptr [EBX + 0x24],0x0      ; 004cfc95
    MOV EAX,dword ptr [EBX + 0x28]      ; 004cfc9c
    TEST EAX,EAX                        ; 004cfc9f
    JNZ 0x004cfcac                      ; 004cfca1
        ;   XREF to: 004cfcac (CONDITIONAL_JUMP)  ; LAB_004cfcac
    MOV dword ptr [EBX + 0x28],0x0      ; 004cfca3
    POP EBX                             ; 004cfcaa
    RET                                 ; 004cfcab
    PUSH 0x0                            ; 004cfcac
        ;   Label: LAB_004cfcac
    PUSH EAX                            ; 004cfcae
    CALL core_texlist.cpp_CTextureList_dtor_FUN_005690b0 ; 004cfcaf
        ;   XREF to: 005690b0 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_dtor_FUN_005690b0(CTextureList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cfcb4
    PUSH EAX                            ; 004cfcb7
    CALL crt_unknown.c_FUN_005a30c4     ; 004cfcb8
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004cfcbd
    MOV dword ptr [EBX + 0x28],0x0      ; 004cfcc0
    POP EBX                             ; 004cfcc7
    RET                                 ; 004cfcc8

