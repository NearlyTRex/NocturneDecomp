; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00550670(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550670
        ;   Label: FUN_00550670
    MOV EBX,dword ptr [ESP + 0xc]       ; 00550671
    MOV EAX,dword ptr [ESP + 0x8]       ; 00550675
    ADD EAX,0x150                       ; 00550679
    PUSH EAX                            ; 0055067e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0055067f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 00550684
    MOV EDX,dword ptr [EAX]             ; 0055068a
    LEA ECX,[EAX + 0x4]                 ; 0055068c
    MOV dword ptr [EBX],EDX             ; 0055068f
    LEA EDX,[EBX + 0x4]                 ; 00550691
    MOV ECX,dword ptr [ECX]             ; 00550694
    MOV dword ptr [EDX],ECX             ; 00550696
    LEA ECX,[EAX + 0x8]                 ; 00550698
    MOV ECX,dword ptr [ECX]             ; 0055069b
    MOV dword ptr [EDX + 0x4],ECX       ; 0055069d
    MOV ECX,dword ptr [EAX + 0xc]       ; 005506a0
    ADD EAX,0xc                         ; 005506a3
    MOV dword ptr [EDX + 0x8],ECX       ; 005506a6
    LEA ECX,[EAX + 0x4]                 ; 005506a9
    MOV ECX,dword ptr [ECX]             ; 005506ac
    MOV dword ptr [EDX + 0xc],ECX       ; 005506ae
    MOV EAX,dword ptr [EAX + 0x8]       ; 005506b1
    ADD ESP,0x4                         ; 005506b4
    MOV dword ptr [EDX + 0x10],EAX      ; 005506b7
    MOV EAX,EBX                         ; 005506ba
    POP EBX                             ; 005506bc
    RET                                 ; 005506bd

