; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_filmreel_cpp_FUN_00481e90(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481e90
        ;   Label: core_filmreel.cpp_FUN_00481e90
    MOV EBX,dword ptr [ESP + 0xc]       ; 00481e91
    MOV EAX,dword ptr [ESP + 0x8]       ; 00481e95
    ADD EAX,0x150                       ; 00481e99
    PUSH EAX                            ; 00481e9e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00481e9f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 00481ea4
    MOV EDX,dword ptr [EAX]             ; 00481eaa
    LEA ECX,[EAX + 0x4]                 ; 00481eac
    MOV dword ptr [EBX],EDX             ; 00481eaf
    LEA EDX,[EBX + 0x4]                 ; 00481eb1
    MOV ECX,dword ptr [ECX]             ; 00481eb4
    MOV dword ptr [EDX],ECX             ; 00481eb6
    LEA ECX,[EAX + 0x8]                 ; 00481eb8
    MOV ECX,dword ptr [ECX]             ; 00481ebb
    MOV dword ptr [EDX + 0x4],ECX       ; 00481ebd
    MOV ECX,dword ptr [EAX + 0xc]       ; 00481ec0
    ADD EAX,0xc                         ; 00481ec3
    MOV dword ptr [EDX + 0x8],ECX       ; 00481ec6
    LEA ECX,[EAX + 0x4]                 ; 00481ec9
    MOV ECX,dword ptr [ECX]             ; 00481ecc
    MOV dword ptr [EDX + 0xc],ECX       ; 00481ece
    MOV EAX,dword ptr [EAX + 0x8]       ; 00481ed1
    ADD ESP,0x4                         ; 00481ed4
    MOV dword ptr [EDX + 0x10],EAX      ; 00481ed7
    MOV EAX,EBX                         ; 00481eda
    POP EBX                             ; 00481edc
    RET                                 ; 00481edd

