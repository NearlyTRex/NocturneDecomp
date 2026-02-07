; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_FUN_00535e10(int *param_1,char *param_2,char *param_3)
;
; Parameters:
; int *            Stack[0x4]:4   param_1
; char *           Stack[0x8]:4   param_2
; char *           Stack[0xc]:4   param_3
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_ClipLeft
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535e10
        ;   Label: core_msnedit.cpp_FUN_00535e10
    PUSH ESI                            ; 00535e11
    PUSH EDI                            ; 00535e12
    PUSH EBP                            ; 00535e13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00535e14
    MOV EDX,dword ptr [EBX]             ; 00535e18
    PUSH EDX                            ; 00535e1a
    MOV ECX,dword ptr [0x02d02558]      ; 00535e1b | g_ClipLeft
    PUSH ECX                            ; 00535e21
    MOV ESI,dword ptr [ESP + 0x20]      ; 00535e22
    PUSH ESI                            ; 00535e26
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535e27
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00535e2c | g_WindowWidth
    MOV EDX,EAX                         ; 00535e31
    SAR EDX,0x1f                        ; 00535e33
    SHL EDX,0x3                         ; 00535e36
    SBB EAX,EDX                         ; 00535e39
    SAR EAX,0x3                         ; 00535e3b
    ADD ESP,0xc                         ; 00535e3e
    MOV EDI,dword ptr [EBX]             ; 00535e41
    MOV EBP,dword ptr [0x02d02558]      ; 00535e43 | g_ClipLeft
    PUSH EDI                            ; 00535e49
    ADD EAX,EBP                         ; 00535e4a
    PUSH EAX                            ; 00535e4c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00535e4d
    PUSH EAX                            ; 00535e51
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535e52
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDX,dword ptr [EBX]             ; 00535e57
    ADD EDX,0xb                         ; 00535e59
    ADD ESP,0xc                         ; 00535e5c
    MOV dword ptr [EBX],EDX             ; 00535e5f
    POP EBP                             ; 00535e61
    POP EDI                             ; 00535e62
    POP ESI                             ; 00535e63
    POP EBX                             ; 00535e64
    RET                                 ; 00535e65

