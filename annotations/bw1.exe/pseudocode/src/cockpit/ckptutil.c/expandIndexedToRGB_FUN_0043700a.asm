; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_0043700a(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0043700a
        ;   Label: cockpit_ckptutil.c_expandIndexedToRGB_FUN_0043700a
    MOV EBP,ESP                         ; 0043700b
    PUSH ESI                            ; 0043700d
    PUSH EDI                            ; 0043700e
    PUSH EAX                            ; 0043700f
    PUSH ECX                            ; 00437010
    MOV EDI,dword ptr [EBP + 0x8]       ; 00437011
    MOV ESI,dword ptr [EBP + 0xc]       ; 00437014
    MOV ECX,dword ptr [EBP + 0x10]      ; 00437017
    MOV EAX,0x0                         ; 0043701a
    MOVZX EAX,byte ptr [ESI]            ; 0043701f
        ;   Label: LAB_0043701f
    INC ESI                             ; 00437022
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 00437023
    MOV dword ptr [EDI],EAX             ; 0043702a
    ADD EDI,0x4                         ; 0043702c
    DEC ECX                             ; 0043702f
    JG 0x0043701f                       ; 00437030
        ;   XREF to: 0043701f (CONDITIONAL_JUMP)  ; LAB_0043701f
    POP ECX                             ; 00437032
    POP EAX                             ; 00437033
    POP EDI                             ; 00437034
    POP ESI                             ; 00437035
    LEAVE                               ; 00437036
    RET                                 ; 00437037

