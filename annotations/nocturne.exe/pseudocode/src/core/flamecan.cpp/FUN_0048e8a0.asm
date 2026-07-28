; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_flamecan_cpp_FUN_0048e8a0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e8a0
        ;   Label: core_flamecan.cpp_FUN_0048e8a0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048e8a1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048e8a5
    ADD EAX,0x150                       ; 0048e8a9
    PUSH EAX                            ; 0048e8ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0048e8af
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 0048e8b4
    MOV EDX,dword ptr [EAX]             ; 0048e8ba
    LEA ECX,[EAX + 0x4]                 ; 0048e8bc
    MOV dword ptr [EBX],EDX             ; 0048e8bf
    LEA EDX,[EBX + 0x4]                 ; 0048e8c1
    MOV ECX,dword ptr [ECX]             ; 0048e8c4
    MOV dword ptr [EDX],ECX             ; 0048e8c6
    LEA ECX,[EAX + 0x8]                 ; 0048e8c8
    MOV ECX,dword ptr [ECX]             ; 0048e8cb
    MOV dword ptr [EDX + 0x4],ECX       ; 0048e8cd
    MOV ECX,dword ptr [EAX + 0xc]       ; 0048e8d0
    ADD EAX,0xc                         ; 0048e8d3
    MOV dword ptr [EDX + 0x8],ECX       ; 0048e8d6
    LEA ECX,[EAX + 0x4]                 ; 0048e8d9
    MOV ECX,dword ptr [ECX]             ; 0048e8dc
    MOV dword ptr [EDX + 0xc],ECX       ; 0048e8de
    MOV EAX,dword ptr [EAX + 0x8]       ; 0048e8e1
    ADD ESP,0x4                         ; 0048e8e4
    MOV dword ptr [EDX + 0x10],EAX      ; 0048e8e7
    MOV EAX,EBX                         ; 0048e8ea
    POP EBX                             ; 0048e8ec
    RET                                 ; 0048e8ed

