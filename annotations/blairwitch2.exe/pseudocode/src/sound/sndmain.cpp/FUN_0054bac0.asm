; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0054bac0(char *param_1)
;
; Local Variables:
; undefined8       Stack[-0x498]:8  local_498
; undefined4       Stack[-0x488]:4  local_488
; undefined        Stack[-0x484]:1  local_484
; undefined1       Stack[-0x483]:1  local_483
; undefined1       Stack[-0x482]:1  local_482
; undefined1       Stack[-0x481]:1  local_481
; undefined        Stack[-0x358]:1  local_358
; undefined        Stack[-0x258]:1  local_258
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_0054c1c0 at 0054c367
;   sound_sndmain.cpp_FUN_0054c7f0 at 0054c979
;   sound_sndmain.cpp_FUN_005519e0 at 00551b37
;
; Referenced Globals:
;   undefined4 DAT_005e7a58
;   undefined4 DAT_005e7a5b
;   TerminatedCString s_sound_005e7a5f
;   undefined4 DAT_005e7a65
;   TerminatedCString s_sound_005e7a69
;   TerminatedCString s_refDist_f_005e7a6f
;   TerminatedCString s_sound_sndmain_cpp_005e7a7b
;   TerminatedCString s_Reference_distance_speci_005e7a90
;   TerminatedCString s_sound_sndmain_cpp_005e7ad5
;   TerminatedCString s_Reference_volume_distanc_005e7aea
;   TerminatedCString s_minDist_f_005e7b23
;   TerminatedCString s_sound_sndmain_cpp_005e7b2f
;   TerminatedCString s_Minimum_distance_specifi_005e7b44
;   TerminatedCString s_sound_sndmain_cpp_005e7b87
;   TerminatedCString s_Reference_volume_distanc_005e7b9c
;   ... and 24 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_string.c_strstr_FUN_005ba9e0
;   engine_dosio.cpp_FUN_00461070
;   engine_dosio.cpp_FUN_004610a0
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   support_trstream.cpp_FUN_0057d390
;   unkaddr_0057b9a0.cpp_FUN_0057cc20
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bac0
        ;   Label: sound_sndmain.cpp_FUN_0054bac0
    PUSH ESI                            ; 0054bac1
    PUSH EDI                            ; 0054bac2
    PUSH EBP                            ; 0054bac3
    MOV EBP,ESP                         ; 0054bac4
    SUB ESP,0x474                       ; 0054bac6
    AND ESP,0xfffffff8                  ; 0054bacc
    FLD float ptr [0x0061bcb8]          ; 0054bacf | DAT_0061bcb8
    FLD float ptr [0x005fbc28]          ; 0054bad5 | DAT_005fbc28
    FMUL ST1                            ; 0054badb
    FLD float ptr [0x0263cf10]          ; 0054badd | DAT_0263cf10
    FMUL ST2                            ; 0054bae3
    FLD float ptr [0x005fbc2c]          ; 0054bae5 | DAT_005fbc2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054baeb
    FMULP ST3                           ; 0054baee
    MOV dword ptr [EAX + 0x124],0x1     ; 0054baf0
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054bafa
    FXCH                                ; 0054bafd
    FSTP float ptr [EAX + 0x114]        ; 0054baff
    FSTP float ptr [EAX + 0x118]        ; 0054bb05
    FSTP float ptr [EAX + 0x11c]        ; 0054bb0b
    MOV EAX,dword ptr [EAX + 0x110]     ; 0054bb11
    PUSH 0x0                            ; 0054bb17
    MOV dword ptr [ECX + 0x128],EAX     ; 0054bb19
    LEA EAX,[ESP + 0x334]               ; 0054bb1f
    PUSH EAX                            ; 0054bb26
    PUSH 0x0                            ; 0054bb27
    PUSH 0x0                            ; 0054bb29
    PUSH ECX                            ; 0054bb2b
    MOV dword ptr [ECX + 0x13c],0xffffffff ; 0054bb2c
    CALL engine_dosio.cpp_FUN_00461070  ; 0054bb36
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0054bb3b
    PUSH 0x5e7a5b                       ; 0054bb3e | DAT_005e7a5b
    LEA EAX,[ESP + 0x334]               ; 0054bb43
    PUSH EAX                            ; 0054bb4a
    PUSH 0x0                            ; 0054bb4b
    PUSH 0x0                            ; 0054bb4d
    LEA EAX,[ESP + 0x240]               ; 0054bb4f
    PUSH EAX                            ; 0054bb56
    CALL engine_dosio.cpp_FUN_004610a0  ; 0054bb57
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0054bb5c
    LEA EAX,[ESP + 0x230]               ; 0054bb5f
    PUSH EAX                            ; 0054bb66
    PUSH 0x5e7a5f                       ; 0054bb67 | = "sound"
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0054bb6c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054bb71
    TEST EAX,EAX                        ; 0054bb74
    JLE 0x0054bb9e                      ; 0054bb76
        ;   XREF to: 0054bb9e (CONDITIONAL_JUMP)  ; LAB_0054bb9e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bb78
    MOV dword ptr [EAX + 0x124],0x1     ; 0054bb7b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054bb85
    MOV EAX,dword ptr [EAX + 0x110]     ; 0054bb88
    MOV dword ptr [ECX + 0x13c],0x0     ; 0054bb8e
    MOV dword ptr [ECX + 0x128],EAX     ; 0054bb98
    PUSH 0x5e7a65                       ; 0054bb9e | DAT_005e7a65
        ;   Label: LAB_0054bb9e
    LEA EAX,[ESP + 0x334]               ; 0054bba3
    PUSH EAX                            ; 0054bbaa
    PUSH 0x0                            ; 0054bbab
    PUSH 0x0                            ; 0054bbad
    LEA EAX,[ESP + 0x140]               ; 0054bbaf
    PUSH EAX                            ; 0054bbb6
    CALL engine_dosio.cpp_FUN_004610a0  ; 0054bbb7
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0054bbbc
    LEA EAX,[ESP + 0x430]               ; 0054bbbf
    PUSH EAX                            ; 0054bbc6
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 0054bbc7
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0054bbcc
    LEA EAX,[ESP + 0x130]               ; 0054bbcf
    PUSH EAX                            ; 0054bbd6
    PUSH 0x5e7a69                       ; 0054bbd7 | = "sound"
    LEA EAX,[ESP + 0x438]               ; 0054bbdc
    PUSH EAX                            ; 0054bbe3
    CALL support_trstream.cpp_FUN_0057d390 ; 0054bbe4
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d390()
    ADD ESP,0xc                         ; 0054bbe9
    TEST EAX,EAX                        ; 0054bbec
    JZ 0x0054bc9c                       ; 0054bbee
        ;   XREF to: 0054bc9c (CONDITIONAL_JUMP)  ; LAB_0054bc9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bbf4
    ADD EAX,0x11c                       ; 0054bbf7
    MOV dword ptr [ESP + 0x464],EAX     ; 0054bbfc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bc03
    XOR ECX,ECX                         ; 0054bc06
    ADD EAX,0x118                       ; 0054bc08
    MOV dword ptr [ESP + 0x46c],ECX     ; 0054bc0d
    MOV dword ptr [ESP + 0x45c],EAX     ; 0054bc14
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bc1b
    MOV dword ptr [ESP + 0x468],ECX     ; 0054bc1e
    ADD EAX,0x114                       ; 0054bc25
    MOV dword ptr [ESP + 0x470],ECX     ; 0054bc2a
    MOV dword ptr [ESP + 0x460],EAX     ; 0054bc31
    PUSH 0x12c                          ; 0054bc38
        ;   Label: LAB_0054bc38
    LEA EAX,[ESP + 0x8]                 ; 0054bc3d
    PUSH EAX                            ; 0054bc41
    LEA EAX,[ESP + 0x438]               ; 0054bc42
    PUSH EAX                            ; 0054bc49
    CALL unkaddr_0057b9a0.cpp_FUN_0057cc20 ; 0054bc4a
        ;   XREF to: 0057cc20 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cc20()
    ADD ESP,0xc                         ; 0054bc4f
    TEST EAX,EAX                        ; 0054bc52
    JGE 0x0054bc9f                      ; 0054bc54
        ;   XREF to: 0054bc9f (CONDITIONAL_JUMP)  ; LAB_0054bc9f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bc56
    MOV EDI,dword ptr [EAX + 0x124]     ; 0054bc59
    XOR ESI,ESI                         ; 0054bc5f
    TEST EDI,EDI                        ; 0054bc61
    JLE 0x0054bc83                      ; 0054bc63
        ;   XREF to: 0054bc83 (CONDITIONAL_JUMP)  ; LAB_0054bc83
    CMP dword ptr [EAX + 0x128],0x0     ; 0054bc65
        ;   Label: LAB_0054bc65
    JL 0x0054c165                       ; 0054bc6c
        ;   XREF to: 0054c165 (CONDITIONAL_JUMP)  ; LAB_0054c165
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054bc72
        ;   Label: LAB_0054bc72
    INC ESI                             ; 0054bc75
    MOV EDX,dword ptr [ECX + 0x124]     ; 0054bc76
    ADD EAX,0x4                         ; 0054bc7c
    CMP ESI,EDX                         ; 0054bc7f
    JL 0x0054bc65                       ; 0054bc81
        ;   XREF to: 0054bc65 (CONDITIONAL_JUMP)  ; LAB_0054bc65
    PUSH 0x0                            ; 0054bc83
        ;   Label: LAB_0054bc83
    LEA EAX,[ESP + 0x434]               ; 0054bc85
        ;   Label: LAB_0054bc85
    PUSH EAX                            ; 0054bc8c
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 0054bc8d
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054bc92
    MOV ESP,EBP                         ; 0054bc95
    POP EBP                             ; 0054bc97
    POP EDI                             ; 0054bc98
    POP ESI                             ; 0054bc99
    POP EBX                             ; 0054bc9a
    RET                                 ; 0054bc9b
    PUSH EAX                            ; 0054bc9c
        ;   Label: LAB_0054bc9c
    JMP 0x0054bc85                      ; 0054bc9d
        ;   XREF to: 0054bc85 (UNCONDITIONAL_JUMP)  ; LAB_0054bc85
    PUSH 0x5e7a58                       ; 0054bc9f | DAT_005e7a58
        ;   Label: LAB_0054bc9f
    MOV EAX,dword ptr [ESP + 0x474]     ; 0054bca4
    LEA EBX,[ESP + 0x8]                 ; 0054bcab
    INC EAX                             ; 0054bcaf
    PUSH EBX                            ; 0054bcb0
    MOV dword ptr [ESP + 0x478],EAX     ; 0054bcb1
    CALL crt_string.c_strstr_FUN_005ba9e0 ; 0054bcb8
        ;   XREF to: 005ba9e0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005ba9e0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0054bcbd
    TEST EAX,EAX                        ; 0054bcc0
    JZ 0x0054bcc7                       ; 0054bcc2
        ;   XREF to: 0054bcc7 (CONDITIONAL_JUMP)  ; LAB_0054bcc7
    MOV byte ptr [EAX],0x0              ; 0054bcc4
    MOV ESI,EBX                         ; 0054bcc7
        ;   Label: LAB_0054bcc7
    XOR DL,DL                           ; 0054bcc9
    MOV AL,byte ptr [ESI]               ; 0054bccb
        ;   Label: LAB_0054bccb
    CMP AL,DL                           ; 0054bccd
    JZ 0x0054bce3                       ; 0054bccf
        ;   XREF to: 0054bce3 (CONDITIONAL_JUMP)  ; LAB_0054bce3
    CMP AL,0x0                          ; 0054bcd1
    JZ 0x0054bce1                       ; 0054bcd3
        ;   XREF to: 0054bce1 (CONDITIONAL_JUMP)  ; LAB_0054bce1
    INC ESI                             ; 0054bcd5
    MOV AL,byte ptr [ESI]               ; 0054bcd6
    CMP AL,DL                           ; 0054bcd8
    JZ 0x0054bce3                       ; 0054bcda
        ;   XREF to: 0054bce3 (CONDITIONAL_JUMP)  ; LAB_0054bce3
    INC ESI                             ; 0054bcdc
    CMP AL,0x0                          ; 0054bcdd
    JNZ 0x0054bccb                      ; 0054bcdf
        ;   XREF to: 0054bccb (CONDITIONAL_JUMP)  ; LAB_0054bccb
    SUB ESI,ESI                         ; 0054bce1
        ;   Label: LAB_0054bce1
    MOV EAX,ESI                         ; 0054bce3
        ;   Label: LAB_0054bce3
    CMP ESI,EBX                         ; 0054bce5
    JBE 0x0054bcfd                      ; 0054bce7
        ;   XREF to: 0054bcfd (CONDITIONAL_JUMP)  ; LAB_0054bcfd
    MOV CL,byte ptr [EAX + -0x1]        ; 0054bce9
        ;   Label: LAB_0054bce9
    INC CL                              ; 0054bcec
    AND ECX,0xff                        ; 0054bcee
    TEST byte ptr [ECX + 0x61ed94],0x2  ; 0054bcf4 | DAT_0061ed94
    JNZ 0x0054bd2e                      ; 0054bcfb
        ;   XREF to: 0054bd2e (CONDITIONAL_JUMP)  ; LAB_0054bd2e
    LEA ESI,[EBX + 0x1]                 ; 0054bcfd
        ;   Label: LAB_0054bcfd
    MOV byte ptr [EAX],0x0              ; 0054bd00
    MOV AL,byte ptr [EBX]               ; 0054bd03
        ;   Label: LAB_0054bd03
    INC AL                              ; 0054bd05
    AND EAX,0xff                        ; 0054bd07
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 0054bd0c | DAT_0061ed94
    JZ 0x0054bd35                       ; 0054bd13
        ;   XREF to: 0054bd35 (CONDITIONAL_JUMP)  ; LAB_0054bd35
    MOV EDI,EBX                         ; 0054bd15
    SUB ECX,ECX                         ; 0054bd17
    DEC ECX                             ; 0054bd19
    XOR EAX,EAX                         ; 0054bd1a
    SCASB.REPNE ES:EDI                  ; 0054bd1c
    NOT ECX                             ; 0054bd1e
    DEC ECX                             ; 0054bd20
    PUSH ECX                            ; 0054bd21
    PUSH ESI                            ; 0054bd22
    PUSH EBX                            ; 0054bd23
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0054bd24
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0054bd29
    JMP 0x0054bd03                      ; 0054bd2c
        ;   XREF to: 0054bd03 (UNCONDITIONAL_JUMP)  ; LAB_0054bd03
    DEC EAX                             ; 0054bd2e
        ;   Label: LAB_0054bd2e
    CMP EAX,EBX                         ; 0054bd2f
    JA 0x0054bce9                       ; 0054bd31
        ;   XREF to: 0054bce9 (CONDITIONAL_JUMP)  ; LAB_0054bce9
    JMP 0x0054bcfd                      ; 0054bd33
        ;   XREF to: 0054bcfd (UNCONDITIONAL_JUMP)  ; LAB_0054bcfd
    CMP byte ptr [ESP + 0x4],0x0        ; 0054bd35
        ;   Label: LAB_0054bd35
    JZ 0x0054bc38                       ; 0054bd3a
        ;   XREF to: 0054bc38 (CONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV EBX,dword ptr [ESP + 0x460]     ; 0054bd40
    PUSH EBX                            ; 0054bd47
    PUSH 0x5e7a6f                       ; 0054bd48 | = "refDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 0054bd4d
    PUSH EAX                            ; 0054bd51
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0054bd52
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0054bd57
    CMP EAX,0x1                         ; 0054bd5a
    JNZ 0x0054be30                      ; 0054bd5d
        ;   XREF to: 0054be30 (CONDITIONAL_JUMP)  ; LAB_0054be30
    MOV EDI,dword ptr [ESP + 0x468]     ; 0054bd63
    TEST EDI,EDI                        ; 0054bd6a
    JNZ 0x0054bdf8                      ; 0054bd6c
        ;   XREF to: 0054bdf8 (CONDITIONAL_JUMP)  ; LAB_0054bdf8
    MOV EAX,dword ptr [ESP + 0x470]     ; 0054bd72
        ;   Label: LAB_0054bd72
    MOV dword ptr [ESP + 0x468],EAX     ; 0054bd79
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bd80
    CMP dword ptr [EAX + 0x114],0x3dcccccd ; 0054bd83
    JGE 0x0054bdd0                      ; 0054bd8d
        ;   XREF to: 0054bdd0 (CONDITIONAL_JUMP)  ; LAB_0054bdd0
    MOV EDX,dword ptr [ESP + 0x470]     ; 0054bd8f
    MOV EAX,0x2e7                       ; 0054bd96
    PUSH EDX                            ; 0054bd9b
    MOV [0x01d046a4],EAX                ; 0054bd9c | DAT_01d046a4
    LEA EAX,[ESP + 0x134]               ; 0054bda1
    PUSH EAX                            ; 0054bda8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bda9
    SUB ESP,0x8                         ; 0054bdac
    FLD float ptr [EAX + 0x114]         ; 0054bdaf
    FSTP double ptr [ESP]               ; 0054bdb5
    MOV EDI,0x5e7ad5                    ; 0054bdb8 | = "..\\sound\\sndmain.cpp"
    PUSH 0x5e7aea                       ; 0054bdbd | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x01d046a0],EDI      ; 0054bdc2 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0054bdc8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x14                        ; 0054bdcd
    CMP dword ptr [ESP + 0x46c],0x0     ; 0054bdd0
        ;   Label: LAB_0054bdd0
    JNZ 0x0054bc38                      ; 0054bdd8
        ;   XREF to: 0054bc38 (CONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bdde
    FLD float ptr [EAX + 0x114]         ; 0054bde1
    FDIV float ptr [0x005fbc24]         ; 0054bde7 | DAT_005fbc24
    FSTP float ptr [EAX + 0x118]        ; 0054bded
    JMP 0x0054bc38                      ; 0054bdf3
        ;   XREF to: 0054bc38 (UNCONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV ECX,dword ptr [ESP + 0x470]     ; 0054bdf8
        ;   Label: LAB_0054bdf8
    PUSH ECX                            ; 0054bdff
    MOV EAX,0x5e7a7b                    ; 0054be00 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 0054be05
    MOV [0x01d046a0],EAX                ; 0054be06 | DAT_01d046a0
    LEA EAX,[ESP + 0x138]               ; 0054be0b
    PUSH EAX                            ; 0054be12
    MOV EDX,0x2e5                       ; 0054be13
    PUSH 0x5e7a90                       ; 0054be18 | = "Reference distance specified in %s on..."
    MOV dword ptr [0x01d046a4],EDX      ; 0054be1d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054be23
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 0054be28
    JMP 0x0054bd72                      ; 0054be2b
        ;   XREF to: 0054bd72 (UNCONDITIONAL_JUMP)  ; LAB_0054bd72
    MOV ESI,dword ptr [ESP + 0x45c]     ; 0054be30
        ;   Label: LAB_0054be30
    PUSH ESI                            ; 0054be37
    PUSH 0x5e7b23                       ; 0054be38 | = "minDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 0054be3d
    PUSH EAX                            ; 0054be41
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0054be42
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0054be47
    CMP EAX,0x1                         ; 0054be4a
    JNZ 0x0054befa                      ; 0054be4d
        ;   XREF to: 0054befa (CONDITIONAL_JUMP)  ; LAB_0054befa
    MOV ECX,dword ptr [ESP + 0x46c]     ; 0054be53
    TEST ECX,ECX                        ; 0054be5a
    JZ 0x0054be92                       ; 0054be5c
        ;   XREF to: 0054be92 (CONDITIONAL_JUMP)  ; LAB_0054be92
    MOV EDI,dword ptr [ESP + 0x470]     ; 0054be5e
    PUSH EDI                            ; 0054be65
    PUSH ECX                            ; 0054be66
    LEA EAX,[ESP + 0x138]               ; 0054be67
    PUSH EAX                            ; 0054be6e
    MOV EBX,0x5e7b2f                    ; 0054be6f | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x2ed                       ; 0054be74
    PUSH 0x5e7b44                       ; 0054be79 | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x01d046a0],EBX      ; 0054be7e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054be84 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054be8a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 0054be8f
    MOV EAX,dword ptr [ESP + 0x470]     ; 0054be92
        ;   Label: LAB_0054be92
    MOV dword ptr [ESP + 0x46c],EAX     ; 0054be99
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bea0
    CMP dword ptr [EAX + 0x118],0x3dcccccd ; 0054bea3
    JGE 0x0054bc38                      ; 0054bead
        ;   XREF to: 0054bc38 (CONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV ESI,dword ptr [ESP + 0x470]     ; 0054beb3
    PUSH ESI                            ; 0054beba
    LEA EAX,[ESP + 0x134]               ; 0054bebb
    PUSH EAX                            ; 0054bec2
    MOV ECX,0x5e7b87                    ; 0054bec3 | = "..\\sound\\sndmain.cpp"
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bec8
    SUB ESP,0x8                         ; 0054becb
    FLD float ptr [EAX + 0x118]         ; 0054bece
    FSTP double ptr [ESP]               ; 0054bed4
    MOV EBX,0x2ef                       ; 0054bed7
    PUSH 0x5e7b9c                       ; 0054bedc | = "Reference volume distance %g is too s..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054bee1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054bee7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054beed
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x14                        ; 0054bef2
    JMP 0x0054bc38                      ; 0054bef5
        ;   XREF to: 0054bc38 (UNCONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV EDI,dword ptr [ESP + 0x464]     ; 0054befa
        ;   Label: LAB_0054befa
    PUSH EDI                            ; 0054bf01
    PUSH 0x5e7bd5                       ; 0054bf02 | = "maxDist =%f"
    LEA EAX,[ESP + 0xc]                 ; 0054bf07
    PUSH EAX                            ; 0054bf0b
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0054bf0c
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0054bf11
    CMP EAX,0x1                         ; 0054bf14
    JZ 0x0054bc38                       ; 0054bf17
        ;   XREF to: 0054bc38 (CONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV EAX,ESP                         ; 0054bf1d
    PUSH EAX                            ; 0054bf1f
    PUSH 0x5e7be1                       ; 0054bf20 | = "maxVol =%f"
    LEA EAX,[ESP + 0xc]                 ; 0054bf25
    PUSH EAX                            ; 0054bf29
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0054bf2a
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0054bf2f
    CMP EAX,0x1                         ; 0054bf32
    JNZ 0x0054c02c                      ; 0054bf35
        ;   XREF to: 0054c02c (CONDITIONAL_JUMP)  ; LAB_0054c02c
    CMP dword ptr [ESP + 0x468],0x0     ; 0054bf3b
    JZ 0x0054bfb3                       ; 0054bf43
        ;   XREF to: 0054bfb3 (CONDITIONAL_JUMP)  ; LAB_0054bfb3
    MOV EDI,dword ptr [ESP + 0x46c]     ; 0054bf45
        ;   Label: LAB_0054bf45
    TEST EDI,EDI                        ; 0054bf4c
    JZ 0x0054bf83                       ; 0054bf4e
        ;   XREF to: 0054bf83 (CONDITIONAL_JUMP)  ; LAB_0054bf83
    MOV ECX,dword ptr [ESP + 0x470]     ; 0054bf50
    PUSH ECX                            ; 0054bf57
    MOV EAX,0x5e7c4c                    ; 0054bf58 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 0054bf5d
    MOV [0x01d046a0],EAX                ; 0054bf5e | DAT_01d046a0
    LEA EAX,[ESP + 0x138]               ; 0054bf63
    PUSH EAX                            ; 0054bf6a
    MOV EDX,0x2fa                       ; 0054bf6b
    PUSH 0x5e7c61                       ; 0054bf70 | = "Minimum distance specified in %s on l..."
    MOV dword ptr [0x01d046a4],EDX      ; 0054bf75 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054bf7b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 0054bf80
    MOV EAX,dword ptr [ESP + 0x470]     ; 0054bf83
        ;   Label: LAB_0054bf83
    MOV ESI,dword ptr [ESP]             ; 0054bf8a
    MOV dword ptr [ESP + 0x46c],EAX     ; 0054bf8d
    CMP ESI,0x3a83126f                  ; 0054bf94
    JL 0x0054bfeb                       ; 0054bf9a
        ;   XREF to: 0054bfeb (CONDITIONAL_JUMP)  ; LAB_0054bfeb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054bf9c
        ;   Label: LAB_0054bf9c
    FLD float ptr [EAX + 0x114]         ; 0054bf9f
    FDIV float ptr [ESP]                ; 0054bfa5
    FSTP float ptr [EAX + 0x118]        ; 0054bfa8
    JMP 0x0054bc38                      ; 0054bfae
        ;   XREF to: 0054bc38 (UNCONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV ESI,dword ptr [ESP + 0x470]     ; 0054bfb3
        ;   Label: LAB_0054bfb3
    PUSH ESI                            ; 0054bfba
    LEA EAX,[ESP + 0x134]               ; 0054bfbb
    PUSH EAX                            ; 0054bfc2
    MOV ECX,0x5e7bec                    ; 0054bfc3 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x2f9                       ; 0054bfc8
    PUSH 0x5e7c01                       ; 0054bfcd | = "%s specified maxVol on line %d withou..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054bfd2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054bfd8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054bfde
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0054bfe3
    JMP 0x0054bf45                      ; 0054bfe6
        ;   XREF to: 0054bf45 (UNCONDITIONAL_JUMP)  ; LAB_0054bf45
    MOV EDX,dword ptr [ESP + 0x470]     ; 0054bfeb
        ;   Label: LAB_0054bfeb
    MOV EAX,0x2fc                       ; 0054bff2
    PUSH EDX                            ; 0054bff7
    MOV [0x01d046a4],EAX                ; 0054bff8 | DAT_01d046a4
    LEA EAX,[ESP + 0x134]               ; 0054bffd
    PUSH EAX                            ; 0054c004
    FLD float ptr [ESP + 0x8]           ; 0054c005
    SUB ESP,0x8                         ; 0054c009
    FSTP double ptr [ESP]               ; 0054c00c
    MOV EDI,0x5e7ca4                    ; 0054c00f | = "..\\sound\\sndmain.cpp"
    PUSH 0x5e7cb9                       ; 0054c014 | = "maxVol %g is too small in %s line %d!"
    MOV dword ptr [0x01d046a0],EDI      ; 0054c019 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0054c01f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x14                        ; 0054c024
    JMP 0x0054bf9c                      ; 0054c027
        ;   XREF to: 0054bf9c (UNCONDITIONAL_JUMP)  ; LAB_0054bf9c
    LEA EAX,[ESP + 0x458]               ; 0054c02c
        ;   Label: LAB_0054c02c
    PUSH EAX                            ; 0054c033
    PUSH 0x5e7cdf                       ; 0054c034 | = "length =%d"
    LEA EAX,[ESP + 0xc]                 ; 0054c039
    PUSH EAX                            ; 0054c03d
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0054c03e
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0054c043
    CMP EAX,0x1                         ; 0054c046
    JNZ 0x0054c0e8                      ; 0054c049
        ;   XREF to: 0054c0e8 (CONDITIONAL_JUMP)  ; LAB_0054c0e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c04f
    CMP dword ptr [EAX + 0x110],0x0     ; 0054c052
    JL 0x0054c092                       ; 0054c059
        ;   XREF to: 0054c092 (CONDITIONAL_JUMP)  ; LAB_0054c092
    MOV EAX,dword ptr [ESP + 0x470]     ; 0054c05b
    PUSH EAX                            ; 0054c062
    LEA EAX,[ESP + 0x134]               ; 0054c063
    PUSH EAX                            ; 0054c06a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054c06b
    PUSH EDX                            ; 0054c06e
    MOV ESI,0x5e7cea                    ; 0054c06f | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x303                       ; 0054c074
    PUSH 0x5e7cff                       ; 0054c079 | = "Length for %s already known, then spe..."
    MOV dword ptr [0x01d046a0],ESI      ; 0054c07e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0054c084 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054c08a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 0054c08f
    MOV ECX,dword ptr [ESP + 0x458]     ; 0054c092
        ;   Label: LAB_0054c092
    TEST ECX,ECX                        ; 0054c099
    JLE 0x0054c0b2                      ; 0054c09b
        ;   XREF to: 0054c0b2 (CONDITIONAL_JUMP)  ; LAB_0054c0b2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054c09d
        ;   Label: LAB_0054c09d
    MOV EAX,dword ptr [ESP + 0x458]     ; 0054c0a0
    MOV dword ptr [ECX + 0x110],EAX     ; 0054c0a7
    JMP 0x0054bc38                      ; 0054c0ad
        ;   XREF to: 0054bc38 (UNCONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV EDI,dword ptr [ESP + 0x470]     ; 0054c0b2
        ;   Label: LAB_0054c0b2
    PUSH EDI                            ; 0054c0b9
    LEA EAX,[ESP + 0x134]               ; 0054c0ba
    PUSH EAX                            ; 0054c0c1
    PUSH ECX                            ; 0054c0c2
    MOV EBX,0x5e7d3f                    ; 0054c0c3 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x304                       ; 0054c0c8
    PUSH 0x5e7d54                       ; 0054c0cd | = "Invalid length %d in %s line %d"
    MOV dword ptr [0x01d046a0],EBX      ; 0054c0d2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054c0d8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054c0de
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 0054c0e3
    JMP 0x0054c09d                      ; 0054c0e6
        ;   XREF to: 0054c09d (UNCONDITIONAL_JUMP)  ; LAB_0054c09d
    PUSH 0x5e7d74                       ; 0054c0e8 | DAT_005e7d74
        ;   Label: LAB_0054c0e8
    LEA EAX,[ESP + 0x8]                 ; 0054c0ed
    PUSH EAX                            ; 0054c0f1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0054c0f2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c0f7
    TEST EAX,EAX                        ; 0054c0fa
    JNZ 0x0054c129                      ; 0054c0fc
        ;   XREF to: 0054c129 (CONDITIONAL_JUMP)  ; LAB_0054c129
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054c0fe
    MOV dword ptr [EAX + 0x124],0x1     ; 0054c101
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054c10b
    MOV EAX,dword ptr [EAX + 0x110]     ; 0054c10e
    MOV dword ptr [ECX + 0x13c],0x0     ; 0054c114
    MOV dword ptr [ECX + 0x128],EAX     ; 0054c11e
    JMP 0x0054bc38                      ; 0054c124
        ;   XREF to: 0054bc38 (UNCONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV dword ptr [0x01d046a0],0x5e7d79 ; 0054c129 | DAT_01d046a0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054c129
    LEA EAX,[ESP + 0x4]                 ; 0054c133
    PUSH EAX                            ; 0054c137
    MOV ECX,dword ptr [ESP + 0x474]     ; 0054c138
    PUSH ECX                            ; 0054c13f
    LEA EAX,[ESP + 0x138]               ; 0054c140
    PUSH EAX                            ; 0054c147
    MOV EDX,0x311                       ; 0054c148
    PUSH 0x5e7d8e                       ; 0054c14d | = "Error parsing %s line %d: %s"
    MOV dword ptr [0x01d046a4],EDX      ; 0054c152 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054c158
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 0054c15d
    JMP 0x0054bc38                      ; 0054c160
        ;   XREF to: 0054bc38 (UNCONDITIONAL_JUMP)  ; LAB_0054bc38
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054c165
        ;   Label: LAB_0054c165
    MOV ECX,dword ptr [ECX + 0x110]     ; 0054c168
    MOV dword ptr [EAX + 0x128],ECX     ; 0054c16e
    JMP 0x0054bc72                      ; 0054c174
        ;   XREF to: 0054bc72 (UNCONDITIONAL_JUMP)  ; LAB_0054bc72

