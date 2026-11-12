; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0056fef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,CSocket *param_6,code *param_7)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_trisock.cpp_createNetworkAddr_FUN_0056f730
;   support_trisock.cpp_CSocket_bindSocket_FUN_0056f970
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;   support_trisock.cpp_CSocket_createSocket_FUN_0056f900
;   support_trisock.cpp_CSocket_ctor_FUN_0056f8d0
;   support_trisock.cpp_CSocket_dtor_FUN_0056f8e0
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60
;   support_trisock.cpp_formatSocketAddress_FUN_0056f820
;   support_trisock.cpp_FUN_0056f9c0
;   support_trisock.cpp_FUN_0056fa20
;   support_trisock.cpp_FUN_005709c0
;   support_trisock.cpp_FUN_00572190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fef0
        ;   Label: support_trisock.cpp_FUN_0056fef0
    PUSH ESI                            ; 0056fef1
    PUSH EDI                            ; 0056fef2
    PUSH EBP                            ; 0056fef3
    SUB ESP,0xbe4                       ; 0056fef4
    MOV EDI,dword ptr [ESP + 0xbfc]     ; 0056fefa
    MOV ESI,dword ptr [ESP + 0xc0c]     ; 0056ff01
    MOV EBX,dword ptr [ESP + 0xc10]     ; 0056ff08
    MOV EDX,dword ptr [ESP + 0xc08]     ; 0056ff0f
    PUSH EDX                            ; 0056ff16
    MOV ECX,dword ptr [ESP + 0xc08]     ; 0056ff17
    PUSH ECX                            ; 0056ff1e
    MOV EBP,dword ptr [ESP + 0xc08]     ; 0056ff1f
    PUSH EBP                            ; 0056ff26
    PUSH EDI                            ; 0056ff27
    MOV EAX,dword ptr [ESP + 0xc08]     ; 0056ff28
    PUSH EAX                            ; 0056ff2f
    CALL support_trisock.cpp_FUN_005709c0 ; 0056ff30
        ;   XREF to: 005709c0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_005709c0()
    ADD ESP,0x14                        ; 0056ff35
    TEST EAX,EAX                        ; 0056ff38
    JZ 0x0056ff83                       ; 0056ff3a
        ;   XREF to: 0056ff83 (CONDITIONAL_JUMP)  ; LAB_0056ff83
    PUSH 0x5e5a10                       ; 0056ff3c
    PUSH 0xc                            ; 0056ff41
    LEA EAX,[ESP + 0xb90]               ; 0056ff43
    PUSH EAX                            ; 0056ff4a
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0056ff4b
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 0056ff50
    PUSH EDI                            ; 0056ff53
    PUSH 0x5d694d                       ; 0056ff54
    LEA EAX,[ESP + 0x8]                 ; 0056ff59
    PUSH EAX                            ; 0056ff5d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0056ff5e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056ff63
    MOV EAX,ESP                         ; 0056ff66
    PUSH EAX                            ; 0056ff68
    PUSH 0x0                            ; 0056ff69
    CALL EBX                            ; 0056ff6b
    ADD ESP,0x8                         ; 0056ff6d
    TEST EAX,EAX                        ; 0056ff70
    JNZ 0x0056ff93                      ; 0056ff72
        ;   XREF to: 0056ff93 (CONDITIONAL_JUMP)  ; LAB_0056ff93
    XOR ESI,ESI                         ; 0056ff74
    MOV EAX,ESI                         ; 0056ff76
        ;   Label: LAB_0056ff76
    ADD ESP,0xbe4                       ; 0056ff78
    POP EBP                             ; 0056ff7e
    POP EDI                             ; 0056ff7f
    POP ESI                             ; 0056ff80
    POP EBX                             ; 0056ff81
    RET                                 ; 0056ff82
    PUSH 0x5d6939                       ; 0056ff83
        ;   Label: LAB_0056ff83
    PUSH 0x1                            ; 0056ff88
    XOR ESI,ESI                         ; 0056ff8a
    CALL EBX                            ; 0056ff8c
    ADD ESP,0x8                         ; 0056ff8e
    JMP 0x0056ff76                      ; 0056ff91
        ;   XREF to: 0056ff76 (UNCONDITIONAL_JUMP)  ; LAB_0056ff76
    LEA EAX,[ESP + 0x900]               ; 0056ff93
        ;   Label: LAB_0056ff93
    PUSH EAX                            ; 0056ff9a
    PUSH EDI                            ; 0056ff9b
    CALL support_trisock.cpp_FUN_00572190 ; 0056ff9c
        ;   XREF to: 00572190 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00572190()
    ADD ESP,0x8                         ; 0056ffa1
    TEST EAX,EAX                        ; 0056ffa4
    JZ 0x0057009c                       ; 0056ffa6
        ;   XREF to: 0057009c (CONDITIONAL_JUMP)  ; LAB_0057009c
    LEA EAX,[ESP + 0xbe0]               ; 0056ffac
    PUSH EAX                            ; 0056ffb3
    CALL support_trisock.cpp_CSocket_ctor_FUN_0056f8d0 ; 0056ffb4
        ;   XREF to: 0056f8d0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_ctor_FUN_0056f8d0(CSocket * this_ptr)
    XOR EAX,EAX                         ; 0056ffb9
    ADD ESP,0x4                         ; 0056ffbb
    MOV AX,word ptr [EBP]               ; 0056ffbe
    PUSH EAX                            ; 0056ffc2
    MOV EDX,dword ptr [ESP + 0xb8c]     ; 0056ffc3
    PUSH EDX                            ; 0056ffca
    LEA EAX,[ESP + 0xbe0]               ; 0056ffcb
    PUSH EAX                            ; 0056ffd2
    CALL support_trisock.cpp_createNetworkAddr_FUN_0056f730 ; 0056ffd3
        ;   XREF to: 0056f730 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_0056f730()
    ADD ESP,0xc                         ; 0056ffd8
    LEA EAX,[ESP + 0xbb8]               ; 0056ffdb
    PUSH EAX                            ; 0056ffe2
    LEA EAX,[ESP + 0xbdc]               ; 0056ffe3
    PUSH EAX                            ; 0056ffea
    CALL support_trisock.cpp_formatSocketAddress_FUN_0056f820 ; 0056ffeb
        ;   XREF to: 0056f820 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_formatSocketAddress_FUN_0056f820()
    ADD ESP,0x8                         ; 0056fff0
    LEA EAX,[ESP + 0xbb8]               ; 0056fff3
    PUSH EAX                            ; 0056fffa
    PUSH 0x5d6977                       ; 0056fffb
    LEA EAX,[ESP + 0x8]                 ; 00570000
    PUSH EAX                            ; 00570004
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00570005
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057000a
    MOV EAX,ESP                         ; 0057000d
    PUSH EAX                            ; 0057000f
    PUSH 0x0                            ; 00570010
    CALL EBX                            ; 00570012
    ADD ESP,0x8                         ; 00570014
    TEST EAX,EAX                        ; 00570017
    JZ 0x0057007c                       ; 00570019
        ;   XREF to: 0057007c (CONDITIONAL_JUMP)  ; LAB_0057007c
    PUSH ESI                            ; 0057001b
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 0057001c
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00570021
    PUSH ESI                            ; 00570024
    CALL support_trisock.cpp_CSocket_createSocket_FUN_0056f900 ; 00570025
        ;   XREF to: 0056f900 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createSocket_FUN_0056f900(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057002a
    PUSH 0x0                            ; 0057002d
    PUSH ESI                            ; 0057002f
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60 ; 00570030
        ;   XREF to: 0056fd60 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 00570035
    PUSH 0x0                            ; 00570038
    PUSH ESI                            ; 0057003a
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_0056f970 ; 0057003b
        ;   XREF to: 0056f970 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_0056f970(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 00570040
    LEA EAX,[ESP + 0xbd8]               ; 00570043
    PUSH EAX                            ; 0057004a
    PUSH ESI                            ; 0057004b
    CALL support_trisock.cpp_FUN_0056f9c0 ; 0057004c
        ;   XREF to: 0056f9c0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0056f9c0()
    ADD ESP,0x8                         ; 00570051
    TEST EAX,EAX                        ; 00570054
    JZ 0x005700c8                       ; 00570056
        ;   XREF to: 005700c8 (CONDITIONAL_JUMP)  ; LAB_005700c8
    XOR EDI,EDI                         ; 00570058
    PUSH ESI                            ; 0057005a
        ;   Label: LAB_0057005a
    CALL support_trisock.cpp_FUN_0056fa20 ; 0057005b
        ;   XREF to: 0056fa20 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0056fa20()
    ADD ESP,0x4                         ; 00570060
    TEST AL,0x4                         ; 00570063
    JNZ 0x005700c8                      ; 00570065
        ;   XREF to: 005700c8 (CONDITIONAL_JUMP)  ; LAB_005700c8
    TEST AL,0x2                         ; 00570067
    JNZ 0x0057010c                      ; 00570069
        ;   XREF to: 0057010c (CONDITIONAL_JUMP)  ; LAB_0057010c
    MOV EAX,ESP                         ; 0057006f
    PUSH EAX                            ; 00570071
    PUSH EDI                            ; 00570072
    CALL EBX                            ; 00570073
    ADD ESP,0x8                         ; 00570075
    TEST EAX,EAX                        ; 00570078
    JNZ 0x0057005a                      ; 0057007a
        ;   XREF to: 0057005a (CONDITIONAL_JUMP)  ; LAB_0057005a
    PUSH EAX                            ; 0057007c
        ;   Label: LAB_0057007c
    LEA EAX,[ESP + 0xbe4]               ; 0057007d
    PUSH EAX                            ; 00570084
    XOR ESI,ESI                         ; 00570085
    CALL support_trisock.cpp_CSocket_dtor_FUN_0056f8e0 ; 00570087
        ;   XREF to: 0056f8e0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_0056f8e0(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057008c
    MOV EAX,ESI                         ; 0057008f
    ADD ESP,0xbe4                       ; 00570091
    POP EBP                             ; 00570097
    POP EDI                             ; 00570098
    POP ESI                             ; 00570099
    POP EBX                             ; 0057009a
    RET                                 ; 0057009b
    PUSH EDI                            ; 0057009c
        ;   Label: LAB_0057009c
    PUSH 0x5d695b                       ; 0057009d
    LEA EAX,[ESP + 0x8]                 ; 005700a2
    PUSH EAX                            ; 005700a6
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005700a7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005700ac
    MOV EAX,ESP                         ; 005700af
    PUSH EAX                            ; 005700b1
    PUSH 0x1                            ; 005700b2
    XOR ESI,ESI                         ; 005700b4
    CALL EBX                            ; 005700b6
    ADD ESP,0x8                         ; 005700b8
    MOV EAX,ESI                         ; 005700bb
    ADD ESP,0xbe4                       ; 005700bd
    POP EBP                             ; 005700c3
    POP EDI                             ; 005700c4
    POP ESI                             ; 005700c5
    POP EBX                             ; 005700c6
    RET                                 ; 005700c7
    LEA EAX,[ESP + 0xbb8]               ; 005700c8
        ;   Label: LAB_005700c8
    PUSH EAX                            ; 005700cf
    PUSH 0x5d698d                       ; 005700d0
    LEA EAX,[ESP + 0x8]                 ; 005700d5
    PUSH EAX                            ; 005700d9
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005700da
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005700df
    MOV EAX,ESP                         ; 005700e2
    PUSH EAX                            ; 005700e4
    PUSH 0x1                            ; 005700e5
    CALL EBX                            ; 005700e7
    ADD ESP,0x8                         ; 005700e9
    XOR ESI,ESI                         ; 005700ec
    PUSH ESI                            ; 005700ee
    LEA EAX,[ESP + 0xbe4]               ; 005700ef
    PUSH EAX                            ; 005700f6
    CALL support_trisock.cpp_CSocket_dtor_FUN_0056f8e0 ; 005700f7
        ;   XREF to: 0056f8e0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_0056f8e0(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005700fc
    MOV EAX,ESI                         ; 005700ff
    ADD ESP,0xbe4                       ; 00570101
    POP EBP                             ; 00570107
    POP EDI                             ; 00570108
    POP ESI                             ; 00570109
    POP EBX                             ; 0057010a
    RET                                 ; 0057010b
    LEA EAX,[ESP + 0xbb8]               ; 0057010c
        ;   Label: LAB_0057010c
    PUSH EAX                            ; 00570113
    PUSH 0x5d69a4                       ; 00570114
    LEA EAX,[ESP + 0x8]                 ; 00570119
    PUSH EAX                            ; 0057011d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0057011e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00570123
    MOV EAX,ESP                         ; 00570126
    PUSH EAX                            ; 00570128
    PUSH 0x0                            ; 00570129
    CALL EBX                            ; 0057012b
    ADD ESP,0x8                         ; 0057012d
    PUSH 0x0                            ; 00570130
    MOV ESI,EAX                         ; 00570132
    LEA EAX,[ESP + 0xbe4]               ; 00570134
    PUSH EAX                            ; 0057013b
    CALL support_trisock.cpp_CSocket_dtor_FUN_0056f8e0 ; 0057013c
        ;   XREF to: 0056f8e0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_0056f8e0(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00570141
    MOV EAX,ESI                         ; 00570144
    ADD ESP,0xbe4                       ; 00570146
    POP EBP                             ; 0057014c
    POP EDI                             ; 0057014d
    POP ESI                             ; 0057014e
    POP EBX                             ; 0057014f
    RET                                 ; 00570150

