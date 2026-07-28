; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_init_FUN_005492b0(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 0050725e
;
; Referenced Globals:
;   TerminatedCString s_junk_jnk_00596cc5
;   int INT_005ba8ec = 0x1cadf80
;   undefined4 DAT_02dd10cc
;
; Called Functions:
;   core_ground.cpp_CGround_init_FUN_004b13d0
;   core_ground.cpp_CGround_load_FUN_004b14d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005492b0
        ;   Label: core_terrain.cpp_CTerrain_init_FUN_005492b0
    MOV EDX,dword ptr [0x005ba8ec]      ; 005492b1 | INT_005ba8ec
    MOV EAX,dword ptr [ESP + 0x8]       ; 005492b7
    PUSH EDX                            ; 005492bb
    MOV dword ptr [EAX],0x0             ; 005492bc
    CALL core_ground.cpp_CGround_init_FUN_004b13d0 ; 005492c2
        ;   XREF to: 004b13d0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_init_FUN_004b13d0(CGround * this_ptr)
    ADD ESP,0x4                         ; 005492c7
    PUSH 0x596cc5                       ; 005492ca | = "junk.jnk"
    MOV ECX,dword ptr [0x005ba8ec]      ; 005492cf | INT_005ba8ec
    PUSH ECX                            ; 005492d5
    MOV EBX,0x1                         ; 005492d6
    CALL core_ground.cpp_CGround_load_FUN_004b14d0 ; 005492db
        ;   XREF to: 004b14d0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_load_FUN_004b14d0(CGround * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005492e0
    MOV dword ptr [0x02dd10cc],EBX      ; 005492e3 | DAT_02dd10cc
    POP EBX                             ; 005492e9
    RET                                 ; 005492ea

