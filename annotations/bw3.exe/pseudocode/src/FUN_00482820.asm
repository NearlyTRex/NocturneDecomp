; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482820(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0xb04]:1  local_b04
; undefined        Stack[-0x904]:1  local_904
; undefined        Stack[-0x704]:1  local_704
; undefined        Stack[-0x600]:1  local_600
; undefined        Stack[-0x4fc]:1  local_4fc
; undefined        Stack[-0x3fc]:1  local_3fc
; undefined        Stack[-0x3fb]:1  local_3fb
; undefined        Stack[-0x2fc]:1  local_2fc
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00482a70 at 00482b7d
;
; Referenced Globals:
;   TerminatedCString s_anon_005bd67e
;   TerminatedCString s_m_d_y_I_M_S_p_005bd68a
;   TerminatedCString s_s_s_d_s_s_005bd69f
;   undefined4 DAT_005fb468
;   undefined4 DAT_005fb46c
;   undefined4 DAT_005fb668
;   undefined4 DAT_005fb66c
;   undefined4 DAT_005fb868
;   undefined4 DAT_005fb86c
;
; Called Functions:
;   FUN_00465e50
;   FUN_00465e80
;   FUN_00482440
;   FUN_005a28c0
;   FUN_005a3260
;   FUN_005a54c0
;   FUN_005a5628
;   FUN_005a5674
;   FUN_005a5b10
;   FUN_005a5b9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482820
        ;   Label: FUN_00482820
    PUSH ESI                            ; 00482821
    PUSH EDI                            ; 00482822
    PUSH EBP                            ; 00482823
    SUB ESP,0xaf4                       ; 00482824
    MOV EBP,dword ptr [ESP + 0xb08]     ; 0048282a
    MOV EBP,dword ptr [EBP]             ; 00482831
    XOR EDX,EDX                         ; 00482834
    DEC EBP                             ; 00482836
    MOV dword ptr [ESP + 0xaf0],EDX     ; 00482837
    TEST EBP,EBP                        ; 0048283e
    JL 0x00482901                       ; 00482840
        ;   XREF to: 00482901 (CONDITIONAL_JUMP)  ; LAB_00482901
    MOV EDX,dword ptr [ESP + 0xaf0]     ; 00482846
        ;   Label: LAB_00482846
    ADD EDX,EBP                         ; 0048284d
    MOV EAX,EDX                         ; 0048284f
    SAR EDX,0x1f                        ; 00482851
    SUB EAX,EDX                         ; 00482854
    SAR EAX,0x1                         ; 00482856
    MOV ECX,0x80                        ; 00482858
    LEA EDI,[ESP + 0x200]               ; 0048285d
    MOV ESI,0x5fb468                    ; 00482864 | DAT_005fb468
    MOV EBX,EAX                         ; 00482869
    MOV EAX,ESP                         ; 0048286b
    MOVSD.REP ES:EDI,ESI                ; 0048286d | DAT_005fb468 | DAT_005fb46c
    PUSH EAX                            ; 0048286f
    LEA EAX,[ESP + 0x204]               ; 00482870
    MOV ECX,0x80                        ; 00482877
    PUSH EAX                            ; 0048287c
    LEA EDI,[ESP + 0x8]                 ; 0048287d
    MOV ESI,0x5fb668                    ; 00482881 | DAT_005fb668
    PUSH 0x5bd67e                       ; 00482886 | = "%[^\t]\t%[^\t]"
    MOVSD.REP ES:EDI,ESI                ; 0048288b | DAT_005fb668 | DAT_005fb66c
    PUSH EBX                            ; 0048288d
    MOV ESI,dword ptr [ESP + 0xb18]     ; 0048288e
    PUSH ESI                            ; 00482895
    CALL FUN_00482440                   ; 00482896
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    ADD ESP,0x8                         ; 0048289b
    PUSH EAX                            ; 0048289e
    CALL FUN_005a5b9c                   ; 0048289f
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b9c()
    ADD ESP,0x10                        ; 004828a4
    MOV EAX,ESP                         ; 004828a7
    PUSH EAX                            ; 004828a9
    LEA EAX,[ESP + 0x204]               ; 004828aa
    PUSH EAX                            ; 004828b1
    PUSH 0x0                            ; 004828b2
    PUSH 0x0                            ; 004828b4
    LEA EAX,[ESP + 0x514]               ; 004828b6
    PUSH EAX                            ; 004828bd
    CALL FUN_00465e80                   ; 004828be
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e80()
    ADD ESP,0x14                        ; 004828c3
    LEA EAX,[ESP + 0x504]               ; 004828c6
    PUSH EAX                            ; 004828cd
    MOV EDI,dword ptr [ESP + 0xb10]     ; 004828ce
    PUSH EDI                            ; 004828d5
    CALL FUN_005a3260                   ; 004828d6
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004828db
    TEST EAX,EAX                        ; 004828de
    JZ 0x00482a55                       ; 004828e0
        ;   XREF to: 00482a55 (CONDITIONAL_JUMP)  ; LAB_00482a55
    JL 0x00482a60                       ; 004828e6
        ;   XREF to: 00482a60 (CONDITIONAL_JUMP)  ; LAB_00482a60
    INC EBX                             ; 004828ec
    MOV dword ptr [ESP + 0xaf0],EBX     ; 004828ed
    CMP EBP,dword ptr [ESP + 0xaf0]     ; 004828f4
        ;   Label: LAB_004828f4
    JGE 0x00482846                      ; 004828fb
        ;   XREF to: 00482846 (CONDITIONAL_JUMP)  ; LAB_00482846
    LEA EAX,[ESP + 0xb18]               ; 00482901
        ;   Label: LAB_00482901
    PUSH EAX                            ; 00482908
    CALL FUN_005a5628                   ; 00482909
        ;   XREF to: 005a5628 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5628()
    ADD ESP,0x4                         ; 0048290e
    PUSH EAX                            ; 00482911
    PUSH 0x5bd68a                       ; 00482912 | = "%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 00482917
    LEA EAX,[ESP + 0xadc]               ; 00482919
    PUSH EAX                            ; 00482920
    LEA EDI,[ESP + 0x410]               ; 00482921
    MOV ESI,0x5fb868                    ; 00482928 | DAT_005fb868
    CALL FUN_005a5674                   ; 0048292d
        ;   XREF to: 005a5674 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5674()
    ADD ESP,0x10                        ; 00482932
    MOV ECX,0x41                        ; 00482935
    MOV EBX,dword ptr [ESP + 0xb10]     ; 0048293a
    MOVSD.REP ES:EDI,ESI                ; 00482941 | DAT_005fb868 | DAT_005fb86c
    TEST EBX,EBX                        ; 00482943
    JZ 0x00482988                       ; 00482945
        ;   XREF to: 00482988 (CONDITIONAL_JUMP)  ; LAB_00482988
    LEA EAX,[ESP + 0x608]               ; 00482947
    PUSH EAX                            ; 0048294e
    LEA EAX,[ESP + 0x90c]               ; 0048294f
    PUSH EAX                            ; 00482956
    PUSH 0x0                            ; 00482957
    PUSH 0x0                            ; 00482959
    PUSH EBX                            ; 0048295b
    CALL FUN_00465e50                   ; 0048295c
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e50()
    ADD ESP,0x14                        ; 00482961
    LEA EAX,[ESP + 0x608]               ; 00482964
    PUSH EAX                            ; 0048296b
    LEA EAX,[ESP + 0x90c]               ; 0048296c
    PUSH EAX                            ; 00482973
    PUSH 0x0                            ; 00482974
    PUSH 0x0                            ; 00482976
    LEA EAX,[ESP + 0x410]               ; 00482978
    PUSH EAX                            ; 0048297f
    CALL FUN_00465e80                   ; 00482980
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e80()
    ADD ESP,0x14                        ; 00482985
    LEA EAX,[ESP + 0x708]               ; 00482988
        ;   Label: LAB_00482988
    PUSH EAX                            ; 0048298f
    LEA EAX,[ESP + 0x80c]               ; 00482990
    PUSH EAX                            ; 00482997
    PUSH 0x0                            ; 00482998
    PUSH 0x0                            ; 0048299a
    MOV EDI,dword ptr [ESP + 0xb1c]     ; 0048299c
    PUSH EDI                            ; 004829a3
    CALL FUN_00465e50                   ; 004829a4
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e50()
    ADD ESP,0x14                        ; 004829a9
    CMP byte ptr [ESP + 0x708],0x2e     ; 004829ac
    JNZ 0x004829e0                      ; 004829b4
        ;   XREF to: 004829e0 (CONDITIONAL_JUMP)  ; LAB_004829e0
    LEA EDI,[ESP + 0x708]               ; 004829b6
    SUB ECX,ECX                         ; 004829bd
    DEC ECX                             ; 004829bf
    XOR EAX,EAX                         ; 004829c0
    SCASB.REPNE ES:EDI                  ; 004829c2
    NOT ECX                             ; 004829c4
    DEC ECX                             ; 004829c6
    PUSH ECX                            ; 004829c7
    LEA EAX,[ESP + 0x70d]               ; 004829c8
    PUSH EAX                            ; 004829cf
    LEA EAX,[ESP + 0x710]               ; 004829d0
    PUSH EAX                            ; 004829d7
    CALL FUN_005a54c0                   ; 004829d8
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 004829dd
    LEA EAX,[ESP + 0x400]               ; 004829e0
        ;   Label: LAB_004829e0
    PUSH EAX                            ; 004829e7
    LEA EAX,[ESP + 0xad4]               ; 004829e8
    PUSH EAX                            ; 004829ef
    MOV EBP,dword ptr [ESP + 0xb1c]     ; 004829f0
    PUSH EBP                            ; 004829f7
    LEA EAX,[ESP + 0x714]               ; 004829f8
    PUSH EAX                            ; 004829ff
    LEA EAX,[ESP + 0x818]               ; 00482a00
    PUSH EAX                            ; 00482a07
    PUSH 0x5bd69f                       ; 00482a08 | = "%s\t%s\t%d\t%s\t%s"
    LEA EAX,[ESP + 0xa20]               ; 00482a0d
    PUSH EAX                            ; 00482a14
    CALL FUN_005a28c0                   ; 00482a15
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x1c                        ; 00482a1a
    LEA EAX,[ESP + 0xa08]               ; 00482a1d
    PUSH EAX                            ; 00482a24
    CALL FUN_005a5b10                   ; 00482a25
        ;   XREF to: 005a5b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b10()
    ADD ESP,0x4                         ; 00482a2a
    LEA EAX,[ESP + 0xa08]               ; 00482a2d
    PUSH EAX                            ; 00482a34
    MOV EAX,dword ptr [ESP + 0xaf4]     ; 00482a35
    MOV EDX,dword ptr [ESP + 0xb0c]     ; 00482a3c
    PUSH EAX                            ; 00482a43
    MOV ECX,dword ptr [ESP + 0xb10]     ; 00482a44
    MOV EDX,dword ptr [EDX + 0xc]       ; 00482a4b
    PUSH ECX                            ; 00482a4e
    CALL dword ptr [EDX + 0xc]          ; 00482a4f
    ADD ESP,0xc                         ; 00482a52
    ADD ESP,0xaf4                       ; 00482a55
        ;   Label: LAB_00482a55
    POP EBP                             ; 00482a5b
    POP EDI                             ; 00482a5c
    POP ESI                             ; 00482a5d
    POP EBX                             ; 00482a5e
    RET                                 ; 00482a5f
    LEA EBP,[EBX + -0x1]                ; 00482a60
        ;   Label: LAB_00482a60
    JMP 0x004828f4                      ; 00482a63
        ;   XREF to: 004828f4 (UNCONDITIONAL_JUMP)  ; LAB_004828f4

