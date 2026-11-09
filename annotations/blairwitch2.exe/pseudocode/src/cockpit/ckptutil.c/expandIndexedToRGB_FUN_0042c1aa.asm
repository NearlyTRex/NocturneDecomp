; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042c1aa(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0042c1aa
        ;   Label: cockpit_ckptutil.c_expandIndexedToRGB_FUN_0042c1aa
    MOV EBP,ESP                         ; 0042c1ab
    PUSH ESI                            ; 0042c1ad
    PUSH EDI                            ; 0042c1ae
    PUSH EAX                            ; 0042c1af
    PUSH ECX                            ; 0042c1b0
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042c1b1
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042c1b4
    MOV ECX,dword ptr [EBP + 0x10]      ; 0042c1b7
    MOV EAX,0x0                         ; 0042c1ba
    MOVZX EAX,byte ptr [ESI]            ; 0042c1bf
        ;   Label: LAB_0042c1bf
    INC ESI                             ; 0042c1c2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c35214] ; 0042c1c3
    MOV dword ptr [EDI],EAX             ; 0042c1ca
    ADD EDI,0x4                         ; 0042c1cc
    DEC ECX                             ; 0042c1cf
    JG 0x0042c1bf                       ; 0042c1d0
        ;   XREF to: 0042c1bf (CONDITIONAL_JUMP)  ; LAB_0042c1bf
    POP ECX                             ; 0042c1d2
    POP EAX                             ; 0042c1d3
    POP EDI                             ; 0042c1d4
    POP ESI                             ; 0042c1d5
    LEAVE                               ; 0042c1d6
    RET                                 ; 0042c1d7

