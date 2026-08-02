; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00567964(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x17]:1  local_17
;
; XREF[1]:
;   crt_unknown.c_FUN_00567560 at 00567786
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   crt_locale.c_mbtowc_FUN_0056f040
;   crt_unknown.c_FUN_00567540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567964
        ;   Label: crt_unknown.c_FUN_00567964
    PUSH ESI                            ; 00567965
    PUSH EDI                            ; 00567966
    PUSH ES                             ; 00567967
    PUSH EBP                            ; 00567968
    SUB ESP,0x8                         ; 00567969
    MOV ESI,dword ptr [ESP + 0x20]      ; 0056796c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00567970
    MOV DL,byte ptr [ESI + 0x10]        ; 00567974
    TEST DL,0x1                         ; 00567977
    JZ 0x005679b0                       ; 0056797a
        ;   XREF to: 005679b0 (CONDITIONAL_JUMP)  ; LAB_005679b0
    TEST DL,0x4                         ; 0056797c
    JZ 0x0056798d                       ; 0056797f
        ;   XREF to: 0056798d (CONDITIONAL_JUMP)  ; LAB_0056798d
    MOV ECX,dword ptr [EAX]             ; 00567981
    ADD ECX,0x8                         ; 00567983
    MOV dword ptr [EAX],ECX             ; 00567986
    LES EBX,[ECX + -0x8]                ; 00567988
    JMP 0x005679b0                      ; 0056798b
        ;   XREF to: 005679b0 (UNCONDITIONAL_JUMP)  ; LAB_005679b0
    TEST DL,0x8                         ; 0056798d
        ;   Label: LAB_0056798d
    JZ 0x005679a2                       ; 00567990
        ;   XREF to: 005679a2 (CONDITIONAL_JUMP)  ; LAB_005679a2
    MOV EBX,dword ptr [EAX]             ; 00567992
    ADD EBX,0x4                         ; 00567994
    MOV dword ptr [EAX],EBX             ; 00567997
    MOV AX,DS                           ; 00567999
    MOV ES,AX                           ; 0056799b
    MOV EBX,dword ptr [EBX + -0x4]      ; 0056799d
    JMP 0x005679b0                      ; 005679a0
        ;   XREF to: 005679b0 (UNCONDITIONAL_JUMP)  ; LAB_005679b0
    MOV EDX,dword ptr [EAX]             ; 005679a2
        ;   Label: LAB_005679a2
    ADD EDX,0x4                         ; 005679a4
    MOV dword ptr [EAX],EDX             ; 005679a7
    MOV AX,DS                           ; 005679a9
    MOV ES,AX                           ; 005679ab
    MOV EBX,dword ptr [EDX + -0x4]      ; 005679ad
    MOV EDI,dword ptr [ESI + 0xc]       ; 005679b0
        ;   Label: LAB_005679b0
    XOR EBP,EBP                         ; 005679b3
    CMP EDI,-0x1                        ; 005679b5
    JNZ 0x005679bf                      ; 005679b8
        ;   XREF to: 005679bf (CONDITIONAL_JUMP)  ; LAB_005679bf
    MOV EDI,0x1                         ; 005679ba
    TEST EDI,EDI                        ; 005679bf
        ;   Label: LAB_005679bf
    JLE 0x00567a4e                      ; 005679c1
        ;   XREF to: 00567a4e (CONDITIONAL_JUMP)  ; LAB_00567a4e
    PUSH ESI                            ; 005679c7
    CALL crt_unknown.c_FUN_00567540     ; 005679c8
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567540()
    MOV CL,byte ptr [ESI + 0x10]        ; 005679cd
    ADD ESP,0x4                         ; 005679d0
    TEST CL,0x2                         ; 005679d3
    JNZ 0x00567a4e                      ; 005679d6
        ;   XREF to: 00567a4e (CONDITIONAL_JUMP)  ; LAB_00567a4e
    INC EBP                             ; 005679dc
    DEC EDI                             ; 005679dd
    TEST CL,0x1                         ; 005679de
    JZ 0x005679bf                       ; 005679e1
        ;   XREF to: 005679bf (CONDITIONAL_JUMP)  ; LAB_005679bf
    TEST CL,0x20                        ; 005679e3
    JZ 0x00567a44                       ; 005679e6
        ;   XREF to: 00567a44 (CONDITIONAL_JUMP)  ; LAB_00567a44
    MOV EDX,dword ptr [0x02de5c30]      ; 005679e8 | DAT_02de5c30
    MOV byte ptr [ESP + 0x4],AL         ; 005679ee
    TEST EDX,EDX                        ; 005679f2
    JZ 0x00567a17                       ; 005679f4
        ;   XREF to: 00567a17 (CONDITIONAL_JUMP)  ; LAB_00567a17
    AND EAX,0xff                        ; 005679f6
    MOV AL,byte ptr [EAX + 0x2de5c41]   ; 005679fb
    AND AL,0x1                          ; 00567a01
    AND EAX,0xff                        ; 00567a03
    JZ 0x00567a17                       ; 00567a08
        ;   XREF to: 00567a17 (CONDITIONAL_JUMP)  ; LAB_00567a17
    PUSH ESI                            ; 00567a0a
    CALL crt_unknown.c_FUN_00567540     ; 00567a0b
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567540()
    ADD ESP,0x4                         ; 00567a10
    MOV byte ptr [ESP + 0x5],AL         ; 00567a13
    PUSH 0x2                            ; 00567a17
        ;   Label: LAB_00567a17
    LEA EAX,[ESP + 0x8]                 ; 00567a19
    PUSH EAX                            ; 00567a1d
    LEA EAX,[ESP + 0x8]                 ; 00567a1e
    PUSH EAX                            ; 00567a22
    CALL crt_locale.c_mbtowc_FUN_0056f040 ; 00567a23
        ;   XREF to: 0056f040 (UNCONDITIONAL_CALL)  ; int crt_locale.c_mbtowc_FUN_0056f040(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
    ADD ESP,0xc                         ; 00567a28
    CMP EAX,-0x1                        ; 00567a2b
    JNZ 0x00567a34                      ; 00567a2e
        ;   XREF to: 00567a34 (CONDITIONAL_JUMP)  ; LAB_00567a34
    XOR EAX,EAX                         ; 00567a30
    JMP 0x00567a50                      ; 00567a32
        ;   XREF to: 00567a50 (UNCONDITIONAL_JUMP)  ; LAB_00567a50
    ADD EBX,0x2                         ; 00567a34
        ;   Label: LAB_00567a34
    MOV EAX,dword ptr [ESP]             ; 00567a37
    MOV word ptr ES:[EBX + -0x2],AX     ; 00567a3a
    JMP 0x005679bf                      ; 00567a3f
        ;   XREF to: 005679bf (UNCONDITIONAL_JUMP)  ; LAB_005679bf
    INC EBX                             ; 00567a44
        ;   Label: LAB_00567a44
    MOV byte ptr ES:[EBX + -0x1],AL     ; 00567a45
    JMP 0x005679bf                      ; 00567a49
        ;   XREF to: 005679bf (UNCONDITIONAL_JUMP)  ; LAB_005679bf
    MOV EAX,EBP                         ; 00567a4e
        ;   Label: LAB_00567a4e
    ADD ESP,0x8                         ; 00567a50
        ;   Label: LAB_00567a50
    POP EBP                             ; 00567a53
    POP ES                              ; 00567a54
    POP EDI                             ; 00567a55
    POP ESI                             ; 00567a56
    POP EBX                             ; 00567a57
    RET                                 ; 00567a58

