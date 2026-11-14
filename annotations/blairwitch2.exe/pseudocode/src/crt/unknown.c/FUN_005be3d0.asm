; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * crt_unknown_c_FUN_005be3d0(void)
;
;
; XREF[1]:
;   crt_unknown.c_InternalHeapAlloc_FUN_005b8590 at 005b862b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005be3d0
        ;   Label: crt_unknown.c_FUN_005be3d0
    PUSH EDI                            ; 005be3d1
    PUSH EBP                            ; 005be3d2
    XOR EBP,EBP                         ; 005be3d3
    TEST EAX,EAX                        ; 005be3d5
    JZ 0x005be477                       ; 005be3d7
        ;   XREF to: 005be477 (CONDITIONAL_JUMP)  ; LAB_005be477
    LEA ECX,[EAX + 0xb]                 ; 005be3dd
    CMP ECX,EAX                         ; 005be3e0
    JC 0x005be477                       ; 005be3e2
        ;   XREF to: 005be477 (CONDITIONAL_JUMP)  ; LAB_005be477
    MOV EDI,EBX                         ; 005be3e8
    AND CL,0xf8                         ; 005be3ea
    MOV EAX,dword ptr [EBX + 0x14]      ; 005be3ed
    CMP ECX,0x10                        ; 005be3f0
    JNC 0x005be3fa                      ; 005be3f3
        ;   XREF to: 005be3fa (CONDITIONAL_JUMP)  ; LAB_005be3fa
    MOV ECX,0x10                        ; 005be3f5
    CMP ECX,EAX                         ; 005be3fa
        ;   Label: LAB_005be3fa
    JA 0x005be477                       ; 005be3fc
        ;   XREF to: 005be477 (CONDITIONAL_JUMP)  ; LAB_005be477
    MOV EBX,dword ptr [EDI + 0x10]      ; 005be402
    MOV EAX,dword ptr [EDI + 0xc]       ; 005be405
    CMP ECX,EBX                         ; 005be408
    JA 0x005be411                       ; 005be40a
        ;   XREF to: 005be411 (CONDITIONAL_JUMP)  ; LAB_005be411
    MOV EAX,dword ptr [EDI + 0x28]      ; 005be40c
    XOR EBX,EBX                         ; 005be40f
    LEA ESI,[EDI + 0x20]                ; 005be411
        ;   Label: LAB_005be411
    MOV EDX,dword ptr [EAX]             ; 005be414
        ;   Label: LAB_005be414
    CMP ECX,EDX                         ; 005be416
    JBE 0x005be42c                      ; 005be418
        ;   XREF to: 005be42c (CONDITIONAL_JUMP)  ; LAB_005be42c
    CMP EDX,EBX                         ; 005be41a
    JBE 0x005be420                      ; 005be41c
        ;   XREF to: 005be420 (CONDITIONAL_JUMP)  ; LAB_005be420
    MOV EBX,EDX                         ; 005be41e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005be420
        ;   Label: LAB_005be420
    CMP EAX,ESI                         ; 005be423
    JNZ 0x005be414                      ; 005be425
        ;   XREF to: 005be414 (CONDITIONAL_JUMP)  ; LAB_005be414
    MOV dword ptr [EDI + 0x14],EBX      ; 005be427
    JMP 0x005be477                      ; 005be42a
        ;   XREF to: 005be477 (UNCONDITIONAL_JUMP)  ; LAB_005be477
    MOV dword ptr [EDI + 0x10],EBX      ; 005be42c
        ;   Label: LAB_005be42c
    MOV EBX,dword ptr [EDI + 0x18]      ; 005be42f
    INC EBX                             ; 005be432
    SUB EDX,ECX                         ; 005be433
    MOV dword ptr [EDI + 0x18],EBX      ; 005be435
    CMP EDX,0x10                        ; 005be438
    JC 0x005be45b                       ; 005be43b
        ;   XREF to: 005be45b (CONDITIONAL_JUMP)  ; LAB_005be45b
    LEA EBX,[EAX + ECX*0x1]             ; 005be43d
    MOV dword ptr [EDI + 0xc],EBX       ; 005be440
    MOV dword ptr [EBX],EDX             ; 005be443
    MOV dword ptr [EAX],ECX             ; 005be445
    MOV ECX,dword ptr [EAX + 0x4]       ; 005be447
    MOV dword ptr [EBX + 0x4],ECX       ; 005be44a
    MOV EDX,dword ptr [EAX + 0x8]       ; 005be44d
    MOV dword ptr [EBX + 0x8],EDX       ; 005be450
    MOV dword ptr [ECX + 0x8],EBX       ; 005be453
    MOV dword ptr [EDX + 0x4],EBX       ; 005be456
    JMP 0x005be46d                      ; 005be459
        ;   XREF to: 005be46d (UNCONDITIONAL_JUMP)  ; LAB_005be46d
    DEC dword ptr [EDI + 0x1c]          ; 005be45b
        ;   Label: LAB_005be45b
    MOV EDX,dword ptr [EAX + 0x4]       ; 005be45e
    MOV dword ptr [EDI + 0xc],EDX       ; 005be461
    MOV EBX,dword ptr [EAX + 0x8]       ; 005be464
    MOV dword ptr [EDX + 0x8],EBX       ; 005be467
    MOV dword ptr [EBX + 0x4],EDX       ; 005be46a
    MOV DL,byte ptr [EAX]               ; 005be46d
        ;   Label: LAB_005be46d
    OR DL,0x1                           ; 005be46f
    LEA EBP,[EAX + 0x4]                 ; 005be472
    MOV byte ptr [EAX],DL               ; 005be475
    MOV EAX,EBP                         ; 005be477
        ;   Label: LAB_005be477
    POP EBP                             ; 005be479
    POP EDI                             ; 005be47a
    POP ESI                             ; 005be47b
    RET                                 ; 005be47c

