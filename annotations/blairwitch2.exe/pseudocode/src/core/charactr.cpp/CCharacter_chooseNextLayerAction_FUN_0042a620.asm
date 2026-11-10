; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(CCharacter *this_ptr,int layer_action_index)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_action_index
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_scat.cpp_CScat_updateWeaponState_FUN_0051fd00 at 0051fe79
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50 at 0056de02
;   unkafter_stranger.cpp_FUN_0045bdc0 at 0045c132
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005cd1d8
;   TerminatedCString s_CCharacter_chooseNextLay_005cd1ed
;   undefined4 DAT_005cd22e
;   undefined4 DAT_005cd236
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a620
        ;   Label: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
    PUSH ESI                            ; 0042a621
    PUSH EDI                            ; 0042a622
    PUSH EBP                            ; 0042a623
    MOV EBP,ESP                         ; 0042a624
    SUB ESP,0x18                        ; 0042a626
    AND ESP,0xfffffff8                  ; 0042a629
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042a62c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042a62f
    MOV EDX,dword ptr [EBX + 0x2d04]    ; 0042a632
    TEST EDX,EDX                        ; 0042a638
    JL 0x0042a644                       ; 0042a63a
        ;   XREF to: 0042a644 (CONDITIONAL_JUMP)  ; LAB_0042a644
    CMP EDX,dword ptr [EBX + 0x2830]    ; 0042a63c
    JL 0x0042a666                       ; 0042a642
        ;   XREF to: 0042a666 (CONDITIONAL_JUMP)  ; LAB_0042a666
    MOV EDI,0x5cd1d8                    ; 0042a644 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042a644
    MOV EAX,0x11fe                      ; 0042a649
    PUSH 0x5cd1ed                       ; 0042a64e | = "CCharacter::chooseNextLayerAction - i..."
    MOV dword ptr [0x01d046a0],EDI      ; 0042a653 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0042a659 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042a65e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042a663
    FLD float ptr [EBX + 0x2d08]        ; 0042a666
        ;   Label: LAB_0042a666
    FST double ptr [ESP]                ; 0042a66c
    FCOMP double ptr [0x005cd22e]       ; 0042a66f | DAT_005cd22e
    FNSTSW AX                           ; 0042a675
    SAHF                                ; 0042a677
    JNC 0x0042a6ed                      ; 0042a678
        ;   XREF to: 0042a6ed (CONDITIONAL_JUMP)  ; LAB_0042a6ed
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 0042a67e
    SHL EAX,0x3                         ; 0042a684
    MOV EDX,EAX                         ; 0042a687
    SHL EAX,0x3                         ; 0042a689
    SUB EAX,EDX                         ; 0042a68c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2834] ; 0042a68e
    MOV dword ptr [ESP + 0x8],EAX       ; 0042a695
        ;   Label: LAB_0042a695
    CMP ESI,dword ptr [ESP + 0x8]       ; 0042a699
    JZ 0x0042a6e6                       ; 0042a69d
        ;   XREF to: 0042a6e6 (CONDITIONAL_JUMP)  ; LAB_0042a6e6
    MOV ECX,0x4479c000                  ; 0042a69f
    MOV EDI,dword ptr [EBX + 0x2830]    ; 0042a6a4
    MOV dword ptr [ESP + 0x14],ECX      ; 0042a6aa
    XOR ECX,ECX                         ; 0042a6ae
    TEST EDI,EDI                        ; 0042a6b0
    JLE 0x0042a6e6                      ; 0042a6b2
        ;   XREF to: 0042a6e6 (CONDITIONAL_JUMP)  ; LAB_0042a6e6
    SHL ESI,0x2                         ; 0042a6b4
    LEA EDX,[EBX + 0x2834]              ; 0042a6b7
    MOV EDI,dword ptr [EDX + 0x28]      ; 0042a6bd
        ;   Label: LAB_0042a6bd
    MOV EAX,EDX                         ; 0042a6c0
    TEST EDI,EDI                        ; 0042a6c2
    JL 0x0042a6ce                       ; 0042a6c4
        ;   XREF to: 0042a6ce (CONDITIONAL_JUMP)  ; LAB_0042a6ce
    MOV EDI,dword ptr [EDX]             ; 0042a6c6
    CMP EDI,dword ptr [ESP + 0x8]       ; 0042a6c8
    JZ 0x0042a714                       ; 0042a6cc
        ;   XREF to: 0042a714 (CONDITIONAL_JUMP)  ; LAB_0042a714
    CMP dword ptr [EAX + 0x28],0x0      ; 0042a6ce
        ;   Label: LAB_0042a6ce
    JLE 0x0042a74b                      ; 0042a6d2
        ;   XREF to: 0042a74b (CONDITIONAL_JUMP)  ; LAB_0042a74b
    INC ECX                             ; 0042a6d8
        ;   Label: LAB_0042a6d8
    MOV EAX,dword ptr [EBX + 0x2830]    ; 0042a6d9
    ADD EDX,0x38                        ; 0042a6df
    CMP ECX,EAX                         ; 0042a6e2
    JL 0x0042a6bd                       ; 0042a6e4
        ;   XREF to: 0042a6bd (CONDITIONAL_JUMP)  ; LAB_0042a6bd
    MOV ESP,EBP                         ; 0042a6e6
        ;   Label: LAB_0042a6e6
    POP EBP                             ; 0042a6e8
    POP EDI                             ; 0042a6e9
    POP ESI                             ; 0042a6ea
    POP EBX                             ; 0042a6eb
    RET                                 ; 0042a6ec
    FLD double ptr [ESP]                ; 0042a6ed
        ;   Label: LAB_0042a6ed
    FCOMP double ptr [0x005cd236]       ; 0042a6f0 | DAT_005cd236
    FNSTSW AX                           ; 0042a6f6
    SAHF                                ; 0042a6f8
    JBE 0x0042a6e6                      ; 0042a6f9
        ;   XREF to: 0042a6e6 (CONDITIONAL_JUMP)  ; LAB_0042a6e6
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 0042a6fb
    SHL EAX,0x3                         ; 0042a701
    MOV EDX,EAX                         ; 0042a704
    SHL EAX,0x3                         ; 0042a706
    SUB EAX,EDX                         ; 0042a709
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2838] ; 0042a70b
    JMP 0x0042a695                      ; 0042a712
        ;   XREF to: 0042a695 (UNCONDITIONAL_JUMP)  ; LAB_0042a695
    IMUL EAX,dword ptr [EDX + 0x4],0x58 ; 0042a714
        ;   Label: LAB_0042a714
    ADD EAX,EBX                         ; 0042a718
    FLD float ptr [EDX + 0x34]          ; 0042a71a
    FADD float ptr [ESI + EAX*0x1 + 0x10230] ; 0042a71d
    FST float ptr [ESP + 0xc]           ; 0042a724
    FCOMP float ptr [ESP + 0x14]        ; 0042a728
    FNSTSW AX                           ; 0042a72c
    SAHF                                ; 0042a72e
    JNC 0x0042a6d8                      ; 0042a72f
        ;   XREF to: 0042a6d8 (CONDITIONAL_JUMP)  ; LAB_0042a6d8
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0042a731
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042a73b
    MOV dword ptr [EBX + 0x2d04],ECX    ; 0042a73f
    MOV dword ptr [ESP + 0x14],EAX      ; 0042a745
    JMP 0x0042a6d8                      ; 0042a749
        ;   XREF to: 0042a6d8 (UNCONDITIONAL_JUMP)  ; LAB_0042a6d8
    MOV EDI,dword ptr [EAX + 0x4]       ; 0042a74b
        ;   Label: LAB_0042a74b
    CMP EDI,dword ptr [ESP + 0x8]       ; 0042a74e
    JNZ 0x0042a6d8                      ; 0042a752
        ;   XREF to: 0042a6d8 (CONDITIONAL_JUMP)  ; LAB_0042a6d8
    IMUL EDI,dword ptr [EAX],0x58       ; 0042a754
    ADD EDI,EBX                         ; 0042a757
    ADD EDI,ESI                         ; 0042a759
    FLD float ptr [EAX + 0x34]          ; 0042a75b
    FADD float ptr [EDI + 0x10230]      ; 0042a75e
    FST float ptr [ESP + 0x10]          ; 0042a764
    FCOMP float ptr [ESP + 0x14]        ; 0042a768
    FNSTSW AX                           ; 0042a76c
    SAHF                                ; 0042a76e
    JNC 0x0042a6d8                      ; 0042a76f
        ;   XREF to: 0042a6d8 (CONDITIONAL_JUMP)  ; LAB_0042a6d8
    MOV dword ptr [EBX + 0x2d08],0x3f800000 ; 0042a775
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042a77f
    MOV dword ptr [EBX + 0x2d04],ECX    ; 0042a783
    MOV dword ptr [ESP + 0x14],EAX      ; 0042a789
    JMP 0x0042a6d8                      ; 0042a78d
        ;   XREF to: 0042a6d8 (UNCONDITIONAL_JUMP)  ; LAB_0042a6d8

