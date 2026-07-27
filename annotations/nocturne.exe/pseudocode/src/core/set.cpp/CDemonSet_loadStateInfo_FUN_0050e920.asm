; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_0050e920(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004a4170 at 004a4a0e
;
; Referenced Globals:
;   TerminatedCString s_anon_005908c2
;   TerminatedCString s_d_005908ca
;   TerminatedCString s_core_set_cpp_005908ce
;   TerminatedCString s_Set_saveState_info_is_in_005908de
;   TerminatedCString s_anon_00590907
;   TerminatedCString s_d_0059090f
;   TerminatedCString s_The_set_has_changed_sinc_00590913
;   TerminatedCString s_d_00590979
;   undefined4 DAT_005b6d50
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fscanf_FUN_00563350
;   shape_edittool.cpp_FUN_0046fb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e920
        ;   Label: core_set.cpp_CDemonSet_loadStateInfo_FUN_0050e920
    PUSH ESI                            ; 0050e921
    PUSH EDI                            ; 0050e922
    PUSH EBP                            ; 0050e923
    SUB ESP,0xc                         ; 0050e924
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050e927
    MOV EDI,dword ptr [ESP + 0x24]      ; 0050e92b
    PUSH 0x5908c2                       ; 0050e92f | = "%*[^\n]\n"
    PUSH EDI                            ; 0050e934
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050e935
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x8                         ; 0050e93a
    MOV EAX,ESP                         ; 0050e93d
    PUSH EAX                            ; 0050e93f
    PUSH 0x5908ca                       ; 0050e940 | = "%d\n"
    PUSH EDI                            ; 0050e945
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050e946
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0050e94b
    MOV EDX,dword ptr [ESP]             ; 0050e94e
    CMP EDX,0x1                         ; 0050e951
    JNZ 0x0050e9d5                      ; 0050e954
        ;   XREF to: 0050e9d5 (CONDITIONAL_JUMP)  ; LAB_0050e9d5
    PUSH 0x590907                       ; 0050e95a | = "%*[^\n]\n"
        ;   Label: LAB_0050e95a
    PUSH EDI                            ; 0050e95f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050e960
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x8                         ; 0050e965
    LEA EAX,[ESP + 0x4]                 ; 0050e968
    PUSH EAX                            ; 0050e96c
    PUSH 0x59090f                       ; 0050e96d | = "%d\n"
    PUSH EDI                            ; 0050e972
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050e973
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0050e978
    MOV EDX,dword ptr [EBP]             ; 0050e97b
    CMP EDX,dword ptr [ESP + 0x4]       ; 0050e97e
    JZ 0x0050e998                       ; 0050e982
        ;   XREF to: 0050e998 (CONDITIONAL_JUMP)  ; LAB_0050e998
    PUSH 0x590913                       ; 0050e984 | = "The set has changed since you saved y..."
    MOV ECX,dword ptr [0x005b6d50]      ; 0050e989 | DAT_005b6d50
    PUSH ECX                            ; 0050e98f
    CALL shape_edittool.cpp_FUN_0046fb40 ; 0050e990
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fb40()
    ADD ESP,0x8                         ; 0050e995
    MOV ESI,dword ptr [ESP + 0x4]       ; 0050e998
        ;   Label: LAB_0050e998
    XOR EBX,EBX                         ; 0050e99c
    TEST ESI,ESI                        ; 0050e99e
    JLE 0x0050e9cd                      ; 0050e9a0
        ;   XREF to: 0050e9cd (CONDITIONAL_JUMP)  ; LAB_0050e9cd
    MOV ESI,EBP                         ; 0050e9a2
    LEA EAX,[ESP + 0x8]                 ; 0050e9a4
        ;   Label: LAB_0050e9a4
    PUSH EAX                            ; 0050e9a8
    PUSH 0x590979                       ; 0050e9a9 | = "%d\n"
    PUSH EDI                            ; 0050e9ae
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050e9af
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EDX,dword ptr [EBP]             ; 0050e9b4
    ADD ESP,0xc                         ; 0050e9b7
    CMP EBX,EDX                         ; 0050e9ba
    JL 0x0050e9fe                       ; 0050e9bc
        ;   XREF to: 0050e9fe (CONDITIONAL_JUMP)  ; LAB_0050e9fe
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050e9be
        ;   Label: LAB_0050e9be
    INC EBX                             ; 0050e9c2
    ADD ESI,0x1a0                       ; 0050e9c3
    CMP EBX,EAX                         ; 0050e9c9
    JL 0x0050e9a4                       ; 0050e9cb
        ;   XREF to: 0050e9a4 (CONDITIONAL_JUMP)  ; LAB_0050e9a4
    ADD ESP,0xc                         ; 0050e9cd
        ;   Label: LAB_0050e9cd
    POP EBP                             ; 0050e9d0
    POP EDI                             ; 0050e9d1
    POP ESI                             ; 0050e9d2
    POP EBX                             ; 0050e9d3
    RET                                 ; 0050e9d4
    PUSH EDX                            ; 0050e9d5
        ;   Label: LAB_0050e9d5
    MOV ECX,0x5908ce                    ; 0050e9d6 | = "..\\core\\set.cpp"
    MOV EBX,0x12af                      ; 0050e9db
    PUSH 0x5908de                       ; 0050e9e0 | = "Set saveState info is invalid version %d"
    MOV dword ptr [0x01cc4800],ECX      ; 0050e9e5 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0050e9eb | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0050e9f1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0050e9f6
    JMP 0x0050e95a                      ; 0050e9f9
        ;   XREF to: 0050e95a (UNCONDITIONAL_JUMP)  ; LAB_0050e95a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050e9fe
        ;   Label: LAB_0050e9fe
    MOV dword ptr [ESI + 0x1a0],EAX     ; 0050ea02
    JMP 0x0050e9be                      ; 0050ea08
        ;   XREF to: 0050e9be (UNCONDITIONAL_JUMP)  ; LAB_0050e9be

