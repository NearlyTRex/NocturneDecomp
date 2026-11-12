; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_00572220(uchar param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5,undefined4 param_6,uint param_7)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_00570adc at 00570bc4
;
; Called Functions:
;   crt_wsock32.c_gethostbyaddr
;   support_trisock.cpp_extractIPOctets_FUN_0056f6a0
;   support_trisock.cpp_FUN_00571fc0
;
; *****************************************************************************

section .text

    SUB ESP,0x14                        ; 00572220
        ;   Label: support_trisock.cpp_FUN_00572220
    LEA EAX,[ESP + 0x10]                ; 00572223
    PUSH EAX                            ; 00572227
    LEA EAX,[ESP + 0x10]                ; 00572228
    PUSH EAX                            ; 0057222c
    LEA EAX,[ESP + 0x10]                ; 0057222d
    PUSH EAX                            ; 00572231
    LEA EAX,[ESP + 0x10]                ; 00572232
    PUSH EAX                            ; 00572236
    LEA EAX,[ESP + 0x28]                ; 00572237
    PUSH EAX                            ; 0057223b
    CALL support_trisock.cpp_extractIPOctets_FUN_0056f6a0 ; 0057223c
        ;   XREF to: 0056f6a0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_extractIPOctets_FUN_0056f6a0(uchar * ip_bytes, uint * octet1_ptr, uint * octet2_ptr, uint * octet3_ptr, ...)
    ADD ESP,0x14                        ; 00572241
    MOV AL,byte ptr [ESP + 0x4]         ; 00572244
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00572248
    MOV byte ptr [ESP],AL               ; 0057224c
    MOV AL,byte ptr [ESP + 0x8]         ; 0057224f
    PUSH EDX                            ; 00572253
    MOV byte ptr [ESP + 0x5],AL         ; 00572254
    MOV AL,byte ptr [ESP + 0x10]        ; 00572258
    PUSH 0x2                            ; 0057225c
    MOV byte ptr [ESP + 0xa],AL         ; 0057225e
    MOV AL,byte ptr [ESP + 0x18]        ; 00572262
    PUSH 0x4                            ; 00572266
    MOV byte ptr [ESP + 0xf],AL         ; 00572268
    LEA EAX,[ESP + 0xc]                 ; 0057226c
    PUSH EAX                            ; 00572270
    CALL crt_wsock32.c_gethostbyaddr    ; 00572271
        ;   XREF to: 005b2550 (UNCONDITIONAL_CALL)  ; hostent * crt_wsock32.c_gethostbyaddr(char * addr, int len, int type)
    PUSH EAX                            ; 00572276
    CALL support_trisock.cpp_FUN_00571fc0 ; 00572277
        ;   XREF to: 00571fc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00571fc0()
    ADD ESP,0x8                         ; 0057227c
    ADD ESP,0x14                        ; 0057227f
    RET                                 ; 00572282

