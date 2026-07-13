; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004012d0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004013d0 at 004013e5
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004012d0
        ;   Label: FUN_004012d0
    PUSH ESI                            ; 004012d1
    PUSH EDI                            ; 004012d2
    PUSH EBP                            ; 004012d3
    SUB ESP,0x8                         ; 004012d4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004012d7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004012db
    CMP EDX,0x1                         ; 004012df
    JL 0x004013a1                       ; 004012e2
        ;   XREF to: 004013a1 (CONDITIONAL_JUMP)  ; LAB_004013a1
    MOV ECX,dword ptr [0x005b7620]      ; 004012e8 | DAT_005b7620
    LEA EAX,[EDX + 0x18]                ; 004012ee
    CMP EAX,ECX                         ; 004012f1
    JGE 0x004013a1                      ; 004012f3
        ;   XREF to: 004013a1 (CONDITIONAL_JUMP)  ; LAB_004013a1
    MOV EBX,dword ptr [ESP + 0x20]      ; 004012f9
    CMP EBX,0x1                         ; 004012fd
    JL 0x004013a1                       ; 00401300
        ;   XREF to: 004013a1 (CONDITIONAL_JUMP)  ; LAB_004013a1
    MOV ESI,dword ptr [0x005b761c]      ; 00401306 | DAT_005b761c
    LEA EAX,[EBX + 0x17]                ; 0040130c
    CMP EAX,ESI                         ; 0040130f
    JGE 0x004013a1                      ; 00401311
        ;   XREF to: 004013a1 (CONDITIONAL_JUMP)  ; LAB_004013a1
    CMP EDI,0x20                        ; 00401317
    JL 0x004013a1                       ; 0040131a
        ;   XREF to: 004013a1 (CONDITIONAL_JUMP)  ; LAB_004013a1
    CMP EDI,0x80                        ; 00401320
    JGE 0x004013a1                      ; 00401326
        ;   XREF to: 004013a1 (CONDITIONAL_JUMP)  ; LAB_004013a1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040132c
    MOV EBP,dword ptr [EDI*0x4 + 0x6afa3c] ; 00401333
    MOV dword ptr [ESP + 0x4],EAX       ; 0040133a
    ADD EAX,0x5c                        ; 0040133e
    MOV EDI,dword ptr [EDI*0x4 + 0x6afe3c] ; 00401341
    MOV dword ptr [ESP],EAX             ; 00401348
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040134b
        ;   Label: LAB_0040134b
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040134f
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 00401353
    ADD EAX,EDX                         ; 00401359
    LEA ECX,[EAX + -0x1]                ; 0040135b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040135e
    MOV EAX,dword ptr [EAX + 0x1bd2fa4] ; 00401362
    MOV ESI,EDX                         ; 00401368
    ADD EAX,EDX                         ; 0040136a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040136c
    MOV EDX,dword ptr [EDX + 0x1bd2f9c] ; 00401370
    ADD EDX,ESI                         ; 00401376
    DEC EAX                             ; 00401378
    DEC EDX                             ; 00401379
    XOR ESI,ESI                         ; 0040137a
    TEST EBP,EBP                        ; 0040137c
    JLE 0x0040138f                      ; 0040137e
        ;   XREF to: 0040138f (CONDITIONAL_JUMP)  ; LAB_0040138f
    MOV BL,byte ptr [EDI]               ; 00401380
        ;   Label: LAB_00401380
    TEST BL,BL                          ; 00401382
    JNZ 0x004013a9                      ; 00401384
        ;   XREF to: 004013a9 (CONDITIONAL_JUMP)  ; LAB_004013a9
    INC EDI                             ; 00401386
        ;   Label: LAB_00401386
    INC ECX                             ; 00401387
    INC EAX                             ; 00401388
    INC ESI                             ; 00401389
    INC EDX                             ; 0040138a
    CMP ESI,EBP                         ; 0040138b
    JL 0x00401380                       ; 0040138d
        ;   XREF to: 00401380 (CONDITIONAL_JUMP)  ; LAB_00401380
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040138f
        ;   Label: LAB_0040138f
    ADD EAX,0x4                         ; 00401393
    MOV EDX,dword ptr [ESP]             ; 00401396
    MOV dword ptr [ESP + 0x4],EAX       ; 00401399
    CMP EAX,EDX                         ; 0040139d
    JNZ 0x0040134b                      ; 0040139f
        ;   XREF to: 0040134b (CONDITIONAL_JUMP)  ; LAB_0040134b
    ADD ESP,0x8                         ; 004013a1
        ;   Label: LAB_004013a1
    POP EBP                             ; 004013a4
    POP EDI                             ; 004013a5
    POP ESI                             ; 004013a6
    POP EBX                             ; 004013a7
    RET                                 ; 004013a8
    MOV byte ptr [ECX + 0x1],0x0        ; 004013a9
        ;   Label: LAB_004013a9
    MOV byte ptr [ECX + 0x2],0x0        ; 004013ad
    MOV byte ptr [ECX],0x0              ; 004013b1
    MOV byte ptr [EAX],0x0              ; 004013b4
    MOV byte ptr [EAX + 0x1],0x0        ; 004013b7
    MOV byte ptr [EAX + 0x2],0x0        ; 004013bb
    MOV byte ptr [EDX],0x0              ; 004013bf
    MOV byte ptr [EDX + 0x1],0x0        ; 004013c2
    MOV byte ptr [EDX + 0x2],0x0        ; 004013c6
    JMP 0x00401386                      ; 004013ca
        ;   XREF to: 00401386 (UNCONDITIONAL_JUMP)  ; LAB_00401386

