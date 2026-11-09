; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_init_FUN_00572370(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_00532b80 at 00532fe7
;
; Referenced Globals:
;   TerminatedCString s_junk_jnk_005d6e04
;   CGround* g_CGroundPtr = 01d5b8a8
;   undefined4 DAT_02cfd8bc
;
; Called Functions:
;   core_ground.cpp_CGround_init_FUN_004cfbd0
;   core_ground.cpp_CGround_load_FUN_004cfcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572370
        ;   Label: core_terrain.cpp_CTerrain_init_FUN_00572370
    MOV EDX,dword ptr [0x005fff4c]      ; 00572371 | g_CGroundPtr
    MOV EAX,dword ptr [ESP + 0x8]       ; 00572377
    PUSH EDX                            ; 0057237b
    MOV dword ptr [EAX],0x0             ; 0057237c
    CALL core_ground.cpp_CGround_init_FUN_004cfbd0 ; 00572382
        ;   XREF to: 004cfbd0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_init_FUN_004cfbd0(CGround * this_ptr)
    ADD ESP,0x4                         ; 00572387
    PUSH 0x5d6e04                       ; 0057238a | = "junk.jnk"
    MOV ECX,dword ptr [0x005fff4c]      ; 0057238f | g_CGroundPtr
    PUSH ECX                            ; 00572395
    MOV EBX,0x1                         ; 00572396
    CALL core_ground.cpp_CGround_load_FUN_004cfcd0 ; 0057239b
        ;   XREF to: 004cfcd0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_load_FUN_004cfcd0(CGround * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005723a0
    MOV dword ptr [0x02cfd8bc],EBX      ; 005723a3 | DAT_02cfd8bc
    POP EBX                             ; 005723a9
    RET                                 ; 005723aa

