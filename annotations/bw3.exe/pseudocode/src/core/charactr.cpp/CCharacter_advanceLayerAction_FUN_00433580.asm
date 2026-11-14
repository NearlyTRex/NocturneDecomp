; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_00433580(CCharacter *this_ptr,float *remaining_time,int target_bone_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   remaining_time
; int              Stack[0xc]:4   target_bone_index
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_prye.cpp_FUN_00524940 at 00524a12
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005b874e
;   TerminatedCString s_CCharacter_advanceLayerA_005b8763
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433580
        ;   Label: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_00433580
    PUSH ESI                            ; 00433581
    PUSH EDI                            ; 00433582
    PUSH EBP                            ; 00433583
    SUB ESP,0x20                        ; 00433584
    MOV EBX,dword ptr [ESP + 0x34]      ; 00433587
    MOV ESI,dword ptr [ESP + 0x38]      ; 0043358b
    MOV EDX,dword ptr [EBX + 0x2f00]    ; 0043358f
    TEST EDX,EDX                        ; 00433595
    JL 0x004335a1                       ; 00433597
        ;   XREF to: 004335a1 (CONDITIONAL_JUMP)  ; LAB_004335a1
    CMP EDX,dword ptr [EBX + 0x27c4]    ; 00433599
    JL 0x004335c4                       ; 0043359f
        ;   XREF to: 004335c4 (CONDITIONAL_JUMP)  ; LAB_004335c4
    MOV EDI,0x5b874e                    ; 004335a1 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_004335a1
    MOV EBP,0x1269                      ; 004335a6
    PUSH 0x5b8763                       ; 004335ab | = "CCharacter::advanceLayerAction - inva..."
    MOV dword ptr [0x01d71de0],EDI      ; 004335b0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004335b6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004335bc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004335c1
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 004335c4
        ;   Label: LAB_004335c4
    SHL EAX,0x3                         ; 004335ca
    FLD float ptr [EBX + 0x2f04]        ; 004335cd
    MOV EDX,EAX                         ; 004335d3
    SHL EAX,0x3                         ; 004335d5
    LEA ECX,[EBX + 0x27c8]              ; 004335d8
    SUB EAX,EDX                         ; 004335de
    FLDZ                                ; 004335e0
    ADD ECX,EAX                         ; 004335e2
    FCOMPP                              ; 004335e4
    FNSTSW AX                           ; 004335e6
    SAHF                                ; 004335e8
    JBE 0x004335f5                      ; 004335e9
        ;   XREF to: 004335f5 (CONDITIONAL_JUMP)  ; LAB_004335f5
    MOV dword ptr [EBX + 0x2f04],0x0    ; 004335eb
    FLD float ptr [EBX + 0x2f04]        ; 004335f5
        ;   Label: LAB_004335f5
    FLD1                                ; 004335fb
    FCOMPP                              ; 004335fd
    FNSTSW AX                           ; 004335ff
    SAHF                                ; 00433601
    JNC 0x0043360e                      ; 00433602
        ;   XREF to: 0043360e (CONDITIONAL_JUMP)  ; LAB_0043360e
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 00433604
    FLD float ptr [EBX + 0x2f04]        ; 0043360e
        ;   Label: LAB_0043360e
    FLD ST0                             ; 00433614
    FLD1                                ; 00433616
    FSUBRP ST2,ST0                      ; 00433618
    FMUL float ptr [ECX + 0x34]         ; 0043361a
    FLD float ptr [ECX + 0x34]          ; 0043361d
    FMULP ST2                           ; 00433620
    MOV EDX,dword ptr [ECX + 0x28]      ; 00433622
    FSTP float ptr [ESP + 0x14]         ; 00433625
    FSTP float ptr [ESP + 0xc]          ; 00433629
    TEST EDX,EDX                        ; 0043362d
    JNZ 0x00433692                      ; 0043362f
        ;   XREF to: 00433692 (CONDITIONAL_JUMP)  ; LAB_00433692
    MOV EDX,dword ptr [ECX + 0x4]       ; 00433631
    MOV EAX,EDX                         ; 00433634
    SHL EAX,0x5                         ; 00433636
    ADD EAX,EDX                         ; 00433639
    SHL EAX,0x2                         ; 0043363b
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0043363e
    ADD EAX,EBX                         ; 00433642
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0xbc74] ; 00433644
    MOV EDX,dword ptr [ECX]             ; 0043364b
    MOV dword ptr [ESP + 0x4],EAX       ; 0043364d
    MOV EAX,EDX                         ; 00433651
    SHL EAX,0x5                         ; 00433653
    ADD EAX,EDX                         ; 00433656
    SHL EAX,0x2                         ; 00433658
    ADD EAX,EBX                         ; 0043365b
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0xbc74] ; 0043365d
    FLD float ptr [ESP + 0x4]           ; 00433664
    MOV dword ptr [ESP + 0x8],EAX       ; 00433668
    FADD float ptr [ESP + 0xc]          ; 0043366c
    FLD float ptr [ESP + 0x8]           ; 00433670
    FADD float ptr [ESP + 0x14]         ; 00433674
    FXCH                                ; 00433678
    FSTP float ptr [ESP]                ; 0043367a
    FST float ptr [ESP + 0x10]          ; 0043367d
    FCOMP float ptr [ESP]               ; 00433681
    FNSTSW AX                           ; 00433684
    SAHF                                ; 00433686
    JNC 0x00433709                      ; 00433687
        ;   XREF to: 00433709 (CONDITIONAL_JUMP)  ; LAB_00433709
    MOV EDX,0xffffffff                  ; 0043368d
        ;   Label: LAB_0043368d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00433692
        ;   Label: LAB_00433692
    MOV dword ptr [ESP + 0x18],EAX      ; 00433696
    TEST EDX,EDX                        ; 0043369a
    JL 0x0043373a                       ; 0043369c
        ;   XREF to: 0043373a (CONDITIONAL_JUMP)  ; LAB_0043373a
    FLD float ptr [ESI]                 ; 004336a2
        ;   Label: LAB_004336a2
    FCOMP float ptr [ESP + 0x18]        ; 004336a4
    FNSTSW AX                           ; 004336a8
    SAHF                                ; 004336aa
    JNC 0x00433747                      ; 004336ab
        ;   XREF to: 00433747 (CONDITIONAL_JUMP)  ; LAB_00433747
    MOV dword ptr [ESP + 0x1c],EDX      ; 004336b1
    FILD dword ptr [ESP + 0x1c]         ; 004336b5
    FMUL float ptr [ESI]                ; 004336b9
    FDIV float ptr [ECX + 0x34]         ; 004336bb
    FADD float ptr [EBX + 0x2f04]       ; 004336be
    FST float ptr [EBX + 0x2f04]        ; 004336c4
    FLDZ                                ; 004336ca
    FCOMPP                              ; 004336cc
    FNSTSW AX                           ; 004336ce
    SAHF                                ; 004336d0
    JBE 0x004336dd                      ; 004336d1
        ;   XREF to: 004336dd (CONDITIONAL_JUMP)  ; LAB_004336dd
    MOV dword ptr [EBX + 0x2f04],0x0    ; 004336d3
    FLD float ptr [EBX + 0x2f04]        ; 004336dd
        ;   Label: LAB_004336dd
    FLD1                                ; 004336e3
    FCOMPP                              ; 004336e5
    FNSTSW AX                           ; 004336e7
    SAHF                                ; 004336e9
    JNC 0x004336f6                      ; 004336ea
        ;   XREF to: 004336f6 (CONDITIONAL_JUMP)  ; LAB_004336f6
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 004336ec
    MOV EAX,0xffffffff                  ; 004336f6
        ;   Label: LAB_004336f6
    MOV dword ptr [ESI],0x0             ; 004336fb
    ADD ESP,0x20                        ; 00433701
    POP EBP                             ; 00433704
    POP EDI                             ; 00433705
    POP ESI                             ; 00433706
    POP EBX                             ; 00433707
    RET                                 ; 00433708
    FLD float ptr [ESP]                 ; 00433709
        ;   Label: LAB_00433709
    FCOMP float ptr [ESP + 0x10]        ; 0043370c
    FNSTSW AX                           ; 00433710
    SAHF                                ; 00433712
    JNC 0x0043371f                      ; 00433713
        ;   XREF to: 0043371f (CONDITIONAL_JUMP)  ; LAB_0043371f
    MOV EDX,0x1                         ; 00433715
    JMP 0x00433692                      ; 0043371a
        ;   XREF to: 00433692 (UNCONDITIONAL_JUMP)  ; LAB_00433692
    FLD float ptr [ESP + 0x8]           ; 0043371f
        ;   Label: LAB_0043371f
    FCOMP float ptr [ESP + 0x4]         ; 00433723
    FNSTSW AX                           ; 00433727
    SAHF                                ; 00433729
    JC 0x0043368d                       ; 0043372a
        ;   XREF to: 0043368d (CONDITIONAL_JUMP)  ; LAB_0043368d
    MOV EDX,0x1                         ; 00433730
    JMP 0x00433692                      ; 00433735
        ;   XREF to: 00433692 (UNCONDITIONAL_JUMP)  ; LAB_00433692
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043373a
        ;   Label: LAB_0043373a
    MOV dword ptr [ESP + 0x18],EAX      ; 0043373e
    JMP 0x004336a2                      ; 00433742
        ;   XREF to: 004336a2 (UNCONDITIONAL_JUMP)  ; LAB_004336a2
    FLD float ptr [ESI]                 ; 00433747
        ;   Label: LAB_00433747
    FSUB float ptr [ESP + 0x18]         ; 00433749
    FSTP float ptr [ESI]                ; 0043374d
    TEST EDX,EDX                        ; 0043374f
    JL 0x00433768                       ; 00433751
        ;   XREF to: 00433768 (CONDITIONAL_JUMP)  ; LAB_00433768
    MOV EAX,dword ptr [ECX + 0x4]       ; 00433753
    MOV dword ptr [EBX + 0x2f04],0x3f800000 ; 00433756
    ADD ESP,0x20                        ; 00433760
    POP EBP                             ; 00433763
    POP EDI                             ; 00433764
    POP ESI                             ; 00433765
    POP EBX                             ; 00433766
    RET                                 ; 00433767
    MOV EAX,dword ptr [ECX]             ; 00433768
        ;   Label: LAB_00433768
    MOV dword ptr [EBX + 0x2f04],0x0    ; 0043376a
    ADD ESP,0x20                        ; 00433774
    POP EBP                             ; 00433777
    POP EDI                             ; 00433778
    POP ESI                             ; 00433779
    POP EBX                             ; 0043377a
    RET                                 ; 0043377b

