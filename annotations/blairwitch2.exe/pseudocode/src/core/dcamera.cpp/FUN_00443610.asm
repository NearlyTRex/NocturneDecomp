; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_dcamera_cpp_FUN_00443610(int param_1)
;
;
; XREF[1]:
;   core_set.cpp_FUN_0052d3be at 0052d714
;
; Referenced Globals:
;   undefined4 DAT_005f4dd4
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041a590
;   core_dcamera.cpp_FUN_0043c6b0
;   core_dcamera.cpp_FUN_0043c780
;   core_dirmat.cpp_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443610
        ;   Label: core_dcamera.cpp_FUN_00443610
    PUSH EDI                            ; 00443611
    PUSH EBP                            ; 00443612
    SUB ESP,0x110                       ; 00443613
    MOV EBP,dword ptr [ESP + 0x120]     ; 00443619
    MOV dword ptr [ESP + 0xe8],ESI      ; 00443620
    LEA EAX,[ESP + 0xc]                 ; 00443627
    CMP EAX,0x265370c                   ; 0044362b
    JNZ 0x00443705                      ; 00443630
        ;   XREF to: 00443705 (CONDITIONAL_JUMP)  ; LAB_00443705
    MOV EAX,ESP                         ; 00443636
        ;   Label: LAB_00443636
    LEA EBX,[ESP + 0xc]                 ; 00443638
    CMP EAX,EBX                         ; 0044363c
    JNZ 0x00443725                      ; 0044363e
        ;   XREF to: 00443725 (CONDITIONAL_JUMP)  ; LAB_00443725
    MOV EDX,0x1                         ; 00443644
        ;   Label: LAB_00443644
    LEA EAX,[EBP + 0x4]                 ; 00443649
    XOR ECX,ECX                         ; 0044364c
    MOV dword ptr [ESP + 0x100],EAX     ; 0044364e
    MOV dword ptr [ESP + 0xe4],ECX      ; 00443655
    LEA EAX,[EBP + 0x10]                ; 0044365c
    MOV dword ptr [ESP + 0x108],EDX     ; 0044365f
    MOV dword ptr [ESP + 0xec],EAX      ; 00443666
    MOV EAX,dword ptr [EBP + 0x148]     ; 0044366d
        ;   Label: LAB_0044366d
    MOV EBX,dword ptr [ESP + 0x108]     ; 00443673
    DEC EAX                             ; 0044367a
    CMP EAX,EBX                         ; 0044367b
    JLE 0x00443a22                      ; 0044367d
        ;   XREF to: 00443a22 (CONDITIONAL_JUMP)  ; LAB_00443a22
    MOV ESI,0x1                         ; 00443683
    LEA EAX,[EBX + ESI*0x1]             ; 00443688
    MOV dword ptr [ESP + 0xfc],EAX      ; 0044368b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00443692
    XOR EDI,EDI                         ; 00443699
    MOV dword ptr [ESP + 0xf0],EAX      ; 0044369b
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004436a2
    MOV dword ptr [ESP + 0x104],EDI     ; 004436a9
    MOV dword ptr [ESP + 0xf4],EAX      ; 004436b0
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004436b7
    MOV dword ptr [ESP + 0x10c],ESI     ; 004436be
    MOV dword ptr [ESP + 0xf8],EAX      ; 004436c5
    MOV EAX,dword ptr [EBP + 0x144]     ; 004436cc
        ;   Label: LAB_004436cc
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004436d2
    DEC EAX                             ; 004436d9
    CMP EAX,EDX                         ; 004436da
    JG 0x00443741                       ; 004436dc
        ;   XREF to: 00443741 (CONDITIONAL_JUMP)  ; LAB_00443741
    MOV EBX,dword ptr [ESP + 0x108]     ; 004436e2
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004436e9
    INC EBX                             ; 004436f0
    INC ECX                             ; 004436f1
    MOV dword ptr [ESP + 0x108],EBX     ; 004436f2
    MOV dword ptr [ESP + 0xe4],ECX      ; 004436f9
    JMP 0x0044366d                      ; 00443700
        ;   XREF to: 0044366d (UNCONDITIONAL_JUMP)  ; LAB_0044366d
    MOV EAX,[0x0265370c]                ; 00443705 | DAT_0265370c
        ;   Label: LAB_00443705
    MOV dword ptr [ESP + 0xc],EAX       ; 0044370a
    MOV EAX,[0x02653710]                ; 0044370e | DAT_02653710
    MOV dword ptr [ESP + 0x10],EAX      ; 00443713
    MOV EAX,[0x02653714]                ; 00443717 | DAT_02653714
    MOV dword ptr [ESP + 0x14],EAX      ; 0044371c
    JMP 0x00443636                      ; 00443720
        ;   XREF to: 00443636 (UNCONDITIONAL_JUMP)  ; LAB_00443636
    MOV EAX,dword ptr [ESP + 0xc]       ; 00443725
        ;   Label: LAB_00443725
    MOV dword ptr [ESP],EAX             ; 00443729
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044372c
    MOV dword ptr [ESP + 0x4],EAX       ; 00443730
    MOV EAX,dword ptr [ESP + 0x14]      ; 00443734
    MOV dword ptr [ESP + 0x8],EAX       ; 00443738
    JMP 0x00443644                      ; 0044373c
        ;   XREF to: 00443644 (UNCONDITIONAL_JUMP)  ; LAB_00443644
    MOV ESI,dword ptr [ESP + 0x108]     ; 00443741
        ;   Label: LAB_00443741
    PUSH ESI                            ; 00443748
    PUSH EDX                            ; 00443749
    PUSH EBP                            ; 0044374a
    LEA ESI,[ESP + 0x48]                ; 0044374b
    LEA EDI,[ESP + 0xd8]                ; 0044374f
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 00443756
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0x48]                ; 0044375b
    ADD ESP,0xc                         ; 0044375f
    MOVSD ES:EDI,ESI                    ; 00443762
    MOVSD ES:EDI,ESI                    ; 00443763
    MOVSD ES:EDI,ESI                    ; 00443764
    CMP dword ptr [ESP + 0xd4],0x1f400  ; 00443765
    JLE 0x004437da                      ; 00443770
        ;   XREF to: 004437da (CONDITIONAL_JUMP)  ; LAB_004437da
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00443772
    XOR EBX,EBX                         ; 00443779
    CMP EDX,0x1                         ; 0044377b
    JG 0x004438da                       ; 0044377e
        ;   XREF to: 004438da (CONDITIONAL_JUMP)  ; LAB_004438da
    INC EBX                             ; 00443784
        ;   Label: LAB_00443784
    CMP dword ptr [ESP + 0x10c],0x1     ; 00443785
        ;   Label: LAB_00443785
    JG 0x00443929                       ; 0044378d
        ;   XREF to: 00443929 (CONDITIONAL_JUMP)  ; LAB_00443929
    INC EBX                             ; 00443793
        ;   Label: LAB_00443793
    MOV EAX,dword ptr [EBP + 0x144]     ; 00443794
        ;   Label: LAB_00443794
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0044379a
    SUB EAX,0x2                         ; 004437a1
    CMP EAX,EDX                         ; 004437a4
    JG 0x0044397c                       ; 004437a6
        ;   XREF to: 0044397c (CONDITIONAL_JUMP)  ; LAB_0044397c
    INC EBX                             ; 004437ac
        ;   Label: LAB_004437ac
    MOV EAX,dword ptr [EBP + 0x144]     ; 004437ad
        ;   Label: LAB_004437ad
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004437b3
    SUB EAX,0x2                         ; 004437ba
    CMP EAX,EDX                         ; 004437bd
    JG 0x004439cd                       ; 004437bf
        ;   XREF to: 004439cd (CONDITIONAL_JUMP)  ; LAB_004439cd
    INC EBX                             ; 004437c5
        ;   Label: LAB_004437c5
    CMP EBX,0x4                         ; 004437c6
        ;   Label: LAB_004437c6
    JL 0x004438b7                       ; 004437c9
        ;   XREF to: 004438b7 (CONDITIONAL_JUMP)  ; LAB_004438b7
    MOV dword ptr [ESP + 0xd4],0x1f400  ; 004437cf
    LEA EAX,[ESP + 0xcc]                ; 004437da
        ;   Label: LAB_004437da
    PUSH EAX                            ; 004437e1
    LEA ESI,[ESP + 0x7c]                ; 004437e2
    PUSH EBP                            ; 004437e6
    LEA EDI,[ESP + 0xe0]                ; 004437e7
    LEA EBX,[ESP + 0xc8]                ; 004437ee
    CALL core_dcamera.cpp_FUN_0043c780  ; 004437f5
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c780()
    LEA ESI,[ESP + 0x80]                ; 004437fa
    ADD ESP,0x8                         ; 00443801
    LEA EAX,[ESP + 0xd8]                ; 00443804
    MOV EDX,dword ptr [ESP + 0xec]      ; 0044380b
    MOVSD ES:EDI,ESI                    ; 00443812
    MOVSD ES:EDI,ESI                    ; 00443813
    MOVSD ES:EDI,ESI                    ; 00443814
    FILD dword ptr [EAX]                ; 00443815
    FMUL float ptr [0x005f4dd4]         ; 00443817 | DAT_005f4dd4
    FSTP float ptr [EBX]                ; 0044381d
    FILD dword ptr [EAX + 0x4]          ; 0044381f
    FMUL float ptr [0x005f4dd4]         ; 00443822 | DAT_005f4dd4
    FSTP float ptr [EBX + 0x4]          ; 00443828
    FILD dword ptr [EAX + 0x8]          ; 0044382b
    FMUL float ptr [0x005f4dd4]         ; 0044382e | DAT_005f4dd4
    FSTP float ptr [EBX + 0x8]          ; 00443834
    FLD float ptr [ESP + 0xc0]          ; 00443837
    FLD float ptr [ESP + 0xc4]          ; 0044383e
    FLD float ptr [ESP + 0xc8]          ; 00443845
    MOV EAX,dword ptr [ESP + 0x100]     ; 0044384c
    LEA EDI,[ESP + 0x30]                ; 00443853
    LEA ESI,[ESP + 0x9c]                ; 00443857
    FXCH ST2                            ; 0044385e
    FSUB float ptr [EAX]                ; 00443860
    FXCH                                ; 00443862
    FSUB float ptr [EAX + 0x4]          ; 00443864
    FXCH ST2                            ; 00443867
    FSUB float ptr [EAX + 0x8]          ; 00443869
    FXCH                                ; 0044386c
    FSTP float ptr [ESP + 0x9c]         ; 0044386e
    FXCH                                ; 00443875
    FSTP float ptr [ESP + 0xa0]         ; 00443877
    LEA EAX,[ESP + 0x30]                ; 0044387e
    FSTP float ptr [ESP + 0xa4]         ; 00443882
    PUSH EAX                            ; 00443889
    MOVSD ES:EDI,ESI                    ; 0044388a
    MOVSD ES:EDI,ESI                    ; 0044388b
    MOVSD ES:EDI,ESI                    ; 0044388c
    PUSH EDX                            ; 0044388d
    LEA ESI,[ESP + 0x5c]                ; 0044388e
    CALL core_dirmat.cpp_FUN_004495a0   ; 00443892
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    ADD ESP,0x8                         ; 00443897
    LEA EAX,[ESP + 0x24]                ; 0044389a
    LEA EDI,[ESP + 0x24]                ; 0044389e
    PUSH EAX                            ; 004438a2
    LEA EAX,[ESP + 0x4]                 ; 004438a3
    LEA ESI,[ESP + 0x58]                ; 004438a7
    PUSH EAX                            ; 004438ab
    MOVSD ES:EDI,ESI                    ; 004438ac
    MOVSD ES:EDI,ESI                    ; 004438ad
    MOVSD ES:EDI,ESI                    ; 004438ae
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 004438af
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 004438b4
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004438b7
        ;   Label: LAB_004438b7
    MOV ECX,dword ptr [ESP + 0x104]     ; 004438be
    INC EBX                             ; 004438c5
    INC ECX                             ; 004438c6
    MOV dword ptr [ESP + 0x10c],EBX     ; 004438c7
    MOV dword ptr [ESP + 0x104],ECX     ; 004438ce
    JMP 0x004436cc                      ; 004438d5
        ;   XREF to: 004436cc (UNCONDITIONAL_JUMP)  ; LAB_004436cc
    CMP dword ptr [ESP + 0x108],0x1     ; 004438da
        ;   Label: LAB_004438da
    JLE 0x00443784                      ; 004438e2
        ;   XREF to: 00443784 (CONDITIONAL_JUMP)  ; LAB_00443784
    MOV ESI,dword ptr [ESP + 0xf8]      ; 004438e8
    PUSH ESI                            ; 004438ef
    MOV EDI,dword ptr [ESP + 0x108]     ; 004438f0
    PUSH EDI                            ; 004438f7
    PUSH EBP                            ; 004438f8
    LEA ESI,[ESP + 0xb4]                ; 004438f9
    LEA EDI,[ESP + 0x54]                ; 00443900
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 00443904
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0xb4]                ; 00443909
    ADD ESP,0xc                         ; 00443910
    MOVSD ES:EDI,ESI                    ; 00443913
    MOVSD ES:EDI,ESI                    ; 00443914
    MOVSD ES:EDI,ESI                    ; 00443915
    CMP dword ptr [ESP + 0x50],0x1f400  ; 00443916
    JG 0x00443784                       ; 0044391e
        ;   XREF to: 00443784 (CONDITIONAL_JUMP)  ; LAB_00443784
    JMP 0x00443785                      ; 00443924
        ;   XREF to: 00443785 (UNCONDITIONAL_JUMP)  ; LAB_00443785
    MOV EAX,dword ptr [EBP + 0x148]     ; 00443929
        ;   Label: LAB_00443929
    MOV ECX,dword ptr [ESP + 0x108]     ; 0044392f
    SUB EAX,0x2                         ; 00443936
    CMP EAX,ECX                         ; 00443939
    JLE 0x00443793                      ; 0044393b
        ;   XREF to: 00443793 (CONDITIONAL_JUMP)  ; LAB_00443793
    MOV ESI,dword ptr [ESP + 0xf4]      ; 00443941
    PUSH ESI                            ; 00443948
    MOV EDI,dword ptr [ESP + 0x108]     ; 00443949
    PUSH EDI                            ; 00443950
    PUSH EBP                            ; 00443951
    LEA ESI,[ESP + 0x24]                ; 00443952
    LEA EDI,[ESP + 0x6c]                ; 00443956
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 0044395a
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0x24]                ; 0044395f
    ADD ESP,0xc                         ; 00443963
    MOVSD ES:EDI,ESI                    ; 00443966
    MOVSD ES:EDI,ESI                    ; 00443967
    MOVSD ES:EDI,ESI                    ; 00443968
    CMP dword ptr [ESP + 0x68],0x1f400  ; 00443969
    JG 0x00443793                       ; 00443971
        ;   XREF to: 00443793 (CONDITIONAL_JUMP)  ; LAB_00443793
    JMP 0x00443794                      ; 00443977
        ;   XREF to: 00443794 (UNCONDITIONAL_JUMP)  ; LAB_00443794
    CMP dword ptr [ESP + 0x108],0x1     ; 0044397c
        ;   Label: LAB_0044397c
    JLE 0x004437ac                      ; 00443984
        ;   XREF to: 004437ac (CONDITIONAL_JUMP)  ; LAB_004437ac
    MOV ESI,dword ptr [ESP + 0xf0]      ; 0044398a
    PUSH ESI                            ; 00443991
    LEA EAX,[EDX + 0x1]                 ; 00443992
    PUSH EAX                            ; 00443995
    PUSH EBP                            ; 00443996
    LEA ESI,[ESP + 0xc0]                ; 00443997
    LEA EDI,[ESP + 0x90]                ; 0044399e
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 004439a5
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0xc0]                ; 004439aa
    ADD ESP,0xc                         ; 004439b1
    MOVSD ES:EDI,ESI                    ; 004439b4
    MOVSD ES:EDI,ESI                    ; 004439b5
    MOVSD ES:EDI,ESI                    ; 004439b6
    CMP dword ptr [ESP + 0x8c],0x1f400  ; 004439b7
    JG 0x004437ac                       ; 004439c2
        ;   XREF to: 004437ac (CONDITIONAL_JUMP)  ; LAB_004437ac
    JMP 0x004437ad                      ; 004439c8
        ;   XREF to: 004437ad (UNCONDITIONAL_JUMP)  ; LAB_004437ad
    MOV EAX,dword ptr [EBP + 0x148]     ; 004439cd
        ;   Label: LAB_004439cd
    MOV ECX,dword ptr [ESP + 0x108]     ; 004439d3
    SUB EAX,0x2                         ; 004439da
    CMP EAX,ECX                         ; 004439dd
    JLE 0x004437c5                      ; 004439df
        ;   XREF to: 004437c5 (CONDITIONAL_JUMP)  ; LAB_004437c5
    MOV ESI,dword ptr [ESP + 0xfc]      ; 004439e5
    PUSH ESI                            ; 004439ec
    LEA EAX,[EDX + 0x1]                 ; 004439ed
    PUSH EAX                            ; 004439f0
    PUSH EBP                            ; 004439f1
    LEA ESI,[ESP + 0x78]                ; 004439f2
    LEA EDI,[ESP + 0x9c]                ; 004439f6
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 004439fd
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0x78]                ; 00443a02
    ADD ESP,0xc                         ; 00443a06
    MOVSD ES:EDI,ESI                    ; 00443a09
    MOVSD ES:EDI,ESI                    ; 00443a0a
    MOVSD ES:EDI,ESI                    ; 00443a0b
    CMP dword ptr [ESP + 0x98],0x1f400  ; 00443a0c
    JG 0x004437c5                       ; 00443a17
        ;   XREF to: 004437c5 (CONDITIONAL_JUMP)  ; LAB_004437c5
    JMP 0x004437c6                      ; 00443a1d
        ;   XREF to: 004437c6 (UNCONDITIONAL_JUMP)  ; LAB_004437c6
    MOV ECX,0x6                         ; 00443a22
        ;   Label: LAB_00443a22
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00443a27
    MOV ESI,ESP                         ; 00443a2e
    MOVSD.REP ES:EDI,ESI                ; 00443a30
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00443a32
    ADD ESP,0x110                       ; 00443a39
    POP EBP                             ; 00443a3f
    POP EDI                             ; 00443a40
    POP EBX                             ; 00443a41
    RET                                 ; 00443a42

