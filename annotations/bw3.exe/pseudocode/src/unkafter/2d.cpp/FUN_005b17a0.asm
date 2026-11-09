; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005b17a0(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b1840 at 005b18da
;
; Referenced Globals:
;   void* PTR_SetEvent_005b3638 = 001b41a2
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;   void* PTR_crt_unknown.c_FUN_005a7f68_006079e0 = 005a7f68
;   undefined4 DAT_00607e78
;   undefined4 DAT_02d252b0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a7f3c
;   crt_unknown.c_FUN_005a7f68
;   SetEvent
;   unkafter_2d.cpp_FUN_005b0d88
;   unkafter_asgaya.cpp_FUN_005adb48
;   unkafter_asgaya.cpp_FUN_005ae418
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b17a0
        ;   Label: unkafter_2d.cpp_FUN_005b17a0
    PUSH ESI                            ; 005b17a1
    PUSH EDI                            ; 005b17a2
    PUSH ES                             ; 005b17a3
    PUSH FS                             ; 005b17a4
    PUSH GS                             ; 005b17a6
    PUSH EBP                            ; 005b17a8
    MOV EBP,ESP                         ; 005b17a9
    SUB ESP,0xc                         ; 005b17ab
    MOV ESI,dword ptr [EBP + 0x20]      ; 005b17ae
    MOV EDX,dword ptr [0x02d252b0]      ; 005b17b1 | DAT_02d252b0
    MOV EAX,dword ptr [ESI]             ; 005b17b7
    MOV EDI,dword ptr [ESI + 0x4]       ; 005b17b9
    MOV dword ptr [EBP + -0x4],EAX      ; 005b17bc
    TEST EDX,EDX                        ; 005b17bf
    JNZ 0x005b17fa                      ; 005b17c1
        ;   XREF to: 005b17fa (CONDITIONAL_JUMP)  ; LAB_005b17fa
    MOV EAX,[0x00607e78]                ; 005b17c3 | DAT_00607e78
    ADD EAX,0x3                         ; 005b17c8
    AND AL,0xfc                         ; 005b17cb
    SUB ESP,EAX                         ; 005b17cd
    MOV EBX,ESP                         ; 005b17cf
    MOV ECX,dword ptr [0x00607e78]      ; 005b17d1 | DAT_00607e78
    PUSH ECX                            ; 005b17d7
    PUSH EDX                            ; 005b17d8
    PUSH EBX                            ; 005b17d9
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005b17da
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b17df
    MOV EAX,[0x00607e78]                ; 005b17e2 | DAT_00607e78
    PUSH EBX                            ; 005b17e7
    MOV dword ptr [EBX + 0xf0],EAX      ; 005b17e8
    CALL unkafter_asgaya.cpp_FUN_005adb48 ; 005b17ee
        ;   XREF to: 005adb48 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005adb48()
    ADD ESP,0x4                         ; 005b17f3
    TEST EAX,EAX                        ; 005b17f6
    JZ 0x005b1831                       ; 005b17f8
        ;   XREF to: 005b1831 (CONDITIONAL_JUMP)  ; LAB_005b1831
    CALL dword ptr [0x006079a0]         ; 005b17fa | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
        ;   Label: LAB_005b17fa
    ADD EAX,0xde                        ; 005b1800
    MOV dword ptr [ESI + 0x10],EAX      ; 005b1805
    MOV EAX,dword ptr [ESI + 0xc]       ; 005b1808
    PUSH EAX                            ; 005b180b
    CALL dword ptr CS:[0x5b3638]        ; 005b180c | PTR_SetEvent_005b3638
    LEA EAX,[EBP + -0xc]                ; 005b1813
    PUSH EAX                            ; 005b1816
    CALL unkafter_asgaya.cpp_FUN_005ae418 ; 005b1817
        ;   XREF to: 005ae418 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae418()
    ADD ESP,0x4                         ; 005b181c
    CALL dword ptr [0x006079e0]         ; 005b181f | PTR_crt_unknown.c_FUN_005a7f68_006079e0
    PUSH EDI                            ; 005b1825
    CALL dword ptr [EBP + -0x4]         ; 005b1826
    ADD ESP,0x4                         ; 005b1829
    CALL unkafter_2d.cpp_FUN_005b0d88   ; 005b182c
        ;   XREF to: 005b0d88 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b0d88()
    MOV ESP,EBP                         ; 005b1831
        ;   Label: LAB_005b1831
    POP EBP                             ; 005b1833
    POP GS                              ; 005b1834
    POP FS                              ; 005b1836
    POP ES                              ; 005b1838
    POP EDI                             ; 005b1839
    POP ESI                             ; 005b183a
    POP EBX                             ; 005b183b
    RET                                 ; 005b183c

