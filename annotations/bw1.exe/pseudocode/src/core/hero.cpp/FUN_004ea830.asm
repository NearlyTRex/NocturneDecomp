; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHero * __cdecl core_hero_cpp_FUN_004ea830(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_baron.cpp_CBaron_ctor_FUN_0040f210 at 0040f218
;   core_colonel.cpp_CColonel_ctor_FUN_00444330 at 00444336
;   core_doc.cpp_CDoc_ctor_FUN_00468c80 at 00468c88
;   core_gabriela.cpp_CGabriella_ctor_FUN_004c6270 at 004c6278
;   core_haystack.cpp_CHaystack_ctor_FUN_004e9020 at 004e9026
;   core_icepick.cpp_CIcePick_ctor_FUN_004f0b90 at 004f0b96
;   core_moloch.cpp_CMoloch_ctor_FUN_005202f0 at 005202f8
;   core_scat.cpp_CScat_ctor_FUN_00540ad0 at 00540ad6
;   core_stranger.cpp_CStranger_ctor_FUN_00585270 at 00585278
;   core_svetlana.cpp_CSvetlana_ctor_FUN_00592e00 at 00592e06
;
; Called Functions:
;   core_charactr.cpp_CCharacter_ctor_FUN_0042c080
;   core_hero.cpp_CHero_createDefaultWeapon_FUN_004eafd0
;   core_inv.cpp_FUN_004f6ed0
;   core_path.cpp_CPathMap_ctor_FUN_00532fe0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea830
        ;   Label: core_hero.cpp_FUN_004ea830
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ea831
    PUSH EBX                            ; 004ea835
    CALL core_charactr.cpp_CCharacter_ctor_FUN_0042c080 ; 004ea836
        ;   XREF to: 0042c080 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_0042c080(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ea83b
    ADD EAX,0xc208                      ; 004ea83e
    PUSH EAX                            ; 004ea843
    CALL core_path.cpp_CPathMap_ctor_FUN_00532fe0 ; 004ea844
        ;   XREF to: 00532fe0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_00532fe0(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 004ea849
    ADD EAX,0x138e0                     ; 004ea84c
    PUSH EAX                            ; 004ea851
    CALL core_inv.cpp_FUN_004f6ed0      ; 004ea852
        ;   XREF to: 004f6ed0 (UNCONDITIONAL_CALL)  ; CInventory * core_inv.cpp_FUN_004f6ed0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004ea857
    PUSH 0x30                           ; 004ea85a
    LEA EBX,[EAX + 0xfffe0518]          ; 004ea85c
    PUSH 0x0                            ; 004ea862
    MOV dword ptr [EBX + 0x1faec],EBX   ; 004ea864
    LEA EAX,[EBX + 0xc1d8]              ; 004ea86a
    PUSH EAX                            ; 004ea870
    MOV dword ptr [EBX + 0x154],0x601d34 ; 004ea871
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004ea87b
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 004ea880
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 004ea88a
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 004ea894
    MOV dword ptr [EBX + 0x2ff4],0x49742400 ; 004ea89e
    MOV dword ptr [EBX + 0x2ff8],0x49742400 ; 004ea8a8
    MOV dword ptr [EBX + 0x2ffc],0x3fcccccd ; 004ea8b2
    MOV dword ptr [EBX + 0x3000],0x40c00000 ; 004ea8bc
    MOV dword ptr [EBX + 0xc1d4],0x2    ; 004ea8c6
    MOV dword ptr [EBX + 0x1fae4],0x0   ; 004ea8d0
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 004ea8da
    MOV dword ptr [EBX + 0x1ff74],0x0   ; 004ea8e4
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 004ea8ee
    MOV dword ptr [EBX + 0x1ff7c],0x0   ; 004ea8f8
    MOV dword ptr [EBX + 0x1ff80],0x0   ; 004ea902
    MOV dword ptr [EBX + 0x1ff84],0x0   ; 004ea90c
    MOV dword ptr [EBX + 0x1ff88],0x0   ; 004ea916
    MOV dword ptr [EBX + 0x1ff8c],0x0   ; 004ea920
    ADD ESP,0xc                         ; 004ea92a
    MOV dword ptr [EBX + 0x1ff54],0x0   ; 004ea92d
    PUSH EBX                            ; 004ea937
    MOV dword ptr [EBX + 0x1ff58],0x0   ; 004ea938
    CALL core_hero.cpp_CHero_createDefaultWeapon_FUN_004eafd0 ; 004ea942
        ;   XREF to: 004eafd0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_createDefaultWeapon_FUN_004eafd0(CHero * this_ptr)
    MOV dword ptr [EBX + 0x1ffa8],0x2   ; 004ea947
    MOV dword ptr [EBX + 0x27c0],0x0    ; 004ea951
    MOV dword ptr [EBX + 0x2540],0x1    ; 004ea95b
    ADD ESP,0x4                         ; 004ea965
    MOV dword ptr [EBX + 0x2530],0x40490fdb ; 004ea968
    MOV EAX,EBX                         ; 004ea972
    MOV dword ptr [EBX + 0x252c],0x41490fdb ; 004ea974
    POP EBX                             ; 004ea97e
    RET                                 ; 004ea97f

