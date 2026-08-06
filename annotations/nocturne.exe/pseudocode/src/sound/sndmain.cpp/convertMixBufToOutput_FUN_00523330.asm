; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_convertMixBufToOutput_FUN_00523330(float *input_samples,ushort *output_buffer,int bits_per_sample,int num_samples,int output_stride)
;
; Parameters:
; float *          Stack[0x4]:4   input_samples
; ushort *         Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   bits_per_sample
; int              Stack[0x10]:4   num_samples
; int              Stack[0x14]:4   output_stride
; Local Variables:
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
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
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0 at 00529761
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005928a9
;   TerminatedCString s_convertMixBufToOutput_in_005928be
;   float FLOAT_005928ea = 32766
;   float FLOAT_005928ee = 127
;   double DOUBLE_005928f6 = -1
;   float FLOAT_005928fe = 128
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523330
        ;   Label: sound_sndmain.cpp_convertMixBufToOutput_FUN_00523330
    PUSH ESI                            ; 00523331
    PUSH EDI                            ; 00523332
    PUSH EBP                            ; 00523333
    MOV EBP,ESP                         ; 00523334
    SUB ESP,0x34                        ; 00523336
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00523339
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052333c
    MOV dword ptr [EBP + -0x20],EDX     ; 0052333f
    CMP EAX,0x8                         ; 00523342
    JC 0x0052347d                       ; 00523345
        ;   XREF to: 0052347d (CONDITIONAL_JUMP)  ; LAB_0052347d
    JBE 0x005233b9                      ; 0052334b
        ;   XREF to: 005233b9 (CONDITIONAL_JUMP)  ; LAB_005233b9
    CMP EAX,0x10                        ; 0052334d
    JNZ 0x0052347d                      ; 00523350
        ;   XREF to: 0052347d (CONDITIONAL_JUMP)  ; LAB_0052347d
    XOR EDX,EDX                         ; 00523356
    MOV ECX,dword ptr [EBP + 0x20]      ; 00523358
    MOV dword ptr [EBP + -0x4],EDX      ; 0052335b
    TEST ECX,ECX                        ; 0052335e
    JLE 0x005233b2                      ; 00523360
        ;   XREF to: 005233b2 (CONDITIONAL_JUMP)  ; LAB_005233b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00523362
        ;   Label: LAB_00523362
    MOV EAX,dword ptr [EAX]             ; 00523365
    MOV dword ptr [EBP + -0xc],EAX      ; 00523367
    FLD float ptr [EBP + -0xc]          ; 0052336a
    FST double ptr [EBP + -0x34]        ; 0052336d
    FCOMP double ptr [0x005928f6]       ; 00523370 | DOUBLE_005928f6
    FNSTSW AX                           ; 00523376
    SAHF                                ; 00523378
    JBE 0x00523443                      ; 00523379
        ;   XREF to: 00523443 (CONDITIONAL_JUMP)  ; LAB_00523443
    FLD1                                ; 0052337f
    FCOMP double ptr [EBP + -0x34]      ; 00523381
    FNSTSW AX                           ; 00523384
    SAHF                                ; 00523386
    JA 0x00523450                       ; 00523387
        ;   XREF to: 00523450 (CONDITIONAL_JUMP)  ; LAB_00523450
    MOV EAX,dword ptr [EBP + -0x20]     ; 0052338d
    MOV word ptr [EAX],0x7fff           ; 00523390
    MOV EAX,dword ptr [EBP + 0x24]      ; 00523395
        ;   Label: LAB_00523395
    ADD dword ptr [EBP + -0x20],EAX     ; 00523398
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052339b
    MOV ESI,dword ptr [EBP + -0x4]      ; 0052339e
    MOV EDI,dword ptr [EBP + 0x20]      ; 005233a1
    ADD EBX,0x4                         ; 005233a4
    INC ESI                             ; 005233a7
    MOV dword ptr [EBP + 0x14],EBX      ; 005233a8
    MOV dword ptr [EBP + -0x4],ESI      ; 005233ab
    CMP ESI,EDI                         ; 005233ae
    JL 0x00523362                       ; 005233b0
        ;   XREF to: 00523362 (CONDITIONAL_JUMP)  ; LAB_00523362
    MOV ESP,EBP                         ; 005233b2
        ;   Label: LAB_005233b2
    POP EBP                             ; 005233b4
    POP EDI                             ; 005233b5
    POP ESI                             ; 005233b6
    POP EBX                             ; 005233b7
    RET                                 ; 005233b8
    XOR EBX,EBX                         ; 005233b9
        ;   Label: LAB_005233b9
    MOV ESI,dword ptr [EBP + 0x20]      ; 005233bb
    MOV dword ptr [EBP + -0x8],EBX      ; 005233be
    TEST ESI,ESI                        ; 005233c1
    JLE 0x005233b2                      ; 005233c3
        ;   XREF to: 005233b2 (CONDITIONAL_JUMP)  ; LAB_005233b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005233c5
        ;   Label: LAB_005233c5
    MOV EAX,dword ptr [EAX]             ; 005233c8
    MOV dword ptr [EBP + -0x24],EAX     ; 005233ca
    FLD float ptr [EBP + -0x24]         ; 005233cd
    FST double ptr [EBP + -0x2c]        ; 005233d0
    FCOMP double ptr [0x005928f6]       ; 005233d3 | DOUBLE_005928f6
    FNSTSW AX                           ; 005233d9
    SAHF                                ; 005233db
    JBE 0x0052340d                      ; 005233dc
        ;   XREF to: 0052340d (CONDITIONAL_JUMP)  ; LAB_0052340d
    FLD1                                ; 005233de
    FCOMP double ptr [EBP + -0x2c]      ; 005233e0
    FNSTSW AX                           ; 005233e3
    SAHF                                ; 005233e5
    JA 0x00523415                       ; 005233e6
        ;   XREF to: 00523415 (CONDITIONAL_JUMP)  ; LAB_00523415
    MOV EAX,dword ptr [EBP + -0x20]     ; 005233e8
    MOV byte ptr [EAX],0xff             ; 005233eb
    MOV EAX,dword ptr [EBP + 0x24]      ; 005233ee
        ;   Label: LAB_005233ee
    ADD dword ptr [EBP + -0x20],EAX     ; 005233f1
    MOV ECX,dword ptr [EBP + 0x14]      ; 005233f4
    MOV EBX,dword ptr [EBP + -0x8]      ; 005233f7
    MOV ESI,dword ptr [EBP + 0x20]      ; 005233fa
    ADD ECX,0x4                         ; 005233fd
    INC EBX                             ; 00523400
    MOV dword ptr [EBP + 0x14],ECX      ; 00523401
    MOV dword ptr [EBP + -0x8],EBX      ; 00523404
    CMP EBX,ESI                         ; 00523407
    JGE 0x005233b2                      ; 00523409
        ;   XREF to: 005233b2 (CONDITIONAL_JUMP)  ; LAB_005233b2
    JMP 0x005233c5                      ; 0052340b
        ;   XREF to: 005233c5 (UNCONDITIONAL_JUMP)  ; LAB_005233c5
    MOV EAX,dword ptr [EBP + -0x20]     ; 0052340d
        ;   Label: LAB_0052340d
    MOV byte ptr [EAX],0x0              ; 00523410
    JMP 0x005233ee                      ; 00523413
        ;   XREF to: 005233ee (UNCONDITIONAL_JUMP)  ; LAB_005233ee
    FLD float ptr [EBP + -0x24]         ; 00523415
        ;   Label: LAB_00523415
    FMUL float ptr [0x005928ee]         ; 00523418 | FLOAT_005928ee
    FADD float ptr [0x005928fe]         ; 0052341e | FLOAT_005928fe
    FSTP float ptr [EBP + -0x1c]        ; 00523424
    FLD float ptr [EBP + 0xffffffe4]    ; 00523427
    FISTP dword ptr [EBP + 0xffffffe8]  ; 0052342d
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 00523433
    MOV AL,byte ptr [EBP + 0xffffffe8]  ; 00523439
    MOV byte ptr [ECX],AL               ; 0052343f
    JMP 0x005233ee                      ; 00523441
        ;   XREF to: 005233ee (UNCONDITIONAL_JUMP)  ; LAB_005233ee
    MOV EAX,dword ptr [EBP + -0x20]     ; 00523443
        ;   Label: LAB_00523443
    MOV word ptr [EAX],0x8001           ; 00523446
    JMP 0x00523395                      ; 0052344b
        ;   XREF to: 00523395 (UNCONDITIONAL_JUMP)  ; LAB_00523395
    FLD float ptr [EBP + -0xc]          ; 00523450
        ;   Label: LAB_00523450
    FMUL float ptr [0x005928ea]         ; 00523453 | FLOAT_005928ea
    FSTP float ptr [EBP + -0x14]        ; 00523459
    FLD float ptr [EBP + 0xffffffec]    ; 0052345c
    FISTP dword ptr [EBP + 0xfffffff0]  ; 00523462
    MOV ECX,dword ptr [EBP + 0xffffffe0] ; 00523468
    MOV AX,word ptr [EBP + 0xfffffff0]  ; 0052346e
    MOV word ptr [ECX],AX               ; 00523475
    JMP 0x00523395                      ; 00523478
        ;   XREF to: 00523395 (UNCONDITIONAL_JUMP)  ; LAB_00523395
    PUSH EAX                            ; 0052347d
        ;   Label: LAB_0052347d
    MOV EDI,0x5928a9                    ; 0052347e | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x554                       ; 00523483
    PUSH 0x5928be                       ; 00523488 | = "convertMixBufToOutput - invalid bits: %d"
    MOV dword ptr [0x01cc4800],EDI      ; 0052348d | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00523493 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00523499
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 0052349e
    MOV ESP,EBP                         ; 005234a1
    POP EBP                             ; 005234a3
    POP EDI                             ; 005234a4
    POP ESI                             ; 005234a5
    POP EBX                             ; 005234a6
    RET                                 ; 005234a7

