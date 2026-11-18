; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 crt_unknown_c_FUN_00571858(void)
;
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;   void* g_UserExceptionFilter = 00000000
;   void* g_ExceptionCleanup = 00000000
;   undefined4 g_GlobalSignalHandlers[2]
;   undefined4 g_GlobalSignalHandlers[3]
;   undefined4 g_GlobalSignalHandlers[4]
;   undefined4 g_GlobalSignalHandlers[5]
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_005671dc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571858
        ;   Label: crt_unknown.c_FUN_00571858
    PUSH ESI                            ; 00571859
    PUSH EDI                            ; 0057185a
    PUSH ES                             ; 0057185b
    MOV EBX,0x8                         ; 0057185c
    CALL dword ptr [0x005c1abc]         ; 00571861 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
        ;   Label: LAB_00571861
    LEA ESI,[EAX + EBX*0x1]             ; 00571867
    MOV AX,DS                           ; 0057186a
    MOV ES,AX                           ; 0057186c
    LEA EDI,[ESI + 0x58]                ; 0057186e
    LEA ESI,[EBX + 0x5c20d8]            ; 00571871 | g_GlobalSignalHandlers[2]
    ADD EBX,0x8                         ; 00571877
    MOVSD ES:EDI,ESI                    ; 0057187a | g_GlobalSignalHandlers[2] | g_GlobalSignalHandlers[4]
    MOVSD ES:EDI,ESI                    ; 0057187b | g_GlobalSignalHandlers[3] | g_GlobalSignalHandlers[5]
    CMP EBX,0x68                        ; 0057187c
    JNZ 0x00571861                      ; 0057187f
        ;   XREF to: 00571861 (CONDITIONAL_JUMP)  ; LAB_00571861
    MOV EDX,0x5715ac                    ; 00571881
    MOV EBX,0x5717d8                    ; 00571886
    MOV dword ptr [0x005c1f6c],EDX      ; 0057188b | g_UserExceptionFilter
    MOV dword ptr [0x005c1f70],EBX      ; 00571891 | g_ExceptionCleanup
    POP ES                              ; 00571897
    POP EDI                             ; 00571898
    POP ESI                             ; 00571899
    POP EBX                             ; 0057189a
    RET                                 ; 0057189b

