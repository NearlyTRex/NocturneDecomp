; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bec20(int param_1)
;
; Local Variables:
; undefined        Stack[-0x62c]:1  local_62c
; undefined        Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x12b]:1  local_12b
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b7f90 at 004b8d21
;
; Referenced Globals:
;   undefined4 DAT_005c38a8
;   TerminatedCString s_Can_t_open_s_005c38ac
;   TerminatedCString s_s_is_d_bytes_but_expecte_005c38ba
;   undefined1 DAT_005c38ea
;   undefined1 DAT_005c38eb
;   undefined1 DAT_005c38ec
;   undefined1 DAT_005c38ed
;   undefined4 DAT_005c38ef
;   undefined4 DAT_005c38f2
;   TerminatedCString s_Can_t_open_s_005c38f6
;   undefined4 DAT_005c3904
;   undefined4 DAT_005c3907
;   TerminatedCString s_core_game_cpp_005c390b
;   TerminatedCString s_Can_t_open_s_005c391c
;   undefined4 DAT_005fb140
;   ... and 18 more
;
; Called Functions:
;   FUN_004032b0
;   FUN_004657f0
;   FUN_004659c0
;   FUN_0047cf40
;   FUN_004b4430
;   FUN_004b4440
;   FUN_004b93e0
;   FUN_004ba490
;   FUN_004e4330
;   FUN_00560d70
;   FUN_00565820
;   FUN_00565870
;   FUN_0057a3c0
;   FUN_0057a4b0
;   FUN_0057a8a0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bec20
        ;   Label: FUN_004bec20
    PUSH ESI                            ; 004bec21
    PUSH EDI                            ; 004bec22
    PUSH EBP                            ; 004bec23
    SUB ESP,0xa1c                       ; 004bec24
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bec2a
    CMP byte ptr [EAX + 0x968],0x0      ; 004bec31
    JNZ 0x004bec45                      ; 004bec38
        ;   XREF to: 004bec45 (CONDITIONAL_JUMP)  ; LAB_004bec45
    ADD ESP,0xa1c                       ; 004bec3a
    POP EBP                             ; 004bec40
    POP EDI                             ; 004bec41
    POP ESI                             ; 004bec42
    POP EBX                             ; 004bec43
    RET                                 ; 004bec44
    LEA ESI,[EAX + 0x968]               ; 004bec45
        ;   Label: LAB_004bec45
    PUSH ESI                            ; 004bec4b
    PUSH 0x5c38a8                       ; 004bec4c | DAT_005c38a8
    MOV dword ptr [EAX + 0xe8],0x0      ; 004bec51
    CALL FUN_004657f0                   ; 004bec5b
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004657f0()
    MOV EDX,EAX                         ; 004bec60
    ADD ESP,0x8                         ; 004bec62
    TEST EAX,EAX                        ; 004bec65
    JL 0x004bf028                       ; 004bec67
        ;   XREF to: 004bf028 (CONDITIONAL_JUMP)  ; LAB_004bf028
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004bec6d
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bec74
    MOV EBX,dword ptr [ECX + 0xa6c]     ; 004bec7b
    MOV EAX,dword ptr [EAX + 0xa68]     ; 004bec81
    IMUL EAX,EBX                        ; 004bec87
    CMP EDX,EAX                         ; 004bec8a
    JNZ 0x004bf056                      ; 004bec8c
        ;   XREF to: 004bf056 (CONDITIONAL_JUMP)  ; LAB_004bf056
    PUSH 0x0                            ; 004bec92
    LEA EAX,[ESP + 0x904]               ; 004bec94
    PUSH EAX                            ; 004bec9b
    PUSH 0x0                            ; 004bec9c
    PUSH 0x0                            ; 004bec9e
    PUSH ESI                            ; 004beca0
    CALL FUN_005a5128                   ; 004beca1
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5128()
    ADD ESP,0x14                        ; 004beca6
    LEA EDI,[ESP + 0x900]               ; 004beca9
    MOV ESI,0x5c38ea                    ; 004becb0 | DAT_005c38ea
    PUSH EDI                            ; 004becb5
    SUB ECX,ECX                         ; 004becb6
    DEC ECX                             ; 004becb8
    MOV AL,0x0                          ; 004becb9
    SCASB.REPNE ES:EDI                  ; 004becbb
    DEC EDI                             ; 004becbd
    MOV AL,byte ptr [ESI]               ; 004becbe | DAT_005c38ea | DAT_005c38ec
        ;   Label: LAB_004becbe
    MOV byte ptr [EDI],AL               ; 004becc0
    CMP AL,0x0                          ; 004becc2
    JZ 0x004becd6                       ; 004becc4
        ;   XREF to: 004becd6 (CONDITIONAL_JUMP)  ; LAB_004becd6
    MOV AL,byte ptr [ESI + 0x1]         ; 004becc6 | DAT_005c38eb | DAT_005c38ed
    ADD ESI,0x2                         ; 004becc9
    MOV byte ptr [EDI + 0x1],AL         ; 004beccc
    ADD EDI,0x2                         ; 004beccf
    CMP AL,0x0                          ; 004becd2
    JNZ 0x004becbe                      ; 004becd4
        ;   XREF to: 004becbe (CONDITIONAL_JUMP)  ; LAB_004becbe
    POP EDI                             ; 004becd6
        ;   Label: LAB_004becd6
    PUSH 0x5c38ef                       ; 004becd7 | DAT_005c38ef
    LEA EAX,[ESP + 0x904]               ; 004becdc
    PUSH EAX                            ; 004bece3
    PUSH 0x5c38f2                       ; 004bece4 | DAT_005c38f2
    CALL FUN_004659c0                   ; 004bece9
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    MOV EBX,EAX                         ; 004becee
    ADD ESP,0xc                         ; 004becf0
    TEST EAX,EAX                        ; 004becf3
    JZ 0x004bf08d                       ; 004becf5
        ;   XREF to: 004bf08d (CONDITIONAL_JUMP)  ; LAB_004bf08d
    PUSH EAX                            ; 004becfb
    PUSH 0x300                          ; 004becfc
    PUSH 0x1                            ; 004bed01
    LEA EAX,[ESP + 0x40c]               ; 004bed03
    PUSH EAX                            ; 004bed0a
    CALL FUN_005a3890                   ; 004bed0b
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 004bed10
    PUSH EBX                            ; 004bed13
    CALL FUN_005a3a90                   ; 004bed14
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004bed19
    XOR EBX,EBX                         ; 004bed1c
    XOR ESI,ESI                         ; 004bed1e
    MOV dword ptr [ESP + 0xa10],EBX     ; 004bed20
    CMP dword ptr [0x005fba20],0x10     ; 004bed27 | DAT_005fba20
        ;   Label: LAB_004bed27
    JNZ 0x004bf0c2                      ; 004bed2e
        ;   XREF to: 004bf0c2 (CONDITIONAL_JUMP)  ; LAB_004bf0c2
    XOR EAX,EAX                         ; 004bed34
    MOV EDI,dword ptr [0x01c6af78]      ; 004bed36 | DAT_01c6af78
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x400] ; 004bed3c
    XOR EDX,EDX                         ; 004bed43
    MOV dword ptr [ESP + 0xa00],EAX     ; 004bed45
    DIV EDI                             ; 004bed4c
    XOR ECX,ECX                         ; 004bed4e
    MOV CL,byte ptr [ESP + EBX*0x1 + 0x401] ; 004bed50
    MOV dword ptr [ESP + 0xa00],EAX     ; 004bed57
    XOR EDX,EDX                         ; 004bed5e
    MOV EAX,ECX                         ; 004bed60
    DIV dword ptr [0x01c6af84]          ; 004bed62 | DAT_01c6af84
    MOVZX EBP,byte ptr [ESP + EBX*0x1 + 0x402] ; 004bed68
    MOV dword ptr [ESP + 0xa04],EBP     ; 004bed70
    MOV EDI,EAX                         ; 004bed77
    XOR EDX,EDX                         ; 004bed79
    MOV EAX,EBP                         ; 004bed7b
    DIV dword ptr [0x01c6af90]          ; 004bed7d | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 004bed83 | DAT_01c6af74
    MOV dword ptr [ESP + 0xa04],EAX     ; 004bed89
    MOV EAX,dword ptr [ESP + 0xa00]     ; 004bed90
    SHL EAX,CL                          ; 004bed97
    MOV CL,byte ptr [0x01c6af80]        ; 004bed99 | DAT_01c6af80
    SHL EDI,CL                          ; 004bed9f
    MOV CL,byte ptr [0x01c6af8c]        ; 004beda1 | DAT_01c6af8c
    OR EDI,EAX                          ; 004beda7
    MOV EAX,dword ptr [ESP + 0xa04]     ; 004beda9
    SHL EAX,CL                          ; 004bedb0
    OR EAX,EDI                          ; 004bedb2
    MOV word ptr [ESP + ESI*0x1 + 0x700],AX ; 004bedb4
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004bedbc
        ;   Label: LAB_004bedbc
    ADD ESI,0x2                         ; 004bedc3
    ADD EAX,0x4                         ; 004bedc6
    ADD EBX,0x3                         ; 004bedc9
    MOV dword ptr [ESP + 0xa10],EAX     ; 004bedcc
    CMP ESI,0x200                       ; 004bedd3
    JNZ 0x004bed27                      ; 004bedd9
        ;   XREF to: 004bed27 (CONDITIONAL_JUMP)  ; LAB_004bed27
    CALL FUN_0057a3c0                   ; 004beddf
        ;   XREF to: 0057a3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a3c0()
    CALL FUN_00565820                   ; 004bede4
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; undefined FUN_00565820()
    CALL FUN_00560d70                   ; 004bede9
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560d70()
    PUSH 0x0                            ; 004bedee
    CALL FUN_00565870                   ; 004bedf0
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; undefined FUN_00565870()
    ADD ESP,0x4                         ; 004bedf5
    CALL FUN_0057a4b0                   ; 004bedf8
        ;   XREF to: 0057a4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a4b0()
    CALL FUN_0057a8a0                   ; 004bedfd
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bee02
    MOV EDX,dword ptr [ESP + 0xa30]     ; 004bee09
    MOV EAX,dword ptr [EAX + 0xa68]     ; 004bee10
    IMUL EAX,dword ptr [EDX + 0xa6c]    ; 004bee16
    PUSH EAX                            ; 004bee1d
    CALL FUN_005a3650                   ; 004bee1e
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 004bee23
    MOV dword ptr [ESP + 0xa14],EAX     ; 004bee26
    TEST EAX,EAX                        ; 004bee2d
    JZ 0x004bf0a9                       ; 004bee2f
        ;   XREF to: 004bf0a9 (CONDITIONAL_JUMP)  ; LAB_004bf0a9
    MOV EBX,dword ptr [ESP + 0xa30]     ; 004bee35
    PUSH 0x5c3904                       ; 004bee3c | DAT_005c3904
    ADD EBX,0x968                       ; 004bee41
    PUSH EBX                            ; 004bee47
    PUSH 0x5c3907                       ; 004bee48 | DAT_005c3907
    CALL FUN_004659c0                   ; 004bee4d
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004bee52
    MOV ESI,EAX                         ; 004bee55
    TEST EAX,EAX                        ; 004bee57
    JNZ 0x004bee7f                      ; 004bee59
        ;   XREF to: 004bee7f (CONDITIONAL_JUMP)  ; LAB_004bee7f
    PUSH EBX                            ; 004bee5b
    MOV EDI,0x5c390b                    ; 004bee5c | = "..\\core\\game.cpp"
    MOV EBP,0x1287                      ; 004bee61
    PUSH 0x5c391c                       ; 004bee66 | = "Can't open %s"
    MOV dword ptr [0x01d71de0],EDI      ; 004bee6b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004bee71 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004bee77
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 004bee7c
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bee7f
        ;   Label: LAB_004bee7f
    PUSH ESI                            ; 004bee86
    MOV EDX,dword ptr [EAX + 0xa6c]     ; 004bee87
    PUSH EDX                            ; 004bee8d
    MOV ECX,dword ptr [EAX + 0xa68]     ; 004bee8e
    PUSH ECX                            ; 004bee94
    MOV EBX,dword ptr [ESP + 0xa20]     ; 004bee95
    PUSH EBX                            ; 004bee9c
    CALL FUN_005a3890                   ; 004bee9d
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3890()
    ADD ESP,0x10                        ; 004beea2
    PUSH ESI                            ; 004beea5
    CALL FUN_005a3a90                   ; 004beea6
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004beeab
    XOR ESI,ESI                         ; 004beeae
    MOV EDI,dword ptr [0x005fba1c]      ; 004beeb0 | DAT_005fba1c
    MOV dword ptr [ESP + 0xa08],ESI     ; 004beeb6
    TEST EDI,EDI                        ; 004beebd
    JLE 0x004befb2                      ; 004beebf
        ;   XREF to: 004befb2 (CONDITIONAL_JUMP)  ; LAB_004befb2
    MOV dword ptr [ESP + 0xa0c],ESI     ; 004beec5
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004beecc
        ;   Label: LAB_004beecc
    MOV EDX,dword ptr [ESP + 0xa08]     ; 004beed3
    IMUL EDX,dword ptr [EAX + 0xa6c]    ; 004beeda
    MOV EDI,dword ptr [0x005fba1c]      ; 004beee1 | DAT_005fba1c
    MOV EAX,EDX                         ; 004beee7
    SAR EDX,0x1f                        ; 004beee9
    IDIV EDI                            ; 004beeec
    MOV EDX,dword ptr [ESP + 0xa30]     ; 004beeee
    MOV EDX,dword ptr [EDX + 0xa68]     ; 004beef5
    IMUL EDX,EAX                        ; 004beefb
    MOV EBP,dword ptr [0x005fba18]      ; 004beefe | DAT_005fba18
    XOR ECX,ECX                         ; 004bef04
    MOV dword ptr [ESP + 0xa18],EDX     ; 004bef06
    TEST EBP,EBP                        ; 004bef0d
    JLE 0x004bef84                      ; 004bef0f
        ;   XREF to: 004bef84 (CONDITIONAL_JUMP)  ; LAB_004bef84
    MOV EDI,dword ptr [ESP + 0xa0c]     ; 004bef11
    XOR ESI,ESI                         ; 004bef18
    XOR EBX,EBX                         ; 004bef1a
    MOV EDX,dword ptr [ESP + 0xa30]     ; 004bef1c
        ;   Label: LAB_004bef1c
    MOV EDX,dword ptr [EDX + 0xa68]     ; 004bef23
    IMUL EDX,ECX                        ; 004bef29
    MOV EBP,dword ptr [0x005fba18]      ; 004bef2c | DAT_005fba18
    MOV EAX,EDX                         ; 004bef32
    SAR EDX,0x1f                        ; 004bef34
    IDIV EBP                            ; 004bef37
    MOV EDX,dword ptr [ESP + 0xa18]     ; 004bef39
    MOV EBP,dword ptr [ESP + 0xa14]     ; 004bef40
    ADD EAX,EDX                         ; 004bef47
    MOV EDX,dword ptr [0x005fba20]      ; 004bef49 | DAT_005fba20
    ADD EAX,EBP                         ; 004bef4f
    CMP EDX,0x10                        ; 004bef51
    JNZ 0x004bf12f                      ; 004bef54
        ;   XREF to: 004bf12f (CONDITIONAL_JUMP)  ; LAB_004bf12f
    MOV AL,byte ptr [EAX]               ; 004bef5a
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 004bef5c | DAT_01c5faec
    AND EAX,0xff                        ; 004bef62
    MOV AX,word ptr [ESP + EAX*0x2 + 0x700] ; 004bef67
    MOV word ptr [EDX + EBX*0x1],AX     ; 004bef6f
    MOV EBP,dword ptr [0x005fba18]      ; 004bef73 | DAT_005fba18
        ;   Label: LAB_004bef73
    ADD ESI,0x4                         ; 004bef79
    INC ECX                             ; 004bef7c
    ADD EBX,0x2                         ; 004bef7d
    CMP ECX,EBP                         ; 004bef80
    JL 0x004bef1c                       ; 004bef82
        ;   XREF to: 004bef1c (CONDITIONAL_JUMP)  ; LAB_004bef1c
    MOV EBP,dword ptr [ESP + 0xa0c]     ; 004bef84
        ;   Label: LAB_004bef84
    MOV EAX,dword ptr [ESP + 0xa08]     ; 004bef8b
    MOV EDX,dword ptr [0x005fba1c]      ; 004bef92 | DAT_005fba1c
    ADD EBP,0x4                         ; 004bef98
    INC EAX                             ; 004bef9b
    MOV dword ptr [ESP + 0xa0c],EBP     ; 004bef9c
    MOV dword ptr [ESP + 0xa08],EAX     ; 004befa3
    CMP EAX,EDX                         ; 004befaa
    JL 0x004beecc                       ; 004befac
        ;   XREF to: 004beecc (CONDITIONAL_JUMP)  ; LAB_004beecc
    CALL FUN_004032b0                   ; 004befb2
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
        ;   Label: LAB_004befb2
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004befb7
    PUSH ECX                            ; 004befbe
    CALL FUN_004ba490                   ; 004befbf
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba490()
    ADD ESP,0x4                         ; 004befc4
    MOV EBX,dword ptr [ESP + 0xa30]     ; 004befc7
    ADD EBX,0x438                       ; 004befce
    CALL FUN_0057a8a0                   ; 004befd4
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
        ;   Label: LAB_004befd4
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004befd9
    CMP dword ptr [EAX + 0xd4],0x2      ; 004befe0
    JNZ 0x004beff2                      ; 004befe7
        ;   XREF to: 004beff2 (CONDITIONAL_JUMP)  ; LAB_004beff2
    PUSH EAX                            ; 004befe9
    CALL FUN_004b93e0                   ; 004befea
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b93e0()
    ADD ESP,0x4                         ; 004befef
    CALL FUN_00580800                   ; 004beff2
        ;   XREF to: 00580800 (UNCONDITIONAL_CALL)  ; undefined FUN_00580800()
        ;   Label: LAB_004beff2
    TEST EAX,EAX                        ; 004beff7
    JZ 0x004bf147                       ; 004beff9
        ;   XREF to: 004bf147 (CONDITIONAL_JUMP)  ; LAB_004bf147
    XOR EBX,EBX                         ; 004befff
        ;   Label: LAB_004befff
    CMP EBX,dword ptr [0x01c5fae4]      ; 004bf001 | DAT_01c5fae4
        ;   Label: LAB_004bf001
    JZ 0x004bf1b9                       ; 004bf007
        ;   XREF to: 004bf1b9 (CONDITIONAL_JUMP)  ; LAB_004bf1b9
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bf00d
        ;   Label: LAB_004bf00d
    CMP dword ptr [EAX + 0xd4],0x2      ; 004bf014
    JZ 0x004bf219                       ; 004bf01b
        ;   XREF to: 004bf219 (CONDITIONAL_JUMP)  ; LAB_004bf219
    CALL FUN_0057a8a0                   ; 004bf021
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    JMP 0x004bf001                      ; 004bf026
        ;   XREF to: 004bf001 (UNCONDITIONAL_JUMP)  ; LAB_004bf001
    PUSH ESI                            ; 004bf028
        ;   Label: LAB_004bf028
    PUSH 0x5c38ac                       ; 004bf029 | = "Can't open %s"
    MOV EBX,dword ptr [0x005fb140]      ; 004bf02e | DAT_005fb140
    PUSH EBX                            ; 004bf034
    CALL FUN_0047cf40                   ; 004bf035
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0xc                         ; 004bf03a
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bf03d
    MOV byte ptr [EAX + 0x968],0x0      ; 004bf044
    ADD ESP,0xa1c                       ; 004bf04b
    POP EBP                             ; 004bf051
    POP EDI                             ; 004bf052
    POP ESI                             ; 004bf053
    POP EBX                             ; 004bf054
    RET                                 ; 004bf055
    PUSH EAX                            ; 004bf056
        ;   Label: LAB_004bf056
    PUSH EBX                            ; 004bf057
    MOV EDX,dword ptr [ECX + 0xa68]     ; 004bf058
    PUSH EDX                            ; 004bf05e
    PUSH ESI                            ; 004bf05f
    PUSH 0x5c38ba                       ; 004bf060 | = "%s is %d bytes, but expected %dx%d=%d..."
    MOV ECX,dword ptr [0x005fb140]      ; 004bf065 | DAT_005fb140
    PUSH ECX                            ; 004bf06b
    CALL FUN_0047cf40                   ; 004bf06c
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x18                        ; 004bf071
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bf074
    MOV byte ptr [EAX + 0x968],0x0      ; 004bf07b
    ADD ESP,0xa1c                       ; 004bf082
    POP EBP                             ; 004bf088
    POP EDI                             ; 004bf089
    POP ESI                             ; 004bf08a
    POP EBX                             ; 004bf08b
    RET                                 ; 004bf08c
    LEA EAX,[ESP + 0x900]               ; 004bf08d
        ;   Label: LAB_004bf08d
    PUSH EAX                            ; 004bf094
    PUSH 0x5c38f6                       ; 004bf095 | = "Can't open %s"
    MOV EDI,dword ptr [0x005fb140]      ; 004bf09a | DAT_005fb140
    PUSH EDI                            ; 004bf0a0
    CALL FUN_0047cf40                   ; 004bf0a1
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0xc                         ; 004bf0a6
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bf0a9
        ;   Label: LAB_004bf0a9
    MOV byte ptr [EAX + 0x968],0x0      ; 004bf0b0
    ADD ESP,0xa1c                       ; 004bf0b7
    POP EBP                             ; 004bf0bd
    POP EDI                             ; 004bf0be
    POP ESI                             ; 004bf0bf
    POP EBX                             ; 004bf0c0
    RET                                 ; 004bf0c1
    MOV EBP,dword ptr [0x005fba20]      ; 004bf0c2 | DAT_005fba20
        ;   Label: LAB_004bf0c2
    MOVZX EDI,byte ptr [ESP + EBX*0x1 + 0x401] ; 004bf0c8
    XOR EAX,EAX                         ; 004bf0d0
    XOR EDX,EDX                         ; 004bf0d2
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x400] ; 004bf0d4
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x402] ; 004bf0db
    CMP EBP,0x20                        ; 004bf0e2
    JNZ 0x004bf114                      ; 004bf0e5
        ;   XREF to: 004bf114 (CONDITIONAL_JUMP)  ; LAB_004bf114
    MOV CL,byte ptr [0x01c6af74]        ; 004bf0e7 | DAT_01c6af74
    SHL EAX,CL                          ; 004bf0ed
    MOV CL,byte ptr [0x01c6af80]        ; 004bf0ef | DAT_01c6af80
    SHL EDI,CL                          ; 004bf0f5
    MOV CL,byte ptr [0x01c6af8c]        ; 004bf0f7 | DAT_01c6af8c
    OR EAX,EDI                          ; 004bf0fd
    SHL EDX,CL                          ; 004bf0ff
    MOV ECX,EAX                         ; 004bf101
    OR ECX,EDX                          ; 004bf103
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004bf105
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004bf10c
    JMP 0x004bedbc                      ; 004bf10f
        ;   XREF to: 004bedbc (UNCONDITIONAL_JUMP)  ; LAB_004bedbc
    MOV ECX,EAX                         ; 004bf114
        ;   Label: LAB_004bf114
    SHL EDI,0x8                         ; 004bf116
    SHL ECX,0x10                        ; 004bf119
    OR ECX,EDI                          ; 004bf11c
    OR ECX,EDX                          ; 004bf11e
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004bf120
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004bf127
    JMP 0x004bedbc                      ; 004bf12a
        ;   XREF to: 004bedbc (UNCONDITIONAL_JUMP)  ; LAB_004bedbc
    MOV AL,byte ptr [EAX]               ; 004bf12f
        ;   Label: LAB_004bf12f
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 004bf131 | DAT_01c5faec
    AND EAX,0xff                        ; 004bf137
    MOV EAX,dword ptr [ESP + EAX*0x4]   ; 004bf13c
    MOV dword ptr [EDX + ESI*0x1],EAX   ; 004bf13f
    JMP 0x004bef73                      ; 004bf142
        ;   XREF to: 004bef73 (UNCONDITIONAL_JUMP)  ; LAB_004bef73
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004bf147
        ;   Label: LAB_004bf147
    MOV ESI,dword ptr [ECX + 0x48]      ; 004bf14e
    MOV EAX,[0x00600284]                ; 004bf151 | DAT_00600284
    PUSH ESI                            ; 004bf156
    MOV EDX,dword ptr [EAX]             ; 004bf157 | DAT_01d70a78
    PUSH EAX                            ; 004bf159 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004bf15a
    ADD ESP,0x8                         ; 004bf15c
    TEST EAX,EAX                        ; 004bf15f
    JNZ 0x004befff                      ; 004bf161
        ;   XREF to: 004befff (CONDITIONAL_JUMP)  ; LAB_004befff
    CMP dword ptr [0x01c5fae4],0x0      ; 004bf167 | DAT_01c5fae4
    JNZ 0x004befff                      ; 004bf16e
        ;   XREF to: 004befff (CONDITIONAL_JUMP)  ; LAB_004befff
    CMP dword ptr [0x01d22b44],0x1      ; 004bf174 | DAT_01d22b44
    JNZ 0x004bf19f                      ; 004bf17b
        ;   XREF to: 004bf19f (CONDITIONAL_JUMP)  ; LAB_004bf19f
    MOV EAX,[0x005fe9dc]                ; 004bf17d | DAT_005fe9dc
        ;   Label: LAB_004bf17d
    PUSH EAX                            ; 004bf182
    CALL FUN_004b4440                   ; 004bf183
        ;   XREF to: 004b4440 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4440()
    MOV EAX,[0x005fe9dc]                ; 004bf188 | DAT_005fe9dc
    FLD float ptr [EAX + 0x314]         ; 004bf18d | DAT_01d21620
    FSUBR float ptr [EBX]               ; 004bf193
    ADD ESP,0x4                         ; 004bf195
    FSTP float ptr [EBX]                ; 004bf198
    JMP 0x004befd4                      ; 004bf19a
        ;   XREF to: 004befd4 (UNCONDITIONAL_JUMP)  ; LAB_004befd4
    MOV EAX,dword ptr [ESP + 0xa30]     ; 004bf19f
        ;   Label: LAB_004bf19f
    FLDZ                                ; 004bf1a6
    FCOMP float ptr [EAX + 0x438]       ; 004bf1a8
    FNSTSW AX                           ; 004bf1ae
    SAHF                                ; 004bf1b0
    JA 0x004befff                       ; 004bf1b1
        ;   XREF to: 004befff (CONDITIONAL_JUMP)  ; LAB_004befff
    JMP 0x004bf17d                      ; 004bf1b7
        ;   XREF to: 004bf17d (UNCONDITIONAL_JUMP)  ; LAB_004bf17d
    MOV ECX,dword ptr [ESP + 0xa30]     ; 004bf1b9
        ;   Label: LAB_004bf1b9
    MOV ESI,dword ptr [ECX + 0x48]      ; 004bf1c0
    MOV EAX,[0x00600284]                ; 004bf1c3 | DAT_00600284
    PUSH ESI                            ; 004bf1c8
    MOV EDX,dword ptr [EAX]             ; 004bf1c9 | DAT_01d70a78
    PUSH EAX                            ; 004bf1cb | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004bf1cc
    ADD ESP,0x8                         ; 004bf1ce
    TEST EAX,EAX                        ; 004bf1d1
    JNZ 0x004bf00d                      ; 004bf1d3
        ;   XREF to: 004bf00d (CONDITIONAL_JUMP)  ; LAB_004bf00d
    MOV EDI,dword ptr [ESP + 0xa30]     ; 004bf1d9
    CALL FUN_004032b0                   ; 004bf1e0
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    PUSH EDI                            ; 004bf1e5
    CALL FUN_004ba490                   ; 004bf1e6
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba490()
    ADD ESP,0x4                         ; 004bf1eb
    PUSH EDI                            ; 004bf1ee
    CALL FUN_004b4430                   ; 004bf1ef
        ;   XREF to: 004b4430 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4430()
    ADD ESP,0x4                         ; 004bf1f4
    MOV EAX,dword ptr [ESP + 0xa14]     ; 004bf1f7
    PUSH EAX                            ; 004bf1fe
    MOV byte ptr [EDI + 0x968],0x0      ; 004bf1ff
    CALL FUN_005a3770                   ; 004bf206
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 004bf20b
    ADD ESP,0xa1c                       ; 004bf20e
    POP EBP                             ; 004bf214
    POP EDI                             ; 004bf215
    POP ESI                             ; 004bf216
    POP EBX                             ; 004bf217
    RET                                 ; 004bf218
    PUSH EAX                            ; 004bf219
        ;   Label: LAB_004bf219
    CALL FUN_004b93e0                   ; 004bf21a
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b93e0()
    ADD ESP,0x4                         ; 004bf21f
    CALL FUN_0057a8a0                   ; 004bf222
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    JMP 0x004bf001                      ; 004bf227
        ;   XREF to: 004bf001 (UNCONDITIONAL_JUMP)  ; LAB_004bf001

