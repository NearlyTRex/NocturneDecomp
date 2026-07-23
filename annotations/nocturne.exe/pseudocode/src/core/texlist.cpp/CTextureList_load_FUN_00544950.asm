; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_load_FUN_00544950(int *param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x12b]:1  local_12b
; undefined1       Stack[-0x129]:1  local_129
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_load_FUN_004b14d0 at 004b179c
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_005965f5
;   TerminatedCString s_CTextureList_load_No_ext_00596609
;   TerminatedCString s_tex_00596631
;   undefined4 s_tex_00596631+1
;   undefined4 s_tex_00596631+2
;   undefined4 s_tex_00596631+3
;   TerminatedCString s_rt_00596636
;   TerminatedCString s_data_00596639
;   TerminatedCString s_core_texlist_cpp_0059663e
;   TerminatedCString s_CTextureList_load_Bad_fi_00596652
;   TerminatedCString s_d_00596675
;   TerminatedCString s_s_00596679
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_stdlib.c_atoi_FUN_00566f30
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544950
        ;   Label: core_texlist.cpp_CTextureList_load_FUN_00544950
    PUSH ESI                            ; 00544951
    PUSH EDI                            ; 00544952
    PUSH EBP                            ; 00544953
    SUB ESP,0x11c                       ; 00544954
    MOV EBP,dword ptr [ESP + 0x130]     ; 0054495a
    MOV ESI,dword ptr [ESP + 0x134]     ; 00544961
    MOV EDI,ESP                         ; 00544968
    MOV DL,0x2e                         ; 0054496a
    PUSH EDI                            ; 0054496c
    MOV AL,byte ptr [ESI]               ; 0054496d
        ;   Label: LAB_0054496d
    MOV byte ptr [EDI],AL               ; 0054496f
    CMP AL,0x0                          ; 00544971
    JZ 0x00544985                       ; 00544973
        ;   XREF to: 00544985 (CONDITIONAL_JUMP)  ; LAB_00544985
    MOV AL,byte ptr [ESI + 0x1]         ; 00544975
    ADD ESI,0x2                         ; 00544978
    MOV byte ptr [EDI + 0x1],AL         ; 0054497b
    ADD EDI,0x2                         ; 0054497e
    CMP AL,0x0                          ; 00544981
    JNZ 0x0054496d                      ; 00544983
        ;   XREF to: 0054496d (CONDITIONAL_JUMP)  ; LAB_0054496d
    POP EDI                             ; 00544985
        ;   Label: LAB_00544985
    MOV ESI,ESP                         ; 00544986
    MOV AL,byte ptr [ESI]               ; 00544988
        ;   Label: LAB_00544988
    CMP AL,DL                           ; 0054498a
    JZ 0x005449a0                       ; 0054498c
        ;   XREF to: 005449a0 (CONDITIONAL_JUMP)  ; LAB_005449a0
    CMP AL,0x0                          ; 0054498e
    JZ 0x0054499e                       ; 00544990
        ;   XREF to: 0054499e (CONDITIONAL_JUMP)  ; LAB_0054499e
    INC ESI                             ; 00544992
    MOV AL,byte ptr [ESI]               ; 00544993
    CMP AL,DL                           ; 00544995
    JZ 0x005449a0                       ; 00544997
        ;   XREF to: 005449a0 (CONDITIONAL_JUMP)  ; LAB_005449a0
    INC ESI                             ; 00544999
    CMP AL,0x0                          ; 0054499a
    JNZ 0x00544988                      ; 0054499c
        ;   XREF to: 00544988 (CONDITIONAL_JUMP)  ; LAB_00544988
    SUB ESI,ESI                         ; 0054499e
        ;   Label: LAB_0054499e
    MOV EDI,ESI                         ; 005449a0
        ;   Label: LAB_005449a0
    TEST ESI,ESI                        ; 005449a2
    JZ 0x00544b26                       ; 005449a4
        ;   XREF to: 00544b26 (CONDITIONAL_JUMP)  ; LAB_00544b26
    MOV ESI,0x596631                    ; 005449aa | = ".tex"
        ;   Label: LAB_005449aa
    PUSH EDI                            ; 005449af
    MOV AL,byte ptr [ESI]               ; 005449b0 | = ".tex" | s_tex_00596631+2
        ;   Label: LAB_005449b0
    MOV byte ptr [EDI],AL               ; 005449b2
    CMP AL,0x0                          ; 005449b4
    JZ 0x005449c8                       ; 005449b6
        ;   XREF to: 005449c8 (CONDITIONAL_JUMP)  ; LAB_005449c8
    MOV AL,byte ptr [ESI + 0x1]         ; 005449b8 | s_tex_00596631+1 | s_tex_00596631+3
    ADD ESI,0x2                         ; 005449bb
    MOV byte ptr [EDI + 0x1],AL         ; 005449be
    ADD EDI,0x2                         ; 005449c1
    CMP AL,0x0                          ; 005449c4
    JNZ 0x005449b0                      ; 005449c6
        ;   XREF to: 005449b0 (CONDITIONAL_JUMP)  ; LAB_005449b0
    POP EDI                             ; 005449c8
        ;   Label: LAB_005449c8
    PUSH 0x596636                       ; 005449c9 | = "rt"
    LEA EAX,[ESP + 0x4]                 ; 005449ce
    PUSH EAX                            ; 005449d2
    PUSH 0x596639                       ; 005449d3 | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 005449d8
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 005449dd
    MOV dword ptr [ESP + 0x100],EAX     ; 005449e0
    TEST EAX,EAX                        ; 005449e7
    JNZ 0x00544a0e                      ; 005449e9
        ;   XREF to: 00544a0e (CONDITIONAL_JUMP)  ; LAB_00544a0e
    MOV EBX,0x59663e                    ; 005449eb | = "..\\core\\texlist.cpp"
    MOV ESI,0x6a                        ; 005449f0
    PUSH 0x596652                       ; 005449f5 | = "CTextureList::load - Bad filename!"
    MOV dword ptr [0x01cc4800],EBX      ; 005449fa | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00544a00 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00544a06
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00544a0b
    PUSH EBP                            ; 00544a0e
        ;   Label: LAB_00544a0e
    PUSH 0x596675                       ; 00544a0f | = "%d\n"
    MOV EDI,dword ptr [ESP + 0x108]     ; 00544a14
    PUSH EDI                            ; 00544a1b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00544a1c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00544a21
    XOR EAX,EAX                         ; 00544a24
    MOV EDX,dword ptr [EBP]             ; 00544a26
    MOV dword ptr [ESP + 0x110],EAX     ; 00544a29
    TEST EDX,EDX                        ; 00544a30
    JLE 0x00544bac                      ; 00544a32
        ;   XREF to: 00544bac (CONDITIONAL_JUMP)  ; LAB_00544bac
    LEA EAX,[EBP + 0x4]                 ; 00544a38
    XOR ECX,ECX                         ; 00544a3b
    MOV dword ptr [ESP + 0x118],EAX     ; 00544a3d
    MOV dword ptr [ESP + 0x114],EBP     ; 00544a44
    MOV dword ptr [ESP + 0x104],ECX     ; 00544a4b
    ADD EAX,0x8                         ; 00544a52
    MOV dword ptr [ESP + 0x108],EBP     ; 00544a55
    MOV dword ptr [ESP + 0x10c],EAX     ; 00544a5c
    MOV EAX,ESP                         ; 00544a63
        ;   Label: LAB_00544a63
    PUSH EAX                            ; 00544a65
    PUSH 0x596679                       ; 00544a66 | = "%s\n"
    MOV EBX,dword ptr [ESP + 0x108]     ; 00544a6b
    PUSH EBX                            ; 00544a72
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00544a73
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00544a78
    MOV ESI,ESP                         ; 00544a7b
    MOV DL,0x2c                         ; 00544a7d
    MOV AL,byte ptr [ESI]               ; 00544a7f
        ;   Label: LAB_00544a7f
    CMP AL,DL                           ; 00544a81
    JZ 0x00544a97                       ; 00544a83
        ;   XREF to: 00544a97 (CONDITIONAL_JUMP)  ; LAB_00544a97
    CMP AL,0x0                          ; 00544a85
    JZ 0x00544a95                       ; 00544a87
        ;   XREF to: 00544a95 (CONDITIONAL_JUMP)  ; LAB_00544a95
    INC ESI                             ; 00544a89
    MOV AL,byte ptr [ESI]               ; 00544a8a
    CMP AL,DL                           ; 00544a8c
    JZ 0x00544a97                       ; 00544a8e
        ;   XREF to: 00544a97 (CONDITIONAL_JUMP)  ; LAB_00544a97
    INC ESI                             ; 00544a90
    CMP AL,0x0                          ; 00544a91
    JNZ 0x00544a7f                      ; 00544a93
        ;   XREF to: 00544a7f (CONDITIONAL_JUMP)  ; LAB_00544a7f
    SUB ESI,ESI                         ; 00544a95
        ;   Label: LAB_00544a95
    TEST ESI,ESI                        ; 00544a97
        ;   Label: LAB_00544a97
    JZ 0x00544bfb                       ; 00544a99
        ;   XREF to: 00544bfb (CONDITIONAL_JUMP)  ; LAB_00544bfb
    MOV byte ptr [ESI],0x0              ; 00544a9f
    INC ESI                             ; 00544aa2
    PUSH ESI                            ; 00544aa3
    CALL crt_stdlib.c_atoi_FUN_00566f30 ; 00544aa4
        ;   XREF to: 00566f30 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c_atoi_FUN_00566f30()
    ADD ESP,0x4                         ; 00544aa9
    MOV ECX,dword ptr [ESP + 0x114]     ; 00544aac
    MOV dword ptr [ECX + 0x5dc4],EAX    ; 00544ab3
    MOV ESI,ESP                         ; 00544ab9
        ;   Label: LAB_00544ab9
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00544abb
    PUSH EDI                            ; 00544ac2
    MOV AL,byte ptr [ESI]               ; 00544ac3
        ;   Label: LAB_00544ac3
    MOV byte ptr [EDI],AL               ; 00544ac5
    CMP AL,0x0                          ; 00544ac7
    JZ 0x00544adb                       ; 00544ac9
        ;   XREF to: 00544adb (CONDITIONAL_JUMP)  ; LAB_00544adb
    MOV AL,byte ptr [ESI + 0x1]         ; 00544acb
    ADD ESI,0x2                         ; 00544ace
    MOV byte ptr [EDI + 0x1],AL         ; 00544ad1
    ADD EDI,0x2                         ; 00544ad4
    CMP AL,0x0                          ; 00544ad7
    JNZ 0x00544ac3                      ; 00544ad9
        ;   XREF to: 00544ac3 (CONDITIONAL_JUMP)  ; LAB_00544ac3
    POP EDI                             ; 00544adb
        ;   Label: LAB_00544adb
    MOV EAX,dword ptr [ESP + 0x108]     ; 00544adc
    XOR EBX,EBX                         ; 00544ae3
    MOV ESI,dword ptr [ESP + 0x104]     ; 00544ae5
    MOV dword ptr [EAX + 0x8],0x0       ; 00544aec
    MOV EDI,dword ptr [ESP + 0x118]     ; 00544af3
        ;   Label: LAB_00544af3
    ADD EDI,ESI                         ; 00544afa
    ADD EDI,0x8                         ; 00544afc
    SUB ECX,ECX                         ; 00544aff
    DEC ECX                             ; 00544b01
    XOR EAX,EAX                         ; 00544b02
    SCASB.REPNE ES:EDI                  ; 00544b04
    NOT ECX                             ; 00544b06
    DEC ECX                             ; 00544b08
    CMP EBX,ECX                         ; 00544b09
    JNC 0x00544b4e                      ; 00544b0b
        ;   XREF to: 00544b4e (CONDITIONAL_JUMP)  ; LAB_00544b4e
    LEA EDI,[ESI + EBP*0x1]             ; 00544b0d
    XOR EAX,EAX                         ; 00544b10
    MOV AL,byte ptr [EDI + EBX*0x1 + 0xc] ; 00544b12
    PUSH EAX                            ; 00544b16
    INC EBX                             ; 00544b17
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 00544b18
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    ADD ESP,0x4                         ; 00544b1d
    MOV byte ptr [EDI + EBX*0x1 + 0xb],AL ; 00544b20
    JMP 0x00544af3                      ; 00544b24
        ;   XREF to: 00544af3 (UNCONDITIONAL_JUMP)  ; LAB_00544af3
    MOV EDX,0x5965f5                    ; 00544b26 | = "..\\core\\texlist.cpp"
        ;   Label: LAB_00544b26
    MOV ECX,0x61                        ; 00544b2b
    PUSH 0x596609                       ; 00544b30 | = "CTextureList::load - No extension found"
    MOV dword ptr [0x01cc4800],EDX      ; 00544b35 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00544b3b | DAT_01cc4804
    CALL FUN_004c8440                   ; 00544b41
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00544b46
    JMP 0x005449aa                      ; 00544b49
        ;   XREF to: 005449aa (UNCONDITIONAL_JUMP)  ; LAB_005449aa
    MOV ECX,dword ptr [ESP + 0x114]     ; 00544b4e
        ;   Label: LAB_00544b4e
    MOV EBX,dword ptr [ESP + 0x104]     ; 00544b55
    MOV ESI,dword ptr [ESP + 0x108]     ; 00544b5c
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00544b63
    MOV EAX,dword ptr [ESP + 0x110]     ; 00544b6a
    MOV EDX,dword ptr [EBP]             ; 00544b71
    ADD ECX,0x4                         ; 00544b74
    ADD EBX,0x18                        ; 00544b77
    ADD ESI,0x18                        ; 00544b7a
    ADD EDI,0x18                        ; 00544b7d
    INC EAX                             ; 00544b80
    MOV dword ptr [ESP + 0x114],ECX     ; 00544b81
    MOV dword ptr [ESP + 0x104],EBX     ; 00544b88
    MOV dword ptr [ESP + 0x108],ESI     ; 00544b8f
    MOV dword ptr [ESP + 0x10c],EDI     ; 00544b96
    MOV dword ptr [ESP + 0x110],EAX     ; 00544b9d
    CMP EAX,EDX                         ; 00544ba4
    JL 0x00544a63                       ; 00544ba6
        ;   XREF to: 00544a63 (CONDITIONAL_JUMP)  ; LAB_00544a63
    MOV ESI,dword ptr [EBP]             ; 00544bac
        ;   Label: LAB_00544bac
    CMP ESI,0x3e8                       ; 00544baf
    JGE 0x00544be0                      ; 00544bb5
        ;   XREF to: 00544be0 (CONDITIONAL_JUMP)  ; LAB_00544be0
    LEA EAX,[ESI*0x4 + 0x0]             ; 00544bb7
    ADD EAX,EBP                         ; 00544bbe
    ADD EAX,0x4                         ; 00544bc0
        ;   Label: LAB_00544bc0
    INC ESI                             ; 00544bc3
    MOV dword ptr [EAX + 0x5dc0],0x0    ; 00544bc4
    CMP ESI,0x3e8                       ; 00544bce
    JL 0x00544bc0                       ; 00544bd4
        ;   XREF to: 00544bc0 (CONDITIONAL_JUMP)  ; LAB_00544bc0
    LEA EAX,[EAX]                       ; 00544bd6
    LEA EDX,[EDX]                       ; 00544bdc
    MOV ESI,dword ptr [ESP + 0x100]     ; 00544be0
        ;   Label: LAB_00544be0
    PUSH ESI                            ; 00544be7
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00544be8
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 00544bed
    ADD ESP,0x11c                       ; 00544bf0
    POP EBP                             ; 00544bf6
    POP EDI                             ; 00544bf7
    POP ESI                             ; 00544bf8
    POP EBX                             ; 00544bf9
    RET                                 ; 00544bfa
    MOV EAX,dword ptr [ESP + 0x114]     ; 00544bfb
        ;   Label: LAB_00544bfb
    MOV dword ptr [EAX + 0x5dc4],ESI    ; 00544c02
    JMP 0x00544ab9                      ; 00544c08
        ;   XREF to: 00544ab9 (UNCONDITIONAL_JUMP)  ; LAB_00544ab9

