; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059f230(uchar param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5,undefined4 param_6,uint param_7)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0059daf0 at 0059dbd4
;
; Called Functions:
;   crt_wsock32.c_gethostbyaddr
;   support_trisock.cpp_extractIPOctets_FUN_0059c6b0
;   support_trisock.cpp_FUN_0059efd0
;
; *****************************************************************************

section .text

    SUB ESP,0x14                        ; 0059f230
        ;   Label: support_trisock.cpp_FUN_0059f230
    LEA EAX,[ESP + 0x10]                ; 0059f233
    PUSH EAX                            ; 0059f237
    LEA EAX,[ESP + 0x10]                ; 0059f238
    PUSH EAX                            ; 0059f23c
    LEA EAX,[ESP + 0x10]                ; 0059f23d
    PUSH EAX                            ; 0059f241
    LEA EAX,[ESP + 0x10]                ; 0059f242
    PUSH EAX                            ; 0059f246
    LEA EAX,[ESP + 0x28]                ; 0059f247
    PUSH EAX                            ; 0059f24b
    CALL support_trisock.cpp_extractIPOctets_FUN_0059c6b0 ; 0059f24c
        ;   XREF to: 0059c6b0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_extractIPOctets_FUN_0059c6b0(uchar * ip_bytes, uint * octet1_ptr, uint * octet2_ptr, uint * octet3_ptr, ...)
    ADD ESP,0x14                        ; 0059f251
    MOV AL,byte ptr [ESP + 0x4]         ; 0059f254
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059f258
    MOV byte ptr [ESP],AL               ; 0059f25c
    MOV AL,byte ptr [ESP + 0x8]         ; 0059f25f
    PUSH EDX                            ; 0059f263
    MOV byte ptr [ESP + 0x5],AL         ; 0059f264
    MOV AL,byte ptr [ESP + 0x10]        ; 0059f268
    PUSH 0x2                            ; 0059f26c
    MOV byte ptr [ESP + 0xa],AL         ; 0059f26e
    MOV AL,byte ptr [ESP + 0x18]        ; 0059f272
    PUSH 0x4                            ; 0059f276
    MOV byte ptr [ESP + 0xf],AL         ; 0059f278
    LEA EAX,[ESP + 0xc]                 ; 0059f27c
    PUSH EAX                            ; 0059f280
    CALL crt_wsock32.c_gethostbyaddr    ; 0059f281
        ;   XREF to: 005cf7c0 (UNCONDITIONAL_CALL)  ; hostent * crt_wsock32.c_gethostbyaddr(char * addr, int len, int type)
    PUSH EAX                            ; 0059f286
    CALL support_trisock.cpp_FUN_0059efd0 ; 0059f287
        ;   XREF to: 0059efd0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059efd0()
    ADD ESP,0x8                         ; 0059f28c
    ADD ESP,0x14                        ; 0059f28f
    RET                                 ; 0059f292

