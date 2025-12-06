; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_health.cpp_FUN_004f1ed0()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1ed0
        ;   Label: core_health.cpp_FUN_004f1ed0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f1ed1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f1ed5
    ADD EAX,0x158                       ; 004f1ed9
    PUSH EAX                            ; 004f1ede
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004f1edf | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 004f1ee4
    MOV EDX,dword ptr [EAX]             ; 004f1eea
    LEA ECX,[EAX + 0x4]                 ; 004f1eec
    MOV dword ptr [EBX],EDX             ; 004f1eef
    LEA EDX,[EBX + 0x4]                 ; 004f1ef1
    MOV ECX,dword ptr [ECX]             ; 004f1ef4
    MOV dword ptr [EDX],ECX             ; 004f1ef6
    LEA ECX,[EAX + 0x8]                 ; 004f1ef8
    MOV ECX,dword ptr [ECX]             ; 004f1efb
    MOV dword ptr [EDX + 0x4],ECX       ; 004f1efd
    MOV ECX,dword ptr [EAX + 0xc]       ; 004f1f00
    ADD EAX,0xc                         ; 004f1f03
    MOV dword ptr [EDX + 0x8],ECX       ; 004f1f06
    LEA ECX,[EAX + 0x4]                 ; 004f1f09
    MOV ECX,dword ptr [ECX]             ; 004f1f0c
    MOV dword ptr [EDX + 0xc],ECX       ; 004f1f0e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f1f11
    ADD ESP,0x4                         ; 004f1f14
    MOV dword ptr [EDX + 0x10],EAX      ; 004f1f17
    MOV EAX,EBX                         ; 004f1f1a
    POP EBX                             ; 004f1f1c
    RET                                 ; 004f1f1d

