; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00440260(byte *param_1,int param_2,uint param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   support_codec.cpp_FUN_00440ef0 at 00440f54
;   support_codec.cpp_FUN_00441610 at 0044164a
;
; Called Functions:
;   support_codec.cpp_FUN_00440400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440260
        ;   Label: support_codec.cpp_FUN_00440260
    PUSH ESI                            ; 00440261
    PUSH EDI                            ; 00440262
    PUSH EBP                            ; 00440263
    SUB ESP,0x4                         ; 00440264
    MOV EDI,dword ptr [ESP + 0x18]      ; 00440267
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044026b
    MOV ESI,dword ptr [ESP + 0x24]      ; 0044026f
    PUSH ESI                            ; 00440273
    PUSH EDI                            ; 00440274
    CALL support_codec.cpp_FUN_00440400 ; 00440275
        ;   XREF to: 00440400 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00440400()
    ADD ESP,0x8                         ; 0044027a
    TEST EAX,EAX                        ; 0044027d
    JL 0x004402b9                       ; 0044027f
        ;   XREF to: 004402b9 (CONDITIONAL_JUMP)  ; LAB_004402b9
    MOV EDX,dword ptr [EDI]             ; 00440281
    TEST EDX,EDX                        ; 00440283
    JLE 0x00440366                      ; 00440285
        ;   XREF to: 00440366 (CONDITIONAL_JUMP)  ; LAB_00440366
    MOV EAX,0x8                         ; 0044028b
    SUB EAX,EDX                         ; 00440290
    MOV dword ptr [ESP],EAX             ; 00440292
    CMP EBX,EAX                         ; 00440295
    JGE 0x004402f2                      ; 00440297
        ;   XREF to: 004402f2 (CONDITIONAL_JUMP)  ; LAB_004402f2
    MOV EAX,dword ptr [ESP + 0x20]      ; 00440299
    MOV CL,byte ptr [EDI]               ; 0044029d
    MOV EDX,dword ptr [EDI + 0x4]       ; 0044029f
    SHL EAX,CL                          ; 004402a2
    MOV ECX,dword ptr [EDI]             ; 004402a4
    OR EDX,EAX                          ; 004402a6
    ADD ECX,EBX                         ; 004402a8
    MOV dword ptr [EDI + 0x4],EDX       ; 004402aa
    XOR EAX,EAX                         ; 004402ad
    MOV dword ptr [EDI],ECX             ; 004402af
    ADD ESP,0x4                         ; 004402b1
        ;   Label: LAB_004402b1
    POP EBP                             ; 004402b4
    POP EDI                             ; 004402b5
    POP ESI                             ; 004402b6
    POP EBX                             ; 004402b7
    RET                                 ; 004402b8
    CMP EAX,-0x1                        ; 004402b9
        ;   Label: LAB_004402b9
    JNZ 0x004402eb                      ; 004402bc
        ;   XREF to: 004402eb (CONDITIONAL_JUMP)  ; LAB_004402eb
    MOV EAX,dword ptr [EDI]             ; 004402be
    ADD EAX,EBX                         ; 004402c0
    CMP EAX,0x20                        ; 004402c2
    JL 0x004402ce                       ; 004402c5
        ;   XREF to: 004402ce (CONDITIONAL_JUMP)  ; LAB_004402ce
    MOV EAX,0xffffffff                  ; 004402c7
        ;   Label: LAB_004402c7
    JMP 0x004402b1                      ; 004402cc
        ;   XREF to: 004402b1 (UNCONDITIONAL_JUMP)  ; LAB_004402b1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004402ce
        ;   Label: LAB_004402ce
    MOV CL,byte ptr [EDI]               ; 004402d2
    MOV ESI,dword ptr [EDI + 0x4]       ; 004402d4
    MOV EBP,dword ptr [EDI]             ; 004402d7
    SHL EAX,CL                          ; 004402d9
    ADD EBP,EBX                         ; 004402db
    OR ESI,EAX                          ; 004402dd
    MOV dword ptr [EDI],EBP             ; 004402df
    MOV EAX,0xfffffffe                  ; 004402e1
    MOV dword ptr [EDI + 0x4],ESI       ; 004402e6
    JMP 0x004402b1                      ; 004402e9
        ;   XREF to: 004402b1 (UNCONDITIONAL_JUMP)  ; LAB_004402b1
    MOV EAX,0xfffffffd                  ; 004402eb
        ;   Label: LAB_004402eb
    JMP 0x004402b1                      ; 004402f0
        ;   XREF to: 004402b1 (UNCONDITIONAL_JUMP)  ; LAB_004402b1
    MOV AL,byte ptr [ESP + 0x20]        ; 004402f2
        ;   Label: LAB_004402f2
    MOV CL,byte ptr [EDI]               ; 004402f6
    SHL AL,CL                           ; 004402f8
    MOV AH,byte ptr [EDI + 0x4]         ; 004402fa
    MOV EDX,dword ptr [ESI]             ; 004402fd
    OR AL,AH                            ; 004402ff
    AND EAX,0xff                        ; 00440301
    PUSH EAX                            ; 00440306
    PUSH ESI                            ; 00440307
    CALL dword ptr [EDX + 0x4]          ; 00440308
    ADD ESP,0x8                         ; 0044030b
    CMP EAX,-0x1                        ; 0044030e
    JNZ 0x0044033f                      ; 00440311
        ;   XREF to: 0044033f (CONDITIONAL_JUMP)  ; LAB_0044033f
    MOV EAX,dword ptr [EDI]             ; 00440313
    ADD EAX,EBX                         ; 00440315
    CMP EAX,0x20                        ; 00440317
    JGE 0x004402c7                      ; 0044031a
        ;   XREF to: 004402c7 (CONDITIONAL_JUMP)  ; LAB_004402c7
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044031c
    MOV CL,byte ptr [EDI]               ; 00440320
    MOV ESI,dword ptr [EDI + 0x4]       ; 00440322
    MOV EBP,dword ptr [EDI]             ; 00440325
    SHL EAX,CL                          ; 00440327
    ADD EBP,EBX                         ; 00440329
    OR ESI,EAX                          ; 0044032b
    MOV dword ptr [EDI],EBP             ; 0044032d
    MOV EAX,0xfffffffe                  ; 0044032f
    MOV dword ptr [EDI + 0x4],ESI       ; 00440334
    ADD ESP,0x4                         ; 00440337
    POP EBP                             ; 0044033a
    POP EDI                             ; 0044033b
    POP ESI                             ; 0044033c
    POP EBX                             ; 0044033d
    RET                                 ; 0044033e
    TEST EAX,EAX                        ; 0044033f
        ;   Label: LAB_0044033f
    JL 0x004402eb                       ; 00440341
        ;   XREF to: 004402eb (CONDITIONAL_JUMP)  ; LAB_004402eb
    MOV EAX,dword ptr [ESP]             ; 00440343
    CMP EBX,EAX                         ; 00440346
    JZ 0x0044039c                       ; 00440348
        ;   XREF to: 0044039c (CONDITIONAL_JUMP)  ; LAB_0044039c
    MOV CL,byte ptr [ESP]               ; 0044034a
    MOV dword ptr [EDI],0x0             ; 0044034d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00440353
    MOV dword ptr [EDI + 0x4],0x0       ; 00440357
    SHR EDX,CL                          ; 0044035e
    SUB EBX,EAX                         ; 00440360
    MOV dword ptr [ESP + 0x20],EDX      ; 00440362
    XOR ECX,ECX                         ; 00440366
        ;   Label: LAB_00440366
    CMP EBX,0x8                         ; 00440368
    JL 0x00440389                       ; 0044036b
        ;   XREF to: 00440389 (CONDITIONAL_JUMP)  ; LAB_00440389
    XOR EAX,EAX                         ; 0044036d
        ;   Label: LAB_0044036d
    MOV AL,byte ptr [ESP + 0x20]        ; 0044036f
    PUSH EAX                            ; 00440373
    MOV EDX,dword ptr [ESI]             ; 00440374
    PUSH ESI                            ; 00440376
    CALL dword ptr [EDX + 0x4]          ; 00440377
    ADD ESP,0x8                         ; 0044037a
    MOV ECX,EAX                         ; 0044037d
    CMP EAX,-0x1                        ; 0044037f
    JNZ 0x004403b3                      ; 00440382
        ;   XREF to: 004403b3 (CONDITIONAL_JUMP)  ; LAB_004403b3
    MOV ECX,0xfffffffe                  ; 00440384
    MOV EAX,dword ptr [ESP + 0x20]      ; 00440389
        ;   Label: LAB_00440389
    MOV dword ptr [EDI],EBX             ; 0044038d
    MOV dword ptr [EDI + 0x4],EAX       ; 0044038f
    MOV EAX,ECX                         ; 00440392
    ADD ESP,0x4                         ; 00440394
    POP EBP                             ; 00440397
    POP EDI                             ; 00440398
    POP ESI                             ; 00440399
    POP EBX                             ; 0044039a
    RET                                 ; 0044039b
    MOV dword ptr [EDI + 0x4],0x0       ; 0044039c
        ;   Label: LAB_0044039c
    MOV dword ptr [EDI],0x0             ; 004403a3
    XOR EAX,EAX                         ; 004403a9
    ADD ESP,0x4                         ; 004403ab
    POP EBP                             ; 004403ae
    POP EDI                             ; 004403af
    POP ESI                             ; 004403b0
    POP EBX                             ; 004403b1
    RET                                 ; 004403b2
    TEST EAX,EAX                        ; 004403b3
        ;   Label: LAB_004403b3
    JL 0x004403dd                       ; 004403b5
        ;   XREF to: 004403dd (CONDITIONAL_JUMP)  ; LAB_004403dd
    MOV EAX,dword ptr [ESP + 0x20]      ; 004403b7
    SHR EAX,0x8                         ; 004403bb
    SUB EBX,0x8                         ; 004403be
    MOV dword ptr [ESP + 0x20],EAX      ; 004403c1
    CMP EBX,0x8                         ; 004403c5
    JGE 0x0044036d                      ; 004403c8
        ;   XREF to: 0044036d (CONDITIONAL_JUMP)  ; LAB_0044036d
    MOV EAX,dword ptr [ESP + 0x20]      ; 004403ca
    MOV dword ptr [EDI],EBX             ; 004403ce
    MOV dword ptr [EDI + 0x4],EAX       ; 004403d0
    MOV EAX,ECX                         ; 004403d3
    ADD ESP,0x4                         ; 004403d5
    POP EBP                             ; 004403d8
    POP EDI                             ; 004403d9
    POP ESI                             ; 004403da
    POP EBX                             ; 004403db
    RET                                 ; 004403dc
    MOV ECX,0xfffffffd                  ; 004403dd
        ;   Label: LAB_004403dd
    MOV EAX,dword ptr [ESP + 0x20]      ; 004403e2
    MOV dword ptr [EDI],EBX             ; 004403e6
    MOV dword ptr [EDI + 0x4],EAX       ; 004403e8
    MOV EAX,ECX                         ; 004403eb
    ADD ESP,0x4                         ; 004403ed
    POP EBP                             ; 004403f0
    POP EDI                             ; 004403f1
    POP ESI                             ; 004403f2
    POP EBX                             ; 004403f3
    RET                                 ; 004403f4

