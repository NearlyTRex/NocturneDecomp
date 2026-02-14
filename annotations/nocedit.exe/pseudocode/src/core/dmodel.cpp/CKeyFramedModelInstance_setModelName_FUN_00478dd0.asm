; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance *this_ptr,char *filename)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[66]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f373
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 at 0040b921
;   core_ammo.cpp_CAmmo_FUN_00410fd0 at 00411044
;   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 at 00410dfa
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0 at 004115da
;   core_anvil.cpp_CAnvil_ctor_FUN_00411ce0 at 00411d1f
;   core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0 at 004127e8
;   core_baron.cpp_CBaron_ctor_FUN_00412bc0 at 00412c8a
;   core_bat.cpp_CBat_ctor_FUN_004147d0 at 0041486d
;   core_battery.cpp_CBattery_ctor_FUN_00417e90 at 00417ec8
;   ... and 56 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00478dd0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
    PUSH EDI                            ; 00478dd1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00478dd2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00478dd6
    LEA EDI,[EDX + 0x78]                ; 00478dda
    PUSH EDI                            ; 00478ddd
    MOV AL,byte ptr [ESI]               ; 00478dde
        ;   Label: LAB_00478dde
    MOV byte ptr [EDI],AL               ; 00478de0
    CMP AL,0x0                          ; 00478de2
    JZ 0x00478df6                       ; 00478de4
        ;   XREF to: 00478df6 (CONDITIONAL_JUMP)  ; LAB_00478df6
    MOV AL,byte ptr [ESI + 0x1]         ; 00478de6
    ADD ESI,0x2                         ; 00478de9
    MOV byte ptr [EDI + 0x1],AL         ; 00478dec
    ADD EDI,0x2                         ; 00478def
    CMP AL,0x0                          ; 00478df2
    JNZ 0x00478dde                      ; 00478df4
        ;   XREF to: 00478dde (CONDITIONAL_JUMP)  ; LAB_00478dde
    POP EDI                             ; 00478df6
        ;   Label: LAB_00478df6
    PUSH EDX                            ; 00478df7
    MOV dword ptr [EDX + 0x178],0x0     ; 00478df8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00 ; 00478e02
        ;   XREF to: 00478d00 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00478e07
    POP EDI                             ; 00478e0a
    POP ESI                             ; 00478e0b
    RET                                 ; 00478e0c

