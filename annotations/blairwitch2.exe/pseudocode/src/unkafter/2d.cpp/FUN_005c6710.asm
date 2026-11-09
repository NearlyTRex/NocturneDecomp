; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005c6710(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c67b0 at 005c684a
;
; Referenced Globals:
;   void* PTR_SetEvent_005c8624 = 001c9160
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;   void* PTR_crt_unknown.c_FUN_005bce28_0061f2e4 = 005bce28
;   undefined4 DAT_0061f754
;   undefined4 DAT_02680170
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005bcdfc
;   crt_unknown.c_FUN_005bce28
;   SetEvent
;   unkafter_2d.cpp_FUN_005c5cf8
;   unkafter_morph.cpp_FUN_005c29d8
;   unkafter_morph.cpp_FUN_005c32a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6710
        ;   Label: unkafter_2d.cpp_FUN_005c6710
    PUSH ESI                            ; 005c6711
    PUSH EDI                            ; 005c6712
    PUSH ES                             ; 005c6713
    PUSH FS                             ; 005c6714
    PUSH GS                             ; 005c6716
    PUSH EBP                            ; 005c6718
    MOV EBP,ESP                         ; 005c6719
    SUB ESP,0xc                         ; 005c671b
    MOV ESI,dword ptr [EBP + 0x20]      ; 005c671e
    MOV EDX,dword ptr [0x02680170]      ; 005c6721 | DAT_02680170
    MOV EAX,dword ptr [ESI]             ; 005c6727
    MOV EDI,dword ptr [ESI + 0x4]       ; 005c6729
    MOV dword ptr [EBP + -0x4],EAX      ; 005c672c
    TEST EDX,EDX                        ; 005c672f
    JNZ 0x005c676a                      ; 005c6731
        ;   XREF to: 005c676a (CONDITIONAL_JUMP)  ; LAB_005c676a
    MOV EAX,[0x0061f754]                ; 005c6733 | DAT_0061f754
    ADD EAX,0x3                         ; 005c6738
    AND AL,0xfc                         ; 005c673b
    SUB ESP,EAX                         ; 005c673d
    MOV EBX,ESP                         ; 005c673f
    MOV ECX,dword ptr [0x0061f754]      ; 005c6741 | DAT_0061f754
    PUSH ECX                            ; 005c6747
    PUSH EDX                            ; 005c6748
    PUSH EBX                            ; 005c6749
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005c674a
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005c674f
    MOV EAX,[0x0061f754]                ; 005c6752 | DAT_0061f754
    PUSH EBX                            ; 005c6757
    MOV dword ptr [EBX + 0xf0],EAX      ; 005c6758
    CALL unkafter_morph.cpp_FUN_005c29d8 ; 005c675e
        ;   XREF to: 005c29d8 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c29d8()
    ADD ESP,0x4                         ; 005c6763
    TEST EAX,EAX                        ; 005c6766
    JZ 0x005c67a1                       ; 005c6768
        ;   XREF to: 005c67a1 (CONDITIONAL_JUMP)  ; LAB_005c67a1
    CALL dword ptr [0x0061f2a4]         ; 005c676a | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: LAB_005c676a
    ADD EAX,0xde                        ; 005c6770
    MOV dword ptr [ESI + 0x10],EAX      ; 005c6775
    MOV EAX,dword ptr [ESI + 0xc]       ; 005c6778
    PUSH EAX                            ; 005c677b
    CALL dword ptr CS:[0x5c8624]        ; 005c677c | PTR_SetEvent_005c8624
    LEA EAX,[EBP + -0xc]                ; 005c6783
    PUSH EAX                            ; 005c6786
    CALL unkafter_morph.cpp_FUN_005c32a8 ; 005c6787
        ;   XREF to: 005c32a8 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c32a8()
    ADD ESP,0x4                         ; 005c678c
    CALL dword ptr [0x0061f2e4]         ; 005c678f | PTR_crt_unknown.c_FUN_005bce28_0061f2e4
    PUSH EDI                            ; 005c6795
    CALL dword ptr [EBP + -0x4]         ; 005c6796
    ADD ESP,0x4                         ; 005c6799
    CALL unkafter_2d.cpp_FUN_005c5cf8   ; 005c679c
        ;   XREF to: 005c5cf8 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c5cf8()
    MOV ESP,EBP                         ; 005c67a1
        ;   Label: LAB_005c67a1
    POP EBP                             ; 005c67a3
    POP GS                              ; 005c67a4
    POP FS                              ; 005c67a6
    POP ES                              ; 005c67a8
    POP EDI                             ; 005c67a9
    POP ESI                             ; 005c67aa
    POP EBX                             ; 005c67ab
    RET                                 ; 005c67ac

