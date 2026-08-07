; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_drawAntialiasedChar_FUN_004013d0(int char_code,int x_pos,int y_pos,int intensity_shift)
;
; Parameters:
; int              Stack[0x4]:4   char_code
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   intensity_shift
;
; XREF[1]:
;   engine_2d.c_drawAntialiasedString_FUN_004014a0 at 004014d2
;
; Called Functions:
;   engine_2d.c_drawAntialiasedCharShadow_FUN_004012d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004013d0
        ;   Label: engine_2d.c_drawAntialiasedChar_FUN_004013d0
    PUSH EDI                            ; 004013d1
    PUSH EBP                            ; 004013d2
    SUB ESP,0x8                         ; 004013d3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004013d6
    MOV EDI,dword ptr [ESP + 0x20]      ; 004013da
    PUSH EDI                            ; 004013de
    MOV EDX,dword ptr [ESP + 0x20]      ; 004013df
    PUSH EDX                            ; 004013e3
    PUSH EBX                            ; 004013e4
    CALL engine_2d.c_drawAntialiasedCharShadow_FUN_004012d0 ; 004013e5
        ;   XREF to: 004012d0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawAntialiasedCharShadow_FUN_004012d0(int char_code, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004013ea
    CMP EBX,0x20                        ; 004013ed
    JL 0x0040148a                       ; 004013f0
        ;   XREF to: 0040148a (CONDITIONAL_JUMP)  ; LAB_0040148a
    CMP EBX,0x80                        ; 004013f6
    JGE 0x0040148a                      ; 004013fc
        ;   XREF to: 0040148a (CONDITIONAL_JUMP)  ; LAB_0040148a
    PUSH ESI                            ; 00401402
    LEA EAX,[EDI*0x4 + 0x0]             ; 00401403
    MOV EBP,dword ptr [EBX*0x4 + 0x6afa3c] ; 0040140a
    MOV dword ptr [ESP + 0x8],EAX       ; 00401411
    ADD EAX,0x5c                        ; 00401415
    MOV ESI,dword ptr [EBX*0x4 + 0x6afe3c] ; 00401418
    MOV dword ptr [ESP + 0x4],EAX       ; 0040141f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00401423
        ;   Label: LAB_00401423
    MOV ECX,dword ptr [ESP + 0x20]      ; 00401427
    MOV EDX,dword ptr [EDX + 0x1bd2fa0] ; 0040142b
    XOR EBX,EBX                         ; 00401431
    ADD EDX,ECX                         ; 00401433
    TEST EBP,EBP                        ; 00401435
    JLE 0x00401446                      ; 00401437
        ;   XREF to: 00401446 (CONDITIONAL_JUMP)  ; LAB_00401446
    MOV AL,byte ptr [ESI]               ; 00401439
        ;   Label: LAB_00401439
    TEST AL,AL                          ; 0040143b
    JNZ 0x00401463                      ; 0040143d
        ;   XREF to: 00401463 (CONDITIONAL_JUMP)  ; LAB_00401463
    INC ESI                             ; 0040143f
        ;   Label: LAB_0040143f
    INC EBX                             ; 00401440
    INC EDX                             ; 00401441
    CMP EBX,EBP                         ; 00401442
    JL 0x00401439                       ; 00401444
        ;   XREF to: 00401439 (CONDITIONAL_JUMP)  ; LAB_00401439
    MOV EBX,dword ptr [ESP + 0x8]       ; 00401446
        ;   Label: LAB_00401446
    ADD EBX,0x4                         ; 0040144a
    MOV EDI,dword ptr [ESP + 0x4]       ; 0040144d
    MOV dword ptr [ESP + 0x8],EBX       ; 00401451
    CMP EBX,EDI                         ; 00401455
    JNZ 0x00401423                      ; 00401457
        ;   XREF to: 00401423 (CONDITIONAL_JUMP)  ; LAB_00401423
    MOV EAX,EBP                         ; 00401459
    POP ESI                             ; 0040145b
    ADD ESP,0x8                         ; 0040145c
    POP EBP                             ; 0040145f
    POP EDI                             ; 00401460
    POP EBX                             ; 00401461
    RET                                 ; 00401462
    MOV CL,byte ptr [ESP + 0x28]        ; 00401463
        ;   Label: LAB_00401463
    AND EAX,0xff                        ; 00401467
    SAR EAX,CL                          ; 0040146c
    AND EAX,0xff                        ; 0040146e
    MOV ECX,EAX                         ; 00401473
    MOV EDI,EAX                         ; 00401475
    SHL ECX,0xa                         ; 00401477
    SHL EDI,0x5                         ; 0040147a
    ADD ECX,EDI                         ; 0040147d
    MOV AL,byte ptr [ECX + EAX*0x1 + 0x1bf7720] ; 0040147f
    MOV byte ptr [EDX],AL               ; 00401486
    JMP 0x0040143f                      ; 00401488
        ;   XREF to: 0040143f (UNCONDITIONAL_JUMP)  ; LAB_0040143f
    XOR EAX,EAX                         ; 0040148a
        ;   Label: LAB_0040148a
    ADD ESP,0x8                         ; 0040148c
    POP EBP                             ; 0040148f
    POP EDI                             ; 00401490
    POP EBX                             ; 00401491
    RET                                 ; 00401492

