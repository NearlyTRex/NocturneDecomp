; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte crt_unknown_c_FUN_005affd8(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b0088 at 005b0103
;
; Referenced Globals:
;   byte g_ConsoleHandlerRegistered = 0x0
;
; *****************************************************************************

section .text

    CMP byte ptr [0x00607ef0],0x0       ; 005affd8 | g_ConsoleHandlerRegistered
        ;   Label: crt_unknown.c_FUN_005affd8
    JNZ 0x005afffa                      ; 005affdf
        ;   XREF to: 005afffa (CONDITIONAL_JUMP)  ; LAB_005afffa
    PUSH 0x1                            ; 005affe1
    PUSH 0x5aff40                       ; 005affe3
    CALL dword ptr CS:[0x5b3620]        ; 005affe8
    TEST EAX,EAX                        ; 005affef
    JZ 0x005afffa                       ; 005afff1
        ;   XREF to: 005afffa (CONDITIONAL_JUMP)  ; LAB_005afffa
    MOV byte ptr [0x00607ef0],0x1       ; 005afff3 | g_ConsoleHandlerRegistered
    XOR EAX,EAX                         ; 005afffa
        ;   Label: LAB_005afffa
    MOV AL,[0x00607ef0]                 ; 005afffc | g_ConsoleHandlerRegistered
    RET                                 ; 005b0001

