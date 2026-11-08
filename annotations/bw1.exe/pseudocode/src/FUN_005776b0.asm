; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005776b0(void)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   FUN_00577b60 at 00577bca
;   FUN_005784b0 at 00578572
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_Lock_secondary_buffer_005f4c54
;   TerminatedCString s_Unlock_secondary_buffer_005f4c6a
;   undefined4 DAT_02c81d9c
;   undefined4 DAT_02c81da8
;   undefined4 DAT_02c81dac
;   undefined4 DAT_02c81db0
;   undefined4 DAT_02c81db4
;   undefined4 DAT_02c81db8
;   undefined4 DAT_02c81dbc
;   undefined4 DAT_02c81dc0
;
; Called Functions:
;   FUN_00576c20
;   FUN_005773f0
;   FUN_00577500
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005776b0
        ;   Label: FUN_005776b0
    PUSH ESI                            ; 005776b1
    PUSH EDI                            ; 005776b2
    PUSH EBP                            ; 005776b3
    SUB ESP,0x350                       ; 005776b4
    MOV EDX,dword ptr [0x02c81d9c]      ; 005776ba | DAT_02c81d9c
    TEST EDX,EDX                        ; 005776c0
    JNZ 0x005776d1                      ; 005776c2
        ;   XREF to: 005776d1 (CONDITIONAL_JUMP)  ; LAB_005776d1
    XOR EAX,EAX                         ; 005776c4
        ;   Label: LAB_005776c4
    ADD ESP,0x350                       ; 005776c6
        ;   Label: LAB_005776c6
    POP EBP                             ; 005776cc
    POP EDI                             ; 005776cd
    POP ESI                             ; 005776ce
    POP EBX                             ; 005776cf
    RET                                 ; 005776d0
    PUSH 0x0                            ; 005776d1
        ;   Label: LAB_005776d1
    LEA EAX,[ESP + 0x350]               ; 005776d3
    PUSH EAX                            ; 005776da
    LEA EAX,[ESP + 0x348]               ; 005776db
    PUSH EAX                            ; 005776e2
    LEA EAX,[ESP + 0x354]               ; 005776e3
    PUSH EAX                            ; 005776ea
    LEA EAX,[ESP + 0x354]               ; 005776eb
    MOV EBX,dword ptr [0x02c81db8]      ; 005776f2 | DAT_02c81db8
    PUSH EAX                            ; 005776f8
    MOV EAX,[0x02c81dc0]                ; 005776f9 | DAT_02c81dc0
    IMUL EAX,EBX                        ; 005776fe
    PUSH EBX                            ; 00577701
    PUSH EAX                            ; 00577702
    MOV ECX,dword ptr [EDX]             ; 00577703
    PUSH EDX                            ; 00577705
    CALL dword ptr [ECX + 0x2c]         ; 00577706
    TEST EAX,EAX                        ; 00577709
    JNZ 0x005777fd                      ; 0057770b
        ;   XREF to: 005777fd (CONDITIONAL_JUMP)  ; LAB_005777fd
    CMP dword ptr [ESP + 0x340],0x0     ; 00577711
    JNZ 0x005776c6                      ; 00577719
        ;   XREF to: 005776c6 (CONDITIONAL_JUMP)  ; LAB_005776c6
    MOV EAX,dword ptr [ESP + 0x348]     ; 0057771b
    CMP EAX,dword ptr [0x02c81db8]      ; 00577722 | DAT_02c81db8
    JNZ 0x005776c4                      ; 00577728
        ;   XREF to: 005776c4 (CONDITIONAL_JUMP)  ; LAB_005776c4
    MOV EAX,[0x02c81da8]                ; 0057772a | DAT_02c81da8
    MOV EDX,EAX                         ; 0057772f
    SAR EDX,0x1f                        ; 00577731
    SHL EDX,0x3                         ; 00577734
    SBB EAX,EDX                         ; 00577737
    SAR EAX,0x3                         ; 00577739
    MOV ESI,EAX                         ; 0057773c
    MOV EBX,ESI                         ; 0057773e
    IMUL EDX,ESI,0x0                    ; 00577740
    ADD EDX,dword ptr [ESP + 0x344]     ; 00577743
    MOV ECX,dword ptr [0x02c81db0]      ; 0057774a | DAT_02c81db0
    SHL ECX,0x2                         ; 00577750
    XOR EAX,EAX                         ; 00577753
    TEST ECX,ECX                        ; 00577755
    JLE 0x00577770                      ; 00577757
        ;   XREF to: 00577770 (CONDITIONAL_JUMP)  ; LAB_00577770
    MOV dword ptr [ESP + EAX*0x1 + 0x320],EDX ; 00577759
        ;   Label: LAB_00577759
    ADD EAX,0x4                         ; 00577760
    ADD EDX,EBX                         ; 00577763
    CMP EAX,ECX                         ; 00577765
    JL 0x00577759                       ; 00577767
        ;   XREF to: 00577759 (CONDITIONAL_JUMP)  ; LAB_00577759
    LEA EAX,[EAX]                       ; 00577769
    NOP                                 ; 0057776f
    MOV EBX,dword ptr [0x02c81db0]      ; 00577770 | DAT_02c81db0
        ;   Label: LAB_00577770
    IMUL ESI,EBX                        ; 00577776
    PUSH ESI                            ; 00577779
    MOV ESI,dword ptr [0x02c81db4]      ; 0057777a | DAT_02c81db4
    PUSH ESI                            ; 00577780
    MOV EDI,dword ptr [0x02c81dac]      ; 00577781 | DAT_02c81dac
    PUSH EDI                            ; 00577787
    PUSH EBX                            ; 00577788
    MOV EAX,[0x02c81da8]                ; 00577789 | DAT_02c81da8
    PUSH EAX                            ; 0057778e
    LEA EAX,[ESP + 0x334]               ; 0057778f
    PUSH EAX                            ; 00577796
    CALL FUN_00576c20                   ; 00577797
        ;   XREF to: 00576c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00576c20()
    MOV EDX,dword ptr [0x02c81dc0]      ; 0057779c | DAT_02c81dc0
    MOV ECX,dword ptr [0x02c81dbc]      ; 005777a2 | DAT_02c81dbc
    INC EDX                             ; 005777a8
    ADD ESP,0x18                        ; 005777a9
    MOV dword ptr [0x02c81dc0],EDX      ; 005777ac | DAT_02c81dc0
    CMP EDX,ECX                         ; 005777b2
    JL 0x005777be                       ; 005777b4
        ;   XREF to: 005777be (CONDITIONAL_JUMP)  ; LAB_005777be
    XOR EBX,EBX                         ; 005777b6
    MOV dword ptr [0x02c81dc0],EBX      ; 005777b8 | DAT_02c81dc0
    MOV ESI,dword ptr [ESP + 0x34c]     ; 005777be
        ;   Label: LAB_005777be
    PUSH ESI                            ; 005777c5
    MOV EDI,dword ptr [ESP + 0x344]     ; 005777c6
    PUSH EDI                            ; 005777cd
    MOV EBP,dword ptr [ESP + 0x350]     ; 005777ce
    PUSH EBP                            ; 005777d5
    MOV ECX,dword ptr [ESP + 0x350]     ; 005777d6
    MOV EAX,[0x02c81d9c]                ; 005777dd | DAT_02c81d9c
    PUSH ECX                            ; 005777e2
    MOV EDX,dword ptr [EAX]             ; 005777e3
    PUSH EAX                            ; 005777e5
    CALL dword ptr [EDX + 0x4c]         ; 005777e6
    TEST EAX,EAX                        ; 005777e9
    JNZ 0x00577836                      ; 005777eb
        ;   XREF to: 00577836 (CONDITIONAL_JUMP)  ; LAB_00577836
    MOV EAX,0x1                         ; 005777ed
    ADD ESP,0x350                       ; 005777f2
    POP EBP                             ; 005777f8
    POP EDI                             ; 005777f9
    POP ESI                             ; 005777fa
    POP EBX                             ; 005777fb
    RET                                 ; 005777fc
    PUSH EAX                            ; 005777fd
        ;   Label: LAB_005777fd
    CALL FUN_00577500                   ; 005777fe
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00577803
    PUSH EAX                            ; 00577806
    PUSH 0x5f4c54                       ; 00577807 | = "Lock secondary buffer"
    PUSH 0x5f4c35                       ; 0057780c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00577811
    PUSH EAX                            ; 00577815
    CALL FUN_005bfb40                   ; 00577816
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057781b
    MOV EAX,ESP                         ; 0057781e
    PUSH EAX                            ; 00577820
    CALL FUN_005773f0                   ; 00577821
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00577826
    XOR EAX,EAX                         ; 00577829
    ADD ESP,0x350                       ; 0057782b
    POP EBP                             ; 00577831
    POP EDI                             ; 00577832
    POP ESI                             ; 00577833
    POP EBX                             ; 00577834
    RET                                 ; 00577835
    PUSH EAX                            ; 00577836
        ;   Label: LAB_00577836
    CALL FUN_00577500                   ; 00577837
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 0057783c
    PUSH EAX                            ; 0057783f
    PUSH 0x5f4c6a                       ; 00577840 | = "Unlock secondary buffer"
    PUSH 0x5f4c35                       ; 00577845 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0057784a
    PUSH EAX                            ; 00577851
    CALL FUN_005bfb40                   ; 00577852
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00577857
    LEA EAX,[ESP + 0x190]               ; 0057785a
    PUSH EAX                            ; 00577861
    CALL FUN_005773f0                   ; 00577862
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00577867
    XOR EAX,EAX                         ; 0057786a
    ADD ESP,0x350                       ; 0057786c
    POP EBP                             ; 00577872
    POP EDI                             ; 00577873
    POP ESI                             ; 00577874
    POP EBX                             ; 00577875
    RET                                 ; 00577876

