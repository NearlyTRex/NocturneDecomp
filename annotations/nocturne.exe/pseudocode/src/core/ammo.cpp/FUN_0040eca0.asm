; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_ammo_cpp_FUN_0040eca0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eca0
        ;   Label: core_ammo.cpp_FUN_0040eca0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040eca1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040eca5
    ADD EAX,0x150                       ; 0040eca9
    PUSH EAX                            ; 0040ecae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0040ecaf
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 0040ecb4
    MOV EDX,dword ptr [EAX]             ; 0040ecba
    LEA ECX,[EAX + 0x4]                 ; 0040ecbc
    MOV dword ptr [EBX],EDX             ; 0040ecbf
    LEA EDX,[EBX + 0x4]                 ; 0040ecc1
    MOV ECX,dword ptr [ECX]             ; 0040ecc4
    MOV dword ptr [EDX],ECX             ; 0040ecc6
    LEA ECX,[EAX + 0x8]                 ; 0040ecc8
    MOV ECX,dword ptr [ECX]             ; 0040eccb
    MOV dword ptr [EDX + 0x4],ECX       ; 0040eccd
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040ecd0
    ADD EAX,0xc                         ; 0040ecd3
    MOV dword ptr [EDX + 0x8],ECX       ; 0040ecd6
    LEA ECX,[EAX + 0x4]                 ; 0040ecd9
    MOV ECX,dword ptr [ECX]             ; 0040ecdc
    MOV dword ptr [EDX + 0xc],ECX       ; 0040ecde
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040ece1
    ADD ESP,0x4                         ; 0040ece4
    MOV dword ptr [EDX + 0x10],EAX      ; 0040ece7
    MOV EAX,EBX                         ; 0040ecea
    POP EBX                             ; 0040ecec
    RET                                 ; 0040eced

