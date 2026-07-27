; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_004e8410(int param_1,int param_2)
;
;
; XREF[2]:
;   sound_mp3.cpp_FUN_004e7ed0 at 004e81d8
;   sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10 at 00523e2b
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_fseek_FUN_0056582c
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8410
        ;   Label: sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410
    PUSH ESI                            ; 004e8411
    PUSH EDI                            ; 004e8412
    PUSH EBP                            ; 004e8413
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e8414
    MOV ESI,dword ptr [ESP + 0x18]      ; 004e8418
    MOV dword ptr [EBX + 0x108],0x0     ; 004e841c
    LEA EDI,[EBX + 0x5320]              ; 004e8426
    MOV dword ptr [EBX + 0x10c],0x0     ; 004e842c
    PUSH 0x0                            ; 004e8436
    MOV EDX,dword ptr [EDI + 0x20]      ; 004e8438
    PUSH EDX                            ; 004e843b
    MOV ECX,dword ptr [EDI]             ; 004e843c
    PUSH ECX                            ; 004e843e
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004e843f
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_0056582c()
    MOV dword ptr [EDI + 0x10],0x0      ; 004e8444
    MOV dword ptr [EDI + 0x14],0x0      ; 004e844b
    MOV dword ptr [EDI + 0xc],0x0       ; 004e8452
    MOV dword ptr [EDI + 0x18],0x0      ; 004e8459
    MOV dword ptr [EDI + 0x1c],0x0      ; 004e8460
    MOV EAX,dword ptr [EDI + 0x24]      ; 004e8467
    MOV dword ptr [EDI + 0x28],EAX      ; 004e846a
    MOV dword ptr [EBX + 0x534c],0x0    ; 004e846d
    MOV dword ptr [EBX + 0x1310],0x0    ; 004e8477
    ADD ESP,0xc                         ; 004e8481
    MOV dword ptr [EBX + 0x1314],0x0    ; 004e8484
    PUSH 0x2000                         ; 004e848e
    MOV dword ptr [EBX + 0x1318],0x0    ; 004e8493
    PUSH 0x0                            ; 004e849d
    MOV dword ptr [EBX + 0x531c],0x8    ; 004e849f
    LEA EAX,[EBX + 0x5350]              ; 004e84a9
    MOV dword ptr [EBX + 0x7350],0x40   ; 004e84af
    PUSH EAX                            ; 004e84b9
    MOV dword ptr [EBX + 0x7354],0x40   ; 004e84ba
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004e84c4
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 004e84c9
    PUSH 0x1200                         ; 004e84cc
    PUSH 0x0                            ; 004e84d1
    LEA EAX,[EBX + 0x7430]              ; 004e84d3
    PUSH EAX                            ; 004e84d9
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004e84da
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 004e84df
    CMP ESI,0x900                       ; 004e84e2
    JL 0x004e8503                       ; 004e84e8
        ;   XREF to: 004e8503 (CONDITIONAL_JUMP)  ; LAB_004e8503
    PUSH 0x0                            ; 004e84ea
        ;   Label: LAB_004e84ea
    PUSH EBX                            ; 004e84ec
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 ; 004e84ed
        ;   XREF to: 004e85b0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0()
    ADD ESP,0x8                         ; 004e84f2
    TEST EAX,EAX                        ; 004e84f5
    JLE 0x004e8517                      ; 004e84f7
        ;   XREF to: 004e8517 (CONDITIONAL_JUMP)  ; LAB_004e8517
    SUB ESI,EAX                         ; 004e84f9
    CMP ESI,0x900                       ; 004e84fb
    JGE 0x004e84ea                      ; 004e8501
        ;   XREF to: 004e84ea (CONDITIONAL_JUMP)  ; LAB_004e84ea
    LEA EDI,[EBX + 0x110]               ; 004e8503
        ;   Label: LAB_004e8503
    TEST ESI,ESI                        ; 004e8509
    JG 0x004e851e                       ; 004e850b
        ;   XREF to: 004e851e (CONDITIONAL_JUMP)  ; LAB_004e851e
    MOV EAX,0x1                         ; 004e850d
    POP EBP                             ; 004e8512
    POP EDI                             ; 004e8513
    POP ESI                             ; 004e8514
    POP EBX                             ; 004e8515
    RET                                 ; 004e8516
    XOR EAX,EAX                         ; 004e8517
        ;   Label: LAB_004e8517
    POP EBP                             ; 004e8519
    POP EDI                             ; 004e851a
    POP ESI                             ; 004e851b
    POP EBX                             ; 004e851c
    RET                                 ; 004e851d
    PUSH EDI                            ; 004e851e
        ;   Label: LAB_004e851e
    PUSH EBX                            ; 004e851f
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 ; 004e8520
        ;   XREF to: 004e85b0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0()
    ADD ESP,0x8                         ; 004e8525
    MOV dword ptr [EBX + 0x108],EAX     ; 004e8528
    TEST EAX,EAX                        ; 004e852e
    JLE 0x004e8517                      ; 004e8530
        ;   XREF to: 004e8517 (CONDITIONAL_JUMP)  ; LAB_004e8517
    CMP ESI,EAX                         ; 004e8532
    JL 0x004e8550                       ; 004e8534
        ;   XREF to: 004e8550 (CONDITIONAL_JUMP)  ; LAB_004e8550
    MOV dword ptr [EBX + 0x108],0x0     ; 004e8536
    SUB ESI,EAX                         ; 004e8540
    TEST ESI,ESI                        ; 004e8542
    JG 0x004e851e                       ; 004e8544
        ;   XREF to: 004e851e (CONDITIONAL_JUMP)  ; LAB_004e851e
    MOV EAX,0x1                         ; 004e8546
    POP EBP                             ; 004e854b
    POP EDI                             ; 004e854c
    POP ESI                             ; 004e854d
    POP EBX                             ; 004e854e
    RET                                 ; 004e854f
    MOV ECX,EAX                         ; 004e8550
        ;   Label: LAB_004e8550
    MOV EBP,dword ptr [EBX + 0x104]     ; 004e8552
    SUB ECX,ESI                         ; 004e8558
    IMUL ESI,EBP                        ; 004e855a
    ADD ESI,ESI                         ; 004e855d
    MOV dword ptr [EBX + 0x108],ECX     ; 004e855f
    ADD EDI,ESI                         ; 004e8565
    MOV dword ptr [EBX + 0x10c],EDI     ; 004e8567
    MOV EAX,0x1                         ; 004e856d
    POP EBP                             ; 004e8572
    POP EDI                             ; 004e8573
    POP ESI                             ; 004e8574
    POP EBX                             ; 004e8575
    RET                                 ; 004e8576

