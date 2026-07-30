; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_door_cpp_CDoor_getBoundingBox_FUN_00455e90(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455e90
        ;   Label: core_door.cpp_CDoor_getBoundingBox_FUN_00455e90
    MOV EBX,dword ptr [ESP + 0xc]       ; 00455e91
    MOV EAX,dword ptr [ESP + 0x8]       ; 00455e95
    ADD EAX,0x150                       ; 00455e99
    PUSH EAX                            ; 00455e9e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00455e9f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 00455ea4
    MOV EDX,dword ptr [EAX]             ; 00455eaa
    LEA ECX,[EAX + 0x4]                 ; 00455eac
    MOV dword ptr [EBX],EDX             ; 00455eaf
    LEA EDX,[EBX + 0x4]                 ; 00455eb1
    MOV ECX,dword ptr [ECX]             ; 00455eb4
    MOV dword ptr [EDX],ECX             ; 00455eb6
    LEA ECX,[EAX + 0x8]                 ; 00455eb8
    MOV ECX,dword ptr [ECX]             ; 00455ebb
    MOV dword ptr [EDX + 0x4],ECX       ; 00455ebd
    MOV ECX,dword ptr [EAX + 0xc]       ; 00455ec0
    ADD EAX,0xc                         ; 00455ec3
    MOV dword ptr [EDX + 0x8],ECX       ; 00455ec6
    LEA ECX,[EAX + 0x4]                 ; 00455ec9
    MOV ECX,dword ptr [ECX]             ; 00455ecc
    MOV dword ptr [EDX + 0xc],ECX       ; 00455ece
    MOV EAX,dword ptr [EAX + 0x8]       ; 00455ed1
    ADD ESP,0x4                         ; 00455ed4
    MOV dword ptr [EDX + 0x10],EAX      ; 00455ed7
    MOV EAX,EBX                         ; 00455eda
    POP EBX                             ; 00455edc
    RET                                 ; 00455edd

