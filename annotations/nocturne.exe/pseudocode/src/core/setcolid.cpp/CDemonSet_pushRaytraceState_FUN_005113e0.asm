; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140 at 0040a156
;   core_fire.cpp_FUN_0048b6f0 at 0048bc05
;   core_lightgun.cpp_CLightGun_canSeeTarget_FUN_004c70a0 at 004c70b6
;   core_lightgun.cpp_FUN_004c71a0 at 004c7381
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_00590ac5
;   TerminatedCString s_CDemonSet_pushRaytraceSt_00590ada
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_020842d0
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005113e0
        ;   Label: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0
    PUSH ESI                            ; 005113e1
    PUSH EDI                            ; 005113e2
    PUSH EBP                            ; 005113e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005113e4
    CMP dword ptr [0x020842d0],0x5      ; 005113e8 | DAT_020842d0
    JG 0x00511556                       ; 005113ef
        ;   XREF to: 00511556 (CONDITIONAL_JUMP)  ; LAB_00511556
    MOV EDX,dword ptr [0x020842d0]      ; 005113f5 | DAT_020842d0
        ;   Label: LAB_005113f5
    LEA EAX,[EDX*0x4 + 0x0]             ; 005113fb
    ADD EAX,EDX                         ; 00511402
    MOV EDI,0x20842d4                   ; 00511404
    SHL EAX,0x5                         ; 00511409
    ADD EDI,EAX                         ; 0051140c
    MOV EAX,dword ptr [EBX + 0x15f298]  ; 0051140e
    MOV dword ptr [EDI],EAX             ; 00511414
    MOV EAX,dword ptr [EBX + 0x15f29c]  ; 00511416
    MOV dword ptr [EDI + 0x4],EAX       ; 0051141c
    MOV EAX,dword ptr [EBX + 0x15f2a0]  ; 0051141f
    MOV dword ptr [EDI + 0x8],EAX       ; 00511425
    MOV EAX,dword ptr [EBX + 0x15f2a4]  ; 00511428
    MOV dword ptr [EDI + 0xc],EAX       ; 0051142e
    MOV EAX,dword ptr [EBX + 0x15f2a8]  ; 00511431
    XOR ECX,ECX                         ; 00511437
    MOV dword ptr [EDI + 0x10],EAX      ; 00511439
    LEA EBP,[EDX + 0x1]                 ; 0051143c
    MOV EAX,dword ptr [EBX + 0x15f2ac]  ; 0051143f
    MOV dword ptr [0x020842d0],EBP      ; 00511445 | DAT_020842d0
    MOV dword ptr [EDI + 0x14],EAX      ; 0051144b
    TEST EAX,EAX                        ; 0051144e
    JLE 0x00511470                      ; 00511450
        ;   XREF to: 00511470 (CONDITIONAL_JUMP)  ; LAB_00511470
    MOV EAX,EBX                         ; 00511452
    MOV EDX,EDI                         ; 00511454
    ADD EDX,0x4                         ; 00511456
        ;   Label: LAB_00511456
    MOV ESI,dword ptr [EAX + 0x15f2b4]  ; 00511459
    MOV dword ptr [EDX + 0x18],ESI      ; 0051145f
    INC ECX                             ; 00511462
    MOV ESI,dword ptr [EBX + 0x15f2ac]  ; 00511463
    ADD EAX,0x4                         ; 00511469
    CMP ECX,ESI                         ; 0051146c
    JL 0x00511456                       ; 0051146e
        ;   XREF to: 00511456 (CONDITIONAL_JUMP)  ; LAB_00511456
    MOV EAX,dword ptr [EBX + 0x15f2b0]  ; 00511470
        ;   Label: LAB_00511470
    LEA EDX,[EBX + 0x14cd28]            ; 00511476
    MOV dword ptr [EDI + 0x18],EAX      ; 0051147c
    LEA EAX,[EDI + 0x44]                ; 0051147f
    CMP EAX,EDX                         ; 00511482
    JZ 0x00511496                       ; 00511484
        ;   XREF to: 00511496 (CONDITIONAL_JUMP)  ; LAB_00511496
    MOV ECX,dword ptr [EDX]             ; 00511486
    MOV dword ptr [EAX],ECX             ; 00511488
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051148a
    MOV dword ptr [EAX + 0x4],ECX       ; 0051148d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00511490
    MOV dword ptr [EAX + 0x8],ECX       ; 00511493
    LEA EDX,[EBX + 0x14cd34]            ; 00511496
        ;   Label: LAB_00511496
    LEA EAX,[EDI + 0x50]                ; 0051149c
    CMP EAX,EDX                         ; 0051149f
    JZ 0x005114b3                       ; 005114a1
        ;   XREF to: 005114b3 (CONDITIONAL_JUMP)  ; LAB_005114b3
    MOV ECX,dword ptr [EDX]             ; 005114a3
    MOV dword ptr [EAX],ECX             ; 005114a5
    MOV ECX,dword ptr [EDX + 0x4]       ; 005114a7
    MOV dword ptr [EAX + 0x4],ECX       ; 005114aa
    MOV ECX,dword ptr [EDX + 0x8]       ; 005114ad
    MOV dword ptr [EAX + 0x8],ECX       ; 005114b0
    FLD float ptr [EBX + 0x15f2dc]      ; 005114b3
        ;   Label: LAB_005114b3
    LEA EAX,[EDI + 0x64]                ; 005114b9
    LEA EDX,[EBX + 0x15f2e4]            ; 005114bc
    FSTP float ptr [EDI + 0x5c]         ; 005114c2
    MOV ECX,dword ptr [EBX + 0x15f2e0]  ; 005114c5
    MOV dword ptr [EDI + 0x60],ECX      ; 005114cb
    CMP EAX,EDX                         ; 005114ce
    JZ 0x005114e2                       ; 005114d0
        ;   XREF to: 005114e2 (CONDITIONAL_JUMP)  ; LAB_005114e2
    MOV ECX,dword ptr [EDX]             ; 005114d2
    MOV dword ptr [EAX],ECX             ; 005114d4
    MOV ECX,dword ptr [EDX + 0x4]       ; 005114d6
    MOV dword ptr [EAX + 0x4],ECX       ; 005114d9
    MOV ECX,dword ptr [EDX + 0x8]       ; 005114dc
    MOV dword ptr [EAX + 0x8],ECX       ; 005114df
    MOV EAX,dword ptr [EBX + 0x15f2f0]  ; 005114e2
        ;   Label: LAB_005114e2
    LEA EDX,[EBX + 0x14cd40]            ; 005114e8
    MOV dword ptr [EDI + 0x70],EAX      ; 005114ee
    LEA EAX,[EDI + 0x78]                ; 005114f1
    CMP EAX,EDX                         ; 005114f4
    JZ 0x00511508                       ; 005114f6
        ;   XREF to: 00511508 (CONDITIONAL_JUMP)  ; LAB_00511508
    MOV ECX,dword ptr [EDX]             ; 005114f8
    MOV dword ptr [EAX],ECX             ; 005114fa
    MOV ECX,dword ptr [EDX + 0x4]       ; 005114fc
    MOV dword ptr [EAX + 0x4],ECX       ; 005114ff
    MOV ECX,dword ptr [EDX + 0x8]       ; 00511502
    MOV dword ptr [EAX + 0x8],ECX       ; 00511505
    MOV EAX,dword ptr [EBX + 0x14cd4c]  ; 00511508
        ;   Label: LAB_00511508
    LEA EDX,[EDI + 0x88]                ; 0051150e
    MOV dword ptr [EDI + 0x84],EAX      ; 00511514
    LEA EAX,[EBX + 0x14cd50]            ; 0051151a
    CMP EDX,EAX                         ; 00511520
    JNZ 0x0051157e                      ; 00511522
        ;   XREF to: 0051157e (CONDITIONAL_JUMP)  ; LAB_0051157e
    MOV EAX,dword ptr [EBX + 0x14cd5c]  ; 00511524
        ;   Label: LAB_00511524
    MOV dword ptr [EDI + 0x94],EAX      ; 0051152a
    MOV EAX,dword ptr [EBX + 0x14cd60]  ; 00511530
    MOV dword ptr [EDI + 0x98],EAX      ; 00511536
    MOV EAX,dword ptr [EBX + 0x14cd64]  ; 0051153c
    MOV dword ptr [EDI + 0x9c],EAX      ; 00511542
    MOV EAX,dword ptr [EBX + 0x15f2f4]  ; 00511548
    MOV dword ptr [EDI + 0x74],EAX      ; 0051154e
    POP EBP                             ; 00511551
    POP EDI                             ; 00511552
    POP ESI                             ; 00511553
    POP EBX                             ; 00511554
    RET                                 ; 00511555
    MOV ECX,0x590ac5                    ; 00511556 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00511556
    MOV ESI,0x406                       ; 0051155b
    PUSH 0x590ada                       ; 00511560 | = "CDemonSet::pushRaytraceState - stack ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00511565 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0051156b | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00511571
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00511576
    JMP 0x005113f5                      ; 00511579
        ;   XREF to: 005113f5 (UNCONDITIONAL_JUMP)  ; LAB_005113f5
    MOV ECX,dword ptr [EAX]             ; 0051157e
        ;   Label: LAB_0051157e
    MOV dword ptr [EDX],ECX             ; 00511580
    MOV ECX,dword ptr [EAX + 0x4]       ; 00511582
    MOV dword ptr [EDX + 0x4],ECX       ; 00511585
    MOV ECX,dword ptr [EAX + 0x8]       ; 00511588
    MOV dword ptr [EDX + 0x8],ECX       ; 0051158b
    JMP 0x00511524                      ; 0051158e
        ;   XREF to: 00511524 (UNCONDITIONAL_JUMP)  ; LAB_00511524

