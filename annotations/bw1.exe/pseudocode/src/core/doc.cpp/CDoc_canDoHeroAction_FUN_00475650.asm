; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_canDoHeroAction_FUN_00475650(CDoc *this_ptr,int action_type)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   action_type
;
; Referenced Globals:
;   undefined1* switchdataD_00475618 = 00475823
;   undefined4 DAT_005da5b4
;   undefined4 DAT_005da5bc
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_hero.cpp_CHero_canDoHeroAction_FUN_004ec950
;   core_motion.cpp_FUN_00524a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475650
        ;   Label: core_doc.cpp_CDoc_canDoHeroAction_FUN_00475650
    PUSH ESI                            ; 00475651
    PUSH EDI                            ; 00475652
    PUSH EBP                            ; 00475653
    SUB ESP,0x8                         ; 00475654
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00475657
    MOV EBP,dword ptr [ESP + 0x20]      ; 0047565b
    MOV EDX,dword ptr [ESI + 0x1ff5c]   ; 0047565f
    TEST EDX,EDX                        ; 00475665
    JNZ 0x00475672                      ; 00475667
        ;   XREF to: 00475672 (CONDITIONAL_JUMP)  ; LAB_00475672
    CMP dword ptr [ESI + 0x1ffac],0x0   ; 00475669
    JZ 0x0047567c                       ; 00475670
        ;   XREF to: 0047567c (CONDITIONAL_JUMP)  ; LAB_0047567c
    XOR EAX,EAX                         ; 00475672
        ;   Label: LAB_00475672
    ADD ESP,0x8                         ; 00475674
    POP EBP                             ; 00475677
    POP EDI                             ; 00475678
    POP ESI                             ; 00475679
    POP EBX                             ; 0047567a
    RET                                 ; 0047567b
    PUSH EDX                            ; 0047567c
        ;   Label: LAB_0047567c
    LEA EBX,[ESI + 0x158]               ; 0047567d
    PUSH EBX                            ; 00475683
    CALL core_motion.cpp_FUN_00524a40   ; 00475684
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x8],EAX       ; 00475689
    ADD ESP,0x8                         ; 0047568d
    PUSH 0x1                            ; 00475690
    PUSH EBX                            ; 00475692
    CALL core_motion.cpp_FUN_00524a40   ; 00475693
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 00475698
    FLD float ptr [ESP + 0xc]           ; 0047569c
    ADD ESP,0x8                         ; 004756a0
    PUSH 0x4                            ; 004756a3
    FADD float ptr [ESP + 0x4]          ; 004756a5
    PUSH EBX                            ; 004756a9
    FSTP float ptr [ESP + 0x8]          ; 004756aa
    CALL core_motion.cpp_FUN_00524a40   ; 004756ae
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004756b3
    FLD float ptr [ESP + 0xc]           ; 004756b7
    ADD ESP,0x8                         ; 004756bb
    PUSH 0x7                            ; 004756be
    FADD float ptr [ESP + 0x4]          ; 004756c0
    PUSH EBX                            ; 004756c4
    FSTP float ptr [ESP + 0x8]          ; 004756c5
    CALL core_motion.cpp_FUN_00524a40   ; 004756c9
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004756ce
    FLD float ptr [ESP + 0xc]           ; 004756d2
    ADD ESP,0x8                         ; 004756d6
    PUSH 0x8                            ; 004756d9
    FADD float ptr [ESP + 0x4]          ; 004756db
    PUSH EBX                            ; 004756df
    FSTP float ptr [ESP + 0x8]          ; 004756e0
    CALL core_motion.cpp_FUN_00524a40   ; 004756e4
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004756e9
    FLD float ptr [ESP + 0xc]           ; 004756ed
    ADD ESP,0x8                         ; 004756f1
    PUSH 0x9                            ; 004756f4
    FADD float ptr [ESP + 0x4]          ; 004756f6
    PUSH EBX                            ; 004756fa
    FSTP float ptr [ESP + 0x8]          ; 004756fb
    CALL core_motion.cpp_FUN_00524a40   ; 004756ff
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 00475704
    FLD float ptr [ESP + 0xc]           ; 00475708
    ADD ESP,0x8                         ; 0047570c
    PUSH 0xa                            ; 0047570f
    FADD float ptr [ESP + 0x4]          ; 00475711
    PUSH EBX                            ; 00475715
    FSTP float ptr [ESP + 0x8]          ; 00475716
    CALL core_motion.cpp_FUN_00524a40   ; 0047571a
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0047571f
    FLD float ptr [ESP + 0xc]           ; 00475723
    ADD ESP,0x8                         ; 00475727
    PUSH 0xb                            ; 0047572a
    FADD float ptr [ESP + 0x4]          ; 0047572c
    PUSH EBX                            ; 00475730
    FSTP float ptr [ESP + 0x8]          ; 00475731
    CALL core_motion.cpp_FUN_00524a40   ; 00475735
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0047573a
    FLD float ptr [ESP + 0xc]           ; 0047573e
    ADD ESP,0x8                         ; 00475742
    PUSH 0xc                            ; 00475745
    FADD float ptr [ESP + 0x4]          ; 00475747
    PUSH EBX                            ; 0047574b
    FSTP float ptr [ESP + 0x8]          ; 0047574c
    CALL core_motion.cpp_FUN_00524a40   ; 00475750
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 00475755
    FLD float ptr [ESP + 0xc]           ; 00475759
    ADD ESP,0x8                         ; 0047575d
    PUSH 0xd                            ; 00475760
    FADD float ptr [ESP + 0x4]          ; 00475762
    PUSH EBX                            ; 00475766
    FSTP float ptr [ESP + 0x8]          ; 00475767
    CALL core_motion.cpp_FUN_00524a40   ; 0047576b
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 00475770
    FLD float ptr [ESP + 0xc]           ; 00475774
    ADD ESP,0x8                         ; 00475778
    PUSH 0xe                            ; 0047577b
    FADD float ptr [ESP + 0x4]          ; 0047577d
    PUSH EBX                            ; 00475781
    FSTP float ptr [ESP + 0x8]          ; 00475782
    CALL core_motion.cpp_FUN_00524a40   ; 00475786
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0047578b
    FLD float ptr [ESP + 0xc]           ; 0047578f
    ADD ESP,0x8                         ; 00475793
    PUSH 0xf                            ; 00475796
    FADD float ptr [ESP + 0x4]          ; 00475798
    PUSH EBX                            ; 0047579c
    FSTP float ptr [ESP + 0x8]          ; 0047579d
    CALL core_motion.cpp_FUN_00524a40   ; 004757a1
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004757a6
    FLD float ptr [ESP + 0xc]           ; 004757aa
    ADD ESP,0x8                         ; 004757ae
    PUSH 0x10                           ; 004757b1
    FADD float ptr [ESP + 0x4]          ; 004757b3
    PUSH EBX                            ; 004757b7
    FSTP float ptr [ESP + 0x8]          ; 004757b8
    CALL core_motion.cpp_FUN_00524a40   ; 004757bc
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004757c1
    FLD float ptr [ESP + 0xc]           ; 004757c5
    ADD ESP,0x8                         ; 004757c9
    PUSH 0x5                            ; 004757cc
    FADD float ptr [ESP + 0x4]          ; 004757ce
    PUSH EBX                            ; 004757d2
    FSTP float ptr [ESP + 0x8]          ; 004757d3
    CALL core_motion.cpp_FUN_00524a40   ; 004757d7
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004757dc
    FLD float ptr [ESP + 0xc]           ; 004757e0
    ADD ESP,0x8                         ; 004757e4
    PUSH 0x6                            ; 004757e7
    FADD float ptr [ESP + 0x4]          ; 004757e9
    PUSH EBX                            ; 004757ed
    FSTP float ptr [ESP + 0x8]          ; 004757ee
    CALL core_motion.cpp_FUN_00524a40   ; 004757f2
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004757f7
    FLD float ptr [ESP + 0xc]           ; 004757fb
    ADD ESP,0x8                         ; 004757ff
    FADD float ptr [ESP]                ; 00475802
    XOR EDI,EDI                         ; 00475805
    FCOMP double ptr [0x005da5b4]       ; 00475807 | DAT_005da5b4
    FNSTSW AX                           ; 0047580d
    SAHF                                ; 0047580f
    JBE 0x00475817                      ; 00475810
        ;   XREF to: 00475817 (CONDITIONAL_JUMP)  ; LAB_00475817
    MOV EDI,0x1                         ; 00475812
    CMP EBP,0xb                         ; 00475817
        ;   Label: LAB_00475817
    JA 0x00475823                       ; 0047581a
        ;   XREF to: 00475823 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EBP*0x4 + 0x475618]  ; 0047581c | caseD_6 | caseD_3 | caseD_4
        ;   Label: switchD
    PUSH EBP                            ; 00475823
        ;   Label: caseD_0
    PUSH ESI                            ; 00475824
    CALL core_hero.cpp_CHero_canDoHeroAction_FUN_004ec950 ; 00475825
        ;   XREF to: 004ec950 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_canDoHeroAction_FUN_004ec950(CHero * this_ptr, int action_type)
    ADD ESP,0x8                         ; 0047582a
    ADD ESP,0x8                         ; 0047582d
    POP EBP                             ; 00475830
    POP EDI                             ; 00475831
    POP ESI                             ; 00475832
    POP EBX                             ; 00475833
    RET                                 ; 00475834
    PUSH 0x0                            ; 00475835
        ;   Label: caseD_5
    PUSH ESI                            ; 00475837
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 00475838
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 0047583d
    FLD float ptr [ESP + 0xc]           ; 00475841
    ADD ESP,0x8                         ; 00475845
    FCOMP double ptr [0x005da5bc]       ; 00475848 | DAT_005da5bc
    FNSTSW AX                           ; 0047584e
    SAHF                                ; 00475850
    JNC 0x00475823                      ; 00475851
        ;   XREF to: 00475823 (CONDITIONAL_JUMP)  ; caseD_6
    XOR EAX,EAX                         ; 00475853
    ADD ESP,0x8                         ; 00475855
    POP EBP                             ; 00475858
    POP EDI                             ; 00475859
    POP ESI                             ; 0047585a
    POP EBX                             ; 0047585b
    RET                                 ; 0047585c
    PUSH 0x0                            ; 0047585d
        ;   Label: caseD_4
    PUSH ESI                            ; 0047585f
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 00475860
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 00475865
    FLD float ptr [ESP + 0xc]           ; 00475869
    ADD ESP,0x8                         ; 0047586d
    FCOMP double ptr [0x005da5bc]       ; 00475870 | DAT_005da5bc
    FNSTSW AX                           ; 00475876
    SAHF                                ; 00475878
    JC 0x00475672                       ; 00475879
        ;   XREF to: 00475672 (CONDITIONAL_JUMP)  ; LAB_00475672
    TEST EDI,EDI                        ; 0047587f
        ;   Label: caseD_3
    JNZ 0x00475823                      ; 00475881
        ;   XREF to: 00475823 (CONDITIONAL_JUMP)  ; caseD_6
    XOR EAX,EAX                         ; 00475883
    ADD ESP,0x8                         ; 00475885
    POP EBP                             ; 00475888
    POP EDI                             ; 00475889
    POP ESI                             ; 0047588a
    POP EBX                             ; 0047588b
    RET                                 ; 0047588c

