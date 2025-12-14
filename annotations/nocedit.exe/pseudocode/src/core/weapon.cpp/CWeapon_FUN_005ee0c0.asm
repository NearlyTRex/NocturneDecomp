; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * core_weapon.cpp_CWeapon_FUN_005ee0c0(CWeapon * this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee0c0
        ;   Label: core_weapon.cpp_CWeapon_FUN_005ee0c0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ee0c1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ee0c5
    ADD EAX,0x158                       ; 005ee0c9
    PUSH EAX                            ; 005ee0ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005ee0cf
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 005ee0d4
    MOV EDX,dword ptr [EAX]             ; 005ee0da
    LEA ECX,[EAX + 0x4]                 ; 005ee0dc
    MOV dword ptr [EBX],EDX             ; 005ee0df
    LEA EDX,[EBX + 0x4]                 ; 005ee0e1
    MOV ECX,dword ptr [ECX]             ; 005ee0e4
    MOV dword ptr [EDX],ECX             ; 005ee0e6
    LEA ECX,[EAX + 0x8]                 ; 005ee0e8
    MOV ECX,dword ptr [ECX]             ; 005ee0eb
    MOV dword ptr [EDX + 0x4],ECX       ; 005ee0ed
    MOV ECX,dword ptr [EAX + 0xc]       ; 005ee0f0
    ADD EAX,0xc                         ; 005ee0f3
    MOV dword ptr [EDX + 0x8],ECX       ; 005ee0f6
    LEA ECX,[EAX + 0x4]                 ; 005ee0f9
    MOV ECX,dword ptr [ECX]             ; 005ee0fc
    MOV dword ptr [EDX + 0xc],ECX       ; 005ee0fe
    MOV EAX,dword ptr [EAX + 0x8]       ; 005ee101
    ADD ESP,0x4                         ; 005ee104
    MOV dword ptr [EDX + 0x10],EAX      ; 005ee107
    MOV EAX,EBX                         ; 005ee10a
    POP EBX                             ; 005ee10c
    RET                                 ; 005ee10d

