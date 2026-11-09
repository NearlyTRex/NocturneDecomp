; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_basicene_cpp_FUN_0059e3b0(CEnemy *param_1)
;
;
; XREF[10]:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 at 005a47b7
;   core_confedrt.cpp_CConfederate_ctor_FUN_005a0840 at 005a0848
;   core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40 at 005a1b48
;   core_dog1.cpp_CDog_ctor_FUN_005aba40 at 005aba4c
;   core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230 at 005a9237
;   core_hag.cpp_CHag_ctor_FUN_005aa600 at 005aa608
;   core_hand.cpp_CHand_ctor_FUN_005a9c00 at 005a9c07
;   core_schngeis.cpp_CSchnellGeist_ctor_FUN_005a2fb0 at 005a2fb8
;   core_twigzomb.cpp_CTwigZombie_ctor_FUN_005a26d0 at 005a26d8
;   core_unionzom.cpp_CUnionZombie_ctor_FUN_005a3d30 at 005a3d38
;
; Referenced Globals:
;   undefined4 DAT_005febdc
;   undefined4 DAT_005febe0
;   undefined4 DAT_005febe4
;   undefined4 DAT_005febe8
;   undefined4 DAT_005febec
;   undefined4 DAT_005febf0
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   unkaddr_0059d350.cpp_FUN_0059d610
;   unkaddr_0059d350.cpp_FUN_0059d6f0
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059da70
;   unkaddr_0059d350.cpp_FUN_0059db90
;   unkaddr_0059d350.cpp_FUN_0059dc80
;   unkafter_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e3b0
        ;   Label: unkafter_basicene.cpp_FUN_0059e3b0
    PUSH ESI                            ; 0059e3b1
    PUSH EDI                            ; 0059e3b2
    SUB ESP,0xc                         ; 0059e3b3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0059e3b6
    PUSH EBX                            ; 0059e3ba
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0059e3bb
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059e3c0
    ADD EAX,0x10af8                     ; 0059e3c3
    PUSH EAX                            ; 0059e3c8
    CALL unkaddr_0059d350.cpp_FUN_0059d610 ; 0059e3c9
        ;   XREF to: 0059d610 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d610()
    LEA EBX,[EAX + 0xfffef508]          ; 0059e3ce
    MOV dword ptr [EBX + 0x2b0],0x5fec04 ; 0059e3d4
    MOV dword ptr [EBX + 0x1141c],0x0   ; 0059e3de
    MOV dword ptr [EBX + 0x1134c],0x3f800000 ; 0059e3e8
    MOV dword ptr [EBX + 0x113a4],0x0   ; 0059e3f2
    MOV dword ptr [EBX + 0x113a8],0x0   ; 0059e3fc
    MOV dword ptr [EBX + 0x113ac],0x2   ; 0059e406
    MOV dword ptr [EBX + 0x11380],0x0   ; 0059e410
    MOV dword ptr [EBX + 0x11384],0x0   ; 0059e41a
    MOV dword ptr [EBX + 0x11388],0x0   ; 0059e424
    MOV dword ptr [EBX + 0x1138c],0x0   ; 0059e42e
    MOV dword ptr [EBX + 0x11390],0xffffffff ; 0059e438
    MOV dword ptr [EBX + 0x11394],0x41200000 ; 0059e442
    MOV dword ptr [EBX + 0x11398],0x41f00000 ; 0059e44c
    MOV dword ptr [EBX + 0x113a0],0x41f00000 ; 0059e456
    MOV dword ptr [EBX + 0x11344],0x0   ; 0059e460
    MOV dword ptr [EBX + 0x113bc],0x0   ; 0059e46a
    MOV dword ptr [EBX + 0x113c0],0x3f800000 ; 0059e474
    MOV dword ptr [EBX + 0x113cc],0x0   ; 0059e47e
    FLD float ptr [0x005febe4]          ; 0059e488 | DAT_005febe4
    MOV dword ptr [EBX + 0x113c8],0x40a00000 ; 0059e48e
    FLD float ptr [0x005febe8]          ; 0059e498 | DAT_005febe8
    MOV dword ptr [EBX + 0x113c4],0x3f800000 ; 0059e49e
    FLD float ptr [0x005febec]          ; 0059e4a8 | DAT_005febec
    MOV dword ptr [EBX + 0x113b8],0x0   ; 0059e4ae
    FLD float ptr [0x005febe0]          ; 0059e4b8 | DAT_005febe0
    MOV dword ptr [EBX + 0x113b4],0x0   ; 0059e4be
    FLD float ptr [0x005febdc]          ; 0059e4c8 | DAT_005febdc
    MOV dword ptr [EBX + 0x11418],0x0   ; 0059e4ce
    ADD ESP,0x4                         ; 0059e4d8
    FXCH ST4                            ; 0059e4db
    FSTP float ptr [EBX + 0x11370]      ; 0059e4dd
    FXCH ST2                            ; 0059e4e3
    FSTP float ptr [EBX + 0x11374]      ; 0059e4e5
    FSTP float ptr [EBX + 0x11378]      ; 0059e4eb
    FSTP float ptr [EBX + 0x3438]       ; 0059e4f1
    FSTP float ptr [EBX + 0x343c]       ; 0059e4f7
    MOV EDX,dword ptr [EBX + 0x11418]   ; 0059e4fd
    MOV dword ptr [EBX + 0x113d0],0x0   ; 0059e503
    TEST EDX,EDX                        ; 0059e50d
    JZ 0x0059e536                       ; 0059e50f
        ;   XREF to: 0059e536 (CONDITIONAL_JUMP)  ; LAB_0059e536
    MOV ESI,0x5ef863                    ; 0059e511
    LEA EDI,[EBX + 0x113d4]             ; 0059e516
    PUSH EDI                            ; 0059e51c
    MOV AL,byte ptr [ESI]               ; 0059e51d
        ;   Label: LAB_0059e51d
    MOV byte ptr [EDI],AL               ; 0059e51f
    CMP AL,0x0                          ; 0059e521
    JZ 0x0059e535                       ; 0059e523
        ;   XREF to: 0059e535 (CONDITIONAL_JUMP)  ; LAB_0059e535
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e525
    ADD ESI,0x2                         ; 0059e528
    MOV byte ptr [EDI + 0x1],AL         ; 0059e52b
    ADD EDI,0x2                         ; 0059e52e
    CMP AL,0x0                          ; 0059e531
    JNZ 0x0059e51d                      ; 0059e533
        ;   XREF to: 0059e51d (CONDITIONAL_JUMP)  ; LAB_0059e51d
    POP EDI                             ; 0059e535
        ;   Label: LAB_0059e535
    PUSH 0x0                            ; 0059e536
        ;   Label: LAB_0059e536
    MOV dword ptr [EBX + 0x1140c],0x3e800000 ; 0059e538
    PUSH 0x0                            ; 0059e542
    MOV dword ptr [EBX + 0x11410],0x3f000000 ; 0059e544
    PUSH EBX                            ; 0059e54e
    MOV dword ptr [EBX + 0x11414],0x3e800000 ; 0059e54f
    CALL unkafter_basicene.cpp_FUN_0059e8c0 ; 0059e559
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 0059e55e
    PUSH 0x5ef868                       ; 0059e561
    PUSH 0x5ef870                       ; 0059e566
    LEA ESI,[EBX + 0x10af8]             ; 0059e56b
    PUSH ESI                            ; 0059e571
    CALL unkaddr_0059d350.cpp_FUN_0059d6f0 ; 0059e572
        ;   XREF to: 0059d6f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d6f0()
    ADD ESP,0xc                         ; 0059e577
    PUSH 0x5ef87e                       ; 0059e57a
    PUSH ESI                            ; 0059e57f
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 0059e580
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059e585
    PUSH ESI                            ; 0059e588
    CALL unkaddr_0059d350.cpp_FUN_0059da70 ; 0059e589
        ;   XREF to: 0059da70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059da70()
    ADD ESP,0x4                         ; 0059e58e
    PUSH 0x5ef886                       ; 0059e591
    PUSH ESI                            ; 0059e596
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 0059e597
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 0059e59c
    PUSH ESI                            ; 0059e59f
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 0059e5a0
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 0059e5a5
    PUSH ESI                            ; 0059e5a8
    CALL unkaddr_0059d350.cpp_FUN_0059db90 ; 0059e5a9
        ;   XREF to: 0059db90 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059db90()
    ADD ESP,0x4                         ; 0059e5ae
    PUSH EAX                            ; 0059e5b1
    PUSH 0x5ef88e                       ; 0059e5b2
    PUSH ESI                            ; 0059e5b7
    MOV EDI,0x3e4ccccd                  ; 0059e5b8
    CALL unkaddr_0059d350.cpp_FUN_0059d6f0 ; 0059e5bd
        ;   XREF to: 0059d6f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d6f0()
    MOV dword ptr [EBX + 0x11420],0x0   ; 0059e5c2
    LEA EAX,[ESP + 0xc]                 ; 0059e5cc
    MOV dword ptr [EBX + 0x1137c],0xfffffc19 ; 0059e5d0
    ADD ESP,0xc                         ; 0059e5da
    MOV dword ptr [EBX + 0x113fc],0xfffffc19 ; 0059e5dd
    XOR ECX,ECX                         ; 0059e5e7
    LEA ESI,[EBX + 0x11424]             ; 0059e5e9
    MOV dword ptr [ESP],ECX             ; 0059e5ef
    MOV dword ptr [ESP + 0x4],ECX       ; 0059e5f2
    MOV dword ptr [ESP + 0x8],EDI       ; 0059e5f6
    CMP ESI,EAX                         ; 0059e5fa
    JZ 0x0059e60a                       ; 0059e5fc
        ;   XREF to: 0059e60a (CONDITIONAL_JUMP)  ; LAB_0059e60a
    MOV dword ptr [ESI + 0x4],ECX       ; 0059e5fe
    MOV dword ptr [ESI],ECX             ; 0059e601
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059e603
    MOV dword ptr [ESI + 0x8],EAX       ; 0059e607
    MOV dword ptr [EBX + 0x11430],0x0   ; 0059e60a
        ;   Label: LAB_0059e60a
    MOV dword ptr [EBX + 0x11348],0x0   ; 0059e614
    MOV byte ptr [EBX + 0x11444],0x0    ; 0059e61e
    MOV byte ptr [EBX + 0x11543],0x0    ; 0059e625
    MOV byte ptr [EBX + 0x11642],0x0    ; 0059e62c
    MOV byte ptr [EBX + 0x11741],0x0    ; 0059e633
    MOV dword ptr [EBX + 0x11844],0x41200000 ; 0059e63a
    FLD float ptr [0x005febf0]          ; 0059e644 | DAT_005febf0
    MOV dword ptr [EBX + 0x11840],0x0   ; 0059e64a
    MOV ESI,0x5ef89b                    ; 0059e654
    MOV dword ptr [EBX + 0x1184c],0x0   ; 0059e659
    LEA EDI,[EBX + 0x11642]             ; 0059e663
    FSTP float ptr [EBX + 0x11440]      ; 0059e669
    PUSH EDI                            ; 0059e66f
    MOV AL,byte ptr [ESI]               ; 0059e670
        ;   Label: LAB_0059e670
    MOV byte ptr [EDI],AL               ; 0059e672
    CMP AL,0x0                          ; 0059e674
    JZ 0x0059e688                       ; 0059e676
        ;   XREF to: 0059e688 (CONDITIONAL_JUMP)  ; LAB_0059e688
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e678
    ADD ESI,0x2                         ; 0059e67b
    MOV byte ptr [EDI + 0x1],AL         ; 0059e67e
    ADD EDI,0x2                         ; 0059e681
    CMP AL,0x0                          ; 0059e684
    JNZ 0x0059e670                      ; 0059e686
        ;   XREF to: 0059e670 (CONDITIONAL_JUMP)  ; LAB_0059e670
    POP EDI                             ; 0059e688
        ;   Label: LAB_0059e688
    MOV EAX,EBX                         ; 0059e689
    ADD ESP,0xc                         ; 0059e68b
    POP EDI                             ; 0059e68e
    POP ESI                             ; 0059e68f
    POP EBX                             ; 0059e690
    RET                                 ; 0059e691

