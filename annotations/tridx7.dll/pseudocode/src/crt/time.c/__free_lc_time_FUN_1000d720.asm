; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_time_c___free_lc_time_FUN_1000d720(__lc_time_data *lc_time)
;
; Parameters:
; __lc_time_data * Stack[0x4]:4   lc_time
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000d720
        ;   Label: crt_time.c___free_lc_time_FUN_1000d720
    MOV ESI,dword ptr [ESP + 0x8]       ; 1000d721
    TEST ESI,ESI                        ; 1000d725
    JZ 0x1000d951                       ; 1000d727
        ;   XREF to: 1000d951 (CONDITIONAL_JUMP)  ; LAB_1000d951
    MOV EAX,dword ptr [ESI + 0x4]       ; 1000d72d
    PUSH EAX                            ; 1000d730
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d731
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d736
    MOV EAX,dword ptr [ESI + 0x8]       ; 1000d739
    PUSH EAX                            ; 1000d73c
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d73d
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d742
    MOV EAX,dword ptr [ESI + 0xc]       ; 1000d745
    PUSH EAX                            ; 1000d748
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d749
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d74e
    MOV EAX,dword ptr [ESI + 0x10]      ; 1000d751
    PUSH EAX                            ; 1000d754
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d755
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d75a
    MOV EAX,dword ptr [ESI + 0x14]      ; 1000d75d
    PUSH EAX                            ; 1000d760
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d761
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d766
    MOV EAX,dword ptr [ESI + 0x18]      ; 1000d769
    PUSH EAX                            ; 1000d76c
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d76d
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d772
    MOV EAX,dword ptr [ESI]             ; 1000d775
    PUSH EAX                            ; 1000d777
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d778
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d77d
    MOV EAX,dword ptr [ESI + 0x20]      ; 1000d780
    PUSH EAX                            ; 1000d783
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d784
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d789
    MOV EAX,dword ptr [ESI + 0x24]      ; 1000d78c
    PUSH EAX                            ; 1000d78f
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d790
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d795
    MOV EAX,dword ptr [ESI + 0x28]      ; 1000d798
    PUSH EAX                            ; 1000d79b
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d79c
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d7a1
    MOV EAX,dword ptr [ESI + 0x2c]      ; 1000d7a4
    PUSH EAX                            ; 1000d7a7
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d7a8
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d7ad
    MOV EAX,dword ptr [ESI + 0x30]      ; 1000d7b0
    PUSH EAX                            ; 1000d7b3
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d7b4
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d7b9
    MOV EAX,dword ptr [ESI + 0x34]      ; 1000d7bc
    PUSH EAX                            ; 1000d7bf
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d7c0
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d7c5
    MOV EAX,dword ptr [ESI + 0x1c]      ; 1000d7c8
    PUSH EAX                            ; 1000d7cb
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d7cc
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d7d1
    MOV EAX,dword ptr [ESI + 0x38]      ; 1000d7d4
    PUSH EAX                            ; 1000d7d7
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d7d8
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d7dd
    MOV EAX,dword ptr [ESI + 0x3c]      ; 1000d7e0
    PUSH EAX                            ; 1000d7e3
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d7e4
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d7e9
    MOV EAX,dword ptr [ESI + 0x40]      ; 1000d7ec
    PUSH EAX                            ; 1000d7ef
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d7f0
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d7f5
    MOV EAX,dword ptr [ESI + 0x44]      ; 1000d7f8
    PUSH EAX                            ; 1000d7fb
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d7fc
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d801
    MOV EAX,dword ptr [ESI + 0x48]      ; 1000d804
    PUSH EAX                            ; 1000d807
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d808
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d80d
    MOV EAX,dword ptr [ESI + 0x4c]      ; 1000d810
    PUSH EAX                            ; 1000d813
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d814
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d819
    MOV EAX,dword ptr [ESI + 0x50]      ; 1000d81c
    PUSH EAX                            ; 1000d81f
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d820
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d825
    MOV EAX,dword ptr [ESI + 0x54]      ; 1000d828
    PUSH EAX                            ; 1000d82b
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d82c
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d831
    MOV EAX,dword ptr [ESI + 0x58]      ; 1000d834
    PUSH EAX                            ; 1000d837
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d838
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d83d
    MOV EAX,dword ptr [ESI + 0x5c]      ; 1000d840
    PUSH EAX                            ; 1000d843
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d844
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d849
    MOV EAX,dword ptr [ESI + 0x60]      ; 1000d84c
    PUSH EAX                            ; 1000d84f
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d850
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d855
    MOV EAX,dword ptr [ESI + 0x64]      ; 1000d858
    PUSH EAX                            ; 1000d85b
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d85c
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d861
    MOV EAX,dword ptr [ESI + 0x68]      ; 1000d864
    PUSH EAX                            ; 1000d867
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d868
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d86d
    MOV EAX,dword ptr [ESI + 0x6c]      ; 1000d870
    PUSH EAX                            ; 1000d873
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d874
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d879
    MOV EAX,dword ptr [ESI + 0x70]      ; 1000d87c
    PUSH EAX                            ; 1000d87f
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d880
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d885
    MOV EAX,dword ptr [ESI + 0x74]      ; 1000d888
    PUSH EAX                            ; 1000d88b
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d88c
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d891
    MOV EAX,dword ptr [ESI + 0x78]      ; 1000d894
    PUSH EAX                            ; 1000d897
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d898
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d89d
    MOV EAX,dword ptr [ESI + 0x7c]      ; 1000d8a0
    PUSH EAX                            ; 1000d8a3
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d8a4
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d8a9
    MOV EAX,dword ptr [ESI + 0x80]      ; 1000d8ac
    PUSH EAX                            ; 1000d8b2
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d8b3
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d8b8
    MOV EAX,dword ptr [ESI + 0x84]      ; 1000d8bb
    PUSH EAX                            ; 1000d8c1
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d8c2
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d8c7
    MOV EAX,dword ptr [ESI + 0x88]      ; 1000d8ca
    PUSH EAX                            ; 1000d8d0
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d8d1
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d8d6
    MOV EAX,dword ptr [ESI + 0x8c]      ; 1000d8d9
    PUSH EAX                            ; 1000d8df
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d8e0
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d8e5
    MOV EAX,dword ptr [ESI + 0x90]      ; 1000d8e8
    PUSH EAX                            ; 1000d8ee
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d8ef
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d8f4
    MOV EAX,dword ptr [ESI + 0x94]      ; 1000d8f7
    PUSH EAX                            ; 1000d8fd
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d8fe
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d903
    MOV EAX,dword ptr [ESI + 0x98]      ; 1000d906
    PUSH EAX                            ; 1000d90c
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d90d
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d912
    MOV EAX,dword ptr [ESI + 0x9c]      ; 1000d915
    PUSH EAX                            ; 1000d91b
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d91c
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d921
    MOV EAX,dword ptr [ESI + 0xa0]      ; 1000d924
    PUSH EAX                            ; 1000d92a
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d92b
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d930
    MOV EAX,dword ptr [ESI + 0xa4]      ; 1000d933
    PUSH EAX                            ; 1000d939
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d93a
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d93f
    MOV EAX,dword ptr [ESI + 0xa8]      ; 1000d942
    PUSH EAX                            ; 1000d948
    CALL crt_heap.c_free_FUN_10005b30   ; 1000d949
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000d94e
    POP ESI                             ; 1000d951
        ;   Label: LAB_1000d951
    RET                                 ; 1000d952

