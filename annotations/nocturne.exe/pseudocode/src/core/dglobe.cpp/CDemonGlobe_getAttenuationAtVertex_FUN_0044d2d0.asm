; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0(int param_1,int *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0 at 0050b69f
;
; Referenced Globals:
;   undefined4 DAT_0059bff8
;   undefined4 DAT_0059bffc
;   undefined4 DAT_01c70710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d2d0
        ;   Label: core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0
    PUSH ESI                            ; 0044d2d1
    PUSH EDI                            ; 0044d2d2
    PUSH EBP                            ; 0044d2d3
    MOV EBP,ESP                         ; 0044d2d4
    SUB ESP,0x38                        ; 0044d2d6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044d2d9
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044d2dc
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0044d2df
    LEA EBX,[EBP + -0x20]               ; 0044d2e2
    FILD dword ptr [EAX]                ; 0044d2e5
    FMUL float ptr [0x0059bff8]         ; 0044d2e7 | DAT_0059bff8
    FSTP float ptr [EBX]                ; 0044d2ed
    FILD dword ptr [EAX + 0x4]          ; 0044d2ef
    FMUL float ptr [0x0059bff8]         ; 0044d2f2 | DAT_0059bff8
    FSTP float ptr [EBX + 0x4]          ; 0044d2f8
    FILD dword ptr [EAX + 0x8]          ; 0044d2fb
    FMUL float ptr [0x0059bff8]         ; 0044d2fe | DAT_0059bff8
    FSTP float ptr [EBX + 0x8]          ; 0044d304
    FLD float ptr [EBP + -0x20]         ; 0044d307
    LEA EAX,[EDX + 0x24]                ; 0044d30a
    FLD float ptr [EBP + -0x1c]         ; 0044d30d
    FXCH                                ; 0044d310
    FSUB float ptr [EAX]                ; 0044d312
    FLD float ptr [EBP + -0x18]         ; 0044d314
    FXCH                                ; 0044d317
    FSTP float ptr [EBP + -0x38]        ; 0044d319
    FXCH                                ; 0044d31c
    FSUB float ptr [EAX + 0x4]          ; 0044d31e
    LEA EBX,[EBP + -0x20]               ; 0044d321
    FSTP float ptr [EBP + -0x34]        ; 0044d324
    FSUB float ptr [EAX + 0x8]          ; 0044d327
    LEA EAX,[EBP + -0x38]               ; 0044d32a
    FSTP float ptr [EBP + -0x30]        ; 0044d32d
    CMP EBX,EAX                         ; 0044d330
    JNZ 0x0044d40a                      ; 0044d332
        ;   XREF to: 0044d40a (CONDITIONAL_JUMP)  ; LAB_0044d40a
    FLD float ptr [EBP + -0x1c]         ; 0044d338
        ;   Label: LAB_0044d338
    FMUL ST0                            ; 0044d33b
    FLD float ptr [EBP + -0x20]         ; 0044d33d
    FMUL ST0                            ; 0044d340
    FADDP                               ; 0044d342
    FLD float ptr [EBP + -0x18]         ; 0044d344
    FMUL ST0                            ; 0044d347
    FADDP                               ; 0044d349
    FST float ptr [EBP + -0x4]          ; 0044d34b
    FCOMP float ptr [EDX + 0x18]        ; 0044d34e
    FNSTSW AX                           ; 0044d351
    SAHF                                ; 0044d353
    JA 0x0044d421                       ; 0044d354
        ;   XREF to: 0044d421 (CONDITIONAL_JUMP)  ; LAB_0044d421
    FLD float ptr [EDX + 0x18]          ; 0044d35a
    FSUB float ptr [EBP + -0x4]         ; 0044d35d
    FMUL float ptr [EDX + 0x38]         ; 0044d360
    FILD dword ptr [EDX + 0x3c]         ; 0044d363
    FMULP                               ; 0044d366
    FSTP float ptr [EBP + -0x10]        ; 0044d368
    TEST ECX,ECX                        ; 0044d36b
    JZ 0x0044d3f4                       ; 0044d36d
        ;   XREF to: 0044d3f4 (CONDITIONAL_JUMP)  ; LAB_0044d3f4
    MOV EAX,dword ptr [EBP + -0x4]      ; 0044d373
    MOV EDX,dword ptr [0x01c70710]      ; 0044d376 | DAT_01c70710
    SAR EAX,0x1                         ; 0044d37c
    SUB EDX,EAX                         ; 0044d37e
    MOV dword ptr [EBP + -0xc],EDX      ; 0044d380
    FLD float ptr [EBP + -0x20]         ; 0044d383
    FMUL float ptr [EBP + -0xc]         ; 0044d386
    FLD float ptr [EBP + -0x1c]         ; 0044d389
    FMUL float ptr [EBP + -0xc]         ; 0044d38c
    FLD float ptr [EBP + -0x18]         ; 0044d38f
    FMUL float ptr [EBP + -0xc]         ; 0044d392
    LEA EBX,[EBP + -0x2c]               ; 0044d395
    MOV EAX,ECX                         ; 0044d398
    FXCH ST2                            ; 0044d39a
    FSTP float ptr [EBP + -0x20]        ; 0044d39c
    FSTP float ptr [EBP + -0x1c]        ; 0044d39f
    FSTP float ptr [EBP + -0x18]        ; 0044d3a2
    FILD dword ptr [EAX]                ; 0044d3a5
    FMUL float ptr [0x0059bffc]         ; 0044d3a7 | DAT_0059bffc
    FSTP float ptr [EBX]                ; 0044d3ad
    FILD dword ptr [EAX + 0x4]          ; 0044d3af
    FMUL float ptr [0x0059bffc]         ; 0044d3b2 | DAT_0059bffc
    FSTP float ptr [EBX + 0x4]          ; 0044d3b8
    FILD dword ptr [EAX + 0x8]          ; 0044d3bb
    FMUL float ptr [0x0059bffc]         ; 0044d3be | DAT_0059bffc
    FSTP float ptr [EBX + 0x8]          ; 0044d3c4
    FLD float ptr [EBP + -0x1c]         ; 0044d3c7
    FMUL float ptr [EBP + -0x28]        ; 0044d3ca
    FLD float ptr [EBP + -0x20]         ; 0044d3cd
    FMUL float ptr [EBP + -0x2c]        ; 0044d3d0
    FADDP                               ; 0044d3d3
    FLD float ptr [EBP + -0x18]         ; 0044d3d5
    FMUL float ptr [EBP + -0x24]        ; 0044d3d8
    FADDP                               ; 0044d3db
    FST float ptr [EBP + -0x8]          ; 0044d3dd
    FLDZ                                ; 0044d3e0
    FCOMPP                              ; 0044d3e2
    FNSTSW AX                           ; 0044d3e4
    SAHF                                ; 0044d3e6
    JC 0x0044d421                       ; 0044d3e7
        ;   XREF to: 0044d421 (CONDITIONAL_JUMP)  ; LAB_0044d421
    FLD float ptr [EBP + -0x8]          ; 0044d3e9
    FCHS                                ; 0044d3ec
    FMUL float ptr [EBP + -0x10]        ; 0044d3ee
    FSTP float ptr [EBP + -0x10]        ; 0044d3f1
    FLD float ptr [EBP + 0xfffffff0]    ; 0044d3f4
        ;   Label: LAB_0044d3f4
    FISTP dword ptr [EBP + 0xffffffec]  ; 0044d3fa
    MOV EAX,dword ptr [EBP + -0x14]     ; 0044d400
    MOV ESP,EBP                         ; 0044d403
    POP EBP                             ; 0044d405
    POP EDI                             ; 0044d406
    POP ESI                             ; 0044d407
    POP EBX                             ; 0044d408
    RET                                 ; 0044d409
    MOV EAX,dword ptr [EBP + -0x38]     ; 0044d40a
        ;   Label: LAB_0044d40a
    MOV dword ptr [EBP + -0x20],EAX     ; 0044d40d
    MOV EAX,dword ptr [EBP + -0x34]     ; 0044d410
    MOV dword ptr [EBP + -0x1c],EAX     ; 0044d413
    MOV EAX,dword ptr [EBP + -0x30]     ; 0044d416
    MOV dword ptr [EBP + -0x18],EAX     ; 0044d419
    JMP 0x0044d338                      ; 0044d41c
        ;   XREF to: 0044d338 (UNCONDITIONAL_JUMP)  ; LAB_0044d338
    XOR EAX,EAX                         ; 0044d421
        ;   Label: LAB_0044d421
    MOV ESP,EBP                         ; 0044d423
    POP EBP                             ; 0044d425
    POP EDI                             ; 0044d426
    POP ESI                             ; 0044d427
    POP EBX                             ; 0044d428
    RET                                 ; 0044d429

