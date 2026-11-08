; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525840(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0052af80 at 0052b077
;   FUN_0052b450 at 0052c034
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb0b6
;   TerminatedCString s_MPEG_Layer_2_pick_table_005eb0c7
;   TerminatedCString s_sound_mp3_cpp_005eb100
;   TerminatedCString s_js_bound_bad_layer_modex_005eb111
;   undefined4 s_CMotionController_0061f8e5+0xb
;   undefined4 DAT_006202e8
;   undefined4 DAT_00620328
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525840
        ;   Label: FUN_00525840
    PUSH ESI                            ; 00525841
    PUSH EDI                            ; 00525842
    PUSH EBP                            ; 00525843
    SUB ESP,0x14                        ; 00525844
    MOV EBX,dword ptr [ESP + 0x28]      ; 00525847
    MOV ESI,dword ptr [EBX]             ; 0052584b
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0052584d
    MOV dword ptr [EBX + 0x4],EAX       ; 00525850
    CMP EAX,0x3                         ; 00525853
    SETNZ AL                            ; 00525856
    AND EAX,0xff                        ; 00525859
    INC EAX                             ; 0052585e
    MOV dword ptr [EBX + 0x10],EAX      ; 0052585f
    CMP dword ptr [ESI + 0x4],0x2       ; 00525862
    JZ 0x005258d1                       ; 00525866
        ;   XREF to: 005258d1 (CONDITIONAL_JUMP)  ; LAB_005258d1
    MOV dword ptr [EBX + 0x18],0x20     ; 00525868
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052586f
        ;   Label: LAB_0052586f
    CMP ECX,0x1                         ; 00525872
    JNZ 0x005259ea                      ; 00525875
        ;   XREF to: 005259ea (CONDITIONAL_JUMP)  ; LAB_005259ea
    MOV EDI,dword ptr [ESI + 0x4]       ; 0052587b
    MOV ESI,dword ptr [ESI + 0x20]      ; 0052587e
    CMP EDI,ECX                         ; 00525881
    JL 0x0052588e                       ; 00525883
        ;   XREF to: 0052588e (CONDITIONAL_JUMP)  ; LAB_0052588e
    CMP EDI,0x3                         ; 00525885
    JLE 0x005259d4                      ; 00525888
        ;   XREF to: 005259d4 (CONDITIONAL_JUMP)  ; LAB_005259d4
    PUSH 0x1d404c8                      ; 0052588e
        ;   Label: LAB_0052588e
    PUSH ESI                            ; 00525893
    PUSH EDI                            ; 00525894
    MOV EBP,0x5eb100                    ; 00525895 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x1ea                       ; 0052589a
    PUSH 0x5eb111                       ; 0052589f | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x01d1d400],EBP      ; 005258a4 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005258aa | DAT_01d1d404
    CALL FUN_005030e0                   ; 005258af
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x10                        ; 005258b4
    SHL ESI,0x2                         ; 005258b7
        ;   Label: LAB_005258b7
    SHL EDI,0x4                         ; 005258ba
    LEA EAX,[EDI + ESI*0x1]             ; 005258bd
    MOV EAX,dword ptr [EAX + 0x61f8f0]  ; 005258c0 | s_CMotionController_0061f8e5+0xb
    MOV dword ptr [EBX + 0x14],EAX      ; 005258c6
    ADD ESP,0x14                        ; 005258c9
    POP EBP                             ; 005258cc
    POP EDI                             ; 005258cd
    POP ESI                             ; 005258ce
    POP EBX                             ; 005258cf
    RET                                 ; 005258d0
    MOV EAX,dword ptr [EBX + 0x18]      ; 005258d1
        ;   Label: LAB_005258d1
    MOV ECX,dword ptr [EBX]             ; 005258d4
    MOV dword ptr [ESP + 0xc],EAX       ; 005258d6
    MOV EAX,dword ptr [ECX + 0xc]       ; 005258da
    MOV EDI,dword ptr [ECX]             ; 005258dd
    MOV dword ptr [ESP],EAX             ; 005258df
    LEA EAX,[EDI*0x4 + 0x0]             ; 005258e2
    SUB EAX,EDI                         ; 005258e9
    SHL EAX,0x2                         ; 005258eb
    MOV EDX,EAX                         ; 005258ee
    SHL EAX,0x4                         ; 005258f0
    MOV EBP,dword ptr [ECX + 0x4]       ; 005258f3
    SUB EAX,EDX                         ; 005258f6
    DEC EBP                             ; 005258f8
    MOV dword ptr [ESP + 0x4],EAX       ; 005258f9
    LEA EAX,[EBP*0x4 + 0x0]             ; 005258fd
    MOV EDX,EAX                         ; 00525904
    SHL EAX,0x4                         ; 00525906
    MOV EBP,dword ptr [ESP + 0x4]       ; 00525909
    SUB EAX,EDX                         ; 0052590d
    MOV EDX,dword ptr [ESP]             ; 0052590f
    ADD EAX,EBP                         ; 00525912
    MOV EDX,dword ptr [EAX + EDX*0x4 + 0x620328] ; 00525914 | DAT_00620328
    MOV EBP,dword ptr [EBX + 0x10]      ; 0052591b
    MOV EAX,EDX                         ; 0052591e
    SAR EDX,0x1f                        ; 00525920
    IDIV EBP                            ; 00525923
    MOV EDX,EAX                         ; 00525925
    MOV EAX,dword ptr [ECX + 0x10]      ; 00525927
    MOV ECX,EDI                         ; 0052592a
    SHL ECX,0x5                         ; 0052592c
    MOV dword ptr [ESP + 0x8],EBX       ; 0052592f
    FLD double ptr [ECX + EAX*0x8 + 0x6202e8] ; 00525933 | DAT_006202e8
    CALL FUN_005c03a0                   ; 0052593a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 0052593f
    CMP EDI,0x1                         ; 00525943
    JNZ 0x005259cd                      ; 00525946
        ;   XREF to: 005259cd (CONDITIONAL_JUMP)  ; LAB_005259cd
    CMP dword ptr [ESP + 0x10],0x30     ; 0052594c
    JNZ 0x00525996                      ; 00525951
        ;   XREF to: 00525996 (CONDITIONAL_JUMP)  ; LAB_00525996
    CMP EDX,0x38                        ; 00525953
    JL 0x00525996                       ; 00525956
        ;   XREF to: 00525996 (CONDITIONAL_JUMP)  ; LAB_00525996
    XOR EAX,EAX                         ; 00525958
        ;   Label: LAB_00525958
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052595a
        ;   Label: LAB_0052595a
    CMP EAX,dword ptr [EDX + 0xc]       ; 0052595e
    JZ 0x0052598a                       ; 00525961
        ;   XREF to: 0052598a (CONDITIONAL_JUMP)  ; LAB_0052598a
    PUSH 0x1d404c8                      ; 00525963
    MOV EAX,0x5eb0b6                    ; 00525968 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1d8                       ; 0052596d
    PUSH 0x5eb0c7                       ; 00525972 | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x01d1d400],EAX                ; 00525977 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0052597c | DAT_01d1d404
    CALL FUN_005030e0                   ; 00525982
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00525987
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052598a
        ;   Label: LAB_0052598a
    MOV dword ptr [EBX + 0x18],EAX      ; 0052598e
    JMP 0x0052586f                      ; 00525991
        ;   XREF to: 0052586f (UNCONDITIONAL_JUMP)  ; LAB_0052586f
    CMP EDX,0x38                        ; 00525996
        ;   Label: LAB_00525996
    JL 0x005259a0                       ; 00525999
        ;   XREF to: 005259a0 (CONDITIONAL_JUMP)  ; LAB_005259a0
    CMP EDX,0x50                        ; 0052599b
    JLE 0x00525958                      ; 0052599e
        ;   XREF to: 00525958 (CONDITIONAL_JUMP)  ; LAB_00525958
    CMP dword ptr [ESP + 0x10],0x30     ; 005259a0
        ;   Label: LAB_005259a0
    JZ 0x005259b3                       ; 005259a5
        ;   XREF to: 005259b3 (CONDITIONAL_JUMP)  ; LAB_005259b3
    CMP EDX,0x60                        ; 005259a7
    JL 0x005259b3                       ; 005259aa
        ;   XREF to: 005259b3 (CONDITIONAL_JUMP)  ; LAB_005259b3
    MOV EAX,0x1                         ; 005259ac
    JMP 0x0052595a                      ; 005259b1
        ;   XREF to: 0052595a (UNCONDITIONAL_JUMP)  ; LAB_0052595a
    CMP dword ptr [ESP + 0x10],0x20     ; 005259b3
        ;   Label: LAB_005259b3
    JZ 0x005259c6                       ; 005259b8
        ;   XREF to: 005259c6 (CONDITIONAL_JUMP)  ; LAB_005259c6
    CMP EDX,0x30                        ; 005259ba
    JG 0x005259c6                       ; 005259bd
        ;   XREF to: 005259c6 (CONDITIONAL_JUMP)  ; LAB_005259c6
    MOV EAX,0x2                         ; 005259bf
    JMP 0x0052595a                      ; 005259c4
        ;   XREF to: 0052595a (UNCONDITIONAL_JUMP)  ; LAB_0052595a
    MOV EAX,0x3                         ; 005259c6
        ;   Label: LAB_005259c6
    JMP 0x0052595a                      ; 005259cb
        ;   XREF to: 0052595a (UNCONDITIONAL_JUMP)  ; LAB_0052595a
    MOV EAX,0x4                         ; 005259cd
        ;   Label: LAB_005259cd
    JMP 0x0052595a                      ; 005259d2
        ;   XREF to: 0052595a (UNCONDITIONAL_JUMP)  ; LAB_0052595a
    TEST ESI,ESI                        ; 005259d4
        ;   Label: LAB_005259d4
    JL 0x0052588e                       ; 005259d6
        ;   XREF to: 0052588e (CONDITIONAL_JUMP)  ; LAB_0052588e
    CMP ESI,0x3                         ; 005259dc
    JG 0x0052588e                       ; 005259df
        ;   XREF to: 0052588e (CONDITIONAL_JUMP)  ; LAB_0052588e
    JMP 0x005258b7                      ; 005259e5
        ;   XREF to: 005258b7 (UNCONDITIONAL_JUMP)  ; LAB_005258b7
    MOV EAX,dword ptr [EBX + 0x18]      ; 005259ea
        ;   Label: LAB_005259ea
    MOV dword ptr [EBX + 0x14],EAX      ; 005259ed
    ADD ESP,0x14                        ; 005259f0
    POP EBP                             ; 005259f3
    POP EDI                             ; 005259f4
    POP ESI                             ; 005259f5
    POP EBX                             ; 005259f6
    RET                                 ; 005259f7

