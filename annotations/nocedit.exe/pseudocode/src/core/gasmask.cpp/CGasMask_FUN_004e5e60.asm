; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * __cdecl core_gasmask_cpp_CGasMask_FUN_004e5e60(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5e60
        ;   Label: core_gasmask.cpp_CGasMask_FUN_004e5e60
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e5e61
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e5e65
    ADD EAX,0x158                       ; 004e5e69
    PUSH EAX                            ; 004e5e6e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004e5e6f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 004e5e74
    MOV EDX,dword ptr [EAX]             ; 004e5e7a
    LEA ECX,[EAX + 0x4]                 ; 004e5e7c
    MOV dword ptr [EBX],EDX             ; 004e5e7f
    LEA EDX,[EBX + 0x4]                 ; 004e5e81
    MOV ECX,dword ptr [ECX]             ; 004e5e84
    MOV dword ptr [EDX],ECX             ; 004e5e86
    LEA ECX,[EAX + 0x8]                 ; 004e5e88
    MOV ECX,dword ptr [ECX]             ; 004e5e8b
    MOV dword ptr [EDX + 0x4],ECX       ; 004e5e8d
    MOV ECX,dword ptr [EAX + 0xc]       ; 004e5e90
    ADD EAX,0xc                         ; 004e5e93
    MOV dword ptr [EDX + 0x8],ECX       ; 004e5e96
    LEA ECX,[EAX + 0x4]                 ; 004e5e99
    MOV ECX,dword ptr [ECX]             ; 004e5e9c
    MOV dword ptr [EDX + 0xc],ECX       ; 004e5e9e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004e5ea1
    ADD ESP,0x4                         ; 004e5ea4
    MOV dword ptr [EDX + 0x10],EAX      ; 004e5ea7
    MOV EAX,EBX                         ; 004e5eaa
    POP EBX                             ; 004e5eac
    RET                                 ; 004e5ead

