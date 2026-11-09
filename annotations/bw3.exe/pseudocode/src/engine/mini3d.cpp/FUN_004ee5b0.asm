; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ee5b0(float *param_1,int param_2,ushort *param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x64]:1  local_64
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_font.cpp_FUN_004b13a0 at 004b143b
;   engine_mini3d.cpp_FUN_004f37e0 at 004f3a30
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005c8139
;   TerminatedCString s_CMini3D_polyList_Too_man_005c814e
;   undefined4 DAT_005c817d
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76c34
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76cc4
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d7a694
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_mini3d.cpp_FUN_004edcc0
;   engine_mini3d.cpp_FUN_004ede40
;   engine_mini3d.cpp_FUN_004f1190
;   engine_mini3d.cpp_FUN_004f12b0
;   engine_mini3d.cpp_FUN_004f2090
;   engine_mini3d.cpp_FUN_004f2430
;   engine_mini3d.cpp_FUN_004f2490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee5b0
        ;   Label: engine_mini3d.cpp_FUN_004ee5b0
    PUSH ESI                            ; 004ee5b1
    PUSH EDI                            ; 004ee5b2
    PUSH EBP                            ; 004ee5b3
    SUB ESP,0x114                       ; 004ee5b4
    MOV EBX,dword ptr [ESP + 0x128]     ; 004ee5ba
    MOV EAX,dword ptr [ESP + 0x134]     ; 004ee5c1
    MOV EDX,dword ptr [0x01ed3198]      ; 004ee5c8 | DAT_01ed3198
    MOV ECX,dword ptr [0x01d76c34]      ; 004ee5ce | DAT_01d76c34
    ADD EDX,EAX                         ; 004ee5d4
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004ee5d6
    MOV ESI,dword ptr [0x01d7a694]      ; 004ee5dd | DAT_01d7a694
    ADD ECX,EAX                         ; 004ee5e3
    MOV dword ptr [0x01ed3198],EDX      ; 004ee5e5 | DAT_01ed3198
    MOV dword ptr [0x01d76c34],ECX      ; 004ee5eb | DAT_01d76c34
    TEST ESI,ESI                        ; 004ee5f1
    JNZ 0x004ee89a                      ; 004ee5f3
        ;   XREF to: 004ee89a (CONDITIONAL_JUMP)  ; LAB_004ee89a
    CALL engine_mini3d.cpp_FUN_004edcc0 ; 004ee5f9
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcc0()
    CALL engine_mini3d.cpp_FUN_004f2430 ; 004ee5fe
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2430()
    CMP dword ptr [0x02cf60c8],0x0      ; 004ee603 | DAT_02cf60c8
    JZ 0x004ee619                       ; 004ee60a
        ;   XREF to: 004ee619 (CONDITIONAL_JUMP)  ; LAB_004ee619
    CMP dword ptr [0x01c6cee8],0x0      ; 004ee60c | DAT_01c6cee8
    JNZ 0x004ee8b6                      ; 004ee613
        ;   XREF to: 004ee8b6 (CONDITIONAL_JUMP)  ; LAB_004ee8b6
    CALL engine_mini3d.cpp_FUN_004ede40 ; 004ee619
        ;   XREF to: 004ede40 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004ede40()
        ;   Label: LAB_004ee619
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004ee61e
    CMP EAX,0x2710                      ; 004ee625
    JLE 0x004ee650                      ; 004ee62a
        ;   XREF to: 004ee650 (CONDITIONAL_JUMP)  ; LAB_004ee650
    PUSH EAX                            ; 004ee62c
    MOV EDX,0x5c8139                    ; 004ee62d | = "..\\engine\\mini3d.cpp"
    MOV ECX,0x844                       ; 004ee632
    PUSH 0x5c814e                       ; 004ee637 | = "CMini3D::polyList - Too many verticie..."
    MOV dword ptr [0x01d71de0],EDX      ; 004ee63c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004ee642 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ee648
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004ee64d
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004ee650
        ;   Label: LAB_004ee650
    MOV EDX,dword ptr [0x01d76f60]      ; 004ee657 | DAT_01d76f60
    MOV ECX,EBX                         ; 004ee65d
    XOR EBP,EBP                         ; 004ee65f
    XOR EBX,EBX                         ; 004ee661
    TEST EDI,EDI                        ; 004ee663
    JLE 0x004ee7d6                      ; 004ee665
        ;   XREF to: 004ee7d6 (CONDITIONAL_JUMP)  ; LAB_004ee7d6
    FLD float ptr [0x01d76cc4]          ; 004ee66b | DAT_01d76cc4
        ;   Label: LAB_004ee66b
    FLD float ptr [ECX]                 ; 004ee671
    FMUL ST1                            ; 004ee673
    FSUB float ptr [0x01d76c64]         ; 004ee675 | DAT_01d76c64
    FMUL float ptr [ECX + 0x8]          ; 004ee67b
    FDIV float ptr [0x01d76c5c]         ; 004ee67e | DAT_01d76c5c
    FSTP float ptr [EDX]                ; 004ee684
    FMUL float ptr [ECX + 0x4]          ; 004ee686
    FSUB float ptr [0x01d76c68]         ; 004ee689 | DAT_01d76c68
    FMUL float ptr [ECX + 0x8]          ; 004ee68f
    FDIV float ptr [0x01d76c60]         ; 004ee692 | DAT_01d76c60
    FSTP float ptr [EDX + 0x4]          ; 004ee698
    MOV EAX,dword ptr [ECX + 0x8]       ; 004ee69b
    MOV dword ptr [EDX + 0x8],EAX       ; 004ee69e
    FLD float ptr [ECX + 0xc]           ; 004ee6a1
    MOV dword ptr [EDX + 0x10],0x0      ; 004ee6a4
    FLD float ptr [EDX]                 ; 004ee6ab
    FXCH                                ; 004ee6ad
    FSTP float ptr [EDX + 0xc]          ; 004ee6af
    FCOMP float ptr [EDX + 0x8]         ; 004ee6b2
    FNSTSW AX                           ; 004ee6b5
    SAHF                                ; 004ee6b7
    JBE 0x004ee6be                      ; 004ee6b8
        ;   XREF to: 004ee6be (CONDITIONAL_JUMP)  ; LAB_004ee6be
    OR byte ptr [EDX + 0x10],0x1        ; 004ee6ba
    FLD float ptr [EDX + 0x8]           ; 004ee6be
        ;   Label: LAB_004ee6be
    FCHS                                ; 004ee6c1
    FCOMP float ptr [EDX]               ; 004ee6c3
    FNSTSW AX                           ; 004ee6c5
    SAHF                                ; 004ee6c7
    JBE 0x004ee6ce                      ; 004ee6c8
        ;   XREF to: 004ee6ce (CONDITIONAL_JUMP)  ; LAB_004ee6ce
    OR byte ptr [EDX + 0x10],0x2        ; 004ee6ca
    FLD float ptr [EDX + 0x4]           ; 004ee6ce
        ;   Label: LAB_004ee6ce
    FCOMP float ptr [EDX + 0x8]         ; 004ee6d1
    FNSTSW AX                           ; 004ee6d4
    SAHF                                ; 004ee6d6
    JBE 0x004ee6dd                      ; 004ee6d7
        ;   XREF to: 004ee6dd (CONDITIONAL_JUMP)  ; LAB_004ee6dd
    OR byte ptr [EDX + 0x10],0x4        ; 004ee6d9
    FLD float ptr [EDX + 0x8]           ; 004ee6dd
        ;   Label: LAB_004ee6dd
    FCHS                                ; 004ee6e0
    FCOMP float ptr [EDX + 0x4]         ; 004ee6e2
    FNSTSW AX                           ; 004ee6e5
    SAHF                                ; 004ee6e7
    JBE 0x004ee6ee                      ; 004ee6e8
        ;   XREF to: 004ee6ee (CONDITIONAL_JUMP)  ; LAB_004ee6ee
    OR byte ptr [EDX + 0x10],0x8        ; 004ee6ea
    FLDZ                                ; 004ee6ee
        ;   Label: LAB_004ee6ee
    FCOMP float ptr [EDX + 0x8]         ; 004ee6f0
    FNSTSW AX                           ; 004ee6f3
    SAHF                                ; 004ee6f5
    JC 0x004ee6fc                       ; 004ee6f6
        ;   XREF to: 004ee6fc (CONDITIONAL_JUMP)  ; LAB_004ee6fc
    OR byte ptr [EDX + 0x10],0x10       ; 004ee6f8
    FLD float ptr [0x01d76cc4]          ; 004ee6fc | DAT_01d76cc4
        ;   Label: LAB_004ee6fc
    FLD float ptr [ECX]                 ; 004ee702
    FMUL ST1                            ; 004ee704
    MOV EAX,dword ptr [EDX + 0x10]      ; 004ee706
    FSTP float ptr [EDX + 0x14]         ; 004ee709
    FMUL float ptr [ECX + 0x4]          ; 004ee70c
    OR EBP,EAX                          ; 004ee70f
    FSTP float ptr [EDX + 0x18]         ; 004ee711
    MOV EAX,dword ptr [ECX + 0x18]      ; 004ee714
    MOV dword ptr [EDX + 0x1c],EAX      ; 004ee717
    MOV EAX,dword ptr [ECX + 0x1c]      ; 004ee71a
    MOV dword ptr [EDX + 0x20],EAX      ; 004ee71d
    MOV EAX,dword ptr [ECX + 0x10]      ; 004ee720
    MOV ESI,EAX                         ; 004ee723
    XOR EDI,EDI                         ; 004ee725
    AND ESI,0xff                        ; 004ee727
    MOV dword ptr [ESP + 0x104],EDI     ; 004ee72d
    MOV dword ptr [ESP + 0x100],ESI     ; 004ee734
    MOV ESI,EAX                         ; 004ee73b
    FILD qword ptr [ESP + 0x100]        ; 004ee73d
    SHR ESI,0x8                         ; 004ee744
    FLD float ptr [0x005c817d]          ; 004ee747 | DAT_005c817d
    FXCH                                ; 004ee74d
    FMUL ST1                            ; 004ee74f
    AND ESI,0xff                        ; 004ee751
    MOV dword ptr [ESP + 0x104],EDI     ; 004ee757
    MOV dword ptr [ESP + 0x100],ESI     ; 004ee75e
    FILD qword ptr [ESP + 0x100]        ; 004ee765
    FMUL ST2                            ; 004ee76c
    MOV dword ptr [ESP + 0x104],EDI     ; 004ee76e
    MOV ESI,EAX                         ; 004ee775
    MOV dword ptr [ESP + 0x10c],EDI     ; 004ee777
    SHR ESI,0x10                        ; 004ee77e
    SHR EAX,0x18                        ; 004ee781
    AND ESI,0xff                        ; 004ee784
    AND EAX,0xff                        ; 004ee78a
    MOV dword ptr [ESP + 0x100],ESI     ; 004ee78f
    MOV dword ptr [ESP + 0x108],EAX     ; 004ee796
    FILD qword ptr [ESP + 0x100]        ; 004ee79d
    FMUL ST3                            ; 004ee7a4
    FILD qword ptr [ESP + 0x108]        ; 004ee7a6
    FMULP ST4                           ; 004ee7ad
    ADD EDX,0x40                        ; 004ee7af
    INC EBX                             ; 004ee7b2
    ADD ECX,0x20                        ; 004ee7b3
    MOV dword ptr [EDX + -0xc],EDI      ; 004ee7b6
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004ee7b9
    FXCH ST2                            ; 004ee7c0
    FSTP float ptr [EDX + -0x1c]        ; 004ee7c2
    FSTP float ptr [EDX + -0x18]        ; 004ee7c5
    FSTP float ptr [EDX + -0x14]        ; 004ee7c8
    FSTP float ptr [EDX + -0x10]        ; 004ee7cb
    CMP EBX,EDI                         ; 004ee7ce
    JL 0x004ee66b                       ; 004ee7d0
        ;   XREF to: 004ee66b (CONDITIONAL_JUMP)  ; LAB_004ee66b
    CMP dword ptr [0x01c6cee8],0x0      ; 004ee7d6 | DAT_01c6cee8
        ;   Label: LAB_004ee7d6
    JNZ 0x004ee8fb                      ; 004ee7dd
        ;   XREF to: 004ee8fb (CONDITIONAL_JUMP)  ; LAB_004ee8fb
    CMP dword ptr [ESP + 0x12c],0x4     ; 004ee7e3
    JNZ 0x004ee8fb                      ; 004ee7eb
        ;   XREF to: 004ee8fb (CONDITIONAL_JUMP)  ; LAB_004ee8fb
    CMP dword ptr [ESP + 0x134],0x2     ; 004ee7f1
    JNZ 0x004ee8fb                      ; 004ee7f9
        ;   XREF to: 004ee8fb (CONDITIONAL_JUMP)  ; LAB_004ee8fb
    MOV EAX,[0x01d7f57c]                ; 004ee7ff | DAT_01d7f57c
    MOV EDX,dword ptr [ESP + 0x130]     ; 004ee804
    MOV dword ptr [ESP + 0x110],EAX     ; 004ee80b
    XOR EAX,EAX                         ; 004ee812
    XOR EBX,EBX                         ; 004ee814
        ;   Label: LAB_004ee814
    MOV BX,word ptr [EDX]               ; 004ee816
    MOV ESI,EBX                         ; 004ee819
    MOV ECX,dword ptr [0x01d76f60]      ; 004ee81b | DAT_01d76f60
    SHL ESI,0x6                         ; 004ee821
    LEA EDI,[ESP + EAX*0x1]             ; 004ee824
    ADD ESI,ECX                         ; 004ee827
    MOV ECX,0x10                        ; 004ee829
    MOVSD.REP ES:EDI,ESI                ; 004ee82e
    ADD EAX,0x40                        ; 004ee830
    MOV CL,0x1                          ; 004ee833
    ADD EDX,0x2                         ; 004ee835
    MOV byte ptr [ESP + EBX*0x1 + 0x110],CL ; 004ee838
    CMP EAX,0xc0                        ; 004ee83f
    JNZ 0x004ee814                      ; 004ee844
        ;   XREF to: 004ee814 (CONDITIONAL_JUMP)  ; LAB_004ee814
    MOV CH,byte ptr [ESP + 0x110]       ; 004ee846
    XOR EAX,EAX                         ; 004ee84d
    TEST CH,CH                          ; 004ee84f
    JZ 0x004ee863                       ; 004ee851
        ;   XREF to: 004ee863 (CONDITIONAL_JUMP)  ; LAB_004ee863
    INC EAX                             ; 004ee853
        ;   Label: LAB_004ee853
    CMP EAX,0x4                         ; 004ee854
    JGE 0x004ee87c                      ; 004ee857
        ;   XREF to: 004ee87c (CONDITIONAL_JUMP)  ; LAB_004ee87c
    CMP byte ptr [ESP + EAX*0x1 + 0x110],0x0 ; 004ee859
    JNZ 0x004ee853                      ; 004ee861
        ;   XREF to: 004ee853 (CONDITIONAL_JUMP)  ; LAB_004ee853
    MOV ECX,0x10                        ; 004ee863
        ;   Label: LAB_004ee863
    MOV ESI,dword ptr [0x01d76f60]      ; 004ee868 | DAT_01d76f60
    SHL EAX,0x6                         ; 004ee86e
    LEA EDI,[ESP + 0xc0]                ; 004ee871
    ADD ESI,EAX                         ; 004ee878
    MOVSD.REP ES:EDI,ESI                ; 004ee87a
    TEST EBP,EBP                        ; 004ee87c
        ;   Label: LAB_004ee87c
    JNZ 0x004ee8e1                      ; 004ee87e
        ;   XREF to: 004ee8e1 (CONDITIONAL_JUMP)  ; LAB_004ee8e1
    PUSH 0x4                            ; 004ee880
    LEA EAX,[ESP + 0x4]                 ; 004ee882
    PUSH EAX                            ; 004ee886
    CALL engine_mini3d.cpp_FUN_004f2090 ; 004ee887
        ;   XREF to: 004f2090 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2090()
    ADD ESP,0x8                         ; 004ee88c
    ADD ESP,0x114                       ; 004ee88f
        ;   Label: LAB_004ee88f
    POP EBP                             ; 004ee895
    POP EDI                             ; 004ee896
    POP ESI                             ; 004ee897
    POP EBX                             ; 004ee898
    RET                                 ; 004ee899
    MOV ESI,dword ptr [ESP + 0x134]     ; 004ee89a
        ;   Label: LAB_004ee89a
    PUSH ESI                            ; 004ee8a1
    MOV EDI,dword ptr [ESP + 0x134]     ; 004ee8a2
    PUSH EDI                            ; 004ee8a9
    PUSH EAX                            ; 004ee8aa
    PUSH EBX                            ; 004ee8ab
    CALL engine_mini3d.cpp_FUN_004f2490 ; 004ee8ac
        ;   XREF to: 004f2490 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2490()
    ADD ESP,0x10                        ; 004ee8b1
    JMP 0x004ee88f                      ; 004ee8b4
        ;   XREF to: 004ee88f (UNCONDITIONAL_JUMP)  ; LAB_004ee88f
    MOV EBP,dword ptr [0x01c6e2b4]      ; 004ee8b6 | DAT_01c6e2b4
        ;   Label: LAB_004ee8b6
    PUSH EBP                            ; 004ee8bc
    MOV EAX,dword ptr [ESP + 0x138]     ; 004ee8bd
    PUSH EAX                            ; 004ee8c4
    MOV EDX,dword ptr [ESP + 0x138]     ; 004ee8c5
    PUSH EDX                            ; 004ee8cc
    MOV ECX,dword ptr [ESP + 0x138]     ; 004ee8cd
    PUSH ECX                            ; 004ee8d4
    PUSH EBX                            ; 004ee8d5
    CALL dword ptr [0x02cf60c8]         ; 004ee8d6 | DAT_02cf60c8
    ADD ESP,0x14                        ; 004ee8dc
    JMP 0x004ee88f                      ; 004ee8df
        ;   XREF to: 004ee88f (UNCONDITIONAL_JUMP)  ; LAB_004ee88f
    PUSH 0x4                            ; 004ee8e1
        ;   Label: LAB_004ee8e1
    LEA EAX,[ESP + 0x4]                 ; 004ee8e3
    PUSH EAX                            ; 004ee8e7
    CALL engine_mini3d.cpp_FUN_004f1190 ; 004ee8e8
        ;   XREF to: 004f1190 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1190()
    ADD ESP,0x8                         ; 004ee8ed
    ADD ESP,0x114                       ; 004ee8f0
    POP EBP                             ; 004ee8f6
    POP EDI                             ; 004ee8f7
    POP ESI                             ; 004ee8f8
    POP EBX                             ; 004ee8f9
    RET                                 ; 004ee8fa
    PUSH EBP                            ; 004ee8fb
        ;   Label: LAB_004ee8fb
    MOV EBX,dword ptr [ESP + 0x138]     ; 004ee8fc
    PUSH EBX                            ; 004ee903
    MOV ESI,dword ptr [ESP + 0x138]     ; 004ee904
    PUSH ESI                            ; 004ee90b
    MOV EDI,dword ptr [ESP + 0x138]     ; 004ee90c
    PUSH EDI                            ; 004ee913
    MOV EBP,dword ptr [0x01d76f60]      ; 004ee914 | DAT_01d76f60
    PUSH EBP                            ; 004ee91a
    CALL engine_mini3d.cpp_FUN_004f12b0 ; 004ee91b
        ;   XREF to: 004f12b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f12b0()
    ADD ESP,0x14                        ; 004ee920
    ADD ESP,0x114                       ; 004ee923
    POP EBP                             ; 004ee929
    POP EDI                             ; 004ee92a
    POP ESI                             ; 004ee92b
    POP EBX                             ; 004ee92c
    RET                                 ; 004ee92d

