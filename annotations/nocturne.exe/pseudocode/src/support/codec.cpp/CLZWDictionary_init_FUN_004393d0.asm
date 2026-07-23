; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_004393d0(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_init_FUN_00439880 at 00439895
;   support_codec.cpp_CLZWDecompress_init_FUN_00439a30 at 00439a45
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_0057afca
;   TerminatedCString s_CLZWDictionary_init_out_0057afdf
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00564a70
;   FUN_004c8440
;   support_codec.cpp_CLZWDictionary_initTable_FUN_00439450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004393d0
        ;   Label: support_codec.cpp_CLZWDictionary_init_FUN_004393d0
    PUSH ESI                            ; 004393d1
    PUSH EBP                            ; 004393d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004393d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004393d7
    CMP EAX,dword ptr [EBX]             ; 004393db
    JNZ 0x004393f9                      ; 004393dd
        ;   XREF to: 004393f9 (CONDITIONAL_JUMP)  ; LAB_004393f9
    CMP dword ptr [EBX + 0x10],0x0      ; 004393df
    JZ 0x004393f9                       ; 004393e3
        ;   XREF to: 004393f9 (CONDITIONAL_JUMP)  ; LAB_004393f9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004393e5
        ;   Label: LAB_004393e5
    PUSH EBX                            ; 004393e9
    MOV dword ptr [EBX + 0x4],EAX       ; 004393ea
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_00439450 ; 004393ed
        ;   XREF to: 00439450 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CLZWDictionary_initTable_FUN_00439450()
    ADD ESP,0x4                         ; 004393f2
    POP EBP                             ; 004393f5
    POP ESI                             ; 004393f6
    POP EBX                             ; 004393f7
    RET                                 ; 004393f8
    MOV dword ptr [EBX],EAX             ; 004393f9
        ;   Label: LAB_004393f9
    SHL EAX,0x4                         ; 004393fb
    PUSH EAX                            ; 004393fe
    MOV ESI,dword ptr [EBX + 0x10]      ; 004393ff
    PUSH ESI                            ; 00439402
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00439403
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 00439408
    MOV dword ptr [EBX + 0x10],EAX      ; 0043940b
    TEST EAX,EAX                        ; 0043940e
    JNZ 0x004393e5                      ; 00439410
        ;   XREF to: 004393e5 (CONDITIONAL_JUMP)  ; LAB_004393e5
    MOV EBP,0x57afca                    ; 00439412 | = "..\\support\\codec.cpp"
    MOV EAX,0x2c7                       ; 00439417
    PUSH 0x57afdf                       ; 0043941c | = "CLZWDictionary::init - out of memory"
    MOV dword ptr [0x01cc4800],EBP      ; 00439421 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00439427 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0043942c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00439431
    MOV EAX,dword ptr [ESP + 0x18]      ; 00439434
    PUSH EBX                            ; 00439438
    MOV dword ptr [EBX + 0x4],EAX       ; 00439439
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_00439450 ; 0043943c
        ;   XREF to: 00439450 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CLZWDictionary_initTable_FUN_00439450()
    ADD ESP,0x4                         ; 00439441
    POP EBP                             ; 00439444
    POP ESI                             ; 00439445
    POP EBX                             ; 00439446
    RET                                 ; 00439447

