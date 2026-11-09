; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042c3e0(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042c3e0
        ;   Label: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_0042c3e0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042c3e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042c3e5
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042c3e9
    XOR EAX,EAX                         ; 0042c3ed
    TEST ESI,ESI                        ; 0042c3ef
    JBE 0x0042c40e                      ; 0042c3f1
        ;   XREF to: 0042c40e (CONDITIONAL_JUMP)  ; LAB_0042c40e
    PUSH EBX                            ; 0042c3f3
    XOR EBX,EBX                         ; 0042c3f4
        ;   Label: LAB_0042c3f4
    MOV BL,byte ptr [EDX]               ; 0042c3f6
    INC EDX                             ; 0042c3f8
    ADD ECX,0x2                         ; 0042c3f9
    MOV BX,word ptr [EBX*0x2 + 0x1c35614] ; 0042c3fc
    INC EAX                             ; 0042c404
    MOV word ptr [ECX + -0x2],BX        ; 0042c405
    CMP EAX,ESI                         ; 0042c409
    JC 0x0042c3f4                       ; 0042c40b
        ;   XREF to: 0042c3f4 (CONDITIONAL_JUMP)  ; LAB_0042c3f4
    POP EBX                             ; 0042c40d
    POP ESI                             ; 0042c40e
        ;   Label: LAB_0042c40e
    RET                                 ; 0042c40f

