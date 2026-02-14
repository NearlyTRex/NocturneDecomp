; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_winfont_cpp_CWinFont_drawText_FUN_005f23f0(CWinFont *this_ptr,int x_position,int y_position,char *text_string,int text_color,int draw_flags)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_position
; int              Stack[0xc]:4   y_position
; char *           Stack[0x10]:4   text_string
; int              Stack[0x14]:4   text_color
; int              Stack[0x18]:4   draw_flags
;
; Called Functions:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
;   engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f23f0
        ;   Label: engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0
    PUSH EBP                            ; 005f23f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005f23f2
    PUSH -0x1                           ; 005f23f6
    PUSH -0x1                           ; 005f23f8
    PUSH EBX                            ; 005f23fa
    CALL engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860 ; 005f23fb
        ;   XREF to: 005f2860 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 005f2400
    TEST EAX,EAX                        ; 005f2403
    JNZ 0x005f240a                      ; 005f2405
        ;   XREF to: 005f240a (CONDITIONAL_JUMP)  ; LAB_005f240a
    POP EBP                             ; 005f2407
    POP EBX                             ; 005f2408
    RET                                 ; 005f2409
    PUSH EDI                            ; 005f240a
        ;   Label: LAB_005f240a
    PUSH ESI                            ; 005f240b
    MOV EDX,dword ptr [ESP + 0x28]      ; 005f240c
    PUSH EDX                            ; 005f2410
    MOV ECX,dword ptr [ESP + 0x28]      ; 005f2411
    PUSH ECX                            ; 005f2415
    MOV ESI,dword ptr [ESP + 0x28]      ; 005f2416
    PUSH ESI                            ; 005f241a
    MOV EDI,dword ptr [ESP + 0x28]      ; 005f241b
    PUSH EDI                            ; 005f241f
    MOV EBP,dword ptr [ESP + 0x28]      ; 005f2420
    PUSH EBP                            ; 005f2424
    MOV EAX,dword ptr [EBX + 0x4]       ; 005f2425
    PUSH EAX                            ; 005f2428
    PUSH EBX                            ; 005f2429
    CALL engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440 ; 005f242a
        ;   XREF to: 005f2440 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont * this_ptr, HDC device_context, int x_position, int y_position, ...)
    ADD ESP,0x1c                        ; 005f242f
    XOR EAX,EAX                         ; 005f2432
    POP ESI                             ; 005f2434
    POP EDI                             ; 005f2435
    POP EBP                             ; 005f2436
    POP EBX                             ; 005f2437
    RET                                 ; 005f2438

