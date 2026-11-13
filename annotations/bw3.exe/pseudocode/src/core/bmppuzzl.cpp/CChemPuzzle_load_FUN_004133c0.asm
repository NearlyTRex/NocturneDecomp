; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CChemPuzzle_load_FUN_004133c0(CChemPuzzle *this_ptr,int activate)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   activate
;
; Referenced Globals:
;   undefined4 DAT_007dffb8
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004133c0
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_load_FUN_004133c0
    PUSH ESI                            ; 004133c1
    PUSH EDI                            ; 004133c2
    PUSH EBP                            ; 004133c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004133c4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004133c8
    LEA ESI,[EBX + 0x10]                ; 004133cc
    TEST EDX,EDX                        ; 004133cf
    JZ 0x00413bb2                       ; 004133d1
        ;   XREF to: 00413bb2 (CONDITIONAL_JUMP)  ; LAB_00413bb2
    MOV dword ptr [EBX + 0x91c],0x1d    ; 004133d7
    MOV dword ptr [EBX + 0x90c],0x1e    ; 004133e1
    MOV dword ptr [EBX + 0x920],0x1d    ; 004133eb
    MOV dword ptr [EBX + 0x910],0x1e    ; 004133f5
    MOV dword ptr [EBX + 0x924],0x1d    ; 004133ff
    MOV dword ptr [EBX + 0x914],0x1e    ; 00413409
    MOV dword ptr [EBX + 0x928],0x1d    ; 00413413
    MOV dword ptr [EBX + 0x918],0x1e    ; 0041341d
    MOV dword ptr [EBX + 0x92c],0x1d    ; 00413427
    MOV dword ptr [EBX + 0x18],0x0      ; 00413431
    MOV dword ptr [EBX + 0x1c],0x0      ; 00413438
    MOV dword ptr [EBX + 0x20],0x0      ; 0041343f
    MOV dword ptr [EBX + 0x28],0x0      ; 00413446
    MOV dword ptr [EBX + 0x2c],0x0      ; 0041344d
    MOV dword ptr [EBX + 0x30],0x0      ; 00413454
    MOV dword ptr [EBX + 0x54],0x0      ; 0041345b
    MOV dword ptr [EBX + 0x24],0x0      ; 00413462
    MOV ECX,0xffffffff                  ; 00413469
    MOV dword ptr [EBX + 0x34],0x0      ; 0041346e
    MOV EAX,EBX                         ; 00413475
    MOV dword ptr [EBX + 0x908],0x1e    ; 00413477
    MOV dword ptr [0x007dffb8],ECX      ; 00413481 | DAT_007dffb8
    MOV dword ptr [EBX + 0x930],ECX     ; 00413487
    ADD EAX,0x4                         ; 0041348d
        ;   Label: LAB_0041348d
    MOV dword ptr [EAX + 0x930],0x0     ; 00413490
    CMP EAX,ESI                         ; 0041349a
    JNZ 0x0041348d                      ; 0041349c
        ;   XREF to: 0041348d (CONDITIONAL_JUMP)  ; LAB_0041348d
    MOV EAX,EBX                         ; 0041349e
    LEA ESI,[EBX + 0xc]                 ; 004134a0
    ADD EAX,0x4                         ; 004134a3
        ;   Label: LAB_004134a3
    MOV dword ptr [EAX + 0x34],0xffffffff ; 004134a6
    CMP EAX,ESI                         ; 004134ad
    JNZ 0x004134a3                      ; 004134af
        ;   XREF to: 004134a3 (CONDITIONAL_JUMP)  ; LAB_004134a3
    MOV EAX,EBX                         ; 004134b1
    LEA ESI,[EBX + 0xc]                 ; 004134b3
    ADD EAX,0x4                         ; 004134b6
        ;   Label: LAB_004134b6
    MOV dword ptr [EAX + 0x40],0x0      ; 004134b9
    CMP EAX,ESI                         ; 004134c0
    JNZ 0x004134b6                      ; 004134c2
        ;   XREF to: 004134b6 (CONDITIONAL_JUMP)  ; LAB_004134b6
    MOV EAX,EBX                         ; 004134c4
    LEA ESI,[EBX + 0x18]                ; 004134c6
    ADD EAX,0x4                         ; 004134c9
        ;   Label: LAB_004134c9
    MOV dword ptr [EAX + 0x54],0x0      ; 004134cc
    CMP EAX,ESI                         ; 004134d3
    JNZ 0x004134c9                      ; 004134d5
        ;   XREF to: 004134c9 (CONDITIONAL_JUMP)  ; LAB_004134c9
    PUSH 0x1e0                          ; 004134d7
    PUSH 0x280                          ; 004134dc
    PUSH 0x5b6801                       ; 004134e1
    LEA EAX,[EBX + 0x4]                 ; 004134e6
    PUSH EAX                            ; 004134e9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004134ea
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004134ef
    PUSH 0x20                           ; 004134f2
    PUSH 0x20                           ; 004134f4
    PUSH 0x5b6810                       ; 004134f6
    PUSH 0x7e0010                       ; 004134fb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00413500
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00413505
    PUSH 0x20                           ; 00413508
    PUSH 0x20                           ; 0041350a
    PUSH 0x5b681d                       ; 0041350c
    PUSH 0x7e0024                       ; 00413511
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00413516
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0041351b
    PUSH 0x20                           ; 0041351e
    PUSH 0x20                           ; 00413520
    PUSH 0x5b6828                       ; 00413522
    PUSH 0x7e0038                       ; 00413527
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 0041352c
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00413531
    PUSH 0x20                           ; 00413534
    PUSH 0x20                           ; 00413536
    PUSH 0x5b6833                       ; 00413538
    PUSH 0x7e004c                       ; 0041353d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00413542
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00413547
    PUSH 0x20                           ; 0041354a
    PUSH 0x20                           ; 0041354c
    PUSH 0x5b683f                       ; 0041354e
    PUSH 0x7e0060                       ; 00413553
    XOR ESI,ESI                         ; 00413558
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 0041355a
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EDX,dword ptr [EBX + 0x20]      ; 0041355f
    ADD ESP,0x10                        ; 00413562
    TEST EDX,EDX                        ; 00413565
    JLE 0x00413580                      ; 00413567
        ;   XREF to: 00413580 (CONDITIONAL_JUMP)  ; LAB_00413580
    LEA EDI,[EBX + 0x70]                ; 00413569
    PUSH EDI                            ; 0041356c
        ;   Label: LAB_0041356c
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 0041356d
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    INC ESI                             ; 00413572
    ADD ESP,0x4                         ; 00413573
    MOV ECX,dword ptr [EBX + 0x20]      ; 00413576
    ADD EDI,0x2c                        ; 00413579
    CMP ESI,ECX                         ; 0041357c
    JL 0x0041356c                       ; 0041357e
        ;   XREF to: 0041356c (CONDITIONAL_JUMP)  ; LAB_0041356c
    PUSH 0x0                            ; 00413580
        ;   Label: LAB_00413580
    PUSH 0x157                          ; 00413582
    PUSH 0x9d                           ; 00413587
    PUSH 0x1                            ; 0041358c
    PUSH 0x72                           ; 0041358e
    PUSH 0x7a                           ; 00413590
    PUSH 0x5b6850                       ; 00413592
    PUSH 0x1                            ; 00413597
    MOV EAX,dword ptr [EBX]             ; 00413599
    PUSH EBX                            ; 0041359b
    CALL dword ptr [EAX + 0x28]         ; 0041359c
    ADD ESP,0x24                        ; 0041359f
    PUSH 0x0                            ; 004135a2
    PUSH 0x157                          ; 004135a4
    PUSH 0x9d                           ; 004135a9
    PUSH 0x1                            ; 004135ae
    PUSH 0x72                           ; 004135b0
    PUSH 0x7a                           ; 004135b2
    PUSH 0x5b6858                       ; 004135b4
    PUSH 0x2                            ; 004135b9
    MOV EAX,dword ptr [EBX]             ; 004135bb
    PUSH EBX                            ; 004135bd
    CALL dword ptr [EAX + 0x28]         ; 004135be
    ADD ESP,0x24                        ; 004135c1
    PUSH 0x0                            ; 004135c4
    PUSH 0x157                          ; 004135c6
    PUSH 0x9d                           ; 004135cb
    PUSH 0x1                            ; 004135d0
    PUSH 0x72                           ; 004135d2
    PUSH 0x7a                           ; 004135d4
    PUSH 0x5b6863                       ; 004135d6
    PUSH 0x3                            ; 004135db
    MOV EAX,dword ptr [EBX]             ; 004135dd
    PUSH EBX                            ; 004135df
    CALL dword ptr [EAX + 0x28]         ; 004135e0
    ADD ESP,0x24                        ; 004135e3
    PUSH 0x0                            ; 004135e6
    PUSH 0x157                          ; 004135e8
    PUSH 0x9d                           ; 004135ed
    PUSH 0x1                            ; 004135f2
    PUSH 0x72                           ; 004135f4
    PUSH 0x7a                           ; 004135f6
    PUSH 0x5b686e                       ; 004135f8
    PUSH 0x4                            ; 004135fd
    MOV EAX,dword ptr [EBX]             ; 004135ff
    PUSH EBX                            ; 00413601
    CALL dword ptr [EAX + 0x28]         ; 00413602
    ADD ESP,0x24                        ; 00413605
    PUSH 0x0                            ; 00413608
    PUSH 0x157                          ; 0041360a
    PUSH 0x9d                           ; 0041360f
    PUSH 0x1                            ; 00413614
    PUSH 0x72                           ; 00413616
    PUSH 0x7a                           ; 00413618
    PUSH 0x5b6876                       ; 0041361a
    PUSH 0x5                            ; 0041361f
    MOV EAX,dword ptr [EBX]             ; 00413621
    PUSH EBX                            ; 00413623
    CALL dword ptr [EAX + 0x28]         ; 00413624
    ADD ESP,0x24                        ; 00413627
    PUSH 0x0                            ; 0041362a
    PUSH 0x157                          ; 0041362c
    PUSH 0x9d                           ; 00413631
    PUSH 0x1                            ; 00413636
    PUSH 0x72                           ; 00413638
    PUSH 0x7a                           ; 0041363a
    PUSH 0x5b6881                       ; 0041363c
    PUSH 0x6                            ; 00413641
    MOV EAX,dword ptr [EBX]             ; 00413643
    PUSH EBX                            ; 00413645
    CALL dword ptr [EAX + 0x28]         ; 00413646
    ADD ESP,0x24                        ; 00413649
    PUSH 0x0                            ; 0041364c
    PUSH 0x157                          ; 0041364e
    PUSH 0x9d                           ; 00413653
    PUSH 0x1                            ; 00413658
    PUSH 0x72                           ; 0041365a
    PUSH 0x7a                           ; 0041365c
    PUSH 0x5b688c                       ; 0041365e
    PUSH 0x7                            ; 00413663
    MOV EAX,dword ptr [EBX]             ; 00413665
    PUSH EBX                            ; 00413667
    CALL dword ptr [EAX + 0x28]         ; 00413668
    ADD ESP,0x24                        ; 0041366b
    PUSH 0x0                            ; 0041366e
    PUSH 0x157                          ; 00413670
    PUSH 0x9d                           ; 00413675
    PUSH 0x1                            ; 0041367a
    PUSH 0x72                           ; 0041367c
    PUSH 0x7a                           ; 0041367e
    PUSH 0x5b6894                       ; 00413680
    PUSH 0x8                            ; 00413685
    MOV EAX,dword ptr [EBX]             ; 00413687
    PUSH EBX                            ; 00413689
    CALL dword ptr [EAX + 0x28]         ; 0041368a
    ADD ESP,0x24                        ; 0041368d
    PUSH 0x0                            ; 00413690
    PUSH 0x157                          ; 00413692
    PUSH 0x9d                           ; 00413697
    PUSH 0x1                            ; 0041369c
    PUSH 0x72                           ; 0041369e
    PUSH 0x7a                           ; 004136a0
    PUSH 0x5b689f                       ; 004136a2
    PUSH 0x9                            ; 004136a7
    MOV EAX,dword ptr [EBX]             ; 004136a9
    PUSH EBX                            ; 004136ab
    CALL dword ptr [EAX + 0x28]         ; 004136ac
    ADD ESP,0x24                        ; 004136af
    PUSH 0x0                            ; 004136b2
    PUSH 0xde                           ; 004136b4
    PUSH 0x165                          ; 004136b9
    PUSH 0x1                            ; 004136be
    PUSH 0x6c                           ; 004136c0
    PUSH 0x75                           ; 004136c2
    PUSH 0x5b68aa                       ; 004136c4
    PUSH 0xa                            ; 004136c9
    MOV EAX,dword ptr [EBX]             ; 004136cb
    PUSH EBX                            ; 004136cd
    CALL dword ptr [EAX + 0x28]         ; 004136ce
    ADD ESP,0x24                        ; 004136d1
    PUSH 0x0                            ; 004136d4
    PUSH 0xde                           ; 004136d6
    PUSH 0x165                          ; 004136db
    PUSH 0x1                            ; 004136e0
    PUSH 0x6c                           ; 004136e2
    PUSH 0x75                           ; 004136e4
    PUSH 0x5b68b2                       ; 004136e6
    PUSH 0xb                            ; 004136eb
    MOV EAX,dword ptr [EBX]             ; 004136ed
    PUSH EBX                            ; 004136ef
    CALL dword ptr [EAX + 0x28]         ; 004136f0
    ADD ESP,0x24                        ; 004136f3
    PUSH 0x0                            ; 004136f6
    PUSH 0xde                           ; 004136f8
    PUSH 0x165                          ; 004136fd
    PUSH 0x1                            ; 00413702
    PUSH 0x6c                           ; 00413704
    PUSH 0x75                           ; 00413706
    PUSH 0x5b68bd                       ; 00413708
    PUSH 0xc                            ; 0041370d
    MOV EAX,dword ptr [EBX]             ; 0041370f
    PUSH EBX                            ; 00413711
    CALL dword ptr [EAX + 0x28]         ; 00413712
    ADD ESP,0x24                        ; 00413715
    PUSH 0x0                            ; 00413718
    PUSH 0xde                           ; 0041371a
    PUSH 0x165                          ; 0041371f
    PUSH 0x1                            ; 00413724
    PUSH 0x6c                           ; 00413726
    PUSH 0x75                           ; 00413728
    PUSH 0x5b68c8                       ; 0041372a
    PUSH 0xd                            ; 0041372f
    MOV EAX,dword ptr [EBX]             ; 00413731
    PUSH EBX                            ; 00413733
    CALL dword ptr [EAX + 0x28]         ; 00413734
    ADD ESP,0x24                        ; 00413737
    PUSH 0x0                            ; 0041373a
    PUSH 0xde                           ; 0041373c
    PUSH 0x165                          ; 00413741
    PUSH 0x1                            ; 00413746
    PUSH 0x6c                           ; 00413748
    PUSH 0x75                           ; 0041374a
    PUSH 0x5b68d0                       ; 0041374c
    PUSH 0xe                            ; 00413751
    MOV EAX,dword ptr [EBX]             ; 00413753
    PUSH EBX                            ; 00413755
    CALL dword ptr [EAX + 0x28]         ; 00413756
    ADD ESP,0x24                        ; 00413759
    PUSH 0x0                            ; 0041375c
    PUSH 0xde                           ; 0041375e
    PUSH 0x165                          ; 00413763
    PUSH 0x1                            ; 00413768
    PUSH 0x6c                           ; 0041376a
    PUSH 0x75                           ; 0041376c
    PUSH 0x5b68db                       ; 0041376e
    PUSH 0xf                            ; 00413773
    MOV EAX,dword ptr [EBX]             ; 00413775
    PUSH EBX                            ; 00413777
    CALL dword ptr [EAX + 0x28]         ; 00413778
    ADD ESP,0x24                        ; 0041377b
    PUSH 0x0                            ; 0041377e
    PUSH 0xde                           ; 00413780
    PUSH 0x165                          ; 00413785
    PUSH 0x1                            ; 0041378a
    PUSH 0x6c                           ; 0041378c
    PUSH 0x75                           ; 0041378e
    PUSH 0x5b68e6                       ; 00413790
    PUSH 0x10                           ; 00413795
    MOV EAX,dword ptr [EBX]             ; 00413797
    PUSH EBX                            ; 00413799
    CALL dword ptr [EAX + 0x28]         ; 0041379a
    ADD ESP,0x24                        ; 0041379d
    PUSH 0x0                            ; 004137a0
    PUSH 0xde                           ; 004137a2
    PUSH 0x165                          ; 004137a7
    PUSH 0x1                            ; 004137ac
    PUSH 0x6c                           ; 004137ae
    PUSH 0x75                           ; 004137b0
    PUSH 0x5b68ee                       ; 004137b2
    PUSH 0x11                           ; 004137b7
    MOV EAX,dword ptr [EBX]             ; 004137b9
    PUSH EBX                            ; 004137bb
    CALL dword ptr [EAX + 0x28]         ; 004137bc
    ADD ESP,0x24                        ; 004137bf
    PUSH 0x0                            ; 004137c2
    PUSH 0xde                           ; 004137c4
    PUSH 0x165                          ; 004137c9
    PUSH 0x1                            ; 004137ce
    PUSH 0x6c                           ; 004137d0
    PUSH 0x75                           ; 004137d2
    PUSH 0x5b68f9                       ; 004137d4
    PUSH 0x12                           ; 004137d9
    MOV EAX,dword ptr [EBX]             ; 004137db
    PUSH EBX                            ; 004137dd
    CALL dword ptr [EAX + 0x28]         ; 004137de
    ADD ESP,0x24                        ; 004137e1
    PUSH 0x0                            ; 004137e4
    PUSH 0x14b                          ; 004137e6
    PUSH 0x1cd                          ; 004137eb
    PUSH 0x1                            ; 004137f0
    PUSH 0x78                           ; 004137f2
    PUSH 0x7e                           ; 004137f4
    PUSH 0x5b6904                       ; 004137f6
    PUSH 0x13                           ; 004137fb
    MOV EAX,dword ptr [EBX]             ; 004137fd
    PUSH EBX                            ; 004137ff
    CALL dword ptr [EAX + 0x28]         ; 00413800
    ADD ESP,0x24                        ; 00413803
    PUSH 0x0                            ; 00413806
    PUSH 0x14b                          ; 00413808
    PUSH 0x1cd                          ; 0041380d
    PUSH 0x1                            ; 00413812
    PUSH 0x78                           ; 00413814
    PUSH 0x7e                           ; 00413816
    PUSH 0x5b690c                       ; 00413818
    PUSH 0x14                           ; 0041381d
    MOV EAX,dword ptr [EBX]             ; 0041381f
    PUSH EBX                            ; 00413821
    CALL dword ptr [EAX + 0x28]         ; 00413822
    ADD ESP,0x24                        ; 00413825
    PUSH 0x0                            ; 00413828
    PUSH 0x14b                          ; 0041382a
    PUSH 0x1cd                          ; 0041382f
    PUSH 0x1                            ; 00413834
    PUSH 0x78                           ; 00413836
    PUSH 0x7e                           ; 00413838
    PUSH 0x5b6917                       ; 0041383a
    PUSH 0x15                           ; 0041383f
    MOV EAX,dword ptr [EBX]             ; 00413841
    PUSH EBX                            ; 00413843
    CALL dword ptr [EAX + 0x28]         ; 00413844
    ADD ESP,0x24                        ; 00413847
    PUSH 0x0                            ; 0041384a
    PUSH 0x14b                          ; 0041384c
    PUSH 0x1cd                          ; 00413851
    PUSH 0x1                            ; 00413856
    PUSH 0x78                           ; 00413858
    PUSH 0x7e                           ; 0041385a
    PUSH 0x5b6922                       ; 0041385c
    PUSH 0x16                           ; 00413861
    MOV EAX,dword ptr [EBX]             ; 00413863
    PUSH EBX                            ; 00413865
    CALL dword ptr [EAX + 0x28]         ; 00413866
    ADD ESP,0x24                        ; 00413869
    PUSH 0x0                            ; 0041386c
    PUSH 0x14b                          ; 0041386e
    PUSH 0x1cd                          ; 00413873
    PUSH 0x1                            ; 00413878
    PUSH 0x78                           ; 0041387a
    PUSH 0x7e                           ; 0041387c
    PUSH 0x5b692a                       ; 0041387e
    PUSH 0x17                           ; 00413883
    MOV EAX,dword ptr [EBX]             ; 00413885
    PUSH EBX                            ; 00413887
    CALL dword ptr [EAX + 0x28]         ; 00413888
    ADD ESP,0x24                        ; 0041388b
    PUSH 0x0                            ; 0041388e
    PUSH 0x14b                          ; 00413890
    PUSH 0x1cd                          ; 00413895
    PUSH 0x1                            ; 0041389a
    PUSH 0x78                           ; 0041389c
    PUSH 0x7e                           ; 0041389e
    PUSH 0x5b6935                       ; 004138a0
    PUSH 0x18                           ; 004138a5
    MOV EAX,dword ptr [EBX]             ; 004138a7
    PUSH EBX                            ; 004138a9
    CALL dword ptr [EAX + 0x28]         ; 004138aa
    ADD ESP,0x24                        ; 004138ad
    PUSH 0x0                            ; 004138b0
    PUSH 0x14b                          ; 004138b2
    PUSH 0x1cd                          ; 004138b7
    PUSH 0x1                            ; 004138bc
    PUSH 0x78                           ; 004138be
    PUSH 0x7e                           ; 004138c0
    PUSH 0x5b6940                       ; 004138c2
    PUSH 0x19                           ; 004138c7
    MOV EAX,dword ptr [EBX]             ; 004138c9
    PUSH EBX                            ; 004138cb
    CALL dword ptr [EAX + 0x28]         ; 004138cc
    ADD ESP,0x24                        ; 004138cf
    PUSH 0x0                            ; 004138d2
    PUSH 0x14b                          ; 004138d4
    PUSH 0x1cd                          ; 004138d9
    PUSH 0x1                            ; 004138de
    PUSH 0x78                           ; 004138e0
    PUSH 0x7e                           ; 004138e2
    PUSH 0x5b6948                       ; 004138e4
    PUSH 0x1a                           ; 004138e9
    MOV EAX,dword ptr [EBX]             ; 004138eb
    PUSH EBX                            ; 004138ed
    CALL dword ptr [EAX + 0x28]         ; 004138ee
    ADD ESP,0x24                        ; 004138f1
    PUSH 0x0                            ; 004138f4
    PUSH 0x14b                          ; 004138f6
    PUSH 0x1cd                          ; 004138fb
    PUSH 0x1                            ; 00413900
    PUSH 0x78                           ; 00413902
    PUSH 0x7e                           ; 00413904
    PUSH 0x5b6953                       ; 00413906
    PUSH 0x1b                           ; 0041390b
    MOV EAX,dword ptr [EBX]             ; 0041390d
    PUSH EBX                            ; 0041390f
    CALL dword ptr [EAX + 0x28]         ; 00413910
    ADD ESP,0x24                        ; 00413913
    PUSH 0x0                            ; 00413916
    PUSH 0x164                          ; 00413918
    PUSH 0x144                          ; 0041391d
    PUSH 0x1                            ; 00413922
    PUSH 0x76                           ; 00413924
    PUSH 0x80                           ; 00413926
    PUSH 0x5b695e                       ; 0041392b
    PUSH 0x1c                           ; 00413930
    MOV EAX,dword ptr [EBX]             ; 00413932
    PUSH EBX                            ; 00413934
    CALL dword ptr [EAX + 0x28]         ; 00413935
    ADD ESP,0x24                        ; 00413938
    PUSH 0x0                            ; 0041393b
    PUSH 0x164                          ; 0041393d
    PUSH 0x144                          ; 00413942
    PUSH 0x1                            ; 00413947
    PUSH 0x76                           ; 00413949
    PUSH 0x80                           ; 0041394b
    PUSH 0x5b6965                       ; 00413950
    PUSH 0x1d                           ; 00413955
    MOV EAX,dword ptr [EBX]             ; 00413957
    PUSH EBX                            ; 00413959
    CALL dword ptr [EAX + 0x28]         ; 0041395a
    ADD ESP,0x24                        ; 0041395d
    PUSH 0x0                            ; 00413960
    PUSH 0x164                          ; 00413962
    PUSH 0x144                          ; 00413967
    PUSH 0x1                            ; 0041396c
    PUSH 0x76                           ; 0041396e
    PUSH 0x80                           ; 00413970
    PUSH 0x5b696f                       ; 00413975
    PUSH 0x1e                           ; 0041397a
    MOV EAX,dword ptr [EBX]             ; 0041397c
    PUSH EBX                            ; 0041397e
    CALL dword ptr [EAX + 0x28]         ; 0041397f
    ADD ESP,0x24                        ; 00413982
    PUSH 0x0                            ; 00413985
    PUSH 0x164                          ; 00413987
    PUSH 0x144                          ; 0041398c
    PUSH 0x1                            ; 00413991
    PUSH 0x76                           ; 00413993
    PUSH 0x80                           ; 00413995
    PUSH 0x5b6979                       ; 0041399a
    PUSH 0x1f                           ; 0041399f
    MOV EAX,dword ptr [EBX]             ; 004139a1
    PUSH EBX                            ; 004139a3
    CALL dword ptr [EAX + 0x28]         ; 004139a4
    ADD ESP,0x24                        ; 004139a7
    PUSH 0x0                            ; 004139aa
    PUSH 0x164                          ; 004139ac
    PUSH 0x144                          ; 004139b1
    PUSH 0x1                            ; 004139b6
    PUSH 0x76                           ; 004139b8
    PUSH 0x80                           ; 004139ba
    PUSH 0x5b6980                       ; 004139bf
    PUSH 0x20                           ; 004139c4
    MOV EAX,dword ptr [EBX]             ; 004139c6
    PUSH EBX                            ; 004139c8
    CALL dword ptr [EAX + 0x28]         ; 004139c9
    ADD ESP,0x24                        ; 004139cc
    PUSH 0x0                            ; 004139cf
    PUSH 0x164                          ; 004139d1
    PUSH 0x144                          ; 004139d6
    PUSH 0x1                            ; 004139db
    PUSH 0x76                           ; 004139dd
    PUSH 0x80                           ; 004139df
    PUSH 0x5b698a                       ; 004139e4
    PUSH 0x21                           ; 004139e9
    MOV EAX,dword ptr [EBX]             ; 004139eb
    PUSH EBX                            ; 004139ed
    CALL dword ptr [EAX + 0x28]         ; 004139ee
    ADD ESP,0x24                        ; 004139f1
    PUSH 0x0                            ; 004139f4
    PUSH 0x164                          ; 004139f6
    PUSH 0x144                          ; 004139fb
    PUSH 0x1                            ; 00413a00
    PUSH 0x76                           ; 00413a02
    PUSH 0x80                           ; 00413a04
    PUSH 0x5b6994                       ; 00413a09
    PUSH 0x22                           ; 00413a0e
    MOV EAX,dword ptr [EBX]             ; 00413a10
    PUSH EBX                            ; 00413a12
    CALL dword ptr [EAX + 0x28]         ; 00413a13
    ADD ESP,0x24                        ; 00413a16
    PUSH 0x0                            ; 00413a19
    PUSH 0x164                          ; 00413a1b
    PUSH 0x144                          ; 00413a20
    PUSH 0x1                            ; 00413a25
    PUSH 0x76                           ; 00413a27
    PUSH 0x80                           ; 00413a29
    PUSH 0x5b699b                       ; 00413a2e
    PUSH 0x23                           ; 00413a33
    MOV EAX,dword ptr [EBX]             ; 00413a35
    PUSH EBX                            ; 00413a37
    CALL dword ptr [EAX + 0x28]         ; 00413a38
    ADD ESP,0x24                        ; 00413a3b
    PUSH 0x0                            ; 00413a3e
    PUSH 0x164                          ; 00413a40
    PUSH 0x144                          ; 00413a45
    PUSH 0x1                            ; 00413a4a
    PUSH 0x76                           ; 00413a4c
    PUSH 0x80                           ; 00413a4e
    PUSH 0x5b69a5                       ; 00413a53
    PUSH 0x24                           ; 00413a58
    MOV EAX,dword ptr [EBX]             ; 00413a5a
    PUSH EBX                            ; 00413a5c
    CALL dword ptr [EAX + 0x28]         ; 00413a5d
    ADD ESP,0x24                        ; 00413a60
    PUSH 0x1                            ; 00413a63
    PUSH 0xa0                           ; 00413a65
    PUSH 0x8                            ; 00413a6a
    PUSH 0x1                            ; 00413a6c
    PUSH 0x19                           ; 00413a6e
    PUSH 0x30                           ; 00413a70
    PUSH 0x5b69af                       ; 00413a72
    PUSH 0x25                           ; 00413a77
    MOV EAX,dword ptr [EBX]             ; 00413a79
    PUSH EBX                            ; 00413a7b
    CALL dword ptr [EAX + 0x28]         ; 00413a7c
    ADD ESP,0x24                        ; 00413a7f
    PUSH 0x1                            ; 00413a82
    PUSH 0x82                           ; 00413a84
    PUSH 0x4f                           ; 00413a89
    PUSH 0x1                            ; 00413a8b
    PUSH 0x19                           ; 00413a8d
    PUSH 0x30                           ; 00413a8f
    PUSH 0x5b69b6                       ; 00413a91
    PUSH 0x26                           ; 00413a96
    MOV EAX,dword ptr [EBX]             ; 00413a98
    PUSH EBX                            ; 00413a9a
    CALL dword ptr [EAX + 0x28]         ; 00413a9b
    ADD ESP,0x24                        ; 00413a9e
    PUSH 0x1                            ; 00413aa1
    PUSH 0x63                           ; 00413aa3
    PUSH 0x95                           ; 00413aa5
    PUSH 0x1                            ; 00413aaa
    PUSH 0x19                           ; 00413aac
    PUSH 0x30                           ; 00413aae
    PUSH 0x5b69bd                       ; 00413ab0
    PUSH 0x27                           ; 00413ab5
    MOV EAX,dword ptr [EBX]             ; 00413ab7
    PUSH EBX                            ; 00413ab9
    CALL dword ptr [EAX + 0x28]         ; 00413aba
    ADD ESP,0x24                        ; 00413abd
    PUSH 0x1                            ; 00413ac0
    PUSH 0x44                           ; 00413ac2
    PUSH 0xd7                           ; 00413ac4
    PUSH 0x1                            ; 00413ac9
    PUSH 0x19                           ; 00413acb
    PUSH 0x30                           ; 00413acd
    PUSH 0x5b69c4                       ; 00413acf
    PUSH 0x28                           ; 00413ad4
    MOV EAX,dword ptr [EBX]             ; 00413ad6
    PUSH EBX                            ; 00413ad8
    CALL dword ptr [EAX + 0x28]         ; 00413ad9
    ADD ESP,0x24                        ; 00413adc
    PUSH 0x1                            ; 00413adf
    PUSH 0x27                           ; 00413ae1
    PUSH 0x117                          ; 00413ae3
    PUSH 0x1                            ; 00413ae8
    PUSH 0x19                           ; 00413aea
    PUSH 0x30                           ; 00413aec
    PUSH 0x5b69cb                       ; 00413aee
    PUSH 0x29                           ; 00413af3
    MOV EAX,dword ptr [EBX]             ; 00413af5
    PUSH EBX                            ; 00413af7
    CALL dword ptr [EAX + 0x28]         ; 00413af8
    ADD ESP,0x24                        ; 00413afb
    PUSH 0x1                            ; 00413afe
    PUSH 0xd                            ; 00413b00
    PUSH 0x156                          ; 00413b02
    PUSH 0x1                            ; 00413b07
    PUSH 0x19                           ; 00413b09
    PUSH 0x30                           ; 00413b0b
    PUSH 0x5b69d2                       ; 00413b0d
    PUSH 0x2a                           ; 00413b12
    MOV EAX,dword ptr [EBX]             ; 00413b14
    PUSH EBX                            ; 00413b16
    CALL dword ptr [EAX + 0x28]         ; 00413b17
    ADD ESP,0x24                        ; 00413b1a
    PUSH 0x1                            ; 00413b1d
    PUSH 0x1b8                          ; 00413b1f
    PUSH 0x262                          ; 00413b24
    PUSH 0x1                            ; 00413b29
    PUSH 0x20                           ; 00413b2b
    PUSH 0x1e                           ; 00413b2d
    PUSH 0x5b69d9                       ; 00413b2f
    PUSH 0x2b                           ; 00413b34
    MOV EAX,dword ptr [EBX]             ; 00413b36
    PUSH EBX                            ; 00413b38
    CALL dword ptr [EAX + 0x28]         ; 00413b39
    ADD ESP,0x24                        ; 00413b3c
    PUSH 0x1                            ; 00413b3f
    PUSH 0xa                            ; 00413b41
    PUSH 0x262                          ; 00413b43
    PUSH 0x1                            ; 00413b48
    PUSH 0x20                           ; 00413b4a
    PUSH 0x1e                           ; 00413b4c
    PUSH 0x5b69e3                       ; 00413b4e
    PUSH 0x2c                           ; 00413b53
    MOV EAX,dword ptr [EBX]             ; 00413b55
    PUSH EBX                            ; 00413b57
    CALL dword ptr [EAX + 0x28]         ; 00413b58
    ADD ESP,0x24                        ; 00413b5b
    PUSH 0x2                            ; 00413b5e
    PUSH 0x0                            ; 00413b60
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00413b62
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00413b67
    PUSH 0x2                            ; 00413b6a
    PUSH 0x0                            ; 00413b6c
    MOV dword ptr [EBX + 0x44],EAX      ; 00413b6e
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00413b71
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00413b76
    PUSH 0x2                            ; 00413b79
    PUSH 0x0                            ; 00413b7b
    MOV dword ptr [EBX + 0x48],EAX      ; 00413b7d
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00413b80
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00413b85
    PUSH 0x2                            ; 00413b88
    PUSH 0x0                            ; 00413b8a
    MOV dword ptr [EBX + 0x4c],EAX      ; 00413b8c
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00413b8f
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00413b94
    MOV dword ptr [EBX + 0x50],EAX      ; 00413b97
    MOV EAX,EBX                         ; 00413b9a
    ADD EBX,0x18                        ; 00413b9c
    ADD EAX,0x4                         ; 00413b9f
        ;   Label: LAB_00413b9f
    MOV dword ptr [EAX + 0x54],0x0      ; 00413ba2
    CMP EAX,EBX                         ; 00413ba9
    JNZ 0x00413b9f                      ; 00413bab
        ;   XREF to: 00413b9f (CONDITIONAL_JUMP)  ; LAB_00413b9f
    POP EBP                             ; 00413bad
    POP EDI                             ; 00413bae
    POP ESI                             ; 00413baf
    POP EBX                             ; 00413bb0
    RET                                 ; 00413bb1
    LEA EAX,[EBX + 0x4]                 ; 00413bb2
        ;   Label: LAB_00413bb2
    PUSH EAX                            ; 00413bb5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00413bb6
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00413bbb
    PUSH 0x7e0010                       ; 00413bbe
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00413bc3
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00413bc8
    PUSH 0x7e0024                       ; 00413bcb
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00413bd0
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00413bd5
    PUSH 0x7e0038                       ; 00413bd8
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00413bdd
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00413be2
    PUSH 0x7e004c                       ; 00413be5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00413bea
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00413bef
    PUSH 0x7e0060                       ; 00413bf2
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00413bf7
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00413bfc
    MOV EAX,EBX                         ; 00413bff
    ADD EAX,0x4                         ; 00413c01
        ;   Label: LAB_00413c01
    MOV dword ptr [EAX + 0x930],0x0     ; 00413c04
    CMP EAX,ESI                         ; 00413c0e
    JNZ 0x00413c01                      ; 00413c10
        ;   XREF to: 00413c01 (CONDITIONAL_JUMP)  ; LAB_00413c01
    MOV EAX,EBX                         ; 00413c12
    LEA ESI,[EBX + 0xc]                 ; 00413c14
    ADD EAX,0x4                         ; 00413c17
        ;   Label: LAB_00413c17
    MOV dword ptr [EAX + 0x34],0xffffffff ; 00413c1a
    CMP EAX,ESI                         ; 00413c21
    JNZ 0x00413c17                      ; 00413c23
        ;   XREF to: 00413c17 (CONDITIONAL_JUMP)  ; LAB_00413c17
    MOV EAX,EBX                         ; 00413c25
    LEA ESI,[EBX + 0xc]                 ; 00413c27
    ADD EAX,0x4                         ; 00413c2a
        ;   Label: LAB_00413c2a
    MOV dword ptr [EAX + 0x40],0x0      ; 00413c2d
    CMP EAX,ESI                         ; 00413c34
    JNZ 0x00413c2a                      ; 00413c36
        ;   XREF to: 00413c2a (CONDITIONAL_JUMP)  ; LAB_00413c2a
    MOV ESI,dword ptr [EBX + 0x20]      ; 00413c38
    XOR EDI,EDI                         ; 00413c3b
    TEST ESI,ESI                        ; 00413c3d
    JLE 0x00413c60                      ; 00413c3f
        ;   XREF to: 00413c60 (CONDITIONAL_JUMP)  ; LAB_00413c60
    LEA ESI,[EBX + 0x70]                ; 00413c41
    PUSH ESI                            ; 00413c44
        ;   Label: LAB_00413c44
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 00413c45
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    INC EDI                             ; 00413c4a
    ADD ESP,0x4                         ; 00413c4b
    MOV EBP,dword ptr [EBX + 0x20]      ; 00413c4e
    ADD ESI,0x2c                        ; 00413c51
    CMP EDI,EBP                         ; 00413c54
    JL 0x00413c44                       ; 00413c56
        ;   XREF to: 00413c44 (CONDITIONAL_JUMP)  ; LAB_00413c44
    LEA EAX,[EAX]                       ; 00413c58
    MOV EDX,EDX                         ; 00413c5e
    MOV EAX,EBX                         ; 00413c60
        ;   Label: LAB_00413c60
    LEA ESI,[EBX + 0x18]                ; 00413c62
    ADD EAX,0x4                         ; 00413c65
        ;   Label: LAB_00413c65
    MOV dword ptr [EAX + 0x54],0x0      ; 00413c68
    CMP EAX,ESI                         ; 00413c6f
    JNZ 0x00413c65                      ; 00413c71
        ;   XREF to: 00413c65 (CONDITIONAL_JUMP)  ; LAB_00413c65
    MOV dword ptr [EBX + 0x1c],0x0      ; 00413c73
    MOV dword ptr [EBX + 0x20],0x0      ; 00413c7a
    MOV dword ptr [EBX + 0x28],0x0      ; 00413c81
    MOV dword ptr [EBX + 0x2c],0x0      ; 00413c88
    MOV dword ptr [EBX + 0x30],0x0      ; 00413c8f
    MOV dword ptr [EBX + 0x54],0x0      ; 00413c96
    MOV dword ptr [EBX + 0x24],0x0      ; 00413c9d
    MOV dword ptr [EBX + 0x34],0x0      ; 00413ca4
    MOV EAX,0xffffffff                  ; 00413cab
    MOV dword ptr [EBX + 0x18],0x0      ; 00413cb0
    MOV [0x007dffb8],EAX                ; 00413cb7 | DAT_007dffb8
    MOV dword ptr [EBX + 0x930],EAX     ; 00413cbc
    POP EBP                             ; 00413cc2
    POP EDI                             ; 00413cc3
    POP ESI                             ; 00413cc4
    POP EBX                             ; 00413cc5
    RET                                 ; 00413cc6

