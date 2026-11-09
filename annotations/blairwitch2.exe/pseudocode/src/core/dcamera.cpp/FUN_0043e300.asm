; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dcamera_cpp_FUN_0043e300(CDemonCamera *param_1,CVector3i *param_2,CDemonLight *param_3,int *param_4)
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
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0 at 00531242
;
; Referenced Globals:
;   undefined4 DAT_005f4dd0
;   undefined4 DAT_005f4dd4
;   undefined4 DAT_01caf5b8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0043dca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e300
        ;   Label: core_dcamera.cpp_FUN_0043e300
    PUSH ESI                            ; 0043e301
    PUSH EDI                            ; 0043e302
    PUSH EBP                            ; 0043e303
    SUB ESP,0x38                        ; 0043e304
    MOV EBP,dword ptr [ESP + 0x50]      ; 0043e307
    MOV ECX,dword ptr [ESP + 0x58]      ; 0043e30b
    TEST ECX,ECX                        ; 0043e30f
    JNZ 0x0043e334                      ; 0043e311
        ;   XREF to: 0043e334 (CONDITIONAL_JUMP)  ; LAB_0043e334
    MOV EAX,0xaaaa                      ; 0043e313
    PUSH EAX                            ; 0043e318
        ;   Label: LAB_0043e318
    MOV EDX,dword ptr [ESP + 0x58]      ; 0043e319
    PUSH EDX                            ; 0043e31d
    PUSH EBP                            ; 0043e31e
    MOV ECX,dword ptr [ESP + 0x58]      ; 0043e31f
    PUSH ECX                            ; 0043e323
    CALL core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0043dca0 ; 0043e324
        ;   XREF to: 0043dca0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0043dca0(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, int intensity)
    ADD ESP,0x10                        ; 0043e329
    ADD ESP,0x38                        ; 0043e32c
    POP EBP                             ; 0043e32f
    POP EDI                             ; 0043e330
    POP ESI                             ; 0043e331
    POP EBX                             ; 0043e332
    RET                                 ; 0043e333
    MOV EBX,ESP                         ; 0043e334
        ;   Label: LAB_0043e334
    LEA EDI,[ESP + 0xc]                 ; 0043e336
    MOV EAX,EBP                         ; 0043e33a
    LEA ESI,[ESP + 0x24]                ; 0043e33c
    FILD dword ptr [EAX]                ; 0043e340
    FMUL float ptr [0x005f4dd4]         ; 0043e342 | DAT_005f4dd4
    FSTP float ptr [EBX]                ; 0043e348
    FILD dword ptr [EAX + 0x4]          ; 0043e34a
    FMUL float ptr [0x005f4dd4]         ; 0043e34d | DAT_005f4dd4
    FSTP float ptr [EBX + 0x4]          ; 0043e353
    FILD dword ptr [EAX + 0x8]          ; 0043e356
    FMUL float ptr [0x005f4dd4]         ; 0043e359 | DAT_005f4dd4
    FSTP float ptr [EBX + 0x8]          ; 0043e35f
    FLD float ptr [ESP]                 ; 0043e362
    FLD float ptr [ESP + 0x4]           ; 0043e365
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043e369
    FLD float ptr [ESP + 0x8]           ; 0043e36d
    FXCH ST2                            ; 0043e371
    FSUB float ptr [EAX + 0x4]          ; 0043e373
    FXCH                                ; 0043e376
    FSUB float ptr [EAX + 0x8]          ; 0043e378
    FXCH ST2                            ; 0043e37b
    FSUB float ptr [EAX + 0xc]          ; 0043e37d
    FXCH                                ; 0043e380
    FSTP float ptr [ESP + 0x24]         ; 0043e382
    FXCH                                ; 0043e386
    FSTP float ptr [ESP + 0x28]         ; 0043e388
    FSTP float ptr [ESP + 0x2c]         ; 0043e38c
    MOVSD ES:EDI,ESI                    ; 0043e390
    MOVSD ES:EDI,ESI                    ; 0043e391
    MOVSD ES:EDI,ESI                    ; 0043e392
    FLD float ptr [ESP + 0x10]          ; 0043e393
    FMUL ST0                            ; 0043e397
    FLD float ptr [ESP + 0xc]           ; 0043e399
    FMUL ST0                            ; 0043e39d
    FADDP                               ; 0043e39f
    FLD float ptr [ESP + 0x14]          ; 0043e3a1
    FMUL ST0                            ; 0043e3a5
    FADDP                               ; 0043e3a7
    FSTP float ptr [ESP + 0x30]         ; 0043e3a9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043e3ad
    MOV EDX,dword ptr [0x01caf5b8]      ; 0043e3b1 | DAT_01caf5b8
    SAR EAX,0x1                         ; 0043e3b7
    SUB EDX,EAX                         ; 0043e3b9
    MOV dword ptr [ESP + 0x34],EDX      ; 0043e3bb
    FLD float ptr [ESP + 0xc]           ; 0043e3bf
    FMUL float ptr [ESP + 0x34]         ; 0043e3c3
    FLD float ptr [ESP + 0x10]          ; 0043e3c7
    FMUL float ptr [ESP + 0x34]         ; 0043e3cb
    FLD float ptr [ESP + 0x14]          ; 0043e3cf
    FMUL float ptr [ESP + 0x34]         ; 0043e3d3
    LEA EBX,[ESP + 0x18]                ; 0043e3d7
    LEA EAX,[ESP + 0xc]                 ; 0043e3db
    FXCH ST2                            ; 0043e3df
    FSTP float ptr [ESP + 0xc]          ; 0043e3e1
    FSTP float ptr [ESP + 0x10]         ; 0043e3e5
    FSTP float ptr [ESP + 0x14]         ; 0043e3e9
    FLD float ptr [EAX]                 ; 0043e3ed
    FMUL float ptr [0x005f4dd0]         ; 0043e3ef | DAT_005f4dd0
    FISTP dword ptr [EBX]               ; 0043e3f5
    FLD float ptr [EAX + 0x4]           ; 0043e3f7
    FMUL float ptr [0x005f4dd0]         ; 0043e3fa | DAT_005f4dd0
    FISTP dword ptr [EBX + 0x4]         ; 0043e400
    FLD float ptr [EAX + 0x8]           ; 0043e403
    FMUL float ptr [0x005f4dd0]         ; 0043e406 | DAT_005f4dd0
    FISTP dword ptr [EBX + 0x8]         ; 0043e40c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043e40f
    MOV EDX,dword ptr [ECX]             ; 0043e413
    IMUL EDX                            ; 0043e415
    SHRD EAX,EDX,0x10                   ; 0043e417
    MOV EBX,EAX                         ; 0043e41b
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043e41d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043e420
    IMUL EDX                            ; 0043e424
    SHRD EAX,EDX,0x10                   ; 0043e426
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043e42a
    ADD EBX,EAX                         ; 0043e42d
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043e42f
    IMUL EDX                            ; 0043e433
    SHRD EAX,EDX,0x10                   ; 0043e435
    ADD EAX,EBX                         ; 0043e439
    TEST EAX,EAX                        ; 0043e43b
    JL 0x0043e449                       ; 0043e43d
        ;   XREF to: 0043e449 (CONDITIONAL_JUMP)  ; LAB_0043e449
    XOR EAX,EAX                         ; 0043e43f
    ADD ESP,0x38                        ; 0043e441
    POP EBP                             ; 0043e444
    POP EDI                             ; 0043e445
    POP ESI                             ; 0043e446
    POP EBX                             ; 0043e447
    RET                                 ; 0043e448
    NEG EAX                             ; 0043e449
        ;   Label: LAB_0043e449
    JMP 0x0043e318                      ; 0043e44b
        ;   XREF to: 0043e318 (UNCONDITIONAL_JUMP)  ; LAB_0043e318

