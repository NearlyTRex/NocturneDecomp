; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * core_simbox.cpp_CSimBox_FUN_00589160(CSimBox * this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589160
        ;   Label: core_simbox.cpp_CSimBox_FUN_00589160
    MOV EBX,dword ptr [ESP + 0xc]       ; 00589161
    MOV EAX,dword ptr [ESP + 0x8]       ; 00589165
    ADD EAX,0x158                       ; 00589169
    PUSH EAX                            ; 0058916e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0058916f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00589174
    MOV EDX,dword ptr [EAX]             ; 0058917a
    LEA ECX,[EAX + 0x4]                 ; 0058917c
    MOV dword ptr [EBX],EDX             ; 0058917f
    LEA EDX,[EBX + 0x4]                 ; 00589181
    MOV ECX,dword ptr [ECX]             ; 00589184
    MOV dword ptr [EDX],ECX             ; 00589186
    LEA ECX,[EAX + 0x8]                 ; 00589188
    MOV ECX,dword ptr [ECX]             ; 0058918b
    MOV dword ptr [EDX + 0x4],ECX       ; 0058918d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00589190
    ADD EAX,0xc                         ; 00589193
    MOV dword ptr [EDX + 0x8],ECX       ; 00589196
    LEA ECX,[EAX + 0x4]                 ; 00589199
    MOV ECX,dword ptr [ECX]             ; 0058919c
    MOV dword ptr [EDX + 0xc],ECX       ; 0058919e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005891a1
    ADD ESP,0x4                         ; 005891a4
    MOV dword ptr [EDX + 0x10],EAX      ; 005891a7
    MOV EAX,EBX                         ; 005891aa
    POP EBX                             ; 005891ac
    RET                                 ; 005891ad

