; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00434e50(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00434e50
        ;   Label: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00434e50
    MOV ECX,dword ptr [ESP + 0x8]       ; 00434e51
    MOV EDX,dword ptr [ESP + 0xc]       ; 00434e55
    MOV ESI,dword ptr [ESP + 0x10]      ; 00434e59
    XOR EAX,EAX                         ; 00434e5d
    TEST ESI,ESI                        ; 00434e5f
    JBE 0x00434e7e                      ; 00434e61
        ;   XREF to: 00434e7e (CONDITIONAL_JUMP)  ; LAB_00434e7e
    PUSH EBX                            ; 00434e63
    XOR EBX,EBX                         ; 00434e64
        ;   Label: LAB_00434e64
    MOV BL,byte ptr [EDX]               ; 00434e66
    INC EDX                             ; 00434e68
    ADD ECX,0x2                         ; 00434e69
    MOV BX,word ptr [EBX*0x2 + 0x1c6ad74] ; 00434e6c
    INC EAX                             ; 00434e74
    MOV word ptr [ECX + -0x2],BX        ; 00434e75
    CMP EAX,ESI                         ; 00434e79
    JC 0x00434e64                       ; 00434e7b
        ;   XREF to: 00434e64 (CONDITIONAL_JUMP)  ; LAB_00434e64
    POP EBX                             ; 00434e7d
    POP ESI                             ; 00434e7e
        ;   Label: LAB_00434e7e
    RET                                 ; 00434e7f

