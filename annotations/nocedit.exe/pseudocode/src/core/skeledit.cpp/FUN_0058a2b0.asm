; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_0058a2b0()
;
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x2b]:1  local_2b
; undefined1       Stack[-0x29]:1  local_29
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 at 004be0fe
;   core_hero.cpp_CHero_FUN_004f3fa0 at 004f3fdb
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 at 0058a29a
;
; Referenced Globals:
;   TerminatedCString s_DATA_s_0064a258
;   TerminatedCString s_ART_s_RAW_0064a261
;   TerminatedCString s_ART_s_ACT_0064a26d
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH 0x3c                           ; 0058a2b0
        ;   Label: core_skeledit.cpp_FUN_0058a2b0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058a2b5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058a2ba
    PUSH ESI                            ; 0058a2bb
    PUSH EDI                            ; 0058a2bc
    PUSH EBP                            ; 0058a2bd
    SUB ESP,0x1c                        ; 0058a2be
    MOV EBX,dword ptr [ESP + 0x30]      ; 0058a2c1
    ADD EBX,0x8f5c                      ; 0058a2c5
    PUSH EBX                            ; 0058a2cb
    PUSH 0x64a258                       ; 0058a2cc | = "DATA\\%s\n"
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0058a2d1
    PUSH EDX                            ; 0058a2d5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a2d6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a2db
    MOV EBX,dword ptr [ESP + 0x30]      ; 0058a2de
    XOR ECX,ECX                         ; 0058a2e2
    MOV ESI,dword ptr [EBX + 0xb8]      ; 0058a2e4
    MOV dword ptr [ESP + 0x14],ECX      ; 0058a2ea
    TEST ESI,ESI                        ; 0058a2ee
    JLE 0x0058a3c1                      ; 0058a2f0
        ;   XREF to: 0058a3c1 (CONDITIONAL_JUMP)  ; LAB_0058a3c1
    ADD EBX,0xc0                        ; 0058a2f6
    MOV dword ptr [ESP + 0x18],EBX      ; 0058a2fc
    MOV EBX,dword ptr [ESP + 0x30]      ; 0058a300
        ;   Label: LAB_0058a300
    MOV EDX,dword ptr [EBX + 0xbc]      ; 0058a304
    XOR EBP,EBP                         ; 0058a30a
    TEST EDX,EDX                        ; 0058a30c
    JLE 0x0058a398                      ; 0058a30e
        ;   XREF to: 0058a398 (CONDITIONAL_JUMP)  ; LAB_0058a398
    MOV EBX,dword ptr [ESP + 0x18]      ; 0058a314
    ADD EBX,0x8                         ; 0058a318
    MOV EDI,ESP                         ; 0058a31b
        ;   Label: LAB_0058a31b
    MOV ESI,EBX                         ; 0058a31d
    MOV DL,0x2e                         ; 0058a31f
    PUSH EDI                            ; 0058a321
    MOV AL,byte ptr [ESI]               ; 0058a322
        ;   Label: LAB_0058a322
    MOV byte ptr [EDI],AL               ; 0058a324
    CMP AL,0x0                          ; 0058a326
    JZ 0x0058a33a                       ; 0058a328
        ;   XREF to: 0058a33a (CONDITIONAL_JUMP)  ; LAB_0058a33a
    MOV AL,byte ptr [ESI + 0x1]         ; 0058a32a
    ADD ESI,0x2                         ; 0058a32d
    MOV byte ptr [EDI + 0x1],AL         ; 0058a330
    ADD EDI,0x2                         ; 0058a333
    CMP AL,0x0                          ; 0058a336
    JNZ 0x0058a322                      ; 0058a338
        ;   XREF to: 0058a322 (CONDITIONAL_JUMP)  ; LAB_0058a322
    POP EDI                             ; 0058a33a
        ;   Label: LAB_0058a33a
    MOV ESI,ESP                         ; 0058a33b
    MOV AL,byte ptr [ESI]               ; 0058a33d
        ;   Label: LAB_0058a33d
    CMP AL,DL                           ; 0058a33f
    JZ 0x0058a355                       ; 0058a341
        ;   XREF to: 0058a355 (CONDITIONAL_JUMP)  ; LAB_0058a355
    CMP AL,0x0                          ; 0058a343
    JZ 0x0058a353                       ; 0058a345
        ;   XREF to: 0058a353 (CONDITIONAL_JUMP)  ; LAB_0058a353
    INC ESI                             ; 0058a347
    MOV AL,byte ptr [ESI]               ; 0058a348
    CMP AL,DL                           ; 0058a34a
    JZ 0x0058a355                       ; 0058a34c
        ;   XREF to: 0058a355 (CONDITIONAL_JUMP)  ; LAB_0058a355
    INC ESI                             ; 0058a34e
    CMP AL,0x0                          ; 0058a34f
    JNZ 0x0058a33d                      ; 0058a351
        ;   XREF to: 0058a33d (CONDITIONAL_JUMP)  ; LAB_0058a33d
    SUB ESI,ESI                         ; 0058a353
        ;   Label: LAB_0058a353
    TEST ESI,ESI                        ; 0058a355
        ;   Label: LAB_0058a355
    JZ 0x0058a35c                       ; 0058a357
        ;   XREF to: 0058a35c (CONDITIONAL_JUMP)  ; LAB_0058a35c
    MOV byte ptr [ESI],0x0              ; 0058a359
    MOV ESI,ESP                         ; 0058a35c
        ;   Label: LAB_0058a35c
    PUSH ESI                            ; 0058a35e
    PUSH 0x64a261                       ; 0058a35f | = "ART\\%s.RAW\n"
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0058a364
    PUSH ECX                            ; 0058a368
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a369
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a36e
    MOV ESI,ESP                         ; 0058a371
    PUSH ESI                            ; 0058a373
    PUSH 0x64a26d                       ; 0058a374 | = "ART\\%s.ACT\n"
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0058a379
    PUSH ESI                            ; 0058a37d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a37e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a383
    MOV ESI,dword ptr [ESP + 0x30]      ; 0058a386
    INC EBP                             ; 0058a38a
    MOV EDI,dword ptr [ESI + 0xbc]      ; 0058a38b
    ADD EBX,0x48                        ; 0058a391
    CMP EBP,EDI                         ; 0058a394
    JL 0x0058a31b                       ; 0058a396
        ;   XREF to: 0058a31b (CONDITIONAL_JUMP)  ; LAB_0058a31b
    MOV EDI,dword ptr [ESP + 0x18]      ; 0058a398
        ;   Label: LAB_0058a398
    MOV EBP,dword ptr [ESP + 0x14]      ; 0058a39c
    MOV ESI,dword ptr [ESP + 0x30]      ; 0058a3a0
    ADD EDI,0x1680                      ; 0058a3a4
    INC EBP                             ; 0058a3aa
    MOV EAX,dword ptr [ESI + 0xb8]      ; 0058a3ab
    MOV dword ptr [ESP + 0x18],EDI      ; 0058a3b1
    MOV dword ptr [ESP + 0x14],EBP      ; 0058a3b5
    CMP EBP,EAX                         ; 0058a3b9
    JL 0x0058a300                       ; 0058a3bb
        ;   XREF to: 0058a300 (CONDITIONAL_JUMP)  ; LAB_0058a300
    ADD ESP,0x1c                        ; 0058a3c1
        ;   Label: LAB_0058a3c1
    POP EBP                             ; 0058a3c4
    POP EDI                             ; 0058a3c5
    POP ESI                             ; 0058a3c6
    POP EBX                             ; 0058a3c7
    RET                                 ; 0058a3c8

