; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004247f0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00424bd0 at 00424c37
;   FUN_0042b440 at 0042b4e8
;
; Referenced Globals:
;   undefined4 DAT_005ccca6
;   undefined4 DAT_005cccab
;   undefined4 DAT_005cccae
;   undefined4 DAT_005cccb1
;   undefined4 DAT_005cccb4
;   TerminatedCString s_e1_left_005cccb7
;   TerminatedCString s_e2_left_005cccbf
;   TerminatedCString s_e3_left_005cccc7
;   TerminatedCString s_e4_left_005ccccf
;   TerminatedCString s_e1_right_005cccd7
;   TerminatedCString s_e2_right_005ccce0
;   TerminatedCString s_e3_right_005ccce9
;   TerminatedCString s_e4_right_005cccf2
;   undefined4 DAT_005cccfe
;   undefined4 DAT_0060b280
;   ... and 4 more
;
; Called Functions:
;   FUN_0040cf60
;   FUN_004246e0
;   FUN_0046b960
;   FUN_00543100
;   FUN_00547810
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004247f0
        ;   Label: FUN_004247f0
    PUSH ESI                            ; 004247f1
    PUSH EDI                            ; 004247f2
    PUSH EBP                            ; 004247f3
    SUB ESP,0x8                         ; 004247f4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004247f7
    MOV EDX,dword ptr [0x0060b280]      ; 004247fb | DAT_0060b280
    PUSH EDX                            ; 00424801 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00424802
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00424807
    TEST EAX,EAX                        ; 0042480a
    JNZ 0x00424817                      ; 0042480c
        ;   XREF to: 00424817 (CONDITIONAL_JUMP)  ; LAB_00424817
    CMP dword ptr [EBX + 0x109d8],-0x1  ; 0042480e
    JNZ 0x0042481f                      ; 00424815
        ;   XREF to: 0042481f (CONDITIONAL_JUMP)  ; LAB_0042481f
    ADD ESP,0x8                         ; 00424817
        ;   Label: LAB_00424817
    POP EBP                             ; 0042481a
    POP EDI                             ; 0042481b
    POP ESI                             ; 0042481c
    POP EBX                             ; 0042481d
    RET                                 ; 0042481e
    LEA EAX,[EBX + 0x2b4]               ; 0042481f
        ;   Label: LAB_0042481f
    PUSH EAX                            ; 00424825
    CALL FUN_00547810                   ; 00424826
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    MOV ESI,EAX                         ; 0042482b
    ADD ESP,0x4                         ; 0042482d
    MOV EBP,dword ptr [EBX + 0x109d8]   ; 00424830
    MOV EDI,EAX                         ; 00424836
    CMP EBP,-0x2                        ; 00424838
    JZ 0x004249b6                       ; 0042483b
        ;   XREF to: 004249b6 (CONDITIONAL_JUMP)  ; LAB_004249b6
    MOV EAX,EBX                         ; 00424841
        ;   Label: LAB_00424841
    LEA ECX,[EBX + 0x10]                ; 00424843
    XOR ESI,ESI                         ; 00424846
    MOV EBP,dword ptr [EAX + 0x109dc]   ; 00424848
        ;   Label: LAB_00424848
    CMP EBP,-0x1                        ; 0042484e
    JZ 0x0042485c                       ; 00424851
        ;   XREF to: 0042485c (CONDITIONAL_JUMP)  ; LAB_0042485c
    MOV EDX,EBP                         ; 00424853
    MOV dword ptr [EBX + EDX*0x4 + 0x23f4],ESI ; 00424855
    MOV EDX,dword ptr [EAX + 0x109ec]   ; 0042485c
        ;   Label: LAB_0042485c
    CMP EDX,-0x1                        ; 00424862
    JZ 0x0042486e                       ; 00424865
        ;   XREF to: 0042486e (CONDITIONAL_JUMP)  ; LAB_0042486e
    MOV dword ptr [EBX + EDX*0x4 + 0x23f4],ESI ; 00424867
    MOV EDX,dword ptr [EAX + 0x109fc]   ; 0042486e
        ;   Label: LAB_0042486e
    ADD EAX,0x4                         ; 00424874
    MOV dword ptr [EBX + EDX*0x4 + 0x23f4],ESI ; 00424877
    CMP EAX,ECX                         ; 0042487e
    JNZ 0x00424848                      ; 00424880
        ;   XREF to: 00424848 (CONDITIONAL_JUMP)  ; LAB_00424848
    FILD dword ptr [0x01c2a370]         ; 00424882 | DAT_01c2a370
    FMUL float ptr [0x005cccfe]         ; 00424888 | DAT_005cccfe
    FLD float ptr [EBX + 0x109d0]       ; 0042488e
    FXCH                                ; 00424894
    FSTP float ptr [ESP]                ; 00424896
    FSUB float ptr [ESP]                ; 00424899
    MOV ECX,dword ptr [EBX + 0x109cc]   ; 0042489c
    FSTP float ptr [EBX + 0x109d0]      ; 004248a2
    CMP ECX,0x1                         ; 004248a8
    JNZ 0x00424af9                      ; 004248ab
        ;   XREF to: 00424af9 (CONDITIONAL_JUMP)  ; LAB_00424af9
    FLDZ                                ; 004248b1
    FCOMP float ptr [EBX + 0x109d0]     ; 004248b3
    FNSTSW AX                           ; 004248b9
    SAHF                                ; 004248bb
    JC 0x004248fc                       ; 004248bc
        ;   XREF to: 004248fc (CONDITIONAL_JUMP)  ; LAB_004248fc
    PUSH 0x41000000                     ; 004248be
    PUSH 0x40a00000                     ; 004248c3
    CALL FUN_0040cf60                   ; 004248c8
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBX + 0x109c0],0x0   ; 004248cd
    MOV dword ptr [EBX + 0x109c4],0x0   ; 004248d7
    MOV dword ptr [ESP + 0xc],EAX       ; 004248e1
    MOV dword ptr [EBX + 0x109cc],0x0   ; 004248e5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004248ef
    MOV dword ptr [EBX + 0x109d0],EAX   ; 004248f3
    ADD ESP,0x8                         ; 004248f9
    FLD float ptr [EBX + 0x109d4]       ; 004248fc
        ;   Label: LAB_004248fc
    FSUB float ptr [ESP]                ; 00424902
    FLDZ                                ; 00424905
    FXCH                                ; 00424907
    FSTP float ptr [EBX + 0x109d4]      ; 00424909
    FCOMP float ptr [EBX + 0x109d4]     ; 0042490f
    FNSTSW AX                           ; 00424915
    SAHF                                ; 00424917
    JC 0x00424942                       ; 00424918
        ;   XREF to: 00424942 (CONDITIONAL_JUMP)  ; LAB_00424942
    MOV EAX,[0x0061b460]                ; 0042491a | DAT_0061b460
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042491f | DAT_01e65cd4
    CMP EBX,ESI                         ; 00424922
    JNZ 0x00424b37                      ; 00424924
        ;   XREF to: 00424b37 (CONDITIONAL_JUMP)  ; LAB_00424b37
    MOV dword ptr [ESI + 0x109d4],0x3e19999a ; 0042492a
    CALL FUN_005b849c                   ; 00424934
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
    AND EAX,0x3                         ; 00424939
    MOV dword ptr [ESI + 0x109c8],EAX   ; 0042493c
    MOV EAX,dword ptr [EBX + 0x109c0]   ; 00424942
        ;   Label: LAB_00424942
    SHL EAX,0x2                         ; 00424948
    ADD EAX,EBX                         ; 0042494b
    MOV EBP,dword ptr [EAX + 0x109dc]   ; 0042494d
    CMP EBP,-0x1                        ; 00424953
    JZ 0x00424969                       ; 00424956
        ;   XREF to: 00424969 (CONDITIONAL_JUMP)  ; LAB_00424969
    PUSH EBP                            ; 00424958
    MOV ECX,dword ptr [EBX + 0x109d8]   ; 00424959
    PUSH ECX                            ; 0042495f
    PUSH EDI                            ; 00424960
    CALL FUN_004246e0                   ; 00424961
        ;   XREF to: 004246e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004246e0()
    ADD ESP,0xc                         ; 00424966
    MOV EAX,dword ptr [EBX + 0x109c4]   ; 00424969
        ;   Label: LAB_00424969
    SHL EAX,0x2                         ; 0042496f
    ADD EAX,EBX                         ; 00424972
    MOV ESI,dword ptr [EAX + 0x109ec]   ; 00424974
    CMP ESI,-0x1                        ; 0042497a
    JZ 0x00424990                       ; 0042497d
        ;   XREF to: 00424990 (CONDITIONAL_JUMP)  ; LAB_00424990
    PUSH ESI                            ; 0042497f
    MOV EAX,dword ptr [EBX + 0x109d8]   ; 00424980
    PUSH EAX                            ; 00424986
    PUSH EDI                            ; 00424987
    CALL FUN_004246e0                   ; 00424988
        ;   XREF to: 004246e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004246e0()
    ADD ESP,0xc                         ; 0042498d
    MOV EAX,dword ptr [EBX + 0x109c8]   ; 00424990
        ;   Label: LAB_00424990
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x109fc] ; 00424996
    PUSH EDX                            ; 0042499d
    MOV ECX,dword ptr [EBX + 0x109d8]   ; 0042499e
    PUSH ECX                            ; 004249a4
    PUSH EDI                            ; 004249a5
    CALL FUN_004246e0                   ; 004249a6
        ;   XREF to: 004246e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004246e0()
    ADD ESP,0xc                         ; 004249ab
    ADD ESP,0x8                         ; 004249ae
    POP EBP                             ; 004249b1
    POP EDI                             ; 004249b2
    POP ESI                             ; 004249b3
    POP EBX                             ; 004249b4
    RET                                 ; 004249b5
    PUSH 0x0                            ; 004249b6
        ;   Label: LAB_004249b6
    PUSH 0x5ccca6                       ; 004249b8 | DAT_005ccca6
    PUSH EAX                            ; 004249bd
    CALL FUN_00543100                   ; 004249be
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004249c3
    MOV dword ptr [EBX + 0x109d8],EAX   ; 004249c6
    CMP EAX,-0x1                        ; 004249cc
    JZ 0x00424817                       ; 004249cf
        ;   XREF to: 00424817 (CONDITIONAL_JUMP)  ; LAB_00424817
    PUSH 0x0                            ; 004249d5
    PUSH 0x5cccab                       ; 004249d7 | DAT_005cccab
    PUSH ESI                            ; 004249dc
    CALL FUN_00543100                   ; 004249dd
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 004249e2
    MOV dword ptr [EBX + 0x109fc],EAX   ; 004249e5
    CMP EAX,-0x1                        ; 004249eb
    JZ 0x00424aeb                       ; 004249ee
        ;   XREF to: 00424aeb (CONDITIONAL_JUMP)  ; LAB_00424aeb
    PUSH 0x1                            ; 004249f4
    PUSH 0x5cccae                       ; 004249f6 | DAT_005cccae
    PUSH ESI                            ; 004249fb
    CALL FUN_00543100                   ; 004249fc
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424a01
    PUSH 0x1                            ; 00424a04
    PUSH 0x5cccb1                       ; 00424a06 | DAT_005cccb1
    PUSH ESI                            ; 00424a0b
    MOV dword ptr [EBX + 0x10a00],EAX   ; 00424a0c
    CALL FUN_00543100                   ; 00424a12
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424a17
    PUSH 0x1                            ; 00424a1a
    PUSH 0x5cccb4                       ; 00424a1c | DAT_005cccb4
    PUSH ESI                            ; 00424a21
    MOV dword ptr [EBX + 0x10a04],EAX   ; 00424a22
    CALL FUN_00543100                   ; 00424a28
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424a2d
    PUSH 0x0                            ; 00424a30
    PUSH 0x5cccb7                       ; 00424a32 | = "e1_left"
    PUSH ESI                            ; 00424a37
    MOV dword ptr [EBX + 0x10a08],EAX   ; 00424a38
    CALL FUN_00543100                   ; 00424a3e
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424a43
    PUSH 0x0                            ; 00424a46
    PUSH 0x5cccbf                       ; 00424a48 | = "e2_left"
    PUSH ESI                            ; 00424a4d
    MOV dword ptr [EBX + 0x109dc],EAX   ; 00424a4e
    CALL FUN_00543100                   ; 00424a54
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424a59
    PUSH 0x0                            ; 00424a5c
    PUSH 0x5cccc7                       ; 00424a5e | = "e3_left"
    PUSH ESI                            ; 00424a63
    MOV dword ptr [EBX + 0x109e0],EAX   ; 00424a64
    CALL FUN_00543100                   ; 00424a6a
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424a6f
    PUSH 0x0                            ; 00424a72
    PUSH 0x5ccccf                       ; 00424a74 | = "e4_left"
    PUSH ESI                            ; 00424a79
    MOV dword ptr [EBX + 0x109e4],EAX   ; 00424a7a
    CALL FUN_00543100                   ; 00424a80
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424a85
    PUSH 0x0                            ; 00424a88
    PUSH 0x5cccd7                       ; 00424a8a | = "e1_right"
    PUSH ESI                            ; 00424a8f
    MOV dword ptr [EBX + 0x109e8],EAX   ; 00424a90
    CALL FUN_00543100                   ; 00424a96
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424a9b
    PUSH 0x0                            ; 00424a9e
    PUSH 0x5ccce0                       ; 00424aa0 | = "e2_right"
    PUSH ESI                            ; 00424aa5
    MOV dword ptr [EBX + 0x109ec],EAX   ; 00424aa6
    CALL FUN_00543100                   ; 00424aac
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424ab1
    MOV dword ptr [EBX + 0x109f0],EAX   ; 00424ab4
    PUSH 0x0                            ; 00424aba
    PUSH 0x5ccce9                       ; 00424abc | = "e3_right"
    PUSH ESI                            ; 00424ac1
    CALL FUN_00543100                   ; 00424ac2
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424ac7
    PUSH 0x0                            ; 00424aca
    PUSH 0x5cccf2                       ; 00424acc | = "e4_right"
    PUSH ESI                            ; 00424ad1
    MOV dword ptr [EBX + 0x109f4],EAX   ; 00424ad2
    CALL FUN_00543100                   ; 00424ad8
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0xc                         ; 00424add
    MOV dword ptr [EBX + 0x109f8],EAX   ; 00424ae0
    JMP 0x00424841                      ; 00424ae6
        ;   XREF to: 00424841 (UNCONDITIONAL_JUMP)  ; LAB_00424841
    MOV dword ptr [EBX + 0x109d8],EAX   ; 00424aeb
        ;   Label: LAB_00424aeb
    ADD ESP,0x8                         ; 00424af1
    POP EBP                             ; 00424af4
    POP EDI                             ; 00424af5
    POP ESI                             ; 00424af6
    POP EBX                             ; 00424af7
    RET                                 ; 00424af8
    FLDZ                                ; 00424af9
        ;   Label: LAB_00424af9
    FCOMP float ptr [EBX + 0x109d0]     ; 00424afb
    FNSTSW AX                           ; 00424b01
    SAHF                                ; 00424b03
    JC 0x004248fc                       ; 00424b04
        ;   XREF to: 004248fc (CONDITIONAL_JUMP)  ; LAB_004248fc
    MOV dword ptr [EBX + 0x109c4],0x3   ; 00424b0a
    MOV dword ptr [EBX + 0x109cc],0x1   ; 00424b14
    MOV dword ptr [EBX + 0x109d0],0x3d4ccccd ; 00424b1e
    MOV dword ptr [EBX + 0x109c0],0x3   ; 00424b28
    JMP 0x004248fc                      ; 00424b32
        ;   XREF to: 004248fc (UNCONDITIONAL_JUMP)  ; LAB_004248fc
    MOV dword ptr [EBX + 0x109c8],0x0   ; 00424b37
        ;   Label: LAB_00424b37
    MOV dword ptr [EBX + 0x109d4],0x0   ; 00424b41
    JMP 0x00424942                      ; 00424b4b
        ;   XREF to: 00424942 (UNCONDITIONAL_JUMP)  ; LAB_00424942

