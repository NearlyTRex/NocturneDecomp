; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_0050b260(CMirrorHack *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b260
        ;   Label: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_0050b260
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050b261
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050b265
    ADD EAX,0x158                       ; 0050b269
    PUSH EAX                            ; 0050b26e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0050b26f
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD EAX,0x5678                      ; 0050b274
    MOV EDX,dword ptr [EAX]             ; 0050b279
    LEA ECX,[EAX + 0x4]                 ; 0050b27b
    MOV dword ptr [EBX],EDX             ; 0050b27e
    LEA EDX,[EBX + 0x4]                 ; 0050b280
    MOV ECX,dword ptr [ECX]             ; 0050b283
    MOV dword ptr [EDX],ECX             ; 0050b285
    LEA ECX,[EAX + 0x8]                 ; 0050b287
    MOV ECX,dword ptr [ECX]             ; 0050b28a
    MOV dword ptr [EDX + 0x4],ECX       ; 0050b28c
    MOV ECX,dword ptr [EAX + 0xc]       ; 0050b28f
    ADD EAX,0xc                         ; 0050b292
    MOV dword ptr [EDX + 0x8],ECX       ; 0050b295
    LEA ECX,[EAX + 0x4]                 ; 0050b298
    MOV ECX,dword ptr [ECX]             ; 0050b29b
    MOV dword ptr [EDX + 0xc],ECX       ; 0050b29d
    MOV EAX,dword ptr [EAX + 0x8]       ; 0050b2a0
    ADD ESP,0x4                         ; 0050b2a3
    MOV dword ptr [EDX + 0x10],EAX      ; 0050b2a6
    MOV EAX,EBX                         ; 0050b2a9
    POP EBX                             ; 0050b2ab
    RET                                 ; 0050b2ac

