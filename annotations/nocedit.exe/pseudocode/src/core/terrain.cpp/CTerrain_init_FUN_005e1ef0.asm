; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_init_FUN_005e1ef0(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 0056975e
;
; Referenced Globals:
;   TerminatedCString s_junk_jnk_00656590
;   CGround* g_CGroundPtr = 02db8668
;   CGround g_CGroundInstance
;   undefined4 g_CTerrainInstance.initialized
;
; Called Functions:
;   core_ground.cpp_CGround_init_FUN_004eef00
;   core_ground.cpp_CGround_load_FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1ef0
        ;   Label: core_terrain.cpp_CTerrain_init_FUN_005e1ef0
    MOV EDX,dword ptr [0x0067cbc8]      ; 005e1ef1 | g_CGroundInstance | g_CGroundPtr
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e1ef7
    PUSH EDX                            ; 005e1efb | g_CGroundInstance
    MOV dword ptr [EAX],0x0             ; 005e1efc
    CALL core_ground.cpp_CGround_init_FUN_004eef00 ; 005e1f02
        ;   XREF to: 004eef00 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_init_FUN_004eef00(CGround * this_ptr)
    ADD ESP,0x4                         ; 005e1f07
    PUSH 0x656590                       ; 005e1f0a | = "junk.jnk"
    MOV ECX,dword ptr [0x0067cbc8]      ; 005e1f0f | g_CGroundInstance | g_CGroundPtr
    PUSH ECX                            ; 005e1f15 | g_CGroundInstance
    MOV EBX,0x1                         ; 005e1f16
    CALL core_ground.cpp_CGround_load_FUN_004ef030 ; 005e1f1b
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_load_FUN_004ef030(CGround * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005e1f20
    MOV dword ptr [0x03f874a0],EBX      ; 005e1f23 | g_CTerrainInstance.initialized
    POP EBX                             ; 005e1f29
    RET                                 ; 005e1f2a

