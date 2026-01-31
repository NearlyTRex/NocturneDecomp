; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f210(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[170]:
;   cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0 at 00432fa4
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30 at 00408a72
;   core_ammo.cpp_CAmmo_dtor_FUN_004114e0 at 00411522
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20 at 00411c62
;   core_anvil.cpp_CAnvil_dtor_FUN_004120e0 at 00412122
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 004125ad
;   core_armour.cpp_CEnemy_dtor_FUN_004125c0 at 0041266d
;   core_armour.cpp_CFlame_dtor_FUN_00412690 at 004126d2
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0 at 00412b12
;   core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0 at 004140f2
;   ... and 160 more
;
; Referenced Globals:
;   TerminatedCString s_unknown_0067d200
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f210
        ;   Label: shape_memdbg.cpp_debugFree_FUN_0050f210
    PUSH ESI                            ; 0050f211
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050f212
    TEST EAX,EAX                        ; 0050f216
    JNZ 0x0050f230                      ; 0050f218
        ;   XREF to: 0050f230 (CONDITIONAL_JUMP)  ; LAB_0050f230
    XOR ESI,ESI                         ; 0050f21a
        ;   Label: LAB_0050f21a
    MOV EBX,0x67d200                    ; 0050f21c | = "(unknown)"
    MOV dword ptr [0x02f0d944],ESI      ; 0050f221 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EBX      ; 0050f227 | g_CurrentDebugFilename
    POP ESI                             ; 0050f22d
    POP EBX                             ; 0050f22e
    RET                                 ; 0050f22f
    MOV EDX,dword ptr [0x02f0d944]      ; 0050f230 | g_CurrentDebugLine
        ;   Label: LAB_0050f230
    PUSH EDX                            ; 0050f236
    MOV ECX,dword ptr [0x0067d20c]      ; 0050f237 | = "(unknown)" | g_CurrentDebugFilename
    PUSH ECX                            ; 0050f23d | = "(unknown)"
    PUSH EAX                            ; 0050f23e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0050f23f
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050f244
    JMP 0x0050f21a                      ; 0050f247
        ;   XREF to: 0050f21a (UNCONDITIONAL_JUMP)  ; LAB_0050f21a

