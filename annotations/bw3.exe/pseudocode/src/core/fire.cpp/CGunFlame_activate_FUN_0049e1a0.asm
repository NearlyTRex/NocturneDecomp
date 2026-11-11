; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_activate_FUN_0049e1a0(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type,int flame_style)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; int              Stack[0x10]:4   flame_type
; int              Stack[0x14]:4   flame_style
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0 at 004a3b27
;
; Referenced Globals:
;   undefined4 DAT_005df900
;   undefined4 DAT_005df904
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e1a0
        ;   Label: core_fire.cpp_CGunFlame_activate_FUN_0049e1a0
    PUSH ESI                            ; 0049e1a1
    PUSH EDI                            ; 0049e1a2
    PUSH EBP                            ; 0049e1a3
    SUB ESP,0x54                        ; 0049e1a4
    MOV EBX,dword ptr [ESP + 0x68]      ; 0049e1a7
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0049e1ab
    MOV EBP,dword ptr [ESP + 0x78]      ; 0049e1af
    CMP EBX,EAX                         ; 0049e1b3
    JNZ 0x0049e308                      ; 0049e1b5
        ;   XREF to: 0049e308 (CONDITIONAL_JUMP)  ; LAB_0049e308
    CMP EBP,0x6                         ; 0049e1bb
        ;   Label: LAB_0049e1bb
    JNZ 0x0049e31d                      ; 0049e1be
        ;   XREF to: 0049e31d (CONDITIONAL_JUMP)  ; LAB_0049e31d
    MOV EAX,[0x005df904]                ; 0049e1c4 | DAT_005df904
    MOV dword ptr [EBX + 0xc],EAX       ; 0049e1c9
    CMP EBP,0x2                         ; 0049e1cc
        ;   Label: LAB_0049e1cc
    JNZ 0x0049e345                      ; 0049e1cf
        ;   XREF to: 0049e345 (CONDITIONAL_JUMP)  ; LAB_0049e345
    MOV dword ptr [EBX + 0x28],0x1      ; 0049e1d5
        ;   Label: LAB_0049e1d5
    MOV EAX,dword ptr [EBX + 0x28]      ; 0049e1dc
        ;   Label: LAB_0049e1dc
    DEC EAX                             ; 0049e1df
    MOV dword ptr [ESP + 0x50],EAX      ; 0049e1e0
    FILD dword ptr [ESP + 0x50]         ; 0049e1e4
    SUB ESP,0x4                         ; 0049e1e8
    FSTP float ptr [ESP]                ; 0049e1eb
    PUSH 0x0                            ; 0049e1ee
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049e1f0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x58],EAX      ; 0049e1f5
    LEA EDI,[ESP + 0x30]                ; 0049e1f9
    FLD float ptr [ESP + 0x58]          ; 0049e1fd
    ADD ESP,0x8                         ; 0049e201
    FSTP float ptr [EBX + 0x1c]         ; 0049e204
    PUSH 0x3d567750                     ; 0049e207
    MOV ESI,dword ptr [ESP + 0x74]      ; 0049e20c
    PUSH 0xbd567750                     ; 0049e210
    MOVSD ES:EDI,ESI                    ; 0049e215
    MOVSD ES:EDI,ESI                    ; 0049e216
    MOVSD ES:EDI,ESI                    ; 0049e217
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049e218
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x58],EAX      ; 0049e21d
    FLD float ptr [ESP + 0x58]          ; 0049e221
    ADD ESP,0x8                         ; 0049e225
    PUSH 0x3d567750                     ; 0049e228
    FADD float ptr [ESP + 0x30]         ; 0049e22d
    PUSH 0xbd567750                     ; 0049e231
    FSTP float ptr [ESP + 0x34]         ; 0049e236
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049e23a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x58],EAX      ; 0049e23f
    FLD float ptr [ESP + 0x58]          ; 0049e243
    ADD ESP,0x8                         ; 0049e247
    LEA EAX,[ESP + 0x28]                ; 0049e24a
    PUSH EAX                            ; 0049e24e
    LEA EAX,[ESP + 0x4]                 ; 0049e24f
    FADD float ptr [ESP + 0x2c]         ; 0049e253
    PUSH EAX                            ; 0049e257
    FSTP float ptr [ESP + 0x30]         ; 0049e258
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0049e25c
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    LEA EAX,[ESP + 0x30]                ; 0049e261
    LEA EDX,[EBX + 0x10]                ; 0049e265
    ADD ESP,0x8                         ; 0049e268
    CMP EDX,EAX                         ; 0049e26b
    JZ 0x0049e283                       ; 0049e26d
        ;   XREF to: 0049e283 (CONDITIONAL_JUMP)  ; LAB_0049e283
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049e26f
    MOV dword ptr [EDX],EAX             ; 0049e273
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049e275
    MOV dword ptr [EDX + 0x4],EAX       ; 0049e279
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049e27c
    MOV dword ptr [EDX + 0x8],EAX       ; 0049e280
    PUSH 0x3dcccccd                     ; 0049e283
        ;   Label: LAB_0049e283
    PUSH 0x0                            ; 0049e288
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049e28a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x58],EAX      ; 0049e28f
    LEA EAX,[EBX + 0x10]                ; 0049e293
    FLD float ptr [ESP + 0x58]          ; 0049e296
    ADD ESP,0x8                         ; 0049e29a
    FLD float ptr [EAX]                 ; 0049e29d
    FXCH                                ; 0049e29f
    FSTP float ptr [ESP + 0x4c]         ; 0049e2a1
    FMUL float ptr [ESP + 0x4c]         ; 0049e2a5
    FLD float ptr [EAX + 0x4]           ; 0049e2a9
    FMUL float ptr [ESP + 0x4c]         ; 0049e2ac
    FLD float ptr [EAX + 0x8]           ; 0049e2b0
    FMUL float ptr [ESP + 0x4c]         ; 0049e2b3
    LEA EDI,[ESP + 0x34]                ; 0049e2b7
    LEA ESI,[ESP + 0x40]                ; 0049e2bb
    MOV EAX,dword ptr [ESP + 0x74]      ; 0049e2bf
    FXCH ST2                            ; 0049e2c3
    FSTP float ptr [ESP + 0x40]         ; 0049e2c5
    FSTP float ptr [ESP + 0x44]         ; 0049e2c9
    FSTP float ptr [ESP + 0x48]         ; 0049e2cd
    MOVSD ES:EDI,ESI                    ; 0049e2d1
    MOVSD ES:EDI,ESI                    ; 0049e2d2
    MOVSD ES:EDI,ESI                    ; 0049e2d3
    MOV dword ptr [EBX + 0x20],EAX      ; 0049e2d4
    FLD float ptr [EBX]                 ; 0049e2d7
    FLD float ptr [EBX + 0x4]           ; 0049e2d9
    FLD float ptr [EBX + 0x8]           ; 0049e2dc
    MOV dword ptr [EBX + 0x24],EBP      ; 0049e2df
    FXCH ST2                            ; 0049e2e2
    FADD float ptr [ESP + 0x34]         ; 0049e2e4
    FXCH                                ; 0049e2e8
    FADD float ptr [ESP + 0x38]         ; 0049e2ea
    FXCH ST2                            ; 0049e2ee
    FADD float ptr [ESP + 0x3c]         ; 0049e2f0
    FXCH                                ; 0049e2f4
    FSTP float ptr [EBX]                ; 0049e2f6
    FXCH                                ; 0049e2f8
    FSTP float ptr [EBX + 0x4]          ; 0049e2fa
    FSTP float ptr [EBX + 0x8]          ; 0049e2fd
    ADD ESP,0x54                        ; 0049e300
    POP EBP                             ; 0049e303
    POP EDI                             ; 0049e304
    POP ESI                             ; 0049e305
    POP EBX                             ; 0049e306
    RET                                 ; 0049e307
    MOV EDX,dword ptr [EAX]             ; 0049e308
        ;   Label: LAB_0049e308
    MOV dword ptr [EBX],EDX             ; 0049e30a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049e30c
    MOV dword ptr [EBX + 0x4],EDX       ; 0049e30f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0049e312
    MOV dword ptr [EBX + 0x8],EDX       ; 0049e315
    JMP 0x0049e1bb                      ; 0049e318
        ;   XREF to: 0049e1bb (UNCONDITIONAL_JUMP)  ; LAB_0049e1bb
    PUSH 0x3f800000                     ; 0049e31d
        ;   Label: LAB_0049e31d
    PUSH 0x3f666666                     ; 0049e322
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049e327
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x58],EAX      ; 0049e32c
    FLD float ptr [ESP + 0x58]          ; 0049e330
    FMUL float ptr [0x005df900]         ; 0049e334 | DAT_005df900
    ADD ESP,0x8                         ; 0049e33a
    FSTP float ptr [EBX + 0xc]          ; 0049e33d
    JMP 0x0049e1cc                      ; 0049e340
        ;   XREF to: 0049e1cc (UNCONDITIONAL_JUMP)  ; LAB_0049e1cc
    CMP EBP,0x4                         ; 0049e345
        ;   Label: LAB_0049e345
    JZ 0x0049e1d5                       ; 0049e348
        ;   XREF to: 0049e1d5 (CONDITIONAL_JUMP)  ; LAB_0049e1d5
    CMP EBP,0x3                         ; 0049e34e
    JZ 0x0049e1d5                       ; 0049e351
        ;   XREF to: 0049e1d5 (CONDITIONAL_JUMP)  ; LAB_0049e1d5
    CMP EBP,0x6                         ; 0049e357
    JZ 0x0049e1d5                       ; 0049e35a
        ;   XREF to: 0049e1d5 (CONDITIONAL_JUMP)  ; LAB_0049e1d5
    CMP EBP,0x7                         ; 0049e360
    JZ 0x0049e1d5                       ; 0049e363
        ;   XREF to: 0049e1d5 (CONDITIONAL_JUMP)  ; LAB_0049e1d5
    CMP EBP,0x5                         ; 0049e369
    JNZ 0x0049e37a                      ; 0049e36c
        ;   XREF to: 0049e37a (CONDITIONAL_JUMP)  ; LAB_0049e37a
    MOV dword ptr [EBX + 0x28],0x6      ; 0049e36e
    JMP 0x0049e1dc                      ; 0049e375
        ;   XREF to: 0049e1dc (UNCONDITIONAL_JUMP)  ; LAB_0049e1dc
    MOV dword ptr [EBX + 0x28],0x14     ; 0049e37a
        ;   Label: LAB_0049e37a
    JMP 0x0049e1dc                      ; 0049e381
        ;   XREF to: 0049e1dc (UNCONDITIONAL_JUMP)  ; LAB_0049e1dc

