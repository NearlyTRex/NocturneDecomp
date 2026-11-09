; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_00477540(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x138]:1  local_138
;
; XREF[3]:
;   core_door.cpp_FUN_004774f0 at 00477518
;   core_door.cpp_FUN_00477ab0 at 00477b88
;   core_door.cpp_FUN_00478af0 at 00478b0f
;
; Referenced Globals:
;   void* switchdataD_0047752c = 00477588
;   TerminatedCString s_core_door_cpp_005da7ca
;   TerminatedCString s_CDoor_reposition_Unknown_005da7db
;   undefined4 DAT_005da7fc
;   undefined4 DAT_005da804
;   undefined4 DAT_005da80c
;   undefined4 DAT_005da814
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc00
;   core_dirmat.cpp_FUN_0045f690
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477540
        ;   Label: core_door.cpp_FUN_00477540
    PUSH ESI                            ; 00477541
    PUSH EDI                            ; 00477542
    PUSH EBP                            ; 00477543
    MOV EBP,ESP                         ; 00477544
    SUB ESP,0x150                       ; 00477546
    AND ESP,0xfffffff8                  ; 0047754c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047754f
    PUSH EBX                            ; 00477552
    MOV EAX,dword ptr [EBX + 0x154]     ; 00477553
    LEA ESI,[ESP + 0x2c]                ; 00477559
    LEA EDI,[ESP + 0x14]                ; 0047755d
    CALL dword ptr [EAX + 0x1c]         ; 00477561
    MOV ECX,0x6                         ; 00477564
    LEA ESI,[ESP + 0x2c]                ; 00477569
    ADD ESP,0x4                         ; 0047756d
    MOVSD.REP ES:EDI,ESI                ; 00477570
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 00477572
    CMP EAX,0x3                         ; 00477578
    JA 0x004779a4                       ; 0047757b
        ;   XREF to: 004779a4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x47752c]  ; 00477581 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x20]                ; 00477588
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x30],0x0      ; 0047758b
    LEA EDX,[EBX + 0x994]               ; 00477592
    MOV dword ptr [EBX + 0x38],0x0      ; 00477598
    MOV ECX,dword ptr [EDX]             ; 0047759f
    MOV dword ptr [EAX],ECX             ; 004775a1
    MOV ECX,dword ptr [EDX + 0x4]       ; 004775a3
    MOV dword ptr [EAX + 0x4],ECX       ; 004775a6
    MOV ECX,dword ptr [EDX + 0x8]       ; 004775a9
    MOV dword ptr [EAX + 0x8],ECX       ; 004775ac
    CMP dword ptr [EBX + 0x2e4],0x0     ; 004775af
    JNZ 0x004776b8                      ; 004775b6
        ;   XREF to: 004776b8 (CONDITIONAL_JUMP)  ; LAB_004776b8
    FLD float ptr [EBX + 0x9ac]         ; 004775bc
    FMUL double ptr [0x005da7fc]        ; 004775c2 | DAT_005da7fc
    FADD float ptr [EBX + 0x9a4]        ; 004775c8
    FSTP float ptr [EBX + 0x34]         ; 004775ce
        ;   Label: LAB_004775ce
    PUSH EBX                            ; 004775d1
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004775d2
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004775d7
    FLD float ptr [ESP + 0x1c]          ; 004775da
    FST double ptr [ESP + 0x8]          ; 004775de
    FABS                                ; 004775e2
    FLD float ptr [ESP + 0x10]          ; 004775e4
    FST double ptr [ESP]                ; 004775e8
    FABS                                ; 004775eb
    FCOMPP                              ; 004775ed
    FNSTSW AX                           ; 004775ef
    SAHF                                ; 004775f1
    JBE 0x004776cf                      ; 004775f2
        ;   XREF to: 004776cf (CONDITIONAL_JUMP)  ; LAB_004776cf
    FLD double ptr [ESP]                ; 004775f8
    FADD double ptr [0x005da814]        ; 004775fb | DAT_005da814
    FSTP float ptr [EBX + 0x9bc]        ; 00477601
        ;   Label: LAB_00477601
    LEA EAX,[EBX + 0x9bc]               ; 00477607
    LEA ESI,[ESP + 0x118]               ; 0047760d
    PUSH EAX                            ; 00477614
    LEA EDI,[ESP + 0xe0]                ; 00477615
    MOV dword ptr [EBX + 0x9c0],0x40600000 ; 0047761c
    PUSH EBX                            ; 00477626
    MOV dword ptr [EBX + 0x9c4],0x0     ; 00477627
    MOV dword ptr [ESP + 0x150],EAX     ; 00477631
    CALL core_actor.cpp_FUN_00408b40    ; 00477638
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x120]               ; 0047763d
    ADD ESP,0x8                         ; 00477644
    MOVSD ES:EDI,ESI                    ; 00477647
    MOVSD ES:EDI,ESI                    ; 00477648
    MOVSD ES:EDI,ESI                    ; 00477649
    LEA EAX,[ESP + 0xdc]                ; 0047764a
    MOV EDI,dword ptr [ESP + 0x148]     ; 00477651
    CMP EAX,EDI                         ; 00477658
    JZ 0x00477679                       ; 0047765a
        ;   XREF to: 00477679 (CONDITIONAL_JUMP)  ; LAB_00477679
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0047765c
    MOV dword ptr [EDI],EAX             ; 00477663
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00477665
    MOV dword ptr [EDI + 0x4],EAX       ; 0047766c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0047766f
    MOV dword ptr [EDI + 0x8],EAX       ; 00477676
    LEA EAX,[EBX + 0x9e4]               ; 00477679
        ;   Label: LAB_00477679
    PUSH EAX                            ; 0047767f
    MOV EAX,[0x0061b4d0]                ; 00477680 | DAT_0061b4d0
    PUSH EAX                            ; 00477685
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00477686
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0047768b
    TEST EAX,EAX                        ; 0047768e
    JZ 0x0047769e                       ; 00477690
        ;   XREF to: 0047769e (CONDITIONAL_JUMP)  ; LAB_0047769e
    MOV EAX,dword ptr [EBX + 0x9e0]     ; 00477692
    MOV dword ptr [EBX + 0x9cc],EAX     ; 00477698
    FLD float ptr [EBX + 0x9cc]         ; 0047769e
        ;   Label: LAB_0047769e
    FLDZ                                ; 004776a4
    FCOMPP                              ; 004776a6
    FNSTSW AX                           ; 004776a8
    SAHF                                ; 004776aa
    JC 0x004779cc                       ; 004776ab
        ;   XREF to: 004779cc (CONDITIONAL_JUMP)  ; LAB_004779cc
    MOV ESP,EBP                         ; 004776b1
    POP EBP                             ; 004776b3
    POP EDI                             ; 004776b4
    POP ESI                             ; 004776b5
    POP EBX                             ; 004776b6
    RET                                 ; 004776b7
    FLD float ptr [EBX + 0x9ac]         ; 004776b8
        ;   Label: LAB_004776b8
    FMUL double ptr [0x005da7fc]        ; 004776be | DAT_005da7fc
    FSUBR float ptr [EBX + 0x9a4]       ; 004776c4
    JMP 0x004775ce                      ; 004776ca
        ;   XREF to: 004775ce (UNCONDITIONAL_JUMP)  ; LAB_004775ce
    FLD double ptr [ESP + 0x8]          ; 004776cf
        ;   Label: LAB_004776cf
    FADD double ptr [0x005da80c]        ; 004776d3 | DAT_005da80c
    JMP 0x00477601                      ; 004776d9
        ;   XREF to: 00477601 (UNCONDITIONAL_JUMP)  ; LAB_00477601
    FLD float ptr [EBX + 0x998]         ; 004776de
        ;   Label: caseD_1
    FADD float ptr [EBX + 0x9ac]        ; 004776e4
    MOV EAX,0x40600000                  ; 004776ea
    FSTP float ptr [EBX + 0x24]         ; 004776ef
    MOV dword ptr [ESP + 0xa4],EAX      ; 004776f2
    LEA EAX,[ESP + 0xa0]                ; 004776f9
    XOR EDI,EDI                         ; 00477700
    PUSH EAX                            ; 00477702
    LEA ESI,[ESP + 0x134]               ; 00477703
    MOV dword ptr [ESP + 0xa4],EDI      ; 0047770a
    PUSH EBX                            ; 00477711
    MOV dword ptr [ESP + 0xb0],EDI      ; 00477712
    LEA EDI,[ESP + 0xd8]                ; 00477719
    CALL core_actor.cpp_FUN_00408b40    ; 00477720
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x138]               ; 00477725
    LEA EAX,[ESP + 0xd8]                ; 0047772c
    ADD ESP,0x8                         ; 00477733
    LEA EDX,[EBX + 0x9bc]               ; 00477736
    MOVSD ES:EDI,ESI                    ; 0047773c
    MOVSD ES:EDI,ESI                    ; 0047773d
    MOVSD ES:EDI,ESI                    ; 0047773e
    CMP EDX,EAX                         ; 0047773f
    JZ 0x00477679                       ; 00477741
        ;   XREF to: 00477679 (CONDITIONAL_JUMP)  ; LAB_00477679
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00477747
    MOV dword ptr [EDX],EAX             ; 0047774e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00477750
    MOV dword ptr [EDX + 0x4],EAX       ; 00477757
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0047775a
    MOV dword ptr [EDX + 0x8],EAX       ; 00477761
    JMP 0x00477679                      ; 00477764
        ;   XREF to: 00477679 (UNCONDITIONAL_JUMP)  ; LAB_00477679
    CMP dword ptr [EBX + 0x2dc],0x1     ; 00477769
        ;   Label: caseD_2
    JZ 0x0047788c                       ; 00477770
        ;   XREF to: 0047788c (CONDITIONAL_JUMP)  ; LAB_0047788c
    FLD float ptr [EBX + 0x9ac]         ; 00477776
    FCHS                                ; 0047777c
    FSTP float ptr [ESP + 0x40]         ; 0047777e
    LEA EAX,[ESP + 0x40]                ; 00477782
        ;   Label: LAB_00477782
    LEA ESI,[ESP + 0x4c]                ; 00477786
    XOR EDI,EDI                         ; 0047778a
    PUSH EAX                            ; 0047778c
    LEA EAX,[EBX + 0x3c]                ; 0047778d
    MOV dword ptr [ESP + 0x48],EDI      ; 00477790
    PUSH EAX                            ; 00477794
    MOV dword ptr [ESP + 0x50],EDI      ; 00477795
    LEA EDI,[ESP + 0x60]                ; 00477799
    CALL core_dirmat.cpp_FUN_0045f690   ; 0047779d
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x54]                ; 004777a2
    ADD ESP,0x8                         ; 004777a6
    LEA EAX,[EBX + 0x994]               ; 004777a9
    MOVSD ES:EDI,ESI                    ; 004777af
    MOVSD ES:EDI,ESI                    ; 004777b0
    MOVSD ES:EDI,ESI                    ; 004777b1
    FLD float ptr [EAX]                 ; 004777b2
    FLD float ptr [EAX + 0x4]           ; 004777b4
    FLD float ptr [EAX + 0x8]           ; 004777b7
    LEA EDI,[ESP + 0xac]                ; 004777ba
    LEA ESI,[ESP + 0x94]                ; 004777c1
    FXCH ST2                            ; 004777c8
    FADD float ptr [ESP + 0x58]         ; 004777ca
    FXCH                                ; 004777ce
    FADD float ptr [ESP + 0x5c]         ; 004777d0
    FXCH ST2                            ; 004777d4
    FADD float ptr [ESP + 0x60]         ; 004777d6
    FXCH                                ; 004777da
    FSTP float ptr [ESP + 0x94]         ; 004777dc
    FXCH                                ; 004777e3
    FSTP float ptr [ESP + 0x98]         ; 004777e5
    FSTP float ptr [ESP + 0x9c]         ; 004777ec
    MOVSD ES:EDI,ESI                    ; 004777f3
    MOVSD ES:EDI,ESI                    ; 004777f4
    MOVSD ES:EDI,ESI                    ; 004777f5
    LEA EDX,[EBX + 0x20]                ; 004777f6
    MOV EAX,dword ptr [ESP + 0xac]      ; 004777f9
    MOV dword ptr [EDX],EAX             ; 00477800
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00477802
    MOV ECX,0x40600000                  ; 00477809
    MOV dword ptr [EDX + 0x4],EAX       ; 0047780e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00477811
    LEA ESI,[ESP + 0x70]                ; 00477818
    MOV dword ptr [EDX + 0x8],EAX       ; 0047781c
    LEA EAX,[ESP + 0xf4]                ; 0047781f
    LEA EDI,[ESP + 0x88]                ; 00477826
    PUSH EAX                            ; 0047782d
    MOV dword ptr [ESP + 0xfc],ECX      ; 0047782e
    XOR EDX,EDX                         ; 00477835
    PUSH EBX                            ; 00477837
    MOV dword ptr [ESP + 0xfc],EDX      ; 00477838
    MOV dword ptr [ESP + 0x104],EDX     ; 0047783f
    CALL core_actor.cpp_FUN_00408b40    ; 00477846
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x78]                ; 0047784b
    LEA EAX,[ESP + 0x90]                ; 0047784f
    ADD ESP,0x8                         ; 00477856
    LEA EDX,[EBX + 0x9bc]               ; 00477859
    MOVSD ES:EDI,ESI                    ; 0047785f
    MOVSD ES:EDI,ESI                    ; 00477860
    MOVSD ES:EDI,ESI                    ; 00477861
    CMP EDX,EAX                         ; 00477862
    JZ 0x00477679                       ; 00477864
        ;   XREF to: 00477679 (CONDITIONAL_JUMP)  ; LAB_00477679
    MOV EAX,dword ptr [ESP + 0x88]      ; 0047786a
    MOV dword ptr [EDX],EAX             ; 00477871
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00477873
    MOV dword ptr [EDX + 0x4],EAX       ; 0047787a
    MOV EAX,dword ptr [ESP + 0x90]      ; 0047787d
    MOV dword ptr [EDX + 0x8],EAX       ; 00477884
    JMP 0x00477679                      ; 00477887
        ;   XREF to: 00477679 (UNCONDITIONAL_JUMP)  ; LAB_00477679
    MOV EAX,dword ptr [EBX + 0x9ac]     ; 0047788c
        ;   Label: LAB_0047788c
    MOV dword ptr [ESP + 0x40],EAX      ; 00477892
    JMP 0x00477782                      ; 00477896
        ;   XREF to: 00477782 (UNCONDITIONAL_JUMP)  ; LAB_00477782
    FLD float ptr [EBX + 0x9ac]         ; 0047789b
        ;   Label: caseD_3
    FMUL double ptr [0x005da7fc]        ; 004778a1 | DAT_005da7fc
    LEA EDI,[ESP + 0xb8]                ; 004778a7
    PUSH EBX                            ; 004778ae
    FSTP float ptr [EBX + 0x30]         ; 004778af
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004778b2
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004778b7
    LEA ESI,[ESP + 0xc4]                ; 004778ba
    FLD float ptr [ESP + 0x10]          ; 004778c1
    FLD float ptr [ESP + 0x14]          ; 004778c5
    FLD float ptr [ESP + 0x18]          ; 004778c9
    FXCH ST2                            ; 004778cd
    FADD float ptr [ESP + 0x1c]         ; 004778cf
    FXCH                                ; 004778d3
    FADD float ptr [ESP + 0x20]         ; 004778d5
    FXCH ST2                            ; 004778d9
    FADD float ptr [ESP + 0x24]         ; 004778db
    FXCH                                ; 004778df
    FSTP float ptr [ESP + 0xc4]         ; 004778e1
    FXCH                                ; 004778e8
    FSTP float ptr [ESP + 0xc8]         ; 004778ea
    FSTP float ptr [ESP + 0xcc]         ; 004778f1
    MOVSD ES:EDI,ESI                    ; 004778f8
    MOVSD ES:EDI,ESI                    ; 004778f9
    MOVSD ES:EDI,ESI                    ; 004778fa
    FLD float ptr [0x005da804]          ; 004778fb | DAT_005da804
    FLD float ptr [ESP + 0xb8]          ; 00477901
    FMUL ST1                            ; 00477908
    FLD float ptr [ESP + 0xbc]          ; 0047790a
    FMUL ST2                            ; 00477911
    LEA EAX,[ESP + 0x100]               ; 00477913
    FLD float ptr [ESP + 0xc0]          ; 0047791a
    FMULP ST3                           ; 00477921
    PUSH EAX                            ; 00477923
    LEA EDI,[ESP + 0x104]               ; 00477924
    LEA ESI,[ESP + 0x80]                ; 0047792b
    FXCH                                ; 00477932
    FSTP float ptr [ESP + 0x80]         ; 00477934
    FSTP float ptr [ESP + 0x84]         ; 0047793b
    FSTP float ptr [ESP + 0x88]         ; 00477942
    MOVSD ES:EDI,ESI                    ; 00477949
    MOVSD ES:EDI,ESI                    ; 0047794a
    MOVSD ES:EDI,ESI                    ; 0047794b
    PUSH EBX                            ; 0047794c
    LEA ESI,[ESP + 0x114]               ; 0047794d
    LEA EDI,[ESP + 0x144]               ; 00477954
    CALL core_actor.cpp_FUN_00408b40    ; 0047795b
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x114]               ; 00477960
    LEA EAX,[ESP + 0x144]               ; 00477967
    ADD ESP,0x8                         ; 0047796e
    LEA EDX,[EBX + 0x9bc]               ; 00477971
    MOVSD ES:EDI,ESI                    ; 00477977
    MOVSD ES:EDI,ESI                    ; 00477978
    MOVSD ES:EDI,ESI                    ; 00477979
    CMP EDX,EAX                         ; 0047797a
    JZ 0x00477679                       ; 0047797c
        ;   XREF to: 00477679 (CONDITIONAL_JUMP)  ; LAB_00477679
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00477982
    MOV dword ptr [EDX],EAX             ; 00477989
    MOV EAX,dword ptr [ESP + 0x140]     ; 0047798b
    MOV dword ptr [EDX + 0x4],EAX       ; 00477992
    MOV EAX,dword ptr [ESP + 0x144]     ; 00477995
    MOV dword ptr [EDX + 0x8],EAX       ; 0047799c
    JMP 0x00477679                      ; 0047799f
        ;   XREF to: 00477679 (UNCONDITIONAL_JUMP)  ; LAB_00477679
    MOV EDX,0x5da7ca                    ; 004779a4 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x117                       ; 004779a9
    PUSH 0x5da7db                       ; 004779ae | = "CDoor::reposition - Unknown type"
    MOV dword ptr [0x01d1d400],EDX      ; 004779b3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004779b9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004779bf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004779c4
    JMP 0x00477679                      ; 004779c7
        ;   XREF to: 00477679 (UNCONDITIONAL_JUMP)  ; LAB_00477679
    PUSH dword ptr [EBX + 0x9cc]        ; 004779cc
        ;   Label: LAB_004779cc
    FLD float ptr [EBX + 0x9cc]         ; 004779d2
    SUB ESP,0x4                         ; 004779d8
    FCHS                                ; 004779db
    FSTP float ptr [ESP]                ; 004779dd
    CALL core_actor.cpp_FUN_0040cc00    ; 004779e0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x154],EAX     ; 004779e5
    XOR EDX,EDX                         ; 004779ec
    FLD float ptr [ESP + 0x154]         ; 004779ee
    ADD ESP,0x8                         ; 004779f5
    MOV dword ptr [ESP + 0x68],EDX      ; 004779f8
    FSTP float ptr [ESP + 0x64]         ; 004779fc
    PUSH dword ptr [EBX + 0x9cc]        ; 00477a00
    FLD float ptr [EBX + 0x9cc]         ; 00477a06
    SUB ESP,0x4                         ; 00477a0c
    FCHS                                ; 00477a0f
    FSTP float ptr [ESP]                ; 00477a11
    CALL core_actor.cpp_FUN_0040cc00    ; 00477a14
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x154],EAX     ; 00477a19
    FLD float ptr [ESP + 0x154]         ; 00477a20
    ADD ESP,0x8                         ; 00477a27
    LEA EAX,[ESP + 0x64]                ; 00477a2a
    PUSH EAX                            ; 00477a2e
    LEA ESI,[ESP + 0x128]               ; 00477a2f
    LEA EDI,[ESP + 0xec]                ; 00477a36
    PUSH EBX                            ; 00477a3d
    FSTP float ptr [ESP + 0x74]         ; 00477a3e
    CALL core_actor.cpp_FUN_00408ac0    ; 00477a42
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x12c]               ; 00477a47
    ADD ESP,0x8                         ; 00477a4e
    LEA EAX,[EBX + 0x20]                ; 00477a51
    MOVSD ES:EDI,ESI                    ; 00477a54
    MOVSD ES:EDI,ESI                    ; 00477a55
    MOVSD ES:EDI,ESI                    ; 00477a56
    FLD float ptr [EAX]                 ; 00477a57
    FLD float ptr [EAX + 0x4]           ; 00477a59
    FLD float ptr [EAX + 0x8]           ; 00477a5c
    FXCH ST2                            ; 00477a5f
    FADD float ptr [ESP + 0xe8]         ; 00477a61
    FXCH                                ; 00477a68
    FADD float ptr [ESP + 0xec]         ; 00477a6a
    FXCH ST2                            ; 00477a71
    FADD float ptr [ESP + 0xf0]         ; 00477a73
    FXCH                                ; 00477a7a
    FSTP float ptr [EAX]                ; 00477a7c
    FXCH                                ; 00477a7e
    FSTP float ptr [EAX + 0x4]          ; 00477a80
    FSTP float ptr [EAX + 0x8]          ; 00477a83
    MOV dword ptr [EBX + 0x9cc],0x0     ; 00477a86
    MOV ESP,EBP                         ; 00477a90
    POP EBP                             ; 00477a92
    POP EDI                             ; 00477a93
    POP ESI                             ; 00477a94
    POP EBX                             ; 00477a95
    RET                                 ; 00477a96

