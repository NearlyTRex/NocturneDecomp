; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_004314fa(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; XREF[1]:
;   cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00431770 at 00431770
;
; Referenced Globals:
;   uint[256] g_Hardware32BitPalette
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004314fa
        ;   Label: cockpit_ckptutil.c_expandIndexedToRGB_FUN_004314fa
    MOV EBP,ESP                         ; 004314fb
    PUSH ESI                            ; 004314fd
    PUSH EDI                            ; 004314fe
    PUSH EAX                            ; 004314ff
    PUSH ECX                            ; 00431500
    MOV EDI,dword ptr [EBP + 0x8]       ; 00431501
    MOV ESI,dword ptr [EBP + 0xc]       ; 00431504
    MOV ECX,dword ptr [EBP + 0x10]      ; 00431507
    MOV EAX,0x0                         ; 0043150a
    MOVZX EAX,byte ptr [ESI]            ; 0043150f
        ;   Label: LAB_0043150f
    INC ESI                             ; 00431512
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00431513 | g_Hardware32BitPalette
    MOV dword ptr [EDI],EAX             ; 0043151a
    ADD EDI,0x4                         ; 0043151c
    DEC ECX                             ; 0043151f
    JG 0x0043150f                       ; 00431520
        ;   XREF to: 0043150f (CONDITIONAL_JUMP)  ; LAB_0043150f
    POP ECX                             ; 00431522
    POP EAX                             ; 00431523
    POP EDI                             ; 00431524
    POP ESI                             ; 00431525
    LEAVE                               ; 00431526
    RET                                 ; 00431527

