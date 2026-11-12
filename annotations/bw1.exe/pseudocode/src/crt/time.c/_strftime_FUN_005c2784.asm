; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_time_c__strftime_FUN_005c2784(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)
;
; Parameters:
; char *           Stack[0x4]:4   dest_buffer
; uint             Stack[0x8]:4   buffer_size
; char *           Stack[0xc]:4   format_string
; _tm *            Stack[0x10]:4   time_ptr
; Local Variables:
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x9f]:1  local_9f
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00499c80 at 00499d8d
;   shape_edittool.cpp_FUN_0049517e at 004955a9
;
; Referenced Globals:
;   TerminatedCString s_a_b_d_H_M_S_Y_005faad0
;   TerminatedCString s_m_d_y_005faae8
;   undefined1 DAT_005faaf4
;   TerminatedCString s_I_M_S_p_005faaf8
;   undefined1 DAT_005fab04
;   undefined1 DAT_005fab08
;   undefined1 DAT_005fab0c
;   TerminatedCString s_a_b_d_Y_005fab10
;   TerminatedCString s_H_M_S_005fab20
;   undefined4 DAT_00626238
;   undefined1* PTR_s_Sunday_00626254 = 005faa20
;   undefined4 DAT_00626270
;   undefined1* PTR_s_January_006262a0 = 005faa64
;   void* PTR_DAT_00626990 = 0062688c
;
; Called Functions:
;   crt_unknown.c_FUN_005c2750
;   crt_unknown.c_FUN_005c9428
;   crt_unknown.c_FUN_005c9e48
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2784
        ;   Label: crt_time.c__strftime_FUN_005c2784
    PUSH ESI                            ; 005c2785
    PUSH EDI                            ; 005c2786
    PUSH EBP                            ; 005c2787
    SUB ESP,0x90                        ; 005c2788
    MOV EBP,dword ptr [ESP + 0xac]      ; 005c278e
    MOV EBX,dword ptr [ESP + 0xb0]      ; 005c2795
    XOR EDX,EDX                         ; 005c279c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005c279e
    MOV dword ptr [ESP + 0x84],EDX      ; 005c27a5
    MOV dword ptr [ESP + 0x88],EAX      ; 005c27ac
    MOV dword ptr [ESP + 0x8c],EDX      ; 005c27b3
    MOV AH,byte ptr [EBP]               ; 005c27ba | = "%a %b %d, %Y" | s_I_M_S_p_005faaf8 | s_a_b_d_H_M_S_Y_005faad0
        ;   Label: LAB_005c27ba
    MOV ESI,ESP                         ; 005c27bd
    TEST AH,AH                          ; 005c27bf
    JNZ 0x005c27e0                      ; 005c27c1
        ;   XREF to: 005c27e0 (CONDITIONAL_JUMP)  ; LAB_005c27e0
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005c27c3
    TEST EDI,EDI                        ; 005c27ca
    JZ 0x005c2bdf                       ; 005c27cc
        ;   XREF to: 005c2bdf (CONDITIONAL_JUMP)  ; LAB_005c2bdf
    XOR EAX,EAX                         ; 005c27d2
    LEA EBP,[EDI + 0x1]                 ; 005c27d4
    MOV dword ptr [ESP + 0x8c],EAX      ; 005c27d7
    JMP 0x005c27ba                      ; 005c27de
        ;   XREF to: 005c27ba (UNCONDITIONAL_JUMP)  ; LAB_005c27ba
    CMP AH,0x25                         ; 005c27e0
        ;   Label: LAB_005c27e0
    JZ 0x005c27f5                       ; 005c27e3
        ;   XREF to: 005c27f5 (CONDITIONAL_JUMP)  ; LAB_005c27f5
    MOV AL,AH                           ; 005c27e5
    MOV byte ptr [ESP],AH               ; 005c27e7
    XOR AL,AH                           ; 005c27ea
    MOV byte ptr [ESP + 0x1],AL         ; 005c27ec
    JMP 0x005c2b70                      ; 005c27f0
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV AL,byte ptr [EBP + 0x1]         ; 005c27f5
        ;   Label: LAB_005c27f5
    INC EBP                             ; 005c27f8
    CMP AL,0x61                         ; 005c27f9
    JC 0x005c28a1                       ; 005c27fb
        ;   XREF to: 005c28a1 (CONDITIONAL_JUMP)  ; LAB_005c28a1
    JBE 0x005c2931                      ; 005c2801
        ;   XREF to: 005c2931 (CONDITIONAL_JUMP)  ; LAB_005c2931
    CMP AL,0x6e                         ; 005c2807
    JC 0x005c285a                       ; 005c2809
        ;   XREF to: 005c285a (CONDITIONAL_JUMP)  ; LAB_005c285a
    JBE 0x005c2a21                      ; 005c280b
        ;   XREF to: 005c2a21 (CONDITIONAL_JUMP)  ; LAB_005c2a21
    CMP AL,0x77                         ; 005c2811
    JC 0x005c2836                       ; 005c2813
        ;   XREF to: 005c2836 (CONDITIONAL_JUMP)  ; LAB_005c2836
    JBE 0x005c2a9f                      ; 005c2815
        ;   XREF to: 005c2a9f (CONDITIONAL_JUMP)  ; LAB_005c2a9f
    CMP AL,0x79                         ; 005c281b
    JC 0x005c2af8                       ; 005c281d
        ;   XREF to: 005c2af8 (CONDITIONAL_JUMP)  ; LAB_005c2af8
    JBE 0x005c2b1a                      ; 005c2823
        ;   XREF to: 005c2b1a (CONDITIONAL_JUMP)  ; LAB_005c2b1a
    CMP AL,0x7a                         ; 005c2829
    JZ 0x005c2b53                       ; 005c282b
        ;   XREF to: 005c2b53 (CONDITIONAL_JUMP)  ; LAB_005c2b53
    JMP 0x005c2b64                      ; 005c2831
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x72                         ; 005c2836
        ;   Label: LAB_005c2836
    JC 0x005c284d                       ; 005c2838
        ;   XREF to: 005c284d (CONDITIONAL_JUMP)  ; LAB_005c284d
    JBE 0x005c2a2b                      ; 005c283a
        ;   XREF to: 005c2a2b (CONDITIONAL_JUMP)  ; LAB_005c2a2b
    CMP AL,0x74                         ; 005c2840
    JZ 0x005c2a6b                       ; 005c2842
        ;   XREF to: 005c2a6b (CONDITIONAL_JUMP)  ; LAB_005c2a6b
    JMP 0x005c2b64                      ; 005c2848
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x70                         ; 005c284d
        ;   Label: LAB_005c284d
    JZ 0x005c2a3c                       ; 005c284f
        ;   XREF to: 005c2a3c (CONDITIONAL_JUMP)  ; LAB_005c2a3c
    JMP 0x005c2b64                      ; 005c2855
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x64                         ; 005c285a
        ;   Label: LAB_005c285a
    JC 0x005c2888                       ; 005c285c
        ;   XREF to: 005c2888 (CONDITIONAL_JUMP)  ; LAB_005c2888
    JBE 0x005c2972                      ; 005c285e
        ;   XREF to: 005c2972 (CONDITIONAL_JUMP)  ; LAB_005c2972
    CMP AL,0x6a                         ; 005c2864
    JC 0x005c287b                       ; 005c2866
        ;   XREF to: 005c287b (CONDITIONAL_JUMP)  ; LAB_005c287b
    JBE 0x005c29d6                      ; 005c2868
        ;   XREF to: 005c29d6 (CONDITIONAL_JUMP)  ; LAB_005c29d6
    CMP AL,0x6d                         ; 005c286e
    JZ 0x005c29f4                       ; 005c2870
        ;   XREF to: 005c29f4 (CONDITIONAL_JUMP)  ; LAB_005c29f4
    JMP 0x005c2b64                      ; 005c2876
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x68                         ; 005c287b
        ;   Label: LAB_005c287b
    JZ 0x005c2952                       ; 005c287d
        ;   XREF to: 005c2952 (CONDITIONAL_JUMP)  ; LAB_005c2952
    JMP 0x005c2b64                      ; 005c2883
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x62                         ; 005c2888
        ;   Label: LAB_005c2888
    JBE 0x005c2952                      ; 005c288a
        ;   XREF to: 005c2952 (CONDITIONAL_JUMP)  ; LAB_005c2952
    MOV dword ptr [ESP + 0x8c],EBP      ; 005c2890
    MOV EBP,0x5faad0                    ; 005c2897 | = "%a %b %d %H:%M:%S %Y"
    JMP 0x005c27ba                      ; 005c289c
        ;   XREF to: 005c27ba (UNCONDITIONAL_JUMP)  ; LAB_005c27ba
    CMP AL,0x4d                         ; 005c28a1
        ;   Label: LAB_005c28a1
    JC 0x005c28f4                       ; 005c28a3
        ;   XREF to: 005c28f4 (CONDITIONAL_JUMP)  ; LAB_005c28f4
    JBE 0x005c2a0b                      ; 005c28a5
        ;   XREF to: 005c2a0b (CONDITIONAL_JUMP)  ; LAB_005c2a0b
    CMP AL,0x57                         ; 005c28ab
    JC 0x005c28d0                       ; 005c28ad
        ;   XREF to: 005c28d0 (CONDITIONAL_JUMP)  ; LAB_005c28d0
    JBE 0x005c2ab2                      ; 005c28af
        ;   XREF to: 005c2ab2 (CONDITIONAL_JUMP)  ; LAB_005c2ab2
    CMP AL,0x59                         ; 005c28b5
    JC 0x005c2b09                       ; 005c28b7
        ;   XREF to: 005c2b09 (CONDITIONAL_JUMP)  ; LAB_005c2b09
    JBE 0x005c2b39                      ; 005c28bd
        ;   XREF to: 005c2b39 (CONDITIONAL_JUMP)  ; LAB_005c2b39
    CMP AL,0x5a                         ; 005c28c3
    JZ 0x005c2b53                       ; 005c28c5
        ;   XREF to: 005c2b53 (CONDITIONAL_JUMP)  ; LAB_005c2b53
    JMP 0x005c2b64                      ; 005c28cb
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x54                         ; 005c28d0
        ;   Label: LAB_005c28d0
    JC 0x005c28e7                       ; 005c28d2
        ;   XREF to: 005c28e7 (CONDITIONAL_JUMP)  ; LAB_005c28e7
    JBE 0x005c2b09                      ; 005c28d4
        ;   XREF to: 005c2b09 (CONDITIONAL_JUMP)  ; LAB_005c2b09
    CMP AL,0x55                         ; 005c28da
    JZ 0x005c2a75                       ; 005c28dc
        ;   XREF to: 005c2a75 (CONDITIONAL_JUMP)  ; LAB_005c2a75
    JMP 0x005c2b64                      ; 005c28e2
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x53                         ; 005c28e7
        ;   Label: LAB_005c28e7
    JZ 0x005c2a56                       ; 005c28e9
        ;   XREF to: 005c2a56 (CONDITIONAL_JUMP)  ; LAB_005c2a56
    JMP 0x005c2b64                      ; 005c28ef
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x42                         ; 005c28f4
        ;   Label: LAB_005c28f4
    JC 0x005c291a                       ; 005c28f6
        ;   XREF to: 005c291a (CONDITIONAL_JUMP)  ; LAB_005c291a
    JBE 0x005c2963                      ; 005c28f8
        ;   XREF to: 005c2963 (CONDITIONAL_JUMP)  ; LAB_005c2963
    CMP AL,0x48                         ; 005c28fa
    JC 0x005c2911                       ; 005c28fc
        ;   XREF to: 005c2911 (CONDITIONAL_JUMP)  ; LAB_005c2911
    JBE 0x005c2999                      ; 005c28fe
        ;   XREF to: 005c2999 (CONDITIONAL_JUMP)  ; LAB_005c2999
    CMP AL,0x49                         ; 005c2904
    JZ 0x005c29af                       ; 005c2906
        ;   XREF to: 005c29af (CONDITIONAL_JUMP)  ; LAB_005c29af
    JMP 0x005c2b64                      ; 005c290c
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x44                         ; 005c2911
        ;   Label: LAB_005c2911
    JZ 0x005c2988                       ; 005c2913
        ;   XREF to: 005c2988 (CONDITIONAL_JUMP)  ; LAB_005c2988
    JMP 0x005c2b64                      ; 005c2915
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,AH                           ; 005c291a
        ;   Label: LAB_005c291a
    JC 0x005c2b64                       ; 005c291c
        ;   XREF to: 005c2b64 (CONDITIONAL_JUMP)  ; LAB_005c2b64
    JBE 0x005c2b64                      ; 005c2922
        ;   XREF to: 005c2b64 (CONDITIONAL_JUMP)  ; LAB_005c2b64
    CMP AL,0x41                         ; 005c2928
    JZ 0x005c2943                       ; 005c292a
        ;   XREF to: 005c2943 (CONDITIONAL_JUMP)  ; LAB_005c2943
    JMP 0x005c2b64                      ; 005c292c
        ;   XREF to: 005c2b64 (UNCONDITIONAL_JUMP)  ; LAB_005c2b64
    MOV EAX,dword ptr [EBX + 0x18]      ; 005c2931
        ;   Label: LAB_005c2931
    MOV ESI,0x626238                    ; 005c2934 | DAT_00626238
    SHL EAX,0x2                         ; 005c2939
    ADD ESI,EAX                         ; 005c293c
    JMP 0x005c2b70                      ; 005c293e
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV ESI,dword ptr [EBX + 0x18]      ; 005c2943
        ;   Label: LAB_005c2943
    MOV ESI,dword ptr [ESI*0x4 + 0x626254] ; 005c2946 | PTR_s_Sunday_00626254
    JMP 0x005c2b70                      ; 005c294d
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c2952
        ;   Label: LAB_005c2952
    SHL ESI,0x2                         ; 005c2955
    ADD ESI,0x626270                    ; 005c2958 | DAT_00626270
    JMP 0x005c2b70                      ; 005c295e
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c2963
        ;   Label: LAB_005c2963
    MOV ESI,dword ptr [ESI*0x4 + 0x6262a0] ; 005c2966 | PTR_s_January_006262a0
    JMP 0x005c2b70                      ; 005c296d
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV EDI,dword ptr [EBX + 0xc]       ; 005c2972
        ;   Label: LAB_005c2972
    PUSH EDI                            ; 005c2975
    LEA EAX,[ESP + 0x4]                 ; 005c2976
    PUSH EAX                            ; 005c297a
    CALL crt_unknown.c_FUN_005c2750     ; 005c297b
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c2980
    JMP 0x005c2b70                      ; 005c2983
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV dword ptr [ESP + 0x8c],EBP      ; 005c2988
        ;   Label: LAB_005c2988
    MOV EBP,0x5faae8                    ; 005c298f | = "%m/%d/%y"
    JMP 0x005c27ba                      ; 005c2994
        ;   XREF to: 005c27ba (UNCONDITIONAL_JUMP)  ; LAB_005c27ba
    MOV ECX,dword ptr [EBX + 0x8]       ; 005c2999
        ;   Label: LAB_005c2999
    PUSH ECX                            ; 005c299c
    LEA EAX,[ESP + 0x4]                 ; 005c299d
    PUSH EAX                            ; 005c29a1
    CALL crt_unknown.c_FUN_005c2750     ; 005c29a2
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c29a7
    JMP 0x005c2b70                      ; 005c29aa
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c29af
        ;   Label: LAB_005c29af
    CMP EAX,0xc                         ; 005c29b2
    JLE 0x005c29ba                      ; 005c29b5
        ;   XREF to: 005c29ba (CONDITIONAL_JUMP)  ; LAB_005c29ba
    SUB EAX,0xc                         ; 005c29b7
    TEST EAX,EAX                        ; 005c29ba
        ;   Label: LAB_005c29ba
    JNZ 0x005c29c3                      ; 005c29bc
        ;   XREF to: 005c29c3 (CONDITIONAL_JUMP)  ; LAB_005c29c3
    MOV EAX,0xc                         ; 005c29be
    PUSH EAX                            ; 005c29c3
        ;   Label: LAB_005c29c3
    LEA EAX,[ESP + 0x4]                 ; 005c29c4
    PUSH EAX                            ; 005c29c8
    CALL crt_unknown.c_FUN_005c2750     ; 005c29c9
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c29ce
    JMP 0x005c2b70                      ; 005c29d1
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    PUSH 0xa                            ; 005c29d6
        ;   Label: LAB_005c29d6
    LEA EAX,[ESP + 0x4]                 ; 005c29d8
    PUSH EAX                            ; 005c29dc
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c29dd
    ADD EAX,0x65                        ; 005c29e0
    PUSH EAX                            ; 005c29e3
    CALL crt_unknown.c_FUN_005c9e48     ; 005c29e4
        ;   XREF to: 005c9e48 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9e48()
    ADD ESP,0xc                         ; 005c29e9
    DEC byte ptr [ESP]                  ; 005c29ec
    JMP 0x005c2b70                      ; 005c29ef
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c29f4
        ;   Label: LAB_005c29f4
    INC EAX                             ; 005c29f7
    PUSH EAX                            ; 005c29f8
    LEA EAX,[ESP + 0x4]                 ; 005c29f9
    PUSH EAX                            ; 005c29fd
    CALL crt_unknown.c_FUN_005c2750     ; 005c29fe
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c2a03
    JMP 0x005c2b70                      ; 005c2a06
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV EDX,dword ptr [EBX + 0x4]       ; 005c2a0b
        ;   Label: LAB_005c2a0b
    PUSH EDX                            ; 005c2a0e
    LEA EAX,[ESP + 0x4]                 ; 005c2a0f
    PUSH EAX                            ; 005c2a13
    CALL crt_unknown.c_FUN_005c2750     ; 005c2a14
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c2a19
    JMP 0x005c2b70                      ; 005c2a1c
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV ESI,0x5faaf4                    ; 005c2a21 | DAT_005faaf4
        ;   Label: LAB_005c2a21
    JMP 0x005c2b70                      ; 005c2a26
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV dword ptr [ESP + 0x8c],EBP      ; 005c2a2b
        ;   Label: LAB_005c2a2b
    MOV EBP,0x5faaf8                    ; 005c2a32 | = "%I:%M:%S %p"
    JMP 0x005c27ba                      ; 005c2a37
        ;   XREF to: 005c27ba (UNCONDITIONAL_JUMP)  ; LAB_005c27ba
    CMP dword ptr [EBX + 0x8],0xc       ; 005c2a3c
        ;   Label: LAB_005c2a3c
    JGE 0x005c2a4c                      ; 005c2a40
        ;   XREF to: 005c2a4c (CONDITIONAL_JUMP)  ; LAB_005c2a4c
    MOV ESI,0x5fab04                    ; 005c2a42 | DAT_005fab04
    JMP 0x005c2b70                      ; 005c2a47
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV ESI,0x5fab08                    ; 005c2a4c | DAT_005fab08
        ;   Label: LAB_005c2a4c
    JMP 0x005c2b70                      ; 005c2a51
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV EAX,dword ptr [EBX]             ; 005c2a56
        ;   Label: LAB_005c2a56
    PUSH EAX                            ; 005c2a58
    LEA EAX,[ESP + 0x4]                 ; 005c2a59
    PUSH EAX                            ; 005c2a5d
    CALL crt_unknown.c_FUN_005c2750     ; 005c2a5e
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c2a63
    JMP 0x005c2b70                      ; 005c2a66
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV ESI,0x5fab0c                    ; 005c2a6b | DAT_005fab0c
        ;   Label: LAB_005c2a6b
    JMP 0x005c2b70                      ; 005c2a70
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005c2a75
        ;   Label: LAB_005c2a75
    MOV EDI,dword ptr [EBX + 0x18]      ; 005c2a78
    ADD EDX,0x7                         ; 005c2a7b
    SUB EDX,EDI                         ; 005c2a7e
    MOV ECX,0x7                         ; 005c2a80
    MOV EAX,EDX                         ; 005c2a85
    SAR EDX,0x1f                        ; 005c2a87
    IDIV ECX                            ; 005c2a8a
    PUSH EAX                            ; 005c2a8c
    LEA EAX,[ESP + 0x4]                 ; 005c2a8d
    PUSH EAX                            ; 005c2a91
    CALL crt_unknown.c_FUN_005c2750     ; 005c2a92
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c2a97
    JMP 0x005c2b70                      ; 005c2a9a
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV AL,byte ptr [EBX + 0x18]        ; 005c2a9f
        ;   Label: LAB_005c2a9f
    XOR DH,DH                           ; 005c2aa2
    ADD AL,0x30                         ; 005c2aa4
    MOV byte ptr [ESP + 0x1],DH         ; 005c2aa6
    MOV byte ptr [ESP],AL               ; 005c2aaa
    JMP 0x005c2b70                      ; 005c2aad
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c2ab2
        ;   Label: LAB_005c2ab2
    MOV EDX,EAX                         ; 005c2ab5
    MOV ECX,0x7                         ; 005c2ab7
    SAR EDX,0x1f                        ; 005c2abc
    IDIV ECX                            ; 005c2abf
    SUB EDX,dword ptr [EBX + 0x18]      ; 005c2ac1
    ADD EDX,ECX                         ; 005c2ac4
    MOV EAX,EDX                         ; 005c2ac6
    SAR EDX,0x1f                        ; 005c2ac8
    IDIV ECX                            ; 005c2acb
    MOV EAX,0x6                         ; 005c2acd
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005c2ad2
    SUB EAX,EDX                         ; 005c2ad5
    ADD EAX,ECX                         ; 005c2ad7
    MOV EDX,EAX                         ; 005c2ad9
    MOV ECX,0x7                         ; 005c2adb
    SAR EDX,0x1f                        ; 005c2ae0
    IDIV ECX                            ; 005c2ae3
    PUSH EAX                            ; 005c2ae5
    LEA EAX,[ESP + 0x4]                 ; 005c2ae6
    PUSH EAX                            ; 005c2aea
    CALL crt_unknown.c_FUN_005c2750     ; 005c2aeb
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c2af0
    JMP 0x005c2b70                      ; 005c2af3
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV dword ptr [ESP + 0x8c],EBP      ; 005c2af8
        ;   Label: LAB_005c2af8
    MOV EBP,0x5fab10                    ; 005c2aff | = "%a %b %d, %Y"
    JMP 0x005c27ba                      ; 005c2b04
        ;   XREF to: 005c27ba (UNCONDITIONAL_JUMP)  ; LAB_005c27ba
    MOV dword ptr [ESP + 0x8c],EBP      ; 005c2b09
        ;   Label: LAB_005c2b09
    MOV EBP,0x5fab20                    ; 005c2b10 | = "%H:%M:%S"
    JMP 0x005c27ba                      ; 005c2b15
        ;   XREF to: 005c27ba (UNCONDITIONAL_JUMP)  ; LAB_005c27ba
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c2b1a
        ;   Label: LAB_005c2b1a
    MOV EDX,EAX                         ; 005c2b1d
    MOV ECX,0x64                        ; 005c2b1f
    SAR EDX,0x1f                        ; 005c2b24
    IDIV ECX                            ; 005c2b27
    PUSH EDX                            ; 005c2b29
    LEA EAX,[ESP + 0x4]                 ; 005c2b2a
    PUSH EAX                            ; 005c2b2e
    CALL crt_unknown.c_FUN_005c2750     ; 005c2b2f
        ;   XREF to: 005c2750 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2750()
    ADD ESP,0x8                         ; 005c2b34
    JMP 0x005c2b70                      ; 005c2b37
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    PUSH 0xa                            ; 005c2b39
        ;   Label: LAB_005c2b39
    LEA EAX,[ESP + 0x4]                 ; 005c2b3b
    PUSH EAX                            ; 005c2b3f
    MOV EAX,dword ptr [EBX + 0x14]      ; 005c2b40
    ADD EAX,0x76c                       ; 005c2b43
    PUSH EAX                            ; 005c2b48
    CALL crt_unknown.c_FUN_005c9e48     ; 005c2b49
        ;   XREF to: 005c9e48 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9e48()
    ADD ESP,0xc                         ; 005c2b4e
    JMP 0x005c2b70                      ; 005c2b51
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    CALL crt_unknown.c_FUN_005c9428     ; 005c2b53
        ;   XREF to: 005c9428 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9428()
        ;   Label: LAB_005c2b53
    MOV ESI,dword ptr [EBX + 0x20]      ; 005c2b58
    MOV ESI,dword ptr [ESI*0x4 + 0x626990] ; 005c2b5b | PTR_DAT_00626990
    JMP 0x005c2b70                      ; 005c2b62
        ;   XREF to: 005c2b70 (UNCONDITIONAL_JUMP)  ; LAB_005c2b70
    MOV AL,byte ptr [EBP]               ; 005c2b64
        ;   Label: LAB_005c2b64
    XOR CH,CH                           ; 005c2b67
    MOV byte ptr [ESP],AL               ; 005c2b69
    MOV byte ptr [ESP + 0x1],CH         ; 005c2b6c
    MOV EDI,ESI                         ; 005c2b70
        ;   Label: LAB_005c2b70
    INC EBP                             ; 005c2b72
    PUSH ES                             ; 005c2b73
    MOV AX,DS                           ; 005c2b74
    MOV ES,AX                           ; 005c2b76
    SUB ECX,ECX                         ; 005c2b78
    DEC ECX                             ; 005c2b7a
    XOR EAX,EAX                         ; 005c2b7b
    SCASB.REPNE ES:EDI                  ; 005c2b7d | DAT_005fab0c | DAT_005fab04 | DAT_005fab08
    NOT ECX                             ; 005c2b7f
    DEC ECX                             ; 005c2b81
    POP ES                              ; 005c2b82
    MOV EDI,dword ptr [ESP + 0x88]      ; 005c2b83
    MOV EDX,ECX                         ; 005c2b8a
    CMP ECX,EDI                         ; 005c2b8c
    JBE 0x005c2b92                      ; 005c2b8e
        ;   XREF to: 005c2b92 (CONDITIONAL_JUMP)  ; LAB_005c2b92
    MOV EDX,EDI                         ; 005c2b90
    MOV EDI,dword ptr [ESP + 0xa4]      ; 005c2b92
        ;   Label: LAB_005c2b92
    MOV EAX,dword ptr [ESP + 0x84]      ; 005c2b99
    MOV ECX,EDX                         ; 005c2ba0
    ADD EDI,EAX                         ; 005c2ba2
    PUSH ES                             ; 005c2ba4
    MOV AX,DS                           ; 005c2ba5
    MOV ES,AX                           ; 005c2ba7
    PUSH EDI                            ; 005c2ba9
    MOV EAX,ECX                         ; 005c2baa
    SHR ECX,0x2                         ; 005c2bac
    MOVSD.REP ES:EDI,ESI                ; 005c2baf
    MOV CL,AL                           ; 005c2bb1
    AND CL,0x3                          ; 005c2bb3
    MOVSB.REP ES:EDI,ESI                ; 005c2bb6
    POP EDI                             ; 005c2bb8
    POP ES                              ; 005c2bb9
    MOV ECX,dword ptr [ESP + 0x88]      ; 005c2bba
    MOV ESI,dword ptr [ESP + 0x84]      ; 005c2bc1
    SUB ECX,EDX                         ; 005c2bc8
    ADD ESI,EDX                         ; 005c2bca
    MOV dword ptr [ESP + 0x88],ECX      ; 005c2bcc
    MOV dword ptr [ESP + 0x84],ESI      ; 005c2bd3
    JMP 0x005c27ba                      ; 005c2bda
        ;   XREF to: 005c27ba (UNCONDITIONAL_JUMP)  ; LAB_005c27ba
    MOV EAX,dword ptr [ESP + 0x84]      ; 005c2bdf
        ;   Label: LAB_005c2bdf
    CMP EAX,dword ptr [ESP + 0xa8]      ; 005c2be6
    JNC 0x005c2c06                      ; 005c2bed
        ;   XREF to: 005c2c06 (CONDITIONAL_JUMP)  ; LAB_005c2c06
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005c2bef
    MOV EBX,dword ptr [ESP + 0x84]      ; 005c2bf6
    ADD EAX,EBX                         ; 005c2bfd
    MOV byte ptr [EAX],0x0              ; 005c2bff
    MOV EAX,EBX                         ; 005c2c02
    JMP 0x005c2c08                      ; 005c2c04
        ;   XREF to: 005c2c08 (UNCONDITIONAL_JUMP)  ; LAB_005c2c08
    XOR EAX,EAX                         ; 005c2c06
        ;   Label: LAB_005c2c06
    ADD ESP,0x90                        ; 005c2c08
        ;   Label: LAB_005c2c08
    POP EBP                             ; 005c2c0e
    POP EDI                             ; 005c2c0f
    POP ESI                             ; 005c2c10
    POP EBX                             ; 005c2c11
    RET                                 ; 005c2c12

