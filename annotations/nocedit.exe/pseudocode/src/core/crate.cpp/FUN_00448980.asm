; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_crate.cpp_FUN_00448980()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448980
        ;   Label: core_crate.cpp_FUN_00448980
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448981
    MOV EAX,dword ptr [ESP + 0x8]       ; 00448985
    ADD EAX,0x158                       ; 00448989
    PUSH EAX                            ; 0044898e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0044898f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00448994
    MOV EDX,dword ptr [EAX]             ; 0044899a
    LEA ECX,[EAX + 0x4]                 ; 0044899c
    MOV dword ptr [EBX],EDX             ; 0044899f
    LEA EDX,[EBX + 0x4]                 ; 004489a1
    MOV ECX,dword ptr [ECX]             ; 004489a4
    MOV dword ptr [EDX],ECX             ; 004489a6
    LEA ECX,[EAX + 0x8]                 ; 004489a8
    MOV ECX,dword ptr [ECX]             ; 004489ab
    MOV dword ptr [EDX + 0x4],ECX       ; 004489ad
    MOV ECX,dword ptr [EAX + 0xc]       ; 004489b0
    ADD EAX,0xc                         ; 004489b3
    MOV dword ptr [EDX + 0x8],ECX       ; 004489b6
    LEA ECX,[EAX + 0x4]                 ; 004489b9
    MOV ECX,dword ptr [ECX]             ; 004489bc
    MOV dword ptr [EDX + 0xc],ECX       ; 004489be
    MOV EAX,dword ptr [EAX + 0x8]       ; 004489c1
    ADD ESP,0x4                         ; 004489c4
    MOV dword ptr [EDX + 0x10],EAX      ; 004489c7
    MOV EAX,EBX                         ; 004489ca
    POP EBX                             ; 004489cc
    RET                                 ; 004489cd

