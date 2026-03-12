; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_point
; CVector3f *      Stack[0xc]:4   end_point
; float            Stack[0x10]:4   size
; float            Stack[0x14]:4   alpha
; float            Stack[0x18]:4   lifetime
; SMRGLTextureBasic * Stack[0x1c]:4   texture_ptr
; Local Variables:
; CVector3f        Stack[-0x34]:12  local_34
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 00413336
;
; Referenced Globals:
;   double DOUBLE_0062a0bb = 8
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_004c9060
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c90c0
        ;   Label: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004c90c0
    PUSH ESI                            ; 004c90c1
    PUSH EDI                            ; 004c90c2
    PUSH EBP                            ; 004c90c3
    MOV EBP,ESP                         ; 004c90c4
    SUB ESP,0x24                        ; 004c90c6
    AND ESP,0xfffffff8                  ; 004c90c9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c90cc
    MOV EBX,dword ptr [EBP + 0x18]      ; 004c90cf
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004c90d2
    MOV ESI,dword ptr [EBP + 0x2c]      ; 004c90d5
    FLD float ptr [EAX]                 ; 004c90d8
    FSUB float ptr [EBX]                ; 004c90da
    FSTP float ptr [ESP + 0x10]         ; 004c90dc
    FLD float ptr [EAX + 0x4]           ; 004c90e0
    FSUB float ptr [EBX + 0x4]          ; 004c90e3
    FST float ptr [ESP + 0x14]          ; 004c90e6
    FMUL float ptr [ESP + 0x14]         ; 004c90ea
    FLD float ptr [EAX + 0x8]           ; 004c90ee
    FSUB float ptr [EBX + 0x8]          ; 004c90f1
    FLD float ptr [ESP + 0x10]          ; 004c90f4
    FXCH                                ; 004c90f8
    FSTP float ptr [ESP + 0x18]         ; 004c90fa
    MOV EAX,dword ptr [EBX]             ; 004c90fe
    FMUL float ptr [ESP + 0x10]         ; 004c9100
    MOV dword ptr [ESP + 0x4],EAX       ; 004c9104
    LEA EAX,[EBX + 0x4]                 ; 004c9108
    FADDP                               ; 004c910b
    MOV EAX,dword ptr [EAX]             ; 004c910d
    FLD float ptr [ESP + 0x18]          ; 004c910f
    MOV dword ptr [ESP + 0x8],EAX       ; 004c9113
    LEA EAX,[EBX + 0x8]                 ; 004c9117
    FMUL float ptr [ESP + 0x18]         ; 004c911a
    MOV EAX,dword ptr [EAX]             ; 004c911e
    FADDP                               ; 004c9120
    MOV dword ptr [ESP + 0xc],EAX       ; 004c9122
    FSQRT                               ; 004c9126
    FMUL double ptr [0x0062a0bb]        ; 004c9128 | DOUBLE_0062a0bb
    FDIV float ptr [EBP + 0x20]         ; 004c912e
    FLD1                                ; 004c9131
    FADDP                               ; 004c9133
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c9135
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 004c913a
    MOV EAX,dword ptr [ESP]             ; 004c913d
    MOV dword ptr [ESP + 0x20],EAX      ; 004c9140
    FLD float ptr [ESP + 0x10]          ; 004c9144
    FILD dword ptr [ESP + 0x20]         ; 004c9148
    FLD1                                ; 004c914c
    FDIVRP                              ; 004c914e
    FXCH                                ; 004c9150
    FMUL ST1                            ; 004c9152
    FLD float ptr [ESP + 0x14]          ; 004c9154
    FMUL ST2                            ; 004c9158
    FLD float ptr [ESP + 0x18]          ; 004c915a
    FMULP ST3                           ; 004c915e
    XOR EBX,EBX                         ; 004c9160
    FXCH                                ; 004c9162
    FSTP float ptr [ESP + 0x10]         ; 004c9164
    FSTP float ptr [ESP + 0x14]         ; 004c9168
    FSTP float ptr [ESP + 0x18]         ; 004c916c
    TEST EAX,EAX                        ; 004c9170
    JLE 0x004c91d0                      ; 004c9172
        ;   XREF to: 004c91d0 (CONDITIONAL_JUMP)  ; LAB_004c91d0
    PUSH ESI                            ; 004c9174
        ;   Label: LAB_004c9174
    PUSH dword ptr [EBP + 0x28]         ; 004c9175
    PUSH dword ptr [EBP + 0x24]         ; 004c9178
    LEA EAX,[ESP + 0x10]                ; 004c917b
    PUSH dword ptr [EBP + 0x20]         ; 004c917f
    PUSH EAX                            ; 004c9182
    PUSH EDI                            ; 004c9183
    CALL core_fire.cpp_CFireEffect_createTrailSegment_FUN_004c9060 ; 004c9184
        ;   XREF to: 004c9060 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailSegment_FUN_004c9060(CFireEffect * this_ptr, CVector3f * position, float size, float alpha, ...)
    ADD ESP,0x18                        ; 004c9189
    INC EBX                             ; 004c918c
    FLD float ptr [ESP + 0x4]           ; 004c918d
    FLD float ptr [ESP + 0x8]           ; 004c9191
    FLD float ptr [ESP + 0xc]           ; 004c9195
    MOV ECX,dword ptr [ESP]             ; 004c9199
    FXCH ST2                            ; 004c919c
    FADD float ptr [ESP + 0x10]         ; 004c919e
    FXCH                                ; 004c91a2
    FADD float ptr [ESP + 0x14]         ; 004c91a4
    FXCH ST2                            ; 004c91a8
    FADD float ptr [ESP + 0x18]         ; 004c91aa
    FXCH                                ; 004c91ae
    FSTP float ptr [ESP + 0x4]          ; 004c91b0
    FXCH                                ; 004c91b4
    FSTP float ptr [ESP + 0x8]          ; 004c91b6
    FSTP float ptr [ESP + 0xc]          ; 004c91ba
    CMP EBX,ECX                         ; 004c91be
    JL 0x004c9174                       ; 004c91c0
        ;   XREF to: 004c9174 (CONDITIONAL_JUMP)  ; LAB_004c9174
    LEA EAX,[EAX]                       ; 004c91c2
    LEA EDX,[EDX]                       ; 004c91c8
    MOV EAX,EAX                         ; 004c91ce
    MOV ESP,EBP                         ; 004c91d0
        ;   Label: LAB_004c91d0
    POP EBP                             ; 004c91d2
    POP EDI                             ; 004c91d3
    POP ESI                             ; 004c91d4
    POP EBX                             ; 004c91d5
    RET                                 ; 004c91d6

