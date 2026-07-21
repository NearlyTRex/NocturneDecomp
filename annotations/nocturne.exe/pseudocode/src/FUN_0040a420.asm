; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040a420(int param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
;
; XREF[1]:
;   FUN_004b4950 at 004b4985
;
; Called Functions:
;   core_actor.cpp_rayCylinderIntersect_FUN_00409860
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a420
        ;   Label: FUN_0040a420
    PUSH ESI                            ; 0040a421
    PUSH EDI                            ; 0040a422
    PUSH EBP                            ; 0040a423
    MOV EBP,ESP                         ; 0040a424
    SUB ESP,0x68                        ; 0040a426
    AND ESP,0xfffffff8                  ; 0040a429
    MOV EBX,dword ptr [EBP + 0x18]      ; 0040a42c
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0040a42f
    MOV ESI,dword ptr [EBP + 0x20]      ; 0040a432
    LEA EAX,[ESP + 0xc]                 ; 0040a435
    PUSH EAX                            ; 0040a439
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 0040a43a
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990()
    ADD ESP,0x4                         ; 0040a43f
    XOR EDX,EDX                         ; 0040a442
    MOV dword ptr [ESP + 0xc],EDX       ; 0040a444
    LEA EDX,[ESP + 0xc]                 ; 0040a448
    MOV EAX,dword ptr [EBP + 0x14]      ; 0040a44c
    PUSH EDX                            ; 0040a44f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0040a450
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0040a453
    PUSH ECX                            ; 0040a459
    CALL dword ptr [EAX + 0x34]         ; 0040a45a
    ADD ESP,0x8                         ; 0040a45d
    CMP EAX,0x2                         ; 0040a460
    JZ 0x0040a46e                       ; 0040a463
        ;   XREF to: 0040a46e (CONDITIONAL_JUMP)  ; LAB_0040a46e
    XOR EAX,EAX                         ; 0040a465
        ;   Label: LAB_0040a465
    MOV ESP,EBP                         ; 0040a467
    POP EBP                             ; 0040a469
    POP EDI                             ; 0040a46a
    POP ESI                             ; 0040a46b
    POP EBX                             ; 0040a46c
    RET                                 ; 0040a46d
    FLD float ptr [EDI]                 ; 0040a46e
        ;   Label: LAB_0040a46e
    LEA EAX,[ESP + 0x4c]                ; 0040a470
    FSUB float ptr [EBX]                ; 0040a474
    PUSH EAX                            ; 0040a476
    FSTP float ptr [ESP + 0x5c]         ; 0040a477
    LEA EAX,[ESP + 0x5c]                ; 0040a47b
    FLD float ptr [EDI + 0x4]           ; 0040a47f
    PUSH EAX                            ; 0040a482
    FSUB float ptr [EBX + 0x4]          ; 0040a483
    LEA EAX,[ESP + 0x14]                ; 0040a486
    FSTP float ptr [ESP + 0x64]         ; 0040a48a
    PUSH EBX                            ; 0040a48e
    FLD float ptr [EDI + 0x8]           ; 0040a48f
    FSUB float ptr [EBX + 0x8]          ; 0040a492
    PUSH EAX                            ; 0040a495
    FSTP float ptr [ESP + 0x70]         ; 0040a496
    CALL core_actor.cpp_rayCylinderIntersect_FUN_00409860 ; 0040a49a
        ;   XREF to: 00409860 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_rayCylinderIntersect_FUN_00409860()
    MOV dword ptr [ESP + 0x74],EAX      ; 0040a49f
    FLD float ptr [ESP + 0x74]          ; 0040a4a3
    ADD ESP,0x10                        ; 0040a4a7
    FLDZ                                ; 0040a4aa
    FXCH                                ; 0040a4ac
    FST float ptr [ESP + 0x8]           ; 0040a4ae
    FSTP double ptr [ESP]               ; 0040a4b2
    FCOMP double ptr [ESP]              ; 0040a4b5
    FNSTSW AX                           ; 0040a4b8
    SAHF                                ; 0040a4ba
    JA 0x0040a465                       ; 0040a4bb
        ;   XREF to: 0040a465 (CONDITIONAL_JUMP)  ; LAB_0040a465
    FLD1                                ; 0040a4bd
    FCOMP double ptr [ESP]              ; 0040a4bf
    FNSTSW AX                           ; 0040a4c2
    SAHF                                ; 0040a4c4
    JC 0x0040a465                       ; 0040a4c5
        ;   XREF to: 0040a465 (CONDITIONAL_JUMP)  ; LAB_0040a465
    TEST ESI,ESI                        ; 0040a4c7
    JZ 0x0040a52b                       ; 0040a4c9
        ;   XREF to: 0040a52b (CONDITIONAL_JUMP)  ; LAB_0040a52b
    FLD float ptr [ESP + 0x8]           ; 0040a4cb
    FLD float ptr [ESP + 0x58]          ; 0040a4cf
    FMUL ST1                            ; 0040a4d3
    FLD float ptr [ESP + 0x5c]          ; 0040a4d5
    FMUL ST2                            ; 0040a4d9
    FLD float ptr [ESP + 0x60]          ; 0040a4db
    FMULP ST3                           ; 0040a4df
    FXCH                                ; 0040a4e1
    FSTP float ptr [ESP + 0x34]         ; 0040a4e3
    FSTP float ptr [ESP + 0x38]         ; 0040a4e7
    FSTP float ptr [ESP + 0x3c]         ; 0040a4eb
    FLD float ptr [EBX]                 ; 0040a4ef
    FADD float ptr [ESP + 0x34]         ; 0040a4f1
    FSTP float ptr [ESP + 0x40]         ; 0040a4f5
    FLD float ptr [EBX + 0x4]           ; 0040a4f9
    FADD float ptr [ESP + 0x38]         ; 0040a4fc
    FSTP float ptr [ESP + 0x44]         ; 0040a500
    FLD float ptr [EBX + 0x8]           ; 0040a504
    FADD float ptr [ESP + 0x3c]         ; 0040a507
    LEA EAX,[ESP + 0x40]                ; 0040a50b
    FSTP float ptr [ESP + 0x48]         ; 0040a50f
    CMP ESI,EAX                         ; 0040a513
    JZ 0x0040a52b                       ; 0040a515
        ;   XREF to: 0040a52b (CONDITIONAL_JUMP)  ; LAB_0040a52b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0040a517
    MOV dword ptr [ESI],EAX             ; 0040a51b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040a51d
    MOV dword ptr [ESI + 0x4],EAX       ; 0040a521
    MOV EAX,dword ptr [ESP + 0x48]      ; 0040a524
    MOV dword ptr [ESI + 0x8],EAX       ; 0040a528
    MOV EAX,0x1                         ; 0040a52b
        ;   Label: LAB_0040a52b
    MOV ESP,EBP                         ; 0040a530
    POP EBP                             ; 0040a532
    POP EDI                             ; 0040a533
    POP ESI                             ; 0040a534
    POP EBX                             ; 0040a535
    RET                                 ; 0040a536

