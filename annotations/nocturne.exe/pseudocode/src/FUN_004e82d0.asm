; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e82d0(char *param_1,undefined4 *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00522480 at 005228f2
;   FUN_00523ea0 at 005243e3
;
; Referenced Globals:
;   undefined4 DAT_01cd8b28
;   undefined4 DAT_01cd8b29
;   undefined4 DAT_01cd8b2a
;   undefined4 DAT_01cd8b2b
;
; Called Functions:
;   FUN_004e85b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e82d0
        ;   Label: FUN_004e82d0
    PUSH ESI                            ; 004e82d1
    PUSH EDI                            ; 004e82d2
    PUSH EBP                            ; 004e82d3
    SUB ESP,0x8                         ; 004e82d4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004e82d7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e82db
    MOV EDI,0x1cd8b28                   ; 004e82df
    MOV EBP,dword ptr [ESP + 0x20]      ; 004e82e4
    PUSH EDI                            ; 004e82e8
    MOV AL,byte ptr [ESI]               ; 004e82e9
        ;   Label: LAB_004e82e9
    MOV byte ptr [EDI],AL               ; 004e82eb | DAT_01cd8b28 | DAT_01cd8b2a
    CMP AL,0x0                          ; 004e82ed
    JZ 0x004e8301                       ; 004e82ef
        ;   XREF to: 004e8301 (CONDITIONAL_JUMP)  ; LAB_004e8301
    MOV AL,byte ptr [ESI + 0x1]         ; 004e82f1
    ADD ESI,0x2                         ; 004e82f4
    MOV byte ptr [EDI + 0x1],AL         ; 004e82f7 | DAT_01cd8b29 | DAT_01cd8b2b
    ADD EDI,0x2                         ; 004e82fa
    CMP AL,0x0                          ; 004e82fd
    JNZ 0x004e82e9                      ; 004e82ff
        ;   XREF to: 004e82e9 (CONDITIONAL_JUMP)  ; LAB_004e82e9
    POP EDI                             ; 004e8301
        ;   Label: LAB_004e8301
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e8302
    XOR EDX,EDX                         ; 004e8306
    ADD EAX,0x110                       ; 004e8308
    MOV dword ptr [ESP + 0x4],EDX       ; 004e830d
    MOV dword ptr [ESP],EAX             ; 004e8311
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e8314
        ;   Label: LAB_004e8314
    MOV ECX,dword ptr [EAX + 0x108]     ; 004e8318
    TEST ECX,ECX                        ; 004e831e
    JLE 0x004e8395                      ; 004e8320
        ;   XREF to: 004e8395 (CONDITIONAL_JUMP)  ; LAB_004e8395
    MOV EDX,ECX                         ; 004e8322
    CMP ECX,EBX                         ; 004e8324
    JLE 0x004e832a                      ; 004e8326
        ;   XREF to: 004e832a (CONDITIONAL_JUMP)  ; LAB_004e832a
    MOV EDX,EBX                         ; 004e8328
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e832a
        ;   Label: LAB_004e832a
    MOV ECX,dword ptr [ECX + 0x104]     ; 004e832e
    IMUL ECX,EDX                        ; 004e8334
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e8337
    MOV EDI,EBP                         ; 004e833b
    MOV ESI,dword ptr [ESI + 0x10c]     ; 004e833d
    ADD ECX,ECX                         ; 004e8343
    PUSH EDI                            ; 004e8345
    MOV EAX,ECX                         ; 004e8346
    SHR ECX,0x2                         ; 004e8348
    MOVSD.REP ES:EDI,ESI                ; 004e834b
    MOV CL,AL                           ; 004e834d
    AND CL,0x3                          ; 004e834f
    MOVSB.REP ES:EDI,ESI                ; 004e8352
    POP EDI                             ; 004e8354
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e8355
    SUB dword ptr [EAX + 0x108],EDX     ; 004e8359
    MOV EAX,dword ptr [EAX + 0x104]     ; 004e835f
    IMUL EAX,EDX                        ; 004e8365
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004e8368
    MOV ESI,dword ptr [ECX + 0x10c]     ; 004e836c
    ADD EAX,EAX                         ; 004e8372
    ADD ESI,EAX                         ; 004e8374
    MOV EAX,dword ptr [ECX + 0x104]     ; 004e8376
    IMUL EAX,EDX                        ; 004e837c
    MOV EDI,dword ptr [ESP + 0x4]       ; 004e837f
    ADD EDI,EDX                         ; 004e8383
    SUB EBX,EDX                         ; 004e8385
    MOV dword ptr [ESP + 0x4],EDI       ; 004e8387
    ADD EAX,EAX                         ; 004e838b
    MOV dword ptr [ECX + 0x10c],ESI     ; 004e838d
    ADD EBP,EAX                         ; 004e8393
    CMP EBX,0x480                       ; 004e8395
        ;   Label: LAB_004e8395
    JGE 0x004e83ae                      ; 004e839b
        ;   XREF to: 004e83ae (CONDITIONAL_JUMP)  ; LAB_004e83ae
    CMP EBX,0x1                         ; 004e839d
    JGE 0x004e83df                      ; 004e83a0
        ;   XREF to: 004e83df (CONDITIONAL_JUMP)  ; LAB_004e83df
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e83a2
        ;   Label: LAB_004e83a2
    ADD ESP,0x8                         ; 004e83a6
    POP EBP                             ; 004e83a9
    POP EDI                             ; 004e83aa
    POP ESI                             ; 004e83ab
    POP EBX                             ; 004e83ac
    RET                                 ; 004e83ad
    PUSH EBP                            ; 004e83ae
        ;   Label: LAB_004e83ae
    MOV ECX,dword ptr [ESP + 0x20]      ; 004e83af
    PUSH ECX                            ; 004e83b3
    CALL FUN_004e85b0                   ; 004e83b4
        ;   XREF to: 004e85b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e85b0()
    ADD ESP,0x8                         ; 004e83b9
    TEST EAX,EAX                        ; 004e83bc
    JLE 0x004e83a2                      ; 004e83be
        ;   XREF to: 004e83a2 (CONDITIONAL_JUMP)  ; LAB_004e83a2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e83c0
    MOV EDX,dword ptr [EDX + 0x104]     ; 004e83c4
    IMUL EDX,EAX                        ; 004e83ca
    MOV ESI,dword ptr [ESP + 0x4]       ; 004e83cd
    SUB EBX,EAX                         ; 004e83d1
    ADD ESI,EAX                         ; 004e83d3
    ADD EDX,EDX                         ; 004e83d5
    MOV dword ptr [ESP + 0x4],ESI       ; 004e83d7
    ADD EBP,EDX                         ; 004e83db
    JMP 0x004e8395                      ; 004e83dd
        ;   XREF to: 004e8395 (UNCONDITIONAL_JUMP)  ; LAB_004e8395
    MOV EDI,dword ptr [ESP]             ; 004e83df
        ;   Label: LAB_004e83df
    PUSH EDI                            ; 004e83e2
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e83e3
    PUSH EAX                            ; 004e83e7
    CALL FUN_004e85b0                   ; 004e83e8
        ;   XREF to: 004e85b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e85b0()
    ADD ESP,0x8                         ; 004e83ed
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e83f0
    MOV dword ptr [EDX + 0x108],EAX     ; 004e83f4
    TEST EAX,EAX                        ; 004e83fa
    JLE 0x004e83a2                      ; 004e83fc
        ;   XREF to: 004e83a2 (CONDITIONAL_JUMP)  ; LAB_004e83a2
    MOV dword ptr [EDX + 0x10c],EDI     ; 004e83fe
    JMP 0x004e8314                      ; 004e8404
        ;   XREF to: 004e8314 (UNCONDITIONAL_JUMP)  ; LAB_004e8314

