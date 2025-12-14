; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame * frame)
;
; Parameters:
; SMpegFrame *     Stack[0x4]:4   frame
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ac5a
;   TerminatedCString s_MPEG_Layer_2_pick_table__0063ac6b
;   TerminatedCString s_sound_mp3_cpp_0063aca4
;   TerminatedCString s_js_bound_bad_layer_modex_0063acb5
;   void*[4][4] g_MpegLayer2AllocationTables
;   double[2][4] g_MpegSampleRateTable
;   int[2][3][15] g_MpegBitrateTable
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ea80
        ;   Label: sound_mp3.cpp_calculateMpegFrame_FUN_0052ea80
    PUSH ESI                            ; 0052ea81
    PUSH EDI                            ; 0052ea82
    PUSH EBP                            ; 0052ea83
    SUB ESP,0x14                        ; 0052ea84
    MOV EBX,dword ptr [ESP + 0x28]      ; 0052ea87
    MOV ESI,dword ptr [EBX]             ; 0052ea8b
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0052ea8d
    MOV dword ptr [EBX + 0x4],EAX       ; 0052ea90
    CMP EAX,0x3                         ; 0052ea93
    SETNZ AL                            ; 0052ea96
    AND EAX,0xff                        ; 0052ea99
    INC EAX                             ; 0052ea9e
    MOV dword ptr [EBX + 0x10],EAX      ; 0052ea9f
    CMP dword ptr [ESI + 0x4],0x2       ; 0052eaa2
    JZ 0x0052eb11                       ; 0052eaa6
        ;   XREF to: 0052eb11 (CONDITIONAL_JUMP)  ; LAB_0052eb11
    MOV dword ptr [EBX + 0x18],0x20     ; 0052eaa8
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0052eaaf
        ;   Label: LAB_0052eaaf
    CMP ECX,0x1                         ; 0052eab2
    JNZ 0x0052ec2a                      ; 0052eab5
        ;   XREF to: 0052ec2a (CONDITIONAL_JUMP)  ; LAB_0052ec2a
    MOV EDI,dword ptr [ESI + 0x4]       ; 0052eabb
    MOV ESI,dword ptr [ESI + 0x20]      ; 0052eabe
    CMP EDI,ECX                         ; 0052eac1
    JL 0x0052eace                       ; 0052eac3
        ;   XREF to: 0052eace (CONDITIONAL_JUMP)  ; LAB_0052eace
    CMP EDI,0x3                         ; 0052eac5
    JLE 0x0052ec14                      ; 0052eac8
        ;   XREF to: 0052ec14 (CONDITIONAL_JUMP)  ; LAB_0052ec14
    PUSH 0x2f68188                      ; 0052eace | g_CurrentMp3Filename
        ;   Label: LAB_0052eace
    PUSH ESI                            ; 0052ead3
    PUSH EDI                            ; 0052ead4
    MOV EBP,0x63aca4                    ; 0052ead5 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x1b2                       ; 0052eada
    PUSH 0x63acb5                       ; 0052eadf | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0052eae4 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052eaea | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052eaef
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 0052eaf4
    SHL ESI,0x2                         ; 0052eaf7
        ;   Label: LAB_0052eaf7
    SHL EDI,0x4                         ; 0052eafa
    LEA EAX,[EDI + ESI*0x1]             ; 0052eafd
    MOV EAX,dword ptr [EAX + 0x67d820]  ; 0052eb00 | g_MpegLayer2AllocationTables
    MOV dword ptr [EBX + 0x14],EAX      ; 0052eb06
    ADD ESP,0x14                        ; 0052eb09
    POP EBP                             ; 0052eb0c
    POP EDI                             ; 0052eb0d
    POP ESI                             ; 0052eb0e
    POP EBX                             ; 0052eb0f
    RET                                 ; 0052eb10
    MOV EAX,dword ptr [EBX + 0x18]      ; 0052eb11
        ;   Label: LAB_0052eb11
    MOV ECX,dword ptr [EBX]             ; 0052eb14
    MOV dword ptr [ESP + 0xc],EAX       ; 0052eb16
    MOV EAX,dword ptr [ECX + 0xc]       ; 0052eb1a
    MOV EDI,dword ptr [ECX]             ; 0052eb1d
    MOV dword ptr [ESP],EAX             ; 0052eb1f
    LEA EAX,[EDI*0x4 + 0x0]             ; 0052eb22
    SUB EAX,EDI                         ; 0052eb29
    SHL EAX,0x2                         ; 0052eb2b
    MOV EDX,EAX                         ; 0052eb2e
    SHL EAX,0x4                         ; 0052eb30
    MOV EBP,dword ptr [ECX + 0x4]       ; 0052eb33
    SUB EAX,EDX                         ; 0052eb36
    DEC EBP                             ; 0052eb38
    MOV dword ptr [ESP + 0x4],EAX       ; 0052eb39
    LEA EAX,[EBP*0x4 + 0x0]             ; 0052eb3d
    MOV EDX,EAX                         ; 0052eb44
    SHL EAX,0x4                         ; 0052eb46
    MOV EBP,dword ptr [ESP + 0x4]       ; 0052eb49
    SUB EAX,EDX                         ; 0052eb4d
    MOV EDX,dword ptr [ESP]             ; 0052eb4f
    ADD EAX,EBP                         ; 0052eb52
    MOV EDX,dword ptr [EAX + EDX*0x4 + 0x67e258] ; 0052eb54 | g_MpegBitrateTable
    MOV EBP,dword ptr [EBX + 0x10]      ; 0052eb5b
    MOV EAX,EDX                         ; 0052eb5e
    SAR EDX,0x1f                        ; 0052eb60
    IDIV EBP                            ; 0052eb63
    MOV EDX,EAX                         ; 0052eb65
    MOV EAX,dword ptr [ECX + 0x10]      ; 0052eb67
    MOV ECX,EDI                         ; 0052eb6a
    SHL ECX,0x5                         ; 0052eb6c
    MOV dword ptr [ESP + 0x8],EBX       ; 0052eb6f
    FLD double ptr [ECX + EAX*0x8 + 0x67e218] ; 0052eb73 | g_MpegSampleRateTable
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052eb7a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 0052eb7f
    CMP EDI,0x1                         ; 0052eb83
    JNZ 0x0052ec0d                      ; 0052eb86
        ;   XREF to: 0052ec0d (CONDITIONAL_JUMP)  ; LAB_0052ec0d
    CMP dword ptr [ESP + 0x10],0x30     ; 0052eb8c
    JNZ 0x0052ebd6                      ; 0052eb91
        ;   XREF to: 0052ebd6 (CONDITIONAL_JUMP)  ; LAB_0052ebd6
    CMP EDX,0x38                        ; 0052eb93
    JL 0x0052ebd6                       ; 0052eb96
        ;   XREF to: 0052ebd6 (CONDITIONAL_JUMP)  ; LAB_0052ebd6
    XOR EAX,EAX                         ; 0052eb98
        ;   Label: LAB_0052eb98
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052eb9a
        ;   Label: LAB_0052eb9a
    CMP EAX,dword ptr [EDX + 0xc]       ; 0052eb9e
    JZ 0x0052ebca                       ; 0052eba1
        ;   XREF to: 0052ebca (CONDITIONAL_JUMP)  ; LAB_0052ebca
    PUSH 0x2f68188                      ; 0052eba3 | g_CurrentMp3Filename
    MOV EAX,0x63ac5a                    ; 0052eba8 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1a2                       ; 0052ebad
    PUSH 0x63ac6b                       ; 0052ebb2 | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x02f0ca48],EAX                ; 0052ebb7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0052ebbc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052ebc2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052ebc7
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052ebca
        ;   Label: LAB_0052ebca
    MOV dword ptr [EBX + 0x18],EAX      ; 0052ebce
    JMP 0x0052eaaf                      ; 0052ebd1
        ;   XREF to: 0052eaaf (UNCONDITIONAL_JUMP)  ; LAB_0052eaaf
    CMP EDX,0x38                        ; 0052ebd6
        ;   Label: LAB_0052ebd6
    JL 0x0052ebe0                       ; 0052ebd9
        ;   XREF to: 0052ebe0 (CONDITIONAL_JUMP)  ; LAB_0052ebe0
    CMP EDX,0x50                        ; 0052ebdb
    JLE 0x0052eb98                      ; 0052ebde
        ;   XREF to: 0052eb98 (CONDITIONAL_JUMP)  ; LAB_0052eb98
    CMP dword ptr [ESP + 0x10],0x30     ; 0052ebe0
        ;   Label: LAB_0052ebe0
    JZ 0x0052ebf3                       ; 0052ebe5
        ;   XREF to: 0052ebf3 (CONDITIONAL_JUMP)  ; LAB_0052ebf3
    CMP EDX,0x60                        ; 0052ebe7
    JL 0x0052ebf3                       ; 0052ebea
        ;   XREF to: 0052ebf3 (CONDITIONAL_JUMP)  ; LAB_0052ebf3
    MOV EAX,0x1                         ; 0052ebec
    JMP 0x0052eb9a                      ; 0052ebf1
        ;   XREF to: 0052eb9a (UNCONDITIONAL_JUMP)  ; LAB_0052eb9a
    CMP dword ptr [ESP + 0x10],0x20     ; 0052ebf3
        ;   Label: LAB_0052ebf3
    JZ 0x0052ec06                       ; 0052ebf8
        ;   XREF to: 0052ec06 (CONDITIONAL_JUMP)  ; LAB_0052ec06
    CMP EDX,0x30                        ; 0052ebfa
    JG 0x0052ec06                       ; 0052ebfd
        ;   XREF to: 0052ec06 (CONDITIONAL_JUMP)  ; LAB_0052ec06
    MOV EAX,0x2                         ; 0052ebff
    JMP 0x0052eb9a                      ; 0052ec04
        ;   XREF to: 0052eb9a (UNCONDITIONAL_JUMP)  ; LAB_0052eb9a
    MOV EAX,0x3                         ; 0052ec06
        ;   Label: LAB_0052ec06
    JMP 0x0052eb9a                      ; 0052ec0b
        ;   XREF to: 0052eb9a (UNCONDITIONAL_JUMP)  ; LAB_0052eb9a
    MOV EAX,0x4                         ; 0052ec0d
        ;   Label: LAB_0052ec0d
    JMP 0x0052eb9a                      ; 0052ec12
        ;   XREF to: 0052eb9a (UNCONDITIONAL_JUMP)  ; LAB_0052eb9a
    TEST ESI,ESI                        ; 0052ec14
        ;   Label: LAB_0052ec14
    JL 0x0052eace                       ; 0052ec16
        ;   XREF to: 0052eace (CONDITIONAL_JUMP)  ; LAB_0052eace
    CMP ESI,0x3                         ; 0052ec1c
    JG 0x0052eace                       ; 0052ec1f
        ;   XREF to: 0052eace (CONDITIONAL_JUMP)  ; LAB_0052eace
    JMP 0x0052eaf7                      ; 0052ec25
        ;   XREF to: 0052eaf7 (UNCONDITIONAL_JUMP)  ; LAB_0052eaf7
    MOV EAX,dword ptr [EBX + 0x18]      ; 0052ec2a
        ;   Label: LAB_0052ec2a
    MOV dword ptr [EBX + 0x14],EAX      ; 0052ec2d
    ADD ESP,0x14                        ; 0052ec30
    POP EBP                             ; 0052ec33
    POP EDI                             ; 0052ec34
    POP ESI                             ; 0052ec35
    POP EBX                             ; 0052ec36
    RET                                 ; 0052ec37

