; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_bat_cpp_CBat_getBoundingBox_FUN_00414c60(CBat *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414c60
        ;   Label: core_bat.cpp_CBat_getBoundingBox_FUN_00414c60
    SUB ESP,0x4                         ; 00414c61
    MOV EAX,dword ptr [ESP + 0xc]       ; 00414c64
    MOV EBX,dword ptr [ESP + 0x10]      ; 00414c68
    FLD float ptr [EAX + 0x184]         ; 00414c6c
    ADD EAX,0x188                       ; 00414c72
    CALL crt_math.c_round_FUN_005fe6b0  ; 00414c77
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 00414c7c
    FISTP dword ptr [ESP + 0x4]         ; 00414c7d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00414c81
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414c86
    MOV ECX,dword ptr [ESP]             ; 00414c89
    MOV EDX,EAX                         ; 00414c8c
    LEA EAX,[ECX*0x4 + 0x0]             ; 00414c8e
    SUB EAX,ECX                         ; 00414c95
    MOV EDX,dword ptr [EDX + 0x5690]    ; 00414c97
    SHL EAX,0x3                         ; 00414c9d
    ADD EAX,EDX                         ; 00414ca0
    MOV EDX,dword ptr [EAX]             ; 00414ca2
    LEA ECX,[EAX + 0x4]                 ; 00414ca4
    MOV dword ptr [EBX],EDX             ; 00414ca7
    LEA EDX,[EBX + 0x4]                 ; 00414ca9
    MOV ECX,dword ptr [ECX]             ; 00414cac
    MOV dword ptr [EDX],ECX             ; 00414cae
    LEA ECX,[EAX + 0x8]                 ; 00414cb0
    MOV ECX,dword ptr [ECX]             ; 00414cb3
    MOV dword ptr [EDX + 0x4],ECX       ; 00414cb5
    MOV ECX,dword ptr [EAX + 0xc]       ; 00414cb8
    ADD EAX,0xc                         ; 00414cbb
    MOV dword ptr [EDX + 0x8],ECX       ; 00414cbe
    LEA ECX,[EAX + 0x4]                 ; 00414cc1
    MOV ECX,dword ptr [ECX]             ; 00414cc4
    MOV dword ptr [EDX + 0xc],ECX       ; 00414cc6
    MOV EAX,dword ptr [EAX + 0x8]       ; 00414cc9
    MOV dword ptr [EDX + 0x10],EAX      ; 00414ccc
    MOV EAX,EBX                         ; 00414ccf
    ADD ESP,0x4                         ; 00414cd1
    POP EBX                             ; 00414cd4
    RET                                 ; 00414cd5

