; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00497870(CEditorTools *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_game.cpp_FUN_004ce580 at 004cefbc
;   shape_edittool.cpp_FUN_00494690 at 00494cf7
;   shape_edittool.cpp_FUN_0049b830 at 0049be32
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493fba
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 0049395f
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc220
;   TerminatedCString s_CEditorTools_setMousePoi_005dc236
;   undefined4 DAT_0061abc4
;   undefined4 DAT_0061abc8
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3f540
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_00517d50
;   engine_mini3d.cpp_FUN_00517f10
;   shape_edittool.cpp_FUN_00497830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497870
        ;   Label: shape_edittool.cpp_FUN_00497870
    PUSH ESI                            ; 00497871
    PUSH EDI                            ; 00497872
    PUSH EBP                            ; 00497873
    SUB ESP,0x10                        ; 00497874
    MOV EBX,dword ptr [ESP + 0x28]      ; 00497877
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049787b
    PUSH EDX                            ; 0049787f
    CALL shape_edittool.cpp_FUN_00497830 ; 00497880
        ;   XREF to: 00497830 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_FUN_00497830(CEditorTools * this_ptr)
    MOV ECX,dword ptr [0x01c3f544]      ; 00497885 | DAT_01c3f544
    ADD ESP,0x4                         ; 0049788b
    TEST ECX,ECX                        ; 0049788e
    JNZ 0x00497953                      ; 00497890
        ;   XREF to: 00497953 (CONDITIONAL_JUMP)  ; LAB_00497953
    MOV [0x01c4f020],EAX                ; 00497896 | DAT_01c4f020
    MOV EAX,[0x01c3f540]                ; 0049789b | DAT_01c3f540
        ;   Label: LAB_0049789b
    CMP EAX,0x1                         ; 004978a0
    JNC 0x004981cf                      ; 004978a3
        ;   XREF to: 004981cf (CONDITIONAL_JUMP)  ; LAB_004981cf
    TEST EAX,EAX                        ; 004978a9
    JNZ 0x004981de                      ; 004978ab
        ;   XREF to: 004981de (CONDITIONAL_JUMP)  ; LAB_004981de
    MOV EDX,dword ptr [0x01c4353c]      ; 004978b1 | DAT_01c4353c
    MOV EAX,[0x01c43540]                ; 004978b7 | DAT_01c43540
    TEST EDX,EDX                        ; 004978bc
    JL 0x004978d0                       ; 004978be
        ;   XREF to: 004978d0 (CONDITIONAL_JUMP)  ; LAB_004978d0
    TEST EAX,EAX                        ; 004978c0
    JL 0x004978d0                       ; 004978c2
        ;   XREF to: 004978d0 (CONDITIONAL_JUMP)  ; LAB_004978d0
    CMP EDX,dword ptr [0x0061b498]      ; 004978c4 | DAT_0061b498
    JL 0x00497994                       ; 004978ca
        ;   XREF to: 00497994 (CONDITIONAL_JUMP)  ; LAB_00497994
    MOV EDI,0x1                         ; 004978d0
        ;   Label: LAB_004978d0
    XOR EBP,EBP                         ; 004978d5
    MOV EAX,[0x0061abc4]                ; 004978d7 | DAT_0061abc4
        ;   Label: LAB_004978d7
    MOV EDX,EAX                         ; 004978dc
    SAR EDX,0x1f                        ; 004978de
    SUB EAX,EDX                         ; 004978e1
    SAR EAX,0x1                         ; 004978e3
    CMP EDI,EAX                         ; 004978e5
    JLE 0x004979fb                      ; 004978e7
        ;   XREF to: 004979fb (CONDITIONAL_JUMP)  ; LAB_004979fb
    MOV EDI,0x1                         ; 004978ed
    XOR EBP,EBP                         ; 004978f2
    MOV EAX,[0x0061abc8]                ; 004978f4 | DAT_0061abc8
        ;   Label: LAB_004978f4
    MOV EDX,EAX                         ; 004978f9
    SAR EDX,0x1f                        ; 004978fb
    SUB EAX,EDX                         ; 004978fe
    SAR EAX,0x1                         ; 00497900
    CMP EDI,EAX                         ; 00497902
    JG 0x00498200                       ; 00497904
        ;   XREF to: 00498200 (CONDITIONAL_JUMP)  ; LAB_00498200
    MOV ESI,dword ptr [0x01c43540]      ; 0049790a | DAT_01c43540
    SUB ESI,EDI                         ; 00497910
    MOV EAX,[0x01c4353c]                ; 00497912 | DAT_01c4353c
    MOV EDX,ESI                         ; 00497917
    TEST EAX,EAX                        ; 00497919
    JL 0x0049792d                       ; 0049791b
        ;   XREF to: 0049792d (CONDITIONAL_JUMP)  ; LAB_0049792d
    TEST ESI,ESI                        ; 0049791d
    JL 0x0049792d                       ; 0049791f
        ;   XREF to: 0049792d (CONDITIONAL_JUMP)  ; LAB_0049792d
    CMP EAX,dword ptr [0x0061b498]      ; 00497921 | DAT_0061b498
    JL 0x00497b13                       ; 00497927
        ;   XREF to: 00497b13 (CONDITIONAL_JUMP)  ; LAB_00497b13
    MOV ESI,dword ptr [0x01c43540]      ; 0049792d | DAT_01c43540
        ;   Label: LAB_0049792d
    ADD ESI,EDI                         ; 00497933
    MOV EAX,[0x01c4353c]                ; 00497935 | DAT_01c4353c
    MOV EDX,ESI                         ; 0049793a
    TEST EAX,EAX                        ; 0049793c
    JL 0x00497950                       ; 0049793e
        ;   XREF to: 00497950 (CONDITIONAL_JUMP)  ; LAB_00497950
    TEST ESI,ESI                        ; 00497940
    JL 0x00497950                       ; 00497942
        ;   XREF to: 00497950 (CONDITIONAL_JUMP)  ; LAB_00497950
    CMP EAX,dword ptr [0x0061b498]      ; 00497944 | DAT_0061b498
    JL 0x00497b79                       ; 0049794a
        ;   XREF to: 00497b79 (CONDITIONAL_JUMP)  ; LAB_00497b79
    INC EDI                             ; 00497950
        ;   Label: LAB_00497950
    JMP 0x004978f4                      ; 00497951
        ;   XREF to: 004978f4 (UNCONDITIONAL_JUMP)  ; LAB_004978f4
    AND EAX,0xff                        ; 00497953
        ;   Label: LAB_00497953
    MOV EDX,EAX                         ; 00497958
    SHL EAX,0x2                         ; 0049795a
    SUB EAX,EDX                         ; 0049795d
    XOR EDX,EDX                         ; 0049795f
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00497961 | DAT_01c4e9f9
    MOV ESI,EDX                         ; 00497967
    XOR EDX,EDX                         ; 00497969
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 0049796b | DAT_01c4e9f8
    SHL ESI,0x8                         ; 00497971
    SHL EDX,0x10                        ; 00497974
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00497977 | DAT_01c4e9fa
    OR EDX,ESI                          ; 0049797d
    AND EAX,0xff                        ; 0049797f
    OR EAX,EDX                          ; 00497984
    PUSH EAX                            ; 00497986
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00497987
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 0049798c
    JMP 0x0049789b                      ; 0049798f
        ;   XREF to: 0049789b (UNCONDITIONAL_JUMP)  ; LAB_0049789b
    CMP EAX,dword ptr [0x0061b49c]      ; 00497994 | DAT_0061b49c
        ;   Label: LAB_00497994
    JGE 0x004978d0                      ; 0049799a
        ;   XREF to: 004978d0 (CONDITIONAL_JUMP)  ; LAB_004978d0
    TEST EBX,EBX                        ; 004979a0
    JZ 0x004979d4                       ; 004979a2
        ;   XREF to: 004979d4 (CONDITIONAL_JUMP)  ; LAB_004979d4
    CMP EDX,dword ptr [0x01c4f008]      ; 004979a4 | DAT_01c4f008
    JL 0x004978d0                       ; 004979aa
        ;   XREF to: 004978d0 (CONDITIONAL_JUMP)  ; LAB_004978d0
    CMP EDX,dword ptr [0x01c4f010]      ; 004979b0 | DAT_01c4f010
    JGE 0x004978d0                      ; 004979b6
        ;   XREF to: 004978d0 (CONDITIONAL_JUMP)  ; LAB_004978d0
    CMP EAX,dword ptr [0x01c4f00c]      ; 004979bc | DAT_01c4f00c
    JL 0x004978d0                       ; 004979c2
        ;   XREF to: 004978d0 (CONDITIONAL_JUMP)  ; LAB_004978d0
    CMP EAX,dword ptr [0x01c4f014]      ; 004979c8 | DAT_01c4f014
    JGE 0x004978d0                      ; 004979ce
        ;   XREF to: 004978d0 (CONDITIONAL_JUMP)  ; LAB_004978d0
    CMP dword ptr [0x01c3f544],0x0      ; 004979d4 | DAT_01c3f544
        ;   Label: LAB_004979d4
    JZ 0x004979ec                       ; 004979db
        ;   XREF to: 004979ec (CONDITIONAL_JUMP)  ; LAB_004979ec
    PUSH EAX                            ; 004979dd
    PUSH EDX                            ; 004979de
    CALL engine_mini3d.cpp_FUN_00517f10 ; 004979df
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 004979e4
    JMP 0x004978d0                      ; 004979e7
        ;   XREF to: 004978d0 (UNCONDITIONAL_JUMP)  ; LAB_004978d0
    PUSH EAX                            ; 004979ec
        ;   Label: LAB_004979ec
    PUSH EDX                            ; 004979ed
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004979ee
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004979f3
    JMP 0x004978d0                      ; 004979f6
        ;   XREF to: 004978d0 (UNCONDITIONAL_JUMP)  ; LAB_004978d0
    MOV ESI,dword ptr [0x01c4353c]      ; 004979fb | DAT_01c4353c
        ;   Label: LAB_004979fb
    SUB ESI,EDI                         ; 00497a01
    MOV EAX,[0x01c43540]                ; 00497a03 | DAT_01c43540
    MOV EDX,ESI                         ; 00497a08
    TEST ESI,ESI                        ; 00497a0a
    JL 0x00497a1e                       ; 00497a0c
        ;   XREF to: 00497a1e (CONDITIONAL_JUMP)  ; LAB_00497a1e
    TEST EAX,EAX                        ; 00497a0e
    JL 0x00497a1e                       ; 00497a10
        ;   XREF to: 00497a1e (CONDITIONAL_JUMP)  ; LAB_00497a1e
    CMP ESI,dword ptr [0x0061b498]      ; 00497a12 | DAT_0061b498
    JL 0x00497a9d                       ; 00497a18
        ;   XREF to: 00497a9d (CONDITIONAL_JUMP)  ; LAB_00497a9d
    MOV ESI,dword ptr [0x01c4353c]      ; 00497a1e | DAT_01c4353c
        ;   Label: LAB_00497a1e
    ADD ESI,EDI                         ; 00497a24
    MOV EAX,[0x01c43540]                ; 00497a26 | DAT_01c43540
    MOV EDX,ESI                         ; 00497a2b
    TEST ESI,ESI                        ; 00497a2d
    JL 0x00497b0d                       ; 00497a2f
        ;   XREF to: 00497b0d (CONDITIONAL_JUMP)  ; LAB_00497b0d
    TEST EAX,EAX                        ; 00497a35
    JL 0x00497b0d                       ; 00497a37
        ;   XREF to: 00497b0d (CONDITIONAL_JUMP)  ; LAB_00497b0d
    CMP ESI,dword ptr [0x0061b498]      ; 00497a3d | DAT_0061b498
    JGE 0x00497b0d                      ; 00497a43
        ;   XREF to: 00497b0d (CONDITIONAL_JUMP)  ; LAB_00497b0d
    CMP EAX,dword ptr [0x0061b49c]      ; 00497a49 | DAT_0061b49c
    JGE 0x00497b0d                      ; 00497a4f
        ;   XREF to: 00497b0d (CONDITIONAL_JUMP)  ; LAB_00497b0d
    TEST EBX,EBX                        ; 00497a55
    JZ 0x00497a89                       ; 00497a57
        ;   XREF to: 00497a89 (CONDITIONAL_JUMP)  ; LAB_00497a89
    CMP ESI,dword ptr [0x01c4f008]      ; 00497a59 | DAT_01c4f008
    JL 0x00497b0d                       ; 00497a5f
        ;   XREF to: 00497b0d (CONDITIONAL_JUMP)  ; LAB_00497b0d
    CMP ESI,dword ptr [0x01c4f010]      ; 00497a65 | DAT_01c4f010
    JGE 0x00497b0d                      ; 00497a6b
        ;   XREF to: 00497b0d (CONDITIONAL_JUMP)  ; LAB_00497b0d
    CMP EAX,dword ptr [0x01c4f00c]      ; 00497a71 | DAT_01c4f00c
    JL 0x00497b0d                       ; 00497a77
        ;   XREF to: 00497b0d (CONDITIONAL_JUMP)  ; LAB_00497b0d
    CMP EAX,dword ptr [0x01c4f014]      ; 00497a7d | DAT_01c4f014
    JGE 0x00497b0d                      ; 00497a83
        ;   XREF to: 00497b0d (CONDITIONAL_JUMP)  ; LAB_00497b0d
    CMP EBP,dword ptr [0x01c3f544]      ; 00497a89 | DAT_01c3f544
        ;   Label: LAB_00497a89
    JZ 0x00497b03                       ; 00497a8f
        ;   XREF to: 00497b03 (CONDITIONAL_JUMP)  ; LAB_00497b03
    PUSH EAX                            ; 00497a91
    PUSH EDX                            ; 00497a92
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497a93
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497a98
    JMP 0x00497b0d                      ; 00497a9b
        ;   XREF to: 00497b0d (UNCONDITIONAL_JUMP)  ; LAB_00497b0d
    CMP EAX,dword ptr [0x0061b49c]      ; 00497a9d | DAT_0061b49c
        ;   Label: LAB_00497a9d
    JGE 0x00497a1e                      ; 00497aa3
        ;   XREF to: 00497a1e (CONDITIONAL_JUMP)  ; LAB_00497a1e
    TEST EBX,EBX                        ; 00497aa9
    JZ 0x00497add                       ; 00497aab
        ;   XREF to: 00497add (CONDITIONAL_JUMP)  ; LAB_00497add
    CMP ESI,dword ptr [0x01c4f008]      ; 00497aad | DAT_01c4f008
    JL 0x00497a1e                       ; 00497ab3
        ;   XREF to: 00497a1e (CONDITIONAL_JUMP)  ; LAB_00497a1e
    CMP ESI,dword ptr [0x01c4f010]      ; 00497ab9 | DAT_01c4f010
    JGE 0x00497a1e                      ; 00497abf
        ;   XREF to: 00497a1e (CONDITIONAL_JUMP)  ; LAB_00497a1e
    CMP EAX,dword ptr [0x01c4f00c]      ; 00497ac5 | DAT_01c4f00c
    JL 0x00497a1e                       ; 00497acb
        ;   XREF to: 00497a1e (CONDITIONAL_JUMP)  ; LAB_00497a1e
    CMP EAX,dword ptr [0x01c4f014]      ; 00497ad1 | DAT_01c4f014
    JGE 0x00497a1e                      ; 00497ad7
        ;   XREF to: 00497a1e (CONDITIONAL_JUMP)  ; LAB_00497a1e
    CMP EBP,dword ptr [0x01c3f544]      ; 00497add | DAT_01c3f544
        ;   Label: LAB_00497add
    JZ 0x00497af4                       ; 00497ae3
        ;   XREF to: 00497af4 (CONDITIONAL_JUMP)  ; LAB_00497af4
    PUSH EAX                            ; 00497ae5
    PUSH EDX                            ; 00497ae6
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497ae7
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497aec
    JMP 0x00497a1e                      ; 00497aef
        ;   XREF to: 00497a1e (UNCONDITIONAL_JUMP)  ; LAB_00497a1e
    PUSH EAX                            ; 00497af4
        ;   Label: LAB_00497af4
    PUSH EDX                            ; 00497af5
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497af6
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497afb
    JMP 0x00497a1e                      ; 00497afe
        ;   XREF to: 00497a1e (UNCONDITIONAL_JUMP)  ; LAB_00497a1e
    PUSH EAX                            ; 00497b03
        ;   Label: LAB_00497b03
    PUSH EDX                            ; 00497b04
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497b05
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497b0a
    INC EDI                             ; 00497b0d
        ;   Label: LAB_00497b0d
    JMP 0x004978d7                      ; 00497b0e
        ;   XREF to: 004978d7 (UNCONDITIONAL_JUMP)  ; LAB_004978d7
    CMP ESI,dword ptr [0x0061b49c]      ; 00497b13 | DAT_0061b49c
        ;   Label: LAB_00497b13
    JGE 0x0049792d                      ; 00497b19
        ;   XREF to: 0049792d (CONDITIONAL_JUMP)  ; LAB_0049792d
    TEST EBX,EBX                        ; 00497b1f
    JZ 0x00497b53                       ; 00497b21
        ;   XREF to: 00497b53 (CONDITIONAL_JUMP)  ; LAB_00497b53
    CMP EAX,dword ptr [0x01c4f008]      ; 00497b23 | DAT_01c4f008
    JL 0x0049792d                       ; 00497b29
        ;   XREF to: 0049792d (CONDITIONAL_JUMP)  ; LAB_0049792d
    CMP EAX,dword ptr [0x01c4f010]      ; 00497b2f | DAT_01c4f010
    JGE 0x0049792d                      ; 00497b35
        ;   XREF to: 0049792d (CONDITIONAL_JUMP)  ; LAB_0049792d
    CMP ESI,dword ptr [0x01c4f00c]      ; 00497b3b | DAT_01c4f00c
    JL 0x0049792d                       ; 00497b41
        ;   XREF to: 0049792d (CONDITIONAL_JUMP)  ; LAB_0049792d
    CMP ESI,dword ptr [0x01c4f014]      ; 00497b47 | DAT_01c4f014
    JGE 0x0049792d                      ; 00497b4d
        ;   XREF to: 0049792d (CONDITIONAL_JUMP)  ; LAB_0049792d
    CMP EBP,dword ptr [0x01c3f544]      ; 00497b53 | DAT_01c3f544
        ;   Label: LAB_00497b53
    JZ 0x00497b6a                       ; 00497b59
        ;   XREF to: 00497b6a (CONDITIONAL_JUMP)  ; LAB_00497b6a
    PUSH EDX                            ; 00497b5b
    PUSH EAX                            ; 00497b5c
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497b5d
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497b62
    JMP 0x0049792d                      ; 00497b65
        ;   XREF to: 0049792d (UNCONDITIONAL_JUMP)  ; LAB_0049792d
    PUSH EDX                            ; 00497b6a
        ;   Label: LAB_00497b6a
    PUSH EAX                            ; 00497b6b
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497b6c
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497b71
    JMP 0x0049792d                      ; 00497b74
        ;   XREF to: 0049792d (UNCONDITIONAL_JUMP)  ; LAB_0049792d
    CMP ESI,dword ptr [0x0061b49c]      ; 00497b79 | DAT_0061b49c
        ;   Label: LAB_00497b79
    JGE 0x00497950                      ; 00497b7f
        ;   XREF to: 00497950 (CONDITIONAL_JUMP)  ; LAB_00497950
    TEST EBX,EBX                        ; 00497b85
    JZ 0x00497bb9                       ; 00497b87
        ;   XREF to: 00497bb9 (CONDITIONAL_JUMP)  ; LAB_00497bb9
    CMP EAX,dword ptr [0x01c4f008]      ; 00497b89 | DAT_01c4f008
    JL 0x00497950                       ; 00497b8f
        ;   XREF to: 00497950 (CONDITIONAL_JUMP)  ; LAB_00497950
    CMP EAX,dword ptr [0x01c4f010]      ; 00497b95 | DAT_01c4f010
    JGE 0x00497950                      ; 00497b9b
        ;   XREF to: 00497950 (CONDITIONAL_JUMP)  ; LAB_00497950
    CMP ESI,dword ptr [0x01c4f00c]      ; 00497ba1 | DAT_01c4f00c
    JL 0x00497950                       ; 00497ba7
        ;   XREF to: 00497950 (CONDITIONAL_JUMP)  ; LAB_00497950
    CMP ESI,dword ptr [0x01c4f014]      ; 00497bad | DAT_01c4f014
    JGE 0x00497950                      ; 00497bb3
        ;   XREF to: 00497950 (CONDITIONAL_JUMP)  ; LAB_00497950
    CMP EBP,dword ptr [0x01c3f544]      ; 00497bb9 | DAT_01c3f544
        ;   Label: LAB_00497bb9
    JZ 0x00497bd1                       ; 00497bbf
        ;   XREF to: 00497bd1 (CONDITIONAL_JUMP)  ; LAB_00497bd1
    PUSH EDX                            ; 00497bc1
    PUSH EAX                            ; 00497bc2
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497bc3
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497bc8
    INC EDI                             ; 00497bcb
    JMP 0x004978f4                      ; 00497bcc
        ;   XREF to: 004978f4 (UNCONDITIONAL_JUMP)  ; LAB_004978f4
    PUSH EDX                            ; 00497bd1
        ;   Label: LAB_00497bd1
    PUSH EAX                            ; 00497bd2
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497bd3
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497bd8
    INC EDI                             ; 00497bdb
    JMP 0x004978f4                      ; 00497bdc
        ;   XREF to: 004978f4 (UNCONDITIONAL_JUMP)  ; LAB_004978f4
    MOV EAX,[0x01c4353c]                ; 00497be1 | DAT_01c4353c
        ;   Label: LAB_00497be1
    MOV EDX,dword ptr [0x01c43540]      ; 00497be6 | DAT_01c43540
    TEST EAX,EAX                        ; 00497bec
    JL 0x00497c00                       ; 00497bee
        ;   XREF to: 00497c00 (CONDITIONAL_JUMP)  ; LAB_00497c00
    TEST EDX,EDX                        ; 00497bf0
    JL 0x00497c00                       ; 00497bf2
        ;   XREF to: 00497c00 (CONDITIONAL_JUMP)  ; LAB_00497c00
    CMP EAX,dword ptr [0x0061b498]      ; 00497bf4 | DAT_0061b498
    JL 0x00497cbd                       ; 00497bfa
        ;   XREF to: 00497cbd (CONDITIONAL_JUMP)  ; LAB_00497cbd
    MOV ESI,0x1                         ; 00497c00
        ;   Label: LAB_00497c00
    MOV EAX,[0x0061abc4]                ; 00497c05 | DAT_0061abc4
        ;   Label: LAB_00497c05
    MOV EDX,EAX                         ; 00497c0a
    SAR EDX,0x1f                        ; 00497c0c
    SUB EAX,EDX                         ; 00497c0f
    SAR EAX,0x1                         ; 00497c11
    CMP ESI,EAX                         ; 00497c13
    JG 0x00498200                       ; 00497c15
        ;   XREF to: 00498200 (CONDITIONAL_JUMP)  ; LAB_00498200
    MOV EDI,dword ptr [0x01c4353c]      ; 00497c1b | DAT_01c4353c
    MOV EAX,[0x01c43540]                ; 00497c21 | DAT_01c43540
    SUB EDI,ESI                         ; 00497c26
    SUB EAX,ESI                         ; 00497c28
    MOV EBP,EDI                         ; 00497c2a
    MOV EDX,EAX                         ; 00497c2c
    TEST EDI,EDI                        ; 00497c2e
    JL 0x00497c42                       ; 00497c30
        ;   XREF to: 00497c42 (CONDITIONAL_JUMP)  ; LAB_00497c42
    TEST EAX,EAX                        ; 00497c32
    JL 0x00497c42                       ; 00497c34
        ;   XREF to: 00497c42 (CONDITIONAL_JUMP)  ; LAB_00497c42
    CMP EDI,dword ptr [0x0061b498]      ; 00497c36 | DAT_0061b498
    JL 0x00497d24                       ; 00497c3c
        ;   XREF to: 00497d24 (CONDITIONAL_JUMP)  ; LAB_00497d24
    MOV EAX,[0x01c4353c]                ; 00497c42 | DAT_01c4353c
        ;   Label: LAB_00497c42
    MOV EDI,dword ptr [0x01c43540]      ; 00497c47 | DAT_01c43540
    ADD EAX,ESI                         ; 00497c4d
    SUB EDI,ESI                         ; 00497c4f
    MOV EDX,EAX                         ; 00497c51
    MOV EBP,EDI                         ; 00497c53
    TEST EAX,EAX                        ; 00497c55
    JL 0x00497c69                       ; 00497c57
        ;   XREF to: 00497c69 (CONDITIONAL_JUMP)  ; LAB_00497c69
    TEST EDI,EDI                        ; 00497c59
    JL 0x00497c69                       ; 00497c5b
        ;   XREF to: 00497c69 (CONDITIONAL_JUMP)  ; LAB_00497c69
    CMP EAX,dword ptr [0x0061b498]      ; 00497c5d | DAT_0061b498
    JL 0x00497d8b                       ; 00497c63
        ;   XREF to: 00497d8b (CONDITIONAL_JUMP)  ; LAB_00497d8b
    MOV EDI,dword ptr [0x01c4353c]      ; 00497c69 | DAT_01c4353c
        ;   Label: LAB_00497c69
    MOV EAX,[0x01c43540]                ; 00497c6f | DAT_01c43540
    SUB EDI,ESI                         ; 00497c74
    ADD EAX,ESI                         ; 00497c76
    MOV EDX,EDI                         ; 00497c78
    MOV EBP,EAX                         ; 00497c7a
    TEST EDI,EDI                        ; 00497c7c
    JL 0x00497c90                       ; 00497c7e
        ;   XREF to: 00497c90 (CONDITIONAL_JUMP)  ; LAB_00497c90
    TEST EAX,EAX                        ; 00497c80
    JL 0x00497c90                       ; 00497c82
        ;   XREF to: 00497c90 (CONDITIONAL_JUMP)  ; LAB_00497c90
    CMP EDI,dword ptr [0x0061b498]      ; 00497c84 | DAT_0061b498
    JL 0x00497df2                       ; 00497c8a
        ;   XREF to: 00497df2 (CONDITIONAL_JUMP)  ; LAB_00497df2
    MOV EAX,[0x01c4353c]                ; 00497c90 | DAT_01c4353c
        ;   Label: LAB_00497c90
    MOV EDI,dword ptr [0x01c43540]      ; 00497c95 | DAT_01c43540
    ADD EAX,ESI                         ; 00497c9b
    ADD EDI,ESI                         ; 00497c9d
    MOV EDX,EAX                         ; 00497c9f
    MOV EBP,EDI                         ; 00497ca1
    TEST EAX,EAX                        ; 00497ca3
    JL 0x00497cb7                       ; 00497ca5
        ;   XREF to: 00497cb7 (CONDITIONAL_JUMP)  ; LAB_00497cb7
    TEST EDI,EDI                        ; 00497ca7
    JL 0x00497cb7                       ; 00497ca9
        ;   XREF to: 00497cb7 (CONDITIONAL_JUMP)  ; LAB_00497cb7
    CMP EAX,dword ptr [0x0061b498]      ; 00497cab | DAT_0061b498
    JL 0x00497e59                       ; 00497cb1
        ;   XREF to: 00497e59 (CONDITIONAL_JUMP)  ; LAB_00497e59
    INC ESI                             ; 00497cb7
        ;   Label: LAB_00497cb7
    JMP 0x00497c05                      ; 00497cb8
        ;   XREF to: 00497c05 (UNCONDITIONAL_JUMP)  ; LAB_00497c05
    CMP EDX,dword ptr [0x0061b49c]      ; 00497cbd | DAT_0061b49c
        ;   Label: LAB_00497cbd
    JGE 0x00497c00                      ; 00497cc3
        ;   XREF to: 00497c00 (CONDITIONAL_JUMP)  ; LAB_00497c00
    TEST EBX,EBX                        ; 00497cc9
    JZ 0x00497cfd                       ; 00497ccb
        ;   XREF to: 00497cfd (CONDITIONAL_JUMP)  ; LAB_00497cfd
    CMP EAX,dword ptr [0x01c4f008]      ; 00497ccd | DAT_01c4f008
    JL 0x00497c00                       ; 00497cd3
        ;   XREF to: 00497c00 (CONDITIONAL_JUMP)  ; LAB_00497c00
    CMP EAX,dword ptr [0x01c4f010]      ; 00497cd9 | DAT_01c4f010
    JGE 0x00497c00                      ; 00497cdf
        ;   XREF to: 00497c00 (CONDITIONAL_JUMP)  ; LAB_00497c00
    CMP EDX,dword ptr [0x01c4f00c]      ; 00497ce5 | DAT_01c4f00c
    JL 0x00497c00                       ; 00497ceb
        ;   XREF to: 00497c00 (CONDITIONAL_JUMP)  ; LAB_00497c00
    CMP EDX,dword ptr [0x01c4f014]      ; 00497cf1 | DAT_01c4f014
    JGE 0x00497c00                      ; 00497cf7
        ;   XREF to: 00497c00 (CONDITIONAL_JUMP)  ; LAB_00497c00
    CMP dword ptr [0x01c3f544],0x0      ; 00497cfd | DAT_01c3f544
        ;   Label: LAB_00497cfd
    JZ 0x00497d15                       ; 00497d04
        ;   XREF to: 00497d15 (CONDITIONAL_JUMP)  ; LAB_00497d15
    PUSH EDX                            ; 00497d06
    PUSH EAX                            ; 00497d07
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497d08
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497d0d
    JMP 0x00497c00                      ; 00497d10
        ;   XREF to: 00497c00 (UNCONDITIONAL_JUMP)  ; LAB_00497c00
    PUSH EDX                            ; 00497d15
        ;   Label: LAB_00497d15
    PUSH EAX                            ; 00497d16
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497d17
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497d1c
    JMP 0x00497c00                      ; 00497d1f
        ;   XREF to: 00497c00 (UNCONDITIONAL_JUMP)  ; LAB_00497c00
    CMP EAX,dword ptr [0x0061b49c]      ; 00497d24 | DAT_0061b49c
        ;   Label: LAB_00497d24
    JGE 0x00497c42                      ; 00497d2a
        ;   XREF to: 00497c42 (CONDITIONAL_JUMP)  ; LAB_00497c42
    TEST EBX,EBX                        ; 00497d30
    JZ 0x00497d64                       ; 00497d32
        ;   XREF to: 00497d64 (CONDITIONAL_JUMP)  ; LAB_00497d64
    CMP EDI,dword ptr [0x01c4f008]      ; 00497d34 | DAT_01c4f008
    JL 0x00497c42                       ; 00497d3a
        ;   XREF to: 00497c42 (CONDITIONAL_JUMP)  ; LAB_00497c42
    CMP EDI,dword ptr [0x01c4f010]      ; 00497d40 | DAT_01c4f010
    JGE 0x00497c42                      ; 00497d46
        ;   XREF to: 00497c42 (CONDITIONAL_JUMP)  ; LAB_00497c42
    CMP EAX,dword ptr [0x01c4f00c]      ; 00497d4c | DAT_01c4f00c
    JL 0x00497c42                       ; 00497d52
        ;   XREF to: 00497c42 (CONDITIONAL_JUMP)  ; LAB_00497c42
    CMP EAX,dword ptr [0x01c4f014]      ; 00497d58 | DAT_01c4f014
    JGE 0x00497c42                      ; 00497d5e
        ;   XREF to: 00497c42 (CONDITIONAL_JUMP)  ; LAB_00497c42
    CMP dword ptr [0x01c3f544],0x0      ; 00497d64 | DAT_01c3f544
        ;   Label: LAB_00497d64
    JZ 0x00497d7c                       ; 00497d6b
        ;   XREF to: 00497d7c (CONDITIONAL_JUMP)  ; LAB_00497d7c
    PUSH EDX                            ; 00497d6d
    PUSH EBP                            ; 00497d6e
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497d6f
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497d74
    JMP 0x00497c42                      ; 00497d77
        ;   XREF to: 00497c42 (UNCONDITIONAL_JUMP)  ; LAB_00497c42
    PUSH EDX                            ; 00497d7c
        ;   Label: LAB_00497d7c
    PUSH EBP                            ; 00497d7d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497d7e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497d83
    JMP 0x00497c42                      ; 00497d86
        ;   XREF to: 00497c42 (UNCONDITIONAL_JUMP)  ; LAB_00497c42
    CMP EDI,dword ptr [0x0061b49c]      ; 00497d8b | DAT_0061b49c
        ;   Label: LAB_00497d8b
    JGE 0x00497c69                      ; 00497d91
        ;   XREF to: 00497c69 (CONDITIONAL_JUMP)  ; LAB_00497c69
    TEST EBX,EBX                        ; 00497d97
    JZ 0x00497dcb                       ; 00497d99
        ;   XREF to: 00497dcb (CONDITIONAL_JUMP)  ; LAB_00497dcb
    CMP EAX,dword ptr [0x01c4f008]      ; 00497d9b | DAT_01c4f008
    JL 0x00497c69                       ; 00497da1
        ;   XREF to: 00497c69 (CONDITIONAL_JUMP)  ; LAB_00497c69
    CMP EAX,dword ptr [0x01c4f010]      ; 00497da7 | DAT_01c4f010
    JGE 0x00497c69                      ; 00497dad
        ;   XREF to: 00497c69 (CONDITIONAL_JUMP)  ; LAB_00497c69
    CMP EDI,dword ptr [0x01c4f00c]      ; 00497db3 | DAT_01c4f00c
    JL 0x00497c69                       ; 00497db9
        ;   XREF to: 00497c69 (CONDITIONAL_JUMP)  ; LAB_00497c69
    CMP EDI,dword ptr [0x01c4f014]      ; 00497dbf | DAT_01c4f014
    JGE 0x00497c69                      ; 00497dc5
        ;   XREF to: 00497c69 (CONDITIONAL_JUMP)  ; LAB_00497c69
    CMP dword ptr [0x01c3f544],0x0      ; 00497dcb | DAT_01c3f544
        ;   Label: LAB_00497dcb
    JZ 0x00497de3                       ; 00497dd2
        ;   XREF to: 00497de3 (CONDITIONAL_JUMP)  ; LAB_00497de3
    PUSH EBP                            ; 00497dd4
    PUSH EDX                            ; 00497dd5
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497dd6
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497ddb
    JMP 0x00497c69                      ; 00497dde
        ;   XREF to: 00497c69 (UNCONDITIONAL_JUMP)  ; LAB_00497c69
    PUSH EBP                            ; 00497de3
        ;   Label: LAB_00497de3
    PUSH EDX                            ; 00497de4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497de5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497dea
    JMP 0x00497c69                      ; 00497ded
        ;   XREF to: 00497c69 (UNCONDITIONAL_JUMP)  ; LAB_00497c69
    CMP EAX,dword ptr [0x0061b49c]      ; 00497df2 | DAT_0061b49c
        ;   Label: LAB_00497df2
    JGE 0x00497c90                      ; 00497df8
        ;   XREF to: 00497c90 (CONDITIONAL_JUMP)  ; LAB_00497c90
    TEST EBX,EBX                        ; 00497dfe
    JZ 0x00497e32                       ; 00497e00
        ;   XREF to: 00497e32 (CONDITIONAL_JUMP)  ; LAB_00497e32
    CMP EDI,dword ptr [0x01c4f008]      ; 00497e02 | DAT_01c4f008
    JL 0x00497c90                       ; 00497e08
        ;   XREF to: 00497c90 (CONDITIONAL_JUMP)  ; LAB_00497c90
    CMP EDI,dword ptr [0x01c4f010]      ; 00497e0e | DAT_01c4f010
    JGE 0x00497c90                      ; 00497e14
        ;   XREF to: 00497c90 (CONDITIONAL_JUMP)  ; LAB_00497c90
    CMP EAX,dword ptr [0x01c4f00c]      ; 00497e1a | DAT_01c4f00c
    JL 0x00497c90                       ; 00497e20
        ;   XREF to: 00497c90 (CONDITIONAL_JUMP)  ; LAB_00497c90
    CMP EAX,dword ptr [0x01c4f014]      ; 00497e26 | DAT_01c4f014
    JGE 0x00497c90                      ; 00497e2c
        ;   XREF to: 00497c90 (CONDITIONAL_JUMP)  ; LAB_00497c90
    CMP dword ptr [0x01c3f544],0x0      ; 00497e32 | DAT_01c3f544
        ;   Label: LAB_00497e32
    JZ 0x00497e4a                       ; 00497e39
        ;   XREF to: 00497e4a (CONDITIONAL_JUMP)  ; LAB_00497e4a
    PUSH EBP                            ; 00497e3b
    PUSH EDX                            ; 00497e3c
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497e3d
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497e42
    JMP 0x00497c90                      ; 00497e45
        ;   XREF to: 00497c90 (UNCONDITIONAL_JUMP)  ; LAB_00497c90
    PUSH EBP                            ; 00497e4a
        ;   Label: LAB_00497e4a
    PUSH EDX                            ; 00497e4b
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497e4c
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497e51
    JMP 0x00497c90                      ; 00497e54
        ;   XREF to: 00497c90 (UNCONDITIONAL_JUMP)  ; LAB_00497c90
    CMP EDI,dword ptr [0x0061b49c]      ; 00497e59 | DAT_0061b49c
        ;   Label: LAB_00497e59
    JGE 0x00497cb7                      ; 00497e5f
        ;   XREF to: 00497cb7 (CONDITIONAL_JUMP)  ; LAB_00497cb7
    TEST EBX,EBX                        ; 00497e65
    JZ 0x00497e99                       ; 00497e67
        ;   XREF to: 00497e99 (CONDITIONAL_JUMP)  ; LAB_00497e99
    CMP EAX,dword ptr [0x01c4f008]      ; 00497e69 | DAT_01c4f008
    JL 0x00497cb7                       ; 00497e6f
        ;   XREF to: 00497cb7 (CONDITIONAL_JUMP)  ; LAB_00497cb7
    CMP EAX,dword ptr [0x01c4f010]      ; 00497e75 | DAT_01c4f010
    JGE 0x00497cb7                      ; 00497e7b
        ;   XREF to: 00497cb7 (CONDITIONAL_JUMP)  ; LAB_00497cb7
    CMP EDI,dword ptr [0x01c4f00c]      ; 00497e81 | DAT_01c4f00c
    JL 0x00497cb7                       ; 00497e87
        ;   XREF to: 00497cb7 (CONDITIONAL_JUMP)  ; LAB_00497cb7
    CMP EDI,dword ptr [0x01c4f014]      ; 00497e8d | DAT_01c4f014
    JGE 0x00497cb7                      ; 00497e93
        ;   XREF to: 00497cb7 (CONDITIONAL_JUMP)  ; LAB_00497cb7
    CMP dword ptr [0x01c3f544],0x0      ; 00497e99 | DAT_01c3f544
        ;   Label: LAB_00497e99
    JZ 0x00497eb2                       ; 00497ea0
        ;   XREF to: 00497eb2 (CONDITIONAL_JUMP)  ; LAB_00497eb2
    PUSH EBP                            ; 00497ea2
    PUSH EDX                            ; 00497ea3
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497ea4
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497ea9
    INC ESI                             ; 00497eac
    JMP 0x00497c05                      ; 00497ead
        ;   XREF to: 00497c05 (UNCONDITIONAL_JUMP)  ; LAB_00497c05
    PUSH EBP                            ; 00497eb2
        ;   Label: LAB_00497eb2
    PUSH EDX                            ; 00497eb3
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00497eb4
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00497eb9
    INC ESI                             ; 00497ebc
    JMP 0x00497c05                      ; 00497ebd
        ;   XREF to: 00497c05 (UNCONDITIONAL_JUMP)  ; LAB_00497c05
    MOV EAX,[0x0061abc8]                ; 00497ec2 | DAT_0061abc8
        ;   Label: LAB_00497ec2
    MOV EDX,EAX                         ; 00497ec7
    SAR EDX,0x1f                        ; 00497ec9
    SUB EAX,EDX                         ; 00497ecc
    SAR EAX,0x1                         ; 00497ece
    MOV EDI,dword ptr [0x01c43540]      ; 00497ed0 | DAT_01c43540
    MOV ESI,dword ptr [0x0061abc8]      ; 00497ed6 | DAT_0061abc8
    SUB EDI,EAX                         ; 00497edc
    ADD ESI,EDI                         ; 00497ede
    DEC ESI                             ; 00497ee0
    LEA EBP,[EDI + 0x1]                 ; 00497ee1
    CMP EBP,ESI                         ; 00497ee4
    JGE 0x00497f08                      ; 00497ee6
        ;   XREF to: 00497f08 (CONDITIONAL_JUMP)  ; LAB_00497f08
    MOV EAX,[0x01c4353c]                ; 00497ee8 | DAT_01c4353c
        ;   Label: LAB_00497ee8
    MOV EDX,EBP                         ; 00497eed
    TEST EAX,EAX                        ; 00497eef
    JL 0x00497f03                       ; 00497ef1
        ;   XREF to: 00497f03 (CONDITIONAL_JUMP)  ; LAB_00497f03
    TEST EBP,EBP                        ; 00497ef3
    JL 0x00497f03                       ; 00497ef5
        ;   XREF to: 00497f03 (CONDITIONAL_JUMP)  ; LAB_00497f03
    CMP EAX,dword ptr [0x0061b498]      ; 00497ef7 | DAT_0061b498
    JL 0x00497fac                       ; 00497efd
        ;   XREF to: 00497fac (CONDITIONAL_JUMP)  ; LAB_00497fac
    INC EBP                             ; 00497f03
        ;   Label: LAB_00497f03
    CMP EBP,ESI                         ; 00497f04
    JL 0x00497ee8                       ; 00497f06
        ;   XREF to: 00497ee8 (CONDITIONAL_JUMP)  ; LAB_00497ee8
    MOV EBP,0x1                         ; 00497f08
        ;   Label: LAB_00497f08
    MOV EAX,[0x0061abc4]                ; 00497f0d | DAT_0061abc4
        ;   Label: LAB_00497f0d
    MOV EDX,EAX                         ; 00497f12
    SAR EDX,0x1f                        ; 00497f14
    SUB EAX,EDX                         ; 00497f17
    SAR EAX,0x1                         ; 00497f19
    CMP EBP,EAX                         ; 00497f1b
    JG 0x00498200                       ; 00497f1d
        ;   XREF to: 00498200 (CONDITIONAL_JUMP)  ; LAB_00498200
    MOV EAX,[0x01c4353c]                ; 00497f23 | DAT_01c4353c
    SUB EAX,EBP                         ; 00497f28
    MOV dword ptr [ESP + 0xc],EDI       ; 00497f2a
    MOV EDX,EAX                         ; 00497f2e
    TEST EAX,EAX                        ; 00497f30
    JL 0x00497f44                       ; 00497f32
        ;   XREF to: 00497f44 (CONDITIONAL_JUMP)  ; LAB_00497f44
    TEST EDI,EDI                        ; 00497f34
    JL 0x00497f44                       ; 00497f36
        ;   XREF to: 00497f44 (CONDITIONAL_JUMP)  ; LAB_00497f44
    CMP EAX,dword ptr [0x0061b498]      ; 00497f38 | DAT_0061b498
    JL 0x00498013                       ; 00497f3e
        ;   XREF to: 00498013 (CONDITIONAL_JUMP)  ; LAB_00498013
    MOV EAX,[0x01c4353c]                ; 00497f44 | DAT_01c4353c
        ;   Label: LAB_00497f44
    ADD EAX,EBP                         ; 00497f49
    MOV EDX,EDI                         ; 00497f4b
    MOV dword ptr [ESP + 0x8],EAX       ; 00497f4d
    TEST EAX,EAX                        ; 00497f51
    JL 0x00497f65                       ; 00497f53
        ;   XREF to: 00497f65 (CONDITIONAL_JUMP)  ; LAB_00497f65
    TEST EDI,EDI                        ; 00497f55
    JL 0x00497f65                       ; 00497f57
        ;   XREF to: 00497f65 (CONDITIONAL_JUMP)  ; LAB_00497f65
    CMP EAX,dword ptr [0x0061b498]      ; 00497f59 | DAT_0061b498
    JL 0x00498082                       ; 00497f5f
        ;   XREF to: 00498082 (CONDITIONAL_JUMP)  ; LAB_00498082
    MOV EAX,[0x01c4353c]                ; 00497f65 | DAT_01c4353c
        ;   Label: LAB_00497f65
    SUB EAX,EBP                         ; 00497f6a
    MOV dword ptr [ESP],ESI             ; 00497f6c
    MOV EDX,EAX                         ; 00497f6f
    TEST EAX,EAX                        ; 00497f71
    JL 0x00497f85                       ; 00497f73
        ;   XREF to: 00497f85 (CONDITIONAL_JUMP)  ; LAB_00497f85
    TEST ESI,ESI                        ; 00497f75
    JL 0x00497f85                       ; 00497f77
        ;   XREF to: 00497f85 (CONDITIONAL_JUMP)  ; LAB_00497f85
    CMP EAX,dword ptr [0x0061b498]      ; 00497f79 | DAT_0061b498
    JL 0x004980f1                       ; 00497f7f
        ;   XREF to: 004980f1 (CONDITIONAL_JUMP)  ; LAB_004980f1
    MOV EAX,[0x01c4353c]                ; 00497f85 | DAT_01c4353c
        ;   Label: LAB_00497f85
    ADD EAX,EBP                         ; 00497f8a
    MOV dword ptr [ESP + 0x4],ESI       ; 00497f8c
    MOV EDX,EAX                         ; 00497f90
    TEST EAX,EAX                        ; 00497f92
    JL 0x00497fa6                       ; 00497f94
        ;   XREF to: 00497fa6 (CONDITIONAL_JUMP)  ; LAB_00497fa6
    TEST ESI,ESI                        ; 00497f96
    JL 0x00497fa6                       ; 00497f98
        ;   XREF to: 00497fa6 (CONDITIONAL_JUMP)  ; LAB_00497fa6
    CMP EAX,dword ptr [0x0061b498]      ; 00497f9a | DAT_0061b498
    JL 0x0049815e                       ; 00497fa0
        ;   XREF to: 0049815e (CONDITIONAL_JUMP)  ; LAB_0049815e
    INC EBP                             ; 00497fa6
        ;   Label: LAB_00497fa6
    JMP 0x00497f0d                      ; 00497fa7
        ;   XREF to: 00497f0d (UNCONDITIONAL_JUMP)  ; LAB_00497f0d
    CMP EBP,dword ptr [0x0061b49c]      ; 00497fac | DAT_0061b49c
        ;   Label: LAB_00497fac
    JGE 0x00497f03                      ; 00497fb2
        ;   XREF to: 00497f03 (CONDITIONAL_JUMP)  ; LAB_00497f03
    TEST EBX,EBX                        ; 00497fb8
    JZ 0x00497fec                       ; 00497fba
        ;   XREF to: 00497fec (CONDITIONAL_JUMP)  ; LAB_00497fec
    CMP EAX,dword ptr [0x01c4f008]      ; 00497fbc | DAT_01c4f008
    JL 0x00497f03                       ; 00497fc2
        ;   XREF to: 00497f03 (CONDITIONAL_JUMP)  ; LAB_00497f03
    CMP EAX,dword ptr [0x01c4f010]      ; 00497fc8 | DAT_01c4f010
    JGE 0x00497f03                      ; 00497fce
        ;   XREF to: 00497f03 (CONDITIONAL_JUMP)  ; LAB_00497f03
    CMP EBP,dword ptr [0x01c4f00c]      ; 00497fd4 | DAT_01c4f00c
    JL 0x00497f03                       ; 00497fda
        ;   XREF to: 00497f03 (CONDITIONAL_JUMP)  ; LAB_00497f03
    CMP EBP,dword ptr [0x01c4f014]      ; 00497fe0 | DAT_01c4f014
    JGE 0x00497f03                      ; 00497fe6
        ;   XREF to: 00497f03 (CONDITIONAL_JUMP)  ; LAB_00497f03
    CMP dword ptr [0x01c3f544],0x0      ; 00497fec | DAT_01c3f544
        ;   Label: LAB_00497fec
    JZ 0x00498004                       ; 00497ff3
        ;   XREF to: 00498004 (CONDITIONAL_JUMP)  ; LAB_00498004
    PUSH EDX                            ; 00497ff5
    PUSH EAX                            ; 00497ff6
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00497ff7
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00497ffc
    JMP 0x00497f03                      ; 00497fff
        ;   XREF to: 00497f03 (UNCONDITIONAL_JUMP)  ; LAB_00497f03
    PUSH EDX                            ; 00498004
        ;   Label: LAB_00498004
    PUSH EAX                            ; 00498005
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00498006
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0049800b
    JMP 0x00497f03                      ; 0049800e
        ;   XREF to: 00497f03 (UNCONDITIONAL_JUMP)  ; LAB_00497f03
    CMP EDI,dword ptr [0x0061b49c]      ; 00498013 | DAT_0061b49c
        ;   Label: LAB_00498013
    JGE 0x00497f44                      ; 00498019
        ;   XREF to: 00497f44 (CONDITIONAL_JUMP)  ; LAB_00497f44
    TEST EBX,EBX                        ; 0049801f
    JZ 0x00498053                       ; 00498021
        ;   XREF to: 00498053 (CONDITIONAL_JUMP)  ; LAB_00498053
    CMP EAX,dword ptr [0x01c4f008]      ; 00498023 | DAT_01c4f008
    JL 0x00497f44                       ; 00498029
        ;   XREF to: 00497f44 (CONDITIONAL_JUMP)  ; LAB_00497f44
    CMP EAX,dword ptr [0x01c4f010]      ; 0049802f | DAT_01c4f010
    JGE 0x00497f44                      ; 00498035
        ;   XREF to: 00497f44 (CONDITIONAL_JUMP)  ; LAB_00497f44
    CMP EDI,dword ptr [0x01c4f00c]      ; 0049803b | DAT_01c4f00c
    JL 0x00497f44                       ; 00498041
        ;   XREF to: 00497f44 (CONDITIONAL_JUMP)  ; LAB_00497f44
    CMP EDI,dword ptr [0x01c4f014]      ; 00498047 | DAT_01c4f014
    JGE 0x00497f44                      ; 0049804d
        ;   XREF to: 00497f44 (CONDITIONAL_JUMP)  ; LAB_00497f44
    CMP dword ptr [0x01c3f544],0x0      ; 00498053 | DAT_01c3f544
        ;   Label: LAB_00498053
    JZ 0x0049806f                       ; 0049805a
        ;   XREF to: 0049806f (CONDITIONAL_JUMP)  ; LAB_0049806f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049805c
    PUSH EAX                            ; 00498060
    PUSH EDX                            ; 00498061
    CALL engine_mini3d.cpp_FUN_00517f10 ; 00498062
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00498067
    JMP 0x00497f44                      ; 0049806a
        ;   XREF to: 00497f44 (UNCONDITIONAL_JUMP)  ; LAB_00497f44
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049806f
        ;   Label: LAB_0049806f
    PUSH ECX                            ; 00498073
    PUSH EDX                            ; 00498074
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00498075
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0049807a
    JMP 0x00497f44                      ; 0049807d
        ;   XREF to: 00497f44 (UNCONDITIONAL_JUMP)  ; LAB_00497f44
    CMP EDI,dword ptr [0x0061b49c]      ; 00498082 | DAT_0061b49c
        ;   Label: LAB_00498082
    JGE 0x00497f65                      ; 00498088
        ;   XREF to: 00497f65 (CONDITIONAL_JUMP)  ; LAB_00497f65
    TEST EBX,EBX                        ; 0049808e
    JZ 0x004980c2                       ; 00498090
        ;   XREF to: 004980c2 (CONDITIONAL_JUMP)  ; LAB_004980c2
    CMP EAX,dword ptr [0x01c4f008]      ; 00498092 | DAT_01c4f008
    JL 0x00497f65                       ; 00498098
        ;   XREF to: 00497f65 (CONDITIONAL_JUMP)  ; LAB_00497f65
    CMP EAX,dword ptr [0x01c4f010]      ; 0049809e | DAT_01c4f010
    JGE 0x00497f65                      ; 004980a4
        ;   XREF to: 00497f65 (CONDITIONAL_JUMP)  ; LAB_00497f65
    CMP EDI,dword ptr [0x01c4f00c]      ; 004980aa | DAT_01c4f00c
    JL 0x00497f65                       ; 004980b0
        ;   XREF to: 00497f65 (CONDITIONAL_JUMP)  ; LAB_00497f65
    CMP EDI,dword ptr [0x01c4f014]      ; 004980b6 | DAT_01c4f014
    JGE 0x00497f65                      ; 004980bc
        ;   XREF to: 00497f65 (CONDITIONAL_JUMP)  ; LAB_00497f65
    CMP dword ptr [0x01c3f544],0x0      ; 004980c2 | DAT_01c3f544
        ;   Label: LAB_004980c2
    JZ 0x004980de                       ; 004980c9
        ;   XREF to: 004980de (CONDITIONAL_JUMP)  ; LAB_004980de
    PUSH EDX                            ; 004980cb
    MOV ECX,dword ptr [ESP + 0xc]       ; 004980cc
    PUSH ECX                            ; 004980d0
    CALL engine_mini3d.cpp_FUN_00517f10 ; 004980d1
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 004980d6
    JMP 0x00497f65                      ; 004980d9
        ;   XREF to: 00497f65 (UNCONDITIONAL_JUMP)  ; LAB_00497f65
    PUSH EDX                            ; 004980de
        ;   Label: LAB_004980de
    MOV EDX,dword ptr [ESP + 0xc]       ; 004980df
    PUSH EDX                            ; 004980e3
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004980e4
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004980e9
    JMP 0x00497f65                      ; 004980ec
        ;   XREF to: 00497f65 (UNCONDITIONAL_JUMP)  ; LAB_00497f65
    CMP ESI,dword ptr [0x0061b49c]      ; 004980f1 | DAT_0061b49c
        ;   Label: LAB_004980f1
    JGE 0x00497f85                      ; 004980f7
        ;   XREF to: 00497f85 (CONDITIONAL_JUMP)  ; LAB_00497f85
    TEST EBX,EBX                        ; 004980fd
    JZ 0x00498131                       ; 004980ff
        ;   XREF to: 00498131 (CONDITIONAL_JUMP)  ; LAB_00498131
    CMP EAX,dword ptr [0x01c4f008]      ; 00498101 | DAT_01c4f008
    JL 0x00497f85                       ; 00498107
        ;   XREF to: 00497f85 (CONDITIONAL_JUMP)  ; LAB_00497f85
    CMP EAX,dword ptr [0x01c4f010]      ; 0049810d | DAT_01c4f010
    JGE 0x00497f85                      ; 00498113
        ;   XREF to: 00497f85 (CONDITIONAL_JUMP)  ; LAB_00497f85
    CMP ESI,dword ptr [0x01c4f00c]      ; 00498119 | DAT_01c4f00c
    JL 0x00497f85                       ; 0049811f
        ;   XREF to: 00497f85 (CONDITIONAL_JUMP)  ; LAB_00497f85
    CMP ESI,dword ptr [0x01c4f014]      ; 00498125 | DAT_01c4f014
    JGE 0x00497f85                      ; 0049812b
        ;   XREF to: 00497f85 (CONDITIONAL_JUMP)  ; LAB_00497f85
    CMP dword ptr [0x01c3f544],0x0      ; 00498131 | DAT_01c3f544
        ;   Label: LAB_00498131
    JZ 0x0049814c                       ; 00498138
        ;   XREF to: 0049814c (CONDITIONAL_JUMP)  ; LAB_0049814c
    MOV EAX,dword ptr [ESP]             ; 0049813a
    PUSH EAX                            ; 0049813d
    PUSH EDX                            ; 0049813e
    CALL engine_mini3d.cpp_FUN_00517f10 ; 0049813f
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 00498144
    JMP 0x00497f85                      ; 00498147
        ;   XREF to: 00497f85 (UNCONDITIONAL_JUMP)  ; LAB_00497f85
    MOV ECX,dword ptr [ESP]             ; 0049814c
        ;   Label: LAB_0049814c
    PUSH ECX                            ; 0049814f
    PUSH EDX                            ; 00498150
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00498151
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00498156
    JMP 0x00497f85                      ; 00498159
        ;   XREF to: 00497f85 (UNCONDITIONAL_JUMP)  ; LAB_00497f85
    CMP ESI,dword ptr [0x0061b49c]      ; 0049815e | DAT_0061b49c
        ;   Label: LAB_0049815e
    JGE 0x00497fa6                      ; 00498164
        ;   XREF to: 00497fa6 (CONDITIONAL_JUMP)  ; LAB_00497fa6
    TEST EBX,EBX                        ; 0049816a
    JZ 0x0049819e                       ; 0049816c
        ;   XREF to: 0049819e (CONDITIONAL_JUMP)  ; LAB_0049819e
    CMP EAX,dword ptr [0x01c4f008]      ; 0049816e | DAT_01c4f008
    JL 0x00497fa6                       ; 00498174
        ;   XREF to: 00497fa6 (CONDITIONAL_JUMP)  ; LAB_00497fa6
    CMP EAX,dword ptr [0x01c4f010]      ; 0049817a | DAT_01c4f010
    JGE 0x00497fa6                      ; 00498180
        ;   XREF to: 00497fa6 (CONDITIONAL_JUMP)  ; LAB_00497fa6
    CMP ESI,dword ptr [0x01c4f00c]      ; 00498186 | DAT_01c4f00c
    JL 0x00497fa6                       ; 0049818c
        ;   XREF to: 00497fa6 (CONDITIONAL_JUMP)  ; LAB_00497fa6
    CMP ESI,dword ptr [0x01c4f014]      ; 00498192 | DAT_01c4f014
    JGE 0x00497fa6                      ; 00498198
        ;   XREF to: 00497fa6 (CONDITIONAL_JUMP)  ; LAB_00497fa6
    CMP dword ptr [0x01c3f544],0x0      ; 0049819e | DAT_01c3f544
        ;   Label: LAB_0049819e
    JZ 0x004981bb                       ; 004981a5
        ;   XREF to: 004981bb (CONDITIONAL_JUMP)  ; LAB_004981bb
    MOV EAX,dword ptr [ESP + 0x4]       ; 004981a7
    PUSH EAX                            ; 004981ab
    PUSH EDX                            ; 004981ac
    CALL engine_mini3d.cpp_FUN_00517f10 ; 004981ad
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517f10()
    ADD ESP,0x8                         ; 004981b2
    INC EBP                             ; 004981b5
    JMP 0x00497f0d                      ; 004981b6
        ;   XREF to: 00497f0d (UNCONDITIONAL_JUMP)  ; LAB_00497f0d
    MOV ECX,dword ptr [ESP + 0x4]       ; 004981bb
        ;   Label: LAB_004981bb
    PUSH ECX                            ; 004981bf
    PUSH EDX                            ; 004981c0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004981c1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004981c6
    INC EBP                             ; 004981c9
    JMP 0x00497f0d                      ; 004981ca
        ;   XREF to: 00497f0d (UNCONDITIONAL_JUMP)  ; LAB_00497f0d
    JBE 0x00497ec2                      ; 004981cf
        ;   XREF to: 00497ec2 (CONDITIONAL_JUMP)  ; LAB_00497ec2
        ;   Label: LAB_004981cf
    CMP EAX,0x2                         ; 004981d5
    JZ 0x00497be1                       ; 004981d8
        ;   XREF to: 00497be1 (CONDITIONAL_JUMP)  ; LAB_00497be1
    MOV EAX,0x5dc220                    ; 004981de | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004981de
    MOV EDX,0xa0d                       ; 004981e3
    PUSH 0x5dc236                       ; 004981e8 | = "CEditorTools::setMousePointerType - i..."
    MOV [0x01d1d400],EAX                ; 004981ed | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004981f2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004981f8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004981fd
    ADD ESP,0x10                        ; 00498200
        ;   Label: LAB_00498200
    POP EBP                             ; 00498203
    POP EDI                             ; 00498204
    POP ESI                             ; 00498205
    POP EBX                             ; 00498206
    RET                                 ; 00498207

