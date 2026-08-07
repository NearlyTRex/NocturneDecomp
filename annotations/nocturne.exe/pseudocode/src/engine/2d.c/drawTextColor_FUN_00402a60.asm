; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextColor_FUN_00402a60(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[6]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d979
;   engine_2d.c_FUN_00402ad0 at 00402ae0
;   engine_2d.c_FUN_00402af0 at 00402b41
;   engine_2d.c_drawTextCenteredAtColor_FUN_00402c20 at 00402c4b
;   engine_2d.c_drawTextCenteredColor_FUN_00402cf0 at 00402d1f
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402b60 at 00402b82
;
; Referenced Globals:
;   undefined4 g_ResolutionTable[7].width
;   undefined4 g_ResolutionTable[7].height
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   engine_2d.c_drawTextMultilineColor_FUN_00402570
;   engine_2d.c_drawTextWrappedColor_FUN_004024e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00402a60
        ;   Label: engine_2d.c_drawTextColor_FUN_00402a60
    PUSH EDI                            ; 00402a61
    PUSH EBP                            ; 00402a62
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402a63
    MOV EAX,dword ptr [ESP + 0x14]      ; 00402a67
    MOV ECX,dword ptr [ESP + 0x18]      ; 00402a6b
    CMP dword ptr [0x005acaa4],0x0      ; 00402a6f | g_ResolutionTable[7].width
    JZ 0x00402a9e                       ; 00402a76
        ;   XREF to: 00402a9e (CONDITIONAL_JUMP)  ; LAB_00402a9e
    PUSH EBX                            ; 00402a78
    MOV EBX,dword ptr [0x005acaa8]      ; 00402a79 | g_ResolutionTable[7].height
    PUSH EBX                            ; 00402a7f
    MOV ESI,dword ptr [0x01c00c64]      ; 00402a80 | g_ClipBottom
    PUSH ESI                            ; 00402a86
    MOV EDI,dword ptr [0x01c00c60]      ; 00402a87 | g_ClipRight
    PUSH EDI                            ; 00402a8d
    PUSH ECX                            ; 00402a8e
    PUSH EAX                            ; 00402a8f
    PUSH EDX                            ; 00402a90
    CALL engine_2d.c_drawTextWrappedColor_FUN_004024e0 ; 00402a91
        ;   XREF to: 004024e0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextWrappedColor_FUN_004024e0(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x18                        ; 00402a96
    POP EBX                             ; 00402a99
    POP EBP                             ; 00402a9a
    POP EDI                             ; 00402a9b
    POP ESI                             ; 00402a9c
    RET                                 ; 00402a9d
    MOV ESI,dword ptr [0x005acaa8]      ; 00402a9e | g_ResolutionTable[7].height
        ;   Label: LAB_00402a9e
    PUSH ESI                            ; 00402aa4
    MOV EDI,dword ptr [0x01c00c64]      ; 00402aa5 | g_ClipBottom
    PUSH EDI                            ; 00402aab
    MOV EBP,dword ptr [0x01c00c60]      ; 00402aac | g_ClipRight
    PUSH EBP                            ; 00402ab2
    PUSH ECX                            ; 00402ab3
    PUSH EAX                            ; 00402ab4
    PUSH EDX                            ; 00402ab5
    CALL engine_2d.c_drawTextMultilineColor_FUN_00402570 ; 00402ab6
        ;   XREF to: 00402570 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextMultilineColor_FUN_00402570(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x18                        ; 00402abb
    POP EBP                             ; 00402abe
    POP EDI                             ; 00402abf
    POP ESI                             ; 00402ac0
    RET                                 ; 00402ac1

