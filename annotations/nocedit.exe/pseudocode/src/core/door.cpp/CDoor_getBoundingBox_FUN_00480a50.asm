; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * core_door.cpp_CDoor_getBoundingBox_FUN_00480a50(CDoor * this_ptr, CBoundingBox3D * out_box)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480a50
        ;   Label: core_door.cpp_CDoor_getBoundingBox_FUN_00480a50
    MOV EBX,dword ptr [ESP + 0xc]       ; 00480a51
    MOV EAX,dword ptr [ESP + 0x8]       ; 00480a55
    ADD EAX,0x158                       ; 00480a59
    PUSH EAX                            ; 00480a5e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00480a5f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00480a64
    MOV EDX,dword ptr [EAX]             ; 00480a6a
    LEA ECX,[EAX + 0x4]                 ; 00480a6c
    MOV dword ptr [EBX],EDX             ; 00480a6f
    LEA EDX,[EBX + 0x4]                 ; 00480a71
    MOV ECX,dword ptr [ECX]             ; 00480a74
    MOV dword ptr [EDX],ECX             ; 00480a76
    LEA ECX,[EAX + 0x8]                 ; 00480a78
    MOV ECX,dword ptr [ECX]             ; 00480a7b
    MOV dword ptr [EDX + 0x4],ECX       ; 00480a7d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00480a80
    ADD EAX,0xc                         ; 00480a83
    MOV dword ptr [EDX + 0x8],ECX       ; 00480a86
    LEA ECX,[EAX + 0x4]                 ; 00480a89
    MOV ECX,dword ptr [ECX]             ; 00480a8c
    MOV dword ptr [EDX + 0xc],ECX       ; 00480a8e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00480a91
    ADD ESP,0x4                         ; 00480a94
    MOV dword ptr [EDX + 0x10],EAX      ; 00480a97
    MOV EAX,EBX                         ; 00480a9a
    POP EBX                             ; 00480a9c
    RET                                 ; 00480a9d

