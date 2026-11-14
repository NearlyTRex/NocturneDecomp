; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00472600(void)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;
; Called Functions:
;   core_dtrace.cpp_FUN_00472780
;   core_dtrace.cpp_FUN_004727f0
;   crt_unknown.c_FUN_005b7fce
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40
;   shape_edittool.cpp_FUN_0047dc40
;   shape_edittool.cpp_FUN_0047e760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472600
        ;   Label: core_dtrace.cpp_FUN_00472600
    PUSH ESI                            ; 00472601
    PUSH EDI                            ; 00472602
    PUSH EBP                            ; 00472603
    SUB ESP,0x10                        ; 00472604
    MOV EBX,dword ptr [ESP + 0x24]      ; 00472607
    PUSH 0x5d19d2                       ; 0047260b
    MOV EDX,dword ptr [0x006138e0]      ; 00472610 | g_CEditorToolsPtr
    PUSH EDX                            ; 00472616
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40 ; 00472617
        ;   XREF to: 0047db40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0047261c
    PUSH EBX                            ; 0047261f
    CALL core_dtrace.cpp_FUN_004727f0   ; 00472620
        ;   XREF to: 004727f0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_004727f0()
    ADD ESP,0x4                         ; 00472625
    MOV dword ptr [EBX + 0x4],0x0       ; 00472628
    XOR EAX,EAX                         ; 0047262f
    XOR EDX,EDX                         ; 00472631
    MOV ECX,dword ptr [EBX + 0x44]      ; 00472633
        ;   Label: LAB_00472633
    MOV EBP,dword ptr [EBX + 0x40]      ; 00472636
    IMUL EBP,ECX                        ; 00472639
    MOV ECX,dword ptr [EBX + 0x48]      ; 0047263c
    IMUL ECX,EBP                        ; 0047263f
    CMP EAX,ECX                         ; 00472642
    JGE 0x0047265a                      ; 00472644
        ;   XREF to: 0047265a (CONDITIONAL_JUMP)  ; LAB_0047265a
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00472646
    MOV ESI,dword ptr [EBX + 0x4]       ; 00472649
    MOV ECX,dword ptr [ECX + EDX*0x1]   ; 0047264c
    ADD EDX,0x58                        ; 0047264f
    ADD ESI,ECX                         ; 00472652
    INC EAX                             ; 00472654
    MOV dword ptr [EBX + 0x4],ESI       ; 00472655
    JMP 0x00472633                      ; 00472658
        ;   XREF to: 00472633 (UNCONDITIONAL_JUMP)  ; LAB_00472633
    PUSH EBX                            ; 0047265a
        ;   Label: LAB_0047265a
    CALL core_dtrace.cpp_FUN_00472780   ; 0047265b
        ;   XREF to: 00472780 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00472780()
    XOR ESI,ESI                         ; 00472660
    ADD ESP,0x4                         ; 00472662
    MOV dword ptr [ESP + 0x8],ESI       ; 00472665
    MOV dword ptr [ESP + 0x4],ESI       ; 00472669
    MOV dword ptr [ESP],ESI             ; 0047266d
    MOV EDI,dword ptr [EBX + 0x44]      ; 00472670
        ;   Label: LAB_00472670
    MOV EBP,dword ptr [EBX + 0x40]      ; 00472673
    IMUL EBP,EDI                        ; 00472676
    IMUL EBP,dword ptr [EBX + 0x48]     ; 00472679
    CMP EBP,dword ptr [ESP + 0x4]       ; 0047267d
    JLE 0x00472761                      ; 00472681
        ;   XREF to: 00472761 (CONDITIONAL_JUMP)  ; LAB_00472761
    MOV ECX,dword ptr [ESP]             ; 00472687
    MOV EBP,dword ptr [EBX + 0x4c]      ; 0047268a
    ADD EBP,ECX                         ; 0047268d
    MOV ESI,dword ptr [EBP]             ; 0047268f
    TEST ESI,ESI                        ; 00472692
    JLE 0x00472712                      ; 00472694
        ;   XREF to: 00472712 (CONDITIONAL_JUMP)  ; LAB_00472712
    IMUL ECX,ESI,0x38                   ; 00472696
    MOV EDX,dword ptr [ESP + 0x8]       ; 00472699
    IMUL EAX,EDX,0x38                   ; 0047269d
    MOV EDI,dword ptr [EBX + 0x8]       ; 004726a0
    MOV ESI,dword ptr [EBP + 0x4]       ; 004726a3
    ADD EDI,EAX                         ; 004726a6
    MOV dword ptr [ESP + 0xc],EAX       ; 004726a8
    PUSH EDI                            ; 004726ac
    MOV EAX,ECX                         ; 004726ad
    SHR ECX,0x2                         ; 004726af
    MOVSD.REP ES:EDI,ESI                ; 004726b2
    MOV CL,AL                           ; 004726b4
    AND CL,0x3                          ; 004726b6
    MOVSB.REP ES:EDI,ESI                ; 004726b9
    POP EDI                             ; 004726bb
    MOV ECX,dword ptr [EBP]             ; 004726bc
    MOV EDI,dword ptr [EBX + 0xc]       ; 004726bf
    MOV ESI,dword ptr [EBP + 0x54]      ; 004726c2
    ADD EDI,EDX                         ; 004726c5
    PUSH EDI                            ; 004726c7
    MOV EAX,ECX                         ; 004726c8
    SHR ECX,0x2                         ; 004726ca
    MOVSD.REP ES:EDI,ESI                ; 004726cd
    MOV CL,AL                           ; 004726cf
    AND CL,0x3                          ; 004726d1
    MOVSB.REP ES:EDI,ESI                ; 004726d4
    POP EDI                             ; 004726d6
    MOV ECX,dword ptr [EBP + 0x4]       ; 004726d7
    PUSH ECX                            ; 004726da
    CALL crt_unknown.c_FUN_005b7fce     ; 004726db
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004726e0
    MOV ESI,dword ptr [EBP + 0x54]      ; 004726e3
    PUSH ESI                            ; 004726e6
    CALL crt_unknown.c_FUN_005b7fce     ; 004726e7
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004726ec
    MOV EAX,dword ptr [EBX + 0x8]       ; 004726ef
    MOV EDX,dword ptr [ESP + 0xc]       ; 004726f2
    ADD EDX,EAX                         ; 004726f6
    MOV dword ptr [EBP + 0x4],EDX       ; 004726f8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004726fb
    MOV EAX,dword ptr [EBX + 0xc]       ; 004726ff
    MOV EDI,dword ptr [ESP + 0x8]       ; 00472702
    ADD EDX,EAX                         ; 00472706
    ADD EDI,dword ptr [EBP]             ; 00472708
    MOV dword ptr [EBP + 0x54],EDX      ; 0047270b
    MOV dword ptr [ESP + 0x8],EDI       ; 0047270e
    MOV EBP,dword ptr [EBX + 0x40]      ; 00472712
        ;   Label: LAB_00472712
    IMUL EBP,dword ptr [EBX + 0x44]     ; 00472715
    MOV EDX,dword ptr [EBX + 0x48]      ; 00472719
    IMUL EBP,EDX                        ; 0047271c
    MOV dword ptr [ESP + 0xc],EBP       ; 0047271f
    FILD dword ptr [ESP + 0xc]          ; 00472723
    SUB ESP,0x4                         ; 00472727
    MOV ESI,dword ptr [ESP + 0x8]       ; 0047272a
    INC ESI                             ; 0047272e
    MOV dword ptr [ESP + 0x10],ESI      ; 0047272f
    FSTP float ptr [ESP]                ; 00472733
    FILD dword ptr [ESP + 0x10]         ; 00472736
    SUB ESP,0x4                         ; 0047273a
    MOV ECX,dword ptr [0x006138e0]      ; 0047273d | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00472743
    PUSH ECX                            ; 00472746
    CALL shape_edittool.cpp_FUN_0047dc40 ; 00472747
        ;   XREF to: 0047dc40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047dc40()
    ADD ESP,0xc                         ; 0047274c
    MOV EDI,dword ptr [ESP]             ; 0047274f
    ADD EDI,0x58                        ; 00472752
    MOV dword ptr [ESP + 0x4],ESI       ; 00472755
    MOV dword ptr [ESP],EDI             ; 00472759
    JMP 0x00472670                      ; 0047275c
        ;   XREF to: 00472670 (UNCONDITIONAL_JUMP)  ; LAB_00472670
    MOV EBP,dword ptr [0x006138e0]      ; 00472761 | g_CEditorToolsPtr
        ;   Label: LAB_00472761
    PUSH EBP                            ; 00472767
    CALL shape_edittool.cpp_FUN_0047e760 ; 00472768
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0047276d
    ADD ESP,0x10                        ; 00472770
    POP EBP                             ; 00472773
    POP EDI                             ; 00472774
    POP ESI                             ; 00472775
    POP EBX                             ; 00472776
    RET                                 ; 00472777

