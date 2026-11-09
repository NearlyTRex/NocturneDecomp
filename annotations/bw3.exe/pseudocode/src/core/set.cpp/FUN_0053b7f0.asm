; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0053b7f0(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bdfb0 at 004be7d7
;
; Referenced Globals:
;   TerminatedCString s_anon_005d091b
;   undefined4 DAT_005d0923
;   TerminatedCString s_core_set_cpp_005d0927
;   TerminatedCString s_Set_saveState_info_is_in_005d0937
;   TerminatedCString s_anon_005d0960
;   undefined4 DAT_005d0968
;   TerminatedCString s_The_set_has_changed_sinc_005d096c
;   undefined4 DAT_005d09d2
;   TerminatedCString s_anon_005d09d6
;   undefined4 DAT_005d09de
;   TerminatedCString s_anon_005d09e2
;   undefined4 DAT_005d09ea
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fscanf_FUN_005a3230
;   shape_edittool.cpp_FUN_0047cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b7f0
        ;   Label: core_set.cpp_FUN_0053b7f0
    PUSH ESI                            ; 0053b7f1
    PUSH EDI                            ; 0053b7f2
    PUSH EBP                            ; 0053b7f3
    SUB ESP,0x14                        ; 0053b7f4
    MOV EBP,dword ptr [ESP + 0x28]      ; 0053b7f7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053b7fb
    PUSH 0x5d091b                       ; 0053b7ff | = "%*[^\n]\n"
    PUSH EDI                            ; 0053b804
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b805
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 0053b80a
    MOV EAX,ESP                         ; 0053b80d
    PUSH EAX                            ; 0053b80f
    PUSH 0x5d0923                       ; 0053b810 | DAT_005d0923
    PUSH EDI                            ; 0053b815
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b816
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0053b81b
    MOV EDX,dword ptr [ESP]             ; 0053b81e
    CMP EDX,0x1                         ; 0053b821
    JL 0x0053b82b                       ; 0053b824
        ;   XREF to: 0053b82b (CONDITIONAL_JUMP)  ; LAB_0053b82b
    CMP EDX,0x3                         ; 0053b826
    JLE 0x0053b852                      ; 0053b829
        ;   XREF to: 0053b852 (CONDITIONAL_JUMP)  ; LAB_0053b852
    MOV EAX,dword ptr [ESP]             ; 0053b82b
        ;   Label: LAB_0053b82b
    PUSH EAX                            ; 0053b82e
    MOV EBX,0x5d0927                    ; 0053b82f | = "..\\core\\set.cpp"
    MOV ESI,0x14ae                      ; 0053b834
    PUSH 0x5d0937                       ; 0053b839 | = "Set saveState info is invalid version %d"
    MOV dword ptr [0x01d71de0],EBX      ; 0053b83e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0053b844 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053b84a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0053b84f
    PUSH 0x5d0960                       ; 0053b852 | = "%*[^\n]\n"
        ;   Label: LAB_0053b852
    PUSH EDI                            ; 0053b857
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b858
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 0053b85d
    LEA EAX,[ESP + 0x4]                 ; 0053b860
    PUSH EAX                            ; 0053b864
    PUSH 0x5d0968                       ; 0053b865 | DAT_005d0968
    PUSH EDI                            ; 0053b86a
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b86b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0053b870
    MOV EDX,dword ptr [EBP]             ; 0053b873
    CMP EDX,dword ptr [ESP + 0x4]       ; 0053b876
    JZ 0x0053b890                       ; 0053b87a
        ;   XREF to: 0053b890 (CONDITIONAL_JUMP)  ; LAB_0053b890
    PUSH 0x5d096c                       ; 0053b87c | = "The set has changed since you saved y..."
    MOV ECX,dword ptr [0x005fb140]      ; 0053b881 | g_CEditorToolsPtr
    PUSH ECX                            ; 0053b887
    CALL shape_edittool.cpp_FUN_0047cee0 ; 0053b888
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047cee0()
    ADD ESP,0x8                         ; 0053b88d
    MOV ESI,dword ptr [ESP + 0x4]       ; 0053b890
        ;   Label: LAB_0053b890
    XOR EBX,EBX                         ; 0053b894
    TEST ESI,ESI                        ; 0053b896
    JLE 0x0053b8cf                      ; 0053b898
        ;   XREF to: 0053b8cf (CONDITIONAL_JUMP)  ; LAB_0053b8cf
    MOV ESI,EBP                         ; 0053b89a
    LEA EAX,[ESP + 0x8]                 ; 0053b89c
        ;   Label: LAB_0053b89c
    PUSH EAX                            ; 0053b8a0
    PUSH 0x5d09d2                       ; 0053b8a1 | DAT_005d09d2
    PUSH EDI                            ; 0053b8a6
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b8a7
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EBP]             ; 0053b8ac
    ADD ESP,0xc                         ; 0053b8af
    CMP EBX,EAX                         ; 0053b8b2
    JGE 0x0053b8c0                      ; 0053b8b4
        ;   XREF to: 0053b8c0 (CONDITIONAL_JUMP)  ; LAB_0053b8c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053b8b6
    MOV dword ptr [ESI + 0x1a4],EAX     ; 0053b8ba
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b8c0
        ;   Label: LAB_0053b8c0
    INC EBX                             ; 0053b8c4
    ADD ESI,0x1a4                       ; 0053b8c5
    CMP EBX,EAX                         ; 0053b8cb
    JL 0x0053b89c                       ; 0053b8cd
        ;   XREF to: 0053b89c (CONDITIONAL_JUMP)  ; LAB_0053b89c
    CMP dword ptr [ESP],0x2             ; 0053b8cf
        ;   Label: LAB_0053b8cf
    JL 0x0053b932                       ; 0053b8d3
        ;   XREF to: 0053b932 (CONDITIONAL_JUMP)  ; LAB_0053b932
    CMP dword ptr [ESP + 0x4],0x0       ; 0053b8d5
    JLE 0x0053b932                      ; 0053b8da
        ;   XREF to: 0053b932 (CONDITIONAL_JUMP)  ; LAB_0053b932
    PUSH 0x5d09d6                       ; 0053b8dc | = "%*[^\n]\n"
        ;   Label: LAB_0053b8dc
    PUSH EDI                            ; 0053b8e1
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b8e2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 0053b8e7
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053b8ea
    XOR EBX,EBX                         ; 0053b8ee
    TEST ECX,ECX                        ; 0053b8f0
    JLE 0x0053b929                      ; 0053b8f2
        ;   XREF to: 0053b929 (CONDITIONAL_JUMP)  ; LAB_0053b929
    MOV ESI,EBP                         ; 0053b8f4
    LEA EAX,[ESP + 0xc]                 ; 0053b8f6
        ;   Label: LAB_0053b8f6
    PUSH EAX                            ; 0053b8fa
    PUSH 0x5d09de                       ; 0053b8fb | DAT_005d09de
    PUSH EDI                            ; 0053b900
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b901
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EDX,dword ptr [EBP]             ; 0053b906
    ADD ESP,0xc                         ; 0053b909
    CMP EBX,EDX                         ; 0053b90c
    JGE 0x0053b91a                      ; 0053b90e
        ;   XREF to: 0053b91a (CONDITIONAL_JUMP)  ; LAB_0053b91a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053b910
    MOV dword ptr [ESI + 0x14c],EAX     ; 0053b914
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b91a
        ;   Label: LAB_0053b91a
    INC EBX                             ; 0053b91e
    ADD ESI,0x1a4                       ; 0053b91f
    CMP EBX,EAX                         ; 0053b925
    JL 0x0053b8f6                       ; 0053b927
        ;   XREF to: 0053b8f6 (CONDITIONAL_JUMP)  ; LAB_0053b8f6
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053b929
        ;   Label: LAB_0053b929
    INC EBX                             ; 0053b92d
    CMP EBX,EDX                         ; 0053b92e
    JL 0x0053b8dc                       ; 0053b930
        ;   XREF to: 0053b8dc (CONDITIONAL_JUMP)  ; LAB_0053b8dc
    CMP dword ptr [ESP],0x3             ; 0053b932
        ;   Label: LAB_0053b932
    JL 0x0053b98b                       ; 0053b936
        ;   XREF to: 0053b98b (CONDITIONAL_JUMP)  ; LAB_0053b98b
    CMP dword ptr [ESP + 0x4],0x0       ; 0053b938
    JLE 0x0053b98b                      ; 0053b93d
        ;   XREF to: 0053b98b (CONDITIONAL_JUMP)  ; LAB_0053b98b
    PUSH 0x5d09e2                       ; 0053b93f | = "%*[^\n]\n"
        ;   Label: LAB_0053b93f
    PUSH EDI                            ; 0053b944
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b945
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x8                         ; 0053b94a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b94d
    XOR EBX,EBX                         ; 0053b951
    TEST EAX,EAX                        ; 0053b953
    JLE 0x0053b982                      ; 0053b955
        ;   XREF to: 0053b982 (CONDITIONAL_JUMP)  ; LAB_0053b982
    MOV ESI,EBP                         ; 0053b957
    LEA EAX,[ESP + 0x10]                ; 0053b959
        ;   Label: LAB_0053b959
    PUSH EAX                            ; 0053b95d
    PUSH 0x5d09ea                       ; 0053b95e | DAT_005d09ea
    PUSH EDI                            ; 0053b963
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053b964
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [EBP]             ; 0053b969
    ADD ESP,0xc                         ; 0053b96c
    CMP EBX,ECX                         ; 0053b96f
    JL 0x0053b993                       ; 0053b971
        ;   XREF to: 0053b993 (CONDITIONAL_JUMP)  ; LAB_0053b993
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053b973
        ;   Label: LAB_0053b973
    INC EBX                             ; 0053b977
    ADD ESI,0x1a4                       ; 0053b978
    CMP EBX,EDX                         ; 0053b97e
    JL 0x0053b959                       ; 0053b980
        ;   XREF to: 0053b959 (CONDITIONAL_JUMP)  ; LAB_0053b959
    MOV ESI,dword ptr [ESP + 0x4]       ; 0053b982
        ;   Label: LAB_0053b982
    INC EBX                             ; 0053b986
    CMP EBX,ESI                         ; 0053b987
    JL 0x0053b93f                       ; 0053b989
        ;   XREF to: 0053b93f (CONDITIONAL_JUMP)  ; LAB_0053b93f
    ADD ESP,0x14                        ; 0053b98b
        ;   Label: LAB_0053b98b
    POP EBP                             ; 0053b98e
    POP EDI                             ; 0053b98f
    POP ESI                             ; 0053b990
    POP EBX                             ; 0053b991
    RET                                 ; 0053b992
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053b993
        ;   Label: LAB_0053b993
    MOV dword ptr [ESI + 0x150],EAX     ; 0053b997
    JMP 0x0053b973                      ; 0053b99d
        ;   XREF to: 0053b973 (UNCONDITIONAL_JUMP)  ; LAB_0053b973

