; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00581660(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_batwing_cth_005ed9a8
;   TerminatedCString s_noscape_cth_005ed9b4
;   TerminatedCString s_nosskirt_cth_005ed9c0
;   TerminatedCString s_Bip01_Spine2_005ed9cd
;   undefined4 DAT_0268014c
;
; Called Functions:
;   FUN_00487eb0
;   FUN_00540e80
;   FUN_00544e60
;   FUN_00544ee0
;   FUN_00546ae0
;   FUN_00547480
;   FUN_00547890
;   FUN_005adeb0
;   FUN_005ae680
;   FUN_005b6f80
;   FUN_005b70d0
;   FUN_005b71d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581660
        ;   Label: FUN_00581660
    PUSH ESI                            ; 00581661
    PUSH EDI                            ; 00581662
    PUSH EBP                            ; 00581663
    SUB ESP,0x10                        ; 00581664
    MOV EBX,dword ptr [ESP + 0x24]      ; 00581667
    PUSH EBX                            ; 0058166b
    CALL FUN_00487eb0                   ; 0058166c
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 00581671
    LEA EDI,[EBX + 0x2b4]               ; 00581674
    PUSH EDI                            ; 0058167a
    CALL FUN_00547480                   ; 0058167b
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 00581680
    LEA EBP,[EBX + 0x10af8]             ; 00581683
    PUSH EBP                            ; 00581689
    CALL FUN_00547480                   ; 0058168a
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 0058168f
    PUSH 0x5ed9a8                       ; 00581692 | = "batwing.cth"
    LEA EAX,[EBX + 0x12dac]             ; 00581697
    PUSH EAX                            ; 0058169d
    MOV dword ptr [ESP + 0x10],EAX      ; 0058169e
    CALL FUN_005adeb0                   ; 005816a2
        ;   XREF to: 005adeb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005adeb0()
    ADD ESP,0x8                         ; 005816a7
    PUSH EBP                            ; 005816aa
    LEA EAX,[EBX + 0x30]                ; 005816ab
    PUSH EAX                            ; 005816ae
    LEA ESI,[EBX + 0x20]                ; 005816af
    PUSH ESI                            ; 005816b2
    MOV dword ptr [ESP + 0xc],EAX       ; 005816b3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005816b7
    PUSH EAX                            ; 005816bb
    CALL FUN_005ae680                   ; 005816bc
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae680()
    ADD ESP,0x10                        ; 005816c1
    PUSH 0x5ed9b4                       ; 005816c4 | = "noscape.cth"
    LEA EAX,[EBX + 0x4d8dc]             ; 005816c9
    PUSH EAX                            ; 005816cf
    MOV dword ptr [ESP + 0x14],EAX      ; 005816d0
    CALL FUN_005adeb0                   ; 005816d4
        ;   XREF to: 005adeb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005adeb0()
    ADD ESP,0x8                         ; 005816d9
    PUSH EDI                            ; 005816dc
    MOV ECX,dword ptr [ESP + 0x4]       ; 005816dd
    PUSH ECX                            ; 005816e1
    PUSH ESI                            ; 005816e2
    MOV EAX,dword ptr [ESP + 0x18]      ; 005816e3
    PUSH EAX                            ; 005816e7
    CALL FUN_005ae680                   ; 005816e8
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae680()
    ADD ESP,0x10                        ; 005816ed
    PUSH 0x5ed9c0                       ; 005816f0 | = "nosskirt.cth"
    LEA EAX,[EBX + 0x8840c]             ; 005816f5
    PUSH EAX                            ; 005816fb
    MOV dword ptr [ESP + 0xc],EAX       ; 005816fc
    CALL FUN_005adeb0                   ; 00581700
        ;   XREF to: 005adeb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005adeb0()
    ADD ESP,0x8                         ; 00581705
    PUSH EDI                            ; 00581708
    MOV ECX,dword ptr [ESP + 0x4]       ; 00581709
    PUSH ECX                            ; 0058170d
    PUSH ESI                            ; 0058170e
    MOV ESI,dword ptr [ESP + 0x10]      ; 0058170f
    PUSH ESI                            ; 00581713
    CALL FUN_005ae680                   ; 00581714
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae680()
    ADD ESP,0x10                        ; 00581719
    PUSH EDI                            ; 0058171c
    CALL FUN_00544e60                   ; 0058171d
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    ADD ESP,0x4                         ; 00581722
    PUSH EDI                            ; 00581725
    CALL FUN_00546ae0                   ; 00581726
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 0058172b
    PUSH EBP                            ; 0058172e
    CALL FUN_00544e60                   ; 0058172f
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    ADD ESP,0x4                         ; 00581734
    PUSH EBP                            ; 00581737
    CALL FUN_00546ae0                   ; 00581738
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 0058173d
    PUSH EDI                            ; 00581740
    XOR EAX,EAX                         ; 00581741
    PUSH EAX                            ; 00581743
    LEA ESI,[EBX + 0xc2f40]             ; 00581744
    PUSH ESI                            ; 0058174a
    MOV [0x0268014c],EAX                ; 0058174b | DAT_0268014c
    CALL FUN_005b6f80                   ; 00581750
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    ADD ESP,0xc                         ; 00581755
    PUSH 0x0                            ; 00581758
    MOV EDX,dword ptr [ESP + 0x10]      ; 0058175a
    PUSH EDX                            ; 0058175e
    PUSH 0x0                            ; 0058175f
    PUSH ESI                            ; 00581761
    CALL FUN_005b70d0                   ; 00581762
        ;   XREF to: 005b70d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b70d0()
    ADD ESP,0x10                        ; 00581767
    PUSH 0x0                            ; 0058176a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058176c
    PUSH EAX                            ; 00581770
    PUSH 0x0                            ; 00581771
    MOV ECX,0x1                         ; 00581773
    PUSH ESI                            ; 00581778
    MOV dword ptr [0x0268014c],ECX      ; 00581779 | DAT_0268014c
    CALL FUN_005b70d0                   ; 0058177f
        ;   XREF to: 005b70d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b70d0()
    ADD ESP,0x10                        ; 00581784
    XOR EDX,EDX                         ; 00581787
    PUSH EDX                            ; 00581789
    MOV ECX,dword ptr [ESP + 0x8]       ; 0058178a
    PUSH ECX                            ; 0058178e
    PUSH EDX                            ; 0058178f
    PUSH ESI                            ; 00581790
    MOV dword ptr [0x0268014c],EDX      ; 00581791 | DAT_0268014c
    CALL FUN_005b70d0                   ; 00581797
        ;   XREF to: 005b70d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b70d0()
    ADD ESP,0x10                        ; 0058179c
    PUSH 0x0                            ; 0058179f
    MOV EDX,dword ptr [ESP + 0x8]       ; 005817a1
    PUSH EDX                            ; 005817a5
    PUSH 0x0                            ; 005817a6
    MOV EAX,0x1                         ; 005817a8
    PUSH ESI                            ; 005817ad
    MOV [0x0268014c],EAX                ; 005817ae | DAT_0268014c
    CALL FUN_005b70d0                   ; 005817b3
        ;   XREF to: 005b70d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b70d0()
    ADD ESP,0x10                        ; 005817b8
    PUSH EBP                            ; 005817bb
    PUSH 0x1                            ; 005817bc
    XOR ECX,ECX                         ; 005817be
    PUSH ESI                            ; 005817c0
    MOV dword ptr [0x0268014c],ECX      ; 005817c1 | DAT_0268014c
    CALL FUN_005b6f80                   ; 005817c7
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    ADD ESP,0xc                         ; 005817cc
    PUSH 0x0                            ; 005817cf
    MOV EAX,dword ptr [ESP + 0xc]       ; 005817d1
    PUSH EAX                            ; 005817d5
    PUSH 0x1                            ; 005817d6
    PUSH ESI                            ; 005817d8
    CALL FUN_005b70d0                   ; 005817d9
        ;   XREF to: 005b70d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b70d0()
    ADD ESP,0x10                        ; 005817de
    PUSH 0x0                            ; 005817e1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005817e3
    PUSH ECX                            ; 005817e7
    MOV EDX,0x1                         ; 005817e8
    PUSH EDX                            ; 005817ed
    PUSH ESI                            ; 005817ee
    MOV dword ptr [0x0268014c],EDX      ; 005817ef | DAT_0268014c
    CALL FUN_005b70d0                   ; 005817f5
        ;   XREF to: 005b70d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b70d0()
    ADD ESP,0x10                        ; 005817fa
    XOR EAX,EAX                         ; 005817fd
    PUSH ESI                            ; 005817ff
    MOV [0x0268014c],EAX                ; 00581800 | DAT_0268014c
    CALL FUN_005b71d0                   ; 00581805
        ;   XREF to: 005b71d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b71d0()
    ADD ESP,0x4                         ; 0058180a
    PUSH EDI                            ; 0058180d
    CALL FUN_00544ee0                   ; 0058180e
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00544ee0()
    ADD ESP,0x4                         ; 00581813
    PUSH EBP                            ; 00581816
    CALL FUN_00544ee0                   ; 00581817
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00544ee0()
    ADD ESP,0x4                         ; 0058181c
    PUSH EDI                            ; 0058181f
    MOV dword ptr [EBX + 0xfc],0x1      ; 00581820
    CALL FUN_00547890                   ; 0058182a
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 0058182f
    PUSH 0x1                            ; 00581832
    PUSH 0x5ed9cd                       ; 00581834 | = "Bip01 Spine2"
    PUSH EAX                            ; 00581839
    CALL FUN_00540e80                   ; 0058183a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    MOV dword ptr [EBX + 0x261c],0x0    ; 0058183f
    MOV dword ptr [EBX + 0xc3b7c],0x0   ; 00581849
    ADD ESP,0xc                         ; 00581853
    MOV dword ptr [EBX + 0x2618],EAX    ; 00581856
    ADD ESP,0x10                        ; 0058185c
    POP EBP                             ; 0058185f
    POP EDI                             ; 00581860
    POP ESI                             ; 00581861
    POP EBX                             ; 00581862
    RET                                 ; 00581863

