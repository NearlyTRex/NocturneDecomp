; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_0040e9e0(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_armour.cpp_factoryFuncArmour_FUN_0040e9b0 at 0040e9c3
;
; Referenced Globals:
;   undefined4 DAT_005fb7c8
;   undefined4 DAT_005fb7cc
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e9e0
        ;   Label: core_armour.cpp_CArmour_ctor_FUN_0040e9e0
    PUSH ESI                            ; 0040e9e1
    PUSH EDI                            ; 0040e9e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040e9e3
    PUSH EDX                            ; 0040e9e7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0040e9e8
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0040e9ed
    PUSH 0x5d32c9                       ; 0040e9f0
    MOV EBX,EAX                         ; 0040e9f5
    LEA EDI,[EAX + 0x158]               ; 0040e9f7
    PUSH EDI                            ; 0040e9fd
    MOV ESI,0x5d32d4                    ; 0040e9fe
    MOV dword ptr [EAX + 0x154],0x5fb7d4 ; 0040ea03
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 0040ea0d
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005fb7c8]          ; 0040ea12 | DAT_005fb7c8
    FLD float ptr [0x005fb7cc]          ; 0040ea18 | DAT_005fb7cc
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0040ea1e
    ADD ESP,0x8                         ; 0040ea28
    MOV dword ptr [EBX + 0x2ff0],0x40000000 ; 0040ea2b
    LEA EDI,[EBX + 0xc268]              ; 0040ea35
    FXCH                                ; 0040ea3b
    FSTP float ptr [EBX + 0x2ff4]       ; 0040ea3d
    FSTP float ptr [EBX + 0x2ff8]       ; 0040ea43
    PUSH EDI                            ; 0040ea49
    MOV AL,byte ptr [ESI]               ; 0040ea4a
        ;   Label: LAB_0040ea4a
    MOV byte ptr [EDI],AL               ; 0040ea4c
    CMP AL,0x0                          ; 0040ea4e
    JZ 0x0040ea62                       ; 0040ea50
        ;   XREF to: 0040ea62 (CONDITIONAL_JUMP)  ; LAB_0040ea62
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ea52
    ADD ESI,0x2                         ; 0040ea55
    MOV byte ptr [EDI + 0x1],AL         ; 0040ea58
    ADD EDI,0x2                         ; 0040ea5b
    CMP AL,0x0                          ; 0040ea5e
    JNZ 0x0040ea4a                      ; 0040ea60
        ;   XREF to: 0040ea4a (CONDITIONAL_JUMP)  ; LAB_0040ea4a
    POP EDI                             ; 0040ea62
        ;   Label: LAB_0040ea62
    MOV dword ptr [EBX + 0x27a0],0x2    ; 0040ea63
    MOV EAX,EBX                         ; 0040ea6d
    MOV dword ptr [EBX + 0x252c],0x40490fdb ; 0040ea6f
    POP EDI                             ; 0040ea79
    POP ESI                             ; 0040ea7a
    POP EBX                             ; 0040ea7b
    RET                                 ; 0040ea7c

