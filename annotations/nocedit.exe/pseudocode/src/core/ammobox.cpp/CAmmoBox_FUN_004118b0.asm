; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * core_ammobox.cpp_CAmmoBox_FUN_004118b0(CAmmoBox * this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004118b0
        ;   Label: core_ammobox.cpp_CAmmoBox_FUN_004118b0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004118b1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004118b5
    ADD EAX,0x158                       ; 004118b9
    PUSH EAX                            ; 004118be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004118bf | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 004118c4
    MOV EDX,dword ptr [EAX]             ; 004118ca
    LEA ECX,[EAX + 0x4]                 ; 004118cc
    MOV dword ptr [EBX],EDX             ; 004118cf
    LEA EDX,[EBX + 0x4]                 ; 004118d1
    MOV ECX,dword ptr [ECX]             ; 004118d4
    MOV dword ptr [EDX],ECX             ; 004118d6
    LEA ECX,[EAX + 0x8]                 ; 004118d8
    MOV ECX,dword ptr [ECX]             ; 004118db
    MOV dword ptr [EDX + 0x4],ECX       ; 004118dd
    MOV ECX,dword ptr [EAX + 0xc]       ; 004118e0
    ADD EAX,0xc                         ; 004118e3
    MOV dword ptr [EDX + 0x8],ECX       ; 004118e6
    LEA ECX,[EAX + 0x4]                 ; 004118e9
    MOV ECX,dword ptr [ECX]             ; 004118ec
    MOV dword ptr [EDX + 0xc],ECX       ; 004118ee
    MOV EAX,dword ptr [EAX + 0x8]       ; 004118f1
    ADD ESP,0x4                         ; 004118f4
    MOV dword ptr [EDX + 0x10],EAX      ; 004118f7
    MOV EAX,EBX                         ; 004118fa
    POP EBX                             ; 004118fc
    RET                                 ; 004118fd

