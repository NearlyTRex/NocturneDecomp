; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_00531460(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; int              Stack[0x10]:4   vertex_index
; int              Stack[0x14]:4   skip_lighting_calculation
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 at 005317dd
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00532190 at 00532287
;   core_set.cpp_FUN_005344f0 at 0053453e
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005e5982
;   TerminatedCString s_CDemonSet_lightVertexCol_005e5992
;   undefined4 DAT_00622014
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622040
;   undefined4 DAT_01c38aec
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b80
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 g_CDemonCameraInstance.field4584_0x11e8
;   undefined4 DAT_0200a38c
;   undefined4 DAT_0200e568
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531460
        ;   Label: core_set.cpp_CDemonSet_lightVertexColor_FUN_00531460
    PUSH ESI                            ; 00531461
    PUSH EDI                            ; 00531462
    PUSH EBP                            ; 00531463
    SUB ESP,0xc                         ; 00531464
    MOV EBX,dword ptr [ESP + 0x20]      ; 00531467
    MOV EDI,dword ptr [ESP + 0x28]      ; 0053146b
    MOV EDX,dword ptr [EBX + 0x15ae84]  ; 0053146f
    TEST EDX,EDX                        ; 00531475
    JZ 0x0053154c                       ; 00531477
        ;   XREF to: 0053154c (CONDITIONAL_JUMP)  ; LAB_0053154c
    TEST EDI,EDI                        ; 0053147d
    JNZ 0x005314a4                      ; 0053147f
        ;   XREF to: 005314a4 (CONDITIONAL_JUMP)  ; LAB_005314a4
    MOV ESI,0x5e5982                    ; 00531481 | = "..\\core\\set.cpp"
    MOV EBP,0xca4                       ; 00531486
    PUSH 0x5e5992                       ; 0053148b | = "CDemonSet::lightVertexColor - Quick l..."
    MOV dword ptr [0x01d046a0],ESI      ; 00531490 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00531496 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053149c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005314a1
    MOV EAX,dword ptr [EBX + 0x15ae88]  ; 005314a4
        ;   Label: LAB_005314a4
    MOV EDX,dword ptr [EDI]             ; 005314aa
    IMUL EDX                            ; 005314ac
    SHRD EAX,EDX,0x10                   ; 005314ae
    MOV ECX,EAX                         ; 005314b2
    MOV EDX,dword ptr [EDI + 0x4]       ; 005314b4
    MOV EAX,dword ptr [EBX + 0x15ae8c]  ; 005314b7
    IMUL EDX                            ; 005314bd
    SHRD EAX,EDX,0x10                   ; 005314bf
    MOV EDX,dword ptr [EDI + 0x8]       ; 005314c3
    ADD ECX,EAX                         ; 005314c6
    MOV EAX,dword ptr [EBX + 0x15ae90]  ; 005314c8
    IMUL EDX                            ; 005314ce
    SHRD EAX,EDX,0x10                   ; 005314d0
    ADD ECX,EAX                         ; 005314d4
    NEG ECX                             ; 005314d6
    TEST ECX,ECX                        ; 005314d8
    JL 0x00531548                       ; 005314da
        ;   XREF to: 00531548 (CONDITIONAL_JUMP)  ; LAB_00531548
    ADD ECX,dword ptr [EBX + 0x15ae94]  ; 005314dc
        ;   Label: LAB_005314dc
    CMP ECX,0xffff                      ; 005314e2
    JLE 0x005314ef                      ; 005314e8
        ;   XREF to: 005314ef (CONDITIONAL_JUMP)  ; LAB_005314ef
    MOV ECX,0xffff                      ; 005314ea
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005314ef
        ;   Label: LAB_005314ef
    LEA ESI,[EAX*0x4 + 0x0]             ; 005314f3
    SUB ESI,EAX                         ; 005314fa
    MOV EDX,ECX                         ; 005314fc
    SHL ESI,0x4                         ; 005314fe
    MOV EAX,dword ptr [EBX + 0x15ae9c]  ; 00531501
    ADD ESI,0x622014                    ; 00531507 | DAT_00622014
    IMUL EDX                            ; 0053150d
    SHRD EAX,EDX,0x10                   ; 0053150f
    MOV dword ptr [ESI + 0x20],EAX      ; 00531513 | DAT_00622034
    MOV EDX,ECX                         ; 00531516
    MOV EAX,dword ptr [EBX + 0x15aea0]  ; 00531518
    IMUL EDX                            ; 0053151e
    SHRD EAX,EDX,0x10                   ; 00531520
    MOV dword ptr [ESI + 0x24],EAX      ; 00531524 | DAT_00622038
    MOV EDX,ECX                         ; 00531527
    MOV EAX,dword ptr [EBX + 0x15aea4]  ; 00531529
    IMUL EDX                            ; 0053152f
    SHRD EAX,EDX,0x10                   ; 00531531
    MOV dword ptr [ESI + 0x28],EAX      ; 00531535 | DAT_0062203c
    MOV EAX,[0x01c38aec]                ; 00531538 | DAT_01c38aec
    MOV dword ptr [ESI + 0x2c],EAX      ; 0053153d | DAT_00622040
    ADD ESP,0xc                         ; 00531540
    POP EBP                             ; 00531543
    POP EDI                             ; 00531544
    POP ESI                             ; 00531545
    POP EBX                             ; 00531546
    RET                                 ; 00531547
    XOR ECX,ECX                         ; 00531548
        ;   Label: LAB_00531548
    JMP 0x005314dc                      ; 0053154a
        ;   XREF to: 005314dc (UNCONDITIONAL_JUMP)  ; LAB_005314dc
    CMP dword ptr [ESP + 0x30],0x0      ; 0053154c
        ;   Label: LAB_0053154c
    JZ 0x005316ec                       ; 00531551
        ;   XREF to: 005316ec (CONDITIONAL_JUMP)  ; LAB_005316ec
    MOV ECX,0xffff                      ; 00531557
    MOV dword ptr [ESP + 0x4],EDX       ; 0053155c
    CMP dword ptr [0x0200e568],0x0      ; 00531560 | DAT_0200e568
        ;   Label: LAB_00531560
    JLE 0x0053178a                      ; 00531567
        ;   XREF to: 0053178a (CONDITIONAL_JUMP)  ; LAB_0053178a
    MOV EDX,dword ptr [0x0200e8e8]      ; 0053156d | DAT_0200e8e8
    MOV EAX,ECX                         ; 00531573
    MOV EBP,dword ptr [ESP + 0x4]       ; 00531575
    IMUL EDX                            ; 00531579
    SHRD EAX,EDX,0x10                   ; 0053157b
    MOV EDX,dword ptr [EBX + 0x15ae9c]  ; 0053157f
    ADD EAX,EBP                         ; 00531585
    IMUL EDX                            ; 00531587
    SHRD EAX,EDX,0x10                   ; 00531589
    MOV EDX,dword ptr [0x0200e8ec]      ; 0053158d | DAT_0200e8ec
    MOV dword ptr [ESP + 0x8],EAX       ; 00531593
    MOV EAX,ECX                         ; 00531597
    IMUL EDX                            ; 00531599
    SHRD EAX,EDX,0x10                   ; 0053159b
    MOV EDX,dword ptr [EBX + 0x15aea0]  ; 0053159f
    ADD EAX,EBP                         ; 005315a5
    IMUL EDX                            ; 005315a7
    SHRD EAX,EDX,0x10                   ; 005315a9
    MOV EDX,dword ptr [0x0200e8f0]      ; 005315ad | DAT_0200e8f0
    MOV EDI,EAX                         ; 005315b3
    MOV EAX,ECX                         ; 005315b5
    IMUL EDX                            ; 005315b7
    SHRD EAX,EDX,0x10                   ; 005315b9
    MOV EDX,dword ptr [EBX + 0x15aea4]  ; 005315bd
    ADD EAX,EBP                         ; 005315c3
    IMUL EDX                            ; 005315c5
        ;   Label: LAB_005315c5
    SHRD EAX,EDX,0x10                   ; 005315c7
    MOV EBP,EAX                         ; 005315cb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005315cd
    LEA ECX,[EAX*0x4 + 0x0]             ; 005315d1
    SUB ECX,EAX                         ; 005315d8
    MOV EAX,0x622014                    ; 005315da | DAT_00622014
    SHL ECX,0x4                         ; 005315df
    ADD EAX,ECX                         ; 005315e2
    MOV ESI,dword ptr [EBX + 0x15f6f4]  ; 005315e4
    MOV dword ptr [ESP],EAX             ; 005315ea
    TEST ESI,ESI                        ; 005315ed
    JZ 0x00531693                       ; 005315ef
        ;   XREF to: 00531693 (CONDITIONAL_JUMP)  ; LAB_00531693
    MOV EAX,dword ptr [ESP + 0x30]      ; 005315f5
    TEST EAX,EAX                        ; 005315f9
    JNZ 0x00531693                      ; 005315fb
        ;   XREF to: 00531693 (CONDITIONAL_JUMP)  ; LAB_00531693
    PUSH EAX                            ; 00531601
    MOV EDX,dword ptr [ESP + 0x28]      ; 00531602
    PUSH EDX                            ; 00531606
    PUSH EBX                            ; 00531607
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0 ; 00531608
        ;   XREF to: 005311e0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    ADD ESP,0xc                         ; 0053160d
    MOV ESI,dword ptr [ESP + 0x4]       ; 00531610
    ADD ESI,EAX                         ; 00531614
    TEST ESI,ESI                        ; 00531616
    JLE 0x00531693                      ; 00531618
        ;   XREF to: 00531693 (CONDITIONAL_JUMP)  ; LAB_00531693
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053161a
    MOV EBX,ESI                         ; 0053161e
    CDQ                                 ; 00531620
    MOV ECX,EDX                         ; 00531621
    XOR EAX,EDX                         ; 00531623
    XOR EDX,EDX                         ; 00531625
    DIV EBX                             ; 00531627
    CMP EAX,0x7fff                      ; 00531629
    JC 0x00531635                       ; 0053162e
        ;   XREF to: 00531635 (CONDITIONAL_JUMP)  ; LAB_00531635
    MOV EAX,0x7fff                      ; 00531630
    PUSH EAX                            ; 00531635
        ;   Label: LAB_00531635
    XOR EAX,EAX                         ; 00531636
    DIV EBX                             ; 00531638
    POP EDX                             ; 0053163a
    SHRD EAX,EDX,0x10                   ; 0053163b
    XOR EAX,ECX                         ; 0053163f
    MOV dword ptr [ESP + 0x8],EAX       ; 00531641
    MOV EBX,ESI                         ; 00531645
    MOV EAX,EDI                         ; 00531647
    CDQ                                 ; 00531649
    MOV ECX,EDX                         ; 0053164a
    XOR EAX,EDX                         ; 0053164c
    XOR EDX,EDX                         ; 0053164e
    DIV EBX                             ; 00531650
    CMP EAX,0x7fff                      ; 00531652
    JC 0x0053165e                       ; 00531657
        ;   XREF to: 0053165e (CONDITIONAL_JUMP)  ; LAB_0053165e
    MOV EAX,0x7fff                      ; 00531659
    PUSH EAX                            ; 0053165e
        ;   Label: LAB_0053165e
    XOR EAX,EAX                         ; 0053165f
    DIV EBX                             ; 00531661
    POP EDX                             ; 00531663
    SHRD EAX,EDX,0x10                   ; 00531664
    XOR EAX,ECX                         ; 00531668
    MOV EDI,EAX                         ; 0053166a
    MOV EBX,ESI                         ; 0053166c
    MOV EAX,EBP                         ; 0053166e
    CDQ                                 ; 00531670
    MOV ECX,EDX                         ; 00531671
    XOR EAX,EDX                         ; 00531673
    XOR EDX,EDX                         ; 00531675
    DIV EBX                             ; 00531677
    CMP EAX,0x7fff                      ; 00531679
    JC 0x00531685                       ; 0053167e
        ;   XREF to: 00531685 (CONDITIONAL_JUMP)  ; LAB_00531685
    MOV EAX,0x7fff                      ; 00531680
    PUSH EAX                            ; 00531685
        ;   Label: LAB_00531685
    XOR EAX,EAX                         ; 00531686
    DIV EBX                             ; 00531688
    POP EDX                             ; 0053168a
    SHRD EAX,EDX,0x10                   ; 0053168b
    XOR EAX,ECX                         ; 0053168f
    MOV EBP,EAX                         ; 00531691
    CMP dword ptr [ESP + 0x8],0xffff    ; 00531693
        ;   Label: LAB_00531693
    JLE 0x005316a5                      ; 0053169b
        ;   XREF to: 005316a5 (CONDITIONAL_JUMP)  ; LAB_005316a5
    MOV dword ptr [ESP + 0x8],0xffff    ; 0053169d
    CMP EDI,0xffff                      ; 005316a5
        ;   Label: LAB_005316a5
    JLE 0x005316b2                      ; 005316ab
        ;   XREF to: 005316b2 (CONDITIONAL_JUMP)  ; LAB_005316b2
    MOV EDI,0xffff                      ; 005316ad
    CMP EBP,0xffff                      ; 005316b2
        ;   Label: LAB_005316b2
    JLE 0x005316bf                      ; 005316b8
        ;   XREF to: 005316bf (CONDITIONAL_JUMP)  ; LAB_005316bf
    MOV EBP,0xffff                      ; 005316ba
    MOV EAX,dword ptr [ESP + 0x8]       ; 005316bf
        ;   Label: LAB_005316bf
    MOV EDX,dword ptr [ESP]             ; 005316c3
    MOV EAX,dword ptr [EAX*0x4 + 0x1fca390] ; 005316c6 | DAT_0200a38c
    MOV dword ptr [EDX + 0x20],EAX      ; 005316cd | DAT_00622034
    MOV EAX,dword ptr [EDI*0x4 + 0x1fca390] ; 005316d0 | DAT_0200a38c
    MOV dword ptr [EDX + 0x24],EAX      ; 005316d7 | DAT_00622038
    MOV EAX,dword ptr [EBP*0x4 + 0x1fca390] ; 005316da | DAT_0200a38c
    MOV dword ptr [EDX + 0x28],EAX      ; 005316e1 | DAT_0062203c
    ADD ESP,0xc                         ; 005316e4
    POP EBP                             ; 005316e7
    POP EDI                             ; 005316e8
    POP ESI                             ; 005316e9
    POP EBX                             ; 005316ea
    RET                                 ; 005316eb
    PUSH EDI                            ; 005316ec
        ;   Label: LAB_005316ec
    MOV ESI,dword ptr [ESP + 0x28]      ; 005316ed
    PUSH ESI                            ; 005316f1
    PUSH EBX                            ; 005316f2
    CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0 ; 005316f3
        ;   XREF to: 005311e0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
    MOV EBP,dword ptr [0x01fc8a20]      ; 005316f8 | g_CDemonCameraInstance.field4584_0x11e8
    ADD ESP,0xc                         ; 005316fe
    MOV ECX,EAX                         ; 00531701
    MOV dword ptr [ESP + 0x4],EBP       ; 00531703
    TEST EBP,EBP                        ; 00531707
    JLE 0x00531560                      ; 00531709
        ;   XREF to: 00531560 (CONDITIONAL_JUMP)  ; LAB_00531560
    TEST EDI,EDI                        ; 0053170f
    JZ 0x00531560                       ; 00531711
        ;   XREF to: 00531560 (CONDITIONAL_JUMP)  ; LAB_00531560
    MOV ESI,EBP                         ; 00531717
    CMP EBP,0x1000                      ; 00531719
    JLE 0x00531726                      ; 0053171f
        ;   XREF to: 00531726 (CONDITIONAL_JUMP)  ; LAB_00531726
    MOV ESI,0x1000                      ; 00531721
    CMP dword ptr [0x01c38b78],0x0      ; 00531726 | DAT_01c38b78
        ;   Label: LAB_00531726
    JL 0x00531760                       ; 0053172d
        ;   XREF to: 00531760 (CONDITIONAL_JUMP)  ; LAB_00531760
    MOV EAX,ESI                         ; 0053172f
    MOV EDX,dword ptr [EDI]             ; 00531731
    IMUL EDX                            ; 00531733
    SHRD EAX,EDX,0x10                   ; 00531735
    ADD ECX,EAX                         ; 00531739
    CMP dword ptr [0x01c38b80],0x0      ; 0053173b | DAT_01c38b80
        ;   Label: LAB_0053173b
    JL 0x0053176e                       ; 00531742
        ;   XREF to: 0053176e (CONDITIONAL_JUMP)  ; LAB_0053176e
    MOV EAX,ESI                         ; 00531744
    MOV EDX,dword ptr [EDI + 0x8]       ; 00531746
    IMUL EDX                            ; 00531749
    SHRD EAX,EDX,0x10                   ; 0053174b
    ADD ECX,EAX                         ; 0053174f
    TEST ECX,ECX                        ; 00531751
    JGE 0x00531560                      ; 00531753
        ;   XREF to: 00531560 (CONDITIONAL_JUMP)  ; LAB_00531560
    XOR ECX,ECX                         ; 00531759
    JMP 0x00531560                      ; 0053175b
        ;   XREF to: 00531560 (UNCONDITIONAL_JUMP)  ; LAB_00531560
    MOV EAX,ESI                         ; 00531760
        ;   Label: LAB_00531760
    MOV EDX,dword ptr [EDI]             ; 00531762
    IMUL EDX                            ; 00531764
    SHRD EAX,EDX,0x10                   ; 00531766
    SUB ECX,EAX                         ; 0053176a
    JMP 0x0053173b                      ; 0053176c
        ;   XREF to: 0053173b (UNCONDITIONAL_JUMP)  ; LAB_0053173b
    MOV EAX,ESI                         ; 0053176e
        ;   Label: LAB_0053176e
    MOV EDX,dword ptr [EDI + 0x8]       ; 00531770
    IMUL EDX                            ; 00531773
    SHRD EAX,EDX,0x10                   ; 00531775
    SUB ECX,EAX                         ; 00531779
    TEST ECX,ECX                        ; 0053177b
    JGE 0x00531560                      ; 0053177d
        ;   XREF to: 00531560 (CONDITIONAL_JUMP)  ; LAB_00531560
    XOR ECX,ECX                         ; 00531783
    JMP 0x00531560                      ; 00531785
        ;   XREF to: 00531560 (UNCONDITIONAL_JUMP)  ; LAB_00531560
    ADD ECX,dword ptr [ESP + 0x4]       ; 0053178a
        ;   Label: LAB_0053178a
    MOV EDX,dword ptr [EBX + 0x15ae9c]  ; 0053178e
    MOV EAX,ECX                         ; 00531794
    IMUL EDX                            ; 00531796
    SHRD EAX,EDX,0x10                   ; 00531798
    MOV dword ptr [ESP + 0x8],EAX       ; 0053179c
    MOV EDX,dword ptr [EBX + 0x15aea0]  ; 005317a0
    MOV EAX,ECX                         ; 005317a6
    IMUL EDX                            ; 005317a8
    SHRD EAX,EDX,0x10                   ; 005317aa
    MOV EDI,EAX                         ; 005317ae
    MOV EDX,dword ptr [EBX + 0x15aea4]  ; 005317b0
    MOV EAX,ECX                         ; 005317b6
    JMP 0x005315c5                      ; 005317b8
        ;   XREF to: 005315c5 (UNCONDITIONAL_JUMP)  ; LAB_005315c5

