; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060d1a8()
;
;
; XREF[1]:
;   crt_thread.c_staticInit_FUN_0060d214 at 0060d215
;
; Referenced Globals:
;   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
;   EXCEPTION_FILTER_FUNC* g_UserExceptionFilter = 00000000
;   EXCEPTION_CLEANUP_FUNC* g_ExceptionCleanup = 00000000
;   undefined4 g_GlobalSignalHandlers[2]
;   undefined4 g_GlobalSignalHandlers[3]
;   undefined4 g_GlobalSignalHandlers[4]
;   undefined4 g_GlobalSignalHandlers[5]
;
; Called Functions:
;   crt_thread.c_GetTLS_FUN_0060242c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d1a8
        ;   Label: crt_unknown.c_FUN_0060d1a8
    PUSH ESI                            ; 0060d1a9
    PUSH EDI                            ; 0060d1aa
    PUSH ES                             ; 0060d1ab
    MOV EBX,0x8                         ; 0060d1ac
    CALL dword ptr [0x00684ee4]         ; 0060d1b1 | PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4
        ;   Label: LAB_0060d1b1
    LEA ESI,[EAX + EBX*0x1]             ; 0060d1b7
    MOV AX,DS                           ; 0060d1ba
    MOV ES,AX                           ; 0060d1bc
    LEA EDI,[ESI + 0x58]                ; 0060d1be
    LEA ESI,[EBX + 0x685504]            ; 0060d1c1 | g_GlobalSignalHandlers[2]
    ADD EBX,0x8                         ; 0060d1c7
    MOVSD ES:EDI,ESI                    ; 0060d1ca | g_GlobalSignalHandlers[2] | g_GlobalSignalHandlers[4]
    MOVSD ES:EDI,ESI                    ; 0060d1cb | g_GlobalSignalHandlers[3] | g_GlobalSignalHandlers[5]
    CMP EBX,0x68                        ; 0060d1cc
    JNZ 0x0060d1b1                      ; 0060d1cf
        ;   XREF to: 0060d1b1 (CONDITIONAL_JUMP)  ; LAB_0060d1b1
    MOV EDX,0x60cefc                    ; 0060d1d1 | LAB_0060cefc
    MOV EBX,0x60d128                    ; 0060d1d6
    MOV dword ptr [0x006853f0],EDX      ; 0060d1db | g_UserExceptionFilter
    MOV dword ptr [0x006853f4],EBX      ; 0060d1e1 | g_ExceptionCleanup
    POP ES                              ; 0060d1e7
    POP EDI                             ; 0060d1e8
    POP ESI                             ; 0060d1e9
    POP EBX                             ; 0060d1ea
    RET                                 ; 0060d1eb

