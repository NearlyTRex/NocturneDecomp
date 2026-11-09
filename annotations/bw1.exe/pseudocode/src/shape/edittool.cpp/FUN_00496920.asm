; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_00496920(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; char *           Stack[0x18]:4   text_content
; uint             Stack[0x1c]:4   window_flags
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
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
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840 at 004968e4
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   TerminatedCString s_shape_edittool_cpp_005dc0f0
;   TerminatedCString s_Can_t_open_another_windo_005dc106
;   undefined4 DAT_005dc121
;   undefined4 DAT_005dc125
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3eb5c
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4354c
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005bfb40
;   crt_unknown.c_FUN_005c08d0
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;   engine_font.cpp_FUN_004c3f50
;   engine_font.cpp_FUN_004c4260
;   engine_font.cpp_FUN_004c4510
;   shape_edittool.cpp_FUN_00494030
;   unkafter_minecar.cpp_FUN_00511850
;   unkafter_minecar.cpp_FUN_00511980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496920
        ;   Label: shape_edittool.cpp_FUN_00496920
    PUSH ESI                            ; 00496921
    PUSH EDI                            ; 00496922
    PUSH EBP                            ; 00496923
    SUB ESP,0x1c                        ; 00496924
    MOV EDI,dword ptr [ESP + 0x44]      ; 00496927
    CMP dword ptr [0x01c3eb50],0x0      ; 0049692b | DAT_01c3eb50
    JZ 0x00496d8e                       ; 00496932
        ;   XREF to: 00496d8e (CONDITIONAL_JUMP)  ; LAB_00496d8e
    MOV EAX,[0x01c3eb50]                ; 00496938 | DAT_01c3eb50
        ;   Label: LAB_00496938
    PUSH 0x6a                           ; 0049693d
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0049693f
    PUSH EAX                            ; 00496945
    MOV dword ptr [0x01c3f538],EDX      ; 00496946 | DAT_01c3f538
    CALL engine_font.cpp_FUN_004c4510   ; 0049694c
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV ESI,dword ptr [0x01c3eb5c]      ; 00496951 | DAT_01c3eb5c
    ADD ESP,0x8                         ; 00496957
    MOV [0x01c3f53c],EAX                ; 0049695a | DAT_01c3f53c
    CMP ESI,0x5                         ; 0049695f
    JL 0x00496986                       ; 00496962
        ;   XREF to: 00496986 (CONDITIONAL_JUMP)  ; LAB_00496986
    MOV EBP,0x5dc0f0                    ; 00496964 | = "..\\shape\\edittool.cpp"
    MOV EAX,0x864                       ; 00496969
    PUSH 0x5dc106                       ; 0049696e | = "Can't open another window!"
    MOV dword ptr [0x01d1d400],EBP      ; 00496973 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00496979 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049697e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00496983
    MOV EAX,[0x01c3eb5c]                ; 00496986 | DAT_01c3eb5c
        ;   Label: LAB_00496986
    SHL EAX,0x3                         ; 0049698b
    MOV EDX,EAX                         ; 0049698e
    SHL EAX,0x6                         ; 00496990
    MOV EBX,0x1c3eb60                   ; 00496993
    SUB EAX,EDX                         ; 00496998
    ADD EBX,EAX                         ; 0049699a
    MOV EAX,[0x0061b498]                ; 0049699c | DAT_0061b498
    MOV EDX,EAX                         ; 004969a1
    SAR EDX,0x1f                        ; 004969a3
    SHL EDX,0x7                         ; 004969a6
    SBB EAX,EDX                         ; 004969a9
    SAR EAX,0x7                         ; 004969ab
    MOV dword ptr [ESP + 0x8],EAX       ; 004969ae
    MOV EAX,[0x0061b49c]                ; 004969b2 | DAT_0061b49c
    MOV EDX,EAX                         ; 004969b7
    MOV ESI,0x60                        ; 004969b9
    SAR EDX,0x1f                        ; 004969be
    IDIV ESI                            ; 004969c1
    MOV ECX,dword ptr [ESP + 0x34]      ; 004969c3
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004969c7
    MOV ESI,dword ptr [ESP + 0x38]      ; 004969cb
    MOV EDX,dword ptr [0x01c3eb5c]      ; 004969cf | DAT_01c3eb5c
    MOV dword ptr [ESP],EAX             ; 004969d5
    INC EDX                             ; 004969d8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004969d9
    MOV dword ptr [0x01c3eb5c],EDX      ; 004969dd | DAT_01c3eb5c
    SUB ECX,EAX                         ; 004969e3
    MOV EAX,dword ptr [ESP]             ; 004969e5
    MOV EDX,dword ptr [ESP + 0x40]      ; 004969e8
    SUB ESI,EAX                         ; 004969ec
    MOV EAX,dword ptr [ESP + 0x8]       ; 004969ee
    MOV dword ptr [ESP + 0x34],ECX      ; 004969f2
    ADD EBP,EAX                         ; 004969f6
    MOV EAX,dword ptr [ESP]             ; 004969f8
    MOV dword ptr [ESP + 0x38],ESI      ; 004969fb
    ADD EDX,EAX                         ; 004969ff
    MOV dword ptr [ESP + 0x3c],EBP      ; 00496a01
    MOV dword ptr [ESP + 0x40],EDX      ; 00496a05
    TEST ECX,ECX                        ; 00496a09
    JL 0x00496db6                       ; 00496a0b
        ;   XREF to: 00496db6 (CONDITIONAL_JUMP)  ; LAB_00496db6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00496a11
        ;   Label: LAB_00496a11
    MOV EBP,dword ptr [0x0061b498]      ; 00496a15 | DAT_0061b498
    CMP EAX,EBP                         ; 00496a1b
    JLE 0x00496a23                      ; 00496a1d
        ;   XREF to: 00496a23 (CONDITIONAL_JUMP)  ; LAB_00496a23
    MOV dword ptr [ESP + 0x3c],EBP      ; 00496a1f
    XOR EAX,EAX                         ; 00496a23
        ;   Label: LAB_00496a23
    MOV byte ptr [EBX + 0x48],0x0       ; 00496a25
    MOV dword ptr [ESP + 0x4],EAX       ; 00496a29
    TEST EDI,EDI                        ; 00496a2d
    JZ 0x00496b14                       ; 00496a2f
        ;   XREF to: 00496b14 (CONDITIONAL_JUMP)  ; LAB_00496b14
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00496a35
    MOV ECX,dword ptr [ESP + 0x34]      ; 00496a39
    MOV EAX,dword ptr [ESP + 0x8]       ; 00496a3d
    SUB EDX,ECX                         ; 00496a41
    ADD EAX,EAX                         ; 00496a43
    SUB EDX,EAX                         ; 00496a45
    PUSH EDX                            ; 00496a47
    PUSH 0xc8                           ; 00496a48
    PUSH 0x14                           ; 00496a4d
    PUSH 0x1c3dbb0                      ; 00496a4f
    PUSH EDI                            ; 00496a54
    MOV ESI,dword ptr [0x01c3eb50]      ; 00496a55 | DAT_01c3eb50
    PUSH ESI                            ; 00496a5b
    LEA EBP,[EBX + 0x48]                ; 00496a5c
    CALL engine_font.cpp_FUN_004c4260   ; 00496a5f
        ;   XREF to: 004c4260 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c4260()
    ADD ESP,0x18                        ; 00496a64
    XOR EDI,EDI                         ; 00496a67
    MOV dword ptr [ESP + 0xc],EAX       ; 00496a69
    TEST EAX,EAX                        ; 00496a6d
    JLE 0x00496aa0                      ; 00496a6f
        ;   XREF to: 00496aa0 (CONDITIONAL_JUMP)  ; LAB_00496aa0
    MOV ESI,0x1c3dbb0                   ; 00496a71
    PUSH ESI                            ; 00496a76
        ;   Label: LAB_00496a76
    PUSH 0x5dc121                       ; 00496a77 | DAT_005dc121
    PUSH EBP                            ; 00496a7c
    INC EDI                             ; 00496a7d
    CALL crt_unknown.c_FUN_005bfb40     ; 00496a7e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00496a83
    ADD EBP,EAX                         ; 00496a86
    MOV EAX,dword ptr [ESP + 0xc]       ; 00496a88
    ADD ESI,0xc8                        ; 00496a8c
    CMP EDI,EAX                         ; 00496a92
    JL 0x00496a76                       ; 00496a94
        ;   XREF to: 00496a76 (CONDITIONAL_JUMP)  ; LAB_00496a76
    LEA EAX,[EAX]                       ; 00496a96
    LEA EDX,[EDX]                       ; 00496a9c
    CMP dword ptr [ESP + 0xc],0x0       ; 00496aa0
        ;   Label: LAB_00496aa0
    JLE 0x00496b14                      ; 00496aa5
        ;   XREF to: 00496b14 (CONDITIONAL_JUMP)  ; LAB_00496b14
    LEA EAX,[EBX + 0x48]                ; 00496aa7
    PUSH EAX                            ; 00496aaa
    MOV ECX,dword ptr [0x01c3eb50]      ; 00496aab | DAT_01c3eb50
    DEC EBP                             ; 00496ab1
    PUSH ECX                            ; 00496ab2
    MOV byte ptr [EBP],0x0              ; 00496ab3
    CALL engine_font.cpp_FUN_004c3f50   ; 00496ab7
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00496abc
    MOV EDX,dword ptr [0x01c3f53c]      ; 00496abf | DAT_01c3f53c
    PUSH 0x5dc125                       ; 00496ac5 | DAT_005dc125
    MOV ESI,dword ptr [0x01c3eb50]      ; 00496aca | DAT_01c3eb50
    ADD EDX,EAX                         ; 00496ad0
    PUSH ESI                            ; 00496ad2
    MOV dword ptr [ESP + 0xc],EDX       ; 00496ad3
    CALL engine_font.cpp_FUN_004c3f50   ; 00496ad7
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00496adc
    MOV EDI,dword ptr [0x01c3f53c]      ; 00496adf | DAT_01c3f53c
    MOV EBP,dword ptr [ESP + 0x4]       ; 00496ae5
    ADD EAX,EDI                         ; 00496ae9
    CMP EAX,EBP                         ; 00496aeb
    JLE 0x00496af3                      ; 00496aed
        ;   XREF to: 00496af3 (CONDITIONAL_JUMP)  ; LAB_00496af3
    MOV dword ptr [ESP + 0x4],EAX       ; 00496aef
    MOV EAX,dword ptr [ESP + 0x4]       ; 00496af3
        ;   Label: LAB_00496af3
    MOV EDX,EAX                         ; 00496af7
    SAR EDX,0x1f                        ; 00496af9
    SUB EAX,EDX                         ; 00496afc
    SAR EAX,0x1                         ; 00496afe
    MOV ECX,dword ptr [ESP + 0x40]      ; 00496b00
    MOV EDX,dword ptr [ESP + 0x38]      ; 00496b04
    ADD ECX,EAX                         ; 00496b08
    SUB EDX,EAX                         ; 00496b0a
    MOV dword ptr [ESP + 0x40],ECX      ; 00496b0c
    MOV dword ptr [ESP + 0x38],EDX      ; 00496b10
    CMP dword ptr [ESP + 0x38],0x0      ; 00496b14
        ;   Label: LAB_00496b14
    JL 0x00496dc1                       ; 00496b19
        ;   XREF to: 00496dc1 (CONDITIONAL_JUMP)  ; LAB_00496dc1
    MOV EAX,dword ptr [ESP + 0x40]      ; 00496b1f
        ;   Label: LAB_00496b1f
    MOV EBP,dword ptr [0x0061b49c]      ; 00496b23 | DAT_0061b49c
    CMP EAX,EBP                         ; 00496b29
    JLE 0x00496b31                      ; 00496b2b
        ;   XREF to: 00496b31 (CONDITIONAL_JUMP)  ; LAB_00496b31
    MOV dword ptr [ESP + 0x40],EBP      ; 00496b2d
    CMP dword ptr [0x01c3f544],0x0      ; 00496b31 | DAT_01c3f544
        ;   Label: LAB_00496b31
    JZ 0x00496b3f                       ; 00496b38
        ;   XREF to: 00496b3f (CONDITIONAL_JUMP)  ; LAB_00496b3f
    OR byte ptr [ESP + 0x48],0x1        ; 00496b3a
    MOV DL,byte ptr [ESP + 0x48]        ; 00496b3f
        ;   Label: LAB_00496b3f
    MOV dword ptr [EBX + 0x1d8],0x0     ; 00496b43
    TEST DL,0x1                         ; 00496b4d
    JNZ 0x00496c60                      ; 00496b50
        ;   XREF to: 00496c60 (CONDITIONAL_JUMP)  ; LAB_00496c60
    CMP dword ptr [0x01c3eb5c],0x1      ; 00496b56 | DAT_01c3eb5c
    JNZ 0x00496b6c                      ; 00496b5d
        ;   XREF to: 00496b6c (CONDITIONAL_JUMP)  ; LAB_00496b6c
    MOV ECX,dword ptr [ESP + 0x30]      ; 00496b5f
    PUSH ECX                            ; 00496b63
    CALL shape_edittool.cpp_FUN_00494030 ; 00496b64
        ;   XREF to: 00494030 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00494030(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00496b69
    CMP dword ptr [0x01c4354c],0x0      ; 00496b6c | DAT_01c4354c
        ;   Label: LAB_00496b6c
    JZ 0x00496c60                       ; 00496b73
        ;   XREF to: 00496c60 (CONDITIONAL_JUMP)  ; LAB_00496c60
    MOV EAX,[0x0061b498]                ; 00496b79 | DAT_0061b498
    MOV dword ptr [EBX + 0x1e4],EAX     ; 00496b7e
    MOV EDI,dword ptr [0x0061b4a0]      ; 00496b84 | DAT_0061b4a0
    MOV EDX,dword ptr [EBX + 0x1e4]     ; 00496b8a
    IMUL EDX,EDI                        ; 00496b90
    MOV EAX,[0x0061b49c]                ; 00496b93 | DAT_0061b49c
    MOV dword ptr [EBX + 0x1e8],EAX     ; 00496b98
    MOV EAX,EDX                         ; 00496b9e
    SAR EDX,0x1f                        ; 00496ba0
    SHL EDX,0x3                         ; 00496ba3
    SBB EAX,EDX                         ; 00496ba6
    SAR EAX,0x3                         ; 00496ba8
    MOV dword ptr [ESP + 0x10],EAX      ; 00496bab
    MOV EBP,dword ptr [ESP + 0x10]      ; 00496baf
    MOV EAX,dword ptr [EBX + 0x1e8]     ; 00496bb3
    IMUL EAX,EBP                        ; 00496bb9
    MOV dword ptr [EBX + 0x1dc],0x0     ; 00496bbc
    PUSH EAX                            ; 00496bc6
    MOV dword ptr [EBX + 0x1e0],0x0     ; 00496bc7
    CALL crt_unknown.c_FUN_005c08d0     ; 00496bd1
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00496bd6
    MOV dword ptr [EBX + 0x1d8],EAX     ; 00496bd9
    TEST EAX,EAX                        ; 00496bdf
    JZ 0x00496c60                       ; 00496be1
        ;   XREF to: 00496c60 (CONDITIONAL_JUMP)  ; LAB_00496c60
    MOV dword ptr [ESP + 0x14],EAX      ; 00496be7
    MOV EDX,dword ptr [EBX + 0x1e8]     ; 00496beb
    XOR EBP,EBP                         ; 00496bf1
    TEST EDX,EDX                        ; 00496bf3
    JLE 0x00496c60                      ; 00496bf5
        ;   XREF to: 00496c60 (CONDITIONAL_JUMP)  ; LAB_00496c60
    MOV ECX,dword ptr [0x0061b4a0]      ; 00496bf7 | DAT_0061b4a0
        ;   Label: LAB_00496bf7
    MOV EDX,dword ptr [EBX + 0x1dc]     ; 00496bfd
    IMUL EDX,ECX                        ; 00496c03
    MOV EAX,EDX                         ; 00496c06
    SAR EDX,0x1f                        ; 00496c08
    SHL EDX,0x3                         ; 00496c0b
    SBB EAX,EDX                         ; 00496c0e
    SAR EAX,0x3                         ; 00496c10
    MOV ESI,dword ptr [EBX + 0x1e0]     ; 00496c13
    ADD ESI,EBP                         ; 00496c19
    MOV EDI,dword ptr [ESP + 0x14]      ; 00496c1b
    MOV ESI,dword ptr [ESI*0x4 + 0x1c4354c] ; 00496c1f | DAT_01c4354c
    MOV ECX,dword ptr [ESP + 0x10]      ; 00496c26
    ADD ESI,EAX                         ; 00496c2a
    PUSH EDI                            ; 00496c2c
    MOV EAX,ECX                         ; 00496c2d
    SHR ECX,0x2                         ; 00496c2f
    MOVSD.REP ES:EDI,ESI                ; 00496c32
    MOV CL,AL                           ; 00496c34
    AND CL,0x3                          ; 00496c36
    MOVSB.REP ES:EDI,ESI                ; 00496c39
    POP EDI                             ; 00496c3b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00496c3c
    LEA ESI,[EDI + EAX*0x1]             ; 00496c40
    INC EBP                             ; 00496c43
    MOV EDI,dword ptr [EBX + 0x1e8]     ; 00496c44
    MOV dword ptr [ESP + 0x14],ESI      ; 00496c4a
    CMP EBP,EDI                         ; 00496c4e
    JL 0x00496bf7                       ; 00496c50
        ;   XREF to: 00496bf7 (CONDITIONAL_JUMP)  ; LAB_00496bf7
    LEA EAX,[EAX]                       ; 00496c52
    LEA EDX,[EDX]                       ; 00496c58
    MOV EAX,EAX                         ; 00496c5e
    MOV EAX,[0x01c4f008]                ; 00496c60 | DAT_01c4f008
        ;   Label: LAB_00496c60
    MOV dword ptr [EBX + 0x10],EAX      ; 00496c65
    MOV EAX,[0x01c4f00c]                ; 00496c68 | DAT_01c4f00c
    MOV dword ptr [EBX + 0x14],EAX      ; 00496c6d
    MOV EAX,[0x01c4f010]                ; 00496c70 | DAT_01c4f010
    MOV dword ptr [EBX + 0x18],EAX      ; 00496c75
    MOV EAX,[0x01c4f014]                ; 00496c78 | DAT_01c4f014
    MOV dword ptr [EBX + 0x1c],EAX      ; 00496c7d
    MOV EAX,[0x01c4eff8]                ; 00496c80 | DAT_01c4eff8
    MOV dword ptr [EBX + 0x30],EAX      ; 00496c85
    MOV EAX,[0x01c4effc]                ; 00496c88 | DAT_01c4effc
    MOV dword ptr [EBX + 0x34],EAX      ; 00496c8d
    MOV EAX,[0x01c4f000]                ; 00496c90 | DAT_01c4f000
    MOV dword ptr [EBX + 0x38],EAX      ; 00496c95
    MOV EAX,[0x01c4f004]                ; 00496c98 | DAT_01c4f004
    MOV dword ptr [EBX + 0x3c],EAX      ; 00496c9d
    MOV EAX,[0x01c4f018]                ; 00496ca0 | DAT_01c4f018
    MOV dword ptr [EBX + 0x40],EAX      ; 00496ca5
    MOV EAX,[0x01c4f01c]                ; 00496ca8 | DAT_01c4f01c
    MOV dword ptr [EBX + 0x44],EAX      ; 00496cad
    LEA EAX,[EBX + 0x2c]                ; 00496cb0
    PUSH EAX                            ; 00496cb3
    LEA EAX,[EBX + 0x28]                ; 00496cb4
    PUSH EAX                            ; 00496cb7
    LEA EAX,[EBX + 0x24]                ; 00496cb8
    PUSH EAX                            ; 00496cbb
    LEA EAX,[EBX + 0x20]                ; 00496cbc
    PUSH EAX                            ; 00496cbf
    CALL unkafter_minecar.cpp_FUN_00511980 ; 00496cc0
        ;   XREF to: 00511980 (UNCONDITIONAL_CALL)  ; undefined unkafter_minecar.cpp_FUN_00511980()
    ADD ESP,0x10                        ; 00496cc5
    MOV EAX,dword ptr [ESP + 0x40]      ; 00496cc8
    MOV dword ptr [ESP + 0x18],EAX      ; 00496ccc
    FILD dword ptr [ESP + 0x18]         ; 00496cd0
    SUB ESP,0x4                         ; 00496cd4
    MOV EAX,dword ptr [ESP + 0x40]      ; 00496cd7
    MOV dword ptr [ESP + 0x1c],EAX      ; 00496cdb
    FSTP float ptr [ESP]                ; 00496cdf
    FILD dword ptr [ESP + 0x1c]         ; 00496ce2
    SUB ESP,0x4                         ; 00496ce6
    MOV EAX,dword ptr [ESP + 0x40]      ; 00496ce9
    MOV dword ptr [ESP + 0x20],EAX      ; 00496ced
    FSTP float ptr [ESP]                ; 00496cf1
    FILD dword ptr [ESP + 0x20]         ; 00496cf4
    SUB ESP,0x4                         ; 00496cf8
    MOV EAX,dword ptr [ESP + 0x40]      ; 00496cfb
    MOV dword ptr [ESP + 0x24],EAX      ; 00496cff
    FSTP float ptr [ESP]                ; 00496d03
    FILD dword ptr [ESP + 0x24]         ; 00496d06
    SUB ESP,0x4                         ; 00496d0a
    FSTP float ptr [ESP]                ; 00496d0d
    CALL unkafter_minecar.cpp_FUN_00511850 ; 00496d10
        ;   XREF to: 00511850 (UNCONDITIONAL_CALL)  ; undefined unkafter_minecar.cpp_FUN_00511850()
    ADD ESP,0x10                        ; 00496d15
    MOV EAX,dword ptr [ESP + 0x34]      ; 00496d18
    MOV dword ptr [EBX],EAX             ; 00496d1c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00496d1e
    MOV dword ptr [EBX + 0x4],EAX       ; 00496d22
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00496d25
    MOV dword ptr [EBX + 0x8],EAX       ; 00496d29
    MOV EAX,dword ptr [ESP + 0x40]      ; 00496d2c
    MOV EBP,dword ptr [ESP + 0x34]      ; 00496d30
    MOV dword ptr [EBX + 0xc],EAX       ; 00496d34
    MOV EAX,dword ptr [ESP + 0x8]       ; 00496d37
    MOV EDX,dword ptr [ESP + 0x38]      ; 00496d3b
    ADD EBP,EAX                         ; 00496d3f
    MOV EAX,dword ptr [ESP]             ; 00496d41
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00496d44
    ADD EDX,EAX                         ; 00496d48
    MOV EAX,dword ptr [ESP + 0x8]       ; 00496d4a
    MOV EBX,dword ptr [ESP + 0x40]      ; 00496d4e
    SUB ECX,EAX                         ; 00496d52
    MOV EAX,dword ptr [ESP]             ; 00496d54
    MOV dword ptr [ESP + 0x38],EDX      ; 00496d57
    SUB EBX,EAX                         ; 00496d5b
    MOV EAX,dword ptr [ESP + 0x4]       ; 00496d5d
    MOV dword ptr [ESP + 0x40],EBX      ; 00496d61
    LEA ESI,[EDX + EAX*0x1]             ; 00496d65
    LEA EAX,[EBX + -0x1]                ; 00496d68
    PUSH EAX                            ; 00496d6b
    MOV dword ptr [ESP + 0x40],ECX      ; 00496d6c
    LEA EAX,[ECX + -0x1]                ; 00496d70
    PUSH EAX                            ; 00496d73
    PUSH ESI                            ; 00496d74
    PUSH EBP                            ; 00496d75
    MOV dword ptr [ESP + 0x44],EBP      ; 00496d76
    MOV dword ptr [ESP + 0x48],ESI      ; 00496d7a
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 00496d7e
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 00496d83
    ADD ESP,0x1c                        ; 00496d86
    POP EBP                             ; 00496d89
    POP EDI                             ; 00496d8a
    POP ESI                             ; 00496d8b
    POP EBX                             ; 00496d8c
    RET                                 ; 00496d8d
    MOV ECX,0x5dbc68                    ; 00496d8e | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00496d8e
    MOV EBX,0xa4                        ; 00496d93
    PUSH 0x5dbc7e                       ; 00496d98 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 00496d9d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00496da3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00496da9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00496dae
    JMP 0x00496938                      ; 00496db1
        ;   XREF to: 00496938 (UNCONDITIONAL_JUMP)  ; LAB_00496938
    XOR ESI,ESI                         ; 00496db6
        ;   Label: LAB_00496db6
    MOV dword ptr [ESP + 0x34],ESI      ; 00496db8
    JMP 0x00496a11                      ; 00496dbc
        ;   XREF to: 00496a11 (UNCONDITIONAL_JUMP)  ; LAB_00496a11
    XOR EDI,EDI                         ; 00496dc1
        ;   Label: LAB_00496dc1
    MOV dword ptr [ESP + 0x38],EDI      ; 00496dc3
    JMP 0x00496b1f                      ; 00496dc7
        ;   XREF to: 00496b1f (UNCONDITIONAL_JUMP)  ; LAB_00496b1f

