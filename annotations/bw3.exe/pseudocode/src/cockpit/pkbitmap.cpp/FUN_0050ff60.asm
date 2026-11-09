; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_FUN_0050ff60(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   skip_data_load
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160 at 005101d5
;   cockpit_pkbitmap.cpp_FUN_005102b0 at 005103c7
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_0050f230
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fread_FUN_005a3890
;   crt_stdio.c_fseek_FUN_005a457c
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ff60
        ;   Label: cockpit_pkbitmap.cpp_FUN_0050ff60
    PUSH ESI                            ; 0050ff61
    PUSH EDI                            ; 0050ff62
    PUSH EBP                            ; 0050ff63
    SUB ESP,0x1c                        ; 0050ff64
    MOV EBX,dword ptr [ESP + 0x30]      ; 0050ff67
    MOV EBP,dword ptr [ESP + 0x34]      ; 0050ff6b
    PUSH EBX                            ; 0050ff6f
    CALL cockpit_pkbitmap.cpp_FUN_0050f230 ; 0050ff70
        ;   XREF to: 0050f230 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_0050f230()
    ADD ESP,0x4                         ; 0050ff75
        ;   Label: LAB_0050ff75
    PUSH EBP                            ; 0050ff78
    PUSH 0x1                            ; 0050ff79
    PUSH 0x1c                           ; 0050ff7b
    LEA EAX,[ESP + 0xc]                 ; 0050ff7d
    PUSH EAX                            ; 0050ff81
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0050ff82
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 0050ff87
    CMP EAX,0x1                         ; 0050ff8a
    JNZ 0x0050ffee                      ; 0050ff8d
        ;   XREF to: 0050ffee (CONDITIONAL_JUMP)  ; LAB_0050ffee
    MOV ECX,0x4                         ; 0050ff8f
    MOV EDI,0x6036f8                    ; 0050ff94
    MOV ESI,ESP                         ; 0050ff99
    XOR EAX,EAX                         ; 0050ff9b
    CMPSB.REPE ES:EDI,ESI               ; 0050ff9d
    JZ 0x0050ffa6                       ; 0050ff9f
        ;   XREF to: 0050ffa6 (CONDITIONAL_JUMP)  ; LAB_0050ffa6
    SBB EAX,EAX                         ; 0050ffa1
    SBB EAX,-0x1                        ; 0050ffa3
    TEST EAX,EAX                        ; 0050ffa6
        ;   Label: LAB_0050ffa6
    JZ 0x00510012                       ; 0050ffa8
        ;   XREF to: 00510012 (CONDITIONAL_JUMP)  ; LAB_00510012
    MOV ECX,0x5cbdb6                    ; 0050ffaa
        ;   Label: LAB_0050ffaa
    MOV ESI,0x4b2                       ; 0050ffaf
    PUSH 0x5cbdce                       ; 0050ffb4
    MOV dword ptr [0x01d71de0],ECX      ; 0050ffb9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050ffbf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050ffc5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050ffca
    MOV EDI,0x5cbdf1                    ; 0050ffcd
        ;   Label: LAB_0050ffcd
    MOV EAX,0x4b3                       ; 0050ffd2
    PUSH 0x5cbe09                       ; 0050ffd7
    MOV dword ptr [0x01d71de0],EDI      ; 0050ffdc | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0050ffe2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050ffe7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    JMP 0x0050ff75                      ; 0050ffec
        ;   XREF to: 0050ff75 (UNCONDITIONAL_JUMP)  ; LAB_0050ff75
    MOV EAX,0x5cbd70                    ; 0050ffee
        ;   Label: LAB_0050ffee
    MOV EDX,0x4b1                       ; 0050fff3
    PUSH 0x5cbd88                       ; 0050fff8
    MOV [0x01d71de0],EAX                ; 0050fffd | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00510002 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00510008
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051000d
    JMP 0x0050ffaa                      ; 00510010
        ;   XREF to: 0050ffaa (UNCONDITIONAL_JUMP)  ; LAB_0050ffaa
    MOV EDX,dword ptr [ESP + 0x4]       ; 00510012
        ;   Label: LAB_00510012
    CMP EDX,0x1                         ; 00510016
    JC 0x0050ffaa                       ; 00510019
        ;   XREF to: 0050ffaa (CONDITIONAL_JUMP)  ; LAB_0050ffaa
    CMP dword ptr [ESP + 0x8],0x1       ; 0051001b
    JC 0x0050ffaa                       ; 00510020
        ;   XREF to: 0050ffaa (CONDITIONAL_JUMP)  ; LAB_0050ffaa
    MOV dword ptr [EBX + 0x18],EDX      ; 00510022
    MOV EAX,dword ptr [ESP + 0x8]       ; 00510025
    MOV dword ptr [EBX + 0x1c],EAX      ; 00510029
    CMP dword ptr [ESP + 0xc],0x0       ; 0051002c
    JNZ 0x0050ffaa                      ; 00510031
        ;   XREF to: 0050ffaa (CONDITIONAL_JUMP)  ; LAB_0050ffaa
    CMP dword ptr [ESP + 0x10],0x0      ; 00510037
    JNZ 0x0050ffaa                      ; 0051003c
        ;   XREF to: 0050ffaa (CONDITIONAL_JUMP)  ; LAB_0050ffaa
    MOV EAX,dword ptr [EBX + 0x18]      ; 00510042
    MOV EDX,dword ptr [ESP + 0x14]      ; 00510045
    DEC EAX                             ; 00510049
    CMP EAX,EDX                         ; 0051004a
    JNZ 0x0050ffaa                      ; 0051004c
        ;   XREF to: 0050ffaa (CONDITIONAL_JUMP)  ; LAB_0050ffaa
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00510052
    MOV ECX,dword ptr [ESP + 0x18]      ; 00510055
    DEC EAX                             ; 00510059
    CMP EAX,ECX                         ; 0051005a
    JNZ 0x0050ffaa                      ; 0051005c
        ;   XREF to: 0050ffaa (CONDITIONAL_JUMP)  ; LAB_0050ffaa
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00510062
    INC EAX                             ; 00510065
    SHL EAX,0x2                         ; 00510066
    PUSH EAX                            ; 00510069
    CALL crt_unknown.c_FUN_005a40df     ; 0051006a
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    ADD ESP,0x4                         ; 0051006f
    MOV dword ptr [EBX + 0x20],EAX      ; 00510072
    TEST EAX,EAX                        ; 00510075
    JZ 0x0050ffcd                       ; 00510077
        ;   XREF to: 0050ffcd (CONDITIONAL_JUMP)  ; LAB_0050ffcd
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051007d
    PUSH EBP                            ; 00510080
    INC EAX                             ; 00510081
    PUSH 0x1                            ; 00510082
    SHL EAX,0x2                         ; 00510084
    PUSH EAX                            ; 00510087
    MOV EDI,dword ptr [EBX + 0x20]      ; 00510088
    PUSH EDI                            ; 0051008b
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0051008c
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00510091
    CMP EAX,0x1                         ; 00510094
    JNZ 0x0050ffee                      ; 00510097
        ;   XREF to: 0050ffee (CONDITIONAL_JUMP)  ; LAB_0050ffee
    XOR EDX,EDX                         ; 0051009d
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051009f
        ;   Label: LAB_0051009f
    INC EAX                             ; 005100a2
    CMP EDX,EAX                         ; 005100a3
    JGE 0x005100aa                      ; 005100a5
        ;   XREF to: 005100aa (CONDITIONAL_JUMP)  ; LAB_005100aa
    INC EDX                             ; 005100a7
    JMP 0x0051009f                      ; 005100a8
        ;   XREF to: 0051009f (UNCONDITIONAL_JUMP)  ; LAB_0051009f
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005100aa
        ;   Label: LAB_005100aa
    XOR EDX,EDX                         ; 005100ad
    TEST EAX,EAX                        ; 005100af
    JLE 0x005100cc                      ; 005100b1
        ;   XREF to: 005100cc (CONDITIONAL_JUMP)  ; LAB_005100cc
    MOV EAX,dword ptr [EBX + 0x20]      ; 005100b3
    MOV EDI,dword ptr [EAX + 0x4]       ; 005100b6
        ;   Label: LAB_005100b6
    CMP EDI,dword ptr [EAX]             ; 005100b9
    JL 0x0050ffaa                       ; 005100bb
        ;   XREF to: 0050ffaa (CONDITIONAL_JUMP)  ; LAB_0050ffaa
    INC EDX                             ; 005100c1
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005100c2
    ADD EAX,0x4                         ; 005100c5
    CMP EDX,ECX                         ; 005100c8
    JL 0x005100b6                       ; 005100ca
        ;   XREF to: 005100b6 (CONDITIONAL_JUMP)  ; LAB_005100b6
    MOV EAX,dword ptr [EBX + 0x20]      ; 005100cc
        ;   Label: LAB_005100cc
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005100cf
    MOV EDI,dword ptr [ESP + 0x38]      ; 005100d2
    MOV ESI,dword ptr [EAX + EDX*0x4]   ; 005100d6
    TEST EDI,EDI                        ; 005100d9
    JNZ 0x00510148                      ; 005100db
        ;   XREF to: 00510148 (CONDITIONAL_JUMP)  ; LAB_00510148
    PUSH ESI                            ; 005100dd
    CALL crt_unknown.c_FUN_005a3650     ; 005100de
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005100e3
    MOV dword ptr [EBX + 0x14],EAX      ; 005100e6
    TEST EAX,EAX                        ; 005100e9
    JZ 0x0050ffcd                       ; 005100eb
        ;   XREF to: 0050ffcd (CONDITIONAL_JUMP)  ; LAB_0050ffcd
    PUSH EBP                            ; 005100f1
    PUSH 0x1                            ; 005100f2
    PUSH ESI                            ; 005100f4
    PUSH EAX                            ; 005100f5
    CALL crt_stdio.c_fread_FUN_005a3890 ; 005100f6
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 005100fb
    CMP EAX,0x1                         ; 005100fe
    JNZ 0x0050ffee                      ; 00510101
        ;   XREF to: 0050ffee (CONDITIONAL_JUMP)  ; LAB_0050ffee
    MOV EDX,dword ptr [EBX + 0x20]      ; 00510107
    MOV ECX,dword ptr [EBX + 0x14]      ; 0051010a
    MOV EBX,dword ptr [EBX + 0x1c]      ; 0051010d
    MOV EAX,dword ptr [EDX]             ; 00510110
    MOV ESI,dword ptr [EDX + EBX*0x4]   ; 00510112
    ADD EAX,ECX                         ; 00510115
    ADD ECX,ESI                         ; 00510117
    CMP EAX,ECX                         ; 00510119
    JNC 0x00510140                      ; 0051011b
        ;   XREF to: 00510140 (CONDITIONAL_JUMP)  ; LAB_00510140
    LEA EDX,[EAX + 0x4]                 ; 0051011d
        ;   Label: LAB_0051011d
    MOV AX,word ptr [EAX + 0x2]         ; 00510120
    AND EAX,0xffff                      ; 00510124
    ADD EAX,0x3                         ; 00510129
    AND AL,0xfc                         ; 0051012c
    ADD EAX,EDX                         ; 0051012e
    CMP EAX,ECX                         ; 00510130
    JC 0x0051011d                       ; 00510132
        ;   XREF to: 0051011d (CONDITIONAL_JUMP)  ; LAB_0051011d
    LEA EAX,[EAX]                       ; 00510134
    LEA EDX,[EDX]                       ; 0051013a
    ADD ESP,0x1c                        ; 00510140
        ;   Label: LAB_00510140
    POP EBP                             ; 00510143
    POP EDI                             ; 00510144
    POP ESI                             ; 00510145
    POP EBX                             ; 00510146
    RET                                 ; 00510147
    PUSH 0x1                            ; 00510148
        ;   Label: LAB_00510148
    PUSH ESI                            ; 0051014a
    PUSH EBP                            ; 0051014b
    CALL crt_stdio.c_fseek_FUN_005a457c ; 0051014c
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 00510151
    ADD ESP,0x1c                        ; 00510154
    POP EBP                             ; 00510157
    POP EDI                             ; 00510158
    POP ESI                             ; 00510159
    POP EBX                             ; 0051015a
    RET                                 ; 0051015b

