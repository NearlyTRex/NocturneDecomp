; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_unknown_c_InternalHeapAlloc_FUN_005635c0(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[3]:
;   FUN_0056ddf0 at 0056de1d
;   crt_memory.c_malloc_FUN_005635b0 at 005635b5
;   crt_unknown.c_realloc__FUN_00564a88 at 00564a99
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;   undefined4 DAT_005c1684
;   undefined4 DAT_005c1688
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0 = 005671e4
;   undefined4 DAT_02de5460
;
; Called Functions:
;   crt_heap.c_AllocateFromFreeList_FUN_00568b00
;   crt_heap.c_SystemAllocWrapper_FUN_00568e08
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   FUN_00568e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005635c0
        ;   Label: crt_unknown.c_InternalHeapAlloc_FUN_005635c0
    PUSH ESI                            ; 005635c1
    PUSH EDI                            ; 005635c2
    PUSH ES                             ; 005635c3
    PUSH FS                             ; 005635c4
    PUSH GS                             ; 005635c6
    PUSH EBP                            ; 005635c8
    SUB ESP,0xc                         ; 005635c9
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005635cc
    TEST EBP,EBP                        ; 005635d0
    JZ 0x005635d9                       ; 005635d2
        ;   XREF to: 005635d9 (CONDITIONAL_JUMP)  ; LAB_005635d9
    CMP EBP,-0x2c                       ; 005635d4
    JBE 0x005635e0                      ; 005635d7
        ;   XREF to: 005635e0 (CONDITIONAL_JUMP)  ; LAB_005635e0
    XOR EAX,EAX                         ; 005635d9
        ;   Label: LAB_005635d9
    JMP 0x005636c1                      ; 005635db
        ;   XREF to: 005636c1 (UNCONDITIONAL_JUMP)  ; LAB_005636c1
    LEA EAX,[EBP + 0xb]                 ; 005635e0
        ;   Label: LAB_005635e0
    AND AL,0xf8                         ; 005635e3
    MOV dword ptr [ESP + 0x4],EAX       ; 005635e5
    CMP EAX,0x10                        ; 005635e9
    JNC 0x005635f6                      ; 005635ec
        ;   XREF to: 005635f6 (CONDITIONAL_JUMP)  ; LAB_005635f6
    MOV dword ptr [ESP + 0x4],0x10      ; 005635ee
    CALL dword ptr [0x005c1ad8]         ; 005635f6 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8
        ;   Label: LAB_005635f6
    XOR ECX,ECX                         ; 005635fc
    XOR AH,AH                           ; 005635fe
    MOV dword ptr [ESP],ECX             ; 00563600
    MOV byte ptr [ESP + 0x8],AH         ; 00563603
    MOV EAX,dword ptr [ESP + 0x4]       ; 00563607
        ;   Label: LAB_00563607
    CMP EAX,dword ptr [0x005c1688]      ; 0056360b | DAT_005c1688
    JBE 0x0056362b                      ; 00563611
        ;   XREF to: 0056362b (CONDITIONAL_JUMP)  ; LAB_0056362b
    MOV ESI,dword ptr [0x005c1684]      ; 00563613 | DAT_005c1684
    TEST ESI,ESI                        ; 00563619
    JNZ 0x00563639                      ; 0056361b
        ;   XREF to: 00563639 (CONDITIONAL_JUMP)  ; LAB_00563639
    MOV dword ptr [0x005c1688],ESI      ; 0056361d | DAT_005c1688
    MOV ESI,dword ptr [0x005c1680]      ; 00563623 | DAT_005c1680
    JMP 0x00563639                      ; 00563629
        ;   XREF to: 00563639 (UNCONDITIONAL_JUMP)  ; LAB_00563639
    XOR EDI,EDI                         ; 0056362b
        ;   Label: LAB_0056362b
    MOV ESI,dword ptr [0x005c1680]      ; 0056362d | DAT_005c1680
    MOV dword ptr [0x005c1688],EDI      ; 00563633 | DAT_005c1688
    TEST ESI,ESI                        ; 00563639
        ;   Label: LAB_00563639
    JZ 0x0056367a                       ; 0056363b
        ;   XREF to: 0056367a (CONDITIONAL_JUMP)  ; LAB_0056367a
    MOV EDI,dword ptr [ESI + 0x14]      ; 0056363d
    MOV dword ptr [0x005c1684],ESI      ; 00563640 | DAT_005c1684
    CMP EDI,EBP                         ; 00563646
    JC 0x00563667                       ; 00563648
        ;   XREF to: 00563667 (CONDITIONAL_JUMP)  ; LAB_00563667
    MOV EAX,0x5c1680                    ; 0056364a | DAT_005c1680
    MOV DX,DS                           ; 0056364f
    AND EDX,0xffff                      ; 00563651
    MOV EBX,ESI                         ; 00563657
    MOV EAX,EBP                         ; 00563659
    CALL crt_heap.c_AllocateFromFreeList_FUN_00568b00 ; 0056365b
        ;   XREF to: 00568b00 (UNCONDITIONAL_CALL)  ; undefined crt_heap.c_AllocateFromFreeList_FUN_00568b00()
    MOV dword ptr [ESP],EAX             ; 00563660
    TEST EAX,EAX                        ; 00563663
    JNZ 0x005636b0                      ; 00563665
        ;   XREF to: 005636b0 (CONDITIONAL_JUMP)  ; LAB_005636b0
    CMP EDI,dword ptr [0x005c1688]      ; 00563667 | DAT_005c1688
        ;   Label: LAB_00563667
    JBE 0x00563675                      ; 0056366d
        ;   XREF to: 00563675 (CONDITIONAL_JUMP)  ; LAB_00563675
    MOV dword ptr [0x005c1688],EDI      ; 0056366f | DAT_005c1688
    MOV ESI,dword ptr [ESI + 0x8]       ; 00563675
        ;   Label: LAB_00563675
    JMP 0x00563639                      ; 00563678
        ;   XREF to: 00563639 (UNCONDITIONAL_JUMP)  ; LAB_00563639
    CMP byte ptr [ESP + 0x8],0x0        ; 0056367a
        ;   Label: LAB_0056367a
    JNZ 0x0056368e                      ; 0056367f
        ;   XREF to: 0056368e (CONDITIONAL_JUMP)  ; LAB_0056368e
    PUSH EBP                            ; 00563681
    CALL crt_heap.c_SystemAllocWrapper_FUN_00568e08 ; 00563682
        ;   XREF to: 00568e08 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_SystemAllocWrapper_FUN_00568e08(ulong size)
    ADD ESP,0x4                         ; 00563687
    TEST EAX,EAX                        ; 0056368a
    JNZ 0x005636a6                      ; 0056368c
        ;   XREF to: 005636a6 (CONDITIONAL_JUMP)  ; LAB_005636a6
    PUSH EBP                            ; 0056368e
        ;   Label: LAB_0056368e
    CALL FUN_00568e70                   ; 0056368f
        ;   XREF to: 00568e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e70()
    ADD ESP,0x4                         ; 00563694
    TEST EAX,EAX                        ; 00563697
    JZ 0x005636b0                       ; 00563699
        ;   XREF to: 005636b0 (CONDITIONAL_JUMP)  ; LAB_005636b0
    XOR BL,BL                           ; 0056369b
    MOV byte ptr [ESP + 0x8],BL         ; 0056369d
    JMP 0x00563607                      ; 005636a1
        ;   XREF to: 00563607 (UNCONDITIONAL_JUMP)  ; LAB_00563607
    MOV byte ptr [ESP + 0x8],0x1        ; 005636a6
        ;   Label: LAB_005636a6
    JMP 0x00563607                      ; 005636ab
        ;   XREF to: 00563607 (UNCONDITIONAL_JUMP)  ; LAB_00563607
    XOR BH,BH                           ; 005636b0
        ;   Label: LAB_005636b0
    MOV byte ptr [0x02de5460],BH        ; 005636b2 | DAT_02de5460
    CALL dword ptr [0x005c1ae0]         ; 005636b8 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0
    MOV EAX,dword ptr [ESP]             ; 005636be
    ADD ESP,0xc                         ; 005636c1
        ;   Label: LAB_005636c1
    POP EBP                             ; 005636c4
    POP GS                              ; 005636c5
    POP FS                              ; 005636c7
    POP ES                              ; 005636c9
    POP EDI                             ; 005636ca
    POP ESI                             ; 005636cb
    POP EBX                             ; 005636cc
    RET                                 ; 005636cd

