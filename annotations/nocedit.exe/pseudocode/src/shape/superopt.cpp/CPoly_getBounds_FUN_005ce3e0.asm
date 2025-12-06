; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CPoly_getBounds_FUN_005ce3e0(CPoly * this_ptr, CVector3d * out_min, CVector3d * out_max)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   out_min
; CVector3d *      Stack[0xc]:4   out_max
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce3e0
        ;   Label: shape_superopt.cpp_CPoly_getBounds_FUN_005ce3e0
    PUSH ESI                            ; 005ce3e1
    PUSH EDI                            ; 005ce3e2
    PUSH EBP                            ; 005ce3e3
    SUB ESP,0x4                         ; 005ce3e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005ce3e7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005ce3eb
    MOV EDX,dword ptr [ESP + 0x20]      ; 005ce3ef
    MOV EBX,dword ptr [EBP + 0x4]       ; 005ce3f3
    SHL EBX,0x3                         ; 005ce3f6
    MOV EDI,dword ptr [EBP]             ; 005ce3f9
    MOV EAX,EBX                         ; 005ce3fc
    SHL EBX,0x3                         ; 005ce3fe
    MOV EDI,dword ptr [EDI + 0x4]       ; 005ce401
    SUB EBX,EAX                         ; 005ce404
    LEA EAX,[EDI + EBX*0x1]             ; 005ce406
    MOV EBX,dword ptr [EBP + 0x8]       ; 005ce409
    SHL EBX,0x3                         ; 005ce40c
    MOV ESI,EBX                         ; 005ce40f
    SHL EBX,0x3                         ; 005ce411
    SUB EBX,ESI                         ; 005ce414
    FLD double ptr [EAX]                ; 005ce416
    LEA ESI,[EDI + EBX*0x1]             ; 005ce418
    MOV EBX,dword ptr [EBP + 0xc]       ; 005ce41b
    FSTP double ptr [ECX]               ; 005ce41e
    MOV dword ptr [ESP],EBX             ; 005ce420
    MOV EBP,dword ptr [EAX + 0x8]       ; 005ce423
    MOV dword ptr [ECX + 0x8],EBP       ; 005ce426
    MOV EBP,dword ptr [EAX + 0xc]       ; 005ce429
    MOV dword ptr [ECX + 0xc],EBP       ; 005ce42c
    SHL EBX,0x3                         ; 005ce42f
    MOV EBP,dword ptr [EAX + 0x10]      ; 005ce432
    MOV dword ptr [ECX + 0x10],EBP      ; 005ce435
    MOV EBP,dword ptr [EAX + 0x14]      ; 005ce438
    MOV dword ptr [ECX + 0x14],EBP      ; 005ce43b
    MOV dword ptr [ESP],EBX             ; 005ce43e
    MOV EBP,dword ptr [EAX]             ; 005ce441
    MOV dword ptr [EDX],EBP             ; 005ce443
    MOV EBP,dword ptr [EAX + 0x4]       ; 005ce445
    MOV dword ptr [EDX + 0x4],EBP       ; 005ce448
    MOV EBP,dword ptr [ESP]             ; 005ce44b
    SHL EBX,0x3                         ; 005ce44e
    FLD double ptr [EAX + 0x8]          ; 005ce451
    FSTP double ptr [EDX + 0x8]         ; 005ce454
    FLD double ptr [EAX + 0x10]         ; 005ce457
    SUB EBX,EBP                         ; 005ce45a
    FSTP double ptr [EDX + 0x10]        ; 005ce45c
    FLD double ptr [ESI]                ; 005ce45f
    ADD EBX,EDI                         ; 005ce461
    FCOMP double ptr [ECX]              ; 005ce463
    FNSTSW AX                           ; 005ce465
    SAHF                                ; 005ce467
    JC 0x005ce55b                       ; 005ce468 | LAB_005ce55b
        ;   XREF to: 005ce55b (CONDITIONAL_JUMP)
    FLD double ptr [ESI + 0x8]          ; 005ce46e
        ;   Label: LAB_005ce46e
    FCOMP double ptr [ECX + 0x8]        ; 005ce471
    FNSTSW AX                           ; 005ce474
    SAHF                                ; 005ce476
    JNC 0x005ce485                      ; 005ce477 | LAB_005ce485
        ;   XREF to: 005ce485 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x8]       ; 005ce479
    MOV dword ptr [ECX + 0x8],EAX       ; 005ce47c
    MOV EAX,dword ptr [ESI + 0xc]       ; 005ce47f
    MOV dword ptr [ECX + 0xc],EAX       ; 005ce482
    FLD double ptr [ESI + 0x10]         ; 005ce485
        ;   Label: LAB_005ce485
    FCOMP double ptr [ECX + 0x10]       ; 005ce488
    FNSTSW AX                           ; 005ce48b
    SAHF                                ; 005ce48d
    JNC 0x005ce49c                      ; 005ce48e | LAB_005ce49c
        ;   XREF to: 005ce49c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x10]      ; 005ce490
    MOV dword ptr [ECX + 0x10],EAX      ; 005ce493
    MOV EAX,dword ptr [ESI + 0x14]      ; 005ce496
    MOV dword ptr [ECX + 0x14],EAX      ; 005ce499
    FLD double ptr [ESI]                ; 005ce49c
        ;   Label: LAB_005ce49c
    FCOMP double ptr [EDX]              ; 005ce49e
    FNSTSW AX                           ; 005ce4a0
    SAHF                                ; 005ce4a2
    JBE 0x005ce4af                      ; 005ce4a3 | LAB_005ce4af
        ;   XREF to: 005ce4af (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 005ce4a5
    MOV dword ptr [EDX],EAX             ; 005ce4a7
    MOV EAX,dword ptr [ESI + 0x4]       ; 005ce4a9
    MOV dword ptr [EDX + 0x4],EAX       ; 005ce4ac
    FLD double ptr [ESI + 0x8]          ; 005ce4af
        ;   Label: LAB_005ce4af
    FCOMP double ptr [EDX + 0x8]        ; 005ce4b2
    FNSTSW AX                           ; 005ce4b5
    SAHF                                ; 005ce4b7
    JBE 0x005ce4c6                      ; 005ce4b8 | LAB_005ce4c6
        ;   XREF to: 005ce4c6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x8]       ; 005ce4ba
    MOV dword ptr [EDX + 0x8],EAX       ; 005ce4bd
    MOV EAX,dword ptr [ESI + 0xc]       ; 005ce4c0
    MOV dword ptr [EDX + 0xc],EAX       ; 005ce4c3
    FLD double ptr [ESI + 0x10]         ; 005ce4c6
        ;   Label: LAB_005ce4c6
    FCOMP double ptr [EDX + 0x10]       ; 005ce4c9
    FNSTSW AX                           ; 005ce4cc
    SAHF                                ; 005ce4ce
    JBE 0x005ce4dd                      ; 005ce4cf | LAB_005ce4dd
        ;   XREF to: 005ce4dd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x10]      ; 005ce4d1
    MOV dword ptr [EDX + 0x10],EAX      ; 005ce4d4
    MOV EAX,dword ptr [ESI + 0x14]      ; 005ce4d7
    MOV dword ptr [EDX + 0x14],EAX      ; 005ce4da
    FLD double ptr [EBX]                ; 005ce4dd
        ;   Label: LAB_005ce4dd
    FCOMP double ptr [ECX]              ; 005ce4df
    FNSTSW AX                           ; 005ce4e1
    SAHF                                ; 005ce4e3
    JNC 0x005ce4f0                      ; 005ce4e4 | LAB_005ce4f0
        ;   XREF to: 005ce4f0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 005ce4e6
    MOV dword ptr [ECX],EAX             ; 005ce4e8
    MOV EAX,dword ptr [EBX + 0x4]       ; 005ce4ea
    MOV dword ptr [ECX + 0x4],EAX       ; 005ce4ed
    FLD double ptr [EBX + 0x8]          ; 005ce4f0
        ;   Label: LAB_005ce4f0
    FCOMP double ptr [ECX + 0x8]        ; 005ce4f3
    FNSTSW AX                           ; 005ce4f6
    SAHF                                ; 005ce4f8
    JNC 0x005ce507                      ; 005ce4f9 | LAB_005ce507
        ;   XREF to: 005ce507 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ce4fb
    MOV dword ptr [ECX + 0x8],EAX       ; 005ce4fe
    MOV EAX,dword ptr [EBX + 0xc]       ; 005ce501
    MOV dword ptr [ECX + 0xc],EAX       ; 005ce504
    FLD double ptr [EBX + 0x10]         ; 005ce507
        ;   Label: LAB_005ce507
    FCOMP double ptr [ECX + 0x10]       ; 005ce50a
    FNSTSW AX                           ; 005ce50d
    SAHF                                ; 005ce50f
    JNC 0x005ce51e                      ; 005ce510 | LAB_005ce51e
        ;   XREF to: 005ce51e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x10]      ; 005ce512
    MOV dword ptr [ECX + 0x10],EAX      ; 005ce515
    MOV EAX,dword ptr [EBX + 0x14]      ; 005ce518
    MOV dword ptr [ECX + 0x14],EAX      ; 005ce51b
    FLD double ptr [EBX]                ; 005ce51e
        ;   Label: LAB_005ce51e
    FCOMP double ptr [EDX]              ; 005ce520
    FNSTSW AX                           ; 005ce522
    SAHF                                ; 005ce524
    JBE 0x005ce531                      ; 005ce525 | LAB_005ce531
        ;   XREF to: 005ce531 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 005ce527
    MOV dword ptr [EDX],EAX             ; 005ce529
    MOV EAX,dword ptr [EBX + 0x4]       ; 005ce52b
    MOV dword ptr [EDX + 0x4],EAX       ; 005ce52e
    FLD double ptr [EBX + 0x8]          ; 005ce531
        ;   Label: LAB_005ce531
    FCOMP double ptr [EDX + 0x8]        ; 005ce534
    FNSTSW AX                           ; 005ce537
    SAHF                                ; 005ce539
    JBE 0x005ce548                      ; 005ce53a | LAB_005ce548
        ;   XREF to: 005ce548 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x8]       ; 005ce53c
    MOV dword ptr [EDX + 0x8],EAX       ; 005ce53f
    MOV EAX,dword ptr [EBX + 0xc]       ; 005ce542
    MOV dword ptr [EDX + 0xc],EAX       ; 005ce545
    FLD double ptr [EBX + 0x10]         ; 005ce548
        ;   Label: LAB_005ce548
    FCOMP double ptr [EDX + 0x10]       ; 005ce54b
    FNSTSW AX                           ; 005ce54e
    SAHF                                ; 005ce550
    JA 0x005ce56a                       ; 005ce551 | LAB_005ce56a
        ;   XREF to: 005ce56a (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 005ce553
    POP EBP                             ; 005ce556
    POP EDI                             ; 005ce557
    POP ESI                             ; 005ce558
    POP EBX                             ; 005ce559
    RET                                 ; 005ce55a
    MOV EAX,dword ptr [ESI]             ; 005ce55b
        ;   Label: LAB_005ce55b
    MOV dword ptr [ECX],EAX             ; 005ce55d
    MOV EAX,dword ptr [ESI + 0x4]       ; 005ce55f
    MOV dword ptr [ECX + 0x4],EAX       ; 005ce562
    JMP 0x005ce46e                      ; 005ce565 | LAB_005ce46e
        ;   XREF to: 005ce46e (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x10]      ; 005ce56a
        ;   Label: LAB_005ce56a
    MOV dword ptr [EDX + 0x10],EAX      ; 005ce56d
    MOV EAX,dword ptr [EBX + 0x14]      ; 005ce570
    MOV dword ptr [EDX + 0x14],EAX      ; 005ce573
    ADD ESP,0x4                         ; 005ce576
    POP EBP                             ; 005ce579
    POP EDI                             ; 005ce57a
    POP ESI                             ; 005ce57b
    POP EBX                             ; 005ce57c
    RET                                 ; 005ce57d

