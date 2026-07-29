; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042ceca(void *output_buffer,void *input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; Referenced Globals:
;   undefined4 DAT_01c00024
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0042ceca
        ;   Label: cockpit_ckptutil.c_expandIndexedToRGB_FUN_0042ceca
    MOV EBP,ESP                         ; 0042cecb
    PUSH ESI                            ; 0042cecd
    PUSH EDI                            ; 0042cece
    PUSH EAX                            ; 0042cecf
    PUSH ECX                            ; 0042ced0
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042ced1
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042ced4
    MOV ECX,dword ptr [EBP + 0x10]      ; 0042ced7
    MOV EAX,0x0                         ; 0042ceda
    MOVZX EAX,byte ptr [ESI]            ; 0042cedf
        ;   Label: LAB_0042cedf
    INC ESI                             ; 0042cee2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 0042cee3 | DAT_01c00024
    MOV dword ptr [EDI],EAX             ; 0042ceea
    ADD EDI,0x4                         ; 0042ceec
    DEC ECX                             ; 0042ceef
    JG 0x0042cedf                       ; 0042cef0
        ;   XREF to: 0042cedf (CONDITIONAL_JUMP)  ; LAB_0042cedf
    POP ECX                             ; 0042cef2
    POP EAX                             ; 0042cef3
    POP EDI                             ; 0042cef4
    POP ESI                             ; 0042cef5
    LEAVE                               ; 0042cef6
    RET                                 ; 0042cef7

