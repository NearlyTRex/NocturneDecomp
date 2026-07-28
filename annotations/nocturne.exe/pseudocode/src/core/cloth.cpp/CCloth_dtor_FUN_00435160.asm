; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00435160(CCloth *this_ptr,uint flags)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[7]:
;   core_cloth.cpp_CClothList_load_FUN_00438270 at 00438300
;   core_cloth.cpp_CClothList_remove_FUN_00438410 at 00438460
;   core_cloth.cpp_CClothList_reset_FUN_00438320 at 0043833e
;   core_gabriela.cpp_CGabriella_dtor_FUN_0049a170 at 0049a185
;   core_mimic.cpp_FUN_004d4540 at 004d4599
;   core_svetlana.cpp_FUN_00543050 at 00543065
;   core_vampboss.cpp_CVampireBoss_dtor_FUN_0054e370 at 0054e399
;
; Called Functions:
;   core_cloth.cpp_FUN_00435210
;   core_cloth.cpp_SClothBone_arrdtor_FUN_00438a20
;   core_cloth.cpp_SClothVertex_arrdtor_FUN_00438a00
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435160
        ;   Label: core_cloth.cpp_CCloth_dtor_FUN_00435160
    MOV EBX,dword ptr [ESP + 0x8]       ; 00435161
    PUSH EBX                            ; 00435165
    CALL core_cloth.cpp_FUN_00435210    ; 00435166
        ;   XREF to: 00435210 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00435210()
    ADD ESP,0x4                         ; 0043516b
    PUSH 0x0                            ; 0043516e
    ADD EBX,0x37b50                     ; 00435170
    PUSH EBX                            ; 00435176
    CALL core_cloth.cpp_SClothBone_arrdtor_FUN_00438a20 ; 00435177
        ;   XREF to: 00438a20 (UNCONDITIONAL_CALL)  ; SClothBone * core_cloth.cpp_SClothBone_arrdtor_FUN_00438a20(SClothBone * objs, uint flags)
    ADD ESP,0x8                         ; 0043517c
    PUSH 0x0                            ; 0043517f
    SUB EAX,0x377b8                     ; 00435181
    PUSH EAX                            ; 00435186
    CALL core_cloth.cpp_SClothVertex_arrdtor_FUN_00438a00 ; 00435187
        ;   XREF to: 00438a00 (UNCONDITIONAL_CALL)  ; SClothVertex * core_cloth.cpp_SClothVertex_arrdtor_FUN_00438a00(SClothVertex * objs, uint flags)
    ADD ESP,0x8                         ; 0043518c
    PUSH 0x1                            ; 0043518f
    LEA EBX,[EAX + 0xfffffc68]          ; 00435191
    PUSH EBX                            ; 00435197
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630 ; 00435198
        ;   XREF to: 00452630 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043519d
    POP EBX                             ; 004351a0
    RET                                 ; 004351a1

