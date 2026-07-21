; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005335a0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005335a0
        ;   Label: FUN_005335a0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005335a1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005335a5
    ADD EAX,0x150                       ; 005335a9
    PUSH EAX                            ; 005335ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 005335af
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 005335b4
    MOV EDX,dword ptr [EAX]             ; 005335ba
    LEA ECX,[EAX + 0x4]                 ; 005335bc
    MOV dword ptr [EBX],EDX             ; 005335bf
    LEA EDX,[EBX + 0x4]                 ; 005335c1
    MOV ECX,dword ptr [ECX]             ; 005335c4
    MOV dword ptr [EDX],ECX             ; 005335c6
    LEA ECX,[EAX + 0x8]                 ; 005335c8
    MOV ECX,dword ptr [ECX]             ; 005335cb
    MOV dword ptr [EDX + 0x4],ECX       ; 005335cd
    MOV ECX,dword ptr [EAX + 0xc]       ; 005335d0
    ADD EAX,0xc                         ; 005335d3
    MOV dword ptr [EDX + 0x8],ECX       ; 005335d6
    LEA ECX,[EAX + 0x4]                 ; 005335d9
    MOV ECX,dword ptr [ECX]             ; 005335dc
    MOV dword ptr [EDX + 0xc],ECX       ; 005335de
    MOV EAX,dword ptr [EAX + 0x8]       ; 005335e1
    ADD ESP,0x4                         ; 005335e4
    MOV dword ptr [EDX + 0x10],EAX      ; 005335e7
    MOV EAX,EBX                         ; 005335ea
    POP EBX                             ; 005335ec
    RET                                 ; 005335ed

