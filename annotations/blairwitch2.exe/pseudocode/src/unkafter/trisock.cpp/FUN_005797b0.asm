; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_trisock_cpp_FUN_005797b0(uchar param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5,undefined4 param_6,uint param_7)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0057a47c at 0057a564
;
; Called Functions:
;   crt_wsock32.c_gethostbyaddr
;   support_trisock.cpp_extractIPOctets_FUN_00578dd0
;   unkafter_trisock.cpp_FUN_00579550
;
; *****************************************************************************

section .text

    SUB ESP,0x14                        ; 005797b0
        ;   Label: unkafter_trisock.cpp_FUN_005797b0
    LEA EAX,[ESP + 0x10]                ; 005797b3
    PUSH EAX                            ; 005797b7
    LEA EAX,[ESP + 0x10]                ; 005797b8
    PUSH EAX                            ; 005797bc
    LEA EAX,[ESP + 0x10]                ; 005797bd
    PUSH EAX                            ; 005797c1
    LEA EAX,[ESP + 0x10]                ; 005797c2
    PUSH EAX                            ; 005797c6
    LEA EAX,[ESP + 0x28]                ; 005797c7
    PUSH EAX                            ; 005797cb
    CALL support_trisock.cpp_extractIPOctets_FUN_00578dd0 ; 005797cc
        ;   XREF to: 00578dd0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_extractIPOctets_FUN_00578dd0(uchar * ip_bytes, uint * octet1_ptr, uint * octet2_ptr, uint * octet3_ptr, ...)
    ADD ESP,0x14                        ; 005797d1
    MOV AL,byte ptr [ESP + 0x4]         ; 005797d4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005797d8
    MOV byte ptr [ESP],AL               ; 005797dc
    MOV AL,byte ptr [ESP + 0x8]         ; 005797df
    PUSH EDX                            ; 005797e3
    MOV byte ptr [ESP + 0x5],AL         ; 005797e4
    MOV AL,byte ptr [ESP + 0x10]        ; 005797e8
    PUSH 0x2                            ; 005797ec
    MOV byte ptr [ESP + 0xa],AL         ; 005797ee
    MOV AL,byte ptr [ESP + 0x18]        ; 005797f2
    PUSH 0x4                            ; 005797f6
    MOV byte ptr [ESP + 0xf],AL         ; 005797f8
    LEA EAX,[ESP + 0xc]                 ; 005797fc
    PUSH EAX                            ; 00579800
    CALL crt_wsock32.c_gethostbyaddr    ; 00579801
        ;   XREF to: 005c74b4 (UNCONDITIONAL_CALL)  ; hostent * crt_wsock32.c_gethostbyaddr(char * addr, int len, int type)
    PUSH EAX                            ; 00579806
    CALL unkafter_trisock.cpp_FUN_00579550 ; 00579807
        ;   XREF to: 00579550 (UNCONDITIONAL_CALL)  ; undefined unkafter_trisock.cpp_FUN_00579550()
    ADD ESP,0x8                         ; 0057980c
    ADD ESP,0x14                        ; 0057980f
    RET                                 ; 00579812

