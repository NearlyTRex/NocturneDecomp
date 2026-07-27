; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_gasmask_cpp_FUN_004a8b70(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8b70
        ;   Label: core_gasmask.cpp_FUN_004a8b70
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a8b71
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a8b75
    ADD EAX,0x150                       ; 004a8b79
    PUSH EAX                            ; 004a8b7e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004a8b7f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 004a8b84
    MOV EDX,dword ptr [EAX]             ; 004a8b8a
    LEA ECX,[EAX + 0x4]                 ; 004a8b8c
    MOV dword ptr [EBX],EDX             ; 004a8b8f
    LEA EDX,[EBX + 0x4]                 ; 004a8b91
    MOV ECX,dword ptr [ECX]             ; 004a8b94
    MOV dword ptr [EDX],ECX             ; 004a8b96
    LEA ECX,[EAX + 0x8]                 ; 004a8b98
    MOV ECX,dword ptr [ECX]             ; 004a8b9b
    MOV dword ptr [EDX + 0x4],ECX       ; 004a8b9d
    MOV ECX,dword ptr [EAX + 0xc]       ; 004a8ba0
    ADD EAX,0xc                         ; 004a8ba3
    MOV dword ptr [EDX + 0x8],ECX       ; 004a8ba6
    LEA ECX,[EAX + 0x4]                 ; 004a8ba9
    MOV ECX,dword ptr [ECX]             ; 004a8bac
    MOV dword ptr [EDX + 0xc],ECX       ; 004a8bae
    MOV EAX,dword ptr [EAX + 0x8]       ; 004a8bb1
    ADD ESP,0x4                         ; 004a8bb4
    MOV dword ptr [EDX + 0x10],EAX      ; 004a8bb7
    MOV EAX,EBX                         ; 004a8bba
    POP EBX                             ; 004a8bbc
    RET                                 ; 004a8bbd

