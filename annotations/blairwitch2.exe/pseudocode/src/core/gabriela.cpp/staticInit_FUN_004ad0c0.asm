; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_staticInit_FUN_004ad0c0(void)
;
;
; Referenced Globals:
;   float g_FLOAT_005f7350 = 0.1414286
;   float g_FLOAT_005f7354 = 30
;   float g_FLOAT_005f7358 = 0.4074074
;   float g_FLOAT_005f735c = 30
;   float g_FLOAT_005f7360 = 0.1052632
;   float g_FLOAT_005f7364 = 20
;   float g_FLOAT_01cb0638
;   float g_FLOAT_01cb063c
;   float g_FLOAT_01cb0640
;   UVector3 g_GabriellaWeaponEuler
;   undefined4 g_GabriellaWeaponEuler+4
;   undefined4 g_GabriellaWeaponEuler+8
;   UVector3 g_GabriellaWeaponAttachEuler
;   undefined4 g_GabriellaWeaponAttachEuler+4
;   undefined4 g_GabriellaWeaponAttachEuler+8
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad0c0
        ;   Label: core_gabriela.cpp_staticInit_FUN_004ad0c0
    PUSH ESI                            ; 004ad0c1
    PUSH EDI                            ; 004ad0c2
    PUSH EBP                            ; 004ad0c3
    FLD float ptr [0x005f7350]          ; 004ad0c4 | g_FLOAT_005f7350
    FMUL float ptr [0x005f7354]         ; 004ad0ca | g_FLOAT_005f7354
    FLD float ptr [0x005f7358]          ; 004ad0d0 | g_FLOAT_005f7358
    FMUL float ptr [0x005f735c]         ; 004ad0d6 | g_FLOAT_005f735c
    FLD float ptr [0x005f7360]          ; 004ad0dc | g_FLOAT_005f7360
    FMUL float ptr [0x005f7364]         ; 004ad0e2 | g_FLOAT_005f7364
    MOV EDX,0x3f028f5c                  ; 004ad0e8
    MOV ECX,0xbca3d70a                  ; 004ad0ed
    MOV EBX,0x3db851ec                  ; 004ad0f2
    MOV ESI,0x3e4ccccd                  ; 004ad0f7
    MOV EDI,0xbea147ae                  ; 004ad0fc
    PUSH 0x1cedf18                      ; 004ad101
    MOV EAX,0x3fc90fdb                  ; 004ad106
    XOR EBP,EBP                         ; 004ad10b
    PUSH 0x3                            ; 004ad10d
    MOV dword ptr [0x01cb0644],EDX      ; 004ad10f | g_GabriellaWeaponEuler
    MOV dword ptr [0x01cb0648],ECX      ; 004ad115 | g_GabriellaWeaponEuler+4
    MOV dword ptr [0x01cb064c],EBX      ; 004ad11b | g_GabriellaWeaponEuler+8
    MOV dword ptr [0x01cb0650],ESI      ; 004ad121 | g_GabriellaWeaponAttachEuler
    MOV dword ptr [0x01cb0654],EDI      ; 004ad127 | g_GabriellaWeaponAttachEuler+4
    MOV dword ptr [0x01cb0658],EBP      ; 004ad12d | g_GabriellaWeaponAttachEuler+8
    MOV [0x01cb065c],EAX                ; 004ad133 | g_GabriellaWeaponAttachOffset
    MOV dword ptr [0x01cb0660],EBP      ; 004ad138 | g_GabriellaWeaponAttachOffset+4
    MOV dword ptr [0x01cb0670],EBP      ; 004ad13e | g_FLOAT_01cb0670
    FXCH ST2                            ; 004ad144
    FSTP float ptr [0x01cb0638]         ; 004ad146 | g_FLOAT_01cb0638
    FSTP float ptr [0x01cb063c]         ; 004ad14c | g_FLOAT_01cb063c
    PUSH 0x6163d4                       ; 004ad152
    FSTP float ptr [0x01cb0640]         ; 004ad157 | g_FLOAT_01cb0640
    PUSH 0x4ad290                       ; 004ad15d
    MOV ECX,0x3eb33333                  ; 004ad162
    MOV EBX,0x40133333                  ; 004ad167
    PUSH 0x5d6d7b                       ; 004ad16c
    MOV ESI,0x408ccccd                  ; 004ad171
    MOV dword ptr [0x01cb0664],ECX      ; 004ad176 | g_GabriellaWeaponAttachOffset+8
    PUSH 0x1cb06c8                      ; 004ad17c
    MOV dword ptr [0x01cb0668],EBX      ; 004ad181 | g_FLOAT_01cb0668
    MOV dword ptr [0x01cb066c],ESI      ; 004ad187 | g_FLOAT_01cb066c
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004ad18d
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ad192
    POP EBP                             ; 004ad195
    POP EDI                             ; 004ad196
    POP ESI                             ; 004ad197
    POP EBX                             ; 004ad198
    RET                                 ; 004ad199

