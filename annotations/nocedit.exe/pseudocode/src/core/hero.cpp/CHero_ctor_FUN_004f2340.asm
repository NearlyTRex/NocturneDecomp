; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHero * __cdecl core_hero_cpp_CHero_ctor_FUN_004f2340(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_baron.cpp_CBaron_ctor_FUN_00412bc0 at 00412bc8
;   core_colonel.cpp_CColonel_ctor_FUN_0043f7e0 at 0043f7e6
;   core_gabriela.cpp_CGabriella_ctor_FUN_004d2b20 at 004d2b28
;   core_haystack.cpp_CHaystack_ctor_FUN_004f0c10 at 004f0c16
;   core_icepick.cpp_CIcePick_ctor_FUN_004f7df0 at 004f7df6
;   core_moloch.cpp_CMoloch_ctor_FUN_00528b30 at 00528b38
;   core_scat.cpp_CScat_ctor_FUN_00556ed0 at 00556ed6
;   core_stranger.cpp_CStranger_ctor_FUN_005bb120 at 005bb128
;   core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850 at 005d8856
;
; Referenced Globals:
;   CDemonActor_vtable g_CHeroVTable
;
; Called Functions:
;   core_charactr.cpp_CCharacter_ctor_FUN_00427e20
;   core_hero.cpp_CHero_createDefaultGun_FUN_004f2a30
;   core_inv.cpp_CInventory_ctor_FUN_004fd020
;   core_path.cpp_CPathMap_ctor_FUN_00546450
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2340
        ;   Label: core_hero.cpp_CHero_ctor_FUN_004f2340
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f2341
    PUSH EBX                            ; 004f2345
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00427e20 ; 004f2346
        ;   XREF to: 00427e20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00427e20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f234b
    ADD EAX,0xbe58                      ; 004f234e
    PUSH EAX                            ; 004f2353
    CALL core_path.cpp_CPathMap_ctor_FUN_00546450 ; 004f2354
        ;   XREF to: 00546450 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_00546450(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 004f2359
    ADD EAX,0x138e0                     ; 004f235c
    PUSH EAX                            ; 004f2361
    CALL core_inv.cpp_CInventory_ctor_FUN_004fd020 ; 004f2362
        ;   XREF to: 004fd020 (UNCONDITIONAL_CALL)  ; CInventory * core_inv.cpp_CInventory_ctor_FUN_004fd020(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004f2367
    PUSH 0x2c                           ; 004f236a
    LEA EBX,[EAX + 0xfffe08c8]          ; 004f236c
    PUSH 0x0                            ; 004f2372
    MOV dword ptr [EBX + 0x1f73c],EBX   ; 004f2374
    LEA EAX,[EBX + 0xbe2c]              ; 004f237a
    PUSH EAX                            ; 004f2380
    MOV dword ptr [EBX + 0x154],0x65f6d4 ; 004f2381 | g_CHeroVTable
    CALL crt_memory.c_memset_FUN_005fde40 ; 004f238b
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0xbe24],0x0    ; 004f2390
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 004f239a
    MOV dword ptr [EBX + 0x2de0],0x3f666666 ; 004f23a4
    MOV dword ptr [EBX + 0x2de4],0x49742400 ; 004f23ae
    MOV dword ptr [EBX + 0x2de8],0x49742400 ; 004f23b8
    MOV dword ptr [EBX + 0x2dec],0x3fcccccd ; 004f23c2
    MOV dword ptr [EBX + 0x2df0],0x40c00000 ; 004f23cc
    MOV dword ptr [EBX + 0xbe28],0x2    ; 004f23d6
    MOV dword ptr [EBX + 0x1f734],0x0   ; 004f23e0
    MOV dword ptr [EBX + 0x1fb9c],0x0   ; 004f23ea
    MOV dword ptr [EBX + 0x1fba0],0x0   ; 004f23f4
    MOV dword ptr [EBX + 0x1fba4],0x0   ; 004f23fe
    MOV dword ptr [EBX + 0x1fba8],0x0   ; 004f2408
    MOV dword ptr [EBX + 0x1fbac],0x0   ; 004f2412
    MOV dword ptr [EBX + 0x1fbb0],0x0   ; 004f241c
    ADD ESP,0xc                         ; 004f2426
    MOV dword ptr [EBX + 0x1fbb4],0x0   ; 004f2429
    PUSH EBX                            ; 004f2433
    MOV dword ptr [EBX + 0x1fb98],0x0   ; 004f2434
    CALL core_hero.cpp_CHero_createDefaultGun_FUN_004f2a30 ; 004f243e
        ;   XREF to: 004f2a30 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_createDefaultGun_FUN_004f2a30(CHero * this_ptr)
    MOV dword ptr [EBX + 0x1fbd0],0x2   ; 004f2443
    ADD ESP,0x4                         ; 004f244d
    MOV dword ptr [EBX + 0x2624],0x0    ; 004f2450
    MOV EAX,EBX                         ; 004f245a
    MOV dword ptr [EBX + 0x2444],0x1    ; 004f245c
    POP EBX                             ; 004f2466
    RET                                 ; 004f2467

