; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_computeTriangleNormal_FUN_0056e180(CVector3i *vertex_array,SMRGLPrimitiveTriangle *triangle)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_array
; SMRGLPrimitiveTriangle * Stack[0x8]:4   triangle
;
; Referenced Globals:
;   double DOUBLE_00645e7b = 65535
;   int g_LightAttenuationMax
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e180
        ;   Label: core_set.cpp_computeTriangleNormal_FUN_0056e180
    PUSH ESI                            ; 0056e181
    PUSH EDI                            ; 0056e182
    PUSH EBP                            ; 0056e183
    SUB ESP,0x40                        ; 0056e184
    MOV ECX,dword ptr [ESP + 0x54]      ; 0056e187
    MOV EDX,dword ptr [ESP + 0x58]      ; 0056e18b
    MOV EBX,dword ptr [EDX + 0x24]      ; 0056e18f
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056e192
    MOV ESI,dword ptr [EDX + 0x18]      ; 0056e199
    SUB EAX,EBX                         ; 0056e19c
    LEA EBX,[ESI*0x4 + 0x0]             ; 0056e19e
    SUB EBX,ESI                         ; 0056e1a5
    SHL EAX,0x2                         ; 0056e1a7
    SHL EBX,0x2                         ; 0056e1aa
    ADD EAX,ECX                         ; 0056e1ad
    LEA ESI,[EBX + ECX*0x1]             ; 0056e1af
    MOV EBX,dword ptr [EAX]             ; 0056e1b2
    MOV EBP,dword ptr [ESI]             ; 0056e1b4
    SUB EBX,EBP                         ; 0056e1b6
    MOV dword ptr [ESP + 0x30],EBX      ; 0056e1b8
    MOV EBP,dword ptr [ESI + 0x4]       ; 0056e1bc
    MOV EBX,dword ptr [EAX + 0x4]       ; 0056e1bf
    SUB EBX,EBP                         ; 0056e1c2
    MOV dword ptr [ESP + 0x34],EBX      ; 0056e1c4
    MOV EBP,dword ptr [ESI + 0x8]       ; 0056e1c8
    MOV EBX,dword ptr [EAX + 0x8]       ; 0056e1cb
    SUB EBX,EBP                         ; 0056e1ce
    MOV EDI,dword ptr [EDX + 0x30]      ; 0056e1d0
    MOV dword ptr [ESP + 0x38],EBX      ; 0056e1d3
    LEA EBX,[EDI*0x4 + 0x0]             ; 0056e1d7
    SUB EBX,EDI                         ; 0056e1de
    SHL EBX,0x2                         ; 0056e1e0
    ADD ECX,EBX                         ; 0056e1e3
    MOV ESI,dword ptr [EAX]             ; 0056e1e5
    MOV EBX,dword ptr [ECX]             ; 0056e1e7
    SUB EBX,ESI                         ; 0056e1e9
    MOV dword ptr [ESP + 0x3c],EBX      ; 0056e1eb
    FILD dword ptr [ESP + 0x38]         ; 0056e1ef
    FILD dword ptr [ESP + 0x3c]         ; 0056e1f3
    FST float ptr [ESP + 0x14]          ; 0056e1f7
    FMUL ST1                            ; 0056e1fb
    MOV EBP,dword ptr [EAX + 0x8]       ; 0056e1fd
    MOV EBX,dword ptr [ECX + 0x4]       ; 0056e200
    MOV ECX,dword ptr [ECX + 0x8]       ; 0056e203
    MOV EDI,dword ptr [EAX + 0x4]       ; 0056e206
    MOV EAX,ECX                         ; 0056e209
    FILD dword ptr [ESP + 0x34]         ; 0056e20b
    SUB EAX,EBP                         ; 0056e20f
    FLD ST0                             ; 0056e211
    MOV dword ptr [ESP + 0x3c],EAX      ; 0056e213
    SUB EBX,EDI                         ; 0056e217
    FILD dword ptr [ESP + 0x3c]         ; 0056e219
    FSTP float ptr [ESP + 0x28]         ; 0056e21d
    FMUL float ptr [ESP + 0x28]         ; 0056e221
    MOV dword ptr [ESP + 0x3c],EBX      ; 0056e225
    FILD dword ptr [ESP + 0x3c]         ; 0056e229
    FILD dword ptr [ESP + 0x30]         ; 0056e22d
    FST float ptr [ESP + 0x8]           ; 0056e231
    FMUL ST1                            ; 0056e235
    FXCH                                ; 0056e237
    FMULP ST5                           ; 0056e239
    FLD float ptr [ESP + 0x8]           ; 0056e23b
    FMUL float ptr [ESP + 0x28]         ; 0056e23f
    FXCH ST5                            ; 0056e243
    FSUBP ST2,ST0                       ; 0056e245
    FLD ST1                             ; 0056e247
    FMUL ST2                            ; 0056e249
    FXCH ST5                            ; 0056e24b
    FSUBP ST4,ST0                       ; 0056e24d
    FLD ST3                             ; 0056e24f
    FMUL ST4                            ; 0056e251
    FLD float ptr [ESP + 0x14]          ; 0056e253
    FMULP ST4                           ; 0056e257
    FADDP ST5,ST0                       ; 0056e259
    FSUBRP ST2,ST0                      ; 0056e25b
    FLD ST1                             ; 0056e25d
    FMUL ST2                            ; 0056e25f
    FADDP ST4,ST0                       ; 0056e261
    FXCH ST3                            ; 0056e263
    FSTP float ptr [ESP + 0x20]         ; 0056e265
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056e269
    MOV ECX,dword ptr [0x02d7a7bc]      ; 0056e26d | g_LightAttenuationMax
    SAR EAX,0x1                         ; 0056e273
    SUB ECX,EAX                         ; 0056e275
    MOV dword ptr [ESP + 0x24],ECX      ; 0056e277
    FLD float ptr [ESP + 0x24]          ; 0056e27b
    FMUL double ptr [0x00645e7b]        ; 0056e27f | DOUBLE_00645e7b
    FXCH ST3                            ; 0056e285
    FMUL ST3                            ; 0056e287
    FXCH ST2                            ; 0056e289
    FMUL ST3                            ; 0056e28b
    FXCH                                ; 0056e28d
    FMULP ST3                           ; 0056e28f
    FXCH                                ; 0056e291
    FSTP float ptr [EDX + 0x8]          ; 0056e293
    FSTP float ptr [EDX + 0xc]          ; 0056e296
    FSTP float ptr [EDX + 0x10]         ; 0056e299
    ADD ESP,0x40                        ; 0056e29c
    POP EBP                             ; 0056e29f
    POP EDI                             ; 0056e2a0
    POP ESI                             ; 0056e2a1
    POP EBX                             ; 0056e2a2
    RET                                 ; 0056e2a3

