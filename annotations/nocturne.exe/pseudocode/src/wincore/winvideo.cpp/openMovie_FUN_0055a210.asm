; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_openMovie_FUN_0055a210(HWND parent_window,char *movie_filename)
;
; Parameters:
; HWND             Stack[0x4]:4   parent_window
; char *           Stack[0x8]:4   movie_filename
; Local Variables:
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined1       Stack[-0xaf]:1  local_af
; undefined1       Stack[-0xae]:1  local_ae
; undefined1       Stack[-0xad]:1  local_ad
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0xab]:1  local_ab
; undefined1       Stack[-0xaa]:1  local_aa
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_mciGetErrorStringA_005753dc = 00175800
;   void* PTR_mciSendStringA_005753e0 = 00175816
;   void* PTR_GetClientRect_0057542c = 0017595c
;   void* PTR_MessageBoxA_0057544c = 001759e0
;   void* PTR_MoveWindow_00575450 = 001759ee
;   void* PTR_SetRectEmpty_00575478 = 00175a92
;   TerminatedCString s_where_mov_source_0059817e
;   TerminatedCString s_open_s_alias_mov_style_c_00598199
;   TerminatedCString s_status_mov_window_handle_005981c3
;   TerminatedCString s_Unable_to_open_AVI_005981dc
;   undefined4 DAT_02de311c
;   undefined4 DAT_02de3124
;   undefined4 DAT_02de312c
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdlib.c_atoi_FUN_00566f30
;   GetClientRect
;   mciGetErrorStringA
;   mciSendStringA
;   MessageBoxA
;   MoveWindow
;   SetRectEmpty
;   wincore_winvideo.cpp_closeMovie_FUN_0055a1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a210
        ;   Label: wincore_winvideo.cpp_openMovie_FUN_0055a210
    PUSH ESI                            ; 0055a211
    PUSH EDI                            ; 0055a212
    PUSH EBP                            ; 0055a213
    SUB ESP,0x1a4                       ; 0055a214
    MOV EBX,dword ptr [ESP + 0x1b8]     ; 0055a21a
    CMP dword ptr [0x02de3124],0x0      ; 0055a221 | DAT_02de3124
    JZ 0x0055a233                       ; 0055a228
        ;   XREF to: 0055a233 (CONDITIONAL_JUMP)  ; LAB_0055a233
    PUSH EBX                            ; 0055a22a
    CALL wincore_winvideo.cpp_closeMovie_FUN_0055a1c0 ; 0055a22b
        ;   XREF to: 0055a1c0 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_0055a1c0(HWND window_handle)
    ADD ESP,0x4                         ; 0055a230
    PUSH EBX                            ; 0055a233
        ;   Label: LAB_0055a233
    MOV ECX,dword ptr [ESP + 0x1c0]     ; 0055a234
    PUSH ECX                            ; 0055a23b
    PUSH 0x598199                       ; 0055a23c | = "open \"%s\" alias mov style child par..."
    LEA EAX,[ESP + 0xc]                 ; 0055a241
    PUSH EAX                            ; 0055a245
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0055a246
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0055a24b
    PUSH 0x0                            ; 0055a24e
    PUSH 0x0                            ; 0055a250
    PUSH 0x0                            ; 0055a252
    LEA EAX,[ESP + 0xc]                 ; 0055a254
    PUSH EAX                            ; 0055a258
    CALL dword ptr CS:[0x5753e0]        ; 0055a259 | PTR_mciSendStringA_005753e0
    TEST EAX,EAX                        ; 0055a260
    JNZ 0x0055a470                      ; 0055a262
        ;   XREF to: 0055a470 (CONDITIONAL_JUMP)  ; LAB_0055a470
    PUSH EAX                            ; 0055a268
    PUSH 0x104                          ; 0055a269
    LEA EAX,[ESP + 0x8]                 ; 0055a26e
    PUSH EAX                            ; 0055a272
    MOV ESI,0x1                         ; 0055a273
    PUSH 0x5981c3                       ; 0055a278 | = "status mov window handle"
    MOV dword ptr [0x02de3124],ESI      ; 0055a27d | DAT_02de3124
    CALL dword ptr CS:[0x5753e0]        ; 0055a283 | PTR_mciSendStringA_005753e0
    TEST EAX,EAX                        ; 0055a28a
    JNZ 0x0055a2bc                      ; 0055a28c
        ;   XREF to: 0055a2bc (CONDITIONAL_JUMP)  ; LAB_0055a2bc
    MOV EAX,ESP                         ; 0055a28e
    PUSH EAX                            ; 0055a290
    CALL crt_stdlib.c_atoi_FUN_00566f30 ; 0055a291
        ;   XREF to: 00566f30 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_00566f30(char * string_ptr)
    ADD ESP,0x4                         ; 0055a296
    MOV [0x02de311c],EAX                ; 0055a299 | DAT_02de311c
    MOV EDI,dword ptr [0x02de312c]      ; 0055a29e | DAT_02de312c
        ;   Label: LAB_0055a29e
    TEST EDI,EDI                        ; 0055a2a4
    JNZ 0x0055a2b1                      ; 0055a2a6
        ;   XREF to: 0055a2b1 (CONDITIONAL_JUMP)  ; LAB_0055a2b1
    CMP dword ptr [0x02de3124],0x0      ; 0055a2a8 | DAT_02de3124
    JNZ 0x0055a2e1                      ; 0055a2af
        ;   XREF to: 0055a2e1 (CONDITIONAL_JUMP)  ; LAB_0055a2e1
    ADD ESP,0x1a4                       ; 0055a2b1
        ;   Label: LAB_0055a2b1
    POP EBP                             ; 0055a2b7
    POP EDI                             ; 0055a2b8
    POP ESI                             ; 0055a2b9
    POP EBX                             ; 0055a2ba
    RET                                 ; 0055a2bb
    PUSH 0x104                          ; 0055a2bc
        ;   Label: LAB_0055a2bc
    LEA EDX,[ESP + 0x4]                 ; 0055a2c1
    PUSH EDX                            ; 0055a2c5
    PUSH EAX                            ; 0055a2c6
    CALL dword ptr CS:[0x5753dc]        ; 0055a2c7 | PTR_mciGetErrorStringA_005753dc
    PUSH 0x30                           ; 0055a2ce
    PUSH 0x0                            ; 0055a2d0
    LEA EAX,[ESP + 0x8]                 ; 0055a2d2
    PUSH EAX                            ; 0055a2d6
    PUSH EBX                            ; 0055a2d7
    CALL dword ptr CS:[0x57544c]        ; 0055a2d8 | PTR_MessageBoxA_0057544c
    JMP 0x0055a29e                      ; 0055a2df
        ;   XREF to: 0055a29e (UNCONDITIONAL_JUMP)  ; LAB_0055a29e
    LEA EAX,[ESP + 0x194]               ; 0055a2e1
        ;   Label: LAB_0055a2e1
    PUSH EAX                            ; 0055a2e8
    PUSH EBX                            ; 0055a2e9
    CALL dword ptr CS:[0x57542c]        ; 0055a2ea | PTR_GetClientRect_0057542c
    PUSH EDI                            ; 0055a2f1
    PUSH 0x80                           ; 0055a2f2
    LEA EAX,[ESP + 0x10c]               ; 0055a2f7
    PUSH EAX                            ; 0055a2fe
    PUSH 0x59817e                       ; 0055a2ff | = "where mov source"
    CALL dword ptr CS:[0x5753e0]        ; 0055a304 | PTR_mciSendStringA_005753e0
    LEA EAX,[ESP + 0x184]               ; 0055a30b
    PUSH EAX                            ; 0055a312
    CALL dword ptr CS:[0x575478]        ; 0055a313 | PTR_SetRectEmpty_00575478
    MOV DL,byte ptr [ESP + 0x104]       ; 0055a31a
    LEA EAX,[ESP + 0x104]               ; 0055a321
    CMP DL,0x20                         ; 0055a328
    JNZ 0x0055a340                      ; 0055a32b
        ;   XREF to: 0055a340 (CONDITIONAL_JUMP)  ; LAB_0055a340
    MOV DH,byte ptr [EAX + 0x1]         ; 0055a32d
        ;   Label: LAB_0055a32d
    INC EAX                             ; 0055a330
    CMP DH,0x20                         ; 0055a331
    JZ 0x0055a32d                       ; 0055a334
        ;   XREF to: 0055a32d (CONDITIONAL_JUMP)  ; LAB_0055a32d
    LEA EAX,[EAX]                       ; 0055a336
    LEA EDX,[EDX]                       ; 0055a33c
    CMP byte ptr [EAX],0x20             ; 0055a340
        ;   Label: LAB_0055a340
    JZ 0x0055a348                       ; 0055a343
        ;   XREF to: 0055a348 (CONDITIONAL_JUMP)  ; LAB_0055a348
    INC EAX                             ; 0055a345
    JMP 0x0055a340                      ; 0055a346
        ;   XREF to: 0055a340 (UNCONDITIONAL_JUMP)  ; LAB_0055a340
    CMP byte ptr [EAX],0x20             ; 0055a348
        ;   Label: LAB_0055a348
    JNZ 0x0055a350                      ; 0055a34b
        ;   XREF to: 0055a350 (CONDITIONAL_JUMP)  ; LAB_0055a350
    INC EAX                             ; 0055a34d
    JMP 0x0055a348                      ; 0055a34e
        ;   XREF to: 0055a348 (UNCONDITIONAL_JUMP)  ; LAB_0055a348
    CMP byte ptr [EAX],0x20             ; 0055a350
        ;   Label: LAB_0055a350
    JZ 0x0055a358                       ; 0055a353
        ;   XREF to: 0055a358 (CONDITIONAL_JUMP)  ; LAB_0055a358
    INC EAX                             ; 0055a355
    JMP 0x0055a350                      ; 0055a356
        ;   XREF to: 0055a350 (UNCONDITIONAL_JUMP)  ; LAB_0055a350
    CMP byte ptr [EAX],0x20             ; 0055a358
        ;   Label: LAB_0055a358
    JNZ 0x0055a379                      ; 0055a35b
        ;   XREF to: 0055a379 (CONDITIONAL_JUMP)  ; LAB_0055a379
    INC EAX                             ; 0055a35d
    JMP 0x0055a358                      ; 0055a35e
        ;   XREF to: 0055a358 (UNCONDITIONAL_JUMP)  ; LAB_0055a358
    IMUL EDX,dword ptr [ESP + 0x18c],0xa ; 0055a360
        ;   Label: LAB_0055a360
    XOR ECX,ECX                         ; 0055a368
    MOV CL,byte ptr [EAX]               ; 0055a36a
    SUB ECX,0x30                        ; 0055a36c
    ADD EDX,ECX                         ; 0055a36f
    INC EAX                             ; 0055a371
    MOV dword ptr [ESP + 0x18c],EDX     ; 0055a372
    MOV DL,byte ptr [EAX]               ; 0055a379
        ;   Label: LAB_0055a379
    CMP DL,0x30                         ; 0055a37b
    JNC 0x0055a388                      ; 0055a37e
        ;   XREF to: 0055a388 (CONDITIONAL_JUMP)  ; LAB_0055a388
    CMP byte ptr [EAX],0x20             ; 0055a380
        ;   Label: LAB_0055a380
    JNZ 0x0055a3a8                      ; 0055a383
        ;   XREF to: 0055a3a8 (CONDITIONAL_JUMP)  ; LAB_0055a3a8
    INC EAX                             ; 0055a385
    JMP 0x0055a380                      ; 0055a386
        ;   XREF to: 0055a380 (UNCONDITIONAL_JUMP)  ; LAB_0055a380
    CMP DL,0x39                         ; 0055a388
        ;   Label: LAB_0055a388
    JBE 0x0055a360                      ; 0055a38b
        ;   XREF to: 0055a360 (CONDITIONAL_JUMP)  ; LAB_0055a360
    JMP 0x0055a380                      ; 0055a38d
        ;   XREF to: 0055a380 (UNCONDITIONAL_JUMP)  ; LAB_0055a380
    IMUL ECX,dword ptr [ESP + 0x190],0xa ; 0055a38f
        ;   Label: LAB_0055a38f
    XOR EDX,EDX                         ; 0055a397
    MOV DL,byte ptr [EAX]               ; 0055a399
    SUB EDX,0x30                        ; 0055a39b
    ADD ECX,EDX                         ; 0055a39e
    INC EAX                             ; 0055a3a0
    MOV dword ptr [ESP + 0x190],ECX     ; 0055a3a1
    MOV BH,byte ptr [EAX]               ; 0055a3a8
        ;   Label: LAB_0055a3a8
    CMP BH,0x30                         ; 0055a3aa
    JC 0x0055a3b4                       ; 0055a3ad
        ;   XREF to: 0055a3b4 (CONDITIONAL_JUMP)  ; LAB_0055a3b4
    CMP BH,0x39                         ; 0055a3af
    JBE 0x0055a38f                      ; 0055a3b2
        ;   XREF to: 0055a38f (CONDITIONAL_JUMP)  ; LAB_0055a38f
    CMP dword ptr [ESP + 0x19c],0x190   ; 0055a3b4
        ;   Label: LAB_0055a3b4
    JLE 0x0055a45a                      ; 0055a3bf
        ;   XREF to: 0055a45a (CONDITIONAL_JUMP)  ; LAB_0055a45a
    MOV EBP,dword ptr [ESP + 0x18c]     ; 0055a3c5
        ;   Label: LAB_0055a3c5
    MOV EDI,dword ptr [ESP + 0x190]     ; 0055a3cc
    ADD EBP,EBP                         ; 0055a3d3
    ADD EDI,EDI                         ; 0055a3d5
    MOV dword ptr [ESP + 0x18c],EBP     ; 0055a3d7
    MOV dword ptr [ESP + 0x190],EDI     ; 0055a3de
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0055a3e5
        ;   Label: LAB_0055a3e5
    MOV EDX,EAX                         ; 0055a3ec
    SAR EDX,0x1f                        ; 0055a3ee
    SUB EAX,EDX                         ; 0055a3f1
    SAR EAX,0x1                         ; 0055a3f3
    MOV EBX,EAX                         ; 0055a3f5
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0055a3f7
    MOV EDX,EAX                         ; 0055a3fe
    SAR EDX,0x1f                        ; 0055a400
    SUB EAX,EDX                         ; 0055a403
    SAR EAX,0x1                         ; 0055a405
    SUB EBX,EAX                         ; 0055a407
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0055a409
    MOV EDX,EAX                         ; 0055a410
    SAR EDX,0x1f                        ; 0055a412
    SUB EAX,EDX                         ; 0055a415
    SAR EAX,0x1                         ; 0055a417
    MOV ECX,EAX                         ; 0055a419
    MOV EAX,dword ptr [ESP + 0x190]     ; 0055a41b
    MOV EDX,EAX                         ; 0055a422
    SAR EDX,0x1f                        ; 0055a424
    SUB EAX,EDX                         ; 0055a427
    SAR EAX,0x1                         ; 0055a429
    PUSH 0x1                            ; 0055a42b
    SUB ECX,EAX                         ; 0055a42d
    MOV EAX,dword ptr [ESP + 0x194]     ; 0055a42f
    PUSH EAX                            ; 0055a436
    MOV EDX,dword ptr [ESP + 0x194]     ; 0055a437
    PUSH EDX                            ; 0055a43e
    PUSH ECX                            ; 0055a43f
    PUSH EBX                            ; 0055a440
    MOV ECX,dword ptr [0x02de311c]      ; 0055a441 | DAT_02de311c
    PUSH ECX                            ; 0055a447
    CALL dword ptr CS:[0x575450]        ; 0055a448 | PTR_MoveWindow_00575450
    ADD ESP,0x1a4                       ; 0055a44f
    POP EBP                             ; 0055a455
    POP EDI                             ; 0055a456
    POP ESI                             ; 0055a457
    POP EBX                             ; 0055a458
    RET                                 ; 0055a459
    CMP dword ptr [ESP + 0x1a0],0x12c   ; 0055a45a
        ;   Label: LAB_0055a45a
    JG 0x0055a3c5                       ; 0055a465
        ;   XREF to: 0055a3c5 (CONDITIONAL_JUMP)  ; LAB_0055a3c5
    JMP 0x0055a3e5                      ; 0055a46b
        ;   XREF to: 0055a3e5 (UNCONDITIONAL_JUMP)  ; LAB_0055a3e5
    PUSH 0x30                           ; 0055a470
        ;   Label: LAB_0055a470
    PUSH 0x0                            ; 0055a472
    PUSH 0x5981dc                       ; 0055a474 | = "Unable to open .AVI!"
    PUSH EBX                            ; 0055a479
    XOR EBX,EBX                         ; 0055a47a
    CALL dword ptr CS:[0x57544c]        ; 0055a47c | PTR_MessageBoxA_0057544c
    MOV dword ptr [0x02de3124],EBX      ; 0055a483 | DAT_02de3124
    ADD ESP,0x1a4                       ; 0055a489
    POP EBP                             ; 0055a48f
    POP EDI                             ; 0055a490
    POP ESI                             ; 0055a491
    POP EBX                             ; 0055a492
    RET                                 ; 0055a493

