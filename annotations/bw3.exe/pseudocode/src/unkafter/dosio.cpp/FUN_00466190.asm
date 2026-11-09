; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_dosio_cpp_FUN_00466190(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_dosio.cpp_FUN_004659c0 at 00465a0c
;
; Called Functions:
;   crt_watcom.c__mkdir_FUN_005a4e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466190
        ;   Label: unkafter_dosio.cpp_FUN_00466190
    PUSH ESI                            ; 00466191
    PUSH EDI                            ; 00466192
    PUSH EBP                            ; 00466193
    SUB ESP,0x104                       ; 00466194
    MOV EBP,dword ptr [ESP + 0x118]     ; 0046619a
    MOV EDI,ESP                         ; 004661a1
    MOV ESI,EBP                         ; 004661a3
    PUSH EDI                            ; 004661a5
    MOV AL,byte ptr [ESI]               ; 004661a6
        ;   Label: LAB_004661a6
    MOV byte ptr [EDI],AL               ; 004661a8
    CMP AL,0x0                          ; 004661aa
    JZ 0x004661be                       ; 004661ac
        ;   XREF to: 004661be (CONDITIONAL_JUMP)  ; LAB_004661be
    MOV AL,byte ptr [ESI + 0x1]         ; 004661ae
    ADD ESI,0x2                         ; 004661b1
    MOV byte ptr [EDI + 0x1],AL         ; 004661b4
    ADD EDI,0x2                         ; 004661b7
    CMP AL,0x0                          ; 004661ba
    JNZ 0x004661a6                      ; 004661bc
        ;   XREF to: 004661a6 (CONDITIONAL_JUMP)  ; LAB_004661a6
    POP EDI                             ; 004661be
        ;   Label: LAB_004661be
    MOV AH,byte ptr [ESP]               ; 004661bf
    MOV EBX,ESP                         ; 004661c2
    TEST AH,AH                          ; 004661c4
    JZ 0x004661f7                       ; 004661c6
        ;   XREF to: 004661f7 (CONDITIONAL_JUMP)  ; LAB_004661f7
    XOR EAX,EAX                         ; 004661c8
        ;   Label: LAB_004661c8
    MOV AL,byte ptr [EBX]               ; 004661ca
    MOV dword ptr [ESP + 0x100],EAX     ; 004661cc
    CMP EAX,0x2f                        ; 004661d3
    JNZ 0x00466215                      ; 004661d6
        ;   XREF to: 00466215 (CONDITIONAL_JUMP)  ; LAB_00466215
    MOV EAX,ESP                         ; 004661d8
        ;   Label: LAB_004661d8
    PUSH EAX                            ; 004661da
    MOV byte ptr [EBX],0x0              ; 004661db
    CALL crt_watcom.c__mkdir_FUN_005a4e10 ; 004661de
        ;   XREF to: 005a4e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005a4e10(char * path)
    ADD ESP,0x4                         ; 004661e3
    MOV AL,byte ptr [ESP + 0x100]       ; 004661e6
    MOV byte ptr [EBX],AL               ; 004661ed
    MOV DL,byte ptr [EBX + 0x1]         ; 004661ef
        ;   Label: LAB_004661ef
    INC EBX                             ; 004661f2
    TEST DL,DL                          ; 004661f3
    JNZ 0x004661c8                      ; 004661f5
        ;   XREF to: 004661c8 (CONDITIONAL_JUMP)  ; LAB_004661c8
    PUSH EBP                            ; 004661f7
        ;   Label: LAB_004661f7
    CALL crt_watcom.c__mkdir_FUN_005a4e10 ; 004661f8
        ;   XREF to: 005a4e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005a4e10(char * path)
    ADD ESP,0x4                         ; 004661fd
    TEST EAX,EAX                        ; 00466200
    SETZ AL                             ; 00466202
    AND EAX,0xff                        ; 00466205
    ADD ESP,0x104                       ; 0046620a
    POP EBP                             ; 00466210
    POP EDI                             ; 00466211
    POP ESI                             ; 00466212
    POP EBX                             ; 00466213
    RET                                 ; 00466214
    CMP EAX,0x5c                        ; 00466215
        ;   Label: LAB_00466215
    JZ 0x004661d8                       ; 00466218
        ;   XREF to: 004661d8 (CONDITIONAL_JUMP)  ; LAB_004661d8
    JMP 0x004661ef                      ; 0046621a
        ;   XREF to: 004661ef (UNCONDITIONAL_JUMP)  ; LAB_004661ef

