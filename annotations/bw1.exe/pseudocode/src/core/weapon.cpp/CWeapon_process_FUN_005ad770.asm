; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ad770(CWeapon *this_ptr,float delta_time)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[11]:
;   core_baron.cpp_CBaronWeapon_process_FUN_004104e0 at 004104f6
;   core_crossbow.cpp_CCrossbow_process_FUN_00449830 at 0044983f
;   core_dynamite.cpp_CDynamite_process_FUN_004926d0 at 004926e6
;   core_elephant.cpp_CElephantGun_process_FUN_0049e090 at 0049e0b1
;   core_flamegun.cpp_CFlameThrower_process_FUN_004b9710 at 004b9722
;   core_lightgun.cpp_CLightGun_process_FUN_00500d20 at 00500d2f
;   core_lightpis.cpp_CLightPis_process_FUN_00502480 at 0050248f
;   core_melee.cpp_CMelee_process_FUN_005099a0 at 005099ad
;   core_rifle.cpp_CRifle_process_FUN_00540060 at 00540073
;   core_shotgun.cpp_CShotgun_process_FUN_00561650 at 00561671
;   ... and 1 more
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonLightInstance.volumetric_intensity
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_box.cpp_CBox_process_FUN_0041e0d0
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad770
        ;   Label: core_weapon.cpp_CWeapon_process_FUN_005ad770
    PUSH ESI                            ; 005ad771
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ad772
    FLD float ptr [EBX + 0x300]         ; 005ad776
    FLDZ                                ; 005ad77c
    FCOMPP                              ; 005ad77e
    FNSTSW AX                           ; 005ad780
    SAHF                                ; 005ad782
    JC 0x005ad84a                       ; 005ad783
        ;   XREF to: 005ad84a (CONDITIONAL_JUMP)  ; LAB_005ad84a
    MOV EDX,dword ptr [EBX + 0x304]     ; 005ad789
        ;   Label: LAB_005ad789
    TEST EDX,EDX                        ; 005ad78f
    JNZ 0x005ad811                      ; 005ad791
        ;   XREF to: 005ad811 (CONDITIONAL_JUMP)  ; LAB_005ad811
    CMP dword ptr [EBX + 0x2d4],0x0     ; 005ad797
    JNZ 0x005ad811                      ; 005ad79e
        ;   XREF to: 005ad811 (CONDITIONAL_JUMP)  ; LAB_005ad811
    FLD float ptr [EBX + 0x570]         ; 005ad7a0
    FLDZ                                ; 005ad7a6
    FCOMPP                              ; 005ad7a8
    FNSTSW AX                           ; 005ad7aa
    SAHF                                ; 005ad7ac
    JNC 0x005ad811                      ; 005ad7ad
        ;   XREF to: 005ad811 (CONDITIONAL_JUMP)  ; LAB_005ad811
    FLD float ptr [EBX + 0x570]         ; 005ad7af
    FSUB float ptr [ESP + 0x10]         ; 005ad7b5
    FST float ptr [EBX + 0x570]         ; 005ad7b9
    FLDZ                                ; 005ad7bf
    FCOMPP                              ; 005ad7c1
    FNSTSW AX                           ; 005ad7c3
    SAHF                                ; 005ad7c5
    JBE 0x005ad7ce                      ; 005ad7c6
        ;   XREF to: 005ad7ce (CONDITIONAL_JUMP)  ; LAB_005ad7ce
    MOV dword ptr [EBX + 0x570],EDX     ; 005ad7c8
    LEA ESI,[EBX + 0x308]               ; 005ad7ce
        ;   Label: LAB_005ad7ce
    PUSH dword ptr [ESP + 0x10]         ; 005ad7d4
    PUSH ESI                            ; 005ad7d8
    CALL core_box.cpp_CBox_process_FUN_0041e0d0 ; 005ad7d9
        ;   XREF to: 0041e0d0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e0d0(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x20]                ; 005ad7de
    MOV EDX,dword ptr [ESI]             ; 005ad7e1
    MOV dword ptr [EAX],EDX             ; 005ad7e3
    MOV EDX,dword ptr [ESI + 0x4]       ; 005ad7e5
    MOV dword ptr [EAX + 0x4],EDX       ; 005ad7e8
    MOV EDX,dword ptr [ESI + 0x8]       ; 005ad7eb
    MOV dword ptr [EAX + 0x8],EDX       ; 005ad7ee
    LEA EAX,[EBX + 0x30]                ; 005ad7f1
    LEA EDX,[EBX + 0x314]               ; 005ad7f4
    ADD ESP,0x8                         ; 005ad7fa
    CMP EAX,EDX                         ; 005ad7fd
    JZ 0x005ad811                       ; 005ad7ff
        ;   XREF to: 005ad811 (CONDITIONAL_JUMP)  ; LAB_005ad811
    MOV ECX,dword ptr [EDX]             ; 005ad801
    MOV dword ptr [EAX],ECX             ; 005ad803
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ad805
    MOV dword ptr [EAX + 0x4],ECX       ; 005ad808
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ad80b
    MOV dword ptr [EAX + 0x8],ECX       ; 005ad80e
    PUSH EBX                            ; 005ad811
        ;   Label: LAB_005ad811
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 005ad812
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    MOV EAX,[0x01d06ab4]                ; 005ad817 | DAT_01d06ab4
    MOV EDX,dword ptr [EBX + 0x304]     ; 005ad81c
    MOV ESI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005ad822
    ADD ESP,0x4                         ; 005ad829
    CMP EDX,ESI                         ; 005ad82c
    JNZ 0x005ad847                      ; 005ad82e
        ;   XREF to: 005ad847 (CONDITIONAL_JUMP)  ; LAB_005ad847
    MOV EAX,[0x0061d95c]                ; 005ad830 | g_CGamePtr
    CMP dword ptr [EAX + 0x264],0x0     ; 005ad835
    JZ 0x005ad847                       ; 005ad83c
        ;   XREF to: 005ad847 (CONDITIONAL_JUMP)  ; LAB_005ad847
    CMP dword ptr [EBX + 0x2f0],0x0     ; 005ad83e
    JNZ 0x005ad876                      ; 005ad845
        ;   XREF to: 005ad876 (CONDITIONAL_JUMP)  ; LAB_005ad876
    POP ESI                             ; 005ad847
        ;   Label: LAB_005ad847
    POP EBX                             ; 005ad848
    RET                                 ; 005ad849
    FLD float ptr [EBX + 0x300]         ; 005ad84a
        ;   Label: LAB_005ad84a
    FSUB float ptr [ESP + 0x10]         ; 005ad850
    FST float ptr [EBX + 0x300]         ; 005ad854
    FLDZ                                ; 005ad85a
    FCOMPP                              ; 005ad85c
    FNSTSW AX                           ; 005ad85e
    SAHF                                ; 005ad860
    JBE 0x005ad789                      ; 005ad861
        ;   XREF to: 005ad789 (CONDITIONAL_JUMP)  ; LAB_005ad789
    MOV dword ptr [EBX + 0x300],0x0     ; 005ad867
    JMP 0x005ad789                      ; 005ad871
        ;   XREF to: 005ad789 (UNCONDITIONAL_JUMP)  ; LAB_005ad789
    PUSH EBX                            ; 005ad876
        ;   Label: LAB_005ad876
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ad877
    CALL dword ptr [EAX + 0xf4]         ; 005ad87d
    FLD float ptr [0x01ccf38c]          ; 005ad883 | g_CDemonLightInstance.volumetric_intensity
    FLDZ                                ; 005ad889
    ADD ESP,0x4                         ; 005ad88b
    FCOMPP                              ; 005ad88e
    FNSTSW AX                           ; 005ad890
    SAHF                                ; 005ad892
    JNC 0x005ad847                      ; 005ad893
        ;   XREF to: 005ad847 (CONDITIONAL_JUMP)  ; LAB_005ad847
    PUSH 0x1ccc3e4                      ; 005ad895
    MOV EAX,[0x00622c18]                ; 005ad89a | g_CDemonSetPtr
    PUSH EAX                            ; 005ad89f
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0 ; 005ad8a0
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 005ad8a5
    POP ESI                             ; 005ad8a8
    POP EBX                             ; 005ad8a9
    RET                                 ; 005ad8aa

