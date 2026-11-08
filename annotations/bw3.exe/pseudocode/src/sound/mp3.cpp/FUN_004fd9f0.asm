; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fd9f0(undefined4 param_1,char *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ffd20 at 004ffea4
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005ca02b
;   TerminatedCString s_Illegal_Huffman_code_in_005ca03c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d954bc
;
; Called Functions:
;   FUN_004e4330
;   FUN_004fd810
;   FUN_004fd8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd9f0
        ;   Label: FUN_004fd9f0
    PUSH ESI                            ; 004fd9f1
    PUSH EDI                            ; 004fd9f2
    PUSH EBP                            ; 004fd9f3
    SUB ESP,0x4                         ; 004fd9f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fd9f7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004fd9fb
    MOV EDX,0x1                         ; 004fd9ff
    MOV EDI,0x80000000                  ; 004fda04
    LEA EAX,[ESI + 0x20]                ; 004fda09
    XOR EBX,EBX                         ; 004fda0c
    MOV dword ptr [ESP],EDX             ; 004fda0e
    TEST EAX,EAX                        ; 004fda11
    JZ 0x004fdb2b                       ; 004fda13
        ;   XREF to: 004fdb2b (CONDITIONAL_JUMP)  ; LAB_004fdb2b
    MOV ECX,dword ptr [ESI + 0x824]     ; 004fda19
    TEST ECX,ECX                        ; 004fda1f
    JZ 0x004fdb38                       ; 004fda21
        ;   XREF to: 004fdb38 (CONDITIONAL_JUMP)  ; LAB_004fdb38
    LEA EAX,[EBX + EBX*0x1]             ; 004fda27
        ;   Label: LAB_004fda27
    ADD EAX,ESI                         ; 004fda2a
    CMP byte ptr [EAX + 0x20],0x0       ; 004fda2c
    JNZ 0x004fdb4e                      ; 004fda30
        ;   XREF to: 004fdb4e (CONDITIONAL_JUMP)  ; LAB_004fdb4e
    XOR EBX,EBX                         ; 004fda36
    MOV BL,byte ptr [EAX + 0x21]        ; 004fda38
    MOV EDI,dword ptr [ESP + 0x20]      ; 004fda3b
    SAR EBX,0x4                         ; 004fda3f
    MOV dword ptr [EDI],EBX             ; 004fda42
    MOV AL,byte ptr [EAX + 0x21]        ; 004fda44
    AND AL,0xf                          ; 004fda47
    MOV EBX,dword ptr [ESP + 0x24]      ; 004fda49
    AND EAX,0xff                        ; 004fda4d
    MOV dword ptr [EBX],EAX             ; 004fda52
    XOR EBX,EBX                         ; 004fda54
    MOV dword ptr [ESP],EBX             ; 004fda56
    MOV DH,byte ptr [ESI]               ; 004fda59
        ;   Label: LAB_004fda59
    CMP DH,0x33                         ; 004fda5b
    JNZ 0x004fdbd6                      ; 004fda5e
        ;   XREF to: 004fdbd6 (CONDITIONAL_JUMP)  ; LAB_004fdbd6
    MOV BL,byte ptr [ESI + 0x1]         ; 004fda64
    CMP BL,0x32                         ; 004fda67
    JNZ 0x004fdbce                      ; 004fda6a
        ;   XREF to: 004fdbce (CONDITIONAL_JUMP)  ; LAB_004fdbce
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fda70
        ;   Label: LAB_004fda70
    MOV EAX,dword ptr [EAX]             ; 004fda74
    SAR EAX,0x3                         ; 004fda76
    MOV EBX,dword ptr [ESP + 0x28]      ; 004fda79
    AND EAX,0x1                         ; 004fda7d
    MOV dword ptr [EBX],EAX             ; 004fda80
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fda82
    MOV EAX,dword ptr [EAX]             ; 004fda86
    SAR EAX,0x2                         ; 004fda88
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004fda8b
    AND EAX,0x1                         ; 004fda8f
    MOV dword ptr [EBX],EAX             ; 004fda92
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fda94
    MOV EAX,dword ptr [EAX]             ; 004fda98
    SAR EAX,0x1                         ; 004fda9a
    MOV EBX,dword ptr [ESP + 0x20]      ; 004fda9c
    AND EAX,0x1                         ; 004fdaa0
    MOV dword ptr [EBX],EAX             ; 004fdaa3
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fdaa5
    AND dword ptr [EAX],0x1             ; 004fdaa9
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fdaac
    CMP dword ptr [EAX],0x0             ; 004fdab0
    JZ 0x004fdac9                       ; 004fdab3
        ;   XREF to: 004fdac9 (CONDITIONAL_JUMP)  ; LAB_004fdac9
    PUSH EBP                            ; 004fdab5
    CALL FUN_004fd8f0                   ; 004fdab6
        ;   XREF to: 004fd8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd8f0()
    ADD ESP,0x4                         ; 004fdabb
    CMP EAX,0x1                         ; 004fdabe
    JNZ 0x004fdac9                      ; 004fdac1
        ;   XREF to: 004fdac9 (CONDITIONAL_JUMP)  ; LAB_004fdac9
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fdac3
    NEG dword ptr [EAX]                 ; 004fdac7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fdac9
        ;   Label: LAB_004fdac9
    CMP dword ptr [EAX],0x0             ; 004fdacd
    JZ 0x004fdae6                       ; 004fdad0
        ;   XREF to: 004fdae6 (CONDITIONAL_JUMP)  ; LAB_004fdae6
    PUSH EBP                            ; 004fdad2
    CALL FUN_004fd8f0                   ; 004fdad3
        ;   XREF to: 004fd8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd8f0()
    ADD ESP,0x4                         ; 004fdad8
    CMP EAX,0x1                         ; 004fdadb
    JNZ 0x004fdae6                      ; 004fdade
        ;   XREF to: 004fdae6 (CONDITIONAL_JUMP)  ; LAB_004fdae6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fdae0
    NEG dword ptr [EAX]                 ; 004fdae4
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fdae6
        ;   Label: LAB_004fdae6
    CMP dword ptr [EAX],0x0             ; 004fdaea
    JZ 0x004fdb03                       ; 004fdaed
        ;   XREF to: 004fdb03 (CONDITIONAL_JUMP)  ; LAB_004fdb03
    PUSH EBP                            ; 004fdaef
    CALL FUN_004fd8f0                   ; 004fdaf0
        ;   XREF to: 004fd8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd8f0()
    ADD ESP,0x4                         ; 004fdaf5
    CMP EAX,0x1                         ; 004fdaf8
    JNZ 0x004fdb03                      ; 004fdafb
        ;   XREF to: 004fdb03 (CONDITIONAL_JUMP)  ; LAB_004fdb03
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fdafd
    NEG dword ptr [EAX]                 ; 004fdb01
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fdb03
        ;   Label: LAB_004fdb03
    CMP dword ptr [EAX],0x0             ; 004fdb07
    JZ 0x004fdb20                       ; 004fdb0a
        ;   XREF to: 004fdb20 (CONDITIONAL_JUMP)  ; LAB_004fdb20
    PUSH EBP                            ; 004fdb0c
    CALL FUN_004fd8f0                   ; 004fdb0d
        ;   XREF to: 004fd8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd8f0()
    ADD ESP,0x4                         ; 004fdb12
    CMP EAX,0x1                         ; 004fdb15
    JNZ 0x004fdb20                      ; 004fdb18
        ;   XREF to: 004fdb20 (CONDITIONAL_JUMP)  ; LAB_004fdb20
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fdb1a
    NEG dword ptr [EAX]                 ; 004fdb1e
    MOV EAX,dword ptr [ESP]             ; 004fdb20
        ;   Label: LAB_004fdb20
    ADD ESP,0x4                         ; 004fdb23
    POP EBP                             ; 004fdb26
    POP EDI                             ; 004fdb27
    POP ESI                             ; 004fdb28
    POP EBX                             ; 004fdb29
    RET                                 ; 004fdb2a
    MOV EAX,0x2                         ; 004fdb2b
        ;   Label: LAB_004fdb2b
    ADD ESP,0x4                         ; 004fdb30
    POP EBP                             ; 004fdb33
    POP EDI                             ; 004fdb34
    POP ESI                             ; 004fdb35
    POP EBX                             ; 004fdb36
    RET                                 ; 004fdb37
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fdb38
        ;   Label: LAB_004fdb38
    MOV dword ptr [EAX],EBX             ; 004fdb3c
    MOV EAX,EBX                         ; 004fdb3e
    MOV EBX,dword ptr [ESP + 0x20]      ; 004fdb40
    MOV dword ptr [EBX],ECX             ; 004fdb44
    ADD ESP,0x4                         ; 004fdb46
    POP EBP                             ; 004fdb49
    POP EDI                             ; 004fdb4a
    POP ESI                             ; 004fdb4b
    POP EBX                             ; 004fdb4c
    RET                                 ; 004fdb4d
    PUSH EBP                            ; 004fdb4e
        ;   Label: LAB_004fdb4e
    CALL FUN_004fd8f0                   ; 004fdb4f
        ;   XREF to: 004fd8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd8f0()
    ADD ESP,0x4                         ; 004fdb54
    TEST EAX,EAX                        ; 004fdb57
    JZ 0x004fdbba                       ; 004fdb59
        ;   XREF to: 004fdbba (CONDITIONAL_JUMP)  ; LAB_004fdbba
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x21] ; 004fdb5b
        ;   Label: LAB_004fdb5b
    AND EAX,0xff                        ; 004fdb5f
    ADD EBX,EAX                         ; 004fdb64
    CMP EAX,0xfa                        ; 004fdb66
    JGE 0x004fdb5b                      ; 004fdb6b
        ;   XREF to: 004fdb5b (CONDITIONAL_JUMP)  ; LAB_004fdb5b
    SHR EDI,0x1                         ; 004fdb6d
        ;   Label: LAB_004fdb6d
    TEST EDI,EDI                        ; 004fdb6f
    JNZ 0x004fda27                      ; 004fdb71
        ;   XREF to: 004fda27 (CONDITIONAL_JUMP)  ; LAB_004fda27
    CMP EBX,dword ptr [0x01d954bc]      ; 004fdb77 | DAT_01d954bc
    JC 0x004fda27                       ; 004fdb7d
        ;   XREF to: 004fda27 (CONDITIONAL_JUMP)  ; LAB_004fda27
    CMP dword ptr [ESP],0x0             ; 004fdb83
    JZ 0x004fda59                       ; 004fdb87
        ;   XREF to: 004fda59 (CONDITIONAL_JUMP)  ; LAB_004fda59
    PUSH 0x1d94b98                      ; 004fdb8d
    MOV ECX,0x5ca02b                    ; 004fdb92 | = "..\\sound\\mp3.cpp"
    MOV EBX,0x36f                       ; 004fdb97
    PUSH 0x5ca03c                       ; 004fdb9c | = "Illegal Huffman code in data.  File: %s"
    MOV dword ptr [0x01d71de0],ECX      ; 004fdba1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004fdba7 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004fdbad
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 004fdbb2
    JMP 0x004fda59                      ; 004fdbb5
        ;   XREF to: 004fda59 (UNCONDITIONAL_JUMP)  ; LAB_004fda59
    MOV AL,byte ptr [ESI + EBX*0x2 + 0x20] ; 004fdbba
        ;   Label: LAB_004fdbba
    AND EAX,0xff                        ; 004fdbbe
    ADD EBX,EAX                         ; 004fdbc3
    CMP EAX,0xfa                        ; 004fdbc5
    JGE 0x004fdbba                      ; 004fdbca
        ;   XREF to: 004fdbba (CONDITIONAL_JUMP)  ; LAB_004fdbba
    JMP 0x004fdb6d                      ; 004fdbcc
        ;   XREF to: 004fdb6d (UNCONDITIONAL_JUMP)  ; LAB_004fdb6d
    CMP BL,DH                           ; 004fdbce
        ;   Label: LAB_004fdbce
    JZ 0x004fda70                       ; 004fdbd0
        ;   XREF to: 004fda70 (CONDITIONAL_JUMP)  ; LAB_004fda70
    MOV EDI,dword ptr [ESI + 0xc]       ; 004fdbd6
        ;   Label: LAB_004fdbd6
    TEST EDI,EDI                        ; 004fdbd9
    JZ 0x004fdbf9                       ; 004fdbdb
        ;   XREF to: 004fdbf9 (CONDITIONAL_JUMP)  ; LAB_004fdbf9
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fdbdd
    MOV EBX,dword ptr [ESP + 0x20]      ; 004fdbe0
    DEC EAX                             ; 004fdbe4
    CMP EAX,dword ptr [EBX]             ; 004fdbe5
    JNZ 0x004fdbf9                      ; 004fdbe7
        ;   XREF to: 004fdbf9 (CONDITIONAL_JUMP)  ; LAB_004fdbf9
    PUSH EDI                            ; 004fdbe9
    PUSH EBP                            ; 004fdbea
    CALL FUN_004fd810                   ; 004fdbeb
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd810()
    MOV EDI,dword ptr [EBX]             ; 004fdbf0
    ADD EDI,EAX                         ; 004fdbf2
    ADD ESP,0x8                         ; 004fdbf4
    MOV dword ptr [EBX],EDI             ; 004fdbf7
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fdbf9
        ;   Label: LAB_004fdbf9
    CMP dword ptr [EAX],0x0             ; 004fdbfd
    JZ 0x004fdc16                       ; 004fdc00
        ;   XREF to: 004fdc16 (CONDITIONAL_JUMP)  ; LAB_004fdc16
    PUSH EBP                            ; 004fdc02
    CALL FUN_004fd8f0                   ; 004fdc03
        ;   XREF to: 004fd8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd8f0()
    ADD ESP,0x4                         ; 004fdc08
    CMP EAX,0x1                         ; 004fdc0b
    JNZ 0x004fdc16                      ; 004fdc0e
        ;   XREF to: 004fdc16 (CONDITIONAL_JUMP)  ; LAB_004fdc16
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fdc10
    NEG dword ptr [EAX]                 ; 004fdc14
    CMP dword ptr [ESI + 0xc],0x0       ; 004fdc16
        ;   Label: LAB_004fdc16
    JZ 0x004fdb03                       ; 004fdc1a
        ;   XREF to: 004fdb03 (CONDITIONAL_JUMP)  ; LAB_004fdb03
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fdc20
    MOV EBX,dword ptr [ESP + 0x24]      ; 004fdc23
    DEC EAX                             ; 004fdc27
    CMP EAX,dword ptr [EBX]             ; 004fdc28
    JNZ 0x004fdb03                      ; 004fdc2a
        ;   XREF to: 004fdb03 (CONDITIONAL_JUMP)  ; LAB_004fdb03
    MOV EAX,dword ptr [ESI + 0xc]       ; 004fdc30
    PUSH EAX                            ; 004fdc33
    PUSH EBP                            ; 004fdc34
    CALL FUN_004fd810                   ; 004fdc35
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd810()
    MOV EDX,dword ptr [EBX]             ; 004fdc3a
    ADD EDX,EAX                         ; 004fdc3c
    ADD ESP,0x8                         ; 004fdc3e
    MOV dword ptr [EBX],EDX             ; 004fdc41
    JMP 0x004fdb03                      ; 004fdc43
        ;   XREF to: 004fdb03 (UNCONDITIONAL_JUMP)  ; LAB_004fdb03

