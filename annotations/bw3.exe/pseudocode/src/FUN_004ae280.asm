; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ae280(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004ad870 at 004ad88d
;   FUN_004ad950 at 004adbf3
;
; Called Functions:
;   FUN_0040ce40
;   FUN_004ae380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae280
        ;   Label: FUN_004ae280
    PUSH ESI                            ; 004ae281
    PUSH EDI                            ; 004ae282
    PUSH EBP                            ; 004ae283
    SUB ESP,0x3c                        ; 004ae284
    MOV EBX,dword ptr [ESP + 0x54]      ; 004ae287
    LEA EAX,[EBX*0x4 + 0x0]             ; 004ae28b
    PUSH 0x0                            ; 004ae292
    SUB EAX,EBX                         ; 004ae294
    MOV EDX,dword ptr [ESP + 0x54]      ; 004ae296
    SHL EAX,0x2                         ; 004ae29a
    LEA ESI,[ESP + 0x28]                ; 004ae29d
    ADD EBX,EAX                         ; 004ae2a1
    MOV EAX,dword ptr [ESP + 0x54]      ; 004ae2a3
    SHL EBX,0x2                         ; 004ae2a7
    ADD EAX,0x168                       ; 004ae2aa
    PUSH EDX                            ; 004ae2af
    ADD EAX,EBX                         ; 004ae2b0
    LEA EDI,[ESP + 0x8]                 ; 004ae2b2
    MOV dword ptr [ESP + 0x38],EAX      ; 004ae2b6
    CALL FUN_004ae380                   ; 004ae2ba
        ;   XREF to: 004ae380 (UNCONDITIONAL_CALL)  ; undefined FUN_004ae380()
    ADD ESP,0x8                         ; 004ae2bf
    LEA ESI,[ESP + 0x24]                ; 004ae2c2
    MOV EBX,dword ptr [ESP + 0x30]      ; 004ae2c6
    MOV EAX,ESP                         ; 004ae2ca
    ADD EBX,0x4                         ; 004ae2cc
    MOVSD ES:EDI,ESI                    ; 004ae2cf
    MOVSD ES:EDI,ESI                    ; 004ae2d0
    MOVSD ES:EDI,ESI                    ; 004ae2d1
    CMP EBX,EAX                         ; 004ae2d2
    JNZ 0x004ae35d                      ; 004ae2d4
        ;   XREF to: 004ae35d (CONDITIONAL_JUMP)  ; LAB_004ae35d
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ae2da
        ;   Label: LAB_004ae2da
    ADD EAX,0x4                         ; 004ae2de
    MOV EBX,dword ptr [ESP + 0x30]      ; 004ae2e1
    MOV EBP,EAX                         ; 004ae2e5
    ADD EAX,0x24                        ; 004ae2e7
    ADD EBX,0x10                        ; 004ae2ea
    MOV dword ptr [ESP + 0x34],EAX      ; 004ae2ed
    PUSH EBP                            ; 004ae2f1
        ;   Label: LAB_004ae2f1
    MOV ECX,dword ptr [ESP + 0x54]      ; 004ae2f2
    PUSH ECX                            ; 004ae2f6
    LEA ESI,[ESP + 0x20]                ; 004ae2f7
    LEA EDI,[ESP + 0x14]                ; 004ae2fb
    CALL FUN_004ae380                   ; 004ae2ff
        ;   XREF to: 004ae380 (UNCONDITIONAL_CALL)  ; undefined FUN_004ae380()
    LEA ESI,[ESP + 0x20]                ; 004ae304
    ADD ESP,0x8                         ; 004ae308
    LEA EAX,[ESP + 0xc]                 ; 004ae30b
    MOVSD ES:EDI,ESI                    ; 004ae30f
    MOVSD ES:EDI,ESI                    ; 004ae310
    MOVSD ES:EDI,ESI                    ; 004ae311
    CMP EBX,EAX                         ; 004ae312
    JZ 0x004ae32a                       ; 004ae314
        ;   XREF to: 004ae32a (CONDITIONAL_JUMP)  ; LAB_004ae32a
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ae316
    MOV dword ptr [EBX],EAX             ; 004ae31a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ae31c
    MOV dword ptr [EBX + 0x4],EAX       ; 004ae320
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ae323
    MOV dword ptr [EBX + 0x8],EAX       ; 004ae327
    MOV ESI,dword ptr [ESP + 0x34]      ; 004ae32a
        ;   Label: LAB_004ae32a
    ADD EBP,0xc                         ; 004ae32e
    ADD EBX,0xc                         ; 004ae331
    CMP EBP,ESI                         ; 004ae334
    JNZ 0x004ae2f1                      ; 004ae336
        ;   XREF to: 004ae2f1 (CONDITIONAL_JUMP)  ; LAB_004ae2f1
    PUSH 0x3f800000                     ; 004ae338
    PUSH 0x0                            ; 004ae33d
    CALL FUN_0040ce40                   ; 004ae33f
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x40],EAX      ; 004ae344
    FLD float ptr [ESP + 0x40]          ; 004ae348
    ADD ESP,0x8                         ; 004ae34c
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ae34f
    FSTP float ptr [EAX]                ; 004ae353
    ADD ESP,0x3c                        ; 004ae355
    POP EBP                             ; 004ae358
    POP EDI                             ; 004ae359
    POP ESI                             ; 004ae35a
    POP EBX                             ; 004ae35b
    RET                                 ; 004ae35c
    MOV EAX,dword ptr [ESP]             ; 004ae35d
        ;   Label: LAB_004ae35d
    MOV dword ptr [EBX],EAX             ; 004ae360
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ae362
    MOV dword ptr [EBX + 0x4],EAX       ; 004ae366
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ae369
    MOV dword ptr [EBX + 0x8],EAX       ; 004ae36d
    JMP 0x004ae2da                      ; 004ae370
        ;   XREF to: 004ae2da (UNCONDITIONAL_JUMP)  ; LAB_004ae2da

