; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance *this_ptr,char *filename)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[76]:
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 at 0040ba91
;   core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0 at 0040ddea
;   core_ammo.cpp_FUN_0040e240 at 0040e2b4
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e510 at 0040e54a
;   core_anvil.cpp_CAnvil_ctor_FUN_0040ea30 at 0040ea6f
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330 at 0040f368
;   core_baron.cpp_CBaron_ctor_FUN_0040f690 at 0040f75a
;   core_bat.cpp_CBat_ctor_FUN_00410fd0 at 0041106d
;   core_battery.cpp_CBattery_ctor_FUN_00414720 at 00414758
;   core_biggs.cpp_CBiggs_ctor_FUN_00414d10 at 00414d77
;   ... and 66 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_0044fca0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044fd70
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
    PUSH EDI                            ; 0044fd71
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044fd72
    MOV ESI,dword ptr [ESP + 0x10]      ; 0044fd76
    LEA EDI,[EDX + 0x78]                ; 0044fd7a
    PUSH EDI                            ; 0044fd7d
    MOV AL,byte ptr [ESI]               ; 0044fd7e
        ;   Label: LAB_0044fd7e
    MOV byte ptr [EDI],AL               ; 0044fd80
    CMP AL,0x0                          ; 0044fd82
    JZ 0x0044fd96                       ; 0044fd84
        ;   XREF to: 0044fd96 (CONDITIONAL_JUMP)  ; LAB_0044fd96
    MOV AL,byte ptr [ESI + 0x1]         ; 0044fd86
    ADD ESI,0x2                         ; 0044fd89
    MOV byte ptr [EDI + 0x1],AL         ; 0044fd8c
    ADD EDI,0x2                         ; 0044fd8f
    CMP AL,0x0                          ; 0044fd92
    JNZ 0x0044fd7e                      ; 0044fd94
        ;   XREF to: 0044fd7e (CONDITIONAL_JUMP)  ; LAB_0044fd7e
    POP EDI                             ; 0044fd96
        ;   Label: LAB_0044fd96
    PUSH EDX                            ; 0044fd97
    MOV dword ptr [EDX + 0x178],0x0     ; 0044fd98
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_0044fca0 ; 0044fda2
        ;   XREF to: 0044fca0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_0044fca0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0044fda7
    POP EDI                             ; 0044fdaa
    POP ESI                             ; 0044fdab
    RET                                 ; 0044fdac

