; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_thread_c__freeptd_FUN_10007820(_ptiddata ptd)
;
; Parameters:
; _ptiddata        Stack[0x4]:4   ptd
;
; XREF[1]:
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 100057dd
;
; Referenced Globals:
;   undefined4 DAT_10016da4
;   void* PTR_TlsSetValue_102421dc = 00242474
;   void* PTR_TlsGetValue_102421ec = 002424a8
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   TlsGetValue
;   TlsSetValue
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10016da4],-0x1     ; 10007820 | DAT_10016da4
        ;   Label: crt_thread.c__freeptd_FUN_10007820
    PUSH ESI                            ; 10007827
    JZ 0x100078bf                       ; 10007828
        ;   XREF to: 100078bf (CONDITIONAL_JUMP)  ; LAB_100078bf
    MOV ESI,dword ptr [ESP + 0x8]       ; 1000782e
    TEST ESI,ESI                        ; 10007832
    JNZ 0x10007848                      ; 10007834
        ;   XREF to: 10007848 (CONDITIONAL_JUMP)  ; LAB_10007848
    MOV EAX,[0x10016da4]                ; 10007836 | DAT_10016da4
    PUSH EAX                            ; 1000783b
    CALL dword ptr [0x102421ec]         ; 1000783c | PTR_TlsGetValue_102421ec
    MOV ESI,EAX                         ; 10007842
    TEST ESI,ESI                        ; 10007844
    JZ 0x100078b1                       ; 10007846
        ;   XREF to: 100078b1 (CONDITIONAL_JUMP)  ; LAB_100078b1
    MOV EAX,dword ptr [ESI + 0x24]      ; 10007848
        ;   Label: LAB_10007848
    TEST EAX,EAX                        ; 1000784b
    JZ 0x10007858                       ; 1000784d
        ;   XREF to: 10007858 (CONDITIONAL_JUMP)  ; LAB_10007858
    PUSH EAX                            ; 1000784f
    CALL crt_heap.c_free_FUN_10005b30   ; 10007850
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 10007855
    MOV EAX,dword ptr [ESI + 0x28]      ; 10007858
        ;   Label: LAB_10007858
    TEST EAX,EAX                        ; 1000785b
    JZ 0x10007868                       ; 1000785d
        ;   XREF to: 10007868 (CONDITIONAL_JUMP)  ; LAB_10007868
    PUSH EAX                            ; 1000785f
    CALL crt_heap.c_free_FUN_10005b30   ; 10007860
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 10007865
    MOV EAX,dword ptr [ESI + 0x30]      ; 10007868
        ;   Label: LAB_10007868
    TEST EAX,EAX                        ; 1000786b
    JZ 0x10007878                       ; 1000786d
        ;   XREF to: 10007878 (CONDITIONAL_JUMP)  ; LAB_10007878
    PUSH EAX                            ; 1000786f
    CALL crt_heap.c_free_FUN_10005b30   ; 10007870
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 10007875
    MOV EAX,dword ptr [ESI + 0x38]      ; 10007878
        ;   Label: LAB_10007878
    TEST EAX,EAX                        ; 1000787b
    JZ 0x10007888                       ; 1000787d
        ;   XREF to: 10007888 (CONDITIONAL_JUMP)  ; LAB_10007888
    PUSH EAX                            ; 1000787f
    CALL crt_heap.c_free_FUN_10005b30   ; 10007880
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 10007885
    MOV EAX,dword ptr [ESI + 0x40]      ; 10007888
        ;   Label: LAB_10007888
    TEST EAX,EAX                        ; 1000788b
    JZ 0x10007898                       ; 1000788d
        ;   XREF to: 10007898 (CONDITIONAL_JUMP)  ; LAB_10007898
    PUSH EAX                            ; 1000788f
    CALL crt_heap.c_free_FUN_10005b30   ; 10007890
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 10007895
    MOV EAX,dword ptr [ESI + 0x44]      ; 10007898
        ;   Label: LAB_10007898
    TEST EAX,EAX                        ; 1000789b
    JZ 0x100078a8                       ; 1000789d
        ;   XREF to: 100078a8 (CONDITIONAL_JUMP)  ; LAB_100078a8
    PUSH EAX                            ; 1000789f
    CALL crt_heap.c_free_FUN_10005b30   ; 100078a0
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 100078a5
    PUSH ESI                            ; 100078a8
        ;   Label: LAB_100078a8
    CALL crt_heap.c_free_FUN_10005b30   ; 100078a9
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 100078ae
    PUSH 0x0                            ; 100078b1
        ;   Label: LAB_100078b1
    MOV EAX,[0x10016da4]                ; 100078b3 | DAT_10016da4
    PUSH EAX                            ; 100078b8
    CALL dword ptr [0x102421dc]         ; 100078b9 | PTR_TlsSetValue_102421dc
    POP ESI                             ; 100078bf
        ;   Label: LAB_100078bf
    RET                                 ; 100078c0

