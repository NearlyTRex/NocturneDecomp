; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSolidSprite_FUN_0042e4b0(void *sprite_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height ,int src_y_param)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int              Stack[0x10]:4   src_x
; int              Stack[0x14]:4   src_y
; int              Stack[0x18]:4   width
; int              Stack[0x1c]:4   height
; int              Stack[0x20]:4   src_y_param
;
; Called Functions:
;   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042d900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e4b0
        ;   Label: cockpit_ckptutil.c_blitSolidSprite_FUN_0042e4b0
    PUSH ESI                            ; 0042e4b1
    PUSH EDI                            ; 0042e4b2
    PUSH EBP                            ; 0042e4b3
    MOV EDX,dword ptr [ESP + 0x28]      ; 0042e4b4
    PUSH EDX                            ; 0042e4b8
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042e4b9
    PUSH ECX                            ; 0042e4bd
    MOV EBX,dword ptr [ESP + 0x28]      ; 0042e4be
    PUSH EBX                            ; 0042e4c2
    MOV ESI,dword ptr [ESP + 0x28]      ; 0042e4c3
    PUSH ESI                            ; 0042e4c7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0042e4c8
    PUSH EDI                            ; 0042e4cc
    PUSH 0x0                            ; 0042e4cd
    MOV EBP,dword ptr [ESP + 0x30]      ; 0042e4cf
    PUSH EBP                            ; 0042e4d3
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042e4d4
    PUSH EAX                            ; 0042e4d8
    CALL cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042d900 ; 0042e4d9
        ;   XREF to: 0042d900 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042d900(void * sprite_data, void * span_data, int screen_x, int screen_y, ...)
    ADD ESP,0x20                        ; 0042e4de
    POP EBP                             ; 0042e4e1
    POP EDI                             ; 0042e4e2
    POP ESI                             ; 0042e4e3
    POP EBX                             ; 0042e4e4
    RET                                 ; 0042e4e5

