; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_FUN_00468870(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   x1
; int *            Stack[0xc]:4   y1
; int *            Stack[0x10]:4   x2
; int *            Stack[0x14]:4   y2
; int              Stack[0x18]:4   clip_left
; int              Stack[0x1c]:4   clip_top
; int              Stack[0x20]:4   clip_right
; int              Stack[0x24]:4   clip_bottom
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_004683f0 at 00468451
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468870
        ;   Label: cockpit_drawsurf.cpp_FUN_00468870
    PUSH ESI                            ; 00468871
    PUSH EDI                            ; 00468872
    PUSH EBP                            ; 00468873
    SUB ESP,0x48                        ; 00468874
    MOV EBP,dword ptr [ESP + 0x60]      ; 00468877
    MOV EDI,dword ptr [ESP + 0x64]      ; 0046887b
    MOV ECX,dword ptr [ESP + 0x70]      ; 0046887f
    MOV dword ptr [ESP + 0xc],ECX       ; 00468883
    MOV ECX,dword ptr [ESP + 0x74]      ; 00468887
    MOV EBX,dword ptr [EDI]             ; 0046888b
    MOV dword ptr [ESP + 0x4],ECX       ; 0046888d
    MOV ECX,dword ptr [ESP + 0x78]      ; 00468891
    MOV ESI,dword ptr [EBP]             ; 00468895
    MOV dword ptr [ESP + 0x14],ECX      ; 00468898
    XOR ECX,ECX                         ; 0046889c
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0046889e
    JLE 0x004688a9                      ; 004688a2
        ;   XREF to: 004688a9 (CONDITIONAL_JUMP)  ; LAB_004688a9
    MOV ECX,0x1                         ; 004688a4
    CMP EBX,dword ptr [ESP + 0x4]       ; 004688a9
        ;   Label: LAB_004688a9
    JGE 0x004688b2                      ; 004688ad
        ;   XREF to: 004688b2 (CONDITIONAL_JUMP)  ; LAB_004688b2
    OR CL,0x2                           ; 004688af
    CMP ESI,dword ptr [ESP + 0x14]      ; 004688b2
        ;   Label: LAB_004688b2
    JLE 0x004688bb                      ; 004688b6
        ;   XREF to: 004688bb (CONDITIONAL_JUMP)  ; LAB_004688bb
    OR CL,0x4                           ; 004688b8
    CMP ESI,dword ptr [ESP + 0xc]       ; 004688bb
        ;   Label: LAB_004688bb
    JGE 0x004688c4                      ; 004688bf
        ;   XREF to: 004688c4 (CONDITIONAL_JUMP)  ; LAB_004688c4
    OR CL,0x8                           ; 004688c1
    MOV ESI,dword ptr [ESP + 0x68]      ; 004688c4
        ;   Label: LAB_004688c4
    MOV dword ptr [ESP + 0x44],ECX      ; 004688c8
    MOV ECX,dword ptr [ESP + 0x70]      ; 004688cc
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004688d0
    MOV dword ptr [ESP + 0x8],ECX       ; 004688d4
    MOV ECX,dword ptr [ESP + 0x74]      ; 004688d8
    MOV ESI,dword ptr [ESI]             ; 004688dc
    MOV dword ptr [ESP + 0x10],ECX      ; 004688de
    MOV ECX,dword ptr [ESP + 0x78]      ; 004688e2
    MOV EBX,dword ptr [EBX]             ; 004688e6
    MOV dword ptr [ESP],ECX             ; 004688e8
    XOR ECX,ECX                         ; 004688eb
    CMP EBX,dword ptr [ESP + 0x7c]      ; 004688ed
    JLE 0x004688f8                      ; 004688f1
        ;   XREF to: 004688f8 (CONDITIONAL_JUMP)  ; LAB_004688f8
    MOV ECX,0x1                         ; 004688f3
    CMP EBX,dword ptr [ESP + 0x10]      ; 004688f8
        ;   Label: LAB_004688f8
    JGE 0x00468901                      ; 004688fc
        ;   XREF to: 00468901 (CONDITIONAL_JUMP)  ; LAB_00468901
    OR CL,0x2                           ; 004688fe
    CMP ESI,dword ptr [ESP]             ; 00468901
        ;   Label: LAB_00468901
    JLE 0x00468909                      ; 00468904
        ;   XREF to: 00468909 (CONDITIONAL_JUMP)  ; LAB_00468909
    OR CL,0x4                           ; 00468906
    CMP ESI,dword ptr [ESP + 0x8]       ; 00468909
        ;   Label: LAB_00468909
    JL 0x0046895a                       ; 0046890d
        ;   XREF to: 0046895a (CONDITIONAL_JUMP)  ; LAB_0046895a
    XOR ESI,ESI                         ; 0046890f
        ;   Label: LAB_0046890f
    MOV dword ptr [ESP + 0x3c],ECX      ; 00468911
    MOV dword ptr [ESP + 0x38],ESI      ; 00468915
    MOV ECX,dword ptr [ESP + 0x68]      ; 00468919
        ;   Label: LAB_00468919
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0046891d
    MOV EBX,dword ptr [EBP]             ; 00468921
    MOV ECX,dword ptr [ECX]             ; 00468924
    MOV ESI,dword ptr [ESI]             ; 00468926
    SUB ECX,EBX                         ; 00468928
    SUB ESI,dword ptr [EDI]             ; 0046892a
    CMP dword ptr [ESP + 0x44],0x0      ; 0046892c
    JZ 0x0046895f                       ; 00468931
        ;   XREF to: 0046895f (CONDITIONAL_JUMP)  ; LAB_0046895f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00468933
        ;   Label: LAB_00468933
    TEST dword ptr [ESP + 0x3c],EBX     ; 00468937
    JZ 0x00468970                       ; 0046893b
        ;   XREF to: 00468970 (CONDITIONAL_JUMP)  ; LAB_00468970
    XOR ESI,ESI                         ; 0046893d
    MOV dword ptr [ESP + 0x18],ESI      ; 0046893f
    CMP dword ptr [ESP + 0x38],0x64     ; 00468943
        ;   Label: LAB_00468943
    JZ 0x00468b23                       ; 00468948
        ;   XREF to: 00468b23 (CONDITIONAL_JUMP)  ; LAB_00468b23
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046894e
    ADD ESP,0x48                        ; 00468952
    POP EBP                             ; 00468955
    POP EDI                             ; 00468956
    POP ESI                             ; 00468957
    POP EBX                             ; 00468958
    RET                                 ; 00468959
    OR CL,0x8                           ; 0046895a
        ;   Label: LAB_0046895a
    JMP 0x0046890f                      ; 0046895d
        ;   XREF to: 0046890f (UNCONDITIONAL_JUMP)  ; LAB_0046890f
    CMP dword ptr [ESP + 0x3c],0x0      ; 0046895f
        ;   Label: LAB_0046895f
    JNZ 0x00468933                      ; 00468964
        ;   XREF to: 00468933 (CONDITIONAL_JUMP)  ; LAB_00468933
    MOV dword ptr [ESP + 0x18],0x1      ; 00468966
    JMP 0x00468943                      ; 0046896e
        ;   XREF to: 00468943 (UNCONDITIONAL_JUMP)  ; LAB_00468943
    TEST EBX,EBX                        ; 00468970
        ;   Label: LAB_00468970
    JZ 0x00468a0f                       ; 00468972
        ;   XREF to: 00468a0f (CONDITIONAL_JUMP)  ; LAB_00468a0f
    MOV dword ptr [ESP + 0x40],EBX      ; 00468978
        ;   Label: LAB_00468978
    MOV BL,byte ptr [ESP + 0x40]        ; 0046897c
    TEST BL,0x1                         ; 00468980
    JZ 0x00468a18                       ; 00468983
        ;   XREF to: 00468a18 (CONDITIONAL_JUMP)  ; LAB_00468a18
    TEST ESI,ESI                        ; 00468989
    JZ 0x004689ad                       ; 0046898b
        ;   XREF to: 004689ad (CONDITIONAL_JUMP)  ; LAB_004689ad
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046898d
    MOV EBX,dword ptr [EDI]             ; 00468991
    MOV EDX,0x10000                     ; 00468993
    SUB EAX,EBX                         ; 00468998
    MOV EBX,ESI                         ; 0046899a
    IMUL EDX                            ; 0046899c
    IDIV EBX                            ; 0046899e
    MOV EDX,ECX                         ; 004689a0
    IMUL EDX                            ; 004689a2
    SHRD EAX,EDX,0x10                   ; 004689a4
    MOV EDX,dword ptr [EBP]             ; 004689a8
    ADD EDX,EAX                         ; 004689ab
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004689ad
        ;   Label: LAB_004689ad
    CMP dword ptr [ESP + 0x44],0x0      ; 004689b1
        ;   Label: LAB_004689b1
    JZ 0x00468aae                       ; 004689b6
        ;   XREF to: 00468aae (CONDITIONAL_JUMP)  ; LAB_00468aae
    MOV ECX,dword ptr [ESP + 0x70]      ; 004689bc
    MOV ESI,EAX                         ; 004689c0
    MOV dword ptr [EBP],EDX             ; 004689c2
    MOV dword ptr [ESP + 0x24],ECX      ; 004689c5
    MOV ECX,dword ptr [ESP + 0x74]      ; 004689c9
    MOV dword ptr [EDI],EAX             ; 004689cd
    MOV dword ptr [ESP + 0x1c],ECX      ; 004689cf
    MOV ECX,dword ptr [ESP + 0x78]      ; 004689d3
    MOV EBX,dword ptr [EBP]             ; 004689d7
    MOV dword ptr [ESP + 0x2c],ECX      ; 004689da
    XOR ECX,ECX                         ; 004689de
    CMP EAX,dword ptr [ESP + 0x7c]      ; 004689e0
    JLE 0x004689eb                      ; 004689e4
        ;   XREF to: 004689eb (CONDITIONAL_JUMP)  ; LAB_004689eb
    MOV ECX,0x1                         ; 004689e6
    CMP ESI,dword ptr [ESP + 0x1c]      ; 004689eb
        ;   Label: LAB_004689eb
    JGE 0x004689f4                      ; 004689ef
        ;   XREF to: 004689f4 (CONDITIONAL_JUMP)  ; LAB_004689f4
    OR CL,0x2                           ; 004689f1
    CMP EBX,dword ptr [ESP + 0x2c]      ; 004689f4
        ;   Label: LAB_004689f4
    JLE 0x004689fd                      ; 004689f8
        ;   XREF to: 004689fd (CONDITIONAL_JUMP)  ; LAB_004689fd
    OR CL,0x4                           ; 004689fa
    CMP EBX,dword ptr [ESP + 0x24]      ; 004689fd
        ;   Label: LAB_004689fd
    JGE 0x00468a06                      ; 00468a01
        ;   XREF to: 00468a06 (CONDITIONAL_JUMP)  ; LAB_00468a06
    OR CL,0x8                           ; 00468a03
    MOV dword ptr [ESP + 0x44],ECX      ; 00468a06
        ;   Label: LAB_00468a06
    JMP 0x00468b0c                      ; 00468a0a
        ;   XREF to: 00468b0c (UNCONDITIONAL_JUMP)  ; LAB_00468b0c
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00468a0f
        ;   Label: LAB_00468a0f
    JMP 0x00468978                      ; 00468a13
        ;   XREF to: 00468978 (UNCONDITIONAL_JUMP)  ; LAB_00468978
    TEST BL,0x2                         ; 00468a18
        ;   Label: LAB_00468a18
    JZ 0x00468a4a                       ; 00468a1b
        ;   XREF to: 00468a4a (CONDITIONAL_JUMP)  ; LAB_00468a4a
    TEST ESI,ESI                        ; 00468a1d
    JZ 0x00468a41                       ; 00468a1f
        ;   XREF to: 00468a41 (CONDITIONAL_JUMP)  ; LAB_00468a41
    MOV EAX,dword ptr [ESP + 0x74]      ; 00468a21
    MOV EDX,dword ptr [EDI]             ; 00468a25
    MOV EBX,ESI                         ; 00468a27
    SUB EAX,EDX                         ; 00468a29
    MOV EDX,0x10000                     ; 00468a2b
    IMUL EDX                            ; 00468a30
    IDIV EBX                            ; 00468a32
    MOV EDX,ECX                         ; 00468a34
    IMUL EDX                            ; 00468a36
    SHRD EAX,EDX,0x10                   ; 00468a38
    MOV EDX,dword ptr [EBP]             ; 00468a3c
    ADD EDX,EAX                         ; 00468a3f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00468a41
        ;   Label: LAB_00468a41
    JMP 0x004689b1                      ; 00468a45
        ;   XREF to: 004689b1 (UNCONDITIONAL_JUMP)  ; LAB_004689b1
    TEST BL,0x4                         ; 00468a4a
        ;   Label: LAB_00468a4a
    JZ 0x00468a7a                       ; 00468a4d
        ;   XREF to: 00468a7a (CONDITIONAL_JUMP)  ; LAB_00468a7a
    TEST ECX,ECX                        ; 00468a4f
    JZ 0x00468a71                       ; 00468a51
        ;   XREF to: 00468a71 (CONDITIONAL_JUMP)  ; LAB_00468a71
    MOV EAX,dword ptr [ESP + 0x78]      ; 00468a53
    MOV EBX,dword ptr [EBP]             ; 00468a57
    MOV EDX,0x10000                     ; 00468a5a
    SUB EAX,EBX                         ; 00468a5f
    MOV EBX,ECX                         ; 00468a61
    IMUL EDX                            ; 00468a63
    IDIV EBX                            ; 00468a65
    MOV EDX,ESI                         ; 00468a67
    IMUL EDX                            ; 00468a69
    SHRD EAX,EDX,0x10                   ; 00468a6b
    ADD EAX,dword ptr [EDI]             ; 00468a6f
    MOV EDX,dword ptr [ESP + 0x78]      ; 00468a71
        ;   Label: LAB_00468a71
    JMP 0x004689b1                      ; 00468a75
        ;   XREF to: 004689b1 (UNCONDITIONAL_JUMP)  ; LAB_004689b1
    TEST BL,0x8                         ; 00468a7a
        ;   Label: LAB_00468a7a
    JZ 0x004689b1                       ; 00468a7d
        ;   XREF to: 004689b1 (CONDITIONAL_JUMP)  ; LAB_004689b1
    TEST ECX,ECX                        ; 00468a83
    JZ 0x00468aa5                       ; 00468a85
        ;   XREF to: 00468aa5 (CONDITIONAL_JUMP)  ; LAB_00468aa5
    MOV EAX,dword ptr [ESP + 0x70]      ; 00468a87
    MOV EDX,dword ptr [EBP]             ; 00468a8b
    MOV EBX,ECX                         ; 00468a8e
    SUB EAX,EDX                         ; 00468a90
    MOV EDX,0x10000                     ; 00468a92
    IMUL EDX                            ; 00468a97
    IDIV EBX                            ; 00468a99
    MOV EDX,ESI                         ; 00468a9b
    IMUL EDX                            ; 00468a9d
    SHRD EAX,EDX,0x10                   ; 00468a9f
    ADD EAX,dword ptr [EDI]             ; 00468aa3
    MOV EDX,dword ptr [ESP + 0x70]      ; 00468aa5
        ;   Label: LAB_00468aa5
    JMP 0x004689b1                      ; 00468aa9
        ;   XREF to: 004689b1 (UNCONDITIONAL_JUMP)  ; LAB_004689b1
    MOV ECX,dword ptr [ESP + 0x68]      ; 00468aae
        ;   Label: LAB_00468aae
    MOV dword ptr [ECX],EDX             ; 00468ab2
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00468ab4
    MOV dword ptr [ECX],EAX             ; 00468ab8
    MOV ECX,dword ptr [ESP + 0x70]      ; 00468aba
    MOV EBX,dword ptr [ESP + 0x68]      ; 00468abe
    MOV dword ptr [ESP + 0x20],ECX      ; 00468ac2
    MOV ECX,dword ptr [ESP + 0x74]      ; 00468ac6
    MOV dword ptr [ESP + 0x34],EAX      ; 00468aca
    MOV dword ptr [ESP + 0x28],ECX      ; 00468ace
    MOV ECX,dword ptr [ESP + 0x78]      ; 00468ad2
    MOV EBX,dword ptr [EBX]             ; 00468ad6
    MOV dword ptr [ESP + 0x30],ECX      ; 00468ad8
    XOR ECX,ECX                         ; 00468adc
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00468ade
    JLE 0x00468ae9                      ; 00468ae2
        ;   XREF to: 00468ae9 (CONDITIONAL_JUMP)  ; LAB_00468ae9
    MOV ECX,0x1                         ; 00468ae4
    MOV ESI,dword ptr [ESP + 0x34]      ; 00468ae9
        ;   Label: LAB_00468ae9
    CMP ESI,dword ptr [ESP + 0x28]      ; 00468aed
    JGE 0x00468af6                      ; 00468af1
        ;   XREF to: 00468af6 (CONDITIONAL_JUMP)  ; LAB_00468af6
    OR CL,0x2                           ; 00468af3
    CMP EBX,dword ptr [ESP + 0x30]      ; 00468af6
        ;   Label: LAB_00468af6
    JLE 0x00468aff                      ; 00468afa
        ;   XREF to: 00468aff (CONDITIONAL_JUMP)  ; LAB_00468aff
    OR CL,0x4                           ; 00468afc
    CMP EBX,dword ptr [ESP + 0x20]      ; 00468aff
        ;   Label: LAB_00468aff
    JGE 0x00468b08                      ; 00468b03
        ;   XREF to: 00468b08 (CONDITIONAL_JUMP)  ; LAB_00468b08
    OR CL,0x8                           ; 00468b05
    MOV dword ptr [ESP + 0x3c],ECX      ; 00468b08
        ;   Label: LAB_00468b08
    MOV ECX,dword ptr [ESP + 0x38]      ; 00468b0c
        ;   Label: LAB_00468b0c
    INC ECX                             ; 00468b10
    MOV dword ptr [ESP + 0x38],ECX      ; 00468b11
    CMP ECX,0x64                        ; 00468b15
    JL 0x00468919                       ; 00468b18
        ;   XREF to: 00468919 (CONDITIONAL_JUMP)  ; LAB_00468919
    JMP 0x00468943                      ; 00468b1e
        ;   XREF to: 00468943 (UNCONDITIONAL_JUMP)  ; LAB_00468943
    MOV EBP,0x5bc274                    ; 00468b23
        ;   Label: LAB_00468b23
    MOV EAX,0x36a                       ; 00468b28
    PUSH 0x5bc28c                       ; 00468b2d
    MOV dword ptr [0x01d71de0],EBP      ; 00468b32 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00468b38 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00468b3d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00468b42
    MOV EAX,dword ptr [ESP + 0x18]      ; 00468b45
    ADD ESP,0x48                        ; 00468b49
    POP EBP                             ; 00468b4c
    POP EDI                             ; 00468b4d
    POP ESI                             ; 00468b4e
    POP EBX                             ; 00468b4f
    RET                                 ; 00468b50

