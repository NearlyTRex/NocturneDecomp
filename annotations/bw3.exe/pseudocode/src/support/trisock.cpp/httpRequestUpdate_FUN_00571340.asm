; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_httpRequestUpdate_FUN_00571340(void *request,char *status_text)
;
; Parameters:
; void *           Stack[0x4]:4   request
; char *           Stack[0x8]:4   status_text
;
; Referenced Globals:
;   undefined1* switchdataD_00571308 = 00571440
;   undefined1* PTR_caseD_fffffffb_00571310 = 00571440
;   undefined1* PTR_caseD_fffffffb_00571314 = 00571440
;   undefined1* PTR_caseD_2_00571324 = 00571c01
;   TerminatedCString s_Error_connecting_socket_005d6bb5
;   TerminatedCString s_DNS_error_resolving_s_005d6bd3
;   TerminatedCString s_Error_contacting_s_005d6bea
;   TerminatedCString s_cgi_005d6bfe
;   TerminatedCString s_asp_005d6c03
;   TerminatedCString s_Cache_Control_no_cache_005d6c08
;   undefined4 s_Cache_Control_no_cache_005d6c08+1
;   undefined4 s_Cache_Control_no_cache_005d6c08+2
;   undefined4 s_Cache_Control_no_cache_005d6c08+3
;   TerminatedCString s_POST_s_HTTP_1_0_Host_s_d_005d6c22
;   TerminatedCString s_GET_s_HTTP_1_0_Host_s_d_005d6c5a
;   ... and 25 more
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c__strnicmp_FUN_005a3f90
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   support_trisock.cpp_CSocket_bindSocket_FUN_0056f970
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;   support_trisock.cpp_CSocket_connectSocket_FUN_0056f9c0
;   support_trisock.cpp_CSocket_createSocket_FUN_0056f900
;   support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960
;   support_trisock.cpp_CSocket_pollSocketStatus_FUN_0056fa20
;   support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60
;   support_trisock.cpp_dnsRequestGetResult_FUN_00570e20
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571340
        ;   Label: support_trisock.cpp_httpRequestUpdate_FUN_00571340
    PUSH ESI                            ; 00571341
    PUSH EDI                            ; 00571342
    PUSH EBP                            ; 00571343
    SUB ESP,0x9f0                       ; 00571344
    MOV EBP,dword ptr [ESP + 0xa04]     ; 0057134a
    MOV EDX,dword ptr [EBP + 0xd28]     ; 00571351
    LEA EAX,[EDX + -0x1]                ; 00571357
    CMP EAX,0x3                         ; 0057135a
    JA 0x0057142b                       ; 0057135d
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5712f8]  ; 00571363 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x5e5a10                       ; 0057136a | g_IpAddrTypeInfo
        ;   Label: caseD_1
    PUSH 0xc                            ; 0057136f
    LEA EAX,[ESP + 0x690]               ; 00571371
    PUSH EAX                            ; 00571378
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00571379
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057137e
    LEA EAX,[ESP + 0x400]               ; 00571381
    PUSH EAX                            ; 00571388
    LEA EAX,[EBP + 0xd30]               ; 00571389
    PUSH EAX                            ; 0057138f
    CALL support_trisock.cpp_dnsRequestGetResult_FUN_00570e20 ; 00571390
        ;   XREF to: 00570e20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_dnsRequestGetResult_FUN_00570e20(void * request, void * host_info_out)
    LEA EDI,[EBP + 0x400]               ; 00571395
    ADD ESP,0x8                         ; 0057139b
    CMP EAX,0x2                         ; 0057139e
    JNZ 0x005714b1                      ; 005713a1
        ;   XREF to: 005714b1 (CONDITIONAL_JUMP)  ; LAB_005714b1
    CMP byte ptr [ESP + 0x400],0x0      ; 005713a7
    JZ 0x005713d2                       ; 005713af
        ;   XREF to: 005713d2 (CONDITIONAL_JUMP)  ; LAB_005713d2
    LEA ESI,[ESP + 0x400]               ; 005713b1
    PUSH EDI                            ; 005713b8
    MOV AL,byte ptr [ESI]               ; 005713b9
        ;   Label: LAB_005713b9
    MOV byte ptr [EDI],AL               ; 005713bb
    CMP AL,0x0                          ; 005713bd
    JZ 0x005713d1                       ; 005713bf
        ;   XREF to: 005713d1 (CONDITIONAL_JUMP)  ; LAB_005713d1
    MOV AL,byte ptr [ESI + 0x1]         ; 005713c1
    ADD ESI,0x2                         ; 005713c4
    MOV byte ptr [EDI + 0x1],AL         ; 005713c7
    ADD EDI,0x2                         ; 005713ca
    CMP AL,0x0                          ; 005713cd
    JNZ 0x005713b9                      ; 005713cf
        ;   XREF to: 005713b9 (CONDITIONAL_JUMP)  ; LAB_005713b9
    POP EDI                             ; 005713d1
        ;   Label: LAB_005713d1
    MOV EAX,dword ptr [ESP + 0x688]     ; 005713d2
        ;   Label: LAB_005713d2
    LEA EBX,[EBP + 0xd2c]               ; 005713d9
    MOV dword ptr [EBP + 0xd28],0x2     ; 005713df
    PUSH EBX                            ; 005713e9
    MOV dword ptr [EBP + 0x600],EAX     ; 005713ea
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 005713f0
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 005713f5
    PUSH EBX                            ; 005713f8
    CALL support_trisock.cpp_CSocket_createSocket_FUN_0056f900 ; 005713f9
        ;   XREF to: 0056f900 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createSocket_FUN_0056f900(CSocket * this_ptr)
    ADD ESP,0x4                         ; 005713fe
    PUSH 0x0                            ; 00571401
    PUSH EBX                            ; 00571403
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60 ; 00571404
        ;   XREF to: 0056fd60 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 00571409
    PUSH 0x0                            ; 0057140c
    PUSH EBX                            ; 0057140e
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_0056f970 ; 0057140f
        ;   XREF to: 0056f970 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_0056f970(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 00571414
    LEA EAX,[EBP + 0x600]               ; 00571417
    PUSH EAX                            ; 0057141d
    PUSH EBX                            ; 0057141e
    CALL support_trisock.cpp_CSocket_connectSocket_FUN_0056f9c0 ; 0057141f
        ;   XREF to: 0056f9c0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_connectSocket_FUN_0056f9c0(CSocket * this_ptr, SNetworkAddr * dest_addr)
    ADD ESP,0x8                         ; 00571424
    TEST EAX,EAX                        ; 00571427
    JZ 0x00571487                       ; 00571429
        ;   XREF to: 00571487 (CONDITIONAL_JUMP)  ; LAB_00571487
    MOV EAX,dword ptr [EBP + 0xd28]     ; 0057142b
        ;   Label: default
    ADD EAX,0x5                         ; 00571431
    CMP EAX,0xa                         ; 00571434
    JA 0x00571440                       ; 00571437
        ;   XREF to: 00571440 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x571308]  ; 00571439 | caseD_ffffffff | caseD_0 | caseD_1
        ;   Label: switchD
    LEA EAX,[EBP + 0xd2c]               ; 00571440
        ;   Label: caseD_fffffffb
    PUSH EAX                            ; 00571446
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 00571447
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057144c
    LEA ESI,[EBP + 0xa18]               ; 0057144f
    MOV EDI,dword ptr [ESP + 0xa08]     ; 00571455
        ;   Label: LAB_00571455
    PUSH EDI                            ; 0057145c
    MOV AL,byte ptr [ESI]               ; 0057145d | = "Done" | s_ne_005d6da0+2
        ;   Label: LAB_0057145d
    MOV byte ptr [EDI],AL               ; 0057145f
    CMP AL,0x0                          ; 00571461
    JZ 0x00571475                       ; 00571463
        ;   XREF to: 00571475 (CONDITIONAL_JUMP)  ; LAB_00571475
    MOV AL,byte ptr [ESI + 0x1]         ; 00571465 | s_one_005d6da0+1 | s_e_005d6da0+3
    ADD ESI,0x2                         ; 00571468
    MOV byte ptr [EDI + 0x1],AL         ; 0057146b
    ADD EDI,0x2                         ; 0057146e
    CMP AL,0x0                          ; 00571471
    JNZ 0x0057145d                      ; 00571473
        ;   XREF to: 0057145d (CONDITIONAL_JUMP)  ; LAB_0057145d
    POP EDI                             ; 00571475
        ;   Label: LAB_00571475
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571476
    ADD ESP,0x9f0                       ; 0057147c
    POP EBP                             ; 00571482
    POP EDI                             ; 00571483
    POP ESI                             ; 00571484
    POP EBX                             ; 00571485
    RET                                 ; 00571486
    LEA EAX,[EBP + 0x400]               ; 00571487
        ;   Label: LAB_00571487
    PUSH EAX                            ; 0057148d
    PUSH 0x5d6bb5                       ; 0057148e | = "Error connecting socket to %s"
    LEA EAX,[EBP + 0xa18]               ; 00571493
    PUSH EAX                            ; 00571499
    MOV dword ptr [EBP + 0xd28],0xfffffffd ; 0057149a
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005714a4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005714a9
    JMP 0x0057142b                      ; 005714ac
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,0x1                         ; 005714b1
        ;   Label: LAB_005714b1
    JZ 0x0057142b                       ; 005714b4
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    PUSH EDI                            ; 005714ba
    PUSH 0x5d6bd3                       ; 005714bb | = "DNS error resolving %s"
    LEA EAX,[EBP + 0xa18]               ; 005714c0
    PUSH EAX                            ; 005714c6
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005714c7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005714cc
    MOV dword ptr [EBP + 0xd28],0xfffffffe ; 005714cf
    JMP 0x0057142b                      ; 005714d9
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    LEA ESI,[EBP + 0xd2c]               ; 005714de
        ;   Label: caseD_2
    PUSH ESI                            ; 005714e4
    MOV EBX,0x4                         ; 005714e5
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960 ; 005714ea
        ;   XREF to: 0056f960 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960(CSocket * this_ptr)
    ADD ESP,0x4                         ; 005714ef
    TEST EAX,EAX                        ; 005714f2
    JZ 0x00571501                       ; 005714f4
        ;   XREF to: 00571501 (CONDITIONAL_JUMP)  ; LAB_00571501
    PUSH ESI                            ; 005714f6
    CALL support_trisock.cpp_CSocket_pollSocketStatus_FUN_0056fa20 ; 005714f7
        ;   XREF to: 0056fa20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_pollSocketStatus_FUN_0056fa20(CSocket * this_ptr)
    ADD ESP,0x4                         ; 005714fc
    MOV EBX,EAX                         ; 005714ff
    TEST BL,0x4                         ; 00571501
        ;   Label: LAB_00571501
    JNZ 0x0057169d                      ; 00571504
        ;   XREF to: 0057169d (CONDITIONAL_JUMP)  ; LAB_0057169d
    TEST BL,0x2                         ; 0057150a
    JZ 0x0057142b                       ; 0057150d
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0xd18],0x0     ; 00571513
    MOV EDI,dword ptr [EBP + 0xd20]     ; 0057151d
    MOV dword ptr [EBP + 0xd28],0x3     ; 00571523
    TEST EDI,EDI                        ; 0057152d
    JZ 0x00571592                       ; 0057152f
        ;   XREF to: 00571592 (CONDITIONAL_JUMP)  ; LAB_00571592
    PUSH EDI                            ; 00571531
    MOV EDX,dword ptr [EDI]             ; 00571532
    CALL dword ptr [EDX + 0x18]         ; 00571534
    MOV EBX,EAX                         ; 00571537
    ADD ESP,0x4                         ; 00571539
    TEST EAX,EAX                        ; 0057153c
    JL 0x00571592                       ; 0057153e
        ;   XREF to: 00571592 (CONDITIONAL_JUMP)  ; LAB_00571592
    PUSH 0x2                            ; 00571540
    MOV EAX,dword ptr [EBP + 0xd20]     ; 00571542
    PUSH 0x0                            ; 00571548
    MOV EDX,dword ptr [EAX]             ; 0057154a
    PUSH EAX                            ; 0057154c
    CALL dword ptr [EDX + 0x14]         ; 0057154d
    ADD ESP,0xc                         ; 00571550
    MOV EAX,dword ptr [EBP + 0xd20]     ; 00571553
    PUSH EAX                            ; 00571559
    MOV EDX,dword ptr [EAX]             ; 0057155a
    CALL dword ptr [EDX + 0x18]         ; 0057155c
    ADD ESP,0x4                         ; 0057155f
    MOV dword ptr [EBP + 0xd18],EAX     ; 00571562
    PUSH 0x0                            ; 00571568
    MOV EAX,dword ptr [EBP + 0xd20]     ; 0057156a
    PUSH EBX                            ; 00571570
    MOV EDX,dword ptr [EAX]             ; 00571571
    PUSH EAX                            ; 00571573
    CALL dword ptr [EDX + 0x14]         ; 00571574
    MOV EAX,dword ptr [EBP + 0xd18]     ; 00571577
    ADD ESP,0xc                         ; 0057157d
    TEST EAX,EAX                        ; 00571580
    JL 0x005716c7                       ; 00571582
        ;   XREF to: 005716c7 (CONDITIONAL_JUMP)  ; LAB_005716c7
    MOV EDX,EAX                         ; 00571588
    SUB EDX,EBX                         ; 0057158a
    MOV dword ptr [EBP + 0xd18],EDX     ; 0057158c
    LEA EAX,[ESP + 0x6b8]               ; 00571592
        ;   Label: LAB_00571592
    PUSH EAX                            ; 00571599
    PUSH 0x0                            ; 0057159a
    PUSH 0x0                            ; 0057159c
    MOV ECX,0x40                        ; 0057159e
    LEA EDI,[ESP + 0x7c4]               ; 005715a3
    PUSH 0x0                            ; 005715aa
    LEA EAX,[EBP + 0x500]               ; 005715ac
    MOV ESI,0x606980                    ; 005715b2 | DAT_00606980
    PUSH EAX                            ; 005715b7
    MOVSD.REP ES:EDI,ESI                ; 005715b8 | DAT_00606980 | DAT_00606984
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 005715ba
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005715bf
    PUSH 0x5d6bfe                       ; 005715c2 | = ".cgi"
    LEA EAX,[ESP + 0x6bc]               ; 005715c7
    PUSH EAX                            ; 005715ce
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005715cf
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005715d4
    TEST EAX,EAX                        ; 005715d7
    JNZ 0x005716d6                      ; 005715d9
        ;   XREF to: 005716d6 (CONDITIONAL_JUMP)  ; LAB_005716d6
    MOV ESI,0x5d6c08                    ; 005715df | = "Cache-Control: no-cache\r\n"
        ;   Label: LAB_005715df
    LEA EDI,[ESP + 0x7b8]               ; 005715e4
    PUSH EDI                            ; 005715eb
    MOV AL,byte ptr [ESI]               ; 005715ec | = "Cache-Control: no-cache\r\n" | s_Cache_Control_no_cache_005d6c08+2
        ;   Label: LAB_005715ec
    MOV byte ptr [EDI],AL               ; 005715ee
    CMP AL,0x0                          ; 005715f0
    JZ 0x00571604                       ; 005715f2
        ;   XREF to: 00571604 (CONDITIONAL_JUMP)  ; LAB_00571604
    MOV AL,byte ptr [ESI + 0x1]         ; 005715f4 | s_Cache_Control_no_cache_005d6c08+1 | s_Cache_Control_no_cache_005d6c08+3
    ADD ESI,0x2                         ; 005715f7
    MOV byte ptr [EDI + 0x1],AL         ; 005715fa
    ADD EDI,0x2                         ; 005715fd
    CMP AL,0x0                          ; 00571600
    JNZ 0x005715ec                      ; 00571602
        ;   XREF to: 005715ec (CONDITIONAL_JUMP)  ; LAB_005715ec
    POP EDI                             ; 00571604
        ;   Label: LAB_00571604
    LEA EDX,[EBP + 0x500]               ; 00571605
        ;   Label: LAB_00571605
    MOV ECX,dword ptr [EBP + 0xd18]     ; 0057160b
    LEA EAX,[EBP + 0x400]               ; 00571611
    TEST ECX,ECX                        ; 00571617
    JLE 0x005716f8                      ; 00571619
        ;   XREF to: 005716f8 (CONDITIONAL_JUMP)  ; LAB_005716f8
    PUSH ECX                            ; 0057161f
    LEA ECX,[ESP + 0x7bc]               ; 00571620
    PUSH ECX                            ; 00571627
    XOR ECX,ECX                         ; 00571628
    MOV CX,word ptr [EBP + 0x604]       ; 0057162a
    PUSH ECX                            ; 00571631
    PUSH EAX                            ; 00571632
    PUSH EDX                            ; 00571633
    PUSH 0x5d6c22                       ; 00571634 | = "POST %s HTTP/1.0\r\nHost: %s:%d\r\n%s..."
    LEA EAX,[ESP + 0x18]                ; 00571639
    PUSH EAX                            ; 0057163d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0057163e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 00571643
    PUSH 0x0                            ; 00571646
        ;   Label: LAB_00571646
    LEA EDI,[ESP + 0x4]                 ; 00571648
    SUB ECX,ECX                         ; 0057164c
    DEC ECX                             ; 0057164e
    XOR EAX,EAX                         ; 0057164f
    SCASB.REPNE ES:EDI                  ; 00571651
    NOT ECX                             ; 00571653
    DEC ECX                             ; 00571655
    PUSH ECX                            ; 00571656
    LEA EAX,[ESP + 0x8]                 ; 00571657
    PUSH EAX                            ; 0057165b
    LEA EAX,[EBP + 0xd2c]               ; 0057165c
    PUSH EAX                            ; 00571662
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0 ; 00571663
        ;   XREF to: 0056fbb0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 00571668
    TEST EAX,EAX                        ; 0057166b
    JNZ 0x0057142b                      ; 0057166d
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0x500]               ; 00571673
    PUSH EAX                            ; 00571679
    PUSH 0x5d6c90                       ; 0057167a | = "Error requesting %s"
    LEA EAX,[EBP + 0xa18]               ; 0057167f
    PUSH EAX                            ; 00571685
    MOV dword ptr [EBP + 0xd28],0xfffffffc ; 00571686
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571690
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571695
    JMP 0x0057142b                      ; 00571698
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0x400]               ; 0057169d
        ;   Label: LAB_0057169d
    PUSH EAX                            ; 005716a3
    PUSH 0x5d6bea                       ; 005716a4 | = "Error contacting %s"
    LEA EAX,[EBP + 0xa18]               ; 005716a9
    PUSH EAX                            ; 005716af
    MOV dword ptr [EBP + 0xd28],0xfffffffd ; 005716b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005716ba
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005716bf
    JMP 0x0057142b                      ; 005716c2
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0xd18],0x0     ; 005716c7
        ;   Label: LAB_005716c7
    JMP 0x00571592                      ; 005716d1
        ;   XREF to: 00571592 (UNCONDITIONAL_JUMP)  ; LAB_00571592
    PUSH 0x5d6c03                       ; 005716d6 | = ".asp"
        ;   Label: LAB_005716d6
    LEA EAX,[ESP + 0x6bc]               ; 005716db
    PUSH EAX                            ; 005716e2
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005716e3
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005716e8
    TEST EAX,EAX                        ; 005716eb
    JZ 0x005715df                       ; 005716ed
        ;   XREF to: 005715df (CONDITIONAL_JUMP)  ; LAB_005715df
    JMP 0x00571605                      ; 005716f3
        ;   XREF to: 00571605 (UNCONDITIONAL_JUMP)  ; LAB_00571605
    LEA ECX,[ESP + 0x7b8]               ; 005716f8
        ;   Label: LAB_005716f8
    PUSH ECX                            ; 005716ff
    XOR ECX,ECX                         ; 00571700
    MOV CX,word ptr [EBP + 0x604]       ; 00571702
    PUSH ECX                            ; 00571709
    PUSH EAX                            ; 0057170a
    PUSH EDX                            ; 0057170b
    PUSH 0x5d6c5a                       ; 0057170c | = "GET %s HTTP/1.0\r\nHost: %s:%d\r\n%sC..."
    LEA EAX,[ESP + 0x14]                ; 00571711
    PUSH EAX                            ; 00571715
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571716
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0057171b
    JMP 0x00571646                      ; 0057171e
        ;   XREF to: 00571646 (UNCONDITIONAL_JUMP)  ; LAB_00571646
    LEA ESI,[EBP + 0xd2c]               ; 00571723
        ;   Label: caseD_3
    PUSH ESI                            ; 00571729
    MOV EBX,0x4                         ; 0057172a
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960 ; 0057172f
        ;   XREF to: 0056f960 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00571734
    TEST EAX,EAX                        ; 00571737
    JZ 0x00571746                       ; 00571739
        ;   XREF to: 00571746 (CONDITIONAL_JUMP)  ; LAB_00571746
    PUSH ESI                            ; 0057173b
    CALL support_trisock.cpp_CSocket_pollSocketStatus_FUN_0056fa20 ; 0057173c
        ;   XREF to: 0056fa20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_pollSocketStatus_FUN_0056fa20(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00571741
    MOV EBX,EAX                         ; 00571744
    TEST BL,0x4                         ; 00571746
        ;   Label: LAB_00571746
    JNZ 0x005717dd                      ; 00571749
        ;   XREF to: 005717dd (CONDITIONAL_JUMP)  ; LAB_005717dd
    MOV EDX,dword ptr [EBP + 0xd18]     ; 0057174f
    TEST EDX,EDX                        ; 00571755
    JLE 0x0057180e                      ; 00571757
        ;   XREF to: 0057180e (CONDITIONAL_JUMP)  ; LAB_0057180e
    TEST BL,0x2                         ; 0057175d
    JZ 0x0057142b                       ; 00571760
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    MOV EBX,0x200                       ; 00571766
    CMP EDX,EBX                         ; 0057176b
    JGE 0x00571771                      ; 0057176d
        ;   XREF to: 00571771 (CONDITIONAL_JUMP)  ; LAB_00571771
    MOV EBX,EDX                         ; 0057176f
    PUSH EBX                            ; 00571771
        ;   Label: LAB_00571771
    LEA ESI,[EBP + 0x610]               ; 00571772
    MOV EAX,dword ptr [EBP + 0xd20]     ; 00571778
    PUSH ESI                            ; 0057177e
    MOV EDX,dword ptr [EAX]             ; 0057177f
    PUSH EAX                            ; 00571781
    CALL dword ptr [EDX + 0x10]         ; 00571782
    ADD ESP,0xc                         ; 00571785
    MOV EDI,EAX                         ; 00571788
    CMP EAX,EBX                         ; 0057178a
    JNZ 0x005717ab                      ; 0057178c
        ;   XREF to: 005717ab (CONDITIONAL_JUMP)  ; LAB_005717ab
    PUSH 0x0                            ; 0057178e
    PUSH EBX                            ; 00571790
    PUSH ESI                            ; 00571791
    LEA EAX,[EBP + 0xd2c]               ; 00571792
    PUSH EAX                            ; 00571798
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0 ; 00571799
        ;   XREF to: 0056fbb0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0057179e
    TEST EAX,EAX                        ; 005717a1
    JZ 0x00571807                       ; 005717a3
        ;   XREF to: 00571807 (CONDITIONAL_JUMP)  ; LAB_00571807
    SUB dword ptr [EBP + 0xd18],EBX     ; 005717a5
    CMP EDI,EBX                         ; 005717ab
        ;   Label: LAB_005717ab
    JZ 0x0057142b                       ; 005717ad
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0x400]               ; 005717b3
    PUSH EAX                            ; 005717b9
    PUSH 0x5d6cb8                       ; 005717ba | = "Error requesting %s"
    LEA EAX,[EBP + 0xa18]               ; 005717bf
    PUSH EAX                            ; 005717c5
    MOV dword ptr [EBP + 0xd28],0xfffffffc ; 005717c6
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005717d0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005717d5
    JMP 0x0057142b                      ; 005717d8
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0x400]               ; 005717dd
        ;   Label: LAB_005717dd
    PUSH EAX                            ; 005717e3
    PUSH 0x5d6ca4                       ; 005717e4 | = "Error requesting %s"
    LEA EAX,[EBP + 0xa18]               ; 005717e9
    PUSH EAX                            ; 005717ef
    MOV dword ptr [EBP + 0xd28],0xfffffffc ; 005717f0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005717fa
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005717ff
    JMP 0x0057142b                      ; 00571802
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    MOV EDI,0xffffffff                  ; 00571807
        ;   Label: LAB_00571807
    JMP 0x005717ab                      ; 0057180c
        ;   XREF to: 005717ab (UNCONDITIONAL_JUMP)  ; LAB_005717ab
    MOV byte ptr [EBP + 0x810],0x0      ; 0057180e
        ;   Label: LAB_0057180e
    MOV dword ptr [EBP + 0xd1c],0x0     ; 00571815
    MOV dword ptr [EBP + 0xd28],0x4     ; 0057181f
    JMP 0x0057142b                      ; 00571829
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    CMP EDX,0x4                         ; 0057182e
        ;   Label: caseD_4
    JNZ 0x0057142b                      ; 00571831
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xa18]               ; 00571837
    MOV dword ptr [ESP + 0x9e0],EAX     ; 0057183d
    LEA EAX,[EBP + 0x60c]               ; 00571844
    MOV dword ptr [ESP + 0x9dc],EAX     ; 0057184a
    LEA EAX,[EBP + 0x81f]               ; 00571851
    MOV dword ptr [ESP + 0x9e4],EAX     ; 00571857
    LEA EAX,[EBP + 0x810]               ; 0057185e
    MOV dword ptr [ESP + 0x9ec],EAX     ; 00571864
    CMP dword ptr [EBP + 0xd1c],0x2     ; 0057186b
        ;   Label: LAB_0057186b
    JGE 0x00571a92                      ; 00571872
        ;   XREF to: 00571a92 (CONDITIONAL_JUMP)  ; LAB_00571a92
    MOV EDI,dword ptr [ESP + 0x9ec]     ; 00571878
    SUB ECX,ECX                         ; 0057187f
    DEC ECX                             ; 00571881
    XOR EAX,EAX                         ; 00571882
    SCASB.REPNE ES:EDI                  ; 00571884
    NOT ECX                             ; 00571886
    DEC ECX                             ; 00571888
    MOV ESI,ECX                         ; 00571889
    LEA EBX,[ECX + EBP*0x1]             ; 0057188b
    PUSH 0x0                            ; 0057188e
        ;   Label: LAB_0057188e
    PUSH EBP                            ; 00571890
    MOV byte ptr [EBX + 0x810],0x0      ; 00571891
    CALL support_trisock.cpp_httpRequestGetByte_FUN_00571e50 ; 00571898
        ;   XREF to: 00571e50 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_httpRequestGetByte_FUN_00571e50(void * request, int non_blocking)
    ADD ESP,0x8                         ; 0057189d
    MOV EDX,EAX                         ; 005718a0
    TEST EAX,EAX                        ; 005718a2
    JL 0x0057142b                       ; 005718a4
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    CMP EAX,0xd                         ; 005718aa
    JZ 0x0057188e                       ; 005718ad
        ;   XREF to: 0057188e (CONDITIONAL_JUMP)  ; LAB_0057188e
    CMP EAX,0xa                         ; 005718af
    JNZ 0x00571972                      ; 005718b2
        ;   XREF to: 00571972 (CONDITIONAL_JUMP)  ; LAB_00571972
    TEST ESI,ESI                        ; 005718b8
    JL 0x0057142b                       ; 005718ba
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBP + 0xd1c]     ; 005718c0
    TEST ECX,ECX                        ; 005718c6
    JNZ 0x00571a09                      ; 005718c8
        ;   XREF to: 00571a09 (CONDITIONAL_JUMP)  ; LAB_00571a09
    MOV EDX,0xffffffff                  ; 005718ce
    MOV ESI,0x5d6ccc                    ; 005718d3 | = "Unknown error"
    LEA EDI,[ESP + 0x8b8]               ; 005718d8
    MOV dword ptr [ESP + 0x9d8],EDX     ; 005718df
    PUSH EDI                            ; 005718e6
    MOV AL,byte ptr [ESI]               ; 005718e7 | = "Unknown error" | s_known_error_005d6ccc+2
        ;   Label: LAB_005718e7
    MOV byte ptr [EDI],AL               ; 005718e9
    CMP AL,0x0                          ; 005718eb
    JZ 0x005718ff                       ; 005718ed
        ;   XREF to: 005718ff (CONDITIONAL_JUMP)  ; LAB_005718ff
    MOV AL,byte ptr [ESI + 0x1]         ; 005718ef | s_nknown_error_005d6ccc+1 | s_nown_error_005d6ccc+3
    ADD ESI,0x2                         ; 005718f2
    MOV byte ptr [EDI + 0x1],AL         ; 005718f5
    ADD EDI,0x2                         ; 005718f8
    CMP AL,0x0                          ; 005718fb
    JNZ 0x005718e7                      ; 005718fd
        ;   XREF to: 005718e7 (CONDITIONAL_JUMP)  ; LAB_005718e7
    POP EDI                             ; 005718ff
        ;   Label: LAB_005718ff
    LEA EAX,[ESP + 0x8b8]               ; 00571900
    PUSH EAX                            ; 00571907
    LEA EAX,[ESP + 0x9dc]               ; 00571908
    PUSH EAX                            ; 0057190f
    PUSH 0x5d6cda                       ; 00571910 | = "%*[^ ]%d %255[^\n]"
    MOV ECX,dword ptr [ESP + 0x9f8]     ; 00571915
    PUSH ECX                            ; 0057191c
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0057191d
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 00571922
    MOV EBX,dword ptr [ESP + 0x9d8]     ; 00571925
    CMP EBX,-0x1                        ; 0057192c
    JZ 0x0057198b                       ; 0057192f
        ;   XREF to: 0057198b (CONDITIONAL_JUMP)  ; LAB_0057198b
    CMP EBX,0x190                       ; 00571931
    JGE 0x005719af                      ; 00571937
        ;   XREF to: 005719af (CONDITIONAL_JUMP)  ; LAB_005719af
    CMP EBX,0x12c                       ; 00571939
    JGE 0x005719dc                      ; 0057193f
        ;   XREF to: 005719dc (CONDITIONAL_JUMP)  ; LAB_005719dc
    MOV dword ptr [EBP + 0x60c],0xffffffff ; 00571945
    MOV byte ptr [EBP + 0x810],0x0      ; 0057194f
    MOV dword ptr [EBP + 0xd1c],0x1     ; 00571956
    CMP dword ptr [EBP + 0xd28],0x4     ; 00571960
        ;   Label: LAB_00571960
    JZ 0x0057186b                       ; 00571967
        ;   XREF to: 0057186b (CONDITIONAL_JUMP)  ; LAB_0057186b
    JMP 0x0057142b                      ; 0057196d
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x1ff                       ; 00571972
        ;   Label: LAB_00571972
    JNC 0x0057188e                      ; 00571978
        ;   XREF to: 0057188e (CONDITIONAL_JUMP)  ; LAB_0057188e
    INC EBX                             ; 0057197e
    INC ESI                             ; 0057197f
    MOV byte ptr [EBX + 0x80f],AL       ; 00571980
    JMP 0x0057188e                      ; 00571986
        ;   XREF to: 0057188e (UNCONDITIONAL_JUMP)  ; LAB_0057188e
    PUSH 0x5d6cec                       ; 0057198b | = "Invalid HTTP header returned by server"
        ;   Label: LAB_0057198b
    MOV ESI,dword ptr [ESP + 0x9e4]     ; 00571990
    PUSH ESI                            ; 00571997
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571998
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0057199d
    MOV dword ptr [EBP + 0xd28],0xfffffffb ; 005719a0
    JMP 0x0057142b                      ; 005719aa
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x8b8]               ; 005719af
        ;   Label: LAB_005719af
    PUSH EAX                            ; 005719b6
    PUSH EBX                            ; 005719b7
    PUSH 0x5d6d13                       ; 005719b8 | = "%d: %s"
    MOV EBX,dword ptr [ESP + 0x9ec]     ; 005719bd
    PUSH EBX                            ; 005719c4
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005719c5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005719ca
    MOV dword ptr [EBP + 0xd28],0xfffffffb ; 005719cd
    JMP 0x0057142b                      ; 005719d7
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x8b8]               ; 005719dc
        ;   Label: LAB_005719dc
    PUSH EAX                            ; 005719e3
    PUSH EBX                            ; 005719e4
    PUSH 0x5d6d1a                       ; 005719e5 | = "Not implemented: %d: %s"
    MOV EDX,dword ptr [ESP + 0x9ec]     ; 005719ea
    PUSH EDX                            ; 005719f1
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005719f2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005719f7
    MOV dword ptr [EBP + 0xd28],0xfffffffb ; 005719fa
    JMP 0x0057142b                      ; 00571a04
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x1                         ; 00571a09
        ;   Label: LAB_00571a09
    JNZ 0x00571960                      ; 00571a0c
        ;   XREF to: 00571960 (CONDITIONAL_JUMP)  ; LAB_00571960
    CMP byte ptr [EBP + 0x810],0x0      ; 00571a12
    JNZ 0x00571a41                      ; 00571a19
        ;   XREF to: 00571a41 (CONDITIONAL_JUMP)  ; LAB_00571a41
    MOV dword ptr [EBP + 0xd1c],0x2     ; 00571a1b
    MOV dword ptr [EBP + 0x608],0x0     ; 00571a25
    CMP dword ptr [EBP + 0xd28],0x4     ; 00571a2f
    JZ 0x0057186b                       ; 00571a36
        ;   XREF to: 0057186b (CONDITIONAL_JUMP)  ; LAB_0057186b
    JMP 0x0057142b                      ; 00571a3c
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    PUSH 0xf                            ; 00571a41
        ;   Label: LAB_00571a41
    PUSH 0x5d6d32                       ; 00571a43 | = "Content-length:"
    MOV ESI,dword ptr [ESP + 0x9f4]     ; 00571a48
    PUSH ESI                            ; 00571a4f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00571a50
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00571a55
    TEST EAX,EAX                        ; 00571a58
    JNZ 0x00571a79                      ; 00571a5a
        ;   XREF to: 00571a79 (CONDITIONAL_JUMP)  ; LAB_00571a79
    MOV EDI,dword ptr [ESP + 0x9dc]     ; 00571a5c
    PUSH EDI                            ; 00571a63
    PUSH 0x5d6d42                       ; 00571a64 | = "%d"
    MOV EAX,dword ptr [ESP + 0x9ec]     ; 00571a69
    PUSH EAX                            ; 00571a70
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 00571a71
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0xc                         ; 00571a76
    MOV byte ptr [EBP + 0x810],0x0      ; 00571a79
        ;   Label: LAB_00571a79
    CMP dword ptr [EBP + 0xd28],0x4     ; 00571a80
    JZ 0x0057186b                       ; 00571a87
        ;   XREF to: 0057186b (CONDITIONAL_JUMP)  ; LAB_0057186b
    JMP 0x0057142b                      ; 00571a8d
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00571a92
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_00571a92
    MOV EDI,EAX                         ; 00571a97
    LEA EAX,[EBP + 0x610]               ; 00571a99
    XOR ESI,ESI                         ; 00571a9f
    MOV dword ptr [ESP + 0x9e8],EAX     ; 00571aa1
    MOV EDX,dword ptr [EBP + 0xa10]     ; 00571aa8
        ;   Label: LAB_00571aa8
    MOV EAX,dword ptr [EBP + 0xa14]     ; 00571aae
    CMP EAX,EDX                         ; 00571ab4
    JLE 0x00571b18                      ; 00571ab6
        ;   XREF to: 00571b18 (CONDITIONAL_JUMP)  ; LAB_00571b18
    MOV EBX,EAX                         ; 00571ab8
    MOV EAX,dword ptr [EBP + 0x60c]     ; 00571aba
    SUB EBX,EDX                         ; 00571ac0
    TEST EAX,EAX                        ; 00571ac2
    JL 0x00571ad2                       ; 00571ac4
        ;   XREF to: 00571ad2 (CONDITIONAL_JUMP)  ; LAB_00571ad2
    SUB EAX,dword ptr [EBP + 0x608]     ; 00571ac6
    CMP EBX,EAX                         ; 00571acc
    JLE 0x00571ad2                      ; 00571ace
        ;   XREF to: 00571ad2 (CONDITIONAL_JUMP)  ; LAB_00571ad2
    MOV EBX,EAX                         ; 00571ad0
    TEST EBX,EBX                        ; 00571ad2
        ;   Label: LAB_00571ad2
    JLE 0x00571b18                      ; 00571ad4
        ;   XREF to: 00571b18 (CONDITIONAL_JUMP)  ; LAB_00571b18
    MOV ECX,dword ptr [ESP + 0x9e8]     ; 00571ad6
    PUSH EBX                            ; 00571add
    ADD ECX,dword ptr [EBP + 0xa10]     ; 00571ade
    MOV EAX,dword ptr [EBP + 0xd24]     ; 00571ae4
    PUSH ECX                            ; 00571aea
    MOV EDX,dword ptr [EAX]             ; 00571aeb
    PUSH EAX                            ; 00571aed
    CALL dword ptr [EDX + 0x8]          ; 00571aee
    ADD ESP,0xc                         ; 00571af1
    CMP EAX,EBX                         ; 00571af4
    JNZ 0x00571b7d                      ; 00571af6
        ;   XREF to: 00571b7d (CONDITIONAL_JUMP)  ; LAB_00571b7d
    MOV EDX,dword ptr [EBP + 0x608]     ; 00571afc
    MOV EAX,dword ptr [EBP + 0xa10]     ; 00571b02
    ADD EDX,EBX                         ; 00571b08
    ADD EAX,EBX                         ; 00571b0a
    MOV dword ptr [EBP + 0x608],EDX     ; 00571b0c
    MOV dword ptr [EBP + 0xa10],EAX     ; 00571b12
    MOV ECX,dword ptr [EBP + 0x60c]     ; 00571b18
        ;   Label: LAB_00571b18
    TEST ECX,ECX                        ; 00571b1e
    JL 0x00571b2a                       ; 00571b20
        ;   XREF to: 00571b2a (CONDITIONAL_JUMP)  ; LAB_00571b2a
    CMP ECX,dword ptr [EBP + 0x608]     ; 00571b22
    JLE 0x00571b9b                      ; 00571b28
        ;   XREF to: 00571b9b (CONDITIONAL_JUMP)  ; LAB_00571b9b
    CMP dword ptr [EBP + 0x60c],0x0     ; 00571b2a
        ;   Label: LAB_00571b2a
    SETL AL                             ; 00571b31
    AND EAX,0xff                        ; 00571b34
    PUSH EAX                            ; 00571b39
    PUSH EBP                            ; 00571b3a
    CALL support_trisock.cpp_httpRequestFillBuffer_FUN_00571d80 ; 00571b3b
        ;   XREF to: 00571d80 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_httpRequestFillBuffer_FUN_00571d80(void * request, int non_blocking)
    ADD ESP,0x8                         ; 00571b40
    MOV EBX,EAX                         ; 00571b43
    CMP EAX,-0x2                        ; 00571b45
    JZ 0x00571b9b                       ; 00571b48
        ;   XREF to: 00571b9b (CONDITIONAL_JUMP)  ; LAB_00571b9b
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00571b4a
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 00571b4f
    SUB EDX,EDI                         ; 00571b51
    MOV EDI,EAX                         ; 00571b53
    TEST EDX,EDX                        ; 00571b55
    JLE 0x00571b5b                      ; 00571b57
        ;   XREF to: 00571b5b (CONDITIONAL_JUMP)  ; LAB_00571b5b
    ADD ESI,EDX                         ; 00571b59
    CMP ESI,0x1cccc                     ; 00571b5b
        ;   Label: LAB_00571b5b
    JG 0x0057142b                       ; 00571b61
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    TEST EBX,EBX                        ; 00571b67
    JGE 0x00571aa8                      ; 00571b69
        ;   XREF to: 00571aa8 (CONDITIONAL_JUMP)  ; LAB_00571aa8
    CMP EBX,-0x4                        ; 00571b6f
    JNZ 0x0057142b                      ; 00571b72
        ;   XREF to: 0057142b (CONDITIONAL_JUMP)  ; default
    JMP 0x00571aa8                      ; 00571b78
        ;   XREF to: 00571aa8 (UNCONDITIONAL_JUMP)  ; LAB_00571aa8
    LEA EAX,[EBP + 0xd2c]               ; 00571b7d
        ;   Label: LAB_00571b7d
    PUSH EAX                            ; 00571b83
    MOV dword ptr [EBP + 0xd28],0xfffffffa ; 00571b84
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 00571b8e
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00571b93
    JMP 0x0057142b                      ; 00571b96
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xd2c]               ; 00571b9b
        ;   Label: LAB_00571b9b
    PUSH EAX                            ; 00571ba1
    MOV dword ptr [EBP + 0xd28],0x5     ; 00571ba2
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 00571bac
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00571bb1
    JMP 0x0057142b                      ; 00571bb4
        ;   XREF to: 0057142b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0xa08]     ; 00571bb9
        ;   Label: caseD_0
    MOV byte ptr [EAX],0x0              ; 00571bc0
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571bc3
    ADD ESP,0x9f0                       ; 00571bc9
    POP EBP                             ; 00571bcf
    POP EDI                             ; 00571bd0
    POP ESI                             ; 00571bd1
    POP EBX                             ; 00571bd2
    RET                                 ; 00571bd3
    LEA EAX,[EBP + 0x400]               ; 00571bd4
        ;   Label: caseD_1
    PUSH EAX                            ; 00571bda
    PUSH 0x5d6d45                       ; 00571bdb | = "Looking up %s..."
    MOV EDX,dword ptr [ESP + 0xa10]     ; 00571be0
    PUSH EDX                            ; 00571be7
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571be8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571bed
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571bf0
    ADD ESP,0x9f0                       ; 00571bf6
    POP EBP                             ; 00571bfc
    POP EDI                             ; 00571bfd
    POP ESI                             ; 00571bfe
    POP EBX                             ; 00571bff
    RET                                 ; 00571c00
    LEA EAX,[ESP + 0x9b8]               ; 00571c01
        ;   Label: caseD_2
    PUSH EAX                            ; 00571c08
    LEA EAX,[EBP + 0x600]               ; 00571c09
    PUSH EAX                            ; 00571c0f
    CALL support_trisock.cpp_formatSocketAddress_FUN_0056f820 ; 00571c10
        ;   XREF to: 0056f820 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatSocketAddress_FUN_0056f820(SNetworkAddr * network_addr, char * output_buffer)
    ADD ESP,0x8                         ; 00571c15
    LEA EAX,[ESP + 0x9b8]               ; 00571c18
    PUSH EAX                            ; 00571c1f
    PUSH 0x5d6d56                       ; 00571c20 | = "Contacting %s..."
    MOV EAX,dword ptr [ESP + 0xa10]     ; 00571c25
    PUSH EAX                            ; 00571c2c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571c2d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571c32
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571c35
    ADD ESP,0x9f0                       ; 00571c3b
    POP EBP                             ; 00571c41
    POP EDI                             ; 00571c42
    POP ESI                             ; 00571c43
    POP EBX                             ; 00571c44
    RET                                 ; 00571c45
    LEA EAX,[EBP + 0x500]               ; 00571c46
        ;   Label: caseD_3
    PUSH EAX                            ; 00571c4c
    PUSH 0x5d6d67                       ; 00571c4d | = "Requesting %s..."
    MOV EDI,dword ptr [ESP + 0xa10]     ; 00571c52
    PUSH EDI                            ; 00571c59
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571c5a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571c5f
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571c62
    ADD ESP,0x9f0                       ; 00571c68
    POP EBP                             ; 00571c6e
    POP EDI                             ; 00571c6f
    POP ESI                             ; 00571c70
    POP EBX                             ; 00571c71
    RET                                 ; 00571c72
    MOV EDI,dword ptr [EBP + 0x60c]     ; 00571c73
        ;   Label: caseD_4
    MOV EAX,0xffffffff                  ; 00571c79
    TEST EDI,EDI                        ; 00571c7e
    JLE 0x00571ca0                      ; 00571c80
        ;   XREF to: 00571ca0 (CONDITIONAL_JUMP)  ; LAB_00571ca0
    MOV EDX,dword ptr [EBP + 0x608]     ; 00571c82
    LEA EAX,[EDX*0x4 + 0x0]             ; 00571c88
    SUB EAX,EDX                         ; 00571c8f
    SHL EAX,0x3                         ; 00571c91
    ADD EDX,EAX                         ; 00571c94
    SHL EDX,0x2                         ; 00571c96
    MOV EAX,EDX                         ; 00571c99
    SAR EDX,0x1f                        ; 00571c9b
    IDIV EDI                            ; 00571c9e
    TEST EAX,EAX                        ; 00571ca0
        ;   Label: LAB_00571ca0
    JLE 0x00571cd7                      ; 00571ca2
        ;   XREF to: 00571cd7 (CONDITIONAL_JUMP)  ; LAB_00571cd7
    CMP EAX,0x64                        ; 00571ca4
    JGE 0x00571cd7                      ; 00571ca7
        ;   XREF to: 00571cd7 (CONDITIONAL_JUMP)  ; LAB_00571cd7
    LEA EDX,[EBP + 0x500]               ; 00571ca9
    PUSH EDX                            ; 00571caf
    PUSH EAX                            ; 00571cb0
    PUSH 0x5d6d78                       ; 00571cb1 | = "Received %d%% of %s... "
    MOV ESI,dword ptr [ESP + 0xa14]     ; 00571cb6
    PUSH ESI                            ; 00571cbd
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571cbe
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00571cc3
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571cc6
    ADD ESP,0x9f0                       ; 00571ccc
    POP EBP                             ; 00571cd2
    POP EDI                             ; 00571cd3
    POP ESI                             ; 00571cd4
    POP EBX                             ; 00571cd5
    RET                                 ; 00571cd6
    LEA EAX,[EBP + 0x500]               ; 00571cd7
        ;   Label: LAB_00571cd7
    PUSH EAX                            ; 00571cdd
    PUSH 0x5d6d90                       ; 00571cde | = "Receiving %s..."
    MOV EBX,dword ptr [ESP + 0xa10]     ; 00571ce3
    PUSH EBX                            ; 00571cea
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00571ceb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00571cf0
    MOV EAX,dword ptr [EBP + 0xd28]     ; 00571cf3
    ADD ESP,0x9f0                       ; 00571cf9
    POP EBP                             ; 00571cff
    POP EDI                             ; 00571d00
    POP ESI                             ; 00571d01
    POP EBX                             ; 00571d02
    RET                                 ; 00571d03
    MOV ESI,0x5d6da0                    ; 00571d04 | = "Done"
        ;   Label: caseD_5
    JMP 0x00571455                      ; 00571d09
        ;   XREF to: 00571455 (UNCONDITIONAL_JUMP)  ; LAB_00571455

