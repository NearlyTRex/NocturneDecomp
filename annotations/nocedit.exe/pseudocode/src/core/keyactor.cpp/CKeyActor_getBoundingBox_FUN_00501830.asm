; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_keyactor_cpp_CKeyActor_getBoundingBox_FUN_00501830(CKeyActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501830
        ;   Label: core_keyactor.cpp_CKeyActor_getBoundingBox_FUN_00501830
    MOV EBX,dword ptr [ESP + 0xc]       ; 00501831
    MOV EAX,dword ptr [ESP + 0x8]       ; 00501835
    ADD EAX,0x158                       ; 00501839
    PUSH EAX                            ; 0050183e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0050183f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 00501844
    MOV EDX,dword ptr [EAX]             ; 0050184a
    LEA ECX,[EAX + 0x4]                 ; 0050184c
    MOV dword ptr [EBX],EDX             ; 0050184f
    LEA EDX,[EBX + 0x4]                 ; 00501851
    MOV ECX,dword ptr [ECX]             ; 00501854
    MOV dword ptr [EDX],ECX             ; 00501856
    LEA ECX,[EAX + 0x8]                 ; 00501858
    MOV ECX,dword ptr [ECX]             ; 0050185b
    MOV dword ptr [EDX + 0x4],ECX       ; 0050185d
    MOV ECX,dword ptr [EAX + 0xc]       ; 00501860
    ADD EAX,0xc                         ; 00501863
    MOV dword ptr [EDX + 0x8],ECX       ; 00501866
    LEA ECX,[EAX + 0x4]                 ; 00501869
    MOV ECX,dword ptr [ECX]             ; 0050186c
    MOV dword ptr [EDX + 0xc],ECX       ; 0050186e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00501871
    ADD ESP,0x4                         ; 00501874
    MOV dword ptr [EDX + 0x10],EAX      ; 00501877
    MOV EAX,EBX                         ; 0050187a
    POP EBX                             ; 0050187c
    RET                                 ; 0050187d

