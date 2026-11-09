; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * core_armour_cpp_CArmour_ctor_FUN_0040ee40(CArmour *this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_armour.cpp_factoryFuncArmour_FUN_0040ee10 at 0040ee23
;
; Referenced Globals:
;   undefined4 DAT_005f2678
;   undefined4 DAT_005f267c
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ee40
        ;   Label: core_armour.cpp_CArmour_ctor_FUN_0040ee40
    PUSH ESI                            ; 0040ee41
    PUSH EDI                            ; 0040ee42
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040ee43
    PUSH EDX                            ; 0040ee47
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0040ee48
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0040ee4d
    PUSH 0x5cb35e                       ; 0040ee50
    MOV EBX,EAX                         ; 0040ee55
    LEA EDI,[EAX + 0x2b4]               ; 0040ee57
    PUSH EDI                            ; 0040ee5d
    MOV ESI,0x5cb369                    ; 0040ee5e
    MOV dword ptr [EAX + 0x2b0],0x5f2684 ; 0040ee63
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0040ee6d
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005f2678]          ; 0040ee72 | DAT_005f2678
    FLD float ptr [0x005f267c]          ; 0040ee78 | DAT_005f267c
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 0040ee7e
    ADD ESP,0x8                         ; 0040ee88
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 0040ee8b
    LEA EDI,[EBX + 0x10af8]             ; 0040ee95
    FXCH                                ; 0040ee9b
    FSTP float ptr [EBX + 0x3438]       ; 0040ee9d
    FSTP float ptr [EBX + 0x343c]       ; 0040eea3
    PUSH EDI                            ; 0040eea9
    MOV AL,byte ptr [ESI]               ; 0040eeaa
        ;   Label: LAB_0040eeaa
    MOV byte ptr [EDI],AL               ; 0040eeac
    CMP AL,0x0                          ; 0040eeae
    JZ 0x0040eec2                       ; 0040eeb0
        ;   XREF to: 0040eec2 (CONDITIONAL_JUMP)  ; LAB_0040eec2
    MOV AL,byte ptr [ESI + 0x1]         ; 0040eeb2
    ADD ESI,0x2                         ; 0040eeb5
    MOV byte ptr [EDI + 0x1],AL         ; 0040eeb8
    ADD EDI,0x2                         ; 0040eebb
    CMP AL,0x0                          ; 0040eebe
    JNZ 0x0040eeaa                      ; 0040eec0
        ;   XREF to: 0040eeaa (CONDITIONAL_JUMP)  ; LAB_0040eeaa
    POP EDI                             ; 0040eec2
        ;   Label: LAB_0040eec2
    MOV dword ptr [EBX + 0x280c],0x2    ; 0040eec3
    MOV EAX,EBX                         ; 0040eecd
    MOV dword ptr [EBX + 0x259c],0x40490fdb ; 0040eecf
    POP EDI                             ; 0040eed9
    POP ESI                             ; 0040eeda
    POP EBX                             ; 0040eedb
    RET                                 ; 0040eedc

