; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0 (CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d20f0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0
    SUB ESP,0x4                         ; 004d20f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d20f4
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d20f8
    FLD float ptr [EAX + 0x180]         ; 004d20fc
    ADD EAX,0x184                       ; 004d2102
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d2107
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 004d210c
    FISTP dword ptr [ESP + 0x4]         ; 004d210d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004d2111
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d2116
    MOV ECX,dword ptr [ESP]             ; 004d2119
    MOV EDX,EAX                         ; 004d211c
    LEA EAX,[ECX*0x4 + 0x0]             ; 004d211e
    SUB EAX,ECX                         ; 004d2125
    MOV EDX,dword ptr [EDX + 0x5690]    ; 004d2127
    SHL EAX,0x3                         ; 004d212d
    ADD EAX,EDX                         ; 004d2130
    MOV EDX,dword ptr [EAX]             ; 004d2132
    LEA ECX,[EAX + 0x4]                 ; 004d2134
    MOV dword ptr [EBX],EDX             ; 004d2137
    LEA EDX,[EBX + 0x4]                 ; 004d2139
    MOV ECX,dword ptr [ECX]             ; 004d213c
    MOV dword ptr [EDX],ECX             ; 004d213e
    LEA ECX,[EAX + 0x8]                 ; 004d2140
    MOV ECX,dword ptr [ECX]             ; 004d2143
    MOV dword ptr [EDX + 0x4],ECX       ; 004d2145
    MOV ECX,dword ptr [EAX + 0xc]       ; 004d2148
    ADD EAX,0xc                         ; 004d214b
    MOV dword ptr [EDX + 0x8],ECX       ; 004d214e
    LEA ECX,[EAX + 0x4]                 ; 004d2151
    MOV ECX,dword ptr [ECX]             ; 004d2154
    MOV dword ptr [EDX + 0xc],ECX       ; 004d2156
    MOV EAX,dword ptr [EAX + 0x8]       ; 004d2159
    MOV dword ptr [EDX + 0x10],EAX      ; 004d215c
    MOV EAX,EBX                         ; 004d215f
    ADD ESP,0x4                         ; 004d2161
    POP EBX                             ; 004d2164
    RET                                 ; 004d2165

