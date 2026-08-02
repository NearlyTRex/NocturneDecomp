; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_0040f040(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ammobox.cpp_factoryFunc_FUN_0040f010 at 0040f023
;
; Referenced Globals:
;   TerminatedCString s_ammobag_kfm_0057834d
;   TerminatedCString s_CGun_00578359
;   undefined4 s_Gun_00578359+1
;   undefined4 s_un_00578359+2
;   undefined4 s_n_00578359+3
;   CDemonActor_vtable g_CAmmoBoxVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f040
        ;   Label: core_ammobox.cpp_CAmmoBox_ctor_FUN_0040f040
    PUSH ESI                            ; 0040f041
    PUSH EDI                            ; 0040f042
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040f043
    PUSH EBX                            ; 0040f047
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 0040f048
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f04d
    ADD EAX,0x150                       ; 0040f050
    PUSH EAX                            ; 0040f055
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0040f056
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f05b
    LEA EBX,[EAX + 0xfffffeb0]          ; 0040f05e
    PUSH 0x57834d                       ; 0040f064 | = "ammobag.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040f069
    PUSH EAX                            ; 0040f06f
    MOV dword ptr [EBX + 0x14c],0x599574 ; 0040f070 | g_CAmmoBoxVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040f07a
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040f07f
    MOV ESI,0x578359                    ; 0040f082 | = "CGun"
    LEA EDI,[EBX + 0x2cc]               ; 0040f087
    PUSH EDI                            ; 0040f08d
    MOV AL,byte ptr [ESI]               ; 0040f08e | = "CGun" | s_un_00578359+2
        ;   Label: LAB_0040f08e
    MOV byte ptr [EDI],AL               ; 0040f090
    CMP AL,0x0                          ; 0040f092
    JZ 0x0040f0a6                       ; 0040f094
        ;   XREF to: 0040f0a6 (CONDITIONAL_JUMP)  ; LAB_0040f0a6
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f096 | s_Gun_00578359+1 | s_n_00578359+3
    ADD ESI,0x2                         ; 0040f099
    MOV byte ptr [EDI + 0x1],AL         ; 0040f09c
    ADD EDI,0x2                         ; 0040f09f
    CMP AL,0x0                          ; 0040f0a2
    JNZ 0x0040f08e                      ; 0040f0a4
        ;   XREF to: 0040f08e (CONDITIONAL_JUMP)  ; LAB_0040f08e
    POP EDI                             ; 0040f0a6
        ;   Label: LAB_0040f0a6
    MOV dword ptr [EBX + 0x30c],0x14    ; 0040f0a7
    MOV dword ptr [EBX + 0x310],0x0     ; 0040f0b1
    MOV dword ptr [EBX + 0x314],0x0     ; 0040f0bb
    MOV dword ptr [EBX + 0x318],0x0     ; 0040f0c5
    MOV dword ptr [EBX + 0x31c],0x0     ; 0040f0cf
    MOV byte ptr [EBX + 0x320],0x0      ; 0040f0d9
    MOV EAX,EBX                         ; 0040f0e0
    MOV dword ptr [EBX + 0x340],0x0     ; 0040f0e2
    POP EDI                             ; 0040f0ec
    POP ESI                             ; 0040f0ed
    POP EBX                             ; 0040f0ee
    RET                                 ; 0040f0ef

