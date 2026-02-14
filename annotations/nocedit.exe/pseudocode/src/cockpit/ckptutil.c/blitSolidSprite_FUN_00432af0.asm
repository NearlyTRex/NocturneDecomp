; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_blitSolidSprite_FUN_00432af0(void *sprite_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height ,int src_y_param)
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
;   cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432af0
        ;   Label: cockpit_ckptutil.c_blitSolidSprite_FUN_00432af0
    PUSH ESI                            ; 00432af1
    PUSH EDI                            ; 00432af2
    PUSH EBP                            ; 00432af3
    MOV EDX,dword ptr [ESP + 0x28]      ; 00432af4
    PUSH EDX                            ; 00432af8
    MOV ECX,dword ptr [ESP + 0x28]      ; 00432af9
    PUSH ECX                            ; 00432afd
    MOV EBX,dword ptr [ESP + 0x28]      ; 00432afe
    PUSH EBX                            ; 00432b02
    MOV ESI,dword ptr [ESP + 0x28]      ; 00432b03
    PUSH ESI                            ; 00432b07
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00432b08
    PUSH EDI                            ; 00432b0c
    PUSH 0x0                            ; 00432b0d
    MOV EBP,dword ptr [ESP + 0x30]      ; 00432b0f
    PUSH EBP                            ; 00432b13
    MOV EAX,dword ptr [ESP + 0x30]      ; 00432b14
    PUSH EAX                            ; 00432b18
    CALL cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40 ; 00432b19
        ;   XREF to: 00431f40 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40(void * sprite_data, void * span_data, int screen_x, int screen_y, ...)
    ADD ESP,0x20                        ; 00432b1e
    POP EBP                             ; 00432b21
    POP EDI                             ; 00432b22
    POP ESI                             ; 00432b23
    POP EBX                             ; 00432b24
    RET                                 ; 00432b25

