; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004de860(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004d21c0 at 004d2335
;   FUN_004d23d0 at 004d2480
;
; Referenced Globals:
;   string s_taylor_head.kfm_0058a8ae
;   string s_moon.kfm_0058a8be
;   string s_menubat.kfm_0058a8c7
;   string s_menucld2_0058a8d3
;   string s_menu1.pth_0058a8dc
;   string s_menu2.pth_0058a8e6
;   string s_menu3.pth_0058a8f0
;   string s_noc00000_0058a96e
;   string s_noc00001_0058a977
;   undefined4 DAT_005b9354
;   void* PTR_s_noc00000_005bb198 = 0058a96e
;   undefined1* PTR_s_noc00001_005bb19c = 0058a977
;   undefined4 DAT_005bb210
;   undefined4 DAT_01c77800
;   undefined4 DAT_01ccdc50
;   ... and 1 more
;
; Called Functions:
;   FUN_0040dda0
;   FUN_0040e3c0
;   FUN_0043b690
;   FUN_00452650
;   FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de860
        ;   Label: FUN_004de860
    PUSH ESI                            ; 004de861
    PUSH EDI                            ; 004de862
    PUSH EBP                            ; 004de863
    SUB ESP,0x4                         ; 004de864
    MOV EDI,dword ptr [ESP + 0x18]      ; 004de867
    CMP dword ptr [EDI],0x0             ; 004de86b
    JZ 0x004de970                       ; 004de86e
        ;   XREF to: 004de970 (CONDITIONAL_JUMP)  ; LAB_004de970
    MOV ESI,0x3                         ; 004de874
        ;   Label: LAB_004de874
    MOV dword ptr [EDI + 0x4],0x3e800000 ; 004de879
    XOR EBX,EBX                         ; 004de880
    CALL FUN_0056488c                   ; 004de882
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
        ;   Label: LAB_004de882
    MOV EDX,EAX                         ; 004de887
    SAR EDX,0x1f                        ; 004de889
    IDIV ESI                            ; 004de88c
    MOV dword ptr [EBX + 0x1ccdeec],EDX ; 004de88e
    IMUL EDX,EDX,0xc                    ; 004de894
    ADD EDX,0x1ccdec8                   ; 004de897
    MOV EDX,dword ptr [EDX]             ; 004de89d
    MOV dword ptr [ESP],EDX             ; 004de89f
    FILD dword ptr [ESP]                ; 004de8a2
    SUB ESP,0x4                         ; 004de8a5
    FSTP float ptr [ESP]                ; 004de8a8
    PUSH 0x0                            ; 004de8ab
    CALL FUN_0040dda0                   ; 004de8ad
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004de8b2
    MOV EDX,dword ptr [0x01cce2bc]      ; 004de8b6 | DAT_01cce2bc
    FLD float ptr [ESP + 0x8]           ; 004de8bc
    ADD ESP,0x8                         ; 004de8c0
    MOV dword ptr [ESP],EDX             ; 004de8c3
    FCHS                                ; 004de8c6
    FILD dword ptr [ESP]                ; 004de8c8
    SUB ESP,0x4                         ; 004de8cb
    FXCH                                ; 004de8ce
    FSTP float ptr [EBX + 0x1ccdef0]    ; 004de8d0
    FSTP float ptr [ESP]                ; 004de8d6
    PUSH 0x0                            ; 004de8d9
    CALL FUN_0040dda0                   ; 004de8db
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004de8e0
    FLD float ptr [ESP + 0x8]           ; 004de8e4
    ADD ESP,0x8                         ; 004de8e8
    PUSH 0x40a00000                     ; 004de8eb
    PUSH 0xc0a00000                     ; 004de8f0
    FSTP float ptr [EBX + 0x1ccdef4]    ; 004de8f5
    CALL FUN_0040dda0                   ; 004de8fb
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004de900
    FLD float ptr [ESP + 0x8]           ; 004de904
    ADD ESP,0x8                         ; 004de908
    PUSH 0x40a00000                     ; 004de90b
    PUSH 0xc0a00000                     ; 004de910
    FSTP float ptr [EBX + 0x1ccdef8]    ; 004de915
    CALL FUN_0040dda0                   ; 004de91b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004de920
    FLD float ptr [ESP + 0x8]           ; 004de924
    ADD ESP,0x8                         ; 004de928
    PUSH 0x40a00000                     ; 004de92b
    PUSH 0xc0a00000                     ; 004de930
    FSTP float ptr [EBX + 0x1ccdefc]    ; 004de935
    CALL FUN_0040dda0                   ; 004de93b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004de940
    ADD EBX,0x18                        ; 004de944
    MOV EAX,dword ptr [ESP + 0x8]       ; 004de947
    MOV dword ptr [EBX + 0x1ccdee8],EAX ; 004de94b
    ADD ESP,0x8                         ; 004de951
    CMP EBX,0x2d0                       ; 004de954
    JNZ 0x004de882                      ; 004de95a
        ;   XREF to: 004de882 (CONDITIONAL_JUMP)  ; LAB_004de882
    XOR EDX,EDX                         ; 004de960
    MOV dword ptr [0x005bb210],EDX      ; 004de962 | DAT_005bb210
    ADD ESP,0x4                         ; 004de968
    POP EBP                             ; 004de96b
    POP EDI                             ; 004de96c
    POP ESI                             ; 004de96d
    POP EBX                             ; 004de96e
    RET                                 ; 004de96f
    MOV EDX,dword ptr [0x005b9354]      ; 004de970 | DAT_005b9354
        ;   Label: LAB_004de970
    MOV ECX,dword ptr [EDX + 0x214]     ; 004de976 | DAT_01c77800
    LEA EAX,[EDI + 0x8]                 ; 004de97c
    CMP ECX,0x29a                       ; 004de97f
    JNZ 0x004dea43                      ; 004de985
        ;   XREF to: 004dea43 (CONDITIONAL_JUMP)  ; LAB_004dea43
    PUSH 0x58a8ae                       ; 004de98b | = "taylor_head.kfm"
    PUSH EAX                            ; 004de990
    CALL FUN_00452650                   ; 004de991
        ;   XREF to: 00452650 (UNCONDITIONAL_CALL)  ; undefined FUN_00452650()
    MOV EAX,[0x005b9354]                ; 004de996 | DAT_005b9354
    ADD ESP,0x8                         ; 004de99b
    MOV dword ptr [EAX + 0x214],0x0     ; 004de99e | DAT_01c77800
    PUSH 0x58a8c7                       ; 004de9a8 | = "menubat.kfm"
        ;   Label: LAB_004de9a8
    PUSH 0x1cce1bc                      ; 004de9ad
    CALL FUN_00452650                   ; 004de9b2
        ;   XREF to: 00452650 (UNCONDITIONAL_CALL)  ; undefined FUN_00452650()
    ADD ESP,0x8                         ; 004de9b7
    PUSH 0x100                          ; 004de9ba
    PUSH 0x100                          ; 004de9bf
    PUSH 0x58a8d3                       ; 004de9c4 | = "menucld2"
    PUSH 0x1ccdc50                      ; 004de9c9 | DAT_01ccdc50
    MOV ESI,0x1ccdc64                   ; 004de9ce
    XOR EBX,EBX                         ; 004de9d3
    CALL FUN_0040e3c0                   ; 004de9d5
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e3c0()
    ADD ESP,0x10                        ; 004de9da
    PUSH 0x116                          ; 004de9dd
        ;   Label: LAB_004de9dd
    PUSH 0x280                          ; 004de9e2
    MOV EBP,dword ptr [EBX + 0x5bb198]  ; 004de9e7 | PTR_s_noc00000_005bb198 | PTR_s_noc00001_005bb19c
    PUSH EBP                            ; 004de9ed | = "noc00000" | s_noc00001_0058a977
    PUSH ESI                            ; 004de9ee
    ADD EBX,0x4                         ; 004de9ef
    CALL FUN_0040e3c0                   ; 004de9f2
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e3c0()
    ADD ESP,0x10                        ; 004de9f7
    ADD ESI,0x14                        ; 004de9fa
    CMP EBX,0x78                        ; 004de9fd
    JNZ 0x004de9dd                      ; 004dea00
        ;   XREF to: 004de9dd (CONDITIONAL_JUMP)  ; LAB_004de9dd
    PUSH 0x58a8dc                       ; 004dea02 | = "menu1.pth"
    PUSH 0x1ccdec8                      ; 004dea07
    MOV dword ptr [EDI],0x1             ; 004dea0c
    CALL FUN_0043b690                   ; 004dea12
        ;   XREF to: 0043b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b690()
    ADD ESP,0x8                         ; 004dea17
    PUSH 0x58a8e6                       ; 004dea1a | = "menu2.pth"
    PUSH 0x1ccded4                      ; 004dea1f
    CALL FUN_0043b690                   ; 004dea24
        ;   XREF to: 0043b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b690()
    ADD ESP,0x8                         ; 004dea29
    PUSH 0x58a8f0                       ; 004dea2c | = "menu3.pth"
    PUSH 0x1ccdee0                      ; 004dea31
    CALL FUN_0043b690                   ; 004dea36
        ;   XREF to: 0043b690 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b690()
    ADD ESP,0x8                         ; 004dea3b
    JMP 0x004de874                      ; 004dea3e
        ;   XREF to: 004de874 (UNCONDITIONAL_JUMP)  ; LAB_004de874
    PUSH 0x58a8be                       ; 004dea43 | = "moon.kfm"
        ;   Label: LAB_004dea43
    PUSH EAX                            ; 004dea48
    CALL FUN_00452650                   ; 004dea49
        ;   XREF to: 00452650 (UNCONDITIONAL_CALL)  ; undefined FUN_00452650()
    ADD ESP,0x8                         ; 004dea4e
    JMP 0x004de9a8                      ; 004dea51
        ;   XREF to: 004de9a8 (UNCONDITIONAL_JUMP)  ; LAB_004de9a8

