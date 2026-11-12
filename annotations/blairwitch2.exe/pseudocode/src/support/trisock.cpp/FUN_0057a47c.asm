; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0057a47c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0265363c
;   undefined4 DAT_02653640
;   undefined4 DAT_02653644
;   undefined4 DAT_02653648
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   support_trisock.cpp_formatIPAddress_FUN_00578cb0
;   support_trisock.cpp_FUN_00579720
;   support_trisock.cpp_FUN_005797b0
;   support_trisock.cpp_FUN_0057a980
;   wincore_winrun.cpp_FUN_0058ffc0
;   wincore_winrun.cpp_releaseMutex_FUN_0058fd00
;   wincore_winrun.cpp_sleep_FUN_0058fd90
;   wincore_winrun.cpp_waitForMutex_FUN_0058fca0
;   wincore_winrun.cpp_waitForMutexTimeout_FUN_0058fcc0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0057a47c
        ;   Label: support_trisock.cpp_FUN_0057a47c
    PUSH EBX                            ; 0057a480
    PUSH ESI                            ; 0057a481
    PUSH EDI                            ; 0057a482
    PUSH EBP                            ; 0057a483
    MOV EBP,ESP                         ; 0057a484
    SUB ESP,0x4e0                       ; 0057a486
    AND ESP,0xfffffff8                  ; 0057a48c
    CMP dword ptr [0x02653648],0x1      ; 0057a48f | DAT_02653648
    JZ 0x0057a4b5                       ; 0057a496
        ;   XREF to: 0057a4b5 (CONDITIONAL_JUMP)  ; LAB_0057a4b5
    CMP dword ptr [0x02653648],0x1      ; 0057a498 | DAT_02653648
        ;   Label: LAB_0057a498
    JG 0x0057a4c1                       ; 0057a49f
        ;   XREF to: 0057a4c1 (CONDITIONAL_JUMP)  ; LAB_0057a4c1
    XOR ECX,ECX                         ; 0057a4a1
    MOV dword ptr [0x02653648],ECX      ; 0057a4a3 | DAT_02653648
    MOV EAX,0x1                         ; 0057a4a9
    MOV ESP,EBP                         ; 0057a4ae
    POP EBP                             ; 0057a4b0
    POP EDI                             ; 0057a4b1
    POP ESI                             ; 0057a4b2
    POP EBX                             ; 0057a4b3
    RET                                 ; 0057a4b4
    MOV dword ptr [0x02653648],0x2      ; 0057a4b5 | DAT_02653648
        ;   Label: LAB_0057a4b5
    JMP 0x0057a498                      ; 0057a4bf
        ;   XREF to: 0057a498 (UNCONDITIONAL_JUMP)  ; LAB_0057a498
    PUSH 0x3fa99999                     ; 0057a4c1
        ;   Label: LAB_0057a4c1
    PUSH 0x9999999a                     ; 0057a4c6
    MOV ESI,dword ptr [0x0265363c]      ; 0057a4cb | DAT_0265363c
    PUSH ESI                            ; 0057a4d1
    CALL wincore_winrun.cpp_waitForMutexTimeout_FUN_0058fcc0 ; 0057a4d2
        ;   XREF to: 0058fcc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutexTimeout_FUN_0058fcc0(HANDLE mutex_handle, double timeout_seconds)
    ADD ESP,0xc                         ; 0057a4d7
    TEST EAX,EAX                        ; 0057a4da
    JZ 0x0057a5cf                       ; 0057a4dc
        ;   XREF to: 0057a5cf (CONDITIONAL_JUMP)  ; LAB_0057a5cf
    XOR EDI,EDI                         ; 0057a4e2
    MOV EAX,[0x02653640]                ; 0057a4e4 | DAT_02653640
    MOV dword ptr [0x02653644],EDI      ; 0057a4e9 | DAT_02653644
    TEST EAX,EAX                        ; 0057a4ef
    JZ 0x0057a5de                       ; 0057a4f1
        ;   XREF to: 0057a5de (CONDITIONAL_JUMP)  ; LAB_0057a5de
    LEA EDI,[ESP + 0x2b8]               ; 0057a4f7
    MOV ESI,EAX                         ; 0057a4fe
    PUSH EDI                            ; 0057a500
    MOV AL,byte ptr [ESI]               ; 0057a501
        ;   Label: LAB_0057a501
    MOV byte ptr [EDI],AL               ; 0057a503
    CMP AL,0x0                          ; 0057a505
    JZ 0x0057a519                       ; 0057a507
        ;   XREF to: 0057a519 (CONDITIONAL_JUMP)  ; LAB_0057a519
    MOV AL,byte ptr [ESI + 0x1]         ; 0057a509
    ADD ESI,0x2                         ; 0057a50c
    MOV byte ptr [EDI + 0x1],AL         ; 0057a50f
    ADD EDI,0x2                         ; 0057a512
    CMP AL,0x0                          ; 0057a515
    JNZ 0x0057a501                      ; 0057a517
        ;   XREF to: 0057a501 (CONDITIONAL_JUMP)  ; LAB_0057a501
    POP EDI                             ; 0057a519
        ;   Label: LAB_0057a519
    MOV EDX,dword ptr [0x0265363c]      ; 0057a51a | DAT_0265363c
    MOV EBX,dword ptr [0x02653640]      ; 0057a520 | DAT_02653640
    PUSH EDX                            ; 0057a526
    MOV dword ptr [0x02653644],EBX      ; 0057a527 | DAT_02653644
    MOV ESI,dword ptr [EBX + 0x100]     ; 0057a52d
    CALL wincore_winrun.cpp_releaseMutex_FUN_0058fd00 ; 0057a533
        ;   XREF to: 0058fd00 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0057a538
    PUSH 0x5fd370                       ; 0057a53b
    PUSH 0xc                            ; 0057a540
    LEA EAX,[ESP + 0x290]               ; 0057a542
    PUSH EAX                            ; 0057a549
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0057a54a
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057a54f
    CMP byte ptr [ESP + 0x2b8],0x0      ; 0057a552
    JNZ 0x0057a60b                      ; 0057a55a
        ;   XREF to: 0057a60b (CONDITIONAL_JUMP)  ; LAB_0057a60b
    MOV EAX,ESP                         ; 0057a560
    PUSH EAX                            ; 0057a562
    PUSH ESI                            ; 0057a563
    CALL support_trisock.cpp_FUN_005797b0 ; 0057a564
        ;   XREF to: 005797b0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_005797b0()
    ADD ESP,0x8                         ; 0057a569
    MOV ESI,EAX                         ; 0057a56c
    MOV ECX,dword ptr [0x0265363c]      ; 0057a56e | DAT_0265363c
        ;   Label: LAB_0057a56e
    PUSH ECX                            ; 0057a574
    CALL wincore_winrun.cpp_waitForMutex_FUN_0058fca0 ; 0057a575
        ;   XREF to: 0058fca0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_0058fca0(HANDLE mutex_handle)
    MOV EBX,dword ptr [0x02653644]      ; 0057a57a | DAT_02653644
    ADD ESP,0x4                         ; 0057a580
    TEST EBX,EBX                        ; 0057a583
    JZ 0x0057a5bb                       ; 0057a585
        ;   XREF to: 0057a5bb (CONDITIONAL_JUMP)  ; LAB_0057a5bb
    TEST ESI,ESI                        ; 0057a587
    JZ 0x0057a6bb                       ; 0057a589
        ;   XREF to: 0057a6bb (CONDITIONAL_JUMP)  ; LAB_0057a6bb
    MOV ESI,EBX                         ; 0057a58f
    MOV dword ptr [EBX + 0x3bc],0x2     ; 0057a591
    MOV ECX,0xae                        ; 0057a59b
    LEA EDI,[ESI + 0x104]               ; 0057a5a0
    MOV ESI,ESP                         ; 0057a5a6
    MOVSD.REP ES:EDI,ESI                ; 0057a5a8
    PUSH 0x1                            ; 0057a5aa
        ;   Label: LAB_0057a5aa
    MOV ESI,dword ptr [0x02653644]      ; 0057a5ac | DAT_02653644
    PUSH ESI                            ; 0057a5b2
    CALL support_trisock.cpp_FUN_0057a980 ; 0057a5b3
        ;   XREF to: 0057a980 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a980()
    ADD ESP,0x8                         ; 0057a5b8
    MOV EDI,dword ptr [0x0265363c]      ; 0057a5bb | DAT_0265363c
        ;   Label: LAB_0057a5bb
    PUSH EDI                            ; 0057a5c1
    CALL wincore_winrun.cpp_releaseMutex_FUN_0058fd00 ; 0057a5c2
        ;   XREF to: 0058fd00 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0057a5c7
    JMP 0x0057a498                      ; 0057a5ca
        ;   XREF to: 0057a498 (UNCONDITIONAL_JUMP)  ; LAB_0057a498
    PUSH EAX                            ; 0057a5cf
        ;   Label: LAB_0057a5cf
    PUSH EAX                            ; 0057a5d0
    CALL wincore_winrun.cpp_sleep_FUN_0058fd90 ; 0057a5d1
        ;   XREF to: 0058fd90 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_0058fd90(double seconds)
    ADD ESP,0x8                         ; 0057a5d6
    JMP 0x0057a498                      ; 0057a5d9
        ;   XREF to: 0057a498 (UNCONDITIONAL_JUMP)  ; LAB_0057a498
    MOV dword ptr [0x02653648],0xffffffff ; 0057a5de | DAT_02653648
        ;   Label: LAB_0057a5de
    MOV EDX,dword ptr [0x0265363c]      ; 0057a5e8 | DAT_0265363c
    PUSH EDX                            ; 0057a5ee
    CALL wincore_winrun.cpp_releaseMutex_FUN_0058fd00 ; 0057a5ef
        ;   XREF to: 0058fd00 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0057a5f4
    XOR ECX,ECX                         ; 0057a5f7
    MOV dword ptr [0x02653648],ECX      ; 0057a5f9 | DAT_02653648
    MOV EAX,0x1                         ; 0057a5ff
    MOV ESP,EBP                         ; 0057a604
    POP EBP                             ; 0057a606
    POP EDI                             ; 0057a607
    POP ESI                             ; 0057a608
    POP EBX                             ; 0057a609
    RET                                 ; 0057a60a
    PUSH 0x5ed2fc                       ; 0057a60b
        ;   Label: LAB_0057a60b
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057a610
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057a615
    LEA EAX,[ESP + 0x2b8]               ; 0057a618
    PUSH EAX                            ; 0057a61f
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057a620
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057a625
    PUSH 0x5ed302                       ; 0057a628
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057a62d
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057a632
    MOV EAX,ESP                         ; 0057a635
    PUSH EAX                            ; 0057a637
    LEA EAX,[ESP + 0x2bc]               ; 0057a638
    PUSH EAX                            ; 0057a63f
    CALL support_trisock.cpp_FUN_00579720 ; 0057a640
        ;   XREF to: 00579720 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579720()
    ADD ESP,0x8                         ; 0057a645
    PUSH 0x5ed304                       ; 0057a648
    MOV EBX,EAX                         ; 0057a64d
    MOV ESI,EAX                         ; 0057a64f
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057a651
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057a656
    LEA EAX,[ESP + 0x2b8]               ; 0057a659
    PUSH EAX                            ; 0057a660
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057a661
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057a666
    PUSH 0x5ed30a                       ; 0057a669
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057a66e
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057a673
    TEST EBX,EBX                        ; 0057a676
    JZ 0x0057a6b4                       ; 0057a678
        ;   XREF to: 0057a6b4 (CONDITIONAL_JUMP)  ; LAB_0057a6b4
    LEA EAX,[ESP + 0x4b8]               ; 0057a67a
    PUSH EAX                            ; 0057a681
    LEA EAX,[ESP + 0x28c]               ; 0057a682
    PUSH EAX                            ; 0057a689
    CALL support_trisock.cpp_formatIPAddress_FUN_00578cb0 ; 0057a68a
        ;   XREF to: 00578cb0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatIPAddress_FUN_00578cb0(uchar * ip_bytes, char * output_buffer)
    ADD ESP,0x8                         ; 0057a68f
    LEA EAX,[ESP + 0x4b8]               ; 0057a692
    PUSH EAX                            ; 0057a699
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057a69a
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
        ;   Label: LAB_0057a69a
    ADD ESP,0x4                         ; 0057a69f
    PUSH 0x5ed31a                       ; 0057a6a2
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 0057a6a7
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057a6ac
    JMP 0x0057a56e                      ; 0057a6af
        ;   XREF to: 0057a56e (UNCONDITIONAL_JUMP)  ; LAB_0057a56e
    PUSH 0x5ed311                       ; 0057a6b4
        ;   Label: LAB_0057a6b4
    JMP 0x0057a69a                      ; 0057a6b9
        ;   XREF to: 0057a69a (UNCONDITIONAL_JUMP)  ; LAB_0057a69a
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 0057a6bb
        ;   Label: LAB_0057a6bb
    JMP 0x0057a5aa                      ; 0057a6c5
        ;   XREF to: 0057a5aa (UNCONDITIONAL_JUMP)  ; LAB_0057a5aa

