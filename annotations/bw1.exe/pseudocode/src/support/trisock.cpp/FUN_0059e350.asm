; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0059e350(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0059e318 = 0059e450
;   undefined1* PTR_caseD_fffffffb_0059e320 = 0059e450
;   undefined1* PTR_caseD_fffffffb_0059e324 = 0059e450
;   undefined1* PTR_caseD_2_0059e334 = 0059ec11
;   TerminatedCString s_Error_connecting_socket_005f8646
;   TerminatedCString s_DNS_error_resolving_s_005f8664
;   TerminatedCString s_Error_contacting_s_005f867b
;   undefined4 DAT_005f868f
;   undefined4 DAT_005f8694
;   TerminatedCString s_Cache_Control_no_cache_005f8699
;   undefined4 s_Cache_Control_no_cache_005f8699+1
;   undefined4 s_Cache_Control_no_cache_005f8699+2
;   undefined4 s_Cache_Control_no_cache_005f8699+3
;   TerminatedCString s_POST_s_HTTP_1_0_Host_s_d_005f86b3
;   TerminatedCString s_GET_s_HTTP_1_0_Host_s_d_005f86eb
;   ... and 25 more
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c__strnicmp_FUN_005c1210
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_splitPath_FUN_00479580
;   support_trisock.cpp_CSocket_bindSocket_FUN_0059c980
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;   support_trisock.cpp_CSocket_connectSocket_FUN_0059c9d0
;   support_trisock.cpp_CSocket_createSocket_FUN_0059c910
;   support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970
;   support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70
;   support_trisock.cpp_formatSocketAddress_FUN_0059c830
;   support_trisock.cpp_FUN_0059ca30
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e350
        ;   Label: support_trisock.cpp_FUN_0059e350
    PUSH ESI                            ; 0059e351
    PUSH EDI                            ; 0059e352
    PUSH EBP                            ; 0059e353
    SUB ESP,0x9f0                       ; 0059e354
    MOV EBP,dword ptr [ESP + 0xa04]     ; 0059e35a
    MOV EDX,dword ptr [EBP + 0xd28]     ; 0059e361
    LEA EAX,[EDX + -0x1]                ; 0059e367
    CMP EAX,0x3                         ; 0059e36a
    JA 0x0059e43b                       ; 0059e36d
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x59e308]  ; 0059e373 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x607310                       ; 0059e37a | g_IpAddrTypeInfo
        ;   Label: caseD_1
    PUSH 0xc                            ; 0059e37f
    LEA EAX,[ESP + 0x690]               ; 0059e381
    PUSH EAX                            ; 0059e388
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0059e389
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059e38e
    LEA EAX,[ESP + 0x400]               ; 0059e391
    PUSH EAX                            ; 0059e398
    LEA EAX,[EBP + 0xd30]               ; 0059e399
    PUSH EAX                            ; 0059e39f
    CALL support_trisock.cpp_FUN_0059de30 ; 0059e3a0
        ;   XREF to: 0059de30 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059de30()
    LEA EDI,[EBP + 0x400]               ; 0059e3a5
    ADD ESP,0x8                         ; 0059e3ab
    CMP EAX,0x2                         ; 0059e3ae
    JNZ 0x0059e4c1                      ; 0059e3b1
        ;   XREF to: 0059e4c1 (CONDITIONAL_JUMP)  ; LAB_0059e4c1
    CMP byte ptr [ESP + 0x400],0x0      ; 0059e3b7
    JZ 0x0059e3e2                       ; 0059e3bf
        ;   XREF to: 0059e3e2 (CONDITIONAL_JUMP)  ; LAB_0059e3e2
    LEA ESI,[ESP + 0x400]               ; 0059e3c1
    PUSH EDI                            ; 0059e3c8
    MOV AL,byte ptr [ESI]               ; 0059e3c9
        ;   Label: LAB_0059e3c9
    MOV byte ptr [EDI],AL               ; 0059e3cb
    CMP AL,0x0                          ; 0059e3cd
    JZ 0x0059e3e1                       ; 0059e3cf
        ;   XREF to: 0059e3e1 (CONDITIONAL_JUMP)  ; LAB_0059e3e1
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e3d1
    ADD ESI,0x2                         ; 0059e3d4
    MOV byte ptr [EDI + 0x1],AL         ; 0059e3d7
    ADD EDI,0x2                         ; 0059e3da
    CMP AL,0x0                          ; 0059e3dd
    JNZ 0x0059e3c9                      ; 0059e3df
        ;   XREF to: 0059e3c9 (CONDITIONAL_JUMP)  ; LAB_0059e3c9
    POP EDI                             ; 0059e3e1
        ;   Label: LAB_0059e3e1
    MOV EAX,dword ptr [ESP + 0x688]     ; 0059e3e2
        ;   Label: LAB_0059e3e2
    LEA EBX,[EBP + 0xd2c]               ; 0059e3e9
    MOV dword ptr [EBP + 0xd28],0x2     ; 0059e3ef
    PUSH EBX                            ; 0059e3f9
    MOV dword ptr [EBP + 0x600],EAX     ; 0059e3fa
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059e400
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059e405
    PUSH EBX                            ; 0059e408
    CALL support_trisock.cpp_CSocket_createSocket_FUN_0059c910 ; 0059e409
        ;   XREF to: 0059c910 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createSocket_FUN_0059c910(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059e40e
    PUSH 0x0                            ; 0059e411
    PUSH EBX                            ; 0059e413
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70 ; 0059e414
        ;   XREF to: 0059cd70 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 0059e419
    PUSH 0x0                            ; 0059e41c
    PUSH EBX                            ; 0059e41e
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_0059c980 ; 0059e41f
        ;   XREF to: 0059c980 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_0059c980(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 0059e424
    LEA EAX,[EBP + 0x600]               ; 0059e427
    PUSH EAX                            ; 0059e42d
    PUSH EBX                            ; 0059e42e
    CALL support_trisock.cpp_CSocket_connectSocket_FUN_0059c9d0 ; 0059e42f
        ;   XREF to: 0059c9d0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_connectSocket_FUN_0059c9d0(CSocket * this_ptr, SNetworkAddr * dest_addr)
    ADD ESP,0x8                         ; 0059e434
    TEST EAX,EAX                        ; 0059e437
    JZ 0x0059e497                       ; 0059e439
        ;   XREF to: 0059e497 (CONDITIONAL_JUMP)  ; LAB_0059e497
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059e43b
        ;   Label: default
    ADD EAX,0x5                         ; 0059e441
    CMP EAX,0xa                         ; 0059e444
    JA 0x0059e450                       ; 0059e447
        ;   XREF to: 0059e450 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x59e318]  ; 0059e449 | caseD_ffffffff | caseD_0 | caseD_1
        ;   Label: switchD
    LEA EAX,[EBP + 0xd2c]               ; 0059e450
        ;   Label: caseD_fffffffb
    PUSH EAX                            ; 0059e456
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059e457
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059e45c
    LEA ESI,[EBP + 0xa18]               ; 0059e45f
    MOV EDI,dword ptr [ESP + 0xa08]     ; 0059e465
        ;   Label: LAB_0059e465
    PUSH EDI                            ; 0059e46c
    MOV AL,byte ptr [ESI]               ; 0059e46d | DAT_005f8831 | DAT_005f8833
        ;   Label: LAB_0059e46d
    MOV byte ptr [EDI],AL               ; 0059e46f
    CMP AL,0x0                          ; 0059e471
    JZ 0x0059e485                       ; 0059e473
        ;   XREF to: 0059e485 (CONDITIONAL_JUMP)  ; LAB_0059e485
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e475 | DAT_005f8832 | DAT_005f8834
    ADD ESI,0x2                         ; 0059e478
    MOV byte ptr [EDI + 0x1],AL         ; 0059e47b
    ADD EDI,0x2                         ; 0059e47e
    CMP AL,0x0                          ; 0059e481
    JNZ 0x0059e46d                      ; 0059e483
        ;   XREF to: 0059e46d (CONDITIONAL_JUMP)  ; LAB_0059e46d
    POP EDI                             ; 0059e485
        ;   Label: LAB_0059e485
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059e486
    ADD ESP,0x9f0                       ; 0059e48c
    POP EBP                             ; 0059e492
    POP EDI                             ; 0059e493
    POP ESI                             ; 0059e494
    POP EBX                             ; 0059e495
    RET                                 ; 0059e496
    LEA EAX,[EBP + 0x400]               ; 0059e497
        ;   Label: LAB_0059e497
    PUSH EAX                            ; 0059e49d
    PUSH 0x5f8646                       ; 0059e49e | = "Error connecting socket to %s"
    LEA EAX,[EBP + 0xa18]               ; 0059e4a3
    PUSH EAX                            ; 0059e4a9
    MOV dword ptr [EBP + 0xd28],0xfffffffd ; 0059e4aa
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e4b4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059e4b9
    JMP 0x0059e43b                      ; 0059e4bc
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,0x1                         ; 0059e4c1
        ;   Label: LAB_0059e4c1
    JZ 0x0059e43b                       ; 0059e4c4
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    PUSH EDI                            ; 0059e4ca
    PUSH 0x5f8664                       ; 0059e4cb | = "DNS error resolving %s"
    LEA EAX,[EBP + 0xa18]               ; 0059e4d0
    PUSH EAX                            ; 0059e4d6
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e4d7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059e4dc
    MOV dword ptr [EBP + 0xd28],0xfffffffe ; 0059e4df
    JMP 0x0059e43b                      ; 0059e4e9
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    LEA ESI,[EBP + 0xd2c]               ; 0059e4ee
        ;   Label: caseD_2
    PUSH ESI                            ; 0059e4f4
    MOV EBX,0x4                         ; 0059e4f5
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970 ; 0059e4fa
        ;   XREF to: 0059c970 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059e4ff
    TEST EAX,EAX                        ; 0059e502
    JZ 0x0059e511                       ; 0059e504
        ;   XREF to: 0059e511 (CONDITIONAL_JUMP)  ; LAB_0059e511
    PUSH ESI                            ; 0059e506
    CALL support_trisock.cpp_FUN_0059ca30 ; 0059e507
        ;   XREF to: 0059ca30 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059ca30()
    ADD ESP,0x4                         ; 0059e50c
    MOV EBX,EAX                         ; 0059e50f
    TEST BL,0x4                         ; 0059e511
        ;   Label: LAB_0059e511
    JNZ 0x0059e6ad                      ; 0059e514
        ;   XREF to: 0059e6ad (CONDITIONAL_JUMP)  ; LAB_0059e6ad
    TEST BL,0x2                         ; 0059e51a
    JZ 0x0059e43b                       ; 0059e51d
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0xd18],0x0     ; 0059e523
    MOV EDI,dword ptr [EBP + 0xd20]     ; 0059e52d
    MOV dword ptr [EBP + 0xd28],0x3     ; 0059e533
    TEST EDI,EDI                        ; 0059e53d
    JZ 0x0059e5a2                       ; 0059e53f
        ;   XREF to: 0059e5a2 (CONDITIONAL_JUMP)  ; LAB_0059e5a2
    PUSH EDI                            ; 0059e541
    MOV EDX,dword ptr [EDI]             ; 0059e542
    CALL dword ptr [EDX + 0x18]         ; 0059e544
    MOV EBX,EAX                         ; 0059e547
    ADD ESP,0x4                         ; 0059e549
    TEST EAX,EAX                        ; 0059e54c
    JL 0x0059e5a2                       ; 0059e54e
        ;   XREF to: 0059e5a2 (CONDITIONAL_JUMP)  ; LAB_0059e5a2
    PUSH 0x2                            ; 0059e550
    MOV EAX,dword ptr [EBP + 0xd20]     ; 0059e552
    PUSH 0x0                            ; 0059e558
    MOV EDX,dword ptr [EAX]             ; 0059e55a
    PUSH EAX                            ; 0059e55c
    CALL dword ptr [EDX + 0x14]         ; 0059e55d
    ADD ESP,0xc                         ; 0059e560
    MOV EAX,dword ptr [EBP + 0xd20]     ; 0059e563
    PUSH EAX                            ; 0059e569
    MOV EDX,dword ptr [EAX]             ; 0059e56a
    CALL dword ptr [EDX + 0x18]         ; 0059e56c
    ADD ESP,0x4                         ; 0059e56f
    MOV dword ptr [EBP + 0xd18],EAX     ; 0059e572
    PUSH 0x0                            ; 0059e578
    MOV EAX,dword ptr [EBP + 0xd20]     ; 0059e57a
    PUSH EBX                            ; 0059e580
    MOV EDX,dword ptr [EAX]             ; 0059e581
    PUSH EAX                            ; 0059e583
    CALL dword ptr [EDX + 0x14]         ; 0059e584
    MOV EAX,dword ptr [EBP + 0xd18]     ; 0059e587
    ADD ESP,0xc                         ; 0059e58d
    TEST EAX,EAX                        ; 0059e590
    JL 0x0059e6d7                       ; 0059e592
        ;   XREF to: 0059e6d7 (CONDITIONAL_JUMP)  ; LAB_0059e6d7
    MOV EDX,EAX                         ; 0059e598
    SUB EDX,EBX                         ; 0059e59a
    MOV dword ptr [EBP + 0xd18],EDX     ; 0059e59c
    LEA EAX,[ESP + 0x6b8]               ; 0059e5a2
        ;   Label: LAB_0059e5a2
    PUSH EAX                            ; 0059e5a9
    PUSH 0x0                            ; 0059e5aa
    PUSH 0x0                            ; 0059e5ac
    MOV ECX,0x40                        ; 0059e5ae
    LEA EDI,[ESP + 0x7c4]               ; 0059e5b3
    PUSH 0x0                            ; 0059e5ba
    LEA EAX,[EBP + 0x500]               ; 0059e5bc
    MOV ESI,0x625aa0                    ; 0059e5c2 | DAT_00625aa0
    PUSH EAX                            ; 0059e5c7
    MOVSD.REP ES:EDI,ESI                ; 0059e5c8 | DAT_00625aa0 | DAT_00625aa4
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 0059e5ca
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0059e5cf
    PUSH 0x5f868f                       ; 0059e5d2 | DAT_005f868f
    LEA EAX,[ESP + 0x6bc]               ; 0059e5d7
    PUSH EAX                            ; 0059e5de
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0059e5df
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059e5e4
    TEST EAX,EAX                        ; 0059e5e7
    JNZ 0x0059e6e6                      ; 0059e5e9
        ;   XREF to: 0059e6e6 (CONDITIONAL_JUMP)  ; LAB_0059e6e6
    MOV ESI,0x5f8699                    ; 0059e5ef | = "Cache-Control: no-cache\r\n"
        ;   Label: LAB_0059e5ef
    LEA EDI,[ESP + 0x7b8]               ; 0059e5f4
    PUSH EDI                            ; 0059e5fb
    MOV AL,byte ptr [ESI]               ; 0059e5fc | = "Cache-Control: no-cache\r\n" | s_Cache_Control_no_cache_005f8699+2
        ;   Label: LAB_0059e5fc
    MOV byte ptr [EDI],AL               ; 0059e5fe
    CMP AL,0x0                          ; 0059e600
    JZ 0x0059e614                       ; 0059e602
        ;   XREF to: 0059e614 (CONDITIONAL_JUMP)  ; LAB_0059e614
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e604 | s_Cache_Control_no_cache_005f8699+1 | s_Cache_Control_no_cache_005f8699+3
    ADD ESI,0x2                         ; 0059e607
    MOV byte ptr [EDI + 0x1],AL         ; 0059e60a
    ADD EDI,0x2                         ; 0059e60d
    CMP AL,0x0                          ; 0059e610
    JNZ 0x0059e5fc                      ; 0059e612
        ;   XREF to: 0059e5fc (CONDITIONAL_JUMP)  ; LAB_0059e5fc
    POP EDI                             ; 0059e614
        ;   Label: LAB_0059e614
    LEA EDX,[EBP + 0x500]               ; 0059e615
        ;   Label: LAB_0059e615
    MOV ECX,dword ptr [EBP + 0xd18]     ; 0059e61b
    LEA EAX,[EBP + 0x400]               ; 0059e621
    TEST ECX,ECX                        ; 0059e627
    JLE 0x0059e708                      ; 0059e629
        ;   XREF to: 0059e708 (CONDITIONAL_JUMP)  ; LAB_0059e708
    PUSH ECX                            ; 0059e62f
    LEA ECX,[ESP + 0x7bc]               ; 0059e630
    PUSH ECX                            ; 0059e637
    XOR ECX,ECX                         ; 0059e638
    MOV CX,word ptr [EBP + 0x604]       ; 0059e63a
    PUSH ECX                            ; 0059e641
    PUSH EAX                            ; 0059e642
    PUSH EDX                            ; 0059e643
    PUSH 0x5f86b3                       ; 0059e644 | = "POST %s HTTP/1.0\r\nHost: %s:%d\r\n%s..."
    LEA EAX,[ESP + 0x18]                ; 0059e649
    PUSH EAX                            ; 0059e64d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e64e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x1c                        ; 0059e653
    PUSH 0x0                            ; 0059e656
        ;   Label: LAB_0059e656
    LEA EDI,[ESP + 0x4]                 ; 0059e658
    SUB ECX,ECX                         ; 0059e65c
    DEC ECX                             ; 0059e65e
    XOR EAX,EAX                         ; 0059e65f
    SCASB.REPNE ES:EDI                  ; 0059e661
    NOT ECX                             ; 0059e663
    DEC ECX                             ; 0059e665
    PUSH ECX                            ; 0059e666
    LEA EAX,[ESP + 0x8]                 ; 0059e667
    PUSH EAX                            ; 0059e66b
    LEA EAX,[EBP + 0xd2c]               ; 0059e66c
    PUSH EAX                            ; 0059e672
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0 ; 0059e673
        ;   XREF to: 0059cbc0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0059e678
    TEST EAX,EAX                        ; 0059e67b
    JNZ 0x0059e43b                      ; 0059e67d
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0x500]               ; 0059e683
    PUSH EAX                            ; 0059e689
    PUSH 0x5f8721                       ; 0059e68a | = "Error requesting %s"
    LEA EAX,[EBP + 0xa18]               ; 0059e68f
    PUSH EAX                            ; 0059e695
    MOV dword ptr [EBP + 0xd28],0xfffffffc ; 0059e696
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e6a0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059e6a5
    JMP 0x0059e43b                      ; 0059e6a8
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0x400]               ; 0059e6ad
        ;   Label: LAB_0059e6ad
    PUSH EAX                            ; 0059e6b3
    PUSH 0x5f867b                       ; 0059e6b4 | = "Error contacting %s"
    LEA EAX,[EBP + 0xa18]               ; 0059e6b9
    PUSH EAX                            ; 0059e6bf
    MOV dword ptr [EBP + 0xd28],0xfffffffd ; 0059e6c0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e6ca
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059e6cf
    JMP 0x0059e43b                      ; 0059e6d2
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0xd18],0x0     ; 0059e6d7
        ;   Label: LAB_0059e6d7
    JMP 0x0059e5a2                      ; 0059e6e1
        ;   XREF to: 0059e5a2 (UNCONDITIONAL_JUMP)  ; LAB_0059e5a2
    PUSH 0x5f8694                       ; 0059e6e6 | DAT_005f8694
        ;   Label: LAB_0059e6e6
    LEA EAX,[ESP + 0x6bc]               ; 0059e6eb
    PUSH EAX                            ; 0059e6f2
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0059e6f3
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059e6f8
    TEST EAX,EAX                        ; 0059e6fb
    JZ 0x0059e5ef                       ; 0059e6fd
        ;   XREF to: 0059e5ef (CONDITIONAL_JUMP)  ; LAB_0059e5ef
    JMP 0x0059e615                      ; 0059e703
        ;   XREF to: 0059e615 (UNCONDITIONAL_JUMP)  ; LAB_0059e615
    LEA ECX,[ESP + 0x7b8]               ; 0059e708
        ;   Label: LAB_0059e708
    PUSH ECX                            ; 0059e70f
    XOR ECX,ECX                         ; 0059e710
    MOV CX,word ptr [EBP + 0x604]       ; 0059e712
    PUSH ECX                            ; 0059e719
    PUSH EAX                            ; 0059e71a
    PUSH EDX                            ; 0059e71b
    PUSH 0x5f86eb                       ; 0059e71c | = "GET %s HTTP/1.0\r\nHost: %s:%d\r\n%sC..."
    LEA EAX,[ESP + 0x14]                ; 0059e721
    PUSH EAX                            ; 0059e725
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e726
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x18                        ; 0059e72b
    JMP 0x0059e656                      ; 0059e72e
        ;   XREF to: 0059e656 (UNCONDITIONAL_JUMP)  ; LAB_0059e656
    LEA ESI,[EBP + 0xd2c]               ; 0059e733
        ;   Label: caseD_3
    PUSH ESI                            ; 0059e739
    MOV EBX,0x4                         ; 0059e73a
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970 ; 0059e73f
        ;   XREF to: 0059c970 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059e744
    TEST EAX,EAX                        ; 0059e747
    JZ 0x0059e756                       ; 0059e749
        ;   XREF to: 0059e756 (CONDITIONAL_JUMP)  ; LAB_0059e756
    PUSH ESI                            ; 0059e74b
    CALL support_trisock.cpp_FUN_0059ca30 ; 0059e74c
        ;   XREF to: 0059ca30 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059ca30()
    ADD ESP,0x4                         ; 0059e751
    MOV EBX,EAX                         ; 0059e754
    TEST BL,0x4                         ; 0059e756
        ;   Label: LAB_0059e756
    JNZ 0x0059e7ed                      ; 0059e759
        ;   XREF to: 0059e7ed (CONDITIONAL_JUMP)  ; LAB_0059e7ed
    MOV EDX,dword ptr [EBP + 0xd18]     ; 0059e75f
    TEST EDX,EDX                        ; 0059e765
    JLE 0x0059e81e                      ; 0059e767
        ;   XREF to: 0059e81e (CONDITIONAL_JUMP)  ; LAB_0059e81e
    TEST BL,0x2                         ; 0059e76d
    JZ 0x0059e43b                       ; 0059e770
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    MOV EBX,0x200                       ; 0059e776
    CMP EDX,EBX                         ; 0059e77b
    JGE 0x0059e781                      ; 0059e77d
        ;   XREF to: 0059e781 (CONDITIONAL_JUMP)  ; LAB_0059e781
    MOV EBX,EDX                         ; 0059e77f
    PUSH EBX                            ; 0059e781
        ;   Label: LAB_0059e781
    LEA ESI,[EBP + 0x610]               ; 0059e782
    MOV EAX,dword ptr [EBP + 0xd20]     ; 0059e788
    PUSH ESI                            ; 0059e78e
    MOV EDX,dword ptr [EAX]             ; 0059e78f
    PUSH EAX                            ; 0059e791
    CALL dword ptr [EDX + 0x10]         ; 0059e792
    ADD ESP,0xc                         ; 0059e795
    MOV EDI,EAX                         ; 0059e798
    CMP EAX,EBX                         ; 0059e79a
    JNZ 0x0059e7bb                      ; 0059e79c
        ;   XREF to: 0059e7bb (CONDITIONAL_JUMP)  ; LAB_0059e7bb
    PUSH 0x0                            ; 0059e79e
    PUSH EBX                            ; 0059e7a0
    PUSH ESI                            ; 0059e7a1
    LEA EAX,[EBP + 0xd2c]               ; 0059e7a2
    PUSH EAX                            ; 0059e7a8
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0 ; 0059e7a9
        ;   XREF to: 0059cbc0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0059e7ae
    TEST EAX,EAX                        ; 0059e7b1
    JZ 0x0059e817                       ; 0059e7b3
        ;   XREF to: 0059e817 (CONDITIONAL_JUMP)  ; LAB_0059e817
    SUB dword ptr [EBP + 0xd18],EBX     ; 0059e7b5
    CMP EDI,EBX                         ; 0059e7bb
        ;   Label: LAB_0059e7bb
    JZ 0x0059e43b                       ; 0059e7bd
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0x400]               ; 0059e7c3
    PUSH EAX                            ; 0059e7c9
    PUSH 0x5f8749                       ; 0059e7ca | = "Error requesting %s"
    LEA EAX,[EBP + 0xa18]               ; 0059e7cf
    PUSH EAX                            ; 0059e7d5
    MOV dword ptr [EBP + 0xd28],0xfffffffc ; 0059e7d6
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e7e0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059e7e5
    JMP 0x0059e43b                      ; 0059e7e8
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0x400]               ; 0059e7ed
        ;   Label: LAB_0059e7ed
    PUSH EAX                            ; 0059e7f3
    PUSH 0x5f8735                       ; 0059e7f4 | = "Error requesting %s"
    LEA EAX,[EBP + 0xa18]               ; 0059e7f9
    PUSH EAX                            ; 0059e7ff
    MOV dword ptr [EBP + 0xd28],0xfffffffc ; 0059e800
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e80a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059e80f
    JMP 0x0059e43b                      ; 0059e812
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    MOV EDI,0xffffffff                  ; 0059e817
        ;   Label: LAB_0059e817
    JMP 0x0059e7bb                      ; 0059e81c
        ;   XREF to: 0059e7bb (UNCONDITIONAL_JUMP)  ; LAB_0059e7bb
    MOV byte ptr [EBP + 0x810],0x0      ; 0059e81e
        ;   Label: LAB_0059e81e
    MOV dword ptr [EBP + 0xd1c],0x0     ; 0059e825
    MOV dword ptr [EBP + 0xd28],0x4     ; 0059e82f
    JMP 0x0059e43b                      ; 0059e839
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    CMP EDX,0x4                         ; 0059e83e
        ;   Label: caseD_4
    JNZ 0x0059e43b                      ; 0059e841
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xa18]               ; 0059e847
    MOV dword ptr [ESP + 0x9e0],EAX     ; 0059e84d
    LEA EAX,[EBP + 0x60c]               ; 0059e854
    MOV dword ptr [ESP + 0x9dc],EAX     ; 0059e85a
    LEA EAX,[EBP + 0x81f]               ; 0059e861
    MOV dword ptr [ESP + 0x9e4],EAX     ; 0059e867
    LEA EAX,[EBP + 0x810]               ; 0059e86e
    MOV dword ptr [ESP + 0x9ec],EAX     ; 0059e874
    CMP dword ptr [EBP + 0xd1c],0x2     ; 0059e87b
        ;   Label: LAB_0059e87b
    JGE 0x0059eaa2                      ; 0059e882
        ;   XREF to: 0059eaa2 (CONDITIONAL_JUMP)  ; LAB_0059eaa2
    MOV EDI,dword ptr [ESP + 0x9ec]     ; 0059e888
    SUB ECX,ECX                         ; 0059e88f
    DEC ECX                             ; 0059e891
    XOR EAX,EAX                         ; 0059e892
    SCASB.REPNE ES:EDI                  ; 0059e894
    NOT ECX                             ; 0059e896
    DEC ECX                             ; 0059e898
    MOV ESI,ECX                         ; 0059e899
    LEA EBX,[ECX + EBP*0x1]             ; 0059e89b
    PUSH 0x0                            ; 0059e89e
        ;   Label: LAB_0059e89e
    PUSH EBP                            ; 0059e8a0
    MOV byte ptr [EBX + 0x810],0x0      ; 0059e8a1
    CALL support_trisock.cpp_FUN_0059ee60 ; 0059e8a8
        ;   XREF to: 0059ee60 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059ee60()
    ADD ESP,0x8                         ; 0059e8ad
    MOV EDX,EAX                         ; 0059e8b0
    TEST EAX,EAX                        ; 0059e8b2
    JL 0x0059e43b                       ; 0059e8b4
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    CMP EAX,0xd                         ; 0059e8ba
    JZ 0x0059e89e                       ; 0059e8bd
        ;   XREF to: 0059e89e (CONDITIONAL_JUMP)  ; LAB_0059e89e
    CMP EAX,0xa                         ; 0059e8bf
    JNZ 0x0059e982                      ; 0059e8c2
        ;   XREF to: 0059e982 (CONDITIONAL_JUMP)  ; LAB_0059e982
    TEST ESI,ESI                        ; 0059e8c8
    JL 0x0059e43b                       ; 0059e8ca
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBP + 0xd1c]     ; 0059e8d0
    TEST ECX,ECX                        ; 0059e8d6
    JNZ 0x0059ea19                      ; 0059e8d8
        ;   XREF to: 0059ea19 (CONDITIONAL_JUMP)  ; LAB_0059ea19
    MOV EDX,0xffffffff                  ; 0059e8de
    MOV ESI,0x5f875d                    ; 0059e8e3 | = "Unknown error"
    LEA EDI,[ESP + 0x8b8]               ; 0059e8e8
    MOV dword ptr [ESP + 0x9d8],EDX     ; 0059e8ef
    PUSH EDI                            ; 0059e8f6
    MOV AL,byte ptr [ESI]               ; 0059e8f7 | = "Unknown error" | s_known_error_005f875d+2
        ;   Label: LAB_0059e8f7
    MOV byte ptr [EDI],AL               ; 0059e8f9
    CMP AL,0x0                          ; 0059e8fb
    JZ 0x0059e90f                       ; 0059e8fd
        ;   XREF to: 0059e90f (CONDITIONAL_JUMP)  ; LAB_0059e90f
    MOV AL,byte ptr [ESI + 0x1]         ; 0059e8ff | s_nknown_error_005f875d+1 | s_nown_error_005f875d+3
    ADD ESI,0x2                         ; 0059e902
    MOV byte ptr [EDI + 0x1],AL         ; 0059e905
    ADD EDI,0x2                         ; 0059e908
    CMP AL,0x0                          ; 0059e90b
    JNZ 0x0059e8f7                      ; 0059e90d
        ;   XREF to: 0059e8f7 (CONDITIONAL_JUMP)  ; LAB_0059e8f7
    POP EDI                             ; 0059e90f
        ;   Label: LAB_0059e90f
    LEA EAX,[ESP + 0x8b8]               ; 0059e910
    PUSH EAX                            ; 0059e917
    LEA EAX,[ESP + 0x9dc]               ; 0059e918
    PUSH EAX                            ; 0059e91f
    PUSH 0x5f876b                       ; 0059e920 | = "%*[^ ]%d %255[^\n]"
    MOV ECX,dword ptr [ESP + 0x9f8]     ; 0059e925
    PUSH ECX                            ; 0059e92c
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0059e92d
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x10                        ; 0059e932
    MOV EBX,dword ptr [ESP + 0x9d8]     ; 0059e935
    CMP EBX,-0x1                        ; 0059e93c
    JZ 0x0059e99b                       ; 0059e93f
        ;   XREF to: 0059e99b (CONDITIONAL_JUMP)  ; LAB_0059e99b
    CMP EBX,0x190                       ; 0059e941
    JGE 0x0059e9bf                      ; 0059e947
        ;   XREF to: 0059e9bf (CONDITIONAL_JUMP)  ; LAB_0059e9bf
    CMP EBX,0x12c                       ; 0059e949
    JGE 0x0059e9ec                      ; 0059e94f
        ;   XREF to: 0059e9ec (CONDITIONAL_JUMP)  ; LAB_0059e9ec
    MOV dword ptr [EBP + 0x60c],0xffffffff ; 0059e955
    MOV byte ptr [EBP + 0x810],0x0      ; 0059e95f
    MOV dword ptr [EBP + 0xd1c],0x1     ; 0059e966
    CMP dword ptr [EBP + 0xd28],0x4     ; 0059e970
        ;   Label: LAB_0059e970
    JZ 0x0059e87b                       ; 0059e977
        ;   XREF to: 0059e87b (CONDITIONAL_JUMP)  ; LAB_0059e87b
    JMP 0x0059e43b                      ; 0059e97d
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x1ff                       ; 0059e982
        ;   Label: LAB_0059e982
    JNC 0x0059e89e                      ; 0059e988
        ;   XREF to: 0059e89e (CONDITIONAL_JUMP)  ; LAB_0059e89e
    INC EBX                             ; 0059e98e
    INC ESI                             ; 0059e98f
    MOV byte ptr [EBX + 0x80f],AL       ; 0059e990
    JMP 0x0059e89e                      ; 0059e996
        ;   XREF to: 0059e89e (UNCONDITIONAL_JUMP)  ; LAB_0059e89e
    PUSH 0x5f877d                       ; 0059e99b | = "Invalid HTTP header returned by server"
        ;   Label: LAB_0059e99b
    MOV ESI,dword ptr [ESP + 0x9e4]     ; 0059e9a0
    PUSH ESI                            ; 0059e9a7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e9a8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 0059e9ad
    MOV dword ptr [EBP + 0xd28],0xfffffffb ; 0059e9b0
    JMP 0x0059e43b                      ; 0059e9ba
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x8b8]               ; 0059e9bf
        ;   Label: LAB_0059e9bf
    PUSH EAX                            ; 0059e9c6
    PUSH EBX                            ; 0059e9c7
    PUSH 0x5f87a4                       ; 0059e9c8 | = "%d: %s"
    MOV EBX,dword ptr [ESP + 0x9ec]     ; 0059e9cd
    PUSH EBX                            ; 0059e9d4
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059e9d5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0059e9da
    MOV dword ptr [EBP + 0xd28],0xfffffffb ; 0059e9dd
    JMP 0x0059e43b                      ; 0059e9e7
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x8b8]               ; 0059e9ec
        ;   Label: LAB_0059e9ec
    PUSH EAX                            ; 0059e9f3
    PUSH EBX                            ; 0059e9f4
    PUSH 0x5f87ab                       ; 0059e9f5 | = "Not implemented: %d: %s"
    MOV EDX,dword ptr [ESP + 0x9ec]     ; 0059e9fa
    PUSH EDX                            ; 0059ea01
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ea02
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0059ea07
    MOV dword ptr [EBP + 0xd28],0xfffffffb ; 0059ea0a
    JMP 0x0059e43b                      ; 0059ea14
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x1                         ; 0059ea19
        ;   Label: LAB_0059ea19
    JNZ 0x0059e970                      ; 0059ea1c
        ;   XREF to: 0059e970 (CONDITIONAL_JUMP)  ; LAB_0059e970
    CMP byte ptr [EBP + 0x810],0x0      ; 0059ea22
    JNZ 0x0059ea51                      ; 0059ea29
        ;   XREF to: 0059ea51 (CONDITIONAL_JUMP)  ; LAB_0059ea51
    MOV dword ptr [EBP + 0xd1c],0x2     ; 0059ea2b
    MOV dword ptr [EBP + 0x608],0x0     ; 0059ea35
    CMP dword ptr [EBP + 0xd28],0x4     ; 0059ea3f
    JZ 0x0059e87b                       ; 0059ea46
        ;   XREF to: 0059e87b (CONDITIONAL_JUMP)  ; LAB_0059e87b
    JMP 0x0059e43b                      ; 0059ea4c
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    PUSH 0xf                            ; 0059ea51
        ;   Label: LAB_0059ea51
    PUSH 0x5f87c3                       ; 0059ea53 | = "Content-length:"
    MOV ESI,dword ptr [ESP + 0x9f4]     ; 0059ea58
    PUSH ESI                            ; 0059ea5f
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0059ea60
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0059ea65
    TEST EAX,EAX                        ; 0059ea68
    JNZ 0x0059ea89                      ; 0059ea6a
        ;   XREF to: 0059ea89 (CONDITIONAL_JUMP)  ; LAB_0059ea89
    MOV EDI,dword ptr [ESP + 0x9dc]     ; 0059ea6c
    PUSH EDI                            ; 0059ea73
    PUSH 0x5f87d3                       ; 0059ea74 | DAT_005f87d3
    MOV EAX,dword ptr [ESP + 0x9ec]     ; 0059ea79
    PUSH EAX                            ; 0059ea80
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0059ea81
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 0059ea86
    MOV byte ptr [EBP + 0x810],0x0      ; 0059ea89
        ;   Label: LAB_0059ea89
    CMP dword ptr [EBP + 0xd28],0x4     ; 0059ea90
    JZ 0x0059e87b                       ; 0059ea97
        ;   XREF to: 0059e87b (CONDITIONAL_JUMP)  ; LAB_0059e87b
    JMP 0x0059e43b                      ; 0059ea9d
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0059eaa2
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_0059eaa2
    MOV EDI,EAX                         ; 0059eaa7
    LEA EAX,[EBP + 0x610]               ; 0059eaa9
    XOR ESI,ESI                         ; 0059eaaf
    MOV dword ptr [ESP + 0x9e8],EAX     ; 0059eab1
    MOV EDX,dword ptr [EBP + 0xa10]     ; 0059eab8
        ;   Label: LAB_0059eab8
    MOV EAX,dword ptr [EBP + 0xa14]     ; 0059eabe
    CMP EAX,EDX                         ; 0059eac4
    JLE 0x0059eb28                      ; 0059eac6
        ;   XREF to: 0059eb28 (CONDITIONAL_JUMP)  ; LAB_0059eb28
    MOV EBX,EAX                         ; 0059eac8
    MOV EAX,dword ptr [EBP + 0x60c]     ; 0059eaca
    SUB EBX,EDX                         ; 0059ead0
    TEST EAX,EAX                        ; 0059ead2
    JL 0x0059eae2                       ; 0059ead4
        ;   XREF to: 0059eae2 (CONDITIONAL_JUMP)  ; LAB_0059eae2
    SUB EAX,dword ptr [EBP + 0x608]     ; 0059ead6
    CMP EBX,EAX                         ; 0059eadc
    JLE 0x0059eae2                      ; 0059eade
        ;   XREF to: 0059eae2 (CONDITIONAL_JUMP)  ; LAB_0059eae2
    MOV EBX,EAX                         ; 0059eae0
    TEST EBX,EBX                        ; 0059eae2
        ;   Label: LAB_0059eae2
    JLE 0x0059eb28                      ; 0059eae4
        ;   XREF to: 0059eb28 (CONDITIONAL_JUMP)  ; LAB_0059eb28
    MOV ECX,dword ptr [ESP + 0x9e8]     ; 0059eae6
    PUSH EBX                            ; 0059eaed
    ADD ECX,dword ptr [EBP + 0xa10]     ; 0059eaee
    MOV EAX,dword ptr [EBP + 0xd24]     ; 0059eaf4
    PUSH ECX                            ; 0059eafa
    MOV EDX,dword ptr [EAX]             ; 0059eafb
    PUSH EAX                            ; 0059eafd
    CALL dword ptr [EDX + 0x8]          ; 0059eafe
    ADD ESP,0xc                         ; 0059eb01
    CMP EAX,EBX                         ; 0059eb04
    JNZ 0x0059eb8d                      ; 0059eb06
        ;   XREF to: 0059eb8d (CONDITIONAL_JUMP)  ; LAB_0059eb8d
    MOV EDX,dword ptr [EBP + 0x608]     ; 0059eb0c
    MOV EAX,dword ptr [EBP + 0xa10]     ; 0059eb12
    ADD EDX,EBX                         ; 0059eb18
    ADD EAX,EBX                         ; 0059eb1a
    MOV dword ptr [EBP + 0x608],EDX     ; 0059eb1c
    MOV dword ptr [EBP + 0xa10],EAX     ; 0059eb22
    MOV ECX,dword ptr [EBP + 0x60c]     ; 0059eb28
        ;   Label: LAB_0059eb28
    TEST ECX,ECX                        ; 0059eb2e
    JL 0x0059eb3a                       ; 0059eb30
        ;   XREF to: 0059eb3a (CONDITIONAL_JUMP)  ; LAB_0059eb3a
    CMP ECX,dword ptr [EBP + 0x608]     ; 0059eb32
    JLE 0x0059ebab                      ; 0059eb38
        ;   XREF to: 0059ebab (CONDITIONAL_JUMP)  ; LAB_0059ebab
    CMP dword ptr [EBP + 0x60c],0x0     ; 0059eb3a
        ;   Label: LAB_0059eb3a
    SETL AL                             ; 0059eb41
    AND EAX,0xff                        ; 0059eb44
    PUSH EAX                            ; 0059eb49
    PUSH EBP                            ; 0059eb4a
    CALL support_trisock.cpp_FUN_0059ed90 ; 0059eb4b
        ;   XREF to: 0059ed90 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059ed90()
    ADD ESP,0x8                         ; 0059eb50
    MOV EBX,EAX                         ; 0059eb53
    CMP EAX,-0x2                        ; 0059eb55
    JZ 0x0059ebab                       ; 0059eb58
        ;   XREF to: 0059ebab (CONDITIONAL_JUMP)  ; LAB_0059ebab
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0059eb5a
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EDX,EAX                         ; 0059eb5f
    SUB EDX,EDI                         ; 0059eb61
    MOV EDI,EAX                         ; 0059eb63
    TEST EDX,EDX                        ; 0059eb65
    JLE 0x0059eb6b                      ; 0059eb67
        ;   XREF to: 0059eb6b (CONDITIONAL_JUMP)  ; LAB_0059eb6b
    ADD ESI,EDX                         ; 0059eb69
    CMP ESI,0x1cccc                     ; 0059eb6b
        ;   Label: LAB_0059eb6b
    JG 0x0059e43b                       ; 0059eb71
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    TEST EBX,EBX                        ; 0059eb77
    JGE 0x0059eab8                      ; 0059eb79
        ;   XREF to: 0059eab8 (CONDITIONAL_JUMP)  ; LAB_0059eab8
    CMP EBX,-0x4                        ; 0059eb7f
    JNZ 0x0059e43b                      ; 0059eb82
        ;   XREF to: 0059e43b (CONDITIONAL_JUMP)  ; default
    JMP 0x0059eab8                      ; 0059eb88
        ;   XREF to: 0059eab8 (UNCONDITIONAL_JUMP)  ; LAB_0059eab8
    LEA EAX,[EBP + 0xd2c]               ; 0059eb8d
        ;   Label: LAB_0059eb8d
    PUSH EAX                            ; 0059eb93
    MOV dword ptr [EBP + 0xd28],0xfffffffa ; 0059eb94
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059eb9e
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059eba3
    JMP 0x0059e43b                      ; 0059eba6
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xd2c]               ; 0059ebab
        ;   Label: LAB_0059ebab
    PUSH EAX                            ; 0059ebb1
    MOV dword ptr [EBP + 0xd28],0x5     ; 0059ebb2
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059ebbc
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059ebc1
    JMP 0x0059e43b                      ; 0059ebc4
        ;   XREF to: 0059e43b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0xa08]     ; 0059ebc9
        ;   Label: caseD_0
    MOV byte ptr [EAX],0x0              ; 0059ebd0
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ebd3
    ADD ESP,0x9f0                       ; 0059ebd9
    POP EBP                             ; 0059ebdf
    POP EDI                             ; 0059ebe0
    POP ESI                             ; 0059ebe1
    POP EBX                             ; 0059ebe2
    RET                                 ; 0059ebe3
    LEA EAX,[EBP + 0x400]               ; 0059ebe4
        ;   Label: caseD_1
    PUSH EAX                            ; 0059ebea
    PUSH 0x5f87d6                       ; 0059ebeb | = "Looking up %s..."
    MOV EDX,dword ptr [ESP + 0xa10]     ; 0059ebf0
    PUSH EDX                            ; 0059ebf7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ebf8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059ebfd
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ec00
    ADD ESP,0x9f0                       ; 0059ec06
    POP EBP                             ; 0059ec0c
    POP EDI                             ; 0059ec0d
    POP ESI                             ; 0059ec0e
    POP EBX                             ; 0059ec0f
    RET                                 ; 0059ec10
    LEA EAX,[ESP + 0x9b8]               ; 0059ec11
        ;   Label: caseD_2
    PUSH EAX                            ; 0059ec18
    LEA EAX,[EBP + 0x600]               ; 0059ec19
    PUSH EAX                            ; 0059ec1f
    CALL support_trisock.cpp_formatSocketAddress_FUN_0059c830 ; 0059ec20
        ;   XREF to: 0059c830 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatSocketAddress_FUN_0059c830(SNetworkAddr * network_addr, char * output_buffer)
    ADD ESP,0x8                         ; 0059ec25
    LEA EAX,[ESP + 0x9b8]               ; 0059ec28
    PUSH EAX                            ; 0059ec2f
    PUSH 0x5f87e7                       ; 0059ec30 | = "Contacting %s..."
    MOV EAX,dword ptr [ESP + 0xa10]     ; 0059ec35
    PUSH EAX                            ; 0059ec3c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ec3d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059ec42
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ec45
    ADD ESP,0x9f0                       ; 0059ec4b
    POP EBP                             ; 0059ec51
    POP EDI                             ; 0059ec52
    POP ESI                             ; 0059ec53
    POP EBX                             ; 0059ec54
    RET                                 ; 0059ec55
    LEA EAX,[EBP + 0x500]               ; 0059ec56
        ;   Label: caseD_3
    PUSH EAX                            ; 0059ec5c
    PUSH 0x5f87f8                       ; 0059ec5d | = "Requesting %s..."
    MOV EDI,dword ptr [ESP + 0xa10]     ; 0059ec62
    PUSH EDI                            ; 0059ec69
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ec6a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059ec6f
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ec72
    ADD ESP,0x9f0                       ; 0059ec78
    POP EBP                             ; 0059ec7e
    POP EDI                             ; 0059ec7f
    POP ESI                             ; 0059ec80
    POP EBX                             ; 0059ec81
    RET                                 ; 0059ec82
    MOV EDI,dword ptr [EBP + 0x60c]     ; 0059ec83
        ;   Label: caseD_4
    MOV EAX,0xffffffff                  ; 0059ec89
    TEST EDI,EDI                        ; 0059ec8e
    JLE 0x0059ecb0                      ; 0059ec90
        ;   XREF to: 0059ecb0 (CONDITIONAL_JUMP)  ; LAB_0059ecb0
    MOV EDX,dword ptr [EBP + 0x608]     ; 0059ec92
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059ec98
    SUB EAX,EDX                         ; 0059ec9f
    SHL EAX,0x3                         ; 0059eca1
    ADD EDX,EAX                         ; 0059eca4
    SHL EDX,0x2                         ; 0059eca6
    MOV EAX,EDX                         ; 0059eca9
    SAR EDX,0x1f                        ; 0059ecab
    IDIV EDI                            ; 0059ecae
    TEST EAX,EAX                        ; 0059ecb0
        ;   Label: LAB_0059ecb0
    JLE 0x0059ece7                      ; 0059ecb2
        ;   XREF to: 0059ece7 (CONDITIONAL_JUMP)  ; LAB_0059ece7
    CMP EAX,0x64                        ; 0059ecb4
    JGE 0x0059ece7                      ; 0059ecb7
        ;   XREF to: 0059ece7 (CONDITIONAL_JUMP)  ; LAB_0059ece7
    LEA EDX,[EBP + 0x500]               ; 0059ecb9
    PUSH EDX                            ; 0059ecbf
    PUSH EAX                            ; 0059ecc0
    PUSH 0x5f8809                       ; 0059ecc1 | = "Received %d%% of %s... "
    MOV ESI,dword ptr [ESP + 0xa14]     ; 0059ecc6
    PUSH ESI                            ; 0059eccd
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ecce
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0059ecd3
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ecd6
    ADD ESP,0x9f0                       ; 0059ecdc
    POP EBP                             ; 0059ece2
    POP EDI                             ; 0059ece3
    POP ESI                             ; 0059ece4
    POP EBX                             ; 0059ece5
    RET                                 ; 0059ece6
    LEA EAX,[EBP + 0x500]               ; 0059ece7
        ;   Label: LAB_0059ece7
    PUSH EAX                            ; 0059eced
    PUSH 0x5f8821                       ; 0059ecee | = "Receiving %s..."
    MOV EBX,dword ptr [ESP + 0xa10]     ; 0059ecf3
    PUSH EBX                            ; 0059ecfa
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0059ecfb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0059ed00
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0059ed03
    ADD ESP,0x9f0                       ; 0059ed09
    POP EBP                             ; 0059ed0f
    POP EDI                             ; 0059ed10
    POP ESI                             ; 0059ed11
    POP EBX                             ; 0059ed12
    RET                                 ; 0059ed13
    MOV ESI,0x5f8831                    ; 0059ed14 | DAT_005f8831
        ;   Label: caseD_5
    JMP 0x0059e465                      ; 0059ed19
        ;   XREF to: 0059e465 (UNCONDITIONAL_JUMP)  ; LAB_0059e465

