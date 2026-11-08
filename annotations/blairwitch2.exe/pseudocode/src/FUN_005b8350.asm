; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005b8350(uint param_1,int *param_2)
;
;
; XREF[4]:
;   FUN_0040b730 at 0040b79a
;   FUN_0044dcd0 at 0044dd2f
;   FUN_004fc040 at 004fc0ea
;   FUN_00529c10 at 00529e9e
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;
; Called Functions:
;   FUN_005bce04
;   FUN_005be1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8350
        ;   Label: FUN_005b8350
    PUSH ESI                            ; 005b8351
    PUSH EDI                            ; 005b8352
    PUSH EBP                            ; 005b8353
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b8354
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b8358
    CMP EDX,-0x1                        ; 005b835c
    JNZ 0x005b8368                      ; 005b835f
        ;   XREF to: 005b8368 (CONDITIONAL_JUMP)  ; LAB_005b8368
    MOV EAX,EDX                         ; 005b8361
    POP EBP                             ; 005b8363
    POP EDI                             ; 005b8364
    POP ESI                             ; 005b8365
    POP EBX                             ; 005b8366
    RET                                 ; 005b8367
    MOV ECX,dword ptr [EBX + 0x10]      ; 005b8368
        ;   Label: LAB_005b8368
    PUSH ECX                            ; 005b836b
    CALL dword ptr [0x0061f2a8]         ; 005b836c | PTR_FUN_0061f2a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8372
    MOV ESI,dword ptr [EAX + 0xc]       ; 005b8375
    ADD ESP,0x4                         ; 005b8378
    CMP ESI,0x1                         ; 005b837b
    JZ 0x005b83a2                       ; 005b837e
        ;   XREF to: 005b83a2 (CONDITIONAL_JUMP)  ; LAB_005b83a2
    TEST ESI,ESI                        ; 005b8380
    JZ 0x005b839b                       ; 005b8382
        ;   XREF to: 005b839b (CONDITIONAL_JUMP)  ; LAB_005b839b
    MOV EBP,dword ptr [EBX + 0x10]      ; 005b8384
    PUSH EBP                            ; 005b8387
    CALL dword ptr [0x0061f2ac]         ; 005b8388 | PTR_FUN_0061f2ac
    MOV EAX,0xffffffff                  ; 005b838e
    ADD ESP,0x4                         ; 005b8393
    POP EBP                             ; 005b8396
    POP EDI                             ; 005b8397
    POP ESI                             ; 005b8398
    POP EBX                             ; 005b8399
    RET                                 ; 005b839a
    MOV dword ptr [EAX + 0xc],0x1       ; 005b839b
        ;   Label: LAB_005b839b
    TEST byte ptr [EBX + 0xd],0x10      ; 005b83a2
        ;   Label: LAB_005b83a2
    JZ 0x005b83bf                       ; 005b83a6
        ;   XREF to: 005b83bf (CONDITIONAL_JUMP)  ; LAB_005b83bf
    MOV EBP,dword ptr [EBX + 0x10]      ; 005b83a8
    PUSH EBP                            ; 005b83ab
    CALL dword ptr [0x0061f2ac]         ; 005b83ac | PTR_FUN_0061f2ac
    MOV EAX,0xffffffff                  ; 005b83b2
    ADD ESP,0x4                         ; 005b83b7
    POP EBP                             ; 005b83ba
    POP EDI                             ; 005b83bb
    POP ESI                             ; 005b83bc
    POP EBX                             ; 005b83bd
    RET                                 ; 005b83be
    TEST byte ptr [EBX + 0xc],0x1       ; 005b83bf
        ;   Label: LAB_005b83bf
    JNZ 0x005b83dc                      ; 005b83c3
        ;   XREF to: 005b83dc (CONDITIONAL_JUMP)  ; LAB_005b83dc
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b83c5
        ;   Label: LAB_005b83c5
    PUSH EDI                            ; 005b83c8
    CALL dword ptr [0x0061f2ac]         ; 005b83c9 | PTR_FUN_0061f2ac
    MOV EAX,0xffffffff                  ; 005b83cf
    ADD ESP,0x4                         ; 005b83d4
    POP EBP                             ; 005b83d7
    POP EDI                             ; 005b83d8
    POP ESI                             ; 005b83d9
    POP EBX                             ; 005b83da
    RET                                 ; 005b83db
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b83dc
        ;   Label: LAB_005b83dc
    CMP dword ptr [EAX + 0x8],0x0       ; 005b83df
    JNZ 0x005b83ee                      ; 005b83e3
        ;   XREF to: 005b83ee (CONDITIONAL_JUMP)  ; LAB_005b83ee
    PUSH EBX                            ; 005b83e5
    CALL FUN_005be1d0                   ; 005b83e6
        ;   XREF to: 005be1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005be1d0()
    ADD ESP,0x4                         ; 005b83eb
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b83ee
        ;   Label: LAB_005b83ee
    TEST ECX,ECX                        ; 005b83f1
    JNZ 0x005b841b                      ; 005b83f3
        ;   XREF to: 005b841b (CONDITIONAL_JUMP)  ; LAB_005b841b
    MOV dword ptr [EBX + 0x4],0x1       ; 005b83f5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b83fc
    MOV ECX,dword ptr [EBX + 0x14]      ; 005b83ff
    MOV EAX,dword ptr [EAX + 0x8]       ; 005b8402
    ADD EAX,ECX                         ; 005b8405
    DEC EAX                             ; 005b8407
    MOV CL,byte ptr [EBX + 0xc]         ; 005b8408
    MOV dword ptr [EBX],EAX             ; 005b840b
    OR CL,0x4                           ; 005b840d
    MOV EAX,dword ptr [EBX]             ; 005b8410
    MOV DL,byte ptr [ESP + 0x14]        ; 005b8412
    MOV byte ptr [EBX + 0xc],CL         ; 005b8416
    JMP 0x005b8449                      ; 005b8419
        ;   XREF to: 005b8449 (UNCONDITIONAL_JUMP)  ; LAB_005b8449
    MOV EDX,dword ptr [EBX + 0x8]       ; 005b841b
        ;   Label: LAB_005b841b
    MOV EAX,dword ptr [EBX]             ; 005b841e
    CMP EAX,dword ptr [EDX + 0x8]       ; 005b8420
    JZ 0x005b83c5                       ; 005b8423
        ;   XREF to: 005b83c5 (CONDITIONAL_JUMP)  ; LAB_005b83c5
    MOV EAX,dword ptr [EBX]             ; 005b8425
    LEA EBP,[ECX + 0x1]                 ; 005b8427
    DEC EAX                             ; 005b842a
    MOV dword ptr [EBX + 0x4],EBP       ; 005b842b
    MOV dword ptr [EBX],EAX             ; 005b842e
    MOV AL,byte ptr [EAX]               ; 005b8430
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b8432
    AND EAX,0xff                        ; 005b8436
    CMP EAX,EDX                         ; 005b843b
    JZ 0x005b8443                       ; 005b843d
        ;   XREF to: 005b8443 (CONDITIONAL_JUMP)  ; LAB_005b8443
    OR byte ptr [EBX + 0xc],0x4         ; 005b843f
    MOV EAX,dword ptr [EBX]             ; 005b8443
        ;   Label: LAB_005b8443
    MOV DL,byte ptr [ESP + 0x14]        ; 005b8445
    MOV byte ptr [EAX],DL               ; 005b8449
        ;   Label: LAB_005b8449
    MOV CH,byte ptr [EBX + 0xc]         ; 005b844b
    MOV ESI,dword ptr [EBX + 0x10]      ; 005b844e
    AND CH,0xef                         ; 005b8451
    PUSH ESI                            ; 005b8454
    MOV byte ptr [EBX + 0xc],CH         ; 005b8455
    CALL dword ptr [0x0061f2ac]         ; 005b8458 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005b845e
    XOR EAX,EAX                         ; 005b8461
    MOV AL,byte ptr [ESP + 0x14]        ; 005b8463
    POP EBP                             ; 005b8467
    POP EDI                             ; 005b8468
    POP ESI                             ; 005b8469
    POP EBX                             ; 005b846a
    RET                                 ; 005b846b

