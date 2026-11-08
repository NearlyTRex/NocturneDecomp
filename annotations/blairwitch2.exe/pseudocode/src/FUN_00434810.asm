; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00434810(int param_1,int *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004bb9b0 at 004bbd3c
;
; Called Functions:
;   FUN_004343b0
;   FUN_004343f0
;   FUN_00434570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434810
        ;   Label: FUN_00434810
    PUSH ESI                            ; 00434811
    PUSH EDI                            ; 00434812
    PUSH EBP                            ; 00434813
    SUB ESP,0x4                         ; 00434814
    MOV EBX,dword ptr [ESP + 0x18]      ; 00434817
    LEA ESI,[EBX + 0x4]                 ; 0043481b
    LEA EAX,[EBX + 0x18]                ; 0043481e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00434821
    MOV dword ptr [ESP],EAX             ; 00434825
    CMP dword ptr [EBX + 0x34],0x0      ; 00434828
        ;   Label: LAB_00434828
    JGE 0x00434860                      ; 0043482c
        ;   XREF to: 00434860 (CONDITIONAL_JUMP)  ; LAB_00434860
    PUSH EBP                            ; 0043482e
        ;   Label: LAB_0043482e
    MOV EAX,dword ptr [EBP]             ; 0043482f
    CALL dword ptr [EAX + 0x4]          ; 00434832
    ADD ESP,0x4                         ; 00434835
    TEST EAX,EAX                        ; 00434838
    JL 0x004348df                       ; 0043483a
        ;   XREF to: 004348df (CONDITIONAL_JUMP)  ; LAB_004348df
    MOV EDX,dword ptr [EBX + 0x30]      ; 00434840
    MOV EDI,dword ptr [EBX + 0x28]      ; 00434843
    PUSH EDX                            ; 00434846
    AND EDI,EAX                         ; 00434847
    PUSH EDI                            ; 00434849
    PUSH ESI                            ; 0043484a
    CALL FUN_004343b0                   ; 0043484b
        ;   XREF to: 004343b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004343b0()
    ADD ESP,0xc                         ; 00434850
    TEST EAX,EAX                        ; 00434853
    JL 0x004348ee                       ; 00434855
        ;   XREF to: 004348ee (CONDITIONAL_JUMP)  ; LAB_004348ee
    MOV dword ptr [EBX + 0x30],EAX      ; 0043485b
    JMP 0x00434828                      ; 0043485e
        ;   XREF to: 00434828 (UNCONDITIONAL_JUMP)  ; LAB_00434828
    MOV ECX,dword ptr [ESP + 0x20]      ; 00434860
        ;   Label: LAB_00434860
    PUSH ECX                            ; 00434864
    MOV EDI,dword ptr [ESP + 0x4]       ; 00434865
    PUSH EDI                            ; 00434869
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043486a
    PUSH EAX                            ; 0043486d
    PUSH ESI                            ; 0043486e
    CALL FUN_00434570                   ; 0043486f
        ;   XREF to: 00434570 (UNCONDITIONAL_CALL)  ; undefined FUN_00434570()
    ADD ESP,0x10                        ; 00434874
    MOV EDI,EAX                         ; 00434877
    TEST EAX,EAX                        ; 00434879
    JZ 0x00434887                       ; 0043487b
        ;   XREF to: 00434887 (CONDITIONAL_JUMP)  ; LAB_00434887
    CMP EAX,-0x1                        ; 0043487d
    JZ 0x004348c6                       ; 00434880
        ;   XREF to: 004348c6 (CONDITIONAL_JUMP)  ; LAB_004348c6
    CMP EAX,-0x2                        ; 00434882
    JNZ 0x004348d3                      ; 00434885
        ;   XREF to: 004348d3 (CONDITIONAL_JUMP)  ; LAB_004348d3
    MOV EDX,dword ptr [EBX + 0x38]      ; 00434887
        ;   Label: LAB_00434887
    MOV dword ptr [EBX + 0x34],0xffffffff ; 0043488a
    TEST EDX,EDX                        ; 00434891
    JL 0x004348d7                       ; 00434893
        ;   XREF to: 004348d7 (CONDITIONAL_JUMP)  ; LAB_004348d7
    PUSH EDX                            ; 00434895
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00434896
    PUSH EAX                            ; 00434899
    PUSH ESI                            ; 0043489a
    CALL FUN_004343f0                   ; 0043489b
        ;   XREF to: 004343f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004343f0()
    ADD ESP,0xc                         ; 004348a0
    TEST EAX,EAX                        ; 004348a3
    JZ 0x004348d7                       ; 004348a5
        ;   XREF to: 004348d7 (CONDITIONAL_JUMP)  ; LAB_004348d7
    MOV dword ptr [EBX + 0x38],0xffffffff ; 004348a7
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004348ae
        ;   Label: LAB_004348ae
    MOV dword ptr [EBX + 0x3c],0xffffffff ; 004348b1
    MOV dword ptr [EBX + 0x2c],EAX      ; 004348b8
    MOV dword ptr [EBX + 0x30],EAX      ; 004348bb
    TEST EDI,EDI                        ; 004348be
    JZ 0x0043482e                       ; 004348c0
        ;   XREF to: 0043482e (CONDITIONAL_JUMP)  ; LAB_0043482e
    MOV EAX,0x2                         ; 004348c6
        ;   Label: LAB_004348c6
    ADD ESP,0x4                         ; 004348cb
        ;   Label: LAB_004348cb
    POP EBP                             ; 004348ce
    POP EDI                             ; 004348cf
    POP ESI                             ; 004348d0
    POP EBX                             ; 004348d1
    RET                                 ; 004348d2
    XOR EAX,EAX                         ; 004348d3
        ;   Label: LAB_004348d3
    JMP 0x004348cb                      ; 004348d5
        ;   XREF to: 004348cb (UNCONDITIONAL_JUMP)  ; LAB_004348cb
    MOV EAX,dword ptr [EBX + 0x30]      ; 004348d7
        ;   Label: LAB_004348d7
    MOV dword ptr [EBX + 0x38],EAX      ; 004348da
    JMP 0x004348ae                      ; 004348dd
        ;   XREF to: 004348ae (UNCONDITIONAL_JUMP)  ; LAB_004348ae
    CMP EAX,-0x1                        ; 004348df
        ;   Label: LAB_004348df
    JZ 0x004348fc                       ; 004348e2
        ;   XREF to: 004348fc (CONDITIONAL_JUMP)  ; LAB_004348fc
    XOR EAX,EAX                         ; 004348e4
    ADD ESP,0x4                         ; 004348e6
    POP EBP                             ; 004348e9
    POP EDI                             ; 004348ea
    POP ESI                             ; 004348eb
    POP EBX                             ; 004348ec
    RET                                 ; 004348ed
    MOV EAX,dword ptr [EBX + 0x30]      ; 004348ee
        ;   Label: LAB_004348ee
    MOV dword ptr [EBX + 0x3c],EDI      ; 004348f1
    MOV dword ptr [EBX + 0x34],EAX      ; 004348f4
    JMP 0x00434828                      ; 004348f7
        ;   XREF to: 00434828 (UNCONDITIONAL_JUMP)  ; LAB_00434828
    MOV EAX,0x1                         ; 004348fc
        ;   Label: LAB_004348fc
    ADD ESP,0x4                         ; 00434901
    POP EBP                             ; 00434904
    POP EDI                             ; 00434905
    POP ESI                             ; 00434906
    POP EBX                             ; 00434907
    RET                                 ; 00434908

