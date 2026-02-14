; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_vessel_cpp_CCryptVessel_getBoundingBox_FUN_005e9bb0(CCryptVessel *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9bb0
        ;   Label: core_vessel.cpp_CCryptVessel_getBoundingBox_FUN_005e9bb0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e9bb1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e9bb5
    ADD EAX,0x158                       ; 005e9bb9
    PUSH EAX                            ; 005e9bbe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e9bbf
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 005e9bc4
    MOV EDX,dword ptr [EAX]             ; 005e9bca
    LEA ECX,[EAX + 0x4]                 ; 005e9bcc
    MOV dword ptr [EBX],EDX             ; 005e9bcf
    LEA EDX,[EBX + 0x4]                 ; 005e9bd1
    MOV ECX,dword ptr [ECX]             ; 005e9bd4
    MOV dword ptr [EDX],ECX             ; 005e9bd6
    LEA ECX,[EAX + 0x8]                 ; 005e9bd8
    MOV ECX,dword ptr [ECX]             ; 005e9bdb
    MOV dword ptr [EDX + 0x4],ECX       ; 005e9bdd
    MOV ECX,dword ptr [EAX + 0xc]       ; 005e9be0
    ADD EAX,0xc                         ; 005e9be3
    MOV dword ptr [EDX + 0x8],ECX       ; 005e9be6
    LEA ECX,[EAX + 0x4]                 ; 005e9be9
    MOV ECX,dword ptr [ECX]             ; 005e9bec
    MOV dword ptr [EDX + 0xc],ECX       ; 005e9bee
    MOV EAX,dword ptr [EAX + 0x8]       ; 005e9bf1
    ADD ESP,0x4                         ; 005e9bf4
    MOV dword ptr [EDX + 0x10],EAX      ; 005e9bf7
    MOV EAX,EBX                         ; 005e9bfa
    POP EBX                             ; 005e9bfc
    RET                                 ; 005e9bfd

