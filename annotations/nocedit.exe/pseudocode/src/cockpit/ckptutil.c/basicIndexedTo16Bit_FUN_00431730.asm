; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00431730(void * output_buffer, void * input_buffer, int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; XREF[1]:
;   cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0 at 004317a0
;
; Referenced Globals:
;   ushort[256] g_Hardware16BitPalette
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00431730
        ;   Label: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00431730
    MOV ECX,dword ptr [ESP + 0x8]       ; 00431731
    MOV EDX,dword ptr [ESP + 0xc]       ; 00431735
    MOV ESI,dword ptr [ESP + 0x10]      ; 00431739
    XOR EAX,EAX                         ; 0043173d
    TEST ESI,ESI                        ; 0043173f
    JBE 0x0043175e                      ; 00431741
        ;   XREF to: 0043175e (CONDITIONAL_JUMP)  ; LAB_0043175e
    PUSH EBX                            ; 00431743
    XOR EBX,EBX                         ; 00431744
        ;   Label: LAB_00431744
    MOV BL,byte ptr [EDX]               ; 00431746
    INC EDX                             ; 00431748
    ADD ECX,0x2                         ; 00431749
    MOV BX,word ptr [EBX*0x2 + 0x2d01d24] ; 0043174c | g_Hardware16BitPalette
    INC EAX                             ; 00431754
    MOV word ptr [ECX + -0x2],BX        ; 00431755
    CMP EAX,ESI                         ; 00431759
    JC 0x00431744                       ; 0043175b
        ;   XREF to: 00431744 (CONDITIONAL_JUMP)  ; LAB_00431744
    POP EBX                             ; 0043175d
    POP ESI                             ; 0043175e
        ;   Label: LAB_0043175e
    RET                                 ; 0043175f

