; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * core_anvil.cpp_CAnvil_FUN_00411fe0(CAnvil * this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411fe0
        ;   Label: core_anvil.cpp_CAnvil_FUN_00411fe0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00411fe1
    MOV EAX,dword ptr [ESP + 0x8]       ; 00411fe5
    ADD EAX,0x158                       ; 00411fe9
    PUSH EAX                            ; 00411fee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00411fef
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00411ff4
    MOV EDX,dword ptr [EAX]             ; 00411ffa
    LEA ECX,[EAX + 0x4]                 ; 00411ffc
    MOV dword ptr [EBX],EDX             ; 00411fff
    LEA EDX,[EBX + 0x4]                 ; 00412001
    MOV ECX,dword ptr [ECX]             ; 00412004
    MOV dword ptr [EDX],ECX             ; 00412006
    LEA ECX,[EAX + 0x8]                 ; 00412008
    MOV ECX,dword ptr [ECX]             ; 0041200b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041200d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00412010
    ADD EAX,0xc                         ; 00412013
    MOV dword ptr [EDX + 0x8],ECX       ; 00412016
    LEA ECX,[EAX + 0x4]                 ; 00412019
    MOV ECX,dword ptr [ECX]             ; 0041201c
    MOV dword ptr [EDX + 0xc],ECX       ; 0041201e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00412021
    ADD ESP,0x4                         ; 00412024
    MOV dword ptr [EDX + 0x10],EAX      ; 00412027
    MOV EAX,EBX                         ; 0041202a
    POP EBX                             ; 0041202c
    RET                                 ; 0041202d

