; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_trap_cpp_CTrap_getBoundingBox_FUN_005dea00(CTrap *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dea00
        ;   Label: core_trap.cpp_CTrap_getBoundingBox_FUN_005dea00
    MOV EBX,dword ptr [ESP + 0xc]       ; 005dea01
    MOV EAX,dword ptr [ESP + 0x8]       ; 005dea05
    ADD EAX,0x158                       ; 005dea09
    PUSH EAX                            ; 005dea0e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005dea0f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 005dea14
    MOV EDX,dword ptr [EAX]             ; 005dea1a
    LEA ECX,[EAX + 0x4]                 ; 005dea1c
    MOV dword ptr [EBX],EDX             ; 005dea1f
    LEA EDX,[EBX + 0x4]                 ; 005dea21
    MOV ECX,dword ptr [ECX]             ; 005dea24
    MOV dword ptr [EDX],ECX             ; 005dea26
    LEA ECX,[EAX + 0x8]                 ; 005dea28
    MOV ECX,dword ptr [ECX]             ; 005dea2b
    MOV dword ptr [EDX + 0x4],ECX       ; 005dea2d
    MOV ECX,dword ptr [EAX + 0xc]       ; 005dea30
    ADD EAX,0xc                         ; 005dea33
    MOV dword ptr [EDX + 0x8],ECX       ; 005dea36
    LEA ECX,[EAX + 0x4]                 ; 005dea39
    MOV ECX,dword ptr [ECX]             ; 005dea3c
    MOV dword ptr [EDX + 0xc],ECX       ; 005dea3e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005dea41
    ADD ESP,0x4                         ; 005dea44
    MOV dword ptr [EDX + 0x10],EAX      ; 005dea47
    MOV EAX,EBX                         ; 005dea4a
    POP EBX                             ; 005dea4c
    RET                                 ; 005dea4d

