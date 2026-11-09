; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_asgaya_cpp_FUN_005a17e0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005da636
;   undefined4 DAT_005da63e
;   undefined4 DAT_005da646
;   undefined4 DAT_005da64e
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_motion.cpp_FUN_004fcdc0
;   core_skeleton.cpp_FUN_0054e3a0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a17e0
        ;   Label: core_asgaya.cpp_FUN_005a17e0
    PUSH ESI                            ; 005a17e1
    PUSH EDI                            ; 005a17e2
    PUSH EBP                            ; 005a17e3
    MOV EBP,ESP                         ; 005a17e4
    SUB ESP,0x30                        ; 005a17e6
    AND ESP,0xfffffff8                  ; 005a17e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a17ec
    CMP dword ptr [EBX + 0x33fa8],0x0   ; 005a17ef
    JNZ 0x005a194e                      ; 005a17f6
        ;   XREF to: 005a194e (CONDITIONAL_JUMP)  ; LAB_005a194e
    FLD float ptr [EBX + 0x33fc8]       ; 005a17fc
    FLDZ                                ; 005a1802
    FCOMPP                              ; 005a1804
    FNSTSW AX                           ; 005a1806
    SAHF                                ; 005a1808
    JNC 0x005a187b                      ; 005a1809
        ;   XREF to: 005a187b (CONDITIONAL_JUMP)  ; LAB_005a187b
    CMP dword ptr [EBX + 0x33fc4],0x0   ; 005a180b
    JZ 0x005a1957                       ; 005a1812
        ;   XREF to: 005a1957 (CONDITIONAL_JUMP)  ; LAB_005a1957
    FLD float ptr [EBX + 0x33fc8]       ; 005a1818
    FDIV float ptr [EBX + 0x206c4]      ; 005a181e
    FLD1                                ; 005a1824
    FSUBRP                              ; 005a1826
    FMUL double ptr [0x005da63e]        ; 005a1828 | DAT_005da63e
    CALL crt_math.c_round_FUN_005a3120  ; 005a182e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
        ;   Label: LAB_005a182e
    FISTP dword ptr [EBX + 0x33fcc]     ; 005a1833
    MOV ESI,dword ptr [EBX + 0x2f08]    ; 005a1839
    XOR EDX,EDX                         ; 005a183f
    TEST ESI,ESI                        ; 005a1841
    JLE 0x005a187b                      ; 005a1843
        ;   XREF to: 005a187b (CONDITIONAL_JUMP)  ; LAB_005a187b
    FLD double ptr [0x005da646]         ; 005a1845 | DAT_005da646
    FLD double ptr [0x005da64e]         ; 005a184b | DAT_005da64e
    MOV EAX,EBX                         ; 005a1851
    FILD dword ptr [EBX + 0x33fcc]      ; 005a1853
        ;   Label: LAB_005a1853
    FADD ST0,ST1                        ; 005a1859
    FMUL ST2                            ; 005a185b
    MOV ECX,dword ptr [EAX + 0x309c]    ; 005a185d
    INC EDX                             ; 005a1863
    FSTP float ptr [ECX + 0x37b18]      ; 005a1864
    MOV EDI,dword ptr [EBX + 0x2f08]    ; 005a186a
    ADD EAX,0x4                         ; 005a1870
    CMP EDX,EDI                         ; 005a1873
    JL 0x005a1853                       ; 005a1875
        ;   XREF to: 005a1853 (CONDITIONAL_JUMP)  ; LAB_005a1853
    FSTP ST0                            ; 005a1877
    FSTP ST0                            ; 005a1879
    PUSH EBX                            ; 005a187b
        ;   Label: LAB_005a187b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005a187c
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a1881
    PUSH 0x0                            ; 005a1884
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a1886
    PUSH EBX                            ; 005a188c
    LEA ESI,[ESP + 0x8]                 ; 005a188d
    LEA EDI,[ESP + 0x20]                ; 005a1891
    CALL dword ptr [EAX + 0x1c]         ; 005a1895
    MOV ECX,0x6                         ; 005a1898
    ADD ESP,0x4                         ; 005a189d
    LEA EAX,[ESP + 0x1c]                ; 005a18a0
    LEA ESI,[ESP + 0x4]                 ; 005a18a4
    PUSH EAX                            ; 005a18a8
    MOVSD.REP ES:EDI,ESI                ; 005a18a9
    CALL core_box.cpp_FUN_0041daf0      ; 005a18ab
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005a18b0
    TEST EAX,EAX                        ; 005a18b3
    JZ 0x005a1939                       ; 005a18b5
        ;   XREF to: 005a1939 (CONDITIONAL_JUMP)  ; LAB_005a1939
    MOV EAX,dword ptr [EBX + 0x33fcc]   ; 005a18bb
    PUSH EAX                            ; 005a18c1
    MOV EDX,dword ptr [0x005f2afc]      ; 005a18c2 | DAT_005f2afc
    PUSH EDX                            ; 005a18c8 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 005a18c9
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 005a18d3
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005a18d8
    PUSH 0x0                            ; 005a18db
    MOV ECX,dword ptr [0x005f2afc]      ; 005a18dd | DAT_005f2afc
    PUSH ECX                            ; 005a18e3 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 005a18e4
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005a18e9
    PUSH 0x1                            ; 005a18ec
    MOV ESI,dword ptr [0x005f2afc]      ; 005a18ee | DAT_005f2afc
    PUSH ESI                            ; 005a18f4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 005a18f5
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 005a18fa
    PUSH 0x0                            ; 005a18fd
    PUSH 0x1                            ; 005a18ff
    PUSH 0x2e7                          ; 005a1901
    PUSH -0x1                           ; 005a1906
    LEA ESI,[EBX + 0x158]               ; 005a1908
    PUSH ESI                            ; 005a190e
    CALL core_skeleton.cpp_FUN_0054e3a0 ; 005a190f
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 005a1914
    MOV EDI,dword ptr [0x005f2afc]      ; 005a1917 | DAT_005f2afc
    PUSH EDI                            ; 005a191d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 005a191e
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    MOV EAX,[0x01d8e40c]                ; 005a1923 | DAT_01d8e40c
    ADD ESP,0x4                         ; 005a1928
    TEST EAX,EAX                        ; 005a192b
    JZ 0x005a1939                       ; 005a192d
        ;   XREF to: 005a1939 (CONDITIONAL_JUMP)  ; LAB_005a1939
    PUSH EBX                            ; 005a192f
    PUSH ESI                            ; 005a1930
    CALL core_motion.cpp_FUN_004fcdc0   ; 005a1931
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcdc0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005a1936
    PUSH EBX                            ; 005a1939
        ;   Label: LAB_005a1939
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005a193a
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 005a193f
    ADD ESP,0x4                         ; 005a1944
    MOV ESP,EBP                         ; 005a1947
    POP EBP                             ; 005a1949
    POP EDI                             ; 005a194a
    POP ESI                             ; 005a194b
    POP EBX                             ; 005a194c
    RET                                 ; 005a194d
    XOR EAX,EAX                         ; 005a194e
        ;   Label: LAB_005a194e
    MOV ESP,EBP                         ; 005a1950
    POP EBP                             ; 005a1952
    POP EDI                             ; 005a1953
    POP ESI                             ; 005a1954
    POP EBX                             ; 005a1955
    RET                                 ; 005a1956
    FLD float ptr [EBX + 0x33fc8]       ; 005a1957
        ;   Label: LAB_005a1957
    FDIV float ptr [EBX + 0x206c4]      ; 005a195d
    FMUL float ptr [0x005da636]         ; 005a1963 | DAT_005da636
    JMP 0x005a182e                      ; 005a1969
        ;   XREF to: 005a182e (UNCONDITIONAL_JUMP)  ; LAB_005a182e

