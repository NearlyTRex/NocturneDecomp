; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0050f0c0(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_meshlod.cpp_factoryFuncMimic_FUN_0050f090 at 0050f0a3
;
; Referenced Globals:
;   undefined4 DAT_006039cc
;   undefined4 DAT_006039d0
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_0043e5c0
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_morph.cpp_CMorph_ctor_FUN_00522fa0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050f0c0
        ;   Label: core_mimic.cpp_CMimic_ctor_FUN_0050f0c0
    PUSH EDI                            ; 0050f0c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050f0c2
    PUSH EDX                            ; 0050f0c6
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0050f0c7
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0050f0cc
    ADD EAX,0xc330                      ; 0050f0cf
    PUSH EAX                            ; 0050f0d4
    CALL core_cloth.cpp_CCloth_ctor_FUN_0043e5c0 ; 0050f0d5
        ;   XREF to: 0043e5c0 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_0043e5c0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0050f0da
    ADD EAX,0x3ab60                     ; 0050f0dd
    PUSH EAX                            ; 0050f0e2
    CALL core_morph.cpp_CMorph_ctor_FUN_00522fa0 ; 0050f0e3
        ;   XREF to: 00522fa0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_00522fa0(CMorph * this_ptr)
    LEA EDX,[EAX + 0xfffb9170]          ; 0050f0e8
    MOV dword ptr [EDX + 0x154],0x6039e4 ; 0050f0ee
    MOV dword ptr [EDX + 0x2fec],0x3f000000 ; 0050f0f8
    MOV ESI,0x5e87cf                    ; 0050f102
    MOV dword ptr [EDX + 0x2ff0],0x3f800000 ; 0050f107
    FLD float ptr [0x006039cc]          ; 0050f111 | DAT_006039cc
    MOV byte ptr [EDX + 0xc268],0x0     ; 0050f117
    FLD float ptr [0x006039d0]          ; 0050f11e | DAT_006039d0
    MOV byte ptr [EDX + 0xc2cc],0x0     ; 0050f124
    ADD ESP,0x4                         ; 0050f12b
    FXCH                                ; 0050f12e
    FSTP float ptr [EDX + 0x2ff4]       ; 0050f130
    FSTP float ptr [EDX + 0x2ff8]       ; 0050f136
    MOV dword ptr [EDX + 0x46e60],0x0   ; 0050f13c
    LEA EDI,[EDX + 0x46e68]             ; 0050f146
    MOV dword ptr [EDX + 0x46e64],0x0   ; 0050f14c
    PUSH EDI                            ; 0050f156
    MOV AL,byte ptr [ESI]               ; 0050f157
        ;   Label: LAB_0050f157
    MOV byte ptr [EDI],AL               ; 0050f159
    CMP AL,0x0                          ; 0050f15b
    JZ 0x0050f16f                       ; 0050f15d
        ;   XREF to: 0050f16f (CONDITIONAL_JUMP)  ; LAB_0050f16f
    MOV AL,byte ptr [ESI + 0x1]         ; 0050f15f
    ADD ESI,0x2                         ; 0050f162
    MOV byte ptr [EDI + 0x1],AL         ; 0050f165
    ADD EDI,0x2                         ; 0050f168
    CMP AL,0x0                          ; 0050f16b
    JNZ 0x0050f157                      ; 0050f16d
        ;   XREF to: 0050f157 (CONDITIONAL_JUMP)  ; LAB_0050f157
    POP EDI                             ; 0050f16f
        ;   Label: LAB_0050f16f
    MOV dword ptr [EDX + 0x47ac0],0x0   ; 0050f170
    MOV dword ptr [EDX + 0x47abc],0xbf800000 ; 0050f17a
    MOV dword ptr [EDX + 0x108],0x10000 ; 0050f184
    MOV dword ptr [EDX + 0x10c],0x10000 ; 0050f18e
    MOV EAX,EDX                         ; 0050f198
    MOV dword ptr [EDX + 0x110],0x10000 ; 0050f19a
    POP EDI                             ; 0050f1a4
    POP ESI                             ; 0050f1a5
    RET                                 ; 0050f1a6

