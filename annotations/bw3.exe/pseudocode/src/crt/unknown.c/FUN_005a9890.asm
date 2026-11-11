; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * crt_unknown_c_FUN_005a9890(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a4390 at 005a43ae
;
; Referenced Globals:
;   undefined4 DAT_00607678
;   undefined1 DAT_00607684
;   undefined4 DAT_00607692
;   undefined1 DAT_0060769e
;   undefined4 DAT_00607880
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079b4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079b8 = 005a7f44
;   undefined4 DAT_02d252a0
;   undefined4 DAT_02d252a4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_memory.c_malloc_FUN_005a3650
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9890
        ;   Label: crt_unknown.c_FUN_005a9890
    PUSH ESI                            ; 005a9891
    PUSH EDI                            ; 005a9892
    CALL dword ptr [0x006079b4]         ; 005a9893 | PTR_crt_unknown.c_FUN_005a7f44_006079b4
    MOV ESI,dword ptr [0x02d252a4]      ; 005a9899 | DAT_02d252a4
    TEST ESI,ESI                        ; 005a989f
    JZ 0x005a98bc                       ; 005a98a1
        ;   XREF to: 005a98bc (CONDITIONAL_JUMP)  ; LAB_005a98bc
    MOV EBX,dword ptr [ESI + 0x4]       ; 005a98a3
    MOV EDI,dword ptr [EBX + 0xc]       ; 005a98a6
    MOV EAX,dword ptr [ESI]             ; 005a98a9
    AND EDI,0x4003                      ; 005a98ab
    MOV [0x02d252a4],EAX                ; 005a98b1 | DAT_02d252a4
    OR DI,0x3                           ; 005a98b6
    JMP 0x005a9909                      ; 005a98ba
        ;   XREF to: 005a9909 (UNCONDITIONAL_JUMP)  ; LAB_005a9909
    MOV EBX,0x607678                    ; 005a98bc | DAT_00607678
        ;   Label: LAB_005a98bc
    CMP EBX,0x607880                    ; 005a98c1 | DAT_00607880
    JNC 0x005a98f1                      ; 005a98c7
        ;   XREF to: 005a98f1 (CONDITIONAL_JUMP)  ; LAB_005a98f1
    TEST byte ptr [EBX + 0xc],0x3       ; 005a98c9 | DAT_00607684 | DAT_0060769e
        ;   Label: LAB_005a98c9
    JNZ 0x005a98e6                      ; 005a98cd
        ;   XREF to: 005a98e6 (CONDITIONAL_JUMP)  ; LAB_005a98e6
    PUSH 0x1d                           ; 005a98cf
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005a98d1
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005a98d6
    MOV ESI,EAX                         ; 005a98d9
    TEST EAX,EAX                        ; 005a98db
    JZ 0x005a9938                       ; 005a98dd
        ;   XREF to: 005a9938 (CONDITIONAL_JUMP)  ; LAB_005a9938
    MOV EDI,0x3                         ; 005a98df
    JMP 0x005a9909                      ; 005a98e4
        ;   XREF to: 005a9909 (UNCONDITIONAL_JUMP)  ; LAB_005a9909
    ADD EBX,0x1a                        ; 005a98e6
        ;   Label: LAB_005a98e6
    CMP EBX,0x607880                    ; 005a98e9 | DAT_00607880
    JC 0x005a98c9                       ; 005a98ef
        ;   XREF to: 005a98c9 (CONDITIONAL_JUMP)  ; LAB_005a98c9
    PUSH 0x37                           ; 005a98f1
        ;   Label: LAB_005a98f1
    MOV EDI,0x4003                      ; 005a98f3
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005a98f8
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005a98fd
    MOV ESI,EAX                         ; 005a9900
    TEST EAX,EAX                        ; 005a9902
    JZ 0x005a9938                       ; 005a9904
        ;   XREF to: 005a9938 (CONDITIONAL_JUMP)  ; LAB_005a9938
    LEA EBX,[EAX + 0x1d]                ; 005a9906
    PUSH 0x1a                           ; 005a9909
        ;   Label: LAB_005a9909
    PUSH 0x0                            ; 005a990b
    PUSH EBX                            ; 005a990d | DAT_00607692
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005a990e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0xc],EDI       ; 005a9913
    MOV EAX,[0x02d252a0]                ; 005a9916 | DAT_02d252a0
    MOV dword ptr [ESI + 0x4],EBX       ; 005a991b
    ADD ESP,0xc                         ; 005a991e
    MOV dword ptr [EBX + 0x8],ESI       ; 005a9921
    MOV dword ptr [0x02d252a0],ESI      ; 005a9924 | DAT_02d252a0
    MOV dword ptr [ESI],EAX             ; 005a992a
    CALL dword ptr [0x006079b8]         ; 005a992c | PTR_crt_unknown.c_FUN_005a7f44_006079b8
    MOV EAX,EBX                         ; 005a9932
    POP EDI                             ; 005a9934
    POP ESI                             ; 005a9935
    POP EBX                             ; 005a9936
    RET                                 ; 005a9937
    PUSH 0x5                            ; 005a9938
        ;   Label: LAB_005a9938
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a993a
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a993f
    CALL dword ptr [0x006079b8]         ; 005a9942 | PTR_crt_unknown.c_FUN_005a7f44_006079b8
    XOR EAX,EAX                         ; 005a9948
    POP EDI                             ; 005a994a
    POP ESI                             ; 005a994b
    POP EBX                             ; 005a994c
    RET                                 ; 005a994d

