; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_FUN_004be910()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be910
        ;   Label: core_filmreel.cpp_FUN_004be910
    MOV EBX,dword ptr [ESP + 0xc]       ; 004be911
    MOV EAX,dword ptr [ESP + 0x8]       ; 004be915
    ADD EAX,0x158                       ; 004be919
    PUSH EAX                            ; 004be91e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004be91f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 004be924
    MOV EDX,dword ptr [EAX]             ; 004be92a
    LEA ECX,[EAX + 0x4]                 ; 004be92c
    MOV dword ptr [EBX],EDX             ; 004be92f
    LEA EDX,[EBX + 0x4]                 ; 004be931
    MOV ECX,dword ptr [ECX]             ; 004be934
    MOV dword ptr [EDX],ECX             ; 004be936
    LEA ECX,[EAX + 0x8]                 ; 004be938
    MOV ECX,dword ptr [ECX]             ; 004be93b
    MOV dword ptr [EDX + 0x4],ECX       ; 004be93d
    MOV ECX,dword ptr [EAX + 0xc]       ; 004be940
    ADD EAX,0xc                         ; 004be943
    MOV dword ptr [EDX + 0x8],ECX       ; 004be946
    LEA ECX,[EAX + 0x4]                 ; 004be949
    MOV ECX,dword ptr [ECX]             ; 004be94c
    MOV dword ptr [EDX + 0xc],ECX       ; 004be94e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004be951
    ADD ESP,0x4                         ; 004be954
    MOV dword ptr [EDX + 0x10],EAX      ; 004be957
    MOV EAX,EBX                         ; 004be95a
    POP EBX                             ; 004be95c
    RET                                 ; 004be95d

