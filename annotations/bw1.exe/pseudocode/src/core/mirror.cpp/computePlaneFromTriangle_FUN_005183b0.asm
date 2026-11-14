; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_005183b0(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   out_plane
; CVector3f *      Stack[0x8]:4   vertex_a
; CVector3f *      Stack[0xc]:4   vertex_b
; CVector3f *      Stack[0x10]:4   vertex_c
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0 at 00518903
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005183b0
        ;   Label: core_mirror.cpp_computePlaneFromTriangle_FUN_005183b0
    PUSH ESI                            ; 005183b1
    PUSH EDI                            ; 005183b2
    PUSH EBP                            ; 005183b3
    MOV EBP,ESP                         ; 005183b4
    SUB ESP,0x68                        ; 005183b6
    AND ESP,0xfffffff8                  ; 005183b9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005183bc
    MOV EBX,dword ptr [EBP + 0x18]      ; 005183bf
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005183c2
    FLD float ptr [ECX]                 ; 005183c5
    FLD float ptr [ECX + 0x4]           ; 005183c7
    FLD float ptr [ECX + 0x8]           ; 005183ca
    MOV EDI,ESP                         ; 005183cd
    LEA ESI,[ESP + 0x48]                ; 005183cf
    FXCH ST2                            ; 005183d3
    FSUB float ptr [EBX]                ; 005183d5
    FXCH                                ; 005183d7
    FSUB float ptr [EBX + 0x4]          ; 005183d9
    FXCH ST2                            ; 005183dc
    FSUB float ptr [EBX + 0x8]          ; 005183de
    FXCH ST2                            ; 005183e1
    FSTP float ptr [ESP + 0x4c]         ; 005183e3
    FXCH                                ; 005183e7
    FSTP float ptr [ESP + 0x50]         ; 005183e9
    FSTP float ptr [ESP + 0x48]         ; 005183ed
    MOVSD ES:EDI,ESI                    ; 005183f1
    MOVSD ES:EDI,ESI                    ; 005183f2
    MOVSD ES:EDI,ESI                    ; 005183f3
    MOV EAX,ESP                         ; 005183f4
    LEA ESI,[ESP + 0x24]                ; 005183f6
    CMP ESI,EAX                         ; 005183fa
    JNZ 0x0051852a                      ; 005183fc
        ;   XREF to: 0051852a (CONDITIONAL_JUMP)  ; LAB_0051852a
    MOV EAX,dword ptr [EBP + 0x20]      ; 00518402
        ;   Label: LAB_00518402
    LEA EDI,[ESP + 0x18]                ; 00518405
    LEA ESI,[ESP + 0x54]                ; 00518409
    FLD float ptr [EAX + 0x4]           ; 0051840d
    FLD float ptr [EAX + 0x8]           ; 00518410
    FLD float ptr [EAX]                 ; 00518413
    LEA EAX,[ESP + 0x18]                ; 00518415
    FSUB float ptr [ECX]                ; 00518419
    FXCH ST2                            ; 0051841b
    FSUB float ptr [ECX + 0x4]          ; 0051841d
    FXCH                                ; 00518420
    FSUB float ptr [ECX + 0x8]          ; 00518422
    FXCH                                ; 00518425
    FSTP float ptr [ESP + 0x58]         ; 00518427
    FSTP float ptr [ESP + 0x5c]         ; 0051842b
    FSTP float ptr [ESP + 0x54]         ; 0051842f
    LEA ECX,[ESP + 0x30]                ; 00518433
    MOVSD ES:EDI,ESI                    ; 00518437
    MOVSD ES:EDI,ESI                    ; 00518438
    MOVSD ES:EDI,ESI                    ; 00518439
    CMP ECX,EAX                         ; 0051843a
    JZ 0x00518456                       ; 0051843c
        ;   XREF to: 00518456 (CONDITIONAL_JUMP)  ; LAB_00518456
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051843e
    MOV dword ptr [ESP + 0x30],EAX      ; 00518442
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00518446
    MOV dword ptr [ESP + 0x34],EAX      ; 0051844a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051844e
    MOV dword ptr [ESP + 0x38],EAX      ; 00518452
    FLD float ptr [ESP + 0x28]          ; 00518456
        ;   Label: LAB_00518456
    FMUL float ptr [ESP + 0x38]         ; 0051845a
    FLD float ptr [ESP + 0x2c]          ; 0051845e
    FMUL float ptr [ESP + 0x30]         ; 00518462
    FLD float ptr [ESP + 0x24]          ; 00518466
    FMUL float ptr [ESP + 0x34]         ; 0051846a
    FLD float ptr [ESP + 0x2c]          ; 0051846e
    FMUL float ptr [ESP + 0x34]         ; 00518472
    FLD float ptr [ESP + 0x24]          ; 00518476
    FMUL float ptr [ESP + 0x38]         ; 0051847a
    FLD float ptr [ESP + 0x28]          ; 0051847e
    FMUL float ptr [ESP + 0x30]         ; 00518482
    LEA EDI,[ESP + 0x3c]                ; 00518486
    LEA ESI,[ESP + 0xc]                 ; 0051848a
    LEA EAX,[ESP + 0x3c]                ; 0051848e
    FXCH ST2                            ; 00518492
    FSUBP ST5,ST0                       ; 00518494
    FSUBP ST3,ST0                       ; 00518496
    FSUBP                               ; 00518498
    FXCH                                ; 0051849a
    FSTP float ptr [ESP + 0x10]         ; 0051849c
    FSTP float ptr [ESP + 0x14]         ; 005184a0
    FSTP float ptr [ESP + 0xc]          ; 005184a4
    MOVSD ES:EDI,ESI                    ; 005184a8
    MOVSD ES:EDI,ESI                    ; 005184a9
    MOVSD ES:EDI,ESI                    ; 005184aa
    CMP EDX,EAX                         ; 005184ab
    JZ 0x005184c3                       ; 005184ad
        ;   XREF to: 005184c3 (CONDITIONAL_JUMP)  ; LAB_005184c3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005184af
    MOV dword ptr [EDX],EAX             ; 005184b3
    MOV EAX,dword ptr [ESP + 0x40]      ; 005184b5
    MOV dword ptr [EDX + 0x4],EAX       ; 005184b9
    MOV EAX,dword ptr [ESP + 0x44]      ; 005184bc
    MOV dword ptr [EDX + 0x8],EAX       ; 005184c0
    FLD float ptr [EDX + 0x4]           ; 005184c3
        ;   Label: LAB_005184c3
    FMUL ST0                            ; 005184c6
    FLD float ptr [EDX]                 ; 005184c8
    FMUL ST0                            ; 005184ca
    FADDP                               ; 005184cc
    FLD float ptr [EDX + 0x8]           ; 005184ce
    FMUL ST0                            ; 005184d1
    FADDP                               ; 005184d3
    FSQRT                               ; 005184d5
    FLDZ                                ; 005184d7
    FXCH                                ; 005184d9
    FSTP float ptr [ESP + 0x64]         ; 005184db
    FCOMP float ptr [ESP + 0x64]        ; 005184df
    FNSTSW AX                           ; 005184e3
    SAHF                                ; 005184e5
    JNC 0x00518546                      ; 005184e6
        ;   XREF to: 00518546 (CONDITIONAL_JUMP)  ; LAB_00518546
    FLD1                                ; 005184e8
    FLD float ptr [EDX]                 ; 005184ea
    FXCH                                ; 005184ec
    FDIV float ptr [ESP + 0x64]         ; 005184ee
    FXCH                                ; 005184f2
    FMUL ST1                            ; 005184f4
    FLD float ptr [EDX + 0x4]           ; 005184f6
    FMUL ST2                            ; 005184f9
    FLD float ptr [EDX + 0x8]           ; 005184fb
    FMULP ST3                           ; 005184fe
    FXCH                                ; 00518500
    FSTP float ptr [EDX]                ; 00518502
    FSTP float ptr [EDX + 0x4]          ; 00518504
    FSTP float ptr [EDX + 0x8]          ; 00518507
    FLD float ptr [EDX + 0x4]           ; 0051850a
        ;   Label: LAB_0051850a
    FMUL float ptr [EBX + 0x4]          ; 0051850d
    FLD float ptr [EDX]                 ; 00518510
    FMUL float ptr [EBX]                ; 00518512
    FADDP                               ; 00518514
    FLD float ptr [EDX + 0x8]           ; 00518516
    FMUL float ptr [EBX + 0x8]          ; 00518519
    FADDP                               ; 0051851c
    FCHS                                ; 0051851e
    FSTP float ptr [EDX + 0xc]          ; 00518520
    MOV ESP,EBP                         ; 00518523
    POP EBP                             ; 00518525
    POP EDI                             ; 00518526
    POP ESI                             ; 00518527
    POP EBX                             ; 00518528
    RET                                 ; 00518529
    MOV EAX,dword ptr [ESP]             ; 0051852a
        ;   Label: LAB_0051852a
    MOV dword ptr [ESP + 0x24],EAX      ; 0051852d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00518531
    MOV dword ptr [ESP + 0x28],EAX      ; 00518535
    MOV EAX,dword ptr [ESP + 0x8]       ; 00518539
    MOV dword ptr [ESP + 0x2c],EAX      ; 0051853d
    JMP 0x00518402                      ; 00518541
        ;   XREF to: 00518402 (UNCONDITIONAL_JUMP)  ; LAB_00518402
    MOV dword ptr [EDX + 0x8],0x0       ; 00518546
        ;   Label: LAB_00518546
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051854d
    MOV dword ptr [EDX + 0x4],EAX       ; 00518550
    MOV EAX,dword ptr [EDX + 0x4]       ; 00518553
    MOV dword ptr [EDX],EAX             ; 00518556
    JMP 0x0051850a                      ; 00518558
        ;   XREF to: 0051850a (UNCONDITIONAL_JUMP)  ; LAB_0051850a

