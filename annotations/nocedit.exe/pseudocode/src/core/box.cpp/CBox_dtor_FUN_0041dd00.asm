; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dd00(CBox *this_ptr,uint flags)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 at 0041915c
;   core_boxactor.cpp_CBoxActor_dtor_FUN_00423670 at 00423685
;   core_boxactor.cpp_CLightActor_dtor_FUN_004235f0 at 00423615
;   core_fire.cpp_CStake_dtor_FUN_004c9760 at 004c976a
;   core_fire.cpp_CToss_dtor_FUN_004c95c0 at 004c95cc
;   core_simbox.cpp_CSimBox_dtor_FUN_005893e0 at 005893f5
;   core_stone.cpp_CTempleStone_dtor_FUN_005bae10 at 005bae25
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80 at 005edf9f
;
; Called Functions:
;   core_box.cpp_SScrape_arrdtor_FUN_00420220
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041dd00
        ;   Label: core_box.cpp_CBox_dtor_FUN_0041dd00
    PUSH 0x0                            ; 0041dd04
    ADD EAX,0xb4                        ; 0041dd06
    PUSH EAX                            ; 0041dd0b
    CALL core_box.cpp_SScrape_arrdtor_FUN_00420220 ; 0041dd0c
        ;   XREF to: 00420220 (UNCONDITIONAL_CALL)  ; SScrape * core_box.cpp_SScrape_arrdtor_FUN_00420220(SScrape * objs, uint flags)
    ADD ESP,0x8                         ; 0041dd11
    SUB EAX,0xb4                        ; 0041dd14
    RET                                 ; 0041dd19

