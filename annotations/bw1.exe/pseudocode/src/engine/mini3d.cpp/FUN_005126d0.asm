; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005126d0(int param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d224b4
;   undefined4 DAT_01d227e0
;   undefined4 DAT_01d25f14
;   undefined4 DAT_01d25f18
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c83458
;   undefined4 DAT_02c83460
;   undefined4 DAT_02c83464
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_mini3d.cpp_FUN_005124f0
;   engine_mini3d.cpp_FUN_00512670
;   engine_mini3d.cpp_FUN_00513260
;   engine_mini3d.cpp_FUN_00513ca0
;   engine_mini3d.cpp_FUN_005140c0
;   engine_mini3d.cpp_FUN_00514650
;   engine_mini3d.cpp_FUN_005149a0
;   engine_mini3d.cpp_FUN_00514aa0
;   engine_mini3d.cpp_FUN_00515ae0
;   engine_mini3d.cpp_FUN_00516c60
;   engine_mini3d.cpp_FUN_00516cc0
;   engine_mini3d.cpp_FUN_00517660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005126d0
        ;   Label: engine_mini3d.cpp_FUN_005126d0
    PUSH ESI                            ; 005126d1
    PUSH EDI                            ; 005126d2
    PUSH EBP                            ; 005126d3
    SUB ESP,0x8                         ; 005126d4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005126d7
    MOV EDI,dword ptr [ESP + 0x20]      ; 005126db
    MOV EAX,dword ptr [ESP + 0x28]      ; 005126df
    MOV ECX,dword ptr [0x01d224b4]      ; 005126e3 | DAT_01d224b4
    MOV EDX,dword ptr [0x01e7dac8]      ; 005126e9 | DAT_01e7dac8
    MOV ESI,dword ptr [0x01d25f14]      ; 005126ef | DAT_01d25f14
    ADD ECX,EDI                         ; 005126f5
    ADD EDX,EAX                         ; 005126f7
    MOV dword ptr [0x01d224b4],ECX      ; 005126f9 | DAT_01d224b4
    MOV dword ptr [0x01e7dac8],EDX      ; 005126ff | DAT_01e7dac8
    TEST ESI,ESI                        ; 00512705
    JNZ 0x005127c9                      ; 00512707
        ;   XREF to: 005127c9 (CONDITIONAL_JUMP)  ; LAB_005127c9
    CALL engine_mini3d.cpp_FUN_005124f0 ; 0051270d
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005124f0()
    CALL engine_mini3d.cpp_FUN_00516c60 ; 00512712
        ;   XREF to: 00516c60 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00516c60()
    CMP dword ptr [0x02c83458],0x0      ; 00512717 | DAT_02c83458
    JZ 0x0051272d                       ; 0051271e
        ;   XREF to: 0051272d (CONDITIONAL_JUMP)  ; LAB_0051272d
    CMP dword ptr [0x01c50948],0x0      ; 00512720 | DAT_01c50948
    JNZ 0x005127e1                      ; 00512727
        ;   XREF to: 005127e1 (CONDITIONAL_JUMP)  ; LAB_005127e1
    CALL engine_mini3d.cpp_FUN_00512670 ; 0051272d
        ;   XREF to: 00512670 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512670()
        ;   Label: LAB_0051272d
    CMP EDI,0x2710                      ; 00512732
    JLE 0x0051275e                      ; 00512738
        ;   XREF to: 0051275e (CONDITIONAL_JUMP)  ; LAB_0051275e
    PUSH EDI                            ; 0051273a
    MOV EDX,0x5e8cd2                    ; 0051273b
    MOV ECX,0x6c0                       ; 00512740
    PUSH 0x5e8ce7                       ; 00512745
    MOV dword ptr [0x01d1d400],EDX      ; 0051274a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00512750 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00512756
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0051275b
    CALL engine_mini3d.cpp_FUN_00514650 ; 0051275e
        ;   XREF to: 00514650 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00514650()
        ;   Label: LAB_0051275e
    CMP dword ptr [0x02c83460],0x0      ; 00512763 | DAT_02c83460
    JZ 0x00512805                       ; 0051276a
        ;   XREF to: 00512805 (CONDITIONAL_JUMP)  ; LAB_00512805
    CMP dword ptr [0x01c50948],0x0      ; 00512770 | DAT_01c50948
    JZ 0x00512805                       ; 00512777
        ;   XREF to: 00512805 (CONDITIONAL_JUMP)  ; LAB_00512805
    MOV EBP,dword ptr [0x01d227e0]      ; 0051277d | DAT_01d227e0
    XOR ESI,ESI                         ; 00512783
    TEST EDI,EDI                        ; 00512785
    JLE 0x005127a0                      ; 00512787
        ;   XREF to: 005127a0 (CONDITIONAL_JUMP)  ; LAB_005127a0
    PUSH EBX                            ; 00512789
        ;   Label: LAB_00512789
    PUSH EBP                            ; 0051278a
    INC ESI                             ; 0051278b
    CALL engine_mini3d.cpp_FUN_00514aa0 ; 0051278c
        ;   XREF to: 00514aa0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00514aa0()
    ADD EBX,0x20                        ; 00512791
    ADD ESP,0x8                         ; 00512794
    ADD EBP,0x24                        ; 00512797
    CMP ESI,EDI                         ; 0051279a
    JL 0x00512789                       ; 0051279c
        ;   XREF to: 00512789 (CONDITIONAL_JUMP)  ; LAB_00512789
    MOV EAX,EAX                         ; 0051279e
    MOV EBX,dword ptr [0x01c51d14]      ; 005127a0 | DAT_01c51d14
        ;   Label: LAB_005127a0
    PUSH EBX                            ; 005127a6
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005127a7
    PUSH ESI                            ; 005127ab
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005127ac
    PUSH EBP                            ; 005127b0
    PUSH EDI                            ; 005127b1
    MOV EAX,[0x01d227e0]                ; 005127b2 | DAT_01d227e0
    PUSH EAX                            ; 005127b7
    CALL dword ptr [0x02c83460]         ; 005127b8 | DAT_02c83460
    ADD ESP,0x14                        ; 005127be
    ADD ESP,0x8                         ; 005127c1
    POP EBP                             ; 005127c4
    POP EDI                             ; 005127c5
    POP ESI                             ; 005127c6
    POP EBX                             ; 005127c7
    RET                                 ; 005127c8
    PUSH EAX                            ; 005127c9
        ;   Label: LAB_005127c9
    MOV ECX,dword ptr [ESP + 0x28]      ; 005127ca
    PUSH ECX                            ; 005127ce
    PUSH EDI                            ; 005127cf
    PUSH EBX                            ; 005127d0
    CALL engine_mini3d.cpp_FUN_00516cc0 ; 005127d1
        ;   XREF to: 00516cc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00516cc0()
    ADD ESP,0x10                        ; 005127d6
    ADD ESP,0x8                         ; 005127d9
    POP EBP                             ; 005127dc
    POP EDI                             ; 005127dd
    POP ESI                             ; 005127de
    POP EBX                             ; 005127df
    RET                                 ; 005127e0
    MOV ESI,dword ptr [0x01c51d14]      ; 005127e1 | DAT_01c51d14
        ;   Label: LAB_005127e1
    PUSH ESI                            ; 005127e7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005127e8
    PUSH EBP                            ; 005127ec
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005127ed
    PUSH EAX                            ; 005127f1
    PUSH EDI                            ; 005127f2
    PUSH EBX                            ; 005127f3
    CALL dword ptr [0x02c83458]         ; 005127f4 | DAT_02c83458
    ADD ESP,0x14                        ; 005127fa
    ADD ESP,0x8                         ; 005127fd
    POP EBP                             ; 00512800
    POP EDI                             ; 00512801
    POP ESI                             ; 00512802
    POP EBX                             ; 00512803
    RET                                 ; 00512804
    CMP dword ptr [0x02c83464],0x0      ; 00512805 | DAT_02c83464
        ;   Label: LAB_00512805
    JZ 0x0051286a                       ; 0051280c
        ;   XREF to: 0051286a (CONDITIONAL_JUMP)  ; LAB_0051286a
    CMP dword ptr [0x01c50948],0x0      ; 0051280e | DAT_01c50948
    JZ 0x0051286a                       ; 00512815
        ;   XREF to: 0051286a (CONDITIONAL_JUMP)  ; LAB_0051286a
    MOV EBP,dword ptr [0x01d227e0]      ; 00512817 | DAT_01d227e0
    XOR ESI,ESI                         ; 0051281d
    TEST EDI,EDI                        ; 0051281f
    JLE 0x00512840                      ; 00512821
        ;   XREF to: 00512840 (CONDITIONAL_JUMP)  ; LAB_00512840
    PUSH EBX                            ; 00512823
        ;   Label: LAB_00512823
    PUSH EBP                            ; 00512824
    INC ESI                             ; 00512825
    CALL engine_mini3d.cpp_FUN_005149a0 ; 00512826
        ;   XREF to: 005149a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005149a0()
    ADD EBX,0x20                        ; 0051282b
    ADD ESP,0x8                         ; 0051282e
    ADD EBP,0x20                        ; 00512831
    CMP ESI,EDI                         ; 00512834
    JL 0x00512823                       ; 00512836
        ;   XREF to: 00512823 (CONDITIONAL_JUMP)  ; LAB_00512823
    LEA EAX,[EAX]                       ; 00512838
    MOV EDX,EDX                         ; 0051283e
    MOV EBP,dword ptr [0x01c51d14]      ; 00512840 | DAT_01c51d14
        ;   Label: LAB_00512840
    PUSH EBP                            ; 00512846
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00512847
    PUSH EAX                            ; 0051284b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0051284c
    PUSH EDX                            ; 00512850
    PUSH EDI                            ; 00512851
    MOV ECX,dword ptr [0x01d227e0]      ; 00512852 | DAT_01d227e0
    PUSH ECX                            ; 00512858
    CALL dword ptr [0x02c83464]         ; 00512859 | DAT_02c83464
    ADD ESP,0x14                        ; 0051285f
    ADD ESP,0x8                         ; 00512862
    POP EBP                             ; 00512865
    POP EDI                             ; 00512866
    POP ESI                             ; 00512867
    POP EBX                             ; 00512868
    RET                                 ; 00512869
    MOV ESI,EBX                         ; 0051286a
        ;   Label: LAB_0051286a
    XOR ECX,ECX                         ; 0051286c
    XOR EBP,EBP                         ; 0051286e
    MOV EBX,dword ptr [0x01d227e0]      ; 00512870 | DAT_01d227e0
    MOV dword ptr [ESP],ECX             ; 00512876
    TEST EDI,EDI                        ; 00512879
    JLE 0x005128e0                      ; 0051287b
        ;   XREF to: 005128e0 (CONDITIONAL_JUMP)  ; LAB_005128e0
    LEA EAX,[EBX + 0x24]                ; 0051287d
    MOV dword ptr [ESP + 0x4],EAX       ; 00512880
    PUSH EBX                            ; 00512884
        ;   Label: LAB_00512884
    PUSH ESI                            ; 00512885
    CALL engine_mini3d.cpp_FUN_00513260 ; 00512886
        ;   XREF to: 00513260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00513260()
    ADD ESP,0x8                         ; 0051288b
    FLD float ptr [ESI + 0x18]          ; 0051288e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00512891
    FSTP float ptr [EBX + 0x1c]         ; 00512895
    PUSH EAX                            ; 00512898
    FLD float ptr [ESI + 0x1c]          ; 00512899
    PUSH ESI                            ; 0051289c
    FSTP float ptr [EBX + 0x20]         ; 0051289d
    CALL engine_mini3d.cpp_FUN_00513ca0 ; 005128a0
        ;   XREF to: 00513ca0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00513ca0()
    ADD ESP,0x8                         ; 005128a5
    PUSH EBX                            ; 005128a8
    INC EBP                             ; 005128a9
    ADD ESI,0x20                        ; 005128aa
    CALL engine_mini3d.cpp_FUN_005140c0 ; 005128ad
        ;   XREF to: 005140c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005140c0()
    ADD ESP,0x4                         ; 005128b2
    MOV EAX,dword ptr [EBX + 0x10]      ; 005128b5
    ADD EBX,0x40                        ; 005128b8
    MOV EDX,dword ptr [ESP]             ; 005128bb
    MOV ECX,dword ptr [ESP + 0x4]       ; 005128be
    OR EDX,EAX                          ; 005128c2
    ADD ECX,0x40                        ; 005128c4
    MOV dword ptr [ESP],EDX             ; 005128c7
    MOV dword ptr [ESP + 0x4],ECX       ; 005128ca
    CMP EBP,EDI                         ; 005128ce
    JL 0x00512884                       ; 005128d0
        ;   XREF to: 00512884 (CONDITIONAL_JUMP)  ; LAB_00512884
    LEA EAX,[EAX]                       ; 005128d2
    LEA EDX,[EDX]                       ; 005128d8
    MOV EAX,EAX                         ; 005128de
    CMP dword ptr [0x01d25f18],0x0      ; 005128e0 | DAT_01d25f18
        ;   Label: LAB_005128e0
    JZ 0x0051290b                       ; 005128e7
        ;   XREF to: 0051290b (CONDITIONAL_JUMP)  ; LAB_0051290b
    MOV ECX,dword ptr [ESP + 0x28]      ; 005128e9
    PUSH ECX                            ; 005128ed
    MOV EBX,dword ptr [ESP + 0x28]      ; 005128ee
    PUSH EBX                            ; 005128f2
    PUSH EDI                            ; 005128f3
    MOV ESI,dword ptr [0x01d227e0]      ; 005128f4 | DAT_01d227e0
    PUSH ESI                            ; 005128fa
    CALL engine_mini3d.cpp_FUN_00517660 ; 005128fb
        ;   XREF to: 00517660 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517660()
    ADD ESP,0x10                        ; 00512900
    ADD ESP,0x8                         ; 00512903
    POP EBP                             ; 00512906
    POP EDI                             ; 00512907
    POP ESI                             ; 00512908
    POP EBX                             ; 00512909
    RET                                 ; 0051290a
    MOV ESI,dword ptr [ESP]             ; 0051290b
        ;   Label: LAB_0051290b
    PUSH ESI                            ; 0051290e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051290f
    PUSH EBP                            ; 00512913
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00512914
    PUSH EAX                            ; 00512918
    PUSH EDI                            ; 00512919
    MOV EDX,dword ptr [0x01d227e0]      ; 0051291a | DAT_01d227e0
    PUSH EDX                            ; 00512920
    CALL engine_mini3d.cpp_FUN_00515ae0 ; 00512921
        ;   XREF to: 00515ae0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515ae0()
    ADD ESP,0x14                        ; 00512926
    ADD ESP,0x8                         ; 00512929
    POP EBP                             ; 0051292c
    POP EDI                             ; 0051292d
    POP ESI                             ; 0051292e
    POP EBX                             ; 0051292f
    RET                                 ; 00512930

