; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_anvil_cpp_CAnvil_getBoundingBox_FUN_0040f860(CAnvil *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f860
        ;   Label: core_anvil.cpp_CAnvil_getBoundingBox_FUN_0040f860
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040f861
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040f865
    ADD EAX,0x150                       ; 0040f869
    PUSH EAX                            ; 0040f86e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0040f86f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x350]     ; 0040f874
    MOV EDX,dword ptr [EAX]             ; 0040f87a
    LEA ECX,[EAX + 0x4]                 ; 0040f87c
    MOV dword ptr [EBX],EDX             ; 0040f87f
    LEA EDX,[EBX + 0x4]                 ; 0040f881
    MOV ECX,dword ptr [ECX]             ; 0040f884
    MOV dword ptr [EDX],ECX             ; 0040f886
    LEA ECX,[EAX + 0x8]                 ; 0040f888
    MOV ECX,dword ptr [ECX]             ; 0040f88b
    MOV dword ptr [EDX + 0x4],ECX       ; 0040f88d
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040f890
    ADD EAX,0xc                         ; 0040f893
    MOV dword ptr [EDX + 0x8],ECX       ; 0040f896
    LEA ECX,[EAX + 0x4]                 ; 0040f899
    MOV ECX,dword ptr [ECX]             ; 0040f89c
    MOV dword ptr [EDX + 0xc],ECX       ; 0040f89e
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040f8a1
    ADD ESP,0x4                         ; 0040f8a4
    MOV dword ptr [EDX + 0x10],EAX      ; 0040f8a7
    MOV EAX,EBX                         ; 0040f8aa
    POP EBX                             ; 0040f8ac
    RET                                 ; 0040f8ad

