; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBox * __cdecl core_box_cpp_CBox_dtor_FUN_005b1c70(CBox *this_ptr,uint flags)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[12]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00415800 at 0041582c
;   core_boxactor.cpp_CBoxActor_dtor_FUN_0041d830 at 0041d845
;   core_boxactor.cpp_CLightActor_dtor_FUN_0041d7b0 at 0041d7d5
;   core_doc.cpp_CDoc_dtor_FUN_00450580 at 004505ba
;   core_fire.cpp_CStake_dtor_FUN_0049ef30 at 0049ef3a
;   core_fire.cpp_CToss_dtor_FUN_0049ed50 at 0049ed5c
;   core_hpbox.cpp_CParticleBox_dtor_FUN_005ac7f0 at 005ac87c
;   core_mine.cpp_CSpiritMine_dtor_FUN_005ad460 at 005ad49a
;   core_necklace.cpp_CNecklace_dtor_FUN_005add30 at 005add45
;   core_simbox.cpp_CSimBox_dtor_FUN_00540510 at 00540525
;   ... and 2 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b1c70
        ;   Label: core_box.cpp_CBox_dtor_FUN_005b1c70
    RET                                 ; 005b1c74

