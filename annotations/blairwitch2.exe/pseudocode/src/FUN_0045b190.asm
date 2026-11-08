; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045b190(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005d05a7
;   TerminatedCString s_Using_auto_health_005d05ad
;   TerminatedCString s_hit_points_3_2f_005d05c0
;   TerminatedCString s_lazdeath0_wav_005d05d3
;   TerminatedCString s_lazhit0_wav_005d05e2
;   undefined4 DAT_005d05ef
;   undefined4 DAT_005f5128
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_00616494
;   undefined4 DAT_006167e0
;   undefined4 DAT_007c158c
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb69dc
;   undefined4 DAT_01cb6aec
;   undefined4 DAT_01cb6b48
;   ... and 1 more
;
; Called Functions:
;   FUN_0040c840
;   FUN_0040c8f0
;   FUN_0040cf60
;   FUN_0040d060
;   FUN_00427fb0
;   FUN_00436710
;   FUN_004bb8b0
;   FUN_004c9cc0
;   FUN_004cfad0
;   FUN_004df010
;   FUN_005035c0
;   FUN_00503620
;   FUN_00550b70
;   FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b190
        ;   Label: FUN_0045b190
    PUSH ESI                            ; 0045b191
    PUSH EDI                            ; 0045b192
    PUSH EBP                            ; 0045b193
    MOV EBP,ESP                         ; 0045b194
    SUB ESP,0x4                         ; 0045b196
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045b199
    MOV ESI,dword ptr [EBP + 0x18]      ; 0045b19c
    MOV EDX,dword ptr [EBX + 0x281c]    ; 0045b19f
    TEST EDX,EDX                        ; 0045b1a5
    JNZ 0x0045b3f3                      ; 0045b1a7
        ;   XREF to: 0045b3f3 (CONDITIONAL_JUMP)  ; LAB_0045b3f3
    MOV EAX,[0x00616494]                ; 0045b1ad | DAT_00616494
    CMP dword ptr [EAX + 0x1ec],0x0     ; 0045b1b2 | DAT_01cb6aec
    JNZ 0x0045b3fa                      ; 0045b1b9
        ;   XREF to: 0045b3fa (CONDITIONAL_JUMP)  ; LAB_0045b3fa
    MOV EAX,[0x00616494]                ; 0045b1bf | DAT_00616494
        ;   Label: LAB_0045b1bf
    MOV EDI,dword ptr [EAX + 0x248]     ; 0045b1c4 | DAT_01cb6b48
    TEST EDI,EDI                        ; 0045b1ca
    JNZ 0x0045b1d1                      ; 0045b1cc
        ;   XREF to: 0045b1d1 (CONDITIONAL_JUMP)  ; LAB_0045b1d1
    MOV dword ptr [ESI + 0x4],EDI       ; 0045b1ce
    PUSH EBX                            ; 0045b1d1
        ;   Label: LAB_0045b1d1
    CALL FUN_004cfad0                   ; 0045b1d2
        ;   XREF to: 004cfad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfad0()
    FLD float ptr [EBX + 0x10a60]       ; 0045b1d7
    FLDZ                                ; 0045b1dd
    ADD ESP,0x4                         ; 0045b1df
    FCOMPP                              ; 0045b1e2
    FNSTSW AX                           ; 0045b1e4
    SAHF                                ; 0045b1e6
    JNC 0x0045b1f3                      ; 0045b1e7
        ;   XREF to: 0045b1f3 (CONDITIONAL_JUMP)  ; LAB_0045b1f3
    CMP dword ptr [ESI + 0x30],0xb      ; 0045b1e9
    JG 0x0045b402                       ; 0045b1ed
        ;   XREF to: 0045b402 (CONDITIONAL_JUMP)  ; LAB_0045b402
    FLD float ptr [0x005f5128]          ; 0045b1f3 | DAT_005f5128
        ;   Label: LAB_0045b1f3
    PUSH 0x5d05a7                       ; 0045b1f9 | = "CBugs"
    FSTP float ptr [EBX + 0x10a60]      ; 0045b1fe
    MOV EDX,dword ptr [ESI + 0x38]      ; 0045b204
    PUSH EDX                            ; 0045b207
    CALL FUN_0040c840                   ; 0045b208
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0045b20d
    TEST EAX,EAX                        ; 0045b210
    JZ 0x0045b21e                       ; 0045b212
        ;   XREF to: 0045b21e (CONDITIONAL_JUMP)  ; LAB_0045b21e
    MOV dword ptr [EBX + 0x10a60],0x3e19999a ; 0045b214
    FLD float ptr [ESI + 0x4]           ; 0045b21e
        ;   Label: LAB_0045b21e
    FSUBR float ptr [EBX + 0x25a8]      ; 0045b221
    MOV EAX,[0x00616494]                ; 0045b227 | DAT_00616494
    FSTP float ptr [EBX + 0x25a8]       ; 0045b22c
    CMP dword ptr [EAX + 0xdc],0x0      ; 0045b232 | DAT_01cb69dc
    JZ 0x0045b29c                       ; 0045b239
        ;   XREF to: 0045b29c (CONDITIONAL_JUMP)  ; LAB_0045b29c
    CMP dword ptr [ESI + 0x30],0xb      ; 0045b23b
    JLE 0x0045b29c                      ; 0045b23f
        ;   XREF to: 0045b29c (CONDITIONAL_JUMP)  ; LAB_0045b29c
    FLD float ptr [EBX + 0x25a8]        ; 0045b241
    FLDZ                                ; 0045b247
    FCOMPP                              ; 0045b249
    FNSTSW AX                           ; 0045b24b
    SAHF                                ; 0045b24d
    JC 0x0045b29c                       ; 0045b24e
        ;   XREF to: 0045b29c (CONDITIONAL_JUMP)  ; LAB_0045b29c
    PUSH 0x5d05ad                       ; 0045b250 | = "Using auto health\n"
    MOV EAX,[0x00609ed0]                ; 0045b255 | PTR_DAT_00609ed0
    PUSH EAX                            ; 0045b25a | DAT_007c158c
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0045b25b
    CALL FUN_00436710                   ; 0045b265
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x8                         ; 0045b26a
    LEA EAX,[EBX + 0x2437c]             ; 0045b26d
    PUSH EAX                            ; 0045b273
    CALL FUN_004df010                   ; 0045b274
        ;   XREF to: 004df010 (UNCONDITIONAL_CALL)  ; undefined FUN_004df010()
    ADD ESP,0x4                         ; 0045b279
    SUB ESP,0x8                         ; 0045b27c
    FLD float ptr [EBX + 0x25a8]        ; 0045b27f
    FSTP double ptr [ESP]               ; 0045b285
    PUSH 0x5d05c0                       ; 0045b288 | = "hit points: %3.2f\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0045b28d | PTR_DAT_00609ed0
    PUSH EDX                            ; 0045b293 | DAT_007c158c
    CALL FUN_00436710                   ; 0045b294
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x10                        ; 0045b299
    FLD float ptr [EBX + 0x25a8]        ; 0045b29c
        ;   Label: LAB_0045b29c
    FLDZ                                ; 0045b2a2
    LEA EDI,[EBX + 0x2b4]               ; 0045b2a4
    FCOMPP                              ; 0045b2aa
    FNSTSW AX                           ; 0045b2ac
    SAHF                                ; 0045b2ae
    JC 0x0045b466                       ; 0045b2af
        ;   XREF to: 0045b466 (CONDITIONAL_JUMP)  ; LAB_0045b466
    PUSH EBX                            ; 0045b2b5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045b2b6
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0045b2bc
    CALL dword ptr [EAX + 0xf8]         ; 0045b2c6
    ADD ESP,0x4                         ; 0045b2cc
    PUSH EDI                            ; 0045b2cf
    CALL FUN_005035c0                   ; 0045b2d0
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045b2d5
    ADD ESP,0x4                         ; 0045b2d8
    CMP EAX,0x2b                        ; 0045b2db
    JZ 0x0045b375                       ; 0045b2de
        ;   XREF to: 0045b375 (CONDITIONAL_JUMP)  ; LAB_0045b375
    PUSH EDI                            ; 0045b2e4
    CALL FUN_005035c0                   ; 0045b2e5
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045b2ea
    ADD ESP,0x4                         ; 0045b2ed
    CMP EAX,0x2a                        ; 0045b2f0
    JZ 0x0045b375                       ; 0045b2f3
        ;   XREF to: 0045b375 (CONDITIONAL_JUMP)  ; LAB_0045b375
    CMP dword ptr [EBX + 0x25614],0x0   ; 0045b2f9
    JZ 0x0045b410                       ; 0045b300
        ;   XREF to: 0045b410 (CONDITIONAL_JUMP)  ; LAB_0045b410
    PUSH 0x1                            ; 0045b306
        ;   Label: LAB_0045b306
    PUSH 0xf                            ; 0045b308
    LEA EAX,[EBX + 0x2b4]               ; 0045b30a
    MOV dword ptr [EBX + 0x25614],0x0   ; 0045b310
    PUSH EAX                            ; 0045b31a
    MOV dword ptr [EBX + 0x25694],0x0   ; 0045b31b
    CALL FUN_00503620                   ; 0045b325
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
        ;   Label: LAB_0045b325
    ADD ESP,0xc                         ; 0045b32a
    MOV EDI,dword ptr [EBX + 0x25754]   ; 0045b32d
    PUSH EDI                            ; 0045b333
    CALL FUN_00551050                   ; 0045b334
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    MOV EAX,dword ptr [ESI + 0x30]      ; 0045b339
    ADD ESP,0x4                         ; 0045b33c
    CMP EAX,0x1                         ; 0045b33f
    JZ 0x0045b35c                       ; 0045b342
        ;   XREF to: 0045b35c (CONDITIONAL_JUMP)  ; LAB_0045b35c
    PUSH 0x5d05d3                       ; 0045b344 | = "lazdeath0?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045b349
    PUSH EBX                            ; 0045b34f
    CALL dword ptr [EAX + 0x34]         ; 0045b350
    ADD ESP,0x8                         ; 0045b353
    MOV dword ptr [EBX + 0x25754],EAX   ; 0045b356
    PUSH 0x0                            ; 0045b35c
        ;   Label: LAB_0045b35c
    PUSH 0x42480000                     ; 0045b35e
    PUSH 0x32                           ; 0045b363
    PUSH EBX                            ; 0045b365
    MOV EDX,dword ptr [0x006167e0]      ; 0045b366 | DAT_006167e0
    PUSH EDX                            ; 0045b36c
    CALL FUN_004c9cc0                   ; 0045b36d
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9cc0()
    ADD ESP,0x14                        ; 0045b372
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0045b375
        ;   Label: LAB_0045b375
    CMP ECX,dword ptr [EBX + 0x2620]    ; 0045b37b
    JNZ 0x0045b38d                      ; 0045b381
        ;   XREF to: 0045b38d (CONDITIONAL_JUMP)  ; LAB_0045b38d
    MOV dword ptr [EBX + 0x25698],0x0   ; 0045b383
    PUSH 0x0                            ; 0045b38d
        ;   Label: LAB_0045b38d
    PUSH 0x0                            ; 0045b38f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045b391
    PUSH EBX                            ; 0045b397
    CALL dword ptr [EAX + 0x130]        ; 0045b398
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0045b39e
    MOV EDI,dword ptr [EBX + 0x25698]   ; 0045b3a4
    ADD ESP,0xc                         ; 0045b3aa
    CMP EAX,EDI                         ; 0045b3ad
    JNZ 0x0045b3bb                      ; 0045b3af
        ;   XREF to: 0045b3bb (CONDITIONAL_JUMP)  ; LAB_0045b3bb
    MOV dword ptr [EBX + 0x25698],0x0   ; 0045b3b1
    PUSH 0x0                            ; 0045b3bb
        ;   Label: LAB_0045b3bb
    PUSH 0x1                            ; 0045b3bd
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045b3bf
    PUSH EBX                            ; 0045b3c5
    CALL dword ptr [EAX + 0x130]        ; 0045b3c6
    ADD ESP,0xc                         ; 0045b3cc
    FLD float ptr [ESI + 0x4]           ; 0045b3cf
        ;   Label: LAB_0045b3cf
    FLDZ                                ; 0045b3d2
    FCOMPP                              ; 0045b3d4
    FNSTSW AX                           ; 0045b3d6
    SAHF                                ; 0045b3d8
    JNC 0x0045b3e9                      ; 0045b3d9
        ;   XREF to: 0045b3e9 (CONDITIONAL_JUMP)  ; LAB_0045b3e9
    MOV EAX,[0x00616494]                ; 0045b3db | DAT_00616494
    PUSH EAX                            ; 0045b3e0 | DAT_01cb6900
    CALL FUN_004bb8b0                   ; 0045b3e1
        ;   XREF to: 004bb8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb8b0()
    ADD ESP,0x4                         ; 0045b3e6
    PUSH ESI                            ; 0045b3e9
        ;   Label: LAB_0045b3e9
    PUSH EBX                            ; 0045b3ea
    CALL FUN_00427fb0                   ; 0045b3eb
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427fb0()
    ADD ESP,0x8                         ; 0045b3f0
    MOV ESP,EBP                         ; 0045b3f3
        ;   Label: LAB_0045b3f3
    POP EBP                             ; 0045b3f5
    POP EDI                             ; 0045b3f6
    POP ESI                             ; 0045b3f7
    POP EBX                             ; 0045b3f8
    RET                                 ; 0045b3f9
    MOV dword ptr [ESI + 0x4],EDX       ; 0045b3fa
        ;   Label: LAB_0045b3fa
    JMP 0x0045b1bf                      ; 0045b3fd
        ;   XREF to: 0045b1bf (UNCONDITIONAL_JUMP)  ; LAB_0045b1bf
    MOV dword ptr [ESI + 0x4],0x0       ; 0045b402
        ;   Label: LAB_0045b402
    MOV ESP,EBP                         ; 0045b409
    POP EBP                             ; 0045b40b
    POP EDI                             ; 0045b40c
    POP ESI                             ; 0045b40d
    POP EBX                             ; 0045b40e
    RET                                 ; 0045b40f
    CMP dword ptr [EBX + 0x25694],0x0   ; 0045b410
        ;   Label: LAB_0045b410
    JNZ 0x0045b306                      ; 0045b417
        ;   XREF to: 0045b306 (CONDITIONAL_JUMP)  ; LAB_0045b306
    MOV ECX,dword ptr [ESI + 0x30]      ; 0045b41d
    CMP ECX,0x1                         ; 0045b420
    JNZ 0x0045b42e                      ; 0045b423
        ;   XREF to: 0045b42e (CONDITIONAL_JUMP)  ; LAB_0045b42e
    PUSH ECX                            ; 0045b425
    PUSH 0x29                           ; 0045b426
    PUSH EDI                            ; 0045b428
    JMP 0x0045b325                      ; 0045b429
        ;   XREF to: 0045b325 (UNCONDITIONAL_JUMP)  ; LAB_0045b325
    PUSH 0x1                            ; 0045b42e
        ;   Label: LAB_0045b42e
    PUSH 0x42c80000                     ; 0045b430
    PUSH 0x0                            ; 0045b435
    CALL FUN_0040cf60                   ; 0045b437
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + -0x4],EAX      ; 0045b43c
    ADD ESP,0x8                         ; 0045b43f
    FLD float ptr [EBP + -0x4]          ; 0045b442
    FCOMP float ptr [0x005d05ef]        ; 0045b445 | DAT_005d05ef
    FNSTSW AX                           ; 0045b44b
    SAHF                                ; 0045b44d
    SETBE AL                            ; 0045b44e
    AND EAX,0xff                        ; 0045b451
    ADD EAX,0x27                        ; 0045b456
    PUSH EAX                            ; 0045b459
    LEA EAX,[EBX + 0x2b4]               ; 0045b45a
    PUSH EAX                            ; 0045b460
    JMP 0x0045b325                      ; 0045b461
        ;   XREF to: 0045b325 (UNCONDITIONAL_JUMP)  ; LAB_0045b325
    FLD float ptr [ESI + 0x4]           ; 0045b466
        ;   Label: LAB_0045b466
    FLDZ                                ; 0045b469
    FCOMPP                              ; 0045b46b
    FNSTSW AX                           ; 0045b46d
    SAHF                                ; 0045b46f
    JNC 0x0045b3cf                      ; 0045b470
        ;   XREF to: 0045b3cf (CONDITIONAL_JUMP)  ; LAB_0045b3cf
    CMP dword ptr [ESI + 0x30],0x69     ; 0045b476
    JZ 0x0045b4cb                       ; 0045b47a
        ;   XREF to: 0045b4cb (CONDITIONAL_JUMP)  ; LAB_0045b4cb
    CMP dword ptr [EBX + 0x25614],0x0   ; 0045b47c
    JNZ 0x0045b4cb                      ; 0045b483
        ;   XREF to: 0045b4cb (CONDITIONAL_JUMP)  ; LAB_0045b4cb
    CMP dword ptr [EBX + 0x25694],0x0   ; 0045b485
    JNZ 0x0045b4cb                      ; 0045b48c
        ;   XREF to: 0045b4cb (CONDITIONAL_JUMP)  ; LAB_0045b4cb
    CMP dword ptr [EBX + 0x256a4],0x0   ; 0045b48e
    JNZ 0x0045b4cb                      ; 0045b495
        ;   XREF to: 0045b4cb (CONDITIONAL_JUMP)  ; LAB_0045b4cb
    MOV EAX,[0x02653574]                ; 0045b497 | DAT_02653574
    PUSH EAX                            ; 0045b49c
    MOV EDX,dword ptr [ESI + 0x34]      ; 0045b49d
    PUSH EDX                            ; 0045b4a0
    CALL FUN_0040c8f0                   ; 0045b4a1
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 0045b4a6
    TEST EAX,EAX                        ; 0045b4a9
    JZ 0x0045b4ff                       ; 0045b4ab
        ;   XREF to: 0045b4ff (CONDITIONAL_JUMP)  ; LAB_0045b4ff
    PUSH 0x3eaa7efa                     ; 0045b4ad
    CALL FUN_0040d060                   ; 0045b4b2
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
        ;   Label: LAB_0045b4b2
    ADD ESP,0x4                         ; 0045b4b7
    TEST EAX,EAX                        ; 0045b4ba
    JZ 0x0045b4cb                       ; 0045b4bc
        ;   XREF to: 0045b4cb (CONDITIONAL_JUMP)  ; LAB_0045b4cb
    PUSH 0x1                            ; 0045b4be
    PUSH 0x26                           ; 0045b4c0
    PUSH EDI                            ; 0045b4c2
    CALL FUN_00503620                   ; 0045b4c3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0045b4c8
    MOV ECX,dword ptr [EBX + 0x25754]   ; 0045b4cb
        ;   Label: LAB_0045b4cb
    PUSH ECX                            ; 0045b4d1
    CALL FUN_00550b70                   ; 0045b4d2
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 0045b4d7
    TEST EAX,EAX                        ; 0045b4da
    JNZ 0x0045b3cf                      ; 0045b4dc
        ;   XREF to: 0045b3cf (CONDITIONAL_JUMP)  ; LAB_0045b3cf
    PUSH 0x5d05e2                       ; 0045b4e2 | = "lazhit0?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045b4e7
    PUSH EBX                            ; 0045b4ed
    CALL dword ptr [EAX + 0x34]         ; 0045b4ee
    ADD ESP,0x8                         ; 0045b4f1
    MOV dword ptr [EBX + 0x25754],EAX   ; 0045b4f4
    JMP 0x0045b3cf                      ; 0045b4fa
        ;   XREF to: 0045b3cf (UNCONDITIONAL_JUMP)  ; LAB_0045b3cf
    PUSH 0x3ecccccd                     ; 0045b4ff
        ;   Label: LAB_0045b4ff
    JMP 0x0045b4b2                      ; 0045b504
        ;   XREF to: 0045b4b2 (UNCONDITIONAL_JUMP)  ; LAB_0045b4b2

