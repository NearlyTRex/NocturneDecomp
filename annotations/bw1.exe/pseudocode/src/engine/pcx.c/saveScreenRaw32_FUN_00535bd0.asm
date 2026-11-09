; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00535bd0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x6b]:1  local_6b
; undefined1       Stack[-0x69]:1  local_69
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_pcx.c_FUN_00535d80 at 00535f35
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_005ecbb9
;   TerminatedCString s_saveScreenRaw32_No_ext_f_005ecbc9
;   TerminatedCString s_RAW_005ecbe8
;   undefined4 s_RAW_005ecbe8+1
;   undefined4 s_RAW_005ecbe8+2
;   undefined4 s_RAW_005ecbe8+3
;   TerminatedCString s_wb_005ecbed
;   TerminatedCString s_engine_pcx_c_005ecbf0
;   TerminatedCString s_saveScreenRaw32_Unable_t_005ecc00
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdio.c_fputc_FUN_005c2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535bd0
        ;   Label: engine_pcx.c_saveScreenRaw32_FUN_00535bd0
    PUSH ESI                            ; 00535bd1
    PUSH EDI                            ; 00535bd2
    PUSH EBP                            ; 00535bd3
    SUB ESP,0x5c                        ; 00535bd4
    MOV ESI,dword ptr [ESP + 0x70]      ; 00535bd7
    MOV EDI,ESP                         ; 00535bdb
    MOV DL,0x2e                         ; 00535bdd
    PUSH EDI                            ; 00535bdf
    MOV AL,byte ptr [ESI]               ; 00535be0
        ;   Label: LAB_00535be0
    MOV byte ptr [EDI],AL               ; 00535be2
    CMP AL,0x0                          ; 00535be4
    JZ 0x00535bf8                       ; 00535be6
        ;   XREF to: 00535bf8 (CONDITIONAL_JUMP)  ; LAB_00535bf8
    MOV AL,byte ptr [ESI + 0x1]         ; 00535be8
    ADD ESI,0x2                         ; 00535beb
    MOV byte ptr [EDI + 0x1],AL         ; 00535bee
    ADD EDI,0x2                         ; 00535bf1
    CMP AL,0x0                          ; 00535bf4
    JNZ 0x00535be0                      ; 00535bf6
        ;   XREF to: 00535be0 (CONDITIONAL_JUMP)  ; LAB_00535be0
    POP EDI                             ; 00535bf8
        ;   Label: LAB_00535bf8
    MOV ESI,ESP                         ; 00535bf9
    MOV AL,byte ptr [ESI]               ; 00535bfb
        ;   Label: LAB_00535bfb
    CMP AL,DL                           ; 00535bfd
    JZ 0x00535c13                       ; 00535bff
        ;   XREF to: 00535c13 (CONDITIONAL_JUMP)  ; LAB_00535c13
    CMP AL,0x0                          ; 00535c01
    JZ 0x00535c11                       ; 00535c03
        ;   XREF to: 00535c11 (CONDITIONAL_JUMP)  ; LAB_00535c11
    INC ESI                             ; 00535c05
    MOV AL,byte ptr [ESI]               ; 00535c06
    CMP AL,DL                           ; 00535c08
    JZ 0x00535c13                       ; 00535c0a
        ;   XREF to: 00535c13 (CONDITIONAL_JUMP)  ; LAB_00535c13
    INC ESI                             ; 00535c0c
    CMP AL,0x0                          ; 00535c0d
    JNZ 0x00535bfb                      ; 00535c0f
        ;   XREF to: 00535bfb (CONDITIONAL_JUMP)  ; LAB_00535bfb
    SUB ESI,ESI                         ; 00535c11
        ;   Label: LAB_00535c11
    MOV EDI,ESI                         ; 00535c13
        ;   Label: LAB_00535c13
    TEST ESI,ESI                        ; 00535c15
    JZ 0x00535d50                       ; 00535c17
        ;   XREF to: 00535d50 (CONDITIONAL_JUMP)  ; LAB_00535d50
    MOV ESI,0x5ecbe8                    ; 00535c1d | = ".RAW"
        ;   Label: LAB_00535c1d
    PUSH EDI                            ; 00535c22
    MOV AL,byte ptr [ESI]               ; 00535c23 | = ".RAW" | s_RAW_005ecbe8+2
        ;   Label: LAB_00535c23
    MOV byte ptr [EDI],AL               ; 00535c25
    CMP AL,0x0                          ; 00535c27
    JZ 0x00535c3b                       ; 00535c29
        ;   XREF to: 00535c3b (CONDITIONAL_JUMP)  ; LAB_00535c3b
    MOV AL,byte ptr [ESI + 0x1]         ; 00535c2b | s_RAW_005ecbe8+1 | s_RAW_005ecbe8+3
    ADD ESI,0x2                         ; 00535c2e
    MOV byte ptr [EDI + 0x1],AL         ; 00535c31
    ADD EDI,0x2                         ; 00535c34
    CMP AL,0x0                          ; 00535c37
    JNZ 0x00535c23                      ; 00535c39
        ;   XREF to: 00535c23 (CONDITIONAL_JUMP)  ; LAB_00535c23
    POP EDI                             ; 00535c3b
        ;   Label: LAB_00535c3b
    PUSH 0x5ecbed                       ; 00535c3c | = "wb"
    LEA EAX,[ESP + 0x4]                 ; 00535c41
    PUSH EAX                            ; 00535c45
    CALL crt_stdio.c_fopen_FUN_005c157c ; 00535c46
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 00535c4b
    MOV EDI,EAX                         ; 00535c4e
    TEST EAX,EAX                        ; 00535c50
    JNZ 0x00535c77                      ; 00535c52
        ;   XREF to: 00535c77 (CONDITIONAL_JUMP)  ; LAB_00535c77
    MOV EBX,0x5ecbf0                    ; 00535c54 | = "..\\engine\\pcx.c"
    MOV ESI,0x9e                        ; 00535c59
    PUSH 0x5ecc00                       ; 00535c5e | = "saveScreenRaw32 - Unable to open output"
    MOV dword ptr [0x01d1d400],EBX      ; 00535c63 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00535c69 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00535c6f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00535c74
    XOR EBP,EBP                         ; 00535c77
        ;   Label: LAB_00535c77
    MOV EAX,[0x0061b49c]                ; 00535c79 | DAT_0061b49c
    MOV dword ptr [ESP + 0x58],EBP      ; 00535c7e
    TEST EAX,EAX                        ; 00535c82
    JLE 0x00535d3f                      ; 00535c84
        ;   XREF to: 00535d3f (CONDITIONAL_JUMP)  ; LAB_00535d3f
    MOV dword ptr [ESP + 0x54],EBP      ; 00535c8a
    MOV EBX,dword ptr [ESP + 0x54]      ; 00535c8e
        ;   Label: LAB_00535c8e
    MOV EBP,dword ptr [0x0061b498]      ; 00535c92 | DAT_0061b498
    XOR ESI,ESI                         ; 00535c98
    MOV EBX,dword ptr [EBX + 0x1c4354c] ; 00535c9a | DAT_01c4354c | DAT_01c43550
    TEST EBP,EBP                        ; 00535ca0
    JLE 0x00535d1d                      ; 00535ca2
        ;   XREF to: 00535d1d (CONDITIONAL_JUMP)  ; LAB_00535d1d
    MOV CL,byte ptr [0x01c4e9d4]        ; 00535ca4 | DAT_01c4e9d4
        ;   Label: LAB_00535ca4
    MOV EAX,dword ptr [EBX]             ; 00535caa
    MOV EDX,dword ptr [0x01c4e9d8]      ; 00535cac | DAT_01c4e9d8
    SHR EAX,CL                          ; 00535cb2
    IMUL EDX,EAX                        ; 00535cb4
    MOV EBP,dword ptr [EBX]             ; 00535cb7
    MOV CL,byte ptr [0x01c4e9e0]        ; 00535cb9 | DAT_01c4e9e0
    SHR EBP,CL                          ; 00535cbf
    IMUL EBP,dword ptr [0x01c4e9e4]     ; 00535cc1 | DAT_01c4e9e4
    MOV EAX,dword ptr [EBX]             ; 00535cc8
    MOV CL,byte ptr [0x01c4e9ec]        ; 00535cca | DAT_01c4e9ec
    SHR EAX,CL                          ; 00535cd0
    IMUL EAX,dword ptr [0x01c4e9f0]     ; 00535cd2 | DAT_01c4e9f0
    PUSH EDI                            ; 00535cd9
    AND EDX,0xff                        ; 00535cda
    AND EAX,0xff                        ; 00535ce0
    PUSH EDX                            ; 00535ce5
    MOV dword ptr [ESP + 0x58],EAX      ; 00535ce6
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 00535cea
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
    ADD ESP,0x8                         ; 00535cef
    PUSH EDI                            ; 00535cf2
    AND EBP,0xff                        ; 00535cf3
    PUSH EBP                            ; 00535cf9
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 00535cfa
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
    ADD ESP,0x8                         ; 00535cff
    PUSH EDI                            ; 00535d02
    MOV EBP,dword ptr [ESP + 0x54]      ; 00535d03
    PUSH EBP                            ; 00535d07
    ADD EBX,0x4                         ; 00535d08
    INC ESI                             ; 00535d0b
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 00535d0c
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
    MOV EAX,[0x0061b498]                ; 00535d11 | DAT_0061b498
    ADD ESP,0x8                         ; 00535d16
    CMP ESI,EAX                         ; 00535d19
    JL 0x00535ca4                       ; 00535d1b
        ;   XREF to: 00535ca4 (CONDITIONAL_JUMP)  ; LAB_00535ca4
    MOV EDX,dword ptr [ESP + 0x54]      ; 00535d1d
        ;   Label: LAB_00535d1d
    MOV ECX,dword ptr [ESP + 0x58]      ; 00535d21
    MOV EBX,dword ptr [0x0061b49c]      ; 00535d25 | DAT_0061b49c
    ADD EDX,0x4                         ; 00535d2b
    INC ECX                             ; 00535d2e
    MOV dword ptr [ESP + 0x54],EDX      ; 00535d2f
    MOV dword ptr [ESP + 0x58],ECX      ; 00535d33
    CMP ECX,EBX                         ; 00535d37
    JL 0x00535c8e                       ; 00535d39
        ;   XREF to: 00535c8e (CONDITIONAL_JUMP)  ; LAB_00535c8e
    PUSH EDI                            ; 00535d3f
        ;   Label: LAB_00535d3f
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00535d40
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00535d45
    ADD ESP,0x5c                        ; 00535d48
    POP EBP                             ; 00535d4b
    POP EDI                             ; 00535d4c
    POP ESI                             ; 00535d4d
    POP EBX                             ; 00535d4e
    RET                                 ; 00535d4f
    MOV EDX,0x5ecbb9                    ; 00535d50 | = "..\\engine\\pcx.c"
        ;   Label: LAB_00535d50
    MOV ECX,0x98                        ; 00535d55
    PUSH 0x5ecbc9                       ; 00535d5a | = "saveScreenRaw32 - No ext found"
    MOV dword ptr [0x01d1d400],EDX      ; 00535d5f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00535d65 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00535d6b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00535d70
    JMP 0x00535c1d                      ; 00535d73
        ;   XREF to: 00535c1d (UNCONDITIONAL_JUMP)  ; LAB_00535c1d

