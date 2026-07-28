; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_backgnd_cpp_FUN_0040fff0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fff0
        ;   Label: core_backgnd.cpp_FUN_0040fff0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040fff1
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040fff5
    ADD EAX,0x150                       ; 0040fff9
    PUSH EAX                            ; 0040fffe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0040ffff
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 00410004
    MOV EDX,dword ptr [EAX]             ; 0041000a
    LEA ECX,[EAX + 0x4]                 ; 0041000c
    MOV dword ptr [EBX],EDX             ; 0041000f
    LEA EDX,[EBX + 0x4]                 ; 00410011
    MOV ECX,dword ptr [ECX]             ; 00410014
    MOV dword ptr [EDX],ECX             ; 00410016
    LEA ECX,[EAX + 0x8]                 ; 00410018
    MOV ECX,dword ptr [ECX]             ; 0041001b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041001d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00410020
    ADD EAX,0xc                         ; 00410023
    MOV dword ptr [EDX + 0x8],ECX       ; 00410026
    LEA ECX,[EAX + 0x4]                 ; 00410029
    MOV ECX,dword ptr [ECX]             ; 0041002c
    MOV dword ptr [EDX + 0xc],ECX       ; 0041002e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00410031
    ADD ESP,0x4                         ; 00410034
    MOV dword ptr [EDX + 0x10],EAX      ; 00410037
    MOV EAX,EBX                         ; 0041003a
    POP EBX                             ; 0041003c
    RET                                 ; 0041003d

