; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00437240(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00437240
        ;   Label: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00437240
    MOV ECX,dword ptr [ESP + 0x8]       ; 00437241
    MOV EDX,dword ptr [ESP + 0xc]       ; 00437245
    MOV ESI,dword ptr [ESP + 0x10]      ; 00437249
    XOR EAX,EAX                         ; 0043724d
    TEST ESI,ESI                        ; 0043724f
    JBE 0x0043726e                      ; 00437251
        ;   XREF to: 0043726e (CONDITIONAL_JUMP)  ; LAB_0043726e
    PUSH EBX                            ; 00437253
    XOR EBX,EBX                         ; 00437254
        ;   Label: LAB_00437254
    MOV BL,byte ptr [EDX]               ; 00437256
    INC EDX                             ; 00437258
    ADD ECX,0x2                         ; 00437259
    MOV BX,word ptr [EBX*0x2 + 0x1c4e7d4] ; 0043725c
    INC EAX                             ; 00437264
    MOV word ptr [ECX + -0x2],BX        ; 00437265
    CMP EAX,ESI                         ; 00437269
    JC 0x00437254                       ; 0043726b
        ;   XREF to: 00437254 (CONDITIONAL_JUMP)  ; LAB_00437254
    POP EBX                             ; 0043726d
    POP ESI                             ; 0043726e
        ;   Label: LAB_0043726e
    RET                                 ; 0043726f

