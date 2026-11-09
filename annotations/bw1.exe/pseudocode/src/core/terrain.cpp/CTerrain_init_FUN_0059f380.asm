; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_init_FUN_0059f380(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_0054d3c0 at 0054d827
;
; Referenced Globals:
;   TerminatedCString s_junk_jnk_005f8895
;   CGround* g_CGroundPtr = 01d06940
;   undefined4 DAT_02c8ae6c
;
; Called Functions:
;   core_ground.cpp_CGround_init_FUN_004e7240
;   core_ground.cpp_CGround_load_FUN_004e7340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f380
        ;   Label: core_terrain.cpp_CTerrain_init_FUN_0059f380
    MOV EDX,dword ptr [0x0061eecc]      ; 0059f381 | g_CGroundPtr
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059f387
    PUSH EDX                            ; 0059f38b
    MOV dword ptr [EAX],0x0             ; 0059f38c
    CALL core_ground.cpp_CGround_init_FUN_004e7240 ; 0059f392
        ;   XREF to: 004e7240 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_init_FUN_004e7240(CGround * this_ptr)
    ADD ESP,0x4                         ; 0059f397
    PUSH 0x5f8895                       ; 0059f39a | = "junk.jnk"
    MOV ECX,dword ptr [0x0061eecc]      ; 0059f39f | g_CGroundPtr
    PUSH ECX                            ; 0059f3a5
    MOV EBX,0x1                         ; 0059f3a6
    CALL core_ground.cpp_CGround_load_FUN_004e7340 ; 0059f3ab
        ;   XREF to: 004e7340 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_load_FUN_004e7340(CGround * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0059f3b0
    MOV dword ptr [0x02c8ae6c],EBX      ; 0059f3b3 | DAT_02c8ae6c
    POP EBX                             ; 0059f3b9
    RET                                 ; 0059f3ba

