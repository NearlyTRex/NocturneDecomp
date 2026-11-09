; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_00434c1a(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00434c1a
        ;   Label: cockpit_ckptutil.c_expandIndexedToRGB_FUN_00434c1a
    MOV EBP,ESP                         ; 00434c1b
    PUSH ESI                            ; 00434c1d
    PUSH EDI                            ; 00434c1e
    PUSH EAX                            ; 00434c1f
    PUSH ECX                            ; 00434c20
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434c21
    MOV ESI,dword ptr [EBP + 0xc]       ; 00434c24
    MOV ECX,dword ptr [EBP + 0x10]      ; 00434c27
    MOV EAX,0x0                         ; 00434c2a
    MOVZX EAX,byte ptr [ESI]            ; 00434c2f
        ;   Label: LAB_00434c2f
    INC ESI                             ; 00434c32
    MOV EAX,dword ptr [EAX*0x4 + 0x1c6a974] ; 00434c33
    MOV dword ptr [EDI],EAX             ; 00434c3a
    ADD EDI,0x4                         ; 00434c3c
    DEC ECX                             ; 00434c3f
    JG 0x00434c2f                       ; 00434c40
        ;   XREF to: 00434c2f (CONDITIONAL_JUMP)  ; LAB_00434c2f
    POP ECX                             ; 00434c42
    POP EAX                             ; 00434c43
    POP EDI                             ; 00434c44
    POP ESI                             ; 00434c45
    LEAVE                               ; 00434c46
    RET                                 ; 00434c47

