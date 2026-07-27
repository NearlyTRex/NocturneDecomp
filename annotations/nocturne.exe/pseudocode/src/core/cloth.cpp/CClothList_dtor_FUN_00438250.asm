; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_cloth_cpp_CClothList_dtor_FUN_00438250(undefined4 param_1)
;
;
; XREF[37]:
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd49
;   core_armour.cpp_FUN_0040fc30 at 0040fc89
;   core_batcreat.cpp_FUN_004132c0 at 00413319
;   core_batman.cpp_FUN_00414c60 at 00414cb9
;   core_beast.cpp_FUN_00415250 at 004152a9
;   core_biggs.cpp_FUN_00415a30 at 00415a99
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400 at 0041a469
;   core_bride.cpp_FUN_00420f20 at 00420f79
;   core_bugs.cpp_FUN_00423d90 at 00423df9
;   core_charactr.cpp_CCharacter_dtor_FUN_0042b5d0 at 0042b629
;   ... and 27 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_reset_FUN_00438320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438250
        ;   Label: core_cloth.cpp_CClothList_dtor_FUN_00438250
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438251
    PUSH EBX                            ; 00438255
    CALL core_cloth.cpp_CClothList_reset_FUN_00438320 ; 00438256
        ;   XREF to: 00438320 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_reset_FUN_00438320()
    ADD ESP,0x4                         ; 0043825b
    MOV EAX,EBX                         ; 0043825e
    POP EBX                             ; 00438260
    RET                                 ; 00438261

