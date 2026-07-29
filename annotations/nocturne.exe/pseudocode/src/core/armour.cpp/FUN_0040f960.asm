; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * __cdecl core_armour_cpp_FUN_0040f960(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_armour.cpp_FUN_0040f930 at 0040f943
;
; Referenced Globals:
;   TerminatedCString s_armour_dfm_0057845a
;   TerminatedCString s_none_00578465
;   undefined4 s_one_00578465+1
;   undefined4 s_ne_00578465+2
;   undefined4 s_e_00578465+3
;   float FLOAT_005997a8 = 50
;   float FLOAT_005997ac = 100
;   CEnemy_full_vtable g_CArmourVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f960
        ;   Label: core_armour.cpp_FUN_0040f960
    PUSH ESI                            ; 0040f961
    PUSH EDI                            ; 0040f962
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040f963
    PUSH EDX                            ; 0040f967
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 0040f968
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0040f96d
    PUSH 0x57845a                       ; 0040f970 | = "armour.dfm"
    MOV EBX,EAX                         ; 0040f975
    LEA EDI,[EAX + 0x150]               ; 0040f977
    PUSH EDI                            ; 0040f97d
    MOV ESI,0x578465                    ; 0040f97e | = "none"
    MOV dword ptr [EAX + 0x14c],0x5997b4 ; 0040f983 | g_CArmourVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0040f98d
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005997a8]          ; 0040f992 | FLOAT_005997a8
    FLD float ptr [0x005997ac]          ; 0040f998 | FLOAT_005997ac
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 0040f99e
    ADD ESP,0x8                         ; 0040f9a8
    MOV dword ptr [EBX + 0x2dd8],0x40000000 ; 0040f9ab
    LEA EDI,[EBX + 0xbd24]              ; 0040f9b5
    FXCH                                ; 0040f9bb
    FSTP float ptr [EBX + 0x2ddc]       ; 0040f9bd
    FSTP float ptr [EBX + 0x2de0]       ; 0040f9c3
    PUSH EDI                            ; 0040f9c9
    MOV AL,byte ptr [ESI]               ; 0040f9ca | = "none" | s_ne_00578465+2
        ;   Label: LAB_0040f9ca
    MOV byte ptr [EDI],AL               ; 0040f9cc
    CMP AL,0x0                          ; 0040f9ce
    JZ 0x0040f9e2                       ; 0040f9d0
        ;   XREF to: 0040f9e2 (CONDITIONAL_JUMP)  ; LAB_0040f9e2
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f9d2 | s_one_00578465+1 | s_e_00578465+3
    ADD ESI,0x2                         ; 0040f9d5
    MOV byte ptr [EDI + 0x1],AL         ; 0040f9d8
    ADD EDI,0x2                         ; 0040f9db
    CMP AL,0x0                          ; 0040f9de
    JNZ 0x0040f9ca                      ; 0040f9e0
        ;   XREF to: 0040f9ca (CONDITIONAL_JUMP)  ; LAB_0040f9ca
    POP EDI                             ; 0040f9e2
        ;   Label: LAB_0040f9e2
    MOV EAX,EBX                         ; 0040f9e3
    MOV dword ptr [EBX + 0x2608],0x2    ; 0040f9e5
    POP EDI                             ; 0040f9ef
    POP ESI                             ; 0040f9f0
    POP EBX                             ; 0040f9f1
    RET                                 ; 0040f9f2

