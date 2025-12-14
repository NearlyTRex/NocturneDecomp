; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290()
;
;
; XREF[1]:
;   core_manpuz.cpp_FUN_005091d0 at 005091f7
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_0063571d
;   TerminatedCString s_CMansionPuzzleCircle_pro_00635730
;   undefined4 DAT_00660d90
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_manpuz.cpp_FUN_0050aee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a290
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
    PUSH ESI                            ; 0050a291
    PUSH EBP                            ; 0050a292
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050a293
    MOV ECX,dword ptr [ESP + 0x14]      ; 0050a297
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050a29b
    SUB EAX,ECX                         ; 0050a2a2
    SHL EAX,0x3                         ; 0050a2a4
    ADD EAX,ECX                         ; 0050a2a7
    LEA EBX,[ESI + 0x5f0]               ; 0050a2a9
    SHL EAX,0x2                         ; 0050a2af
    ADD EBX,EAX                         ; 0050a2b2
    CMP dword ptr [EBX],0x0             ; 0050a2b4
    JNZ 0x0050a2c6                      ; 0050a2b7
        ;   XREF to: 0050a2c6 (CONDITIONAL_JUMP)  ; LAB_0050a2c6
    CMP dword ptr [EBX],0x0             ; 0050a2b9
        ;   Label: LAB_0050a2b9
    JZ 0x0050a40b                       ; 0050a2bc
        ;   XREF to: 0050a40b (CONDITIONAL_JUMP)  ; LAB_0050a40b
    POP EBP                             ; 0050a2c2
    POP ESI                             ; 0050a2c3
    POP EBX                             ; 0050a2c4
    RET                                 ; 0050a2c5
    FLD float ptr [EBX + 0x8]           ; 0050a2c6
        ;   Label: LAB_0050a2c6
    FMUL float ptr [ESP + 0x18]         ; 0050a2c9
    FDIV float ptr [0x00660d90]         ; 0050a2cd | DAT_00660d90
    FADD float ptr [EBX + 0x4]          ; 0050a2d3
    FST float ptr [EBX + 0x4]           ; 0050a2d6
    FLDZ                                ; 0050a2d9
    FCOMPP                              ; 0050a2db
    FNSTSW AX                           ; 0050a2dd
    SAHF                                ; 0050a2df
    JBE 0x0050a2f0                      ; 0050a2e0
        ;   XREF to: 0050a2f0 (CONDITIONAL_JUMP)  ; LAB_0050a2f0
    MOV dword ptr [EBX + 0x8],0x0       ; 0050a2e2
    MOV dword ptr [EBX + 0x4],0x0       ; 0050a2e9
    FLD float ptr [EBX + 0x4]           ; 0050a2f0
        ;   Label: LAB_0050a2f0
    FLD1                                ; 0050a2f3
    FCOMPP                              ; 0050a2f5
    FNSTSW AX                           ; 0050a2f7
    SAHF                                ; 0050a2f9
    JA 0x0050a2b9                       ; 0050a2fa
        ;   XREF to: 0050a2b9 (CONDITIONAL_JUMP)  ; LAB_0050a2b9
    PUSH EDI                            ; 0050a2fc
    PUSH ECX                            ; 0050a2fd
    PUSH ESI                            ; 0050a2fe
    CALL core_manpuz.cpp_FUN_0050aee0   ; 0050a2ff
        ;   XREF to: 0050aee0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_0050aee0()
    MOV EDX,EAX                         ; 0050a304
    SHL EAX,0x2                         ; 0050a306
    SUB EAX,EDX                         ; 0050a309
    SHL EAX,0x3                         ; 0050a30b
    ADD EAX,EDX                         ; 0050a30e
    ADD ESI,0x5f0                       ; 0050a310
    SHL EAX,0x2                         ; 0050a316
    ADD ESI,EAX                         ; 0050a319
    MOV EDI,dword ptr [ESI]             ; 0050a31b
    ADD ESP,0x8                         ; 0050a31d
    TEST EDI,EDI                        ; 0050a320
    JZ 0x0050a346                       ; 0050a322
        ;   XREF to: 0050a346 (CONDITIONAL_JUMP)  ; LAB_0050a346
    MOV EBP,0x63571d                    ; 0050a324 | = "..\\core\\manpuz.cpp"
    MOV EAX,0x45d                       ; 0050a329
    PUSH 0x635730                       ; 0050a32e | = "CMansionPuzzleCircle::processPanel - ..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0050a333 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0050a339 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050a33e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050a343
    MOV EAX,ESI                         ; 0050a346
        ;   Label: LAB_0050a346
    MOV ECX,dword ptr [EBX]             ; 0050a348
    MOV EDX,EBX                         ; 0050a34a
    MOV dword ptr [ESI],ECX             ; 0050a34c
    LEA EDI,[EBX + 0xc]                 ; 0050a34e
    FLD float ptr [EBX + 0x4]           ; 0050a351
    LEA ECX,[ESI + 0xc]                 ; 0050a354
    FSTP float ptr [ESI + 0x4]          ; 0050a357
    MOV EBP,dword ptr [EBX + 0x8]       ; 0050a35a
    MOV dword ptr [ESI + 0x8],EBP       ; 0050a35d
    CMP ECX,EDI                         ; 0050a360
    JZ 0x0050a374                       ; 0050a362
        ;   XREF to: 0050a374 (CONDITIONAL_JUMP)  ; LAB_0050a374
    MOV EBP,dword ptr [EDI]             ; 0050a364
    MOV dword ptr [ECX],EBP             ; 0050a366
    MOV EBP,dword ptr [EDI + 0x4]       ; 0050a368
    MOV dword ptr [ECX + 0x4],EBP       ; 0050a36b
    MOV EBP,dword ptr [EDI + 0x8]       ; 0050a36e
    MOV dword ptr [ECX + 0x8],EBP       ; 0050a371
    LEA ECX,[EDX + 0x18]                ; 0050a374
        ;   Label: LAB_0050a374
    LEA EDI,[EAX + 0x18]                ; 0050a377
    CMP EDI,ECX                         ; 0050a37a
    JZ 0x0050a38e                       ; 0050a37c
        ;   XREF to: 0050a38e (CONDITIONAL_JUMP)  ; LAB_0050a38e
    MOV EBP,dword ptr [ECX]             ; 0050a37e
    MOV dword ptr [EDI],EBP             ; 0050a380
    MOV EBP,dword ptr [ECX + 0x4]       ; 0050a382
    MOV dword ptr [EDI + 0x4],EBP       ; 0050a385
    MOV EBP,dword ptr [ECX + 0x8]       ; 0050a388
    MOV dword ptr [EDI + 0x8],EBP       ; 0050a38b
    MOV ECX,dword ptr [EDX + 0x24]      ; 0050a38e
        ;   Label: LAB_0050a38e
    MOV dword ptr [EAX + 0x24],ECX      ; 0050a391
    MOV ECX,dword ptr [EDX + 0x28]      ; 0050a394
    MOV dword ptr [EAX + 0x28],ECX      ; 0050a397
    MOV ECX,dword ptr [EDX + 0x2c]      ; 0050a39a
    MOV dword ptr [EAX + 0x2c],ECX      ; 0050a39d
    MOV ECX,dword ptr [EDX + 0x30]      ; 0050a3a0
    MOV dword ptr [EAX + 0x30],ECX      ; 0050a3a3
    MOV ECX,dword ptr [EDX + 0x34]      ; 0050a3a6
    MOV dword ptr [EAX + 0x34],ECX      ; 0050a3a9
    MOV ECX,dword ptr [EDX + 0x38]      ; 0050a3ac
    MOV dword ptr [EAX + 0x38],ECX      ; 0050a3af
    MOV ECX,dword ptr [EDX + 0x3c]      ; 0050a3b2
    MOV dword ptr [EAX + 0x3c],ECX      ; 0050a3b5
    MOV ECX,dword ptr [EDX + 0x40]      ; 0050a3b8
    MOV dword ptr [EAX + 0x40],ECX      ; 0050a3bb
    MOV ECX,dword ptr [EDX + 0x44]      ; 0050a3be
    MOV dword ptr [EAX + 0x44],ECX      ; 0050a3c1
    MOV ECX,dword ptr [EDX + 0x48]      ; 0050a3c4
    MOV dword ptr [EAX + 0x48],ECX      ; 0050a3c7
    MOV ECX,dword ptr [EDX + 0x4c]      ; 0050a3ca
    MOV dword ptr [EAX + 0x4c],ECX      ; 0050a3cd
    MOV ECX,dword ptr [EDX + 0x50]      ; 0050a3d0
    MOV dword ptr [EAX + 0x50],ECX      ; 0050a3d3
    ADD EAX,0x58                        ; 0050a3d6
    MOV ECX,dword ptr [EDX + 0x54]      ; 0050a3d9
    ADD EDX,0x58                        ; 0050a3dc
    MOV dword ptr [EAX + -0x4],ECX      ; 0050a3df
    CMP EAX,EDX                         ; 0050a3e2
    JZ 0x0050a3f6                       ; 0050a3e4
        ;   XREF to: 0050a3f6 (CONDITIONAL_JUMP)  ; LAB_0050a3f6
    MOV ECX,dword ptr [EDX]             ; 0050a3e6
    MOV dword ptr [EAX],ECX             ; 0050a3e8
    MOV ECX,dword ptr [EDX + 0x4]       ; 0050a3ea
    MOV dword ptr [EAX + 0x4],ECX       ; 0050a3ed
    MOV ECX,dword ptr [EDX + 0x8]       ; 0050a3f0
    MOV dword ptr [EAX + 0x8],ECX       ; 0050a3f3
    MOV dword ptr [ESI + 0x8],0x0       ; 0050a3f6
        ;   Label: LAB_0050a3f6
    MOV dword ptr [ESI + 0x4],0x0       ; 0050a3fd
    MOV dword ptr [EBX],0x0             ; 0050a404
    POP EDI                             ; 0050a40a
    MOV dword ptr [EBX + 0x8],0x0       ; 0050a40b
        ;   Label: LAB_0050a40b
    MOV dword ptr [EBX + 0x4],0x0       ; 0050a412
    POP EBP                             ; 0050a419
    POP ESI                             ; 0050a41a
    POP EBX                             ; 0050a41b
    RET                                 ; 0050a41c

