; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_004b7150(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
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
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f92b
;
; Referenced Globals:
;   undefined4 DAT_005df66c
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7150
        ;   Label: core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004b7150
    PUSH ESI                            ; 004b7151
    PUSH EDI                            ; 004b7152
    PUSH EBP                            ; 004b7153
    MOV EBP,ESP                         ; 004b7154
    SUB ESP,0x30                        ; 004b7156
    AND ESP,0xfffffff8                  ; 004b7159
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b715c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004b715f
    FLD float ptr [EBX]                 ; 004b7162
    FLD float ptr [EBX + 0x4]           ; 004b7164
    FLD float ptr [EBX + 0x8]           ; 004b7167
    LEA EDI,[ESP + 0x10]                ; 004b716a
    LEA ESI,[ESP + 0x1c]                ; 004b716e
    FXCH ST2                            ; 004b7172
    FSUB float ptr [EAX]                ; 004b7174
    FXCH                                ; 004b7176
    FSUB float ptr [EAX + 0x4]          ; 004b7178
    FXCH ST2                            ; 004b717b
    FSUB float ptr [EAX + 0x8]          ; 004b717d
    FXCH                                ; 004b7180
    FSTP float ptr [ESP + 0x1c]         ; 004b7182
    FXCH                                ; 004b7186
    FSTP float ptr [ESP + 0x20]         ; 004b7188
    FSTP float ptr [ESP + 0x24]         ; 004b718c
    MOVSD ES:EDI,ESI                    ; 004b7190
    MOVSD ES:EDI,ESI                    ; 004b7191
    MOVSD ES:EDI,ESI                    ; 004b7192
    FLD float ptr [ESP + 0x14]          ; 004b7193
    FMUL ST0                            ; 004b7197
    FLD float ptr [ESP + 0x10]          ; 004b7199
    FMUL ST0                            ; 004b719d
    FADDP                               ; 004b719f
    FLD float ptr [ESP + 0x18]          ; 004b71a1
    FMUL ST0                            ; 004b71a5
    FADDP                               ; 004b71a7
    MOV ESI,EAX                         ; 004b71a9
    FSQRT                               ; 004b71ab
    FMUL double ptr [0x005df66c]        ; 004b71ad | DAT_005df66c
    FDIV float ptr [EBP + 0x20]         ; 004b71b3
    FLD1                                ; 004b71b6
    FADDP                               ; 004b71b8
    CALL crt_math.c_round_FUN_005c03a0  ; 004b71ba
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 004b71bf
    MOV EAX,dword ptr [ESP]             ; 004b71c2
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b71c5
    FLD float ptr [ESP + 0x10]          ; 004b71c9
    FILD dword ptr [ESP + 0x2c]         ; 004b71cd
    FLD1                                ; 004b71d1
    FDIVRP                              ; 004b71d3
    FXCH                                ; 004b71d5
    FMUL ST1                            ; 004b71d7
    FLD float ptr [ESP + 0x14]          ; 004b71d9
    FMUL ST2                            ; 004b71dd
    FLD float ptr [ESP + 0x18]          ; 004b71df
    FMULP ST3                           ; 004b71e3
    LEA EDI,[ESP + 0x4]                 ; 004b71e5
    XOR EBX,EBX                         ; 004b71e9
    MOVSD ES:EDI,ESI                    ; 004b71eb
    MOVSD ES:EDI,ESI                    ; 004b71ec
    MOVSD ES:EDI,ESI                    ; 004b71ed
    FXCH                                ; 004b71ee
    FSTP float ptr [ESP + 0x10]         ; 004b71f0
    FSTP float ptr [ESP + 0x14]         ; 004b71f4
    FSTP float ptr [ESP + 0x18]         ; 004b71f8
    TEST EAX,EAX                        ; 004b71fc
    JLE 0x004b7260                      ; 004b71fe
        ;   XREF to: 004b7260 (CONDITIONAL_JUMP)  ; LAB_004b7260
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b7200
    MOV EDI,dword ptr [ESP]             ; 004b7203
    MOV ECX,dword ptr [EBP + 0x2c]      ; 004b7206
        ;   Label: LAB_004b7206
    PUSH ECX                            ; 004b7209
    PUSH dword ptr [EBP + 0x28]         ; 004b720a
    PUSH dword ptr [EBP + 0x24]         ; 004b720d
    LEA EAX,[ESP + 0x10]                ; 004b7210
    PUSH dword ptr [EBP + 0x20]         ; 004b7214
    PUSH EAX                            ; 004b7217
    PUSH ESI                            ; 004b7218
    CALL core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0 ; 004b7219
        ;   XREF to: 004b70f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0(CFireEffect * this_ptr, CVector3f * position, float size, float alpha, ...)
    ADD ESP,0x18                        ; 004b721e
    INC EBX                             ; 004b7221
    FLD float ptr [ESP + 0x4]           ; 004b7222
    FLD float ptr [ESP + 0x8]           ; 004b7226
    FLD float ptr [ESP + 0xc]           ; 004b722a
    FXCH ST2                            ; 004b722e
    FADD float ptr [ESP + 0x10]         ; 004b7230
    FXCH                                ; 004b7234
    FADD float ptr [ESP + 0x14]         ; 004b7236
    FXCH ST2                            ; 004b723a
    FADD float ptr [ESP + 0x18]         ; 004b723c
    FXCH                                ; 004b7240
    FSTP float ptr [ESP + 0x4]          ; 004b7242
    FXCH                                ; 004b7246
    FSTP float ptr [ESP + 0x8]          ; 004b7248
    FSTP float ptr [ESP + 0xc]          ; 004b724c
    CMP EBX,EDI                         ; 004b7250
    JL 0x004b7206                       ; 004b7252
        ;   XREF to: 004b7206 (CONDITIONAL_JUMP)  ; LAB_004b7206
    LEA EAX,[EAX]                       ; 004b7254
    LEA EDX,[EDX]                       ; 004b725a
    MOV ESP,EBP                         ; 004b7260
        ;   Label: LAB_004b7260
    POP EBP                             ; 004b7262
    POP EDI                             ; 004b7263
    POP ESI                             ; 004b7264
    POP EBX                             ; 004b7265
    RET                                 ; 004b7266

