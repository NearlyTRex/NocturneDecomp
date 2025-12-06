; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_windll.cpp_clearScreen_FUN_005b3f37(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1024] g_ScreenBufferArray
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_UseExternalRenderer
;
; Called Functions:
;   wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b3f37
        ;   Label: wincore_windll.cpp_clearScreen_FUN_005b3f37
    MOV EBP,ESP                         ; 005b3f38
    PUSH ESI                            ; 005b3f3a
    PUSH EDI                            ; 005b3f3b
    CMP dword ptr [0x02d03e94],0x0      ; 005b3f3c | int g_UseExternalRenderer
    JZ 0x005b3f52                       ; 005b3f43 | LAB_005b3f52
        ;   XREF to: 005b3f52 (CONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x8]          ; 005b3f45
    CALL wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50 ; 005b3f48 | int wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50(int color)
        ;   XREF to: 005b7a50 (UNCONDITIONAL_CALL)
    POP EAX                             ; 005b3f4d
    POP EDI                             ; 005b3f4e
    POP ESI                             ; 005b3f4f
    LEAVE                               ; 005b3f50
    RET                                 ; 005b3f51
    PUSHAD                              ; 005b3f52
        ;   Label: LAB_005b3f52
    CLD                                 ; 005b3f53
    PUSH DS                             ; 005b3f54
    POP ES                              ; 005b3f55
    MOV ECX,dword ptr [0x02d02560]      ; 005b3f56 | int g_ClipRight
    MOV EAX,dword ptr [EBP + 0x8]       ; 005b3f5c
    SUB ECX,dword ptr [0x02d02558]      ; 005b3f5f | int g_ClipLeft
    MOV EBX,dword ptr [0x02d0255c]      ; 005b3f65 | int g_ClipTop
    INC ECX                             ; 005b3f6b
    XOR EAX,EAX                         ; 005b3f6c
    PUSH EBX                            ; 005b3f6e
        ;   Label: LAB_005b3f6e
    PUSH ECX                            ; 005b3f6f
    MOV EDI,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 005b3f70 | void *[1024] g_ScreenBufferArray
    ADD EDI,dword ptr [0x02d02558]      ; 005b3f77 | int g_ClipLeft
    CMP dword ptr [0x0067939c],0x8      ; 005b3f7d | int g_BitsPerPixel
    JZ 0x005b3fb0                       ; 005b3f84 | LAB_005b3fb0
        ;   XREF to: 005b3fb0 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x10     ; 005b3f86 | int g_BitsPerPixel
    JZ 0x005b3fa5                       ; 005b3f8d | LAB_005b3fa5
        ;   XREF to: 005b3fa5 (CONDITIONAL_JUMP)
    ADD EDI,dword ptr [0x02d02558]      ; 005b3f8f | int g_ClipLeft
    ADD EDI,dword ptr [0x02d02558]      ; 005b3f95 | int g_ClipLeft
    ADD EDI,dword ptr [0x02d02558]      ; 005b3f9b | int g_ClipLeft
    STOSD.REP ES:EDI                    ; 005b3fa1
    JMP 0x005b3fb2                      ; 005b3fa3 | LAB_005b3fb2
        ;   XREF to: 005b3fb2 (UNCONDITIONAL_JUMP)
    ADD EDI,dword ptr [0x02d02558]      ; 005b3fa5 | int g_ClipLeft
        ;   Label: LAB_005b3fa5
    STOSW.REP ES:EDI                    ; 005b3fab
    JMP 0x005b3fb2                      ; 005b3fae | LAB_005b3fb2
        ;   XREF to: 005b3fb2 (UNCONDITIONAL_JUMP)
    STOSB.REP ES:EDI                    ; 005b3fb0
        ;   Label: LAB_005b3fb0
    POP ECX                             ; 005b3fb2
        ;   Label: LAB_005b3fb2
    POP EBX                             ; 005b3fb3
    INC EBX                             ; 005b3fb4
    CMP EBX,dword ptr [0x02d02564]      ; 005b3fb5 | int g_ClipBottom
    JBE 0x005b3f6e                      ; 005b3fbb | LAB_005b3f6e
        ;   XREF to: 005b3f6e (CONDITIONAL_JUMP)
    POPAD                               ; 005b3fbd
    POP EDI                             ; 005b3fbe
    POP ESI                             ; 005b3fbf
    LEAVE                               ; 005b3fc0
    RET                                 ; 005b3fc1

