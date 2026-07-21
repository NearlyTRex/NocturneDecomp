; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,uint *param_5)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580 at 004686aa
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0 at 004684e7
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00 at 00467faa
;
; Referenced Globals:
;   undefined4 DAT_014b89e8
;   undefined4 DAT_014b89ec
;   undefined4 DAT_014b89f0
;   undefined4 DAT_014b89f4
;   undefined4 DAT_014b89f8
;   undefined4 DAT_014b89fc
;   undefined4 DAT_014b8a00
;   undefined4 DAT_014b8a04
;   undefined4 DAT_014b8a08
;
; Called Functions:
;   core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b290
        ;   Label: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
    PUSH ESI                            ; 0044b291
    PUSH EDI                            ; 0044b292
    PUSH EBP                            ; 0044b293
    MOV EBP,ESP                         ; 0044b294
    SUB ESP,0x24                        ; 0044b296
    AND ESP,0xfffffff8                  ; 0044b299
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044b29c
    MOV ECX,0xffffffff                  ; 0044b29f
    MOV EDX,0x3f800347                  ; 0044b2a4
    MOV ESI,dword ptr [EDI + 0x28]      ; 0044b2a9
    XOR EBX,EBX                         ; 0044b2ac
    MOV dword ptr [ESP + 0x18],ECX      ; 0044b2ae
    MOV dword ptr [ESP + 0x1c],EDX      ; 0044b2b2
    TEST ESI,ESI                        ; 0044b2b6
    JLE 0x0044b31b                      ; 0044b2b8
        ;   XREF to: 0044b31b (CONDITIONAL_JUMP)  ; LAB_0044b31b
    XOR ESI,ESI                         ; 0044b2ba
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044b2bc
        ;   Label: LAB_0044b2bc
    PUSH EAX                            ; 0044b2bf
    MOV EDX,dword ptr [EBP + 0x18]      ; 0044b2c0
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b2c3
    PUSH EDX                            ; 0044b2c6
    ADD EAX,ESI                         ; 0044b2c7
    PUSH EAX                            ; 0044b2c9
    CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150 ; 0044b2ca
        ;   XREF to: 00449150 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150()
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044b2cf
    FLD float ptr [ESP + 0x2c]          ; 0044b2d3
    ADD ESP,0xc                         ; 0044b2d7
    FLDZ                                ; 0044b2da
    FXCH                                ; 0044b2dc
    FST float ptr [ESP + 0x8]           ; 0044b2de
    FSTP double ptr [ESP]               ; 0044b2e2
    FCOMP double ptr [ESP]              ; 0044b2e5
    FNSTSW AX                           ; 0044b2e8
    SAHF                                ; 0044b2ea
    JA 0x0044b310                       ; 0044b2eb
        ;   XREF to: 0044b310 (CONDITIONAL_JUMP)  ; LAB_0044b310
    FLD float ptr [ESP + 0x8]           ; 0044b2ed
    FCOMP float ptr [ESP + 0x1c]        ; 0044b2f1
    FNSTSW AX                           ; 0044b2f5
    SAHF                                ; 0044b2f7
    JNC 0x0044b310                      ; 0044b2f8
        ;   XREF to: 0044b310 (CONDITIONAL_JUMP)  ; LAB_0044b310
    FLD1                                ; 0044b2fa
    FCOMP double ptr [ESP]              ; 0044b2fc
    FNSTSW AX                           ; 0044b2ff
    SAHF                                ; 0044b301
    JC 0x0044b310                       ; 0044b302
        ;   XREF to: 0044b310 (CONDITIONAL_JUMP)  ; LAB_0044b310
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044b304
    MOV dword ptr [ESP + 0x18],EBX      ; 0044b308
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044b30c
    INC EBX                             ; 0044b310
        ;   Label: LAB_0044b310
    MOV EAX,dword ptr [EDI + 0x28]      ; 0044b311
    ADD ESI,0x20                        ; 0044b314
    CMP EBX,EAX                         ; 0044b317
    JL 0x0044b2bc                       ; 0044b319
        ;   XREF to: 0044b2bc (CONDITIONAL_JUMP)  ; LAB_0044b2bc
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044b31b
        ;   Label: LAB_0044b31b
    TEST EDX,EDX                        ; 0044b31f
    JL 0x0044b3e3                       ; 0044b321
        ;   XREF to: 0044b3e3 (CONDITIONAL_JUMP)  ; LAB_0044b3e3
    MOV EAX,EDX                         ; 0044b327
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0044b329
    SHL EAX,0x5                         ; 0044b32c
    MOV ECX,dword ptr [EBP + 0x20]      ; 0044b32f
    FLD float ptr [EBX + EAX*0x1 + 0xc] ; 0044b332
    FCHS                                ; 0044b336
    FSTP float ptr [ESP + 0xc]          ; 0044b338
    FLD float ptr [EBX + EAX*0x1 + 0x10] ; 0044b33c
    FCHS                                ; 0044b340
    FSTP float ptr [ESP + 0x10]         ; 0044b342
    FLD float ptr [EBX + EAX*0x1 + 0x14] ; 0044b346
    FCHS                                ; 0044b34a
    LEA EAX,[ESP + 0xc]                 ; 0044b34c
    FSTP float ptr [ESP + 0x14]         ; 0044b350
    CMP EAX,ECX                         ; 0044b354
    JNZ 0x0044b3ee                      ; 0044b356
        ;   XREF to: 0044b3ee (CONDITIONAL_JUMP)  ; LAB_0044b3ee
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044b35c
        ;   Label: LAB_0044b35c
    MOV EAX,dword ptr [EDI + 0x30]      ; 0044b360
    ADD EAX,EBX                         ; 0044b363
    MOV AL,byte ptr [EAX]               ; 0044b365
    MOV EBX,dword ptr [EBP + 0x24]      ; 0044b367
    AND EAX,0xff                        ; 0044b36a
    MOV dword ptr [EBX],EAX             ; 0044b36f
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044b371
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0044b375
    SHL EAX,0x5                         ; 0044b378
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 0044b37b
    CMP EAX,0x14b89e8                   ; 0044b37e
    JZ 0x0044b39f                       ; 0044b383
        ;   XREF to: 0044b39f (CONDITIONAL_JUMP)  ; LAB_0044b39f
    FLD float ptr [EAX]                 ; 0044b385
    FLD float ptr [EAX + 0x8]           ; 0044b387
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b38a
    MOV dword ptr [0x014b89ec],EDX      ; 0044b38d | DAT_014b89ec
    FSTP float ptr [0x014b89f0]         ; 0044b393 | DAT_014b89f0
    FSTP float ptr [0x014b89e8]         ; 0044b399 | DAT_014b89e8
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044b39f
        ;   Label: LAB_0044b39f
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0044b3a3
    SHL EAX,0x5                         ; 0044b3a6
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0044b3a9
    CMP EAX,0x14b89f4                   ; 0044b3ad
    JZ 0x0044b3ce                       ; 0044b3b2
        ;   XREF to: 0044b3ce (CONDITIONAL_JUMP)  ; LAB_0044b3ce
    FLD float ptr [EAX]                 ; 0044b3b4
    FLD float ptr [EAX + 0x8]           ; 0044b3b6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b3b9
    MOV dword ptr [0x014b89f8],EDX      ; 0044b3bc | DAT_014b89f8
    FSTP float ptr [0x014b89fc]         ; 0044b3c2 | DAT_014b89fc
    FSTP float ptr [0x014b89f4]         ; 0044b3c8 | DAT_014b89f4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044b3ce
        ;   Label: LAB_0044b3ce
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0044b3d2
    SHL EAX,0x5                         ; 0044b3d5
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0044b3d8
    CMP EAX,0x14b8a00                   ; 0044b3dc
    JNZ 0x0044b407                      ; 0044b3e1
        ;   XREF to: 0044b407 (CONDITIONAL_JUMP)  ; LAB_0044b407
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044b3e3
        ;   Label: LAB_0044b3e3
    MOV ESP,EBP                         ; 0044b3e7
    POP EBP                             ; 0044b3e9
    POP EDI                             ; 0044b3ea
    POP ESI                             ; 0044b3eb
    POP EBX                             ; 0044b3ec
    RET                                 ; 0044b3ed
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044b3ee
        ;   Label: LAB_0044b3ee
    MOV dword ptr [ECX],EAX             ; 0044b3f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044b3f4
    MOV dword ptr [ECX + 0x4],EAX       ; 0044b3f8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044b3fb
    MOV dword ptr [ECX + 0x8],EAX       ; 0044b3ff
    JMP 0x0044b35c                      ; 0044b402
        ;   XREF to: 0044b35c (UNCONDITIONAL_JUMP)  ; LAB_0044b35c
    FLD float ptr [EAX]                 ; 0044b407
        ;   Label: LAB_0044b407
    FLD float ptr [EAX + 0x8]           ; 0044b409
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b40c
    MOV dword ptr [0x014b8a04],EDX      ; 0044b40f | DAT_014b8a04
    FSTP float ptr [0x014b8a08]         ; 0044b415 | DAT_014b8a08
    FSTP float ptr [0x014b8a00]         ; 0044b41b | DAT_014b8a00
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044b421
    MOV ESP,EBP                         ; 0044b425
    POP EBP                             ; 0044b427
    POP EDI                             ; 0044b428
    POP ESI                             ; 0044b429
    POP EBX                             ; 0044b42a
    RET                                 ; 0044b42b

