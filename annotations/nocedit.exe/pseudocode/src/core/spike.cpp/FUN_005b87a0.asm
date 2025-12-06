; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_spike.cpp_FUN_005b87a0()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b87a0
        ;   Label: core_spike.cpp_FUN_005b87a0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b87a1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b87a5
    ADD EAX,0x158                       ; 005b87a9
    PUSH EAX                            ; 005b87ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005b87af | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 005b87b4
    MOV EDX,dword ptr [EAX]             ; 005b87ba
    LEA ECX,[EAX + 0x4]                 ; 005b87bc
    MOV dword ptr [EBX],EDX             ; 005b87bf
    LEA EDX,[EBX + 0x4]                 ; 005b87c1
    MOV ECX,dword ptr [ECX]             ; 005b87c4
    MOV dword ptr [EDX],ECX             ; 005b87c6
    LEA ECX,[EAX + 0x8]                 ; 005b87c8
    MOV ECX,dword ptr [ECX]             ; 005b87cb
    MOV dword ptr [EDX + 0x4],ECX       ; 005b87cd
    MOV ECX,dword ptr [EAX + 0xc]       ; 005b87d0
    ADD EAX,0xc                         ; 005b87d3
    MOV dword ptr [EDX + 0x8],ECX       ; 005b87d6
    LEA ECX,[EAX + 0x4]                 ; 005b87d9
    MOV ECX,dword ptr [ECX]             ; 005b87dc
    MOV dword ptr [EDX + 0xc],ECX       ; 005b87de
    MOV EAX,dword ptr [EAX + 0x8]       ; 005b87e1
    ADD ESP,0x4                         ; 005b87e4
    MOV dword ptr [EDX + 0x10],EAX      ; 005b87e7
    MOV EAX,EBX                         ; 005b87ea
    POP EBX                             ; 005b87ec
    RET                                 ; 005b87ed

