; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_platfrm_cpp_FUN_004f6f50(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6f50
        ;   Label: core_platfrm.cpp_FUN_004f6f50
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f6f51
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f6f55
    ADD EAX,0x150                       ; 004f6f59
    PUSH EAX                            ; 004f6f5e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004f6f5f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 004f6f64
    MOV EDX,dword ptr [EAX]             ; 004f6f6a
    LEA ECX,[EAX + 0x4]                 ; 004f6f6c
    MOV dword ptr [EBX],EDX             ; 004f6f6f
    LEA EDX,[EBX + 0x4]                 ; 004f6f71
    MOV ECX,dword ptr [ECX]             ; 004f6f74
    MOV dword ptr [EDX],ECX             ; 004f6f76
    LEA ECX,[EAX + 0x8]                 ; 004f6f78
    MOV ECX,dword ptr [ECX]             ; 004f6f7b
    MOV dword ptr [EDX + 0x4],ECX       ; 004f6f7d
    MOV ECX,dword ptr [EAX + 0xc]       ; 004f6f80
    ADD EAX,0xc                         ; 004f6f83
    MOV dword ptr [EDX + 0x8],ECX       ; 004f6f86
    LEA ECX,[EAX + 0x4]                 ; 004f6f89
    MOV ECX,dword ptr [ECX]             ; 004f6f8c
    MOV dword ptr [EDX + 0xc],ECX       ; 004f6f8e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f6f91
    ADD ESP,0x4                         ; 004f6f94
    MOV dword ptr [EDX + 0x10],EAX      ; 004f6f97
    MOV EAX,EBX                         ; 004f6f9a
    POP EBX                             ; 004f6f9c
    RET                                 ; 004f6f9d

