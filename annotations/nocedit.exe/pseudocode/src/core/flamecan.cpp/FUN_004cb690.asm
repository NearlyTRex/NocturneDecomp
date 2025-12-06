; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flamecan.cpp_FUN_004cb690()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb690
        ;   Label: core_flamecan.cpp_FUN_004cb690
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cb691
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cb695
    ADD EAX,0x158                       ; 004cb699
    PUSH EAX                            ; 004cb69e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004cb69f | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 004cb6a4
    MOV EDX,dword ptr [EAX]             ; 004cb6aa
    LEA ECX,[EAX + 0x4]                 ; 004cb6ac
    MOV dword ptr [EBX],EDX             ; 004cb6af
    LEA EDX,[EBX + 0x4]                 ; 004cb6b1
    MOV ECX,dword ptr [ECX]             ; 004cb6b4
    MOV dword ptr [EDX],ECX             ; 004cb6b6
    LEA ECX,[EAX + 0x8]                 ; 004cb6b8
    MOV ECX,dword ptr [ECX]             ; 004cb6bb
    MOV dword ptr [EDX + 0x4],ECX       ; 004cb6bd
    MOV ECX,dword ptr [EAX + 0xc]       ; 004cb6c0
    ADD EAX,0xc                         ; 004cb6c3
    MOV dword ptr [EDX + 0x8],ECX       ; 004cb6c6
    LEA ECX,[EAX + 0x4]                 ; 004cb6c9
    MOV ECX,dword ptr [ECX]             ; 004cb6cc
    MOV dword ptr [EDX + 0xc],ECX       ; 004cb6ce
    MOV EAX,dword ptr [EAX + 0x8]       ; 004cb6d1
    ADD ESP,0x4                         ; 004cb6d4
    MOV dword ptr [EDX + 0x10],EAX      ; 004cb6d7
    MOV EAX,EBX                         ; 004cb6da
    POP EBX                             ; 004cb6dc
    RET                                 ; 004cb6dd

