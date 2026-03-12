; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00432d00(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)
;
; Parameters:
; void *           Stack[0x4]:4   src_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; void *           Stack[0x10]:4   background_base
; int              Stack[0x14]:4   dest_x
; int              Stack[0x18]:4   dest_y
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432d00
        ;   Label: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00432d00
    PUSH ESI                            ; 00432d01
    PUSH EDI                            ; 00432d02
    PUSH EBP                            ; 00432d03
    SUB ESP,0x10                        ; 00432d04
    MOV ESI,dword ptr [ESP + 0x28]      ; 00432d07
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00432d0b
    MOV EBP,dword ptr [ESP + 0x30]      ; 00432d0f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00432d13
    TEST ECX,ECX                        ; 00432d17
    JLE 0x00432d80                      ; 00432d19
        ;   XREF to: 00432d80 (CONDITIONAL_JUMP)  ; LAB_00432d80
    MOV dword ptr [ESP + 0x4],ESI       ; 00432d1b
    IMUL EAX,ESI,0x0                    ; 00432d1f
    MOV dword ptr [ESP + 0xc],EDX       ; 00432d22
    ADD EDX,ECX                         ; 00432d26
    MOV dword ptr [ESP],EDX             ; 00432d28
    MOV dword ptr [ESP + 0x8],EAX       ; 00432d2b
    XOR EAX,EAX                         ; 00432d2f
        ;   Label: LAB_00432d2f
    TEST ESI,ESI                        ; 00432d31
    JLE 0x00432d62                      ; 00432d33
        ;   XREF to: 00432d62 (CONDITIONAL_JUMP)  ; LAB_00432d62
    MOV EDX,dword ptr [ESP + 0x24]      ; 00432d35
    MOV ECX,dword ptr [ESP + 0x8]       ; 00432d39
    MOV EDI,dword ptr [ESP + 0xc]       ; 00432d3d
    ADD EDX,ECX                         ; 00432d41
    MOV ECX,dword ptr [0x00679394]      ; 00432d43 | g_WindowWidth
        ;   Label: LAB_00432d43
    IMUL ECX,EDI                        ; 00432d49
    MOV EBX,dword ptr [ESP + 0x34]      ; 00432d4c
    ADD ECX,EAX                         ; 00432d50
    ADD ECX,EBX                         ; 00432d52
    MOV BL,byte ptr [EDX]               ; 00432d54
    ADD ECX,EBP                         ; 00432d56
    TEST BL,BL                          ; 00432d58
    JZ 0x00432d88                       ; 00432d5a
        ;   XREF to: 00432d88 (CONDITIONAL_JUMP)  ; LAB_00432d88
    INC EAX                             ; 00432d5c
        ;   Label: LAB_00432d5c
    INC EDX                             ; 00432d5d
    CMP EAX,ESI                         ; 00432d5e
    JL 0x00432d43                       ; 00432d60
        ;   XREF to: 00432d43 (CONDITIONAL_JUMP)  ; LAB_00432d43
    MOV EDX,dword ptr [ESP + 0xc]       ; 00432d62
        ;   Label: LAB_00432d62
    MOV EAX,dword ptr [ESP + 0x4]       ; 00432d66
    MOV ECX,dword ptr [ESP + 0x8]       ; 00432d6a
    MOV EBX,dword ptr [ESP]             ; 00432d6e
    INC EDX                             ; 00432d71
    ADD ECX,EAX                         ; 00432d72
    MOV dword ptr [ESP + 0xc],EDX       ; 00432d74
    MOV dword ptr [ESP + 0x8],ECX       ; 00432d78
    CMP EDX,EBX                         ; 00432d7c
    JL 0x00432d2f                       ; 00432d7e
        ;   XREF to: 00432d2f (CONDITIONAL_JUMP)  ; LAB_00432d2f
    ADD ESP,0x10                        ; 00432d80
        ;   Label: LAB_00432d80
    POP EBP                             ; 00432d83
    POP EDI                             ; 00432d84
    POP ESI                             ; 00432d85
    POP EBX                             ; 00432d86
    RET                                 ; 00432d87
    MOV CL,byte ptr [ECX]               ; 00432d88
        ;   Label: LAB_00432d88
    MOV byte ptr [EDX],CL               ; 00432d8a
    JMP 0x00432d5c                      ; 00432d8c
        ;   XREF to: 00432d5c (UNCONDITIONAL_JUMP)  ; LAB_00432d5c

