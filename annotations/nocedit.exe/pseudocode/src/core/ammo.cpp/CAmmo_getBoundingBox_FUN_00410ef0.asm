; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0(CAmmo * this_ptr, CBoundingBox3D * out_box)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410ef0
        ;   Label: core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00410ef1
    MOV EAX,dword ptr [ESP + 0x8]       ; 00410ef5
    ADD EAX,0x158                       ; 00410ef9
    PUSH EAX                            ; 00410efe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00410eff
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00410f04
    MOV EDX,dword ptr [EAX]             ; 00410f0a
    LEA ECX,[EAX + 0x4]                 ; 00410f0c
    MOV dword ptr [EBX],EDX             ; 00410f0f
    LEA EDX,[EBX + 0x4]                 ; 00410f11
    MOV ECX,dword ptr [ECX]             ; 00410f14
    MOV dword ptr [EDX],ECX             ; 00410f16
    LEA ECX,[EAX + 0x8]                 ; 00410f18
    MOV ECX,dword ptr [ECX]             ; 00410f1b
    MOV dword ptr [EDX + 0x4],ECX       ; 00410f1d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00410f20
    ADD EAX,0xc                         ; 00410f23
    MOV dword ptr [EDX + 0x8],ECX       ; 00410f26
    LEA ECX,[EAX + 0x4]                 ; 00410f29
    MOV ECX,dword ptr [ECX]             ; 00410f2c
    MOV dword ptr [EDX + 0xc],ECX       ; 00410f2e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00410f31
    ADD ESP,0x4                         ; 00410f34
    MOV dword ptr [EDX + 0x10],EAX      ; 00410f37
    MOV EAX,EBX                         ; 00410f3a
    POP EBX                             ; 00410f3c
    RET                                 ; 00410f3d

