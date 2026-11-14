; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610(CCharacter *this_ptr,int layer_action_index)
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
;   core_doc.cpp_FUN_00474400 at 00474798
;   core_scat.cpp_CScat_updateWeaponState_FUN_00541e30 at 00541fa3
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005907a0 at 00590a52
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005d5e91
;   TerminatedCString s_CCharacter_chooseNextLay_005d5ea6
;   undefined4 DAT_005d5ee7
;   undefined4 DAT_005d5eef
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434610
        ;   Label: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610
    PUSH ESI                            ; 00434611
    PUSH EDI                            ; 00434612
    PUSH EBP                            ; 00434613
    MOV EBP,ESP                         ; 00434614
    SUB ESP,0x18                        ; 00434616
    AND ESP,0xfffffff8                  ; 00434619
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043461c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0043461f
    MOV EDX,dword ptr [EBX + 0x2c98]    ; 00434622
    TEST EDX,EDX                        ; 00434628
    JL 0x00434634                       ; 0043462a
        ;   XREF to: 00434634 (CONDITIONAL_JUMP)  ; LAB_00434634
    CMP EDX,dword ptr [EBX + 0x27c4]    ; 0043462c
    JL 0x00434656                       ; 00434632
        ;   XREF to: 00434656 (CONDITIONAL_JUMP)  ; LAB_00434656
    MOV EDI,0x5d5e91                    ; 00434634 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_00434634
    MOV EAX,0x11d8                      ; 00434639
    PUSH 0x5d5ea6                       ; 0043463e | = "CCharacter::chooseNextLayerAction - i..."
    MOV dword ptr [0x01d1d400],EDI      ; 00434643 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00434649 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043464e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00434653
    FLD float ptr [EBX + 0x2c9c]        ; 00434656
        ;   Label: LAB_00434656
    FST double ptr [ESP]                ; 0043465c
    FCOMP double ptr [0x005d5ee7]       ; 0043465f | DAT_005d5ee7
    FNSTSW AX                           ; 00434665
    SAHF                                ; 00434667
    JNC 0x004346dd                      ; 00434668
        ;   XREF to: 004346dd (CONDITIONAL_JUMP)  ; LAB_004346dd
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0043466e
    SHL EAX,0x3                         ; 00434674
    MOV EDX,EAX                         ; 00434677
    SHL EAX,0x3                         ; 00434679
    SUB EAX,EDX                         ; 0043467c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x27c8] ; 0043467e
    MOV dword ptr [ESP + 0x8],EAX       ; 00434685
        ;   Label: LAB_00434685
    CMP ESI,dword ptr [ESP + 0x8]       ; 00434689
    JZ 0x004346d6                       ; 0043468d
        ;   XREF to: 004346d6 (CONDITIONAL_JUMP)  ; LAB_004346d6
    MOV ECX,0x4479c000                  ; 0043468f
    MOV EDI,dword ptr [EBX + 0x27c4]    ; 00434694
    MOV dword ptr [ESP + 0x14],ECX      ; 0043469a
    XOR ECX,ECX                         ; 0043469e
    TEST EDI,EDI                        ; 004346a0
    JLE 0x004346d6                      ; 004346a2
        ;   XREF to: 004346d6 (CONDITIONAL_JUMP)  ; LAB_004346d6
    SHL ESI,0x2                         ; 004346a4
    LEA EDX,[EBX + 0x27c8]              ; 004346a7
    MOV EDI,dword ptr [EDX + 0x28]      ; 004346ad
        ;   Label: LAB_004346ad
    MOV EAX,EDX                         ; 004346b0
    TEST EDI,EDI                        ; 004346b2
    JL 0x004346be                       ; 004346b4
        ;   XREF to: 004346be (CONDITIONAL_JUMP)  ; LAB_004346be
    MOV EDI,dword ptr [EDX]             ; 004346b6
    CMP EDI,dword ptr [ESP + 0x8]       ; 004346b8
    JZ 0x00434704                       ; 004346bc
        ;   XREF to: 00434704 (CONDITIONAL_JUMP)  ; LAB_00434704
    CMP dword ptr [EAX + 0x28],0x0      ; 004346be
        ;   Label: LAB_004346be
    JLE 0x0043473b                      ; 004346c2
        ;   XREF to: 0043473b (CONDITIONAL_JUMP)  ; LAB_0043473b
    INC ECX                             ; 004346c8
        ;   Label: LAB_004346c8
    MOV EAX,dword ptr [EBX + 0x27c4]    ; 004346c9
    ADD EDX,0x38                        ; 004346cf
    CMP ECX,EAX                         ; 004346d2
    JL 0x004346ad                       ; 004346d4
        ;   XREF to: 004346ad (CONDITIONAL_JUMP)  ; LAB_004346ad
    MOV ESP,EBP                         ; 004346d6
        ;   Label: LAB_004346d6
    POP EBP                             ; 004346d8
    POP EDI                             ; 004346d9
    POP ESI                             ; 004346da
    POP EBX                             ; 004346db
    RET                                 ; 004346dc
    FLD double ptr [ESP]                ; 004346dd
        ;   Label: LAB_004346dd
    FCOMP double ptr [0x005d5eef]       ; 004346e0 | DAT_005d5eef
    FNSTSW AX                           ; 004346e6
    SAHF                                ; 004346e8
    JBE 0x004346d6                      ; 004346e9
        ;   XREF to: 004346d6 (CONDITIONAL_JUMP)  ; LAB_004346d6
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 004346eb
    SHL EAX,0x3                         ; 004346f1
    MOV EDX,EAX                         ; 004346f4
    SHL EAX,0x3                         ; 004346f6
    SUB EAX,EDX                         ; 004346f9
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x27cc] ; 004346fb
    JMP 0x00434685                      ; 00434702
        ;   XREF to: 00434685 (UNCONDITIONAL_JUMP)  ; LAB_00434685
    IMUL EAX,dword ptr [EDX + 0x4],0x58 ; 00434704
        ;   Label: LAB_00434704
    ADD EAX,EBX                         ; 00434708
    FLD float ptr [EDX + 0x34]          ; 0043470a
    FADD float ptr [ESI + EAX*0x1 + 0xb9f4] ; 0043470d
    FST float ptr [ESP + 0xc]           ; 00434714
    FCOMP float ptr [ESP + 0x14]        ; 00434718
    FNSTSW AX                           ; 0043471c
    SAHF                                ; 0043471e
    JNC 0x004346c8                      ; 0043471f
        ;   XREF to: 004346c8 (CONDITIONAL_JUMP)  ; LAB_004346c8
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00434721
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043472b
    MOV dword ptr [EBX + 0x2c98],ECX    ; 0043472f
    MOV dword ptr [ESP + 0x14],EAX      ; 00434735
    JMP 0x004346c8                      ; 00434739
        ;   XREF to: 004346c8 (UNCONDITIONAL_JUMP)  ; LAB_004346c8
    MOV EDI,dword ptr [EAX + 0x4]       ; 0043473b
        ;   Label: LAB_0043473b
    CMP EDI,dword ptr [ESP + 0x8]       ; 0043473e
    JNZ 0x004346c8                      ; 00434742
        ;   XREF to: 004346c8 (CONDITIONAL_JUMP)  ; LAB_004346c8
    IMUL EDI,dword ptr [EAX],0x58       ; 00434744
    ADD EDI,EBX                         ; 00434747
    ADD EDI,ESI                         ; 00434749
    FLD float ptr [EAX + 0x34]          ; 0043474b
    FADD float ptr [EDI + 0xb9f4]       ; 0043474e
    FST float ptr [ESP + 0x10]          ; 00434754
    FCOMP float ptr [ESP + 0x14]        ; 00434758
    FNSTSW AX                           ; 0043475c
    SAHF                                ; 0043475e
    JNC 0x004346c8                      ; 0043475f
        ;   XREF to: 004346c8 (CONDITIONAL_JUMP)  ; LAB_004346c8
    MOV dword ptr [EBX + 0x2c9c],0x3f800000 ; 00434765
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043476f
    MOV dword ptr [EBX + 0x2c98],ECX    ; 00434773
    MOV dword ptr [ESP + 0x14],EAX      ; 00434779
    JMP 0x004346c8                      ; 0043477d
        ;   XREF to: 004346c8 (UNCONDITIONAL_JUMP)  ; LAB_004346c8

