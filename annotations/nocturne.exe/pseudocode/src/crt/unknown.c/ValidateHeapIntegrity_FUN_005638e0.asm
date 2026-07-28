; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_ValidateHeapIntegrity_FUN_005638e0(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[4]:
;   crt_heap.c_AllocateNewHeapBlock_FUN_00568d58 at 00568df6
;   crt_heap.c_ResizeBlockInPlace_FUN_0056afe8 at 0056b190
;   crt_unknown.c_FUN_005638d0 at 005638d5
;   crt_unknown.c_realloc__FUN_00564a88 at 00564aab
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;   undefined4 DAT_005c1684
;   undefined4 DAT_005c1688
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0 = 005671e4
;   undefined4 DAT_02de4e10
;   undefined4 DAT_02de5460
;
; Called Functions:
;   crt_heap.c_CoalesceAndAddFreeBlock_FUN_00568bb0
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005638e0
        ;   Label: crt_unknown.c_ValidateHeapIntegrity_FUN_005638e0
    PUSH ESI                            ; 005638e1
    PUSH EDI                            ; 005638e2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005638e3
    TEST EDI,EDI                        ; 005638e7
    JZ 0x005639e2                       ; 005638e9
        ;   XREF to: 005639e2 (CONDITIONAL_JUMP)  ; LAB_005639e2
    CALL dword ptr [0x005c1ad8]         ; 005638ef | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8
    MOV ESI,dword ptr [0x02de4e10]      ; 005638f5 | DAT_02de4e10
    TEST ESI,ESI                        ; 005638fb
    JZ 0x0056393f                       ; 005638fd
        ;   XREF to: 0056393f (CONDITIONAL_JUMP)  ; LAB_0056393f
    CMP ESI,EDI                         ; 005638ff
    JA 0x0056390f                       ; 00563901
        ;   XREF to: 0056390f (CONDITIONAL_JUMP)  ; LAB_0056390f
    MOV EAX,dword ptr [ESI]             ; 00563903
    ADD EAX,ESI                         ; 00563905
    CMP EAX,EDI                         ; 00563907
    JA 0x0056399c                       ; 00563909
        ;   XREF to: 0056399c (CONDITIONAL_JUMP)  ; LAB_0056399c
    MOV EDX,ESI                         ; 0056390f
        ;   Label: LAB_0056390f
    MOV ESI,dword ptr [ESI + 0x4]       ; 00563911
    TEST ESI,ESI                        ; 00563914
    JZ 0x00563928                       ; 00563916
        ;   XREF to: 00563928 (CONDITIONAL_JUMP)  ; LAB_00563928
    CMP ESI,EDI                         ; 00563918
    JA 0x00563928                       ; 0056391a
        ;   XREF to: 00563928 (CONDITIONAL_JUMP)  ; LAB_00563928
    MOV EAX,dword ptr [ESI]             ; 0056391c
    ADD EAX,ESI                         ; 0056391e
    CMP EAX,EDI                         ; 00563920
    JA 0x0056399c                       ; 00563922
        ;   XREF to: 0056399c (CONDITIONAL_JUMP)  ; LAB_0056399c
    MOV ESI,dword ptr [EDX + 0x8]       ; 00563928
        ;   Label: LAB_00563928
    TEST ESI,ESI                        ; 0056392b
    JZ 0x0056393f                       ; 0056392d
        ;   XREF to: 0056393f (CONDITIONAL_JUMP)  ; LAB_0056393f
    CMP ESI,EDI                         ; 0056392f
    JA 0x0056393f                       ; 00563931
        ;   XREF to: 0056393f (CONDITIONAL_JUMP)  ; LAB_0056393f
    MOV EAX,dword ptr [ESI]             ; 00563933
    ADD EAX,ESI                         ; 00563935
    CMP EAX,EDI                         ; 00563937
    JA 0x0056399c                       ; 00563939
        ;   XREF to: 0056399c (CONDITIONAL_JUMP)  ; LAB_0056399c
    MOV ESI,dword ptr [0x005c1684]      ; 0056393f | DAT_005c1684
        ;   Label: LAB_0056393f
    TEST ESI,ESI                        ; 00563945
    JZ 0x0056397d                       ; 00563947
        ;   XREF to: 0056397d (CONDITIONAL_JUMP)  ; LAB_0056397d
    CMP ESI,EDI                         ; 00563949
    JA 0x00563955                       ; 0056394b
        ;   XREF to: 00563955 (CONDITIONAL_JUMP)  ; LAB_00563955
    MOV EAX,dword ptr [ESI]             ; 0056394d
    ADD EAX,ESI                         ; 0056394f
    CMP EAX,EDI                         ; 00563951
    JA 0x0056399c                       ; 00563953
        ;   XREF to: 0056399c (CONDITIONAL_JUMP)  ; LAB_0056399c
    MOV EDX,ESI                         ; 00563955
        ;   Label: LAB_00563955
    MOV ESI,dword ptr [ESI + 0x4]       ; 00563957
    TEST ESI,ESI                        ; 0056395a
    JZ 0x0056396a                       ; 0056395c
        ;   XREF to: 0056396a (CONDITIONAL_JUMP)  ; LAB_0056396a
    CMP ESI,EDI                         ; 0056395e
    JA 0x0056396a                       ; 00563960
        ;   XREF to: 0056396a (CONDITIONAL_JUMP)  ; LAB_0056396a
    MOV EAX,dword ptr [ESI]             ; 00563962
    ADD EAX,ESI                         ; 00563964
    CMP EAX,EDI                         ; 00563966
    JA 0x0056399c                       ; 00563968
        ;   XREF to: 0056399c (CONDITIONAL_JUMP)  ; LAB_0056399c
    MOV ESI,dword ptr [EDX + 0x8]       ; 0056396a
        ;   Label: LAB_0056396a
    TEST ESI,ESI                        ; 0056396d
    JZ 0x0056397d                       ; 0056396f
        ;   XREF to: 0056397d (CONDITIONAL_JUMP)  ; LAB_0056397d
    CMP ESI,EDI                         ; 00563971
    JA 0x0056397d                       ; 00563973
        ;   XREF to: 0056397d (CONDITIONAL_JUMP)  ; LAB_0056397d
    MOV EAX,dword ptr [ESI]             ; 00563975
    ADD EAX,ESI                         ; 00563977
    CMP EAX,EDI                         ; 00563979
    JA 0x0056399c                       ; 0056397b
        ;   XREF to: 0056399c (CONDITIONAL_JUMP)  ; LAB_0056399c
    MOV ESI,dword ptr [0x005c1680]      ; 0056397d | DAT_005c1680
        ;   Label: LAB_0056397d
    TEST ESI,ESI                        ; 00563983
    JZ 0x005639dc                       ; 00563985
        ;   XREF to: 005639dc (CONDITIONAL_JUMP)  ; LAB_005639dc
    CMP ESI,EDI                         ; 00563987
        ;   Label: LAB_00563987
    JA 0x00563993                       ; 00563989
        ;   XREF to: 00563993 (CONDITIONAL_JUMP)  ; LAB_00563993
    MOV EAX,dword ptr [ESI]             ; 0056398b
    ADD EAX,ESI                         ; 0056398d
    CMP EAX,EDI                         ; 0056398f
    JA 0x0056399c                       ; 00563991
        ;   XREF to: 0056399c (CONDITIONAL_JUMP)  ; LAB_0056399c
    MOV ESI,dword ptr [ESI + 0x8]       ; 00563993
        ;   Label: LAB_00563993
    TEST ESI,ESI                        ; 00563996
    JNZ 0x00563987                      ; 00563998
        ;   XREF to: 00563987 (CONDITIONAL_JUMP)  ; LAB_00563987
    JMP 0x005639dc                      ; 0056399a
        ;   XREF to: 005639dc (UNCONDITIONAL_JUMP)  ; LAB_005639dc
    MOV EAX,0x5c1680                    ; 0056399c | DAT_005c1680
        ;   Label: LAB_0056399c
    MOV DX,DS                           ; 005639a1
    AND EDX,0xffff                      ; 005639a3
    MOV EBX,ESI                         ; 005639a9
    MOV EAX,EDI                         ; 005639ab
    CALL crt_heap.c_CoalesceAndAddFreeBlock_FUN_00568bb0 ; 005639ad
        ;   XREF to: 00568bb0 (UNCONDITIONAL_CALL)  ; void crt_heap.c_CoalesceAndAddFreeBlock_FUN_00568bb0(void * ptr, HeapBlock * heap_block, ushort segment)
    MOV EDX,dword ptr [0x005c1684]      ; 005639b2 | DAT_005c1684
    MOV dword ptr [0x02de4e10],ESI      ; 005639b8 | DAT_02de4e10
    CMP ESI,EDX                         ; 005639be
    JNC 0x005639d4                      ; 005639c0
        ;   XREF to: 005639d4 (CONDITIONAL_JUMP)  ; LAB_005639d4
    MOV EBX,dword ptr [0x005c1688]      ; 005639c2 | DAT_005c1688
    MOV EAX,dword ptr [ESI + 0x14]      ; 005639c8
    CMP EAX,EBX                         ; 005639cb
    JBE 0x005639d4                      ; 005639cd
        ;   XREF to: 005639d4 (CONDITIONAL_JUMP)  ; LAB_005639d4
    MOV [0x005c1688],EAX                ; 005639cf | DAT_005c1688
    XOR AH,AH                           ; 005639d4
        ;   Label: LAB_005639d4
    MOV byte ptr [0x02de5460],AH        ; 005639d6 | DAT_02de5460
    CALL dword ptr [0x005c1ae0]         ; 005639dc | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0
        ;   Label: LAB_005639dc
    POP EDI                             ; 005639e2
        ;   Label: LAB_005639e2
    POP ESI                             ; 005639e3
    POP EBX                             ; 005639e4
    RET                                 ; 005639e5

