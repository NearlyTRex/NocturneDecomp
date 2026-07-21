; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00546b90(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546b90
        ;   Label: FUN_00546b90
    MOV EBX,dword ptr [ESP + 0xc]       ; 00546b91
    MOV EAX,dword ptr [ESP + 0x8]       ; 00546b95
    ADD EAX,0x150                       ; 00546b99
    PUSH EAX                            ; 00546b9e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00546b9f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 00546ba4
    MOV EDX,dword ptr [EAX]             ; 00546baa
    LEA ECX,[EAX + 0x4]                 ; 00546bac
    MOV dword ptr [EBX],EDX             ; 00546baf
    LEA EDX,[EBX + 0x4]                 ; 00546bb1
    MOV ECX,dword ptr [ECX]             ; 00546bb4
    MOV dword ptr [EDX],ECX             ; 00546bb6
    LEA ECX,[EAX + 0x8]                 ; 00546bb8
    MOV ECX,dword ptr [ECX]             ; 00546bbb
    MOV dword ptr [EDX + 0x4],ECX       ; 00546bbd
    MOV ECX,dword ptr [EAX + 0xc]       ; 00546bc0
    ADD EAX,0xc                         ; 00546bc3
    MOV dword ptr [EDX + 0x8],ECX       ; 00546bc6
    LEA ECX,[EAX + 0x4]                 ; 00546bc9
    MOV ECX,dword ptr [ECX]             ; 00546bcc
    MOV dword ptr [EDX + 0xc],ECX       ; 00546bce
    MOV EAX,dword ptr [EAX + 0x8]       ; 00546bd1
    ADD ESP,0x4                         ; 00546bd4
    MOV dword ptr [EDX + 0x10],EAX      ; 00546bd7
    MOV EAX,EBX                         ; 00546bda
    POP EBX                             ; 00546bdc
    RET                                 ; 00546bdd

