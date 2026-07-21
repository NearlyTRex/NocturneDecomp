; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(int param_1)
;
;
; XREF[4]:
;   FUN_0040a140 at 0040a1e9
;   FUN_0048b6f0 at 0048bd16
;   FUN_004c71a0 at 004c73d3
;   core_lightgun.cpp_CLightGun_canSeeTarget_FUN_004c70a0 at 004c7186
;
; Referenced Globals:
;   string s_..\\core\\setcolid.cpp_00590b04
;   string s_CDemonSet::popRaytraceState_-_st_00590b19
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_020842d0
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511590
        ;   Label: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590
    PUSH ESI                            ; 00511591
    PUSH EDI                            ; 00511592
    MOV EBX,dword ptr [ESP + 0x10]      ; 00511593
    CMP dword ptr [0x020842d0],0x1      ; 00511597 | DAT_020842d0
    JL 0x00511705                       ; 0051159e
        ;   XREF to: 00511705 (CONDITIONAL_JUMP)  ; LAB_00511705
    MOV EDI,dword ptr [0x020842d0]      ; 005115a4 | DAT_020842d0
        ;   Label: LAB_005115a4
    DEC EDI                             ; 005115aa
    MOV dword ptr [0x020842d0],EDI      ; 005115ab | DAT_020842d0
    LEA EAX,[EDI*0x4 + 0x0]             ; 005115b1
    ADD EAX,EDI                         ; 005115b8
    MOV EDI,0x20842d4                   ; 005115ba
    SHL EAX,0x5                         ; 005115bf
    ADD EDI,EAX                         ; 005115c2
    MOV EAX,dword ptr [EDI]             ; 005115c4
    MOV dword ptr [EBX + 0x15f298],EAX  ; 005115c6
    MOV EAX,dword ptr [EDI + 0x4]       ; 005115cc
    MOV dword ptr [EBX + 0x15f29c],EAX  ; 005115cf
    MOV EAX,dword ptr [EDI + 0x8]       ; 005115d5
    MOV dword ptr [EBX + 0x15f2a0],EAX  ; 005115d8
    MOV EAX,dword ptr [EDI + 0xc]       ; 005115de
    MOV dword ptr [EBX + 0x15f2a4],EAX  ; 005115e1
    MOV EAX,dword ptr [EDI + 0x10]      ; 005115e7
    MOV dword ptr [EBX + 0x15f2a8],EAX  ; 005115ea
    MOV EAX,dword ptr [EDI + 0x14]      ; 005115f0
    XOR ECX,ECX                         ; 005115f3
    MOV dword ptr [EBX + 0x15f2ac],EAX  ; 005115f5
    TEST EAX,EAX                        ; 005115fb
    JLE 0x00511620                      ; 005115fd
        ;   XREF to: 00511620 (CONDITIONAL_JUMP)  ; LAB_00511620
    MOV EAX,EDI                         ; 005115ff
    MOV EDX,EBX                         ; 00511601
    ADD EDX,0x4                         ; 00511603
        ;   Label: LAB_00511603
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00511606
    MOV dword ptr [EDX + 0x15f2b0],ESI  ; 00511609
    INC ECX                             ; 0051160f
    MOV ESI,dword ptr [EBX + 0x15f2ac]  ; 00511610
    ADD EAX,0x4                         ; 00511616
    CMP ECX,ESI                         ; 00511619
    JL 0x00511603                       ; 0051161b
        ;   XREF to: 00511603 (CONDITIONAL_JUMP)  ; LAB_00511603
    LEA EAX,[EAX]                       ; 0051161d
    MOV EAX,dword ptr [EDI + 0x18]      ; 00511620
        ;   Label: LAB_00511620
    LEA EDX,[EDI + 0x44]                ; 00511623
    MOV dword ptr [EBX + 0x15f2b0],EAX  ; 00511626
    LEA EAX,[EBX + 0x14cd28]            ; 0051162c
    CMP EAX,EDX                         ; 00511632
    JZ 0x00511646                       ; 00511634
        ;   XREF to: 00511646 (CONDITIONAL_JUMP)  ; LAB_00511646
    MOV ECX,dword ptr [EDX]             ; 00511636
    MOV dword ptr [EAX],ECX             ; 00511638
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051163a
    MOV dword ptr [EAX + 0x4],ECX       ; 0051163d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00511640
    MOV dword ptr [EAX + 0x8],ECX       ; 00511643
    LEA EDX,[EDI + 0x50]                ; 00511646
        ;   Label: LAB_00511646
    LEA EAX,[EBX + 0x14cd34]            ; 00511649
    CMP EAX,EDX                         ; 0051164f
    JZ 0x00511663                       ; 00511651
        ;   XREF to: 00511663 (CONDITIONAL_JUMP)  ; LAB_00511663
    MOV ECX,dword ptr [EDX]             ; 00511653
    MOV dword ptr [EAX],ECX             ; 00511655
    MOV ECX,dword ptr [EDX + 0x4]       ; 00511657
    MOV dword ptr [EAX + 0x4],ECX       ; 0051165a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051165d
    MOV dword ptr [EAX + 0x8],ECX       ; 00511660
    FLD float ptr [EDI + 0x5c]          ; 00511663
        ;   Label: LAB_00511663
    LEA EAX,[EBX + 0x15f2e4]            ; 00511666
    LEA EDX,[EDI + 0x64]                ; 0051166c
    FSTP float ptr [EBX + 0x15f2dc]     ; 0051166f
    MOV ECX,dword ptr [EDI + 0x60]      ; 00511675
    MOV dword ptr [EBX + 0x15f2e0],ECX  ; 00511678
    CMP EAX,EDX                         ; 0051167e
    JZ 0x00511692                       ; 00511680
        ;   XREF to: 00511692 (CONDITIONAL_JUMP)  ; LAB_00511692
    MOV ECX,dword ptr [EDX]             ; 00511682
    MOV dword ptr [EAX],ECX             ; 00511684
    MOV ECX,dword ptr [EDX + 0x4]       ; 00511686
    MOV dword ptr [EAX + 0x4],ECX       ; 00511689
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051168c
    MOV dword ptr [EAX + 0x8],ECX       ; 0051168f
    MOV EAX,dword ptr [EDI + 0x70]      ; 00511692
        ;   Label: LAB_00511692
    LEA EDX,[EDI + 0x78]                ; 00511695
    MOV dword ptr [EBX + 0x15f2f0],EAX  ; 00511698
    LEA EAX,[EBX + 0x14cd40]            ; 0051169e
    CMP EAX,EDX                         ; 005116a4
    JZ 0x005116b8                       ; 005116a6
        ;   XREF to: 005116b8 (CONDITIONAL_JUMP)  ; LAB_005116b8
    MOV ECX,dword ptr [EDX]             ; 005116a8
    MOV dword ptr [EAX],ECX             ; 005116aa
    MOV ECX,dword ptr [EDX + 0x4]       ; 005116ac
    MOV dword ptr [EAX + 0x4],ECX       ; 005116af
    MOV ECX,dword ptr [EDX + 0x8]       ; 005116b2
    MOV dword ptr [EAX + 0x8],ECX       ; 005116b5
    MOV EAX,dword ptr [EDI + 0x84]      ; 005116b8
        ;   Label: LAB_005116b8
    LEA EDX,[EBX + 0x14cd50]            ; 005116be
    MOV dword ptr [EBX + 0x14cd4c],EAX  ; 005116c4
    LEA EAX,[EDI + 0x88]                ; 005116ca
    CMP EDX,EAX                         ; 005116d0
    JNZ 0x0051172d                      ; 005116d2
        ;   XREF to: 0051172d (CONDITIONAL_JUMP)  ; LAB_0051172d
    MOV EAX,dword ptr [EDI + 0x94]      ; 005116d4
        ;   Label: LAB_005116d4
    MOV dword ptr [EBX + 0x14cd5c],EAX  ; 005116da
    MOV EAX,dword ptr [EDI + 0x98]      ; 005116e0
    MOV dword ptr [EBX + 0x14cd60],EAX  ; 005116e6
    MOV EAX,dword ptr [EDI + 0x9c]      ; 005116ec
    MOV dword ptr [EBX + 0x14cd64],EAX  ; 005116f2
    MOV EAX,dword ptr [EDI + 0x74]      ; 005116f8
    MOV dword ptr [EBX + 0x15f2f4],EAX  ; 005116fb
    POP EDI                             ; 00511701
    POP ESI                             ; 00511702
    POP EBX                             ; 00511703
    RET                                 ; 00511704
    MOV ECX,0x590b04                    ; 00511705 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00511705
    MOV ESI,0x42a                       ; 0051170a
    PUSH 0x590b19                       ; 0051170f | = "CDemonSet::popRaytraceState - stack e..."
    MOV dword ptr [0x01cc4800],ECX      ; 00511714 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0051171a | DAT_01cc4804
    CALL FUN_004c8440                   ; 00511720
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00511725
    JMP 0x005115a4                      ; 00511728
        ;   XREF to: 005115a4 (UNCONDITIONAL_JUMP)  ; LAB_005115a4
    MOV ECX,dword ptr [EAX]             ; 0051172d
        ;   Label: LAB_0051172d
    MOV dword ptr [EDX],ECX             ; 0051172f
    MOV ECX,dword ptr [EAX + 0x4]       ; 00511731
    MOV dword ptr [EDX + 0x4],ECX       ; 00511734
    MOV ECX,dword ptr [EAX + 0x8]       ; 00511737
    MOV dword ptr [EDX + 0x8],ECX       ; 0051173a
    JMP 0x005116d4                      ; 0051173d
        ;   XREF to: 005116d4 (UNCONDITIONAL_JUMP)  ; LAB_005116d4

