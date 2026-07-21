; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CGunFlame_activate_FUN_00488280(float *param_1,float *param_2,float *param_3,float param_4)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_0048c3c0 at 0048c3f0
;
; Referenced Globals:
;   undefined4 DAT_0059d214
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488280
        ;   Label: core_fire.cpp_CGunFlame_activate_FUN_00488280
    PUSH ESI                            ; 00488281
    SUB ESP,0x64                        ; 00488282
    MOV EBX,dword ptr [ESP + 0x70]      ; 00488285
    MOV EDX,dword ptr [ESP + 0x74]      ; 00488289
    MOV ESI,dword ptr [ESP + 0x78]      ; 0048828d
    LEA EAX,[EBX + 0x4]                 ; 00488291
    CMP EAX,EDX                         ; 00488294
    JZ 0x004882a8                       ; 00488296
        ;   XREF to: 004882a8 (CONDITIONAL_JUMP)  ; LAB_004882a8
    MOV ECX,dword ptr [EDX]             ; 00488298
    MOV dword ptr [EAX],ECX             ; 0048829a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0048829c
    MOV dword ptr [EAX + 0x4],ECX       ; 0048829f
    MOV ECX,dword ptr [EDX + 0x8]       ; 004882a2
    MOV dword ptr [EAX + 0x8],ECX       ; 004882a5
    PUSH 0x3f800000                     ; 004882a8
        ;   Label: LAB_004882a8
    PUSH 0x3f666666                     ; 004882ad
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004882b2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 004882b7
    FLD float ptr [ESP + 0x68]          ; 004882bb
    FLD float ptr [0x0059d214]          ; 004882bf | DAT_0059d214
    ADD ESP,0x8                         ; 004882c5
    FMULP                               ; 004882c8
    PUSH 0x41980000                     ; 004882ca
    PUSH 0x0                            ; 004882cf
    FSTP float ptr [EBX]                ; 004882d1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004882d3
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 004882d8
    MOV EAX,dword ptr [ESP + 0x68]      ; 004882dc
    MOV dword ptr [EBX + 0x1c],EAX      ; 004882e0
    ADD ESP,0x8                         ; 004882e3
    MOV EAX,dword ptr [ESI]             ; 004882e6
    MOV dword ptr [ESP + 0x4c],EAX      ; 004882e8
    LEA EAX,[ESI + 0x4]                 ; 004882ec
    MOV EAX,dword ptr [EAX]             ; 004882ef
    MOV dword ptr [ESP + 0x50],EAX      ; 004882f1
    LEA EAX,[ESI + 0x8]                 ; 004882f5
    PUSH 0x3d567750                     ; 004882f8
    MOV EAX,dword ptr [EAX]             ; 004882fd
    PUSH 0xbd567750                     ; 004882ff
    MOV dword ptr [ESP + 0x5c],EAX      ; 00488304
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00488308
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 0048830d
    FLD float ptr [ESP + 0x68]          ; 00488311
    ADD ESP,0x8                         ; 00488315
    PUSH 0x3d567750                     ; 00488318
    FADD float ptr [ESP + 0x54]         ; 0048831d
    PUSH 0xbd567750                     ; 00488321
    FSTP float ptr [ESP + 0x58]         ; 00488326
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048832a
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 0048832f
    FLD float ptr [ESP + 0x68]          ; 00488333
    ADD ESP,0x8                         ; 00488337
    LEA EAX,[ESP + 0x4c]                ; 0048833a
    PUSH EAX                            ; 0048833e
    LEA EAX,[ESP + 0x4]                 ; 0048833f
    FADD float ptr [ESP + 0x50]         ; 00488343
    PUSH EAX                            ; 00488347
    FSTP float ptr [ESP + 0x54]         ; 00488348
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0048834c
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 00488351
    PUSH 0x40cccccd                     ; 00488354
    PUSH 0x40a33333                     ; 00488359
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048835e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 00488363
    FLD float ptr [ESP + 0x68]          ; 00488367
    ADD ESP,0x8                         ; 0048836b
    FSTP float ptr [ESP + 0x5c]         ; 0048836e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00488372
    MOV dword ptr [ESP + 0x3c],EAX      ; 00488376
    LEA EAX,[ESP + 0x34]                ; 0048837a
    PUSH EAX                            ; 0048837e
    LEA EAX,[ESP + 0x44]                ; 0048837f
    PUSH EAX                            ; 00488383
    LEA EAX,[ESP + 0x8]                 ; 00488384
    XOR EDX,EDX                         ; 00488388
    PUSH EAX                            ; 0048838a
    MOV dword ptr [ESP + 0x40],EDX      ; 0048838b
    MOV dword ptr [ESP + 0x44],EDX      ; 0048838f
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00488393
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    LEA EDX,[EBX + 0x10]                ; 00488398
    ADD ESP,0xc                         ; 0048839b
    CMP EDX,EAX                         ; 0048839e
    JZ 0x004883b2                       ; 004883a0
        ;   XREF to: 004883b2 (CONDITIONAL_JUMP)  ; LAB_004883b2
    MOV ECX,dword ptr [EAX]             ; 004883a2
    MOV dword ptr [EDX],ECX             ; 004883a4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004883a6
    MOV dword ptr [EDX + 0x4],ECX       ; 004883a9
    MOV ECX,dword ptr [EAX + 0x8]       ; 004883ac
    MOV dword ptr [EDX + 0x8],ECX       ; 004883af
    PUSH 0x3dcccccd                     ; 004883b2
        ;   Label: LAB_004883b2
    PUSH 0x0                            ; 004883b7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004883b9
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 004883be
    LEA EAX,[EBX + 0x10]                ; 004883c2
    FLD float ptr [ESP + 0x68]          ; 004883c5
    ADD ESP,0x8                         ; 004883c9
    FLD float ptr [EAX]                 ; 004883cc
    FXCH                                ; 004883ce
    FSTP float ptr [ESP + 0x58]         ; 004883d0
    FMUL float ptr [ESP + 0x58]         ; 004883d4
    FSTP float ptr [ESP + 0x28]         ; 004883d8
    FLD float ptr [EAX + 0x4]           ; 004883dc
    FMUL float ptr [ESP + 0x58]         ; 004883df
    FSTP float ptr [ESP + 0x2c]         ; 004883e3
    FLD float ptr [EAX + 0x8]           ; 004883e7
    FMUL float ptr [ESP + 0x58]         ; 004883ea
    LEA EAX,[EBX + 0x4]                 ; 004883ee
    FSTP float ptr [ESP + 0x30]         ; 004883f1
    FLD float ptr [EAX]                 ; 004883f5
    FADD float ptr [ESP + 0x28]         ; 004883f7
    FLD float ptr [EAX + 0x4]           ; 004883fb
    FXCH                                ; 004883fe
    FSTP float ptr [EAX]                ; 00488400
    FADD float ptr [ESP + 0x2c]         ; 00488402
    FLD float ptr [EAX + 0x8]           ; 00488406
    FXCH                                ; 00488409
    FSTP float ptr [EAX + 0x4]          ; 0048840b
    FADD float ptr [ESP + 0x30]         ; 0048840e
    FSTP float ptr [EAX + 0x8]          ; 00488412
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00488415
    MOV dword ptr [EBX + 0x20],EAX      ; 00488419
    ADD ESP,0x64                        ; 0048841c
    POP ESI                             ; 0048841f
    POP EBX                             ; 00488420
    RET                                 ; 00488421

