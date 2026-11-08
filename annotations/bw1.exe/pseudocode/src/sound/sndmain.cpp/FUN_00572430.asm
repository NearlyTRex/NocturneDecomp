; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_00572430(int param_1,double param_2,uint param_3,uint param_4)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00572250 at 00572296
;   FUN_005725a0 at 005725bd
;   FUN_00573660 at 005736b0
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3c09
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005f3c1e
;   TerminatedCString s_sound_sndmain_cpp_005f3c7e
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005f3c93
;   TerminatedCString s_sound_sndmain_cpp_005f3cce
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005f3ce3
;   TerminatedCString s_sound_sndmain_cpp_005f3d43
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_005f3d58
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572430
        ;   Label: FUN_00572430
    PUSH ESI                            ; 00572431
    PUSH EDI                            ; 00572432
    PUSH EBP                            ; 00572433
    MOV EBP,ESP                         ; 00572434
    SUB ESP,0x8                         ; 00572436
    AND ESP,0xfffffff8                  ; 00572439
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057243c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0057243f
    MOV ESI,dword ptr [EBP + 0x24]      ; 00572442
    CMP EAX,ESI                         ; 00572445
    JZ 0x00572489                       ; 00572447
        ;   XREF to: 00572489 (CONDITIONAL_JUMP)  ; LAB_00572489
    CMP EAX,0x1                         ; 00572449
    JNC 0x005724fe                      ; 0057244c
        ;   XREF to: 005724fe (CONDITIONAL_JUMP)  ; LAB_005724fe
    TEST EAX,EAX                        ; 00572452
    JNZ 0x00572505                      ; 00572454
        ;   XREF to: 00572505 (CONDITIONAL_JUMP)  ; LAB_00572505
    CMP ESI,0x1                         ; 0057245a
        ;   Label: LAB_0057245a
    JNC 0x0057258c                      ; 0057245d
        ;   XREF to: 0057258c (CONDITIONAL_JUMP)  ; LAB_0057258c
    TEST ESI,ESI                        ; 00572463
    JZ 0x00572489                       ; 00572465
        ;   XREF to: 00572489 (CONDITIONAL_JUMP)  ; LAB_00572489
    MOV EAX,0x5f3d43                    ; 00572467 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00572467
    MOV EDX,0xdd4                       ; 0057246c
    PUSH 0x5f3d58                       ; 00572471 | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x01d1d400],EAX                ; 00572476 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0057247b | DAT_01d1d404
    CALL FUN_005030e0                   ; 00572481
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00572486
    MOV EAX,dword ptr [EBP + 0x18]      ; 00572489
        ;   Label: LAB_00572489
    MOV dword ptr [ESP],EAX             ; 0057248c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057248f
    MOV dword ptr [ESP + 0x4],EAX       ; 00572492
    MOV EAX,dword ptr [ESP]             ; 00572496
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572499
    MOV ESP,EBP                         ; 0057249d
    POP EBP                             ; 0057249f
    POP EDI                             ; 005724a0
    POP ESI                             ; 005724a1
    POP EBX                             ; 005724a2
    RET                                 ; 005724a3
    FILD dword ptr [EBX + 0x10c]        ; 005724a4
        ;   Label: LAB_005724a4
    FMUL double ptr [EBP + 0x18]        ; 005724aa
    FSTP double ptr [EBP + 0x18]        ; 005724ad
    JMP 0x0057245a                      ; 005724b0
        ;   XREF to: 0057245a (UNCONDITIONAL_JUMP)  ; LAB_0057245a
    CMP dword ptr [EBX + 0x110],0x0     ; 005724b2
        ;   Label: LAB_005724b2
    JLE 0x005724c9                      ; 005724b9
        ;   XREF to: 005724c9 (CONDITIONAL_JUMP)  ; LAB_005724c9
    FILD dword ptr [EBX + 0x110]        ; 005724bb
    FMUL double ptr [EBP + 0x18]        ; 005724c1
    FSTP double ptr [EBP + 0x18]        ; 005724c4
    JMP 0x0057245a                      ; 005724c7
        ;   XREF to: 0057245a (UNCONDITIONAL_JUMP)  ; LAB_0057245a
    PUSH EBX                            ; 005724c9
        ;   Label: LAB_005724c9
    MOV ECX,0x5f3c09                    ; 005724ca | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xdbc                       ; 005724cf
    PUSH 0x5f3c1e                       ; 005724d4 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x01d1d400],ECX      ; 005724d9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005724df | DAT_01d1d404
    CALL FUN_005030e0                   ; 005724e5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 005724ea
    FILD dword ptr [EBX + 0x110]        ; 005724ed
    FMUL double ptr [EBP + 0x18]        ; 005724f3
    FSTP double ptr [EBP + 0x18]        ; 005724f6
    JMP 0x0057245a                      ; 005724f9
        ;   XREF to: 0057245a (UNCONDITIONAL_JUMP)  ; LAB_0057245a
    JBE 0x005724a4                      ; 005724fe
        ;   XREF to: 005724a4 (CONDITIONAL_JUMP)  ; LAB_005724a4
        ;   Label: LAB_005724fe
    CMP EAX,0x2                         ; 00572500
    JZ 0x005724b2                       ; 00572503
        ;   XREF to: 005724b2 (CONDITIONAL_JUMP)  ; LAB_005724b2
    MOV EAX,0x5f3c7e                    ; 00572505 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00572505
    MOV EDX,0xdc1                       ; 0057250a
    PUSH 0x5f3c93                       ; 0057250f | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x01d1d400],EAX                ; 00572514 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00572519 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0057251f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00572524
    JMP 0x0057245a                      ; 00572527
        ;   XREF to: 0057245a (UNCONDITIONAL_JUMP)  ; LAB_0057245a
    FILD dword ptr [EBX + 0x10c]        ; 0057252c
        ;   Label: LAB_0057252c
    FDIVR double ptr [EBP + 0x18]       ; 00572532
    FSTP double ptr [EBP + 0x18]        ; 00572535
    JMP 0x00572489                      ; 00572538
        ;   XREF to: 00572489 (UNCONDITIONAL_JUMP)  ; LAB_00572489
    CMP dword ptr [EBX + 0x110],0x0     ; 0057253d
        ;   Label: LAB_0057253d
    JLE 0x00572557                      ; 00572544
        ;   XREF to: 00572557 (CONDITIONAL_JUMP)  ; LAB_00572557
    FILD dword ptr [EBX + 0x110]        ; 00572546
    FDIVR double ptr [EBP + 0x18]       ; 0057254c
    FSTP double ptr [EBP + 0x18]        ; 0057254f
    JMP 0x00572489                      ; 00572552
        ;   XREF to: 00572489 (UNCONDITIONAL_JUMP)  ; LAB_00572489
    PUSH EBX                            ; 00572557
        ;   Label: LAB_00572557
    MOV ESI,0x5f3cce                    ; 00572558 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xdcf                       ; 0057255d
    PUSH 0x5f3ce3                       ; 00572562 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x01d1d400],ESI      ; 00572567 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0057256d | DAT_01d1d404
    CALL FUN_005030e0                   ; 00572573
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00572578
    FILD dword ptr [EBX + 0x110]        ; 0057257b
    FDIVR double ptr [EBP + 0x18]       ; 00572581
    FSTP double ptr [EBP + 0x18]        ; 00572584
    JMP 0x00572489                      ; 00572587
        ;   XREF to: 00572489 (UNCONDITIONAL_JUMP)  ; LAB_00572489
    JBE 0x0057252c                      ; 0057258c
        ;   XREF to: 0057252c (CONDITIONAL_JUMP)  ; LAB_0057252c
        ;   Label: LAB_0057258c
    CMP ESI,0x2                         ; 0057258e
    JZ 0x0057253d                       ; 00572591
        ;   XREF to: 0057253d (CONDITIONAL_JUMP)  ; LAB_0057253d
    JMP 0x00572467                      ; 00572593
        ;   XREF to: 00572467 (UNCONDITIONAL_JUMP)  ; LAB_00572467

