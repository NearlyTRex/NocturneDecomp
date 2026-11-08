; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00479180(int param_1,undefined4 param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[34]:
;   FUN_0040d220 at 0040d273
;   FUN_0043e6d0 at 0043e6f3
;   FUN_00447db0 at 00447dd3
;   FUN_0044fff0 at 00450090
;   FUN_00453610 at 00453698
;   FUN_0045da30 at 0045da4a
;   FUN_0045ddb0 at 0045ddf7
;   FUN_004668a0 at 004668c0
;   FUN_0048afa0 at 0048afb0
;   FUN_004bcba0 at 004bcc37
;   ... and 24 more
;
; Called Functions:
;   FUN_00478e20
;   FUN_00478e90
;   FUN_004798c0
;   FUN_005c12b0
;   FUN_005c157c
;   FUN_005c170c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479180
        ;   Label: FUN_00479180
    PUSH ESI                            ; 00479181
    PUSH EDI                            ; 00479182
    SUB ESP,0x214                       ; 00479183
    MOV EDI,dword ptr [ESP + 0x224]     ; 00479189
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00479190
    MOV EDX,dword ptr [ESP + 0x228]     ; 00479197
    PUSH EDX                            ; 0047919e
    PUSH EDI                            ; 0047919f
    LEA EAX,[ESP + 0x8]                 ; 004791a0
    PUSH EAX                            ; 004791a4
    MOV EBX,ESI                         ; 004791a5
    CALL FUN_00478e20                   ; 004791a7
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00478e20()
    MOV AH,byte ptr [ESI]               ; 004791ac
    ADD ESP,0xc                         ; 004791ae
    TEST AH,AH                          ; 004791b1
    JZ 0x004791f4                       ; 004791b3
        ;   XREF to: 004791f4 (CONDITIONAL_JUMP)  ; LAB_004791f4
    XOR EAX,EAX                         ; 004791b5
        ;   Label: LAB_004791b5
    MOV AL,byte ptr [EBX]               ; 004791b7
    PUSH EAX                            ; 004791b9
    CALL FUN_005c12b0                   ; 004791ba
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12b0()
    ADD ESP,0x4                         ; 004791bf
    CMP EAX,0x57                        ; 004791c2
    JNZ 0x004791ec                      ; 004791c5
        ;   XREF to: 004791ec (CONDITIONAL_JUMP)  ; LAB_004791ec
    TEST EDI,EDI                        ; 004791c7
    JZ 0x004791d4                       ; 004791c9
        ;   XREF to: 004791d4 (CONDITIONAL_JUMP)  ; LAB_004791d4
    PUSH EDI                            ; 004791cb
    CALL FUN_004798c0                   ; 004791cc
        ;   XREF to: 004798c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004798c0()
    ADD ESP,0x4                         ; 004791d1
    PUSH ESI                            ; 004791d4
        ;   Label: LAB_004791d4
    LEA EAX,[ESP + 0x4]                 ; 004791d5
    PUSH EAX                            ; 004791d9
    CALL FUN_005c157c                   ; 004791da
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 004791df
    ADD ESP,0x214                       ; 004791e2
        ;   Label: LAB_004791e2
    POP EDI                             ; 004791e8
    POP ESI                             ; 004791e9
    POP EBX                             ; 004791ea
    RET                                 ; 004791eb
    MOV DL,byte ptr [EBX + 0x1]         ; 004791ec
        ;   Label: LAB_004791ec
    INC EBX                             ; 004791ef
    TEST DL,DL                          ; 004791f0
    JNZ 0x004791b5                      ; 004791f2
        ;   XREF to: 004791b5 (CONDITIONAL_JUMP)  ; LAB_004791b5
    MOV EAX,ESP                         ; 004791f4
        ;   Label: LAB_004791f4
    PUSH EAX                            ; 004791f6
    CALL FUN_00478e90                   ; 004791f7
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00478e90()
    ADD ESP,0x4                         ; 004791fc
    TEST EAX,EAX                        ; 004791ff
    JZ 0x004791e2                       ; 00479201
        ;   XREF to: 004791e2 (CONDITIONAL_JUMP)  ; LAB_004791e2
    PUSH ESI                            ; 00479203
    LEA EAX,[ESP + 0x104]               ; 00479204
    PUSH EAX                            ; 0047920b
    CALL FUN_005c157c                   ; 0047920c
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 00479211
    MOV EBX,EAX                         ; 00479214
    TEST EAX,EAX                        ; 00479216
    JZ 0x004791e2                       ; 00479218
        ;   XREF to: 004791e2 (CONDITIONAL_JUMP)  ; LAB_004791e2
    MOV ECX,dword ptr [ESP + 0x200]     ; 0047921a
    TEST ECX,ECX                        ; 00479221
    JZ 0x00479231                       ; 00479223
        ;   XREF to: 00479231 (CONDITIONAL_JUMP)  ; LAB_00479231
    PUSH 0x0                            ; 00479225
    PUSH ECX                            ; 00479227
    PUSH EAX                            ; 00479228
    CALL FUN_005c170c                   ; 00479229
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined FUN_005c170c()
    ADD ESP,0xc                         ; 0047922e
    MOV EAX,EBX                         ; 00479231
        ;   Label: LAB_00479231
    ADD ESP,0x214                       ; 00479233
    POP EDI                             ; 00479239
    POP ESI                             ; 0047923a
    POP EBX                             ; 0047923b
    RET                                 ; 0047923c

