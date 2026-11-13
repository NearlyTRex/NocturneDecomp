; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_activate_FUN_0049a1b0(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; int              Stack[0x10]:4   flame_type
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680 at 0049e6b0
;
; Referenced Globals:
;   undefined4 DAT_005f6500
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a1b0
        ;   Label: core_fire.cpp_CGunFlame_activate_FUN_0049a1b0
    PUSH ESI                            ; 0049a1b1
    PUSH EDI                            ; 0049a1b2
    SUB ESP,0x7c                        ; 0049a1b3
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0049a1b6
    MOV EDX,dword ptr [ESP + 0x90]      ; 0049a1bd
    MOV ESI,dword ptr [ESP + 0x94]      ; 0049a1c4
    LEA EAX,[EBX + 0x4]                 ; 0049a1cb
    CMP EAX,EDX                         ; 0049a1ce
    JZ 0x0049a1e2                       ; 0049a1d0
        ;   XREF to: 0049a1e2 (CONDITIONAL_JUMP)  ; LAB_0049a1e2
    MOV ECX,dword ptr [EDX]             ; 0049a1d2
    MOV dword ptr [EAX],ECX             ; 0049a1d4
    MOV ECX,dword ptr [EDX + 0x4]       ; 0049a1d6
    MOV dword ptr [EAX + 0x4],ECX       ; 0049a1d9
    MOV ECX,dword ptr [EDX + 0x8]       ; 0049a1dc
    MOV dword ptr [EAX + 0x8],ECX       ; 0049a1df
    PUSH 0x3f800000                     ; 0049a1e2
        ;   Label: LAB_0049a1e2
    PUSH 0x3f666666                     ; 0049a1e7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049a1ec
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049a1f1
    FLD float ptr [ESP + 0x80]          ; 0049a1f8
    FLD float ptr [0x005f6500]          ; 0049a1ff | DAT_005f6500
    ADD ESP,0x8                         ; 0049a205
    FMULP                               ; 0049a208
    PUSH 0x41980000                     ; 0049a20a
    PUSH 0x0                            ; 0049a20f
    FSTP float ptr [EBX]                ; 0049a211
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049a213
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049a218
    FLD float ptr [ESP + 0x80]          ; 0049a21f
    ADD ESP,0x8                         ; 0049a226
    LEA EDI,[ESP + 0x40]                ; 0049a229
    PUSH 0x3d567750                     ; 0049a22d
    FSTP float ptr [EBX + 0x1c]         ; 0049a232
    PUSH 0xbd567750                     ; 0049a235
    MOVSD ES:EDI,ESI                    ; 0049a23a
    MOVSD ES:EDI,ESI                    ; 0049a23b
    MOVSD ES:EDI,ESI                    ; 0049a23c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049a23d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049a242
    FLD float ptr [ESP + 0x80]          ; 0049a249
    ADD ESP,0x8                         ; 0049a250
    PUSH 0x3d567750                     ; 0049a253
    FADD float ptr [ESP + 0x48]         ; 0049a258
    PUSH 0xbd567750                     ; 0049a25c
    FSTP float ptr [ESP + 0x4c]         ; 0049a261
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049a265
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049a26a
    FLD float ptr [ESP + 0x80]          ; 0049a271
    ADD ESP,0x8                         ; 0049a278
    LEA EAX,[ESP + 0x40]                ; 0049a27b
    PUSH EAX                            ; 0049a27f
    LEA EAX,[ESP + 0x4]                 ; 0049a280
    FADD float ptr [ESP + 0x44]         ; 0049a284
    PUSH EAX                            ; 0049a288
    FSTP float ptr [ESP + 0x48]         ; 0049a289
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0049a28d
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0049a292
    PUSH 0x40cccccd                     ; 0049a295
    PUSH 0x40a33333                     ; 0049a29a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049a29f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049a2a4
    FLD float ptr [ESP + 0x80]          ; 0049a2ab
    ADD ESP,0x8                         ; 0049a2b2
    FSTP float ptr [ESP + 0x70]         ; 0049a2b5
    MOV EAX,dword ptr [ESP + 0x70]      ; 0049a2b9
    LEA ESI,[ESP + 0x4c]                ; 0049a2bd
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049a2c1
    LEA EAX,[ESP + 0x34]                ; 0049a2c5
    LEA EDI,[ESP + 0x28]                ; 0049a2c9
    PUSH EAX                            ; 0049a2cd
    LEA EAX,[ESP + 0x4]                 ; 0049a2ce
    XOR EDX,EDX                         ; 0049a2d2
    PUSH EAX                            ; 0049a2d4
    MOV dword ptr [ESP + 0x3c],EDX      ; 0049a2d5
    MOV dword ptr [ESP + 0x40],EDX      ; 0049a2d9
    CALL core_dirmat.cpp_FUN_00449530   ; 0049a2dd
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x54]                ; 0049a2e2
    LEA EAX,[ESP + 0x30]                ; 0049a2e6
    ADD ESP,0x8                         ; 0049a2ea
    LEA EDX,[EBX + 0x10]                ; 0049a2ed
    MOVSD ES:EDI,ESI                    ; 0049a2f0
    MOVSD ES:EDI,ESI                    ; 0049a2f1
    MOVSD ES:EDI,ESI                    ; 0049a2f2
    CMP EDX,EAX                         ; 0049a2f3
    JZ 0x0049a30b                       ; 0049a2f5
        ;   XREF to: 0049a30b (CONDITIONAL_JUMP)  ; LAB_0049a30b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049a2f7
    MOV dword ptr [EDX],EAX             ; 0049a2fb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049a2fd
    MOV dword ptr [EDX + 0x4],EAX       ; 0049a301
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049a304
    MOV dword ptr [EDX + 0x8],EAX       ; 0049a308
    PUSH 0x3dcccccd                     ; 0049a30b
        ;   Label: LAB_0049a30b
    PUSH 0x0                            ; 0049a310
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049a312
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049a317
    LEA EAX,[EBX + 0x10]                ; 0049a31e
    FLD float ptr [ESP + 0x80]          ; 0049a321
    ADD ESP,0x8                         ; 0049a328
    FLD float ptr [EAX]                 ; 0049a32b
    FXCH                                ; 0049a32d
    FSTP float ptr [ESP + 0x74]         ; 0049a32f
    FMUL float ptr [ESP + 0x74]         ; 0049a333
    FLD float ptr [EAX + 0x4]           ; 0049a337
    FMUL float ptr [ESP + 0x74]         ; 0049a33a
    FLD float ptr [EAX + 0x8]           ; 0049a33e
    FMUL float ptr [ESP + 0x74]         ; 0049a341
    LEA EDI,[ESP + 0x58]                ; 0049a345
    LEA ESI,[ESP + 0x64]                ; 0049a349
    LEA EAX,[EBX + 0x4]                 ; 0049a34d
    FXCH ST2                            ; 0049a350
    FSTP float ptr [ESP + 0x64]         ; 0049a352
    FSTP float ptr [ESP + 0x68]         ; 0049a356
    FSTP float ptr [ESP + 0x6c]         ; 0049a35a
    MOVSD ES:EDI,ESI                    ; 0049a35e
    MOVSD ES:EDI,ESI                    ; 0049a35f
    MOVSD ES:EDI,ESI                    ; 0049a360
    FLD float ptr [EAX]                 ; 0049a361
    FLD float ptr [EAX + 0x4]           ; 0049a363
    FLD float ptr [EAX + 0x8]           ; 0049a366
    FXCH ST2                            ; 0049a369
    FADD float ptr [ESP + 0x58]         ; 0049a36b
    FXCH                                ; 0049a36f
    FADD float ptr [ESP + 0x5c]         ; 0049a371
    FXCH ST2                            ; 0049a375
    FADD float ptr [ESP + 0x60]         ; 0049a377
    FXCH                                ; 0049a37b
    FSTP float ptr [EAX]                ; 0049a37d
    FXCH                                ; 0049a37f
    FSTP float ptr [EAX + 0x4]          ; 0049a381
    FSTP float ptr [EAX + 0x8]          ; 0049a384
    MOV EAX,dword ptr [ESP + 0x98]      ; 0049a387
    MOV dword ptr [EBX + 0x20],EAX      ; 0049a38e
    ADD ESP,0x7c                        ; 0049a391
    POP EDI                             ; 0049a394
    POP ESI                             ; 0049a395
    POP EBX                             ; 0049a396
    RET                                 ; 0049a397

