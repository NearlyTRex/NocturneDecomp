; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042d100(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042d100
        ;   Label: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_0042d100
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042d101
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042d105
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042d109
    XOR EAX,EAX                         ; 0042d10d
    TEST ESI,ESI                        ; 0042d10f
    JBE 0x0042d12e                      ; 0042d111
        ;   XREF to: 0042d12e (CONDITIONAL_JUMP)  ; LAB_0042d12e
    PUSH EBX                            ; 0042d113
    XOR EBX,EBX                         ; 0042d114
        ;   Label: LAB_0042d114
    MOV BL,byte ptr [EDX]               ; 0042d116
    INC EDX                             ; 0042d118
    ADD ECX,0x2                         ; 0042d119
    MOV BX,word ptr [EBX*0x2 + 0x1c00424] ; 0042d11c
    INC EAX                             ; 0042d124
    MOV word ptr [ECX + -0x2],BX        ; 0042d125
    CMP EAX,ESI                         ; 0042d129
    JC 0x0042d114                       ; 0042d12b
        ;   XREF to: 0042d114 (CONDITIONAL_JUMP)  ; LAB_0042d114
    POP EBX                             ; 0042d12d
    POP ESI                             ; 0042d12e
        ;   Label: LAB_0042d12e
    RET                                 ; 0042d12f

