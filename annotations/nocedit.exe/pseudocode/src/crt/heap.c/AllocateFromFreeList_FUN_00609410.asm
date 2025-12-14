; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void * crt_heap.c_AllocateFromFreeList_FUN_00609410(ulong size, HeapBlock * free_block, ushort ds_segment)
;
; Parameters:
; ushort           Stack[0x4]:2   ds_segment
;
; XREF[1]:
;   crt_heap.c_InternalHeapAlloc_FUN_00601bc0 at 00601c5b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00609410
        ;   Label: crt_heap.c_AllocateFromFreeList_FUN_00609410
    PUSH EDI                            ; 00609411
    PUSH EBP                            ; 00609412
    XOR EBP,EBP                         ; 00609413
    TEST EAX,EAX                        ; 00609415
    JZ 0x006094b7                       ; 00609417
        ;   XREF to: 006094b7 (CONDITIONAL_JUMP)  ; LAB_006094b7
    LEA ECX,[EAX + 0xb]                 ; 0060941d
    CMP ECX,EAX                         ; 00609420
    JC 0x006094b7                       ; 00609422
        ;   XREF to: 006094b7 (CONDITIONAL_JUMP)  ; LAB_006094b7
    MOV EDI,EBX                         ; 00609428
    AND CL,0xf8                         ; 0060942a
    MOV EAX,dword ptr [EBX + 0x14]      ; 0060942d
    CMP ECX,0x10                        ; 00609430
    JNC 0x0060943a                      ; 00609433
        ;   XREF to: 0060943a (CONDITIONAL_JUMP)  ; LAB_0060943a
    MOV ECX,0x10                        ; 00609435
    CMP ECX,EAX                         ; 0060943a
        ;   Label: LAB_0060943a
    JA 0x006094b7                       ; 0060943c
        ;   XREF to: 006094b7 (CONDITIONAL_JUMP)  ; LAB_006094b7
    MOV EBX,dword ptr [EDI + 0x10]      ; 00609442
    MOV EAX,dword ptr [EDI + 0xc]       ; 00609445
    CMP ECX,EBX                         ; 00609448
    JA 0x00609451                       ; 0060944a
        ;   XREF to: 00609451 (CONDITIONAL_JUMP)  ; LAB_00609451
    MOV EAX,dword ptr [EDI + 0x28]      ; 0060944c
    XOR EBX,EBX                         ; 0060944f
    LEA ESI,[EDI + 0x20]                ; 00609451
        ;   Label: LAB_00609451
    MOV EDX,dword ptr [EAX]             ; 00609454
        ;   Label: LAB_00609454
    CMP ECX,EDX                         ; 00609456
    JBE 0x0060946c                      ; 00609458
        ;   XREF to: 0060946c (CONDITIONAL_JUMP)  ; LAB_0060946c
    CMP EDX,EBX                         ; 0060945a
    JBE 0x00609460                      ; 0060945c
        ;   XREF to: 00609460 (CONDITIONAL_JUMP)  ; LAB_00609460
    MOV EBX,EDX                         ; 0060945e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00609460
        ;   Label: LAB_00609460
    CMP EAX,ESI                         ; 00609463
    JNZ 0x00609454                      ; 00609465
        ;   XREF to: 00609454 (CONDITIONAL_JUMP)  ; LAB_00609454
    MOV dword ptr [EDI + 0x14],EBX      ; 00609467
    JMP 0x006094b7                      ; 0060946a
        ;   XREF to: 006094b7 (UNCONDITIONAL_JUMP)  ; LAB_006094b7
    MOV dword ptr [EDI + 0x10],EBX      ; 0060946c
        ;   Label: LAB_0060946c
    MOV EBX,dword ptr [EDI + 0x18]      ; 0060946f
    INC EBX                             ; 00609472
    SUB EDX,ECX                         ; 00609473
    MOV dword ptr [EDI + 0x18],EBX      ; 00609475
    CMP EDX,0x10                        ; 00609478
    JC 0x0060949b                       ; 0060947b
        ;   XREF to: 0060949b (CONDITIONAL_JUMP)  ; LAB_0060949b
    LEA EBX,[EAX + ECX*0x1]             ; 0060947d
    MOV dword ptr [EDI + 0xc],EBX       ; 00609480
    MOV dword ptr [EBX],EDX             ; 00609483
    MOV dword ptr [EAX],ECX             ; 00609485
    MOV ECX,dword ptr [EAX + 0x4]       ; 00609487
    MOV dword ptr [EBX + 0x4],ECX       ; 0060948a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0060948d
    MOV dword ptr [EBX + 0x8],EDX       ; 00609490
    MOV dword ptr [ECX + 0x8],EBX       ; 00609493
    MOV dword ptr [EDX + 0x4],EBX       ; 00609496
    JMP 0x006094ad                      ; 00609499
        ;   XREF to: 006094ad (UNCONDITIONAL_JUMP)  ; LAB_006094ad
    DEC dword ptr [EDI + 0x1c]          ; 0060949b
        ;   Label: LAB_0060949b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0060949e
    MOV dword ptr [EDI + 0xc],EDX       ; 006094a1
    MOV EBX,dword ptr [EAX + 0x8]       ; 006094a4
    MOV dword ptr [EDX + 0x8],EBX       ; 006094a7
    MOV dword ptr [EBX + 0x4],EDX       ; 006094aa
    MOV DL,byte ptr [EAX]               ; 006094ad
        ;   Label: LAB_006094ad
    OR DL,0x1                           ; 006094af
    LEA EBP,[EAX + 0x4]                 ; 006094b2
    MOV byte ptr [EAX],DL               ; 006094b5
    MOV EAX,EBP                         ; 006094b7
        ;   Label: LAB_006094b7
    POP EBP                             ; 006094b9
    POP EDI                             ; 006094ba
    POP ESI                             ; 006094bb
    RET                                 ; 006094bc

