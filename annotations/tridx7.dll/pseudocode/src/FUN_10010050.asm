; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10010050(void)
;
;
; XREF[1]:
;   FUN_1000fff0 at 1001000c
;
; Referenced Globals:
;   TerminatedCString s_TZ_10012ea0
;   undefined4 DAT_10018520
;   undefined4 DAT_10018524
;   undefined4 DAT_10018528
;   undefined4 DAT_10018530
;   undefined1 DAT_10018533
;   undefined1 DAT_1001856f
;   undefined1 DAT_10018570
;   undefined1 DAT_10018573
;   undefined1 DAT_100185af
;   void* PTR_DAT_100185b0 = 10018530
;   void* PTR_DAT_100185b4 = 10018570
;   undefined4 DAT_100185b8
;   undefined4 DAT_100185c0
;   undefined4 DAT_100185d0
;   ... and 9 more
;
; Called Functions:
;   __lock
;   _strncpy
;   FUN_10005a10
;   FUN_10005b30
;   FUN_10008830
;   FUN_1000fe60
;   FUN_10010910
;   FUN_10010c50
;   GetTimeZoneInformation
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10010050
        ;   Label: FUN_10010050
    PUSH ESI                            ; 10010051
    PUSH EDI                            ; 10010052
    XOR EBX,EBX                         ; 10010053
    PUSH EBP                            ; 10010055
    PUSH 0xc                            ; 10010056
    CALL __lock                         ; 10010058
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 1001005d
    MOV EAX,0xffffffff                  ; 10010060
    MOV dword ptr [0x102407a0],EBX      ; 10010065 | DAT_102407a0
    MOV [0x100185d0],EAX                ; 1001006b | DAT_100185d0
    PUSH 0x10012ea0                     ; 10010070 | = "TZ"
    MOV [0x100185c0],EAX                ; 10010075 | DAT_100185c0
    CALL FUN_10010c50                   ; 1001007a
        ;   XREF to: 10010c50 (UNCONDITIONAL_CALL)  ; undefined FUN_10010c50()
    ADD ESP,0x4                         ; 1001007f
    MOV EBP,EAX                         ; 10010082
    CMP EBP,EBX                         ; 10010084
    JNZ 0x10010170                      ; 10010086
        ;   XREF to: 10010170 (CONDITIONAL_JUMP)  ; LAB_10010170
    PUSH 0xc                            ; 1001008c
    CALL FUN_10005a10                   ; 1001008e
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10010093
    PUSH 0x102407a8                     ; 10010096 | DAT_102407a8
    CALL dword ptr [0x10242284]         ; 1001009b | PTR_GetTimeZoneInformation_10242284
    TEST EAX,EAX                        ; 100100a1
    JZ 0x10010328                       ; 100100a3
        ;   XREF to: 10010328 (CONDITIONAL_JUMP)  ; LAB_10010328
    MOV EAX,[0x102407a8]                ; 100100a9 | DAT_102407a8
    SHL EAX,0x2                         ; 100100ae
    CMP word ptr [0x102407ee],BX        ; 100100b1 | DAT_102407ee
    LEA ECX,[EAX + EAX*0x2]             ; 100100b8
    MOV dword ptr [0x102407a0],0x1      ; 100100bb | DAT_102407a0
    LEA EDX,[ECX + ECX*0x4]             ; 100100c5
    MOV dword ptr [0x10018520],EDX      ; 100100c8 | DAT_10018520
    JZ 0x100100e4                       ; 100100ce
        ;   XREF to: 100100e4 (CONDITIONAL_JUMP)  ; LAB_100100e4
    MOV EAX,[0x102407fc]                ; 100100d0 | DAT_102407fc
    SHL EAX,0x2                         ; 100100d5
    LEA ECX,[EAX + EAX*0x2]             ; 100100d8
    LEA EDX,[ECX + ECX*0x4]             ; 100100db
    ADD dword ptr [0x10018520],EDX      ; 100100de | DAT_10018520
    CMP word ptr [0x10240842],0x0       ; 100100e4 | DAT_10240842
        ;   Label: LAB_100100e4
    JZ 0x1001011d                       ; 100100ec
        ;   XREF to: 1001011d (CONDITIONAL_JUMP)  ; LAB_1001011d
    CMP dword ptr [0x10240850],0x0      ; 100100ee | DAT_10240850
    JZ 0x1001011d                       ; 100100f5
        ;   XREF to: 1001011d (CONDITIONAL_JUMP)  ; LAB_1001011d
    MOV EAX,[0x10240850]                ; 100100f7 | DAT_10240850
    SUB EAX,dword ptr [0x102407fc]      ; 100100fc | DAT_102407fc
    SHL EAX,0x2                         ; 10010102
    MOV dword ptr [0x10018524],0x1      ; 10010105 | DAT_10018524
    LEA ECX,[EAX + EAX*0x2]             ; 1001010f
    LEA EDX,[ECX + ECX*0x4]             ; 10010112
    MOV dword ptr [0x10018528],EDX      ; 10010115 | DAT_10018528
    JMP 0x10010127                      ; 1001011b
        ;   XREF to: 10010127 (UNCONDITIONAL_JUMP)  ; LAB_10010127
    MOV dword ptr [0x10018524],0x0      ; 1001011d | DAT_10018524
        ;   Label: LAB_1001011d
    PUSH 0x40                           ; 10010127
        ;   Label: LAB_10010127
    MOV EAX,[0x100185b0]                ; 10010129 | PTR_DAT_100185b0
    PUSH 0x102407ac                     ; 1001012e | DAT_102407ac
    PUSH EAX                            ; 10010133 | DAT_10018530
    CALL FUN_10010910                   ; 10010134
        ;   XREF to: 10010910 (UNCONDITIONAL_CALL)  ; undefined FUN_10010910()
    ADD ESP,0xc                         ; 10010139
    MOV EAX,[0x100185b4]                ; 1001013c | PTR_DAT_100185b4
    PUSH 0x40                           ; 10010141
    PUSH 0x10240800                     ; 10010143 | DAT_10240800
    PUSH EAX                            ; 10010148 | DAT_10018570
    CALL FUN_10010910                   ; 10010149
        ;   XREF to: 10010910 (UNCONDITIONAL_CALL)  ; undefined FUN_10010910()
    ADD ESP,0xc                         ; 1001014e
    MOV EAX,[0x100185b4]                ; 10010151 | PTR_DAT_100185b4
    MOV byte ptr [EAX + 0x3f],0x0       ; 10010156 | DAT_100185af
    MOV EAX,[0x100185b4]                ; 1001015a | PTR_DAT_100185b4 | DAT_10018570
    MOV EDX,dword ptr [0x100185b0]      ; 1001015f | PTR_DAT_100185b0
    POP EBP                             ; 10010165
    POP EDI                             ; 10010166
    MOV CL,byte ptr [EAX + 0x3f]        ; 10010167 | DAT_100185af
    POP ESI                             ; 1001016a
    POP EBX                             ; 1001016b
    MOV byte ptr [EDX + 0x3f],CL        ; 1001016c | DAT_1001856f
    RET                                 ; 1001016f
    CMP byte ptr [EBP],0x0              ; 10010170
        ;   Label: LAB_10010170
    JZ 0x1001031e                       ; 10010174
        ;   XREF to: 1001031e (CONDITIONAL_JUMP)  ; LAB_1001031e
    CMP dword ptr [0x100185b8],0x0      ; 1001017a | DAT_100185b8
    JZ 0x100101b8                       ; 10010181
        ;   XREF to: 100101b8 (CONDITIONAL_JUMP)  ; LAB_100101b8
    MOV EAX,EBP                         ; 10010183
    MOV EDX,dword ptr [0x100185b8]      ; 10010185 | DAT_100185b8
    MOV CL,byte ptr [EAX]               ; 1001018b
        ;   Label: LAB_1001018b
    CMP CL,byte ptr [EDX]               ; 1001018d
    JNZ 0x100101ab                      ; 1001018f
        ;   XREF to: 100101ab (CONDITIONAL_JUMP)  ; LAB_100101ab
    OR CL,CL                            ; 10010191
    JZ 0x100101a7                       ; 10010193
        ;   XREF to: 100101a7 (CONDITIONAL_JUMP)  ; LAB_100101a7
    MOV CL,byte ptr [EAX + 0x1]         ; 10010195
    CMP CL,byte ptr [EDX + 0x1]         ; 10010198
    JNZ 0x100101ab                      ; 1001019b
        ;   XREF to: 100101ab (CONDITIONAL_JUMP)  ; LAB_100101ab
    ADD EAX,0x2                         ; 1001019d
    ADD EDX,0x2                         ; 100101a0
    OR CL,CL                            ; 100101a3
    JNZ 0x1001018b                      ; 100101a5
        ;   XREF to: 1001018b (CONDITIONAL_JUMP)  ; LAB_1001018b
    XOR EAX,EAX                         ; 100101a7
        ;   Label: LAB_100101a7
    JMP 0x100101b0                      ; 100101a9
        ;   XREF to: 100101b0 (UNCONDITIONAL_JUMP)  ; LAB_100101b0
    SBB EAX,EAX                         ; 100101ab
        ;   Label: LAB_100101ab
    SBB EAX,-0x1                        ; 100101ad
    TEST EAX,EAX                        ; 100101b0
        ;   Label: LAB_100101b0
    JZ 0x1001031e                       ; 100101b2
        ;   XREF to: 1001031e (CONDITIONAL_JUMP)  ; LAB_1001031e
    MOV EAX,[0x100185b8]                ; 100101b8 | DAT_100185b8
        ;   Label: LAB_100101b8
    MOV EDI,EBP                         ; 100101bd
    PUSH EAX                            ; 100101bf
    CALL FUN_10005b30                   ; 100101c0
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 100101c5
    MOV ECX,0xffffffff                  ; 100101c8
    SUB EAX,EAX                         ; 100101cd
    SCASB.REPNE ES:EDI                  ; 100101cf
    NOT ECX                             ; 100101d1
    PUSH ECX                            ; 100101d3
    CALL FUN_10008830                   ; 100101d4
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 100101d9
    MOV [0x100185b8],EAX                ; 100101dc | DAT_100185b8
    TEST EAX,EAX                        ; 100101e1
    JNZ 0x100101f4                      ; 100101e3
        ;   XREF to: 100101f4 (CONDITIONAL_JUMP)  ; LAB_100101f4
    PUSH 0xc                            ; 100101e5
    CALL FUN_10005a10                   ; 100101e7
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 100101ec
    POP EBP                             ; 100101ef
    POP EDI                             ; 100101f0
    POP ESI                             ; 100101f1
    POP EBX                             ; 100101f2
    RET                                 ; 100101f3
    MOV EDI,EBP                         ; 100101f4
        ;   Label: LAB_100101f4
    MOV ECX,0xffffffff                  ; 100101f6
    SUB EAX,EAX                         ; 100101fb
    SCASB.REPNE ES:EDI                  ; 100101fd
    NOT ECX                             ; 100101ff
    SUB EDI,ECX                         ; 10010201
    MOV EAX,ECX                         ; 10010203
    SHR ECX,0x2                         ; 10010205
    MOV ESI,EDI                         ; 10010208
    MOV EDI,dword ptr [0x100185b8]      ; 1001020a | DAT_100185b8
    MOVSD.REP ES:EDI,ESI                ; 10010210
    MOV ECX,EAX                         ; 10010212
    PUSH 0xc                            ; 10010214
    AND ECX,0x3                         ; 10010216
    MOVSB.REP ES:EDI,ESI                ; 10010219
    CALL FUN_10005a10                   ; 1001021b
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10010220
    MOV ECX,dword ptr [0x100185b0]      ; 10010223 | PTR_DAT_100185b0
    PUSH 0x3                            ; 10010229
    PUSH EBP                            ; 1001022b
    PUSH ECX                            ; 1001022c | DAT_10018530
    ADD EBP,0x3                         ; 1001022d
    CALL _strncpy                       ; 10010230
        ;   XREF to: 1000a9f0 (UNCONDITIONAL_CALL)  ; char * _strncpy(char * _Dest, char * _Source, size_t _Count)
    ADD ESP,0xc                         ; 10010235
    MOV EAX,[0x100185b0]                ; 10010238 | PTR_DAT_100185b0
    MOV byte ptr [EAX + 0x3],0x0        ; 1001023d | DAT_10018533
    CMP byte ptr [EBP],0x2d             ; 10010241
    JNZ 0x1001024e                      ; 10010245
        ;   XREF to: 1001024e (CONDITIONAL_JUMP)  ; LAB_1001024e
    MOV EBX,0x1                         ; 10010247
    ADD EBP,EBX                         ; 1001024c
    PUSH EBP                            ; 1001024e
        ;   Label: LAB_1001024e
    CALL FUN_1000fe60                   ; 1001024f
        ;   XREF to: 1000fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_1000fe60()
    ADD ESP,0x4                         ; 10010254
    LEA EAX,[EAX + EAX*0x4]             ; 10010257
    LEA ECX,[EAX + EAX*0x4]             ; 1001025a
    LEA EAX,[ECX + ECX*0x8]             ; 1001025d
    SHL EAX,0x4                         ; 10010260
    MOV [0x10018520],EAX                ; 10010263 | DAT_10018520
    MOV AL,byte ptr [EBP]               ; 10010268
        ;   Label: LAB_10010268
    CMP AL,0x2b                         ; 1001026b
    JZ 0x10010277                       ; 1001026d
        ;   XREF to: 10010277 (CONDITIONAL_JUMP)  ; LAB_10010277
    CMP AL,0x30                         ; 1001026f
    JL 0x1001027a                       ; 10010271
        ;   XREF to: 1001027a (CONDITIONAL_JUMP)  ; LAB_1001027a
    CMP AL,0x39                         ; 10010273
    JG 0x1001027a                       ; 10010275
        ;   XREF to: 1001027a (CONDITIONAL_JUMP)  ; LAB_1001027a
    INC EBP                             ; 10010277
        ;   Label: LAB_10010277
    JMP 0x10010268                      ; 10010278
        ;   XREF to: 10010268 (UNCONDITIONAL_JUMP)  ; LAB_10010268
    CMP byte ptr [EBP],0x3a             ; 1001027a
        ;   Label: LAB_1001027a
    JNZ 0x100102d5                      ; 1001027e
        ;   XREF to: 100102d5 (CONDITIONAL_JUMP)  ; LAB_100102d5
    INC EBP                             ; 10010280
    PUSH EBP                            ; 10010281
    CALL FUN_1000fe60                   ; 10010282
        ;   XREF to: 1000fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_1000fe60()
    SHL EAX,0x2                         ; 10010287
    ADD ESP,0x4                         ; 1001028a
    LEA ECX,[EAX + EAX*0x2]             ; 1001028d
    LEA EDX,[ECX + ECX*0x4]             ; 10010290
    ADD dword ptr [0x10018520],EDX      ; 10010293 | DAT_10018520
    CMP byte ptr [EBP],0x30             ; 10010299
    JL 0x100102ac                       ; 1001029d
        ;   XREF to: 100102ac (CONDITIONAL_JUMP)  ; LAB_100102ac
    CMP byte ptr [EBP],0x39             ; 1001029f
        ;   Label: LAB_1001029f
    JG 0x100102ac                       ; 100102a3
        ;   XREF to: 100102ac (CONDITIONAL_JUMP)  ; LAB_100102ac
    INC EBP                             ; 100102a5
    CMP byte ptr [EBP],0x30             ; 100102a6
    JGE 0x1001029f                      ; 100102aa
        ;   XREF to: 1001029f (CONDITIONAL_JUMP)  ; LAB_1001029f
    CMP byte ptr [EBP],0x3a             ; 100102ac
        ;   Label: LAB_100102ac
    JNZ 0x100102d5                      ; 100102b0
        ;   XREF to: 100102d5 (CONDITIONAL_JUMP)  ; LAB_100102d5
    INC EBP                             ; 100102b2
    PUSH EBP                            ; 100102b3
    CALL FUN_1000fe60                   ; 100102b4
        ;   XREF to: 1000fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_1000fe60()
    ADD ESP,0x4                         ; 100102b9
    ADD dword ptr [0x10018520],EAX      ; 100102bc | DAT_10018520
    CMP byte ptr [EBP],0x30             ; 100102c2
    JL 0x100102d5                       ; 100102c6
        ;   XREF to: 100102d5 (CONDITIONAL_JUMP)  ; LAB_100102d5
    CMP byte ptr [EBP],0x39             ; 100102c8
        ;   Label: LAB_100102c8
    JG 0x100102d5                       ; 100102cc
        ;   XREF to: 100102d5 (CONDITIONAL_JUMP)  ; LAB_100102d5
    INC EBP                             ; 100102ce
    CMP byte ptr [EBP],0x30             ; 100102cf
    JGE 0x100102c8                      ; 100102d3
        ;   XREF to: 100102c8 (CONDITIONAL_JUMP)  ; LAB_100102c8
    TEST EBX,EBX                        ; 100102d5
        ;   Label: LAB_100102d5
    JZ 0x100102e5                       ; 100102d7
        ;   XREF to: 100102e5 (CONDITIONAL_JUMP)  ; LAB_100102e5
    MOV EAX,[0x10018520]                ; 100102d9 | DAT_10018520
    NEG EAX                             ; 100102de
    MOV [0x10018520],EAX                ; 100102e0 | DAT_10018520
    MOVSX EAX,byte ptr [EBP]            ; 100102e5
        ;   Label: LAB_100102e5
    MOV [0x10018524],EAX                ; 100102e9 | DAT_10018524
    TEST EAX,EAX                        ; 100102ee
    JZ 0x10010311                       ; 100102f0
        ;   XREF to: 10010311 (CONDITIONAL_JUMP)  ; LAB_10010311
    PUSH 0x3                            ; 100102f2
    MOV EAX,[0x100185b4]                ; 100102f4 | PTR_DAT_100185b4
    PUSH EBP                            ; 100102f9
    PUSH EAX                            ; 100102fa | DAT_10018570
    CALL _strncpy                       ; 100102fb
        ;   XREF to: 1000a9f0 (UNCONDITIONAL_CALL)  ; char * _strncpy(char * _Dest, char * _Source, size_t _Count)
    ADD ESP,0xc                         ; 10010300
    MOV EAX,[0x100185b4]                ; 10010303 | PTR_DAT_100185b4 | DAT_10018570
    MOV byte ptr [EAX + 0x3],0x0        ; 10010308 | DAT_10018573
    POP EBP                             ; 1001030c
    POP EDI                             ; 1001030d
    POP ESI                             ; 1001030e
    POP EBX                             ; 1001030f
    RET                                 ; 10010310
    MOV EAX,[0x100185b4]                ; 10010311 | PTR_DAT_100185b4 | DAT_10018570
        ;   Label: LAB_10010311
    POP EBP                             ; 10010316
    POP EDI                             ; 10010317
    POP ESI                             ; 10010318
    POP EBX                             ; 10010319
    MOV byte ptr [EAX],0x0              ; 1001031a | DAT_10018570
    RET                                 ; 1001031d
    PUSH 0xc                            ; 1001031e
        ;   Label: LAB_1001031e
    CALL FUN_10005a10                   ; 10010320
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10010325
    POP EBP                             ; 10010328
        ;   Label: LAB_10010328
    POP EDI                             ; 10010329
    POP ESI                             ; 1001032a
    POP EBX                             ; 1001032b
    RET                                 ; 1001032c

