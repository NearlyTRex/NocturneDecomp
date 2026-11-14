; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004a3d50(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_point
; CVector3f *      Stack[0xc]:4   end_point
; float            Stack[0x10]:4   size
; float            Stack[0x14]:4   alpha
; float            Stack[0x18]:4   lifetime
; SMRGLTextureBasic * Stack[0x1c]:4   texture_ptr
;
; Referenced Globals:
;   undefined4 DAT_005c0a48
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3d50
        ;   Label: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004a3d50
    PUSH ESI                            ; 004a3d51
    PUSH EDI                            ; 004a3d52
    PUSH EBP                            ; 004a3d53
    MOV EBP,ESP                         ; 004a3d54
    SUB ESP,0x30                        ; 004a3d56
    AND ESP,0xfffffff8                  ; 004a3d59
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a3d5c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004a3d5f
    FLD float ptr [EBX]                 ; 004a3d62
    FLD float ptr [EBX + 0x4]           ; 004a3d64
    FLD float ptr [EBX + 0x8]           ; 004a3d67
    LEA EDI,[ESP + 0x10]                ; 004a3d6a
    LEA ESI,[ESP + 0x1c]                ; 004a3d6e
    FXCH ST2                            ; 004a3d72
    FSUB float ptr [EAX]                ; 004a3d74
    FXCH                                ; 004a3d76
    FSUB float ptr [EAX + 0x4]          ; 004a3d78
    FXCH ST2                            ; 004a3d7b
    FSUB float ptr [EAX + 0x8]          ; 004a3d7d
    FXCH                                ; 004a3d80
    FSTP float ptr [ESP + 0x1c]         ; 004a3d82
    FXCH                                ; 004a3d86
    FSTP float ptr [ESP + 0x20]         ; 004a3d88
    FSTP float ptr [ESP + 0x24]         ; 004a3d8c
    MOVSD ES:EDI,ESI                    ; 004a3d90
    MOVSD ES:EDI,ESI                    ; 004a3d91
    MOVSD ES:EDI,ESI                    ; 004a3d92
    FLD float ptr [ESP + 0x14]          ; 004a3d93
    FMUL ST0                            ; 004a3d97
    FLD float ptr [ESP + 0x10]          ; 004a3d99
    FMUL ST0                            ; 004a3d9d
    FADDP                               ; 004a3d9f
    FLD float ptr [ESP + 0x18]          ; 004a3da1
    FMUL ST0                            ; 004a3da5
    FADDP                               ; 004a3da7
    MOV ESI,EAX                         ; 004a3da9
    FSQRT                               ; 004a3dab
    FMUL double ptr [0x005c0a48]        ; 004a3dad | DAT_005c0a48
    FDIV float ptr [EBP + 0x20]         ; 004a3db3
    FLD1                                ; 004a3db6
    FADDP                               ; 004a3db8
    CALL crt_math.c_round_FUN_005a3120  ; 004a3dba
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 004a3dbf
    MOV EAX,dword ptr [ESP]             ; 004a3dc2
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a3dc5
    FLD float ptr [ESP + 0x10]          ; 004a3dc9
    FILD dword ptr [ESP + 0x2c]         ; 004a3dcd
    FLD1                                ; 004a3dd1
    FDIVRP                              ; 004a3dd3
    FXCH                                ; 004a3dd5
    FMUL ST1                            ; 004a3dd7
    FLD float ptr [ESP + 0x14]          ; 004a3dd9
    FMUL ST2                            ; 004a3ddd
    FLD float ptr [ESP + 0x18]          ; 004a3ddf
    FMULP ST3                           ; 004a3de3
    LEA EDI,[ESP + 0x4]                 ; 004a3de5
    XOR EBX,EBX                         ; 004a3de9
    MOVSD ES:EDI,ESI                    ; 004a3deb
    MOVSD ES:EDI,ESI                    ; 004a3dec
    MOVSD ES:EDI,ESI                    ; 004a3ded
    FXCH                                ; 004a3dee
    FSTP float ptr [ESP + 0x10]         ; 004a3df0
    FSTP float ptr [ESP + 0x14]         ; 004a3df4
    FSTP float ptr [ESP + 0x18]         ; 004a3df8
    TEST EAX,EAX                        ; 004a3dfc
    JLE 0x004a3e60                      ; 004a3dfe
        ;   XREF to: 004a3e60 (CONDITIONAL_JUMP)  ; LAB_004a3e60
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a3e00
    MOV EDI,dword ptr [ESP]             ; 004a3e03
    MOV ECX,dword ptr [EBP + 0x2c]      ; 004a3e06
        ;   Label: LAB_004a3e06
    PUSH ECX                            ; 004a3e09
    PUSH dword ptr [EBP + 0x28]         ; 004a3e0a
    PUSH dword ptr [EBP + 0x24]         ; 004a3e0d
    LEA EAX,[ESP + 0x10]                ; 004a3e10
    PUSH dword ptr [EBP + 0x20]         ; 004a3e14
    PUSH EAX                            ; 004a3e17
    PUSH ESI                            ; 004a3e18
    CALL core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0 ; 004a3e19
        ;   XREF to: 004a3cf0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0(CFireEffect * this_ptr, CVector3f * position, float size, float alpha, ...)
    ADD ESP,0x18                        ; 004a3e1e
    INC EBX                             ; 004a3e21
    FLD float ptr [ESP + 0x4]           ; 004a3e22
    FLD float ptr [ESP + 0x8]           ; 004a3e26
    FLD float ptr [ESP + 0xc]           ; 004a3e2a
    FXCH ST2                            ; 004a3e2e
    FADD float ptr [ESP + 0x10]         ; 004a3e30
    FXCH                                ; 004a3e34
    FADD float ptr [ESP + 0x14]         ; 004a3e36
    FXCH ST2                            ; 004a3e3a
    FADD float ptr [ESP + 0x18]         ; 004a3e3c
    FXCH                                ; 004a3e40
    FSTP float ptr [ESP + 0x4]          ; 004a3e42
    FXCH                                ; 004a3e46
    FSTP float ptr [ESP + 0x8]          ; 004a3e48
    FSTP float ptr [ESP + 0xc]          ; 004a3e4c
    CMP EBX,EDI                         ; 004a3e50
    JL 0x004a3e06                       ; 004a3e52
        ;   XREF to: 004a3e06 (CONDITIONAL_JUMP)  ; LAB_004a3e06
    LEA EAX,[EAX]                       ; 004a3e54
    LEA EDX,[EDX]                       ; 004a3e5a
    MOV ESP,EBP                         ; 004a3e60
        ;   Label: LAB_004a3e60
    POP EBP                             ; 004a3e62
    POP EDI                             ; 004a3e63
    POP ESI                             ; 004a3e64
    POP EBX                             ; 004a3e65
    RET                                 ; 004a3e66

