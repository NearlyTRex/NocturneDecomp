; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_init_FUN_0057b800(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052c547
;
; Referenced Globals:
;   TerminatedCString s_junk_jnk_005ed539
;   CGround* g_CGroundPtr = 01cedd88
;   undefined4 DAT_02653650
;
; Called Functions:
;   core_ground.cpp_CGround_init_FUN_004ca9c0
;   core_ground.cpp_CGround_load_FUN_004caac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b800
        ;   Label: core_terrain.cpp_CTerrain_init_FUN_0057b800
    MOV EDX,dword ptr [0x00617a08]      ; 0057b801 | g_CGroundPtr
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b807
    PUSH EDX                            ; 0057b80b
    MOV dword ptr [EAX],0x0             ; 0057b80c
    CALL core_ground.cpp_CGround_init_FUN_004ca9c0 ; 0057b812
        ;   XREF to: 004ca9c0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_init_FUN_004ca9c0(CGround * this_ptr)
    ADD ESP,0x4                         ; 0057b817
    PUSH 0x5ed539                       ; 0057b81a | = "junk.jnk"
    MOV ECX,dword ptr [0x00617a08]      ; 0057b81f | g_CGroundPtr
    PUSH ECX                            ; 0057b825
    MOV EBX,0x1                         ; 0057b826
    CALL core_ground.cpp_CGround_load_FUN_004caac0 ; 0057b82b
        ;   XREF to: 004caac0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_load_FUN_004caac0(CGround * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0057b830
    MOV dword ptr [0x02653650],EBX      ; 0057b833 | DAT_02653650
    POP EBX                             ; 0057b839
    RET                                 ; 0057b83a

