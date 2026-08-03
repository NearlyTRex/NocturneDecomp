; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_saveScreenRaw32_FUN_004f27e0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x6b]:1  local_6b
; undefined1       Stack[-0x69]:1  local_69
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_pcx.c_FUN_004f2990 at 004f2b45
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_0058cf54
;   TerminatedCString s_saveScreenRaw32_No_ext_f_0058cf64
;   TerminatedCString s_RAW_0058cf83
;   undefined4 s_RAW_0058cf83+1
;   undefined4 s_RAW_0058cf83+2
;   undefined4 s_RAW_0058cf83+3
;   TerminatedCString s_wb_0058cf88
;   TerminatedCString s_engine_pcx_c_0058cf8b
;   TerminatedCString s_saveScreenRaw32_Unable_t_0058cf9b
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fputc_FUN_00566cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f27e0
        ;   Label: engine_pcx.c_saveScreenRaw32_FUN_004f27e0
    PUSH ESI                            ; 004f27e1
    PUSH EDI                            ; 004f27e2
    PUSH EBP                            ; 004f27e3
    SUB ESP,0x5c                        ; 004f27e4
    MOV ESI,dword ptr [ESP + 0x70]      ; 004f27e7
    MOV EDI,ESP                         ; 004f27eb
    MOV DL,0x2e                         ; 004f27ed
    PUSH EDI                            ; 004f27ef
    MOV AL,byte ptr [ESI]               ; 004f27f0
        ;   Label: LAB_004f27f0
    MOV byte ptr [EDI],AL               ; 004f27f2
    CMP AL,0x0                          ; 004f27f4
    JZ 0x004f2808                       ; 004f27f6
        ;   XREF to: 004f2808 (CONDITIONAL_JUMP)  ; LAB_004f2808
    MOV AL,byte ptr [ESI + 0x1]         ; 004f27f8
    ADD ESI,0x2                         ; 004f27fb
    MOV byte ptr [EDI + 0x1],AL         ; 004f27fe
    ADD EDI,0x2                         ; 004f2801
    CMP AL,0x0                          ; 004f2804
    JNZ 0x004f27f0                      ; 004f2806
        ;   XREF to: 004f27f0 (CONDITIONAL_JUMP)  ; LAB_004f27f0
    POP EDI                             ; 004f2808
        ;   Label: LAB_004f2808
    MOV ESI,ESP                         ; 004f2809
    MOV AL,byte ptr [ESI]               ; 004f280b
        ;   Label: LAB_004f280b
    CMP AL,DL                           ; 004f280d
    JZ 0x004f2823                       ; 004f280f
        ;   XREF to: 004f2823 (CONDITIONAL_JUMP)  ; LAB_004f2823
    CMP AL,0x0                          ; 004f2811
    JZ 0x004f2821                       ; 004f2813
        ;   XREF to: 004f2821 (CONDITIONAL_JUMP)  ; LAB_004f2821
    INC ESI                             ; 004f2815
    MOV AL,byte ptr [ESI]               ; 004f2816
    CMP AL,DL                           ; 004f2818
    JZ 0x004f2823                       ; 004f281a
        ;   XREF to: 004f2823 (CONDITIONAL_JUMP)  ; LAB_004f2823
    INC ESI                             ; 004f281c
    CMP AL,0x0                          ; 004f281d
    JNZ 0x004f280b                      ; 004f281f
        ;   XREF to: 004f280b (CONDITIONAL_JUMP)  ; LAB_004f280b
    SUB ESI,ESI                         ; 004f2821
        ;   Label: LAB_004f2821
    MOV EDI,ESI                         ; 004f2823
        ;   Label: LAB_004f2823
    TEST ESI,ESI                        ; 004f2825
    JZ 0x004f2960                       ; 004f2827
        ;   XREF to: 004f2960 (CONDITIONAL_JUMP)  ; LAB_004f2960
    MOV ESI,0x58cf83                    ; 004f282d | = ".RAW"
        ;   Label: LAB_004f282d
    PUSH EDI                            ; 004f2832
    MOV AL,byte ptr [ESI]               ; 004f2833 | = ".RAW" | s_RAW_0058cf83+2
        ;   Label: LAB_004f2833
    MOV byte ptr [EDI],AL               ; 004f2835
    CMP AL,0x0                          ; 004f2837
    JZ 0x004f284b                       ; 004f2839
        ;   XREF to: 004f284b (CONDITIONAL_JUMP)  ; LAB_004f284b
    MOV AL,byte ptr [ESI + 0x1]         ; 004f283b | s_RAW_0058cf83+1 | s_RAW_0058cf83+3
    ADD ESI,0x2                         ; 004f283e
    MOV byte ptr [EDI + 0x1],AL         ; 004f2841
    ADD EDI,0x2                         ; 004f2844
    CMP AL,0x0                          ; 004f2847
    JNZ 0x004f2833                      ; 004f2849
        ;   XREF to: 004f2833 (CONDITIONAL_JUMP)  ; LAB_004f2833
    POP EDI                             ; 004f284b
        ;   Label: LAB_004f284b
    PUSH 0x58cf88                       ; 004f284c | = "wb"
    LEA EAX,[ESP + 0x4]                 ; 004f2851
    PUSH EAX                            ; 004f2855
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f2856
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f285b
    MOV EDI,EAX                         ; 004f285e
    TEST EAX,EAX                        ; 004f2860
    JNZ 0x004f2887                      ; 004f2862
        ;   XREF to: 004f2887 (CONDITIONAL_JUMP)  ; LAB_004f2887
    MOV EBX,0x58cf8b                    ; 004f2864 | = "..\\engine\\pcx.c"
    MOV ESI,0x9f                        ; 004f2869
    PUSH 0x58cf9b                       ; 004f286e | = "saveScreenRaw32 - Unable to open output"
    MOV dword ptr [0x01cc4800],EBX      ; 004f2873 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004f2879 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f287f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f2884
    XOR EBP,EBP                         ; 004f2887
        ;   Label: LAB_004f2887
    MOV EAX,[0x005b7620]                ; 004f2889 | DAT_005b7620
    MOV dword ptr [ESP + 0x58],EBP      ; 004f288e
    TEST EAX,EAX                        ; 004f2892
    JLE 0x004f294f                      ; 004f2894
        ;   XREF to: 004f294f (CONDITIONAL_JUMP)  ; LAB_004f294f
    MOV dword ptr [ESP + 0x54],EBP      ; 004f289a
    MOV EBX,dword ptr [ESP + 0x54]      ; 004f289e
        ;   Label: LAB_004f289e
    MOV EBP,dword ptr [0x005b761c]      ; 004f28a2 | DAT_005b761c
    XOR ESI,ESI                         ; 004f28a8
    MOV EBX,dword ptr [EBX + 0x1bd2fa0] ; 004f28aa | DAT_01bd2fa0 | DAT_01bd2fa4
    TEST EBP,EBP                        ; 004f28b0
    JLE 0x004f292d                      ; 004f28b2
        ;   XREF to: 004f292d (CONDITIONAL_JUMP)  ; LAB_004f292d
    MOV CL,byte ptr [0x01c00624]        ; 004f28b4 | DAT_01c00624
        ;   Label: LAB_004f28b4
    MOV EAX,dword ptr [EBX]             ; 004f28ba
    MOV EDX,dword ptr [0x01c00628]      ; 004f28bc | DAT_01c00628
    SHR EAX,CL                          ; 004f28c2
    IMUL EDX,EAX                        ; 004f28c4
    MOV EBP,dword ptr [EBX]             ; 004f28c7
    MOV CL,byte ptr [0x01c00630]        ; 004f28c9 | DAT_01c00630
    SHR EBP,CL                          ; 004f28cf
    IMUL EBP,dword ptr [0x01c00634]     ; 004f28d1 | DAT_01c00634
    MOV EAX,dword ptr [EBX]             ; 004f28d8
    MOV CL,byte ptr [0x01c0063c]        ; 004f28da | DAT_01c0063c
    SHR EAX,CL                          ; 004f28e0
    IMUL EAX,dword ptr [0x01c00640]     ; 004f28e2 | DAT_01c00640
    PUSH EDI                            ; 004f28e9
    AND EDX,0xff                        ; 004f28ea
    AND EAX,0xff                        ; 004f28f0
    PUSH EDX                            ; 004f28f5
    MOV dword ptr [ESP + 0x58],EAX      ; 004f28f6
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f28fa
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    ADD ESP,0x8                         ; 004f28ff
    PUSH EDI                            ; 004f2902
    AND EBP,0xff                        ; 004f2903
    PUSH EBP                            ; 004f2909
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f290a
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    ADD ESP,0x8                         ; 004f290f
    PUSH EDI                            ; 004f2912
    MOV EBP,dword ptr [ESP + 0x54]      ; 004f2913
    PUSH EBP                            ; 004f2917
    ADD EBX,0x4                         ; 004f2918
    INC ESI                             ; 004f291b
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f291c
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    MOV EAX,[0x005b761c]                ; 004f2921 | DAT_005b761c
    ADD ESP,0x8                         ; 004f2926
    CMP ESI,EAX                         ; 004f2929
    JL 0x004f28b4                       ; 004f292b
        ;   XREF to: 004f28b4 (CONDITIONAL_JUMP)  ; LAB_004f28b4
    MOV EDX,dword ptr [ESP + 0x54]      ; 004f292d
        ;   Label: LAB_004f292d
    MOV ECX,dword ptr [ESP + 0x58]      ; 004f2931
    MOV EBX,dword ptr [0x005b7620]      ; 004f2935 | DAT_005b7620
    ADD EDX,0x4                         ; 004f293b
    INC ECX                             ; 004f293e
    MOV dword ptr [ESP + 0x54],EDX      ; 004f293f
    MOV dword ptr [ESP + 0x58],ECX      ; 004f2943
    CMP ECX,EBX                         ; 004f2947
    JL 0x004f289e                       ; 004f2949
        ;   XREF to: 004f289e (CONDITIONAL_JUMP)  ; LAB_004f289e
    PUSH EDI                            ; 004f294f
        ;   Label: LAB_004f294f
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f2950
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f2955
    ADD ESP,0x5c                        ; 004f2958
    POP EBP                             ; 004f295b
    POP EDI                             ; 004f295c
    POP ESI                             ; 004f295d
    POP EBX                             ; 004f295e
    RET                                 ; 004f295f
    MOV EDX,0x58cf54                    ; 004f2960 | = "..\\engine\\pcx.c"
        ;   Label: LAB_004f2960
    MOV ECX,0x99                        ; 004f2965
    PUSH 0x58cf64                       ; 004f296a | = "saveScreenRaw32 - No ext found"
    MOV dword ptr [0x01cc4800],EDX      ; 004f296f | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f2975 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f297b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f2980
    JMP 0x004f282d                      ; 004f2983
        ;   XREF to: 004f282d (UNCONDITIONAL_JUMP)  ; LAB_004f282d

