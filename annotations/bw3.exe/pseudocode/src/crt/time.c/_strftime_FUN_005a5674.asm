; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_time_c__strftime_FUN_005a5674(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)
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
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820 at 0048292d
;   shape_edittool.cpp_FUN_0047dd20 at 0047e149
;
; Referenced Globals:
;   TerminatedCString s_a_b_d_H_M_S_Y_005da78c
;   TerminatedCString s_m_d_y_005da7a4
;   undefined1 DAT_005da7b0
;   TerminatedCString s_I_M_S_p_005da7b4
;   undefined1 DAT_005da7c0
;   undefined1 DAT_005da7c4
;   undefined1 DAT_005da7c8
;   TerminatedCString s_a_b_d_Y_005da7cc
;   TerminatedCString s_H_M_S_005da7dc
;   undefined4 DAT_006075dc
;   undefined1* PTR_s_Sunday_006075f8 = 005da6dc
;   undefined4 DAT_00607614
;   undefined1* PTR_s_January_00607644 = 005da720
;   void* PTR_DAT_00607d34 = 00607c30
;
; Called Functions:
;   crt_unknown.c_FUN_005a5640
;   crt_unknown.c_FUN_005ac558
;   crt_unknown.c_FUN_005acc88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5674
        ;   Label: crt_time.c__strftime_FUN_005a5674
    PUSH ESI                            ; 005a5675
    PUSH EDI                            ; 005a5676
    PUSH EBP                            ; 005a5677
    SUB ESP,0x90                        ; 005a5678
    MOV EBP,dword ptr [ESP + 0xac]      ; 005a567e
    MOV EBX,dword ptr [ESP + 0xb0]      ; 005a5685
    XOR EDX,EDX                         ; 005a568c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005a568e
    MOV dword ptr [ESP + 0x84],EDX      ; 005a5695
    MOV dword ptr [ESP + 0x88],EAX      ; 005a569c
    MOV dword ptr [ESP + 0x8c],EDX      ; 005a56a3
    MOV AH,byte ptr [EBP]               ; 005a56aa | = "%a %b %d, %Y" | s_I_M_S_p_005da7b4 | s_a_b_d_H_M_S_Y_005da78c
        ;   Label: LAB_005a56aa
    MOV ESI,ESP                         ; 005a56ad
    TEST AH,AH                          ; 005a56af
    JNZ 0x005a56d0                      ; 005a56b1
        ;   XREF to: 005a56d0 (CONDITIONAL_JUMP)  ; LAB_005a56d0
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005a56b3
    TEST EDI,EDI                        ; 005a56ba
    JZ 0x005a5acf                       ; 005a56bc
        ;   XREF to: 005a5acf (CONDITIONAL_JUMP)  ; LAB_005a5acf
    XOR EAX,EAX                         ; 005a56c2
    LEA EBP,[EDI + 0x1]                 ; 005a56c4
    MOV dword ptr [ESP + 0x8c],EAX      ; 005a56c7
    JMP 0x005a56aa                      ; 005a56ce
        ;   XREF to: 005a56aa (UNCONDITIONAL_JUMP)  ; LAB_005a56aa
    CMP AH,0x25                         ; 005a56d0
        ;   Label: LAB_005a56d0
    JZ 0x005a56e5                       ; 005a56d3
        ;   XREF to: 005a56e5 (CONDITIONAL_JUMP)  ; LAB_005a56e5
    MOV AL,AH                           ; 005a56d5
    MOV byte ptr [ESP],AH               ; 005a56d7
    XOR AL,AH                           ; 005a56da
    MOV byte ptr [ESP + 0x1],AL         ; 005a56dc
    JMP 0x005a5a60                      ; 005a56e0
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV AL,byte ptr [EBP + 0x1]         ; 005a56e5
        ;   Label: LAB_005a56e5
    INC EBP                             ; 005a56e8
    CMP AL,0x61                         ; 005a56e9
    JC 0x005a5791                       ; 005a56eb
        ;   XREF to: 005a5791 (CONDITIONAL_JUMP)  ; LAB_005a5791
    JBE 0x005a5821                      ; 005a56f1
        ;   XREF to: 005a5821 (CONDITIONAL_JUMP)  ; LAB_005a5821
    CMP AL,0x6e                         ; 005a56f7
    JC 0x005a574a                       ; 005a56f9
        ;   XREF to: 005a574a (CONDITIONAL_JUMP)  ; LAB_005a574a
    JBE 0x005a5911                      ; 005a56fb
        ;   XREF to: 005a5911 (CONDITIONAL_JUMP)  ; LAB_005a5911
    CMP AL,0x77                         ; 005a5701
    JC 0x005a5726                       ; 005a5703
        ;   XREF to: 005a5726 (CONDITIONAL_JUMP)  ; LAB_005a5726
    JBE 0x005a598f                      ; 005a5705
        ;   XREF to: 005a598f (CONDITIONAL_JUMP)  ; LAB_005a598f
    CMP AL,0x79                         ; 005a570b
    JC 0x005a59e8                       ; 005a570d
        ;   XREF to: 005a59e8 (CONDITIONAL_JUMP)  ; LAB_005a59e8
    JBE 0x005a5a0a                      ; 005a5713
        ;   XREF to: 005a5a0a (CONDITIONAL_JUMP)  ; LAB_005a5a0a
    CMP AL,0x7a                         ; 005a5719
    JZ 0x005a5a43                       ; 005a571b
        ;   XREF to: 005a5a43 (CONDITIONAL_JUMP)  ; LAB_005a5a43
    JMP 0x005a5a54                      ; 005a5721
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x72                         ; 005a5726
        ;   Label: LAB_005a5726
    JC 0x005a573d                       ; 005a5728
        ;   XREF to: 005a573d (CONDITIONAL_JUMP)  ; LAB_005a573d
    JBE 0x005a591b                      ; 005a572a
        ;   XREF to: 005a591b (CONDITIONAL_JUMP)  ; LAB_005a591b
    CMP AL,0x74                         ; 005a5730
    JZ 0x005a595b                       ; 005a5732
        ;   XREF to: 005a595b (CONDITIONAL_JUMP)  ; LAB_005a595b
    JMP 0x005a5a54                      ; 005a5738
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x70                         ; 005a573d
        ;   Label: LAB_005a573d
    JZ 0x005a592c                       ; 005a573f
        ;   XREF to: 005a592c (CONDITIONAL_JUMP)  ; LAB_005a592c
    JMP 0x005a5a54                      ; 005a5745
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x64                         ; 005a574a
        ;   Label: LAB_005a574a
    JC 0x005a5778                       ; 005a574c
        ;   XREF to: 005a5778 (CONDITIONAL_JUMP)  ; LAB_005a5778
    JBE 0x005a5862                      ; 005a574e
        ;   XREF to: 005a5862 (CONDITIONAL_JUMP)  ; LAB_005a5862
    CMP AL,0x6a                         ; 005a5754
    JC 0x005a576b                       ; 005a5756
        ;   XREF to: 005a576b (CONDITIONAL_JUMP)  ; LAB_005a576b
    JBE 0x005a58c6                      ; 005a5758
        ;   XREF to: 005a58c6 (CONDITIONAL_JUMP)  ; LAB_005a58c6
    CMP AL,0x6d                         ; 005a575e
    JZ 0x005a58e4                       ; 005a5760
        ;   XREF to: 005a58e4 (CONDITIONAL_JUMP)  ; LAB_005a58e4
    JMP 0x005a5a54                      ; 005a5766
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x68                         ; 005a576b
        ;   Label: LAB_005a576b
    JZ 0x005a5842                       ; 005a576d
        ;   XREF to: 005a5842 (CONDITIONAL_JUMP)  ; LAB_005a5842
    JMP 0x005a5a54                      ; 005a5773
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x62                         ; 005a5778
        ;   Label: LAB_005a5778
    JBE 0x005a5842                      ; 005a577a
        ;   XREF to: 005a5842 (CONDITIONAL_JUMP)  ; LAB_005a5842
    MOV dword ptr [ESP + 0x8c],EBP      ; 005a5780
    MOV EBP,0x5da78c                    ; 005a5787 | = "%a %b %d %H:%M:%S %Y"
    JMP 0x005a56aa                      ; 005a578c
        ;   XREF to: 005a56aa (UNCONDITIONAL_JUMP)  ; LAB_005a56aa
    CMP AL,0x4d                         ; 005a5791
        ;   Label: LAB_005a5791
    JC 0x005a57e4                       ; 005a5793
        ;   XREF to: 005a57e4 (CONDITIONAL_JUMP)  ; LAB_005a57e4
    JBE 0x005a58fb                      ; 005a5795
        ;   XREF to: 005a58fb (CONDITIONAL_JUMP)  ; LAB_005a58fb
    CMP AL,0x57                         ; 005a579b
    JC 0x005a57c0                       ; 005a579d
        ;   XREF to: 005a57c0 (CONDITIONAL_JUMP)  ; LAB_005a57c0
    JBE 0x005a59a2                      ; 005a579f
        ;   XREF to: 005a59a2 (CONDITIONAL_JUMP)  ; LAB_005a59a2
    CMP AL,0x59                         ; 005a57a5
    JC 0x005a59f9                       ; 005a57a7
        ;   XREF to: 005a59f9 (CONDITIONAL_JUMP)  ; LAB_005a59f9
    JBE 0x005a5a29                      ; 005a57ad
        ;   XREF to: 005a5a29 (CONDITIONAL_JUMP)  ; LAB_005a5a29
    CMP AL,0x5a                         ; 005a57b3
    JZ 0x005a5a43                       ; 005a57b5
        ;   XREF to: 005a5a43 (CONDITIONAL_JUMP)  ; LAB_005a5a43
    JMP 0x005a5a54                      ; 005a57bb
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x54                         ; 005a57c0
        ;   Label: LAB_005a57c0
    JC 0x005a57d7                       ; 005a57c2
        ;   XREF to: 005a57d7 (CONDITIONAL_JUMP)  ; LAB_005a57d7
    JBE 0x005a59f9                      ; 005a57c4
        ;   XREF to: 005a59f9 (CONDITIONAL_JUMP)  ; LAB_005a59f9
    CMP AL,0x55                         ; 005a57ca
    JZ 0x005a5965                       ; 005a57cc
        ;   XREF to: 005a5965 (CONDITIONAL_JUMP)  ; LAB_005a5965
    JMP 0x005a5a54                      ; 005a57d2
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x53                         ; 005a57d7
        ;   Label: LAB_005a57d7
    JZ 0x005a5946                       ; 005a57d9
        ;   XREF to: 005a5946 (CONDITIONAL_JUMP)  ; LAB_005a5946
    JMP 0x005a5a54                      ; 005a57df
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x42                         ; 005a57e4
        ;   Label: LAB_005a57e4
    JC 0x005a580a                       ; 005a57e6
        ;   XREF to: 005a580a (CONDITIONAL_JUMP)  ; LAB_005a580a
    JBE 0x005a5853                      ; 005a57e8
        ;   XREF to: 005a5853 (CONDITIONAL_JUMP)  ; LAB_005a5853
    CMP AL,0x48                         ; 005a57ea
    JC 0x005a5801                       ; 005a57ec
        ;   XREF to: 005a5801 (CONDITIONAL_JUMP)  ; LAB_005a5801
    JBE 0x005a5889                      ; 005a57ee
        ;   XREF to: 005a5889 (CONDITIONAL_JUMP)  ; LAB_005a5889
    CMP AL,0x49                         ; 005a57f4
    JZ 0x005a589f                       ; 005a57f6
        ;   XREF to: 005a589f (CONDITIONAL_JUMP)  ; LAB_005a589f
    JMP 0x005a5a54                      ; 005a57fc
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x44                         ; 005a5801
        ;   Label: LAB_005a5801
    JZ 0x005a5878                       ; 005a5803
        ;   XREF to: 005a5878 (CONDITIONAL_JUMP)  ; LAB_005a5878
    JMP 0x005a5a54                      ; 005a5805
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,AH                           ; 005a580a
        ;   Label: LAB_005a580a
    JC 0x005a5a54                       ; 005a580c
        ;   XREF to: 005a5a54 (CONDITIONAL_JUMP)  ; LAB_005a5a54
    JBE 0x005a5a54                      ; 005a5812
        ;   XREF to: 005a5a54 (CONDITIONAL_JUMP)  ; LAB_005a5a54
    CMP AL,0x41                         ; 005a5818
    JZ 0x005a5833                       ; 005a581a
        ;   XREF to: 005a5833 (CONDITIONAL_JUMP)  ; LAB_005a5833
    JMP 0x005a5a54                      ; 005a581c
        ;   XREF to: 005a5a54 (UNCONDITIONAL_JUMP)  ; LAB_005a5a54
    MOV EAX,dword ptr [EBX + 0x18]      ; 005a5821
        ;   Label: LAB_005a5821
    MOV ESI,0x6075dc                    ; 005a5824 | DAT_006075dc
    SHL EAX,0x2                         ; 005a5829
    ADD ESI,EAX                         ; 005a582c
    JMP 0x005a5a60                      ; 005a582e
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV ESI,dword ptr [EBX + 0x18]      ; 005a5833
        ;   Label: LAB_005a5833
    MOV ESI,dword ptr [ESI*0x4 + 0x6075f8] ; 005a5836 | PTR_s_Sunday_006075f8
    JMP 0x005a5a60                      ; 005a583d
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a5842
        ;   Label: LAB_005a5842
    SHL ESI,0x2                         ; 005a5845
    ADD ESI,0x607614                    ; 005a5848 | DAT_00607614
    JMP 0x005a5a60                      ; 005a584e
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a5853
        ;   Label: LAB_005a5853
    MOV ESI,dword ptr [ESI*0x4 + 0x607644] ; 005a5856 | PTR_s_January_00607644
    JMP 0x005a5a60                      ; 005a585d
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV EDI,dword ptr [EBX + 0xc]       ; 005a5862
        ;   Label: LAB_005a5862
    PUSH EDI                            ; 005a5865
    LEA EAX,[ESP + 0x4]                 ; 005a5866
    PUSH EAX                            ; 005a586a
    CALL crt_unknown.c_FUN_005a5640     ; 005a586b
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a5870
    JMP 0x005a5a60                      ; 005a5873
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV dword ptr [ESP + 0x8c],EBP      ; 005a5878
        ;   Label: LAB_005a5878
    MOV EBP,0x5da7a4                    ; 005a587f | = "%m/%d/%y"
    JMP 0x005a56aa                      ; 005a5884
        ;   XREF to: 005a56aa (UNCONDITIONAL_JUMP)  ; LAB_005a56aa
    MOV ECX,dword ptr [EBX + 0x8]       ; 005a5889
        ;   Label: LAB_005a5889
    PUSH ECX                            ; 005a588c
    LEA EAX,[ESP + 0x4]                 ; 005a588d
    PUSH EAX                            ; 005a5891
    CALL crt_unknown.c_FUN_005a5640     ; 005a5892
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a5897
    JMP 0x005a5a60                      ; 005a589a
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a589f
        ;   Label: LAB_005a589f
    CMP EAX,0xc                         ; 005a58a2
    JLE 0x005a58aa                      ; 005a58a5
        ;   XREF to: 005a58aa (CONDITIONAL_JUMP)  ; LAB_005a58aa
    SUB EAX,0xc                         ; 005a58a7
    TEST EAX,EAX                        ; 005a58aa
        ;   Label: LAB_005a58aa
    JNZ 0x005a58b3                      ; 005a58ac
        ;   XREF to: 005a58b3 (CONDITIONAL_JUMP)  ; LAB_005a58b3
    MOV EAX,0xc                         ; 005a58ae
    PUSH EAX                            ; 005a58b3
        ;   Label: LAB_005a58b3
    LEA EAX,[ESP + 0x4]                 ; 005a58b4
    PUSH EAX                            ; 005a58b8
    CALL crt_unknown.c_FUN_005a5640     ; 005a58b9
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a58be
    JMP 0x005a5a60                      ; 005a58c1
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    PUSH 0xa                            ; 005a58c6
        ;   Label: LAB_005a58c6
    LEA EAX,[ESP + 0x4]                 ; 005a58c8
    PUSH EAX                            ; 005a58cc
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005a58cd
    ADD EAX,0x65                        ; 005a58d0
    PUSH EAX                            ; 005a58d3
    CALL crt_unknown.c_FUN_005acc88     ; 005a58d4
        ;   XREF to: 005acc88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acc88()
    ADD ESP,0xc                         ; 005a58d9
    DEC byte ptr [ESP]                  ; 005a58dc
    JMP 0x005a5a60                      ; 005a58df
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a58e4
        ;   Label: LAB_005a58e4
    INC EAX                             ; 005a58e7
    PUSH EAX                            ; 005a58e8
    LEA EAX,[ESP + 0x4]                 ; 005a58e9
    PUSH EAX                            ; 005a58ed
    CALL crt_unknown.c_FUN_005a5640     ; 005a58ee
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a58f3
    JMP 0x005a5a60                      ; 005a58f6
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a58fb
        ;   Label: LAB_005a58fb
    PUSH EDX                            ; 005a58fe
    LEA EAX,[ESP + 0x4]                 ; 005a58ff
    PUSH EAX                            ; 005a5903
    CALL crt_unknown.c_FUN_005a5640     ; 005a5904
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a5909
    JMP 0x005a5a60                      ; 005a590c
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV ESI,0x5da7b0                    ; 005a5911 | DAT_005da7b0
        ;   Label: LAB_005a5911
    JMP 0x005a5a60                      ; 005a5916
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV dword ptr [ESP + 0x8c],EBP      ; 005a591b
        ;   Label: LAB_005a591b
    MOV EBP,0x5da7b4                    ; 005a5922 | = "%I:%M:%S %p"
    JMP 0x005a56aa                      ; 005a5927
        ;   XREF to: 005a56aa (UNCONDITIONAL_JUMP)  ; LAB_005a56aa
    CMP dword ptr [EBX + 0x8],0xc       ; 005a592c
        ;   Label: LAB_005a592c
    JGE 0x005a593c                      ; 005a5930
        ;   XREF to: 005a593c (CONDITIONAL_JUMP)  ; LAB_005a593c
    MOV ESI,0x5da7c0                    ; 005a5932 | DAT_005da7c0
    JMP 0x005a5a60                      ; 005a5937
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV ESI,0x5da7c4                    ; 005a593c | DAT_005da7c4
        ;   Label: LAB_005a593c
    JMP 0x005a5a60                      ; 005a5941
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV EAX,dword ptr [EBX]             ; 005a5946
        ;   Label: LAB_005a5946
    PUSH EAX                            ; 005a5948
    LEA EAX,[ESP + 0x4]                 ; 005a5949
    PUSH EAX                            ; 005a594d
    CALL crt_unknown.c_FUN_005a5640     ; 005a594e
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a5953
    JMP 0x005a5a60                      ; 005a5956
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV ESI,0x5da7c8                    ; 005a595b | DAT_005da7c8
        ;   Label: LAB_005a595b
    JMP 0x005a5a60                      ; 005a5960
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005a5965
        ;   Label: LAB_005a5965
    MOV EDI,dword ptr [EBX + 0x18]      ; 005a5968
    ADD EDX,0x7                         ; 005a596b
    SUB EDX,EDI                         ; 005a596e
    MOV ECX,0x7                         ; 005a5970
    MOV EAX,EDX                         ; 005a5975
    SAR EDX,0x1f                        ; 005a5977
    IDIV ECX                            ; 005a597a
    PUSH EAX                            ; 005a597c
    LEA EAX,[ESP + 0x4]                 ; 005a597d
    PUSH EAX                            ; 005a5981
    CALL crt_unknown.c_FUN_005a5640     ; 005a5982
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a5987
    JMP 0x005a5a60                      ; 005a598a
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV AL,byte ptr [EBX + 0x18]        ; 005a598f
        ;   Label: LAB_005a598f
    XOR DH,DH                           ; 005a5992
    ADD AL,0x30                         ; 005a5994
    MOV byte ptr [ESP + 0x1],DH         ; 005a5996
    MOV byte ptr [ESP],AL               ; 005a599a
    JMP 0x005a5a60                      ; 005a599d
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005a59a2
        ;   Label: LAB_005a59a2
    MOV EDX,EAX                         ; 005a59a5
    MOV ECX,0x7                         ; 005a59a7
    SAR EDX,0x1f                        ; 005a59ac
    IDIV ECX                            ; 005a59af
    SUB EDX,dword ptr [EBX + 0x18]      ; 005a59b1
    ADD EDX,ECX                         ; 005a59b4
    MOV EAX,EDX                         ; 005a59b6
    SAR EDX,0x1f                        ; 005a59b8
    IDIV ECX                            ; 005a59bb
    MOV EAX,0x6                         ; 005a59bd
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005a59c2
    SUB EAX,EDX                         ; 005a59c5
    ADD EAX,ECX                         ; 005a59c7
    MOV EDX,EAX                         ; 005a59c9
    MOV ECX,0x7                         ; 005a59cb
    SAR EDX,0x1f                        ; 005a59d0
    IDIV ECX                            ; 005a59d3
    PUSH EAX                            ; 005a59d5
    LEA EAX,[ESP + 0x4]                 ; 005a59d6
    PUSH EAX                            ; 005a59da
    CALL crt_unknown.c_FUN_005a5640     ; 005a59db
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a59e0
    JMP 0x005a5a60                      ; 005a59e3
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV dword ptr [ESP + 0x8c],EBP      ; 005a59e8
        ;   Label: LAB_005a59e8
    MOV EBP,0x5da7cc                    ; 005a59ef | = "%a %b %d, %Y"
    JMP 0x005a56aa                      ; 005a59f4
        ;   XREF to: 005a56aa (UNCONDITIONAL_JUMP)  ; LAB_005a56aa
    MOV dword ptr [ESP + 0x8c],EBP      ; 005a59f9
        ;   Label: LAB_005a59f9
    MOV EBP,0x5da7dc                    ; 005a5a00 | = "%H:%M:%S"
    JMP 0x005a56aa                      ; 005a5a05
        ;   XREF to: 005a56aa (UNCONDITIONAL_JUMP)  ; LAB_005a56aa
    MOV EAX,dword ptr [EBX + 0x14]      ; 005a5a0a
        ;   Label: LAB_005a5a0a
    MOV EDX,EAX                         ; 005a5a0d
    MOV ECX,0x64                        ; 005a5a0f
    SAR EDX,0x1f                        ; 005a5a14
    IDIV ECX                            ; 005a5a17
    PUSH EDX                            ; 005a5a19
    LEA EAX,[ESP + 0x4]                 ; 005a5a1a
    PUSH EAX                            ; 005a5a1e
    CALL crt_unknown.c_FUN_005a5640     ; 005a5a1f
        ;   XREF to: 005a5640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5640()
    ADD ESP,0x8                         ; 005a5a24
    JMP 0x005a5a60                      ; 005a5a27
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    PUSH 0xa                            ; 005a5a29
        ;   Label: LAB_005a5a29
    LEA EAX,[ESP + 0x4]                 ; 005a5a2b
    PUSH EAX                            ; 005a5a2f
    MOV EAX,dword ptr [EBX + 0x14]      ; 005a5a30
    ADD EAX,0x76c                       ; 005a5a33
    PUSH EAX                            ; 005a5a38
    CALL crt_unknown.c_FUN_005acc88     ; 005a5a39
        ;   XREF to: 005acc88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acc88()
    ADD ESP,0xc                         ; 005a5a3e
    JMP 0x005a5a60                      ; 005a5a41
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    CALL crt_unknown.c_FUN_005ac558     ; 005a5a43
        ;   XREF to: 005ac558 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac558()
        ;   Label: LAB_005a5a43
    MOV ESI,dword ptr [EBX + 0x20]      ; 005a5a48
    MOV ESI,dword ptr [ESI*0x4 + 0x607d34] ; 005a5a4b | PTR_DAT_00607d34
    JMP 0x005a5a60                      ; 005a5a52
        ;   XREF to: 005a5a60 (UNCONDITIONAL_JUMP)  ; LAB_005a5a60
    MOV AL,byte ptr [EBP]               ; 005a5a54
        ;   Label: LAB_005a5a54
    XOR CH,CH                           ; 005a5a57
    MOV byte ptr [ESP],AL               ; 005a5a59
    MOV byte ptr [ESP + 0x1],CH         ; 005a5a5c
    MOV EDI,ESI                         ; 005a5a60
        ;   Label: LAB_005a5a60
    INC EBP                             ; 005a5a62
    PUSH ES                             ; 005a5a63
    MOV AX,DS                           ; 005a5a64
    MOV ES,AX                           ; 005a5a66
    SUB ECX,ECX                         ; 005a5a68
    DEC ECX                             ; 005a5a6a
    XOR EAX,EAX                         ; 005a5a6b
    SCASB.REPNE ES:EDI                  ; 005a5a6d | DAT_005da7c8 | DAT_005da7c0 | DAT_005da7c4
    NOT ECX                             ; 005a5a6f
    DEC ECX                             ; 005a5a71
    POP ES                              ; 005a5a72
    MOV EDI,dword ptr [ESP + 0x88]      ; 005a5a73
    MOV EDX,ECX                         ; 005a5a7a
    CMP ECX,EDI                         ; 005a5a7c
    JBE 0x005a5a82                      ; 005a5a7e
        ;   XREF to: 005a5a82 (CONDITIONAL_JUMP)  ; LAB_005a5a82
    MOV EDX,EDI                         ; 005a5a80
    MOV EDI,dword ptr [ESP + 0xa4]      ; 005a5a82
        ;   Label: LAB_005a5a82
    MOV EAX,dword ptr [ESP + 0x84]      ; 005a5a89
    MOV ECX,EDX                         ; 005a5a90
    ADD EDI,EAX                         ; 005a5a92
    PUSH ES                             ; 005a5a94
    MOV AX,DS                           ; 005a5a95
    MOV ES,AX                           ; 005a5a97
    PUSH EDI                            ; 005a5a99
    MOV EAX,ECX                         ; 005a5a9a
    SHR ECX,0x2                         ; 005a5a9c
    MOVSD.REP ES:EDI,ESI                ; 005a5a9f
    MOV CL,AL                           ; 005a5aa1
    AND CL,0x3                          ; 005a5aa3
    MOVSB.REP ES:EDI,ESI                ; 005a5aa6
    POP EDI                             ; 005a5aa8
    POP ES                              ; 005a5aa9
    MOV ECX,dword ptr [ESP + 0x88]      ; 005a5aaa
    MOV ESI,dword ptr [ESP + 0x84]      ; 005a5ab1
    SUB ECX,EDX                         ; 005a5ab8
    ADD ESI,EDX                         ; 005a5aba
    MOV dword ptr [ESP + 0x88],ECX      ; 005a5abc
    MOV dword ptr [ESP + 0x84],ESI      ; 005a5ac3
    JMP 0x005a56aa                      ; 005a5aca
        ;   XREF to: 005a56aa (UNCONDITIONAL_JUMP)  ; LAB_005a56aa
    MOV EAX,dword ptr [ESP + 0x84]      ; 005a5acf
        ;   Label: LAB_005a5acf
    CMP EAX,dword ptr [ESP + 0xa8]      ; 005a5ad6
    JNC 0x005a5af6                      ; 005a5add
        ;   XREF to: 005a5af6 (CONDITIONAL_JUMP)  ; LAB_005a5af6
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005a5adf
    MOV EBX,dword ptr [ESP + 0x84]      ; 005a5ae6
    ADD EAX,EBX                         ; 005a5aed
    MOV byte ptr [EAX],0x0              ; 005a5aef
    MOV EAX,EBX                         ; 005a5af2
    JMP 0x005a5af8                      ; 005a5af4
        ;   XREF to: 005a5af8 (UNCONDITIONAL_JUMP)  ; LAB_005a5af8
    XOR EAX,EAX                         ; 005a5af6
        ;   Label: LAB_005a5af6
    ADD ESP,0x90                        ; 005a5af8
        ;   Label: LAB_005a5af8
    POP EBP                             ; 005a5afe
    POP EDI                             ; 005a5aff
    POP ESI                             ; 005a5b00
    POP EBX                             ; 005a5b01
    RET                                 ; 005a5b02

