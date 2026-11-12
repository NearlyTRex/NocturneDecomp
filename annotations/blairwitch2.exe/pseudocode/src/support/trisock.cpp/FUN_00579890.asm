; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00579890(undefined4 param_1,undefined4 param_2,uint16_t *param_3,undefined4 param_4,undefined4 param_5,CSocket *param_6,code *param_7)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_unknown.c_sprintf_FUN_005b7790
;   support_trisock.cpp_createNetworkAddr_FUN_00578e60
;   support_trisock.cpp_CSocket_bindSocket_FUN_005790a0
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360
;   support_trisock.cpp_CSocket_createSocket_FUN_00579030
;   support_trisock.cpp_CSocket_ctor_FUN_00579000
;   support_trisock.cpp_CSocket_dtor_FUN_00579010
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490
;   support_trisock.cpp_formatSocketAddress_FUN_00578f50
;   support_trisock.cpp_FUN_005790f0
;   support_trisock.cpp_FUN_00579150
;   support_trisock.cpp_FUN_00579720
;   support_trisock.cpp_FUN_0057a360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579890
        ;   Label: support_trisock.cpp_FUN_00579890
    PUSH ESI                            ; 00579891
    PUSH EDI                            ; 00579892
    PUSH EBP                            ; 00579893
    SUB ESP,0xbe4                       ; 00579894
    MOV EDI,dword ptr [ESP + 0xbfc]     ; 0057989a
    MOV ESI,dword ptr [ESP + 0xc0c]     ; 005798a1
    MOV EBX,dword ptr [ESP + 0xc10]     ; 005798a8
    MOV EDX,dword ptr [ESP + 0xc08]     ; 005798af
    PUSH EDX                            ; 005798b6
    MOV ECX,dword ptr [ESP + 0xc08]     ; 005798b7
    PUSH ECX                            ; 005798be
    MOV EBP,dword ptr [ESP + 0xc08]     ; 005798bf
    PUSH EBP                            ; 005798c6
    PUSH EDI                            ; 005798c7
    MOV EAX,dword ptr [ESP + 0xc08]     ; 005798c8
    PUSH EAX                            ; 005798cf
    CALL support_trisock.cpp_FUN_0057a360 ; 005798d0
        ;   XREF to: 0057a360 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a360()
    ADD ESP,0x14                        ; 005798d5
    TEST EAX,EAX                        ; 005798d8
    JZ 0x00579923                       ; 005798da
        ;   XREF to: 00579923 (CONDITIONAL_JUMP)  ; LAB_00579923
    PUSH 0x5fd370                       ; 005798dc
    PUSH 0xc                            ; 005798e1
    LEA EAX,[ESP + 0xb90]               ; 005798e3
    PUSH EAX                            ; 005798ea
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005798eb
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005798f0
    PUSH EDI                            ; 005798f3
    PUSH 0x5ed0c4                       ; 005798f4
    LEA EAX,[ESP + 0x8]                 ; 005798f9
    PUSH EAX                            ; 005798fd
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005798fe
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00579903
    MOV EAX,ESP                         ; 00579906
    PUSH EAX                            ; 00579908
    PUSH 0x0                            ; 00579909
    CALL EBX                            ; 0057990b
    ADD ESP,0x8                         ; 0057990d
    TEST EAX,EAX                        ; 00579910
    JNZ 0x00579933                      ; 00579912
        ;   XREF to: 00579933 (CONDITIONAL_JUMP)  ; LAB_00579933
    XOR ESI,ESI                         ; 00579914
    MOV EAX,ESI                         ; 00579916
        ;   Label: LAB_00579916
    ADD ESP,0xbe4                       ; 00579918
    POP EBP                             ; 0057991e
    POP EDI                             ; 0057991f
    POP ESI                             ; 00579920
    POP EBX                             ; 00579921
    RET                                 ; 00579922
    PUSH 0x5ed0b0                       ; 00579923
        ;   Label: LAB_00579923
    PUSH 0x1                            ; 00579928
    XOR ESI,ESI                         ; 0057992a
    CALL EBX                            ; 0057992c
    ADD ESP,0x8                         ; 0057992e
    JMP 0x00579916                      ; 00579931
        ;   XREF to: 00579916 (UNCONDITIONAL_JUMP)  ; LAB_00579916
    LEA EAX,[ESP + 0x900]               ; 00579933
        ;   Label: LAB_00579933
    PUSH EAX                            ; 0057993a
    PUSH EDI                            ; 0057993b
    CALL support_trisock.cpp_FUN_00579720 ; 0057993c
        ;   XREF to: 00579720 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579720()
    ADD ESP,0x8                         ; 00579941
    TEST EAX,EAX                        ; 00579944
    JZ 0x00579a3c                       ; 00579946
        ;   XREF to: 00579a3c (CONDITIONAL_JUMP)  ; LAB_00579a3c
    LEA EAX,[ESP + 0xbe0]               ; 0057994c
    PUSH EAX                            ; 00579953
    CALL support_trisock.cpp_CSocket_ctor_FUN_00579000 ; 00579954
        ;   XREF to: 00579000 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_ctor_FUN_00579000(CSocket * this_ptr)
    XOR EAX,EAX                         ; 00579959
    ADD ESP,0x4                         ; 0057995b
    MOV AX,word ptr [EBP]               ; 0057995e
    PUSH EAX                            ; 00579962
    MOV EDX,dword ptr [ESP + 0xb8c]     ; 00579963
    PUSH EDX                            ; 0057996a
    LEA EAX,[ESP + 0xbe0]               ; 0057996b
    PUSH EAX                            ; 00579972
    CALL support_trisock.cpp_createNetworkAddr_FUN_00578e60 ; 00579973
        ;   XREF to: 00578e60 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_00578e60(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 00579978
    LEA EAX,[ESP + 0xbb8]               ; 0057997b
    PUSH EAX                            ; 00579982
    LEA EAX,[ESP + 0xbdc]               ; 00579983
    PUSH EAX                            ; 0057998a
    CALL support_trisock.cpp_formatSocketAddress_FUN_00578f50 ; 0057998b
        ;   XREF to: 00578f50 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_formatSocketAddress_FUN_00578f50(SNetworkAddr * network_addr, char * output_buffer)
    ADD ESP,0x8                         ; 00579990
    LEA EAX,[ESP + 0xbb8]               ; 00579993
    PUSH EAX                            ; 0057999a
    PUSH 0x5ed0ee                       ; 0057999b
    LEA EAX,[ESP + 0x8]                 ; 005799a0
    PUSH EAX                            ; 005799a4
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005799a5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 005799aa
    MOV EAX,ESP                         ; 005799ad
    PUSH EAX                            ; 005799af
    PUSH 0x0                            ; 005799b0
    CALL EBX                            ; 005799b2
    ADD ESP,0x8                         ; 005799b4
    TEST EAX,EAX                        ; 005799b7
    JZ 0x00579a1c                       ; 005799b9
        ;   XREF to: 00579a1c (CONDITIONAL_JUMP)  ; LAB_00579a1c
    PUSH ESI                            ; 005799bb
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 005799bc
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 005799c1
    PUSH ESI                            ; 005799c4
    CALL support_trisock.cpp_CSocket_createSocket_FUN_00579030 ; 005799c5
        ;   XREF to: 00579030 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createSocket_FUN_00579030(CSocket * this_ptr)
    ADD ESP,0x4                         ; 005799ca
    PUSH 0x0                            ; 005799cd
    PUSH ESI                            ; 005799cf
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490 ; 005799d0
        ;   XREF to: 00579490 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 005799d5
    PUSH 0x0                            ; 005799d8
    PUSH ESI                            ; 005799da
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_005790a0 ; 005799db
        ;   XREF to: 005790a0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_005790a0(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 005799e0
    LEA EAX,[ESP + 0xbd8]               ; 005799e3
    PUSH EAX                            ; 005799ea
    PUSH ESI                            ; 005799eb
    CALL support_trisock.cpp_FUN_005790f0 ; 005799ec
        ;   XREF to: 005790f0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_005790f0()
    ADD ESP,0x8                         ; 005799f1
    TEST EAX,EAX                        ; 005799f4
    JZ 0x00579a68                       ; 005799f6
        ;   XREF to: 00579a68 (CONDITIONAL_JUMP)  ; LAB_00579a68
    XOR EDI,EDI                         ; 005799f8
    PUSH ESI                            ; 005799fa
        ;   Label: LAB_005799fa
    CALL support_trisock.cpp_FUN_00579150 ; 005799fb
        ;   XREF to: 00579150 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00579150()
    ADD ESP,0x4                         ; 00579a00
    TEST AL,0x4                         ; 00579a03
    JNZ 0x00579a68                      ; 00579a05
        ;   XREF to: 00579a68 (CONDITIONAL_JUMP)  ; LAB_00579a68
    TEST AL,0x2                         ; 00579a07
    JNZ 0x00579aac                      ; 00579a09
        ;   XREF to: 00579aac (CONDITIONAL_JUMP)  ; LAB_00579aac
    MOV EAX,ESP                         ; 00579a0f
    PUSH EAX                            ; 00579a11
    PUSH EDI                            ; 00579a12
    CALL EBX                            ; 00579a13
    ADD ESP,0x8                         ; 00579a15
    TEST EAX,EAX                        ; 00579a18
    JNZ 0x005799fa                      ; 00579a1a
        ;   XREF to: 005799fa (CONDITIONAL_JUMP)  ; LAB_005799fa
    PUSH EAX                            ; 00579a1c
        ;   Label: LAB_00579a1c
    LEA EAX,[ESP + 0xbe4]               ; 00579a1d
    PUSH EAX                            ; 00579a24
    XOR ESI,ESI                         ; 00579a25
    CALL support_trisock.cpp_CSocket_dtor_FUN_00579010 ; 00579a27
        ;   XREF to: 00579010 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_00579010(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00579a2c
    MOV EAX,ESI                         ; 00579a2f
    ADD ESP,0xbe4                       ; 00579a31
    POP EBP                             ; 00579a37
    POP EDI                             ; 00579a38
    POP ESI                             ; 00579a39
    POP EBX                             ; 00579a3a
    RET                                 ; 00579a3b
    PUSH EDI                            ; 00579a3c
        ;   Label: LAB_00579a3c
    PUSH 0x5ed0d2                       ; 00579a3d
    LEA EAX,[ESP + 0x8]                 ; 00579a42
    PUSH EAX                            ; 00579a46
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00579a47
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00579a4c
    MOV EAX,ESP                         ; 00579a4f
    PUSH EAX                            ; 00579a51
    PUSH 0x1                            ; 00579a52
    XOR ESI,ESI                         ; 00579a54
    CALL EBX                            ; 00579a56
    ADD ESP,0x8                         ; 00579a58
    MOV EAX,ESI                         ; 00579a5b
    ADD ESP,0xbe4                       ; 00579a5d
    POP EBP                             ; 00579a63
    POP EDI                             ; 00579a64
    POP ESI                             ; 00579a65
    POP EBX                             ; 00579a66
    RET                                 ; 00579a67
    LEA EAX,[ESP + 0xbb8]               ; 00579a68
        ;   Label: LAB_00579a68
    PUSH EAX                            ; 00579a6f
    PUSH 0x5ed104                       ; 00579a70
    LEA EAX,[ESP + 0x8]                 ; 00579a75
    PUSH EAX                            ; 00579a79
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00579a7a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00579a7f
    MOV EAX,ESP                         ; 00579a82
    PUSH EAX                            ; 00579a84
    PUSH 0x1                            ; 00579a85
    CALL EBX                            ; 00579a87
    ADD ESP,0x8                         ; 00579a89
    XOR ESI,ESI                         ; 00579a8c
    PUSH ESI                            ; 00579a8e
    LEA EAX,[ESP + 0xbe4]               ; 00579a8f
    PUSH EAX                            ; 00579a96
    CALL support_trisock.cpp_CSocket_dtor_FUN_00579010 ; 00579a97
        ;   XREF to: 00579010 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_00579010(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00579a9c
    MOV EAX,ESI                         ; 00579a9f
    ADD ESP,0xbe4                       ; 00579aa1
    POP EBP                             ; 00579aa7
    POP EDI                             ; 00579aa8
    POP ESI                             ; 00579aa9
    POP EBX                             ; 00579aaa
    RET                                 ; 00579aab
    LEA EAX,[ESP + 0xbb8]               ; 00579aac
        ;   Label: LAB_00579aac
    PUSH EAX                            ; 00579ab3
    PUSH 0x5ed11b                       ; 00579ab4
    LEA EAX,[ESP + 0x8]                 ; 00579ab9
    PUSH EAX                            ; 00579abd
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00579abe
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00579ac3
    MOV EAX,ESP                         ; 00579ac6
    PUSH EAX                            ; 00579ac8
    PUSH 0x0                            ; 00579ac9
    CALL EBX                            ; 00579acb
    ADD ESP,0x8                         ; 00579acd
    PUSH 0x0                            ; 00579ad0
    MOV ESI,EAX                         ; 00579ad2
    LEA EAX,[ESP + 0xbe4]               ; 00579ad4
    PUSH EAX                            ; 00579adb
    CALL support_trisock.cpp_CSocket_dtor_FUN_00579010 ; 00579adc
        ;   XREF to: 00579010 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_00579010(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00579ae1
    MOV EAX,ESI                         ; 00579ae4
    ADD ESP,0xbe4                       ; 00579ae6
    POP EBP                             ; 00579aec
    POP EDI                             ; 00579aed
    POP ESI                             ; 00579aee
    POP EBX                             ; 00579aef
    RET                                 ; 00579af0

