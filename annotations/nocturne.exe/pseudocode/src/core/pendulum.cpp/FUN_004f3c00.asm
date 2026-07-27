; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_pendulum_cpp_FUN_004f3c00(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3c00
        ;   Label: core_pendulum.cpp_FUN_004f3c00
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f3c01
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3c05
    ADD EAX,0x150                       ; 004f3c09
    PUSH EAX                            ; 004f3c0e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004f3c0f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 004f3c14
    MOV EDX,dword ptr [EAX]             ; 004f3c1a
    LEA ECX,[EAX + 0x4]                 ; 004f3c1c
    MOV dword ptr [EBX],EDX             ; 004f3c1f
    LEA EDX,[EBX + 0x4]                 ; 004f3c21
    MOV ECX,dword ptr [ECX]             ; 004f3c24
    MOV dword ptr [EDX],ECX             ; 004f3c26
    LEA ECX,[EAX + 0x8]                 ; 004f3c28
    MOV ECX,dword ptr [ECX]             ; 004f3c2b
    MOV dword ptr [EDX + 0x4],ECX       ; 004f3c2d
    MOV ECX,dword ptr [EAX + 0xc]       ; 004f3c30
    ADD EAX,0xc                         ; 004f3c33
    MOV dword ptr [EDX + 0x8],ECX       ; 004f3c36
    LEA ECX,[EAX + 0x4]                 ; 004f3c39
    MOV ECX,dword ptr [ECX]             ; 004f3c3c
    MOV dword ptr [EDX + 0xc],ECX       ; 004f3c3e
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f3c41
    ADD ESP,0x4                         ; 004f3c44
    MOV dword ptr [EDX + 0x10],EAX      ; 004f3c47
    MOV EAX,EBX                         ; 004f3c4a
    POP EBX                             ; 004f3c4c
    RET                                 ; 004f3c4d

