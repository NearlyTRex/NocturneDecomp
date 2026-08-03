; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(int param_1,float *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbc50
        ;   Label: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_004cbc50
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cbc51
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cbc55
    ADD EAX,0x150                       ; 004cbc59
    PUSH EAX                            ; 004cbc5e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004cbc5f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD EAX,0x338                       ; 004cbc64
    MOV EDX,dword ptr [EAX]             ; 004cbc69
    LEA ECX,[EAX + 0x4]                 ; 004cbc6b
    MOV dword ptr [EBX],EDX             ; 004cbc6e
    LEA EDX,[EBX + 0x4]                 ; 004cbc70
    MOV ECX,dword ptr [ECX]             ; 004cbc73
    MOV dword ptr [EDX],ECX             ; 004cbc75
    LEA ECX,[EAX + 0x8]                 ; 004cbc77
    MOV ECX,dword ptr [ECX]             ; 004cbc7a
    MOV dword ptr [EDX + 0x4],ECX       ; 004cbc7c
    MOV ECX,dword ptr [EAX + 0xc]       ; 004cbc7f
    ADD EAX,0xc                         ; 004cbc82
    MOV dword ptr [EDX + 0x8],ECX       ; 004cbc85
    LEA ECX,[EAX + 0x4]                 ; 004cbc88
    MOV ECX,dword ptr [ECX]             ; 004cbc8b
    MOV dword ptr [EDX + 0xc],ECX       ; 004cbc8d
    MOV EAX,dword ptr [EAX + 0x8]       ; 004cbc90
    ADD ESP,0x4                         ; 004cbc93
    MOV dword ptr [EDX + 0x10],EAX      ; 004cbc96
    MOV EAX,EBX                         ; 004cbc99
    POP EBX                             ; 004cbc9b
    RET                                 ; 004cbc9c

