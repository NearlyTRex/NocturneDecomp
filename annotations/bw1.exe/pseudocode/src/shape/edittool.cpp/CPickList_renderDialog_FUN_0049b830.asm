; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_0049b830(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x164]:1  local_164
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004ce580 at 004cef9f
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0 at 0049a941
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f598
;   undefined4 DAT_01c3f59c
;   undefined4 DAT_01c3f5a0
;   undefined4 DAT_01c3f5a4
;   undefined4 DAT_01c3f5a8
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f014
;   ... and 1 more
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_FUN_004c1dd0
;   engine_mini3d.cpp_FUN_00512320
;   engine_mini3d.cpp_FUN_00517d50
;   engine_mini3d.cpp_FUN_00518010
;   shape_edittool.cpp_calculateGridHeight_FUN_0049d450
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   shape_edittool.cpp_FUN_00492a40
;   shape_edittool.cpp_FUN_00496ee0
;   shape_edittool.cpp_FUN_00497660
;   shape_edittool.cpp_FUN_00497870
;   shape_edittool.cpp_FUN_0049caa0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b830
        ;   Label: shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830
    PUSH ESI                            ; 0049b831
    PUSH EDI                            ; 0049b832
    PUSH EBP                            ; 0049b833
    SUB ESP,0x154                       ; 0049b834
    MOV EDX,dword ptr [0x0061abc0]      ; 0049b83a | g_CEditorToolsPtr
    PUSH EDX                            ; 0049b840
    CALL shape_edittool.cpp_FUN_00496ee0 ; 0049b841
        ;   XREF to: 00496ee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496ee0()
    ADD ESP,0x4                         ; 0049b846
    PUSH 0x1                            ; 0049b849
    MOV ECX,dword ptr [0x0061abc0]      ; 0049b84b | g_CEditorToolsPtr
    PUSH ECX                            ; 0049b851
    CALL shape_edittool.cpp_FUN_00497660 ; 0049b852
        ;   XREF to: 00497660 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00497660()
    MOV EAX,[0x01c4f008]                ; 0049b857 | DAT_01c4f008
    ADD ESP,0x8                         ; 0049b85c
    MOV dword ptr [ESP + 0x13c],EAX     ; 0049b85f
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049b866
    MOV EAX,dword ptr [EAX + 0x198]     ; 0049b86d
    MOV dword ptr [ESP + 0x140],EAX     ; 0049b873
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049b87a
    XOR EBX,EBX                         ; 0049b881
    MOV ESI,dword ptr [EAX + 0x1a8]     ; 0049b883
    MOV dword ptr [ESP + 0x130],EBX     ; 0049b889
    TEST ESI,ESI                        ; 0049b890
    JLE 0x0049b9f5                      ; 0049b892
        ;   XREF to: 0049b9f5 (CONDITIONAL_JUMP)  ; LAB_0049b9f5
    MOV EAX,[0x01c4f00c]                ; 0049b898 | DAT_01c4f00c
        ;   Label: LAB_0049b898
    MOV dword ptr [ESP + 0x148],EAX     ; 0049b89d
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049b8a4
    XOR EDI,EDI                         ; 0049b8ab
    MOV EBP,dword ptr [EAX + 0x1a0]     ; 0049b8ad
    MOV dword ptr [ESP + 0x138],EDI     ; 0049b8b3
    TEST EBP,EBP                        ; 0049b8ba
    JLE 0x0049b8d4                      ; 0049b8bc
        ;   XREF to: 0049b8d4 (CONDITIONAL_JUMP)  ; LAB_0049b8d4
    MOV EDX,dword ptr [ESP + 0x168]     ; 0049b8be
        ;   Label: LAB_0049b8be
    MOV EAX,dword ptr [ESP + 0x140]     ; 0049b8c5
    CMP EAX,dword ptr [EDX]             ; 0049b8cc
    JL 0x0049bb21                       ; 0049b8ce
        ;   XREF to: 0049bb21 (CONDITIONAL_JUMP)  ; LAB_0049bb21
    CMP dword ptr [ESP + 0x130],0x0     ; 0049b8d4
        ;   Label: LAB_0049b8d4
    JLE 0x0049b9b4                      ; 0049b8dc
        ;   XREF to: 0049b9b4 (CONDITIONAL_JUMP)  ; LAB_0049b9b4
    MOV EAX,[0x01c3f5a8]                ; 0049b8e2 | DAT_01c3f5a8
    MOV EBP,dword ptr [0x01c3f544]      ; 0049b8e7 | DAT_01c3f544
    MOV EDI,dword ptr [0x01c4f020]      ; 0049b8ed | DAT_01c4f020
    TEST EBP,EBP                        ; 0049b8f3
    JZ 0x0049bdba                       ; 0049b8f5
        ;   XREF to: 0049bdba (CONDITIONAL_JUMP)  ; LAB_0049bdba
    AND EAX,0xff                        ; 0049b8fb
    LEA EAX,[EAX + EAX*0x2]             ; 0049b900
    XOR EDX,EDX                         ; 0049b903
    XOR ECX,ECX                         ; 0049b905
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049b907 | DAT_01c4e9f9
    MOV CL,byte ptr [EAX + 0x1c4e9f8]   ; 0049b90d | DAT_01c4e9f8
    SHL EDX,0x8                         ; 0049b913
    SHL ECX,0x10                        ; 0049b916
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049b919 | DAT_01c4e9fa
    OR EDX,ECX                          ; 0049b91f
    AND EAX,0xff                        ; 0049b921
    OR EAX,EDX                          ; 0049b926
    PUSH EAX                            ; 0049b928
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049b929
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049b92e
    CALL shape_edittool.cpp_calculateGridHeight_FUN_0049d450 ; 0049b931
        ;   XREF to: 0049d450 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_0049d450()
        ;   Label: LAB_0049b931
    MOV EBX,EAX                         ; 0049b936
    MOV EAX,[0x0061b49c]                ; 0049b938 | DAT_0061b49c
    MOV EDX,EAX                         ; 0049b93d
    MOV ECX,0x60                        ; 0049b93f
    SAR EDX,0x1f                        ; 0049b944
    IDIV ECX                            ; 0049b947
    MOV EDX,EAX                         ; 0049b949
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049b94b
    CMP dword ptr [EAX + 0x1f0],0x2     ; 0049b952
    JNZ 0x0049bdc4                      ; 0049b959
        ;   XREF to: 0049bdc4 (CONDITIONAL_JUMP)  ; LAB_0049bdc4
    MOV EAX,0x3                         ; 0049b95f
    MOV ESI,EDX                         ; 0049b964
        ;   Label: LAB_0049b964
    IMUL ESI,EAX                        ; 0049b966
    PUSH 0x0                            ; 0049b969
    CALL shape_edittool.cpp_FUN_0049d9e0 ; 0049b96b
        ;   XREF to: 0049d9e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0049d9e0(char * button_text)
    ADD ESP,0x4                         ; 0049b970
    LEA EDX,[EAX + ESI*0x1]             ; 0049b973
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049b976
    CMP dword ptr [EAX + 0x1f0],0x2     ; 0049b97d
    JNZ 0x0049bdce                      ; 0049b984
        ;   XREF to: 0049bdce (CONDITIONAL_JUMP)  ; LAB_0049bdce
    MOV EAX,EBX                         ; 0049b98a
    ADD EAX,EDX                         ; 0049b98c
        ;   Label: LAB_0049b98c
    MOV EDX,dword ptr [0x01c4f014]      ; 0049b98e | DAT_01c4f014
    SUB EDX,EAX                         ; 0049b994
    PUSH EDX                            ; 0049b996
    MOV EBP,dword ptr [ESP + 0x140]     ; 0049b997
    PUSH EBP                            ; 0049b99e
    MOV EAX,[0x01c4f00c]                ; 0049b99f | DAT_01c4f00c
    PUSH EAX                            ; 0049b9a4
    PUSH EBP                            ; 0049b9a5
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 0049b9a6
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0049b9ab
    MOV dword ptr [0x01c4f020],EDI      ; 0049b9ae | DAT_01c4f020
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049b9b4
        ;   Label: LAB_0049b9b4
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0049b9bb
    MOV EBP,dword ptr [ESP + 0x130]     ; 0049b9c2
    MOV EDX,dword ptr [ESP + 0x168]     ; 0049b9c9
    INC EBP                             ; 0049b9d0
    MOV EAX,dword ptr [EAX + 0x1a4]     ; 0049b9d1
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 0049b9d7
    ADD EDI,EAX                         ; 0049b9dd
    MOV dword ptr [ESP + 0x130],EBP     ; 0049b9df
    MOV dword ptr [ESP + 0x13c],EDI     ; 0049b9e6
    CMP EBP,ECX                         ; 0049b9ed
    JL 0x0049b898                       ; 0049b9ef
        ;   XREF to: 0049b898 (CONDITIONAL_JUMP)  ; LAB_0049b898
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049b9f5
        ;   Label: LAB_0049b9f5
    MOV ECX,dword ptr [ESP + 0x168]     ; 0049b9fc
    MOV EBX,dword ptr [EAX + 0x1f0]     ; 0049ba03
    ADD ECX,0x1bc                       ; 0049ba09
    CMP EBX,0x1                         ; 0049ba0f
    JNZ 0x0049bdd5                      ; 0049ba12
        ;   XREF to: 0049bdd5 (CONDITIONAL_JUMP)  ; LAB_0049bdd5
    MOV EDX,dword ptr [ESP + 0x168]     ; 0049ba18
    MOV EAX,dword ptr [EAX + 0x198]     ; 0049ba1f
    MOV dword ptr [EDX + 0x1bc],EAX     ; 0049ba25
    MOV EAX,dword ptr [EDX]             ; 0049ba2b
    MOV dword ptr [EDX + 0x1c0],EAX     ; 0049ba2d
    MOV EAX,dword ptr [EDX + 0x1a0]     ; 0049ba33
    PUSH ECX                            ; 0049ba39
    MOV dword ptr [EDX + 0x1c4],EAX     ; 0049ba3a
    CALL shape_edittool.cpp_FUN_0049caa0 ; 0049ba40
        ;   XREF to: 0049caa0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049caa0()
        ;   Label: LAB_0049ba40
    ADD ESP,0x4                         ; 0049ba45
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049ba48
        ;   Label: LAB_0049ba48
    CMP byte ptr [EAX + 0x5c],0x0       ; 0049ba4f
    JZ 0x0049ba7a                       ; 0049ba53
        ;   XREF to: 0049ba7a (CONDITIONAL_JUMP)  ; LAB_0049ba7a
    CMP dword ptr [EAX + 0x3bc],0x0     ; 0049ba55
    SETZ AL                             ; 0049ba5c
    AND EAX,0xff                        ; 0049ba5f
    PUSH EAX                            ; 0049ba64
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0049ba65
    ADD EAX,0x1f4                       ; 0049ba6c
    PUSH EAX                            ; 0049ba71
    CALL shape_edittool.cpp_FUN_0049d580 ; 0049ba72
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049d580()
    ADD ESP,0x8                         ; 0049ba77
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049ba7a
        ;   Label: LAB_0049ba7a
    CMP byte ptr [EAX + 0xc0],0x0       ; 0049ba81
    JZ 0x0049baaf                       ; 0049ba88
        ;   XREF to: 0049baaf (CONDITIONAL_JUMP)  ; LAB_0049baaf
    CMP dword ptr [EAX + 0x3bc],0x1     ; 0049ba8a
    SETZ AL                             ; 0049ba91
    AND EAX,0xff                        ; 0049ba94
    PUSH EAX                            ; 0049ba99
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0049ba9a
    ADD EAX,0x2d8                       ; 0049baa1
    PUSH EAX                            ; 0049baa6
    CALL shape_edittool.cpp_FUN_0049d580 ; 0049baa7
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0049d580()
    ADD ESP,0x8                         ; 0049baac
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049baaf
        ;   Label: LAB_0049baaf
    MOV EBX,dword ptr [EAX + 0x58]      ; 0049bab6
    TEST EBX,EBX                        ; 0049bab9
    JZ 0x0049be2a                       ; 0049babb
        ;   XREF to: 0049be2a (CONDITIONAL_JUMP)  ; LAB_0049be2a
    ADD ESP,0x154                       ; 0049bac1
    POP EBP                             ; 0049bac7
    POP EDI                             ; 0049bac8
    POP ESI                             ; 0049bac9
    POP EBX                             ; 0049baca
    RET                                 ; 0049bacb
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049bacc
        ;   Label: LAB_0049bacc
    MOV EDX,dword ptr [ESP + 0x148]     ; 0049bad3
    MOV ECX,dword ptr [ESP + 0x140]     ; 0049bada
    MOV EAX,dword ptr [EAX + 0x18c]     ; 0049bae1
    MOV EBX,dword ptr [ESP + 0x138]     ; 0049bae7
    ADD EDX,EAX                         ; 0049baee
    INC ECX                             ; 0049baf0
    MOV dword ptr [ESP + 0x148],EDX     ; 0049baf1
    MOV EDX,dword ptr [ESP + 0x168]     ; 0049baf8
    INC EBX                             ; 0049baff
    MOV dword ptr [ESP + 0x140],ECX     ; 0049bb00
    MOV ESI,dword ptr [EDX + 0x1a0]     ; 0049bb07
    MOV dword ptr [ESP + 0x138],EBX     ; 0049bb0d
    CMP EBX,ESI                         ; 0049bb14
    JL 0x0049b8be                       ; 0049bb16
        ;   XREF to: 0049b8be (CONDITIONAL_JUMP)  ; LAB_0049b8be
    JMP 0x0049b8d4                      ; 0049bb1c
        ;   XREF to: 0049b8d4 (UNCONDITIONAL_JUMP)  ; LAB_0049b8d4
    CMP EAX,dword ptr [EDX + 0x194]     ; 0049bb21
        ;   Label: LAB_0049bb21
    JNZ 0x0049bc47                      ; 0049bb27
        ;   XREF to: 0049bc47 (CONDITIONAL_JUMP)  ; LAB_0049bc47
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0049bb2d
    MOV EAX,EDX                         ; 0049bb34
    MOV ESI,dword ptr [ESP + 0x148]     ; 0049bb36
    MOV EDX,dword ptr [EDX + 0x1a4]     ; 0049bb3d
    MOV ECX,dword ptr [EAX + 0x18c]     ; 0049bb43
    MOV EBX,dword ptr [EAX + 0x188]     ; 0049bb49
    ADD EDI,EDX                         ; 0049bb4f
    ADD ESI,ECX                         ; 0049bb51
    DEC EDI                             ; 0049bb53
    DEC ESI                             ; 0049bb54
    TEST EBX,EBX                        ; 0049bb55
    JZ 0x0049bd60                       ; 0049bb57
        ;   XREF to: 0049bd60 (CONDITIONAL_JUMP)  ; LAB_0049bd60
    MOV EAX,[0x01c3f5a4]                ; 0049bb5d | DAT_01c3f5a4
    MOV EBX,dword ptr [ESP + 0x148]     ; 0049bb62
        ;   Label: LAB_0049bb62
    MOV EBP,dword ptr [ESP + 0x13c]     ; 0049bb69
    MOV EDX,dword ptr [0x01c3f544]      ; 0049bb70 | DAT_01c3f544
    MOV dword ptr [ESP + 0x12c],EDI     ; 0049bb76
    MOV dword ptr [ESP + 0x134],ESI     ; 0049bb7d
    TEST EDX,EDX                        ; 0049bb84
    JZ 0x0049bd74                       ; 0049bb86
        ;   XREF to: 0049bd74 (CONDITIONAL_JUMP)  ; LAB_0049bd74
    JZ 0x0049bd6a                       ; 0049bb8c
        ;   XREF to: 0049bd6a (CONDITIONAL_JUMP)  ; LAB_0049bd6a
    AND EAX,0xff                        ; 0049bb92
    LEA EAX,[EAX + EAX*0x2]             ; 0049bb97
    XOR EDX,EDX                         ; 0049bb9a
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 0049bb9c | DAT_01c4e9f9
    MOV ECX,EDX                         ; 0049bba2
    XOR EDX,EDX                         ; 0049bba4
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 0049bba6 | DAT_01c4e9f8
    SHL ECX,0x8                         ; 0049bbac
    SHL EDX,0x10                        ; 0049bbaf
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 0049bbb2 | DAT_01c4e9fa
    OR EDX,ECX                          ; 0049bbb8
    AND EAX,0xff                        ; 0049bbba
    OR EAX,EDX                          ; 0049bbbf
    PUSH EAX                            ; 0049bbc1
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049bbc2
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049bbc7
    MOV ECX,dword ptr [ESP + 0x134]     ; 0049bbca
        ;   Label: LAB_0049bbca
    PUSH ECX                            ; 0049bbd1
    MOV EAX,dword ptr [ESP + 0x130]     ; 0049bbd2
    PUSH EAX                            ; 0049bbd9
    PUSH EBX                            ; 0049bbda
    PUSH EBP                            ; 0049bbdb
    CALL engine_mini3d.cpp_FUN_00518010 ; 0049bbdc
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 0049bbe1
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049bbe4
        ;   Label: LAB_0049bbe4
    CMP dword ptr [EAX + 0x3bc],-0x1    ; 0049bbeb
    JNZ 0x0049bc47                      ; 0049bbf2
        ;   XREF to: 0049bc47 (CONDITIONAL_JUMP)  ; LAB_0049bc47
    MOV ECX,dword ptr [0x01c3f544]      ; 0049bbf4 | DAT_01c3f544
    TEST ECX,ECX                        ; 0049bbfa
    JZ 0x0049bd86                       ; 0049bbfc
        ;   XREF to: 0049bd86 (CONDITIONAL_JUMP)  ; LAB_0049bd86
    XOR EDX,EDX                         ; 0049bc02
    XOR EAX,EAX                         ; 0049bc04
    MOV DL,byte ptr [0x01c4e9f9]        ; 0049bc06 | DAT_01c4e9f9
    MOV AL,[0x01c4e9f8]                 ; 0049bc0c | DAT_01c4e9f8
    SHL EDX,0x8                         ; 0049bc11
    SHL EAX,0x10                        ; 0049bc14
    OR EDX,EAX                          ; 0049bc17
    XOR EAX,EAX                         ; 0049bc19
    MOV AL,[0x01c4e9fa]                 ; 0049bc1b | DAT_01c4e9fa
    OR EAX,EDX                          ; 0049bc20
    PUSH EAX                            ; 0049bc22
    CALL engine_mini3d.cpp_FUN_00517d50 ; 0049bc23
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049bc28
    PUSH 0x1                            ; 0049bc2b
        ;   Label: LAB_0049bc2b
    PUSH ESI                            ; 0049bc2d
    PUSH EDI                            ; 0049bc2e
    MOV ESI,dword ptr [ESP + 0x154]     ; 0049bc2f
    PUSH ESI                            ; 0049bc36
    MOV EDI,dword ptr [ESP + 0x14c]     ; 0049bc37
    PUSH EDI                            ; 0049bc3e
    CALL shape_edittool.cpp_FUN_00492a40 ; 0049bc3f
        ;   XREF to: 00492a40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00492a40()
    ADD ESP,0x14                        ; 0049bc44
    MOV EAX,dword ptr [ESP + 0x140]     ; 0049bc47
        ;   Label: LAB_0049bc47
    PUSH EAX                            ; 0049bc4e
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0049bc4f
    XOR EBP,EBP                         ; 0049bc56
    PUSH EDX                            ; 0049bc58
    MOV dword ptr [ESP + 0x154],EBP     ; 0049bc59
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0049bc60
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0049bc65
    MOV EBP,EAX                         ; 0049bc68
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0049bc6a
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049bc71
    MOV EBX,dword ptr [ESP + 0x140]     ; 0049bc78
    MOV ESI,dword ptr [ESP + 0x168]     ; 0049bc7f
    PUSH EBX                            ; 0049bc86
    MOV ECX,dword ptr [EAX + 0x190]     ; 0049bc87
    MOV EAX,[0x01c3f598]                ; 0049bc8d | DAT_01c3f598
    PUSH ESI                            ; 0049bc92
    ADD EDI,ECX                         ; 0049bc93
    MOV dword ptr [ESP + 0x14c],EAX     ; 0049bc95
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100 ; 0049bc9c
        ;   XREF to: 0049c100 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 0049bca1
    TEST EAX,EAX                        ; 0049bca4
    JZ 0x0049bd91                       ; 0049bca6
        ;   XREF to: 0049bd91 (CONDITIONAL_JUMP)  ; LAB_0049bd91
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0049bcac
        ;   Label: LAB_0049bcac
    MOV ECX,dword ptr [ESP + 0x168]     ; 0049bcb3
    SHL EAX,0x2                         ; 0049bcba
    ADD EAX,ECX                         ; 0049bcbd
    MOV dword ptr [ESP + 0x150],EAX     ; 0049bcbf
    XOR BL,BL                           ; 0049bcc6
    MOV EDX,ESP                         ; 0049bcc8
        ;   Label: LAB_0049bcc8
    MOV BH,byte ptr [EBP]               ; 0049bcca
    MOV EAX,EBP                         ; 0049bccd
    CMP BL,BH                           ; 0049bccf
    JZ 0x0049bdb3                       ; 0049bcd1
        ;   XREF to: 0049bdb3 (CONDITIONAL_JUMP)  ; LAB_0049bdb3
    MOV BH,byte ptr [EAX]               ; 0049bcd7
        ;   Label: LAB_0049bcd7
    LEA ECX,[EAX + 0x1]                 ; 0049bcd9
    CMP BH,0x9                          ; 0049bcdc
    JNZ 0x0049bda2                      ; 0049bcdf
        ;   XREF to: 0049bda2 (CONDITIONAL_JUMP)  ; LAB_0049bda2
    MOV ESI,ECX                         ; 0049bce5
    MOV byte ptr [EDX],BL               ; 0049bce7
        ;   Label: LAB_0049bce7
    PUSH 0xffff                         ; 0049bce9
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 0049bcee
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 0049bcf3
    PUSH 0x3f800000                     ; 0049bcf6
    CALL engine_mini3d.cpp_FUN_00512320 ; 0049bcfb
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512320()
    ADD ESP,0x4                         ; 0049bd00
    PUSH -0x1                           ; 0049bd03
    MOV EAX,dword ptr [ESP + 0x148]     ; 0049bd05
    PUSH EAX                            ; 0049bd0c
    MOV EDX,dword ptr [ESP + 0x150]     ; 0049bd0d
    PUSH EDX                            ; 0049bd14
    PUSH EDI                            ; 0049bd15
    LEA EAX,[ESP + 0x10]                ; 0049bd16
    PUSH EAX                            ; 0049bd1a
    MOV ECX,dword ptr [0x01c3eb50]      ; 0049bd1b | DAT_01c3eb50
    PUSH ECX                            ; 0049bd21
    CALL engine_font.cpp_FUN_004c1dd0   ; 0049bd22
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 0049bd27
    MOV EAX,dword ptr [ESP + 0x150]     ; 0049bd2a
    MOV EBP,ESI                         ; 0049bd31
    LEA ECX,[EAX + 0x4]                 ; 0049bd33
    MOV EDX,dword ptr [EAX + 0x10]      ; 0049bd36
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0049bd39
    MOV dword ptr [ESP + 0x150],ECX     ; 0049bd40
    ADD EDI,EDX                         ; 0049bd47
    INC EAX                             ; 0049bd49
    MOV CL,byte ptr [ESI]               ; 0049bd4a
    MOV dword ptr [ESP + 0x14c],EAX     ; 0049bd4c
    CMP BL,CL                           ; 0049bd53
    JZ 0x0049bacc                       ; 0049bd55
        ;   XREF to: 0049bacc (CONDITIONAL_JUMP)  ; LAB_0049bacc
    JMP 0x0049bcc8                      ; 0049bd5b
        ;   XREF to: 0049bcc8 (UNCONDITIONAL_JUMP)  ; LAB_0049bcc8
    MOV EAX,[0x01c3f5a0]                ; 0049bd60 | DAT_01c3f5a0
        ;   Label: LAB_0049bd60
    JMP 0x0049bb62                      ; 0049bd65
        ;   XREF to: 0049bb62 (UNCONDITIONAL_JUMP)  ; LAB_0049bb62
    MOV [0x01c4f020],EAX                ; 0049bd6a | DAT_01c4f020
        ;   Label: LAB_0049bd6a
    JMP 0x0049bbca                      ; 0049bd6f
        ;   XREF to: 0049bbca (UNCONDITIONAL_JUMP)  ; LAB_0049bbca
    PUSH EAX                            ; 0049bd74
        ;   Label: LAB_0049bd74
    PUSH ESI                            ; 0049bd75
    PUSH EDI                            ; 0049bd76
    PUSH EBX                            ; 0049bd77
    PUSH EBP                            ; 0049bd78
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 0049bd79
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0049bd7e
    JMP 0x0049bbe4                      ; 0049bd81
        ;   XREF to: 0049bbe4 (UNCONDITIONAL_JUMP)  ; LAB_0049bbe4
    MOV dword ptr [0x01c4f020],ECX      ; 0049bd86 | DAT_01c4f020
        ;   Label: LAB_0049bd86
    JMP 0x0049bc2b                      ; 0049bd8c
        ;   XREF to: 0049bc2b (UNCONDITIONAL_JUMP)  ; LAB_0049bc2b
    MOV EAX,[0x01c3f59c]                ; 0049bd91 | DAT_01c3f59c
        ;   Label: LAB_0049bd91
    MOV dword ptr [ESP + 0x144],EAX     ; 0049bd96
    JMP 0x0049bcac                      ; 0049bd9d
        ;   XREF to: 0049bcac (UNCONDITIONAL_JUMP)  ; LAB_0049bcac
    MOV AL,byte ptr [EAX]               ; 0049bda2
        ;   Label: LAB_0049bda2
    MOV byte ptr [EDX],AL               ; 0049bda4
    INC EDX                             ; 0049bda6
    MOV BH,byte ptr [ECX]               ; 0049bda7
    MOV EAX,ECX                         ; 0049bda9
    CMP BL,BH                           ; 0049bdab
    JNZ 0x0049bcd7                      ; 0049bdad
        ;   XREF to: 0049bcd7 (CONDITIONAL_JUMP)  ; LAB_0049bcd7
    MOV ESI,EAX                         ; 0049bdb3
        ;   Label: LAB_0049bdb3
    JMP 0x0049bce7                      ; 0049bdb5
        ;   XREF to: 0049bce7 (UNCONDITIONAL_JUMP)  ; LAB_0049bce7
    MOV [0x01c4f020],EAX                ; 0049bdba | DAT_01c4f020
        ;   Label: LAB_0049bdba
    JMP 0x0049b931                      ; 0049bdbf
        ;   XREF to: 0049b931 (UNCONDITIONAL_JUMP)  ; LAB_0049b931
    MOV EAX,0x1                         ; 0049bdc4
        ;   Label: LAB_0049bdc4
    JMP 0x0049b964                      ; 0049bdc9
        ;   XREF to: 0049b964 (UNCONDITIONAL_JUMP)  ; LAB_0049b964
    XOR EAX,EAX                         ; 0049bdce
        ;   Label: LAB_0049bdce
    JMP 0x0049b98c                      ; 0049bdd0
        ;   XREF to: 0049b98c (UNCONDITIONAL_JUMP)  ; LAB_0049b98c
    CMP EBX,0x2                         ; 0049bdd5
        ;   Label: LAB_0049bdd5
    JNZ 0x0049ba48                      ; 0049bdd8
        ;   XREF to: 0049ba48 (CONDITIONAL_JUMP)  ; LAB_0049ba48
    MOV EDX,dword ptr [EAX + 0x198]     ; 0049bdde
    MOV EBX,dword ptr [ESP + 0x168]     ; 0049bde4
    MOV EAX,EDX                         ; 0049bdeb
    MOV EDI,dword ptr [EBX + 0x1a0]     ; 0049bded
    SAR EDX,0x1f                        ; 0049bdf3
    IDIV EDI                            ; 0049bdf6
    MOV dword ptr [EBX + 0x1bc],EAX     ; 0049bdf8
    MOV EBP,dword ptr [EBX + 0x1a0]     ; 0049bdfe
    MOV EAX,dword ptr [EBX]             ; 0049be04
    ADD EAX,EBP                         ; 0049be06
    LEA EDX,[EAX + -0x1]                ; 0049be08
    MOV EAX,EDX                         ; 0049be0b
    SAR EDX,0x1f                        ; 0049be0d
    IDIV EBP                            ; 0049be10
    MOV dword ptr [EBX + 0x1c0],EAX     ; 0049be12
    MOV EAX,dword ptr [EBX + 0x1a8]     ; 0049be18
    PUSH ECX                            ; 0049be1e
    MOV dword ptr [EBX + 0x1c4],EAX     ; 0049be1f
    JMP 0x0049ba40                      ; 0049be25
        ;   XREF to: 0049ba40 (UNCONDITIONAL_JUMP)  ; LAB_0049ba40
    PUSH EBX                            ; 0049be2a
        ;   Label: LAB_0049be2a
    MOV ESI,dword ptr [0x0061abc0]      ; 0049be2b | g_CEditorToolsPtr
    PUSH ESI                            ; 0049be31
    CALL shape_edittool.cpp_FUN_00497870 ; 0049be32
        ;   XREF to: 00497870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00497870()
    ADD ESP,0x8                         ; 0049be37
    ADD ESP,0x154                       ; 0049be3a
    POP EBP                             ; 0049be40
    POP EDI                             ; 0049be41
    POP ESI                             ; 0049be42
    POP EBX                             ; 0049be43
    RET                                 ; 0049be44

