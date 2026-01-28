; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_0052e8d0(SMpegFrame *frame)
;
; Parameters:
; SMpegFrame *     Stack[0x4]:4   frame
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ac5a
;   TerminatedCString s_MPEG_Layer_2_pick_table__0063ac6b
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

    PUSH EBX                            ; 0052e8d0
        ;   Label: sound_mp3.cpp_validateLayer2AllocationTable_FUN_0052e8d0
    PUSH ESI                            ; 0052e8d1
    PUSH EDI                            ; 0052e8d2
    PUSH EBP                            ; 0052e8d3
    SUB ESP,0xc                         ; 0052e8d4
    MOV ESI,dword ptr [ESP + 0x20]      ; 0052e8d7
    MOV ECX,dword ptr [ESI]             ; 0052e8db
    MOV EAX,dword ptr [ECX + 0x4]       ; 0052e8dd
    DEC EAX                             ; 0052e8e0
    MOV dword ptr [ESP],EAX             ; 0052e8e1
    MOV EAX,dword ptr [ECX + 0xc]       ; 0052e8e4
    MOV EBX,dword ptr [ECX]             ; 0052e8e7
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e8e9
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052e8ed
    SUB EAX,EBX                         ; 0052e8f4
    SHL EAX,0x2                         ; 0052e8f6
    MOV EBP,EAX                         ; 0052e8f9
    SHL EBP,0x4                         ; 0052e8fb
    SUB EBP,EAX                         ; 0052e8fe
    MOV EAX,dword ptr [ESP]             ; 0052e900
    SHL EAX,0x2                         ; 0052e903
    MOV EDX,EAX                         ; 0052e906
    SHL EAX,0x4                         ; 0052e908
    SUB EAX,EDX                         ; 0052e90b
    ADD EBP,EAX                         ; 0052e90d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052e90f
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x67e258] ; 0052e913 | g_MpegBitrateTable
    MOV EAX,EDX                         ; 0052e91a
    MOV EBP,dword ptr [ESI + 0x10]      ; 0052e91c
    SAR EDX,0x1f                        ; 0052e91f
    IDIV EBP                            ; 0052e922
    MOV EDX,EAX                         ; 0052e924
    MOV EAX,dword ptr [ECX + 0x10]      ; 0052e926
    MOV ECX,EBX                         ; 0052e929
    SHL ECX,0x5                         ; 0052e92b
    MOV EDI,dword ptr [ESI + 0x18]      ; 0052e92e
    FLD double ptr [ECX + EAX*0x8 + 0x67e218] ; 0052e931 | g_MpegSampleRateTable
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052e938
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0052e93d
    CMP EBX,0x1                         ; 0052e941
    JNZ 0x0052e9c9                      ; 0052e944
        ;   XREF to: 0052e9c9 (CONDITIONAL_JUMP)  ; LAB_0052e9c9
    CMP dword ptr [ESP + 0x8],0x30      ; 0052e94a
    JNZ 0x0052e96b                      ; 0052e94f
        ;   XREF to: 0052e96b (CONDITIONAL_JUMP)  ; LAB_0052e96b
    CMP EDX,0x38                        ; 0052e951
    JL 0x0052e96b                       ; 0052e954
        ;   XREF to: 0052e96b (CONDITIONAL_JUMP)  ; LAB_0052e96b
    XOR EAX,EAX                         ; 0052e956
        ;   Label: LAB_0052e956
    CMP EAX,dword ptr [ESI + 0xc]       ; 0052e958
    JNZ 0x0052e9dd                      ; 0052e95b
        ;   XREF to: 0052e9dd (CONDITIONAL_JUMP)  ; LAB_0052e9dd
    MOV EAX,EDI                         ; 0052e961
    ADD ESP,0xc                         ; 0052e963
    POP EBP                             ; 0052e966
    POP EDI                             ; 0052e967
    POP ESI                             ; 0052e968
    POP EBX                             ; 0052e969
    RET                                 ; 0052e96a
    CMP EDX,0x38                        ; 0052e96b
        ;   Label: LAB_0052e96b
    JL 0x0052e975                       ; 0052e96e
        ;   XREF to: 0052e975 (CONDITIONAL_JUMP)  ; LAB_0052e975
    CMP EDX,0x50                        ; 0052e970
    JLE 0x0052e956                      ; 0052e973
        ;   XREF to: 0052e956 (CONDITIONAL_JUMP)  ; LAB_0052e956
    CMP dword ptr [ESP + 0x8],0x30      ; 0052e975
        ;   Label: LAB_0052e975
    JZ 0x0052e995                       ; 0052e97a
        ;   XREF to: 0052e995 (CONDITIONAL_JUMP)  ; LAB_0052e995
    CMP EDX,0x60                        ; 0052e97c
    JL 0x0052e995                       ; 0052e97f
        ;   XREF to: 0052e995 (CONDITIONAL_JUMP)  ; LAB_0052e995
    MOV EAX,0x1                         ; 0052e981
    CMP EAX,dword ptr [ESI + 0xc]       ; 0052e986
    JNZ 0x0052e9dd                      ; 0052e989
        ;   XREF to: 0052e9dd (CONDITIONAL_JUMP)  ; LAB_0052e9dd
    MOV EAX,EDI                         ; 0052e98b
    ADD ESP,0xc                         ; 0052e98d
    POP EBP                             ; 0052e990
    POP EDI                             ; 0052e991
    POP ESI                             ; 0052e992
    POP EBX                             ; 0052e993
    RET                                 ; 0052e994
    CMP dword ptr [ESP + 0x8],0x20      ; 0052e995
        ;   Label: LAB_0052e995
    JZ 0x0052e9b5                       ; 0052e99a
        ;   XREF to: 0052e9b5 (CONDITIONAL_JUMP)  ; LAB_0052e9b5
    CMP EDX,0x30                        ; 0052e99c
    JG 0x0052e9b5                       ; 0052e99f
        ;   XREF to: 0052e9b5 (CONDITIONAL_JUMP)  ; LAB_0052e9b5
    MOV EAX,0x2                         ; 0052e9a1
    CMP EAX,dword ptr [ESI + 0xc]       ; 0052e9a6
    JNZ 0x0052e9dd                      ; 0052e9a9
        ;   XREF to: 0052e9dd (CONDITIONAL_JUMP)  ; LAB_0052e9dd
    MOV EAX,EDI                         ; 0052e9ab
    ADD ESP,0xc                         ; 0052e9ad
    POP EBP                             ; 0052e9b0
    POP EDI                             ; 0052e9b1
    POP ESI                             ; 0052e9b2
    POP EBX                             ; 0052e9b3
    RET                                 ; 0052e9b4
    MOV EAX,0x3                         ; 0052e9b5
        ;   Label: LAB_0052e9b5
    CMP EAX,dword ptr [ESI + 0xc]       ; 0052e9ba
    JNZ 0x0052e9dd                      ; 0052e9bd
        ;   XREF to: 0052e9dd (CONDITIONAL_JUMP)  ; LAB_0052e9dd
    MOV EAX,EDI                         ; 0052e9bf
    ADD ESP,0xc                         ; 0052e9c1
    POP EBP                             ; 0052e9c4
    POP EDI                             ; 0052e9c5
    POP ESI                             ; 0052e9c6
    POP EBX                             ; 0052e9c7
    RET                                 ; 0052e9c8
    MOV EAX,0x4                         ; 0052e9c9
        ;   Label: LAB_0052e9c9
    CMP EAX,dword ptr [ESI + 0xc]       ; 0052e9ce
    JNZ 0x0052e9dd                      ; 0052e9d1
        ;   XREF to: 0052e9dd (CONDITIONAL_JUMP)  ; LAB_0052e9dd
    MOV EAX,EDI                         ; 0052e9d3
    ADD ESP,0xc                         ; 0052e9d5
    POP EBP                             ; 0052e9d8
    POP EDI                             ; 0052e9d9
    POP ESI                             ; 0052e9da
    POP EBX                             ; 0052e9db
    RET                                 ; 0052e9dc
    PUSH 0x2f68188                      ; 0052e9dd | g_CurrentMp3Filename
        ;   Label: LAB_0052e9dd
    MOV EAX,0x63ac5a                    ; 0052e9e2 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1a2                       ; 0052e9e7
    PUSH 0x63ac6b                       ; 0052e9ec | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x02f0ca48],EAX                ; 0052e9f1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0052e9f6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052e9fc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052ea01
    MOV EAX,EDI                         ; 0052ea04
    ADD ESP,0xc                         ; 0052ea06
    POP EBP                             ; 0052ea09
    POP EDI                             ; 0052ea0a
    POP ESI                             ; 0052ea0b
    POP EBX                             ; 0052ea0c
    RET                                 ; 0052ea0d

