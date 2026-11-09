; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_00438b40(uchar *bitmap_data,int width,int height,int bytes_per_pixel)
;
; Parameters:
; uchar *          Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   bytes_per_pixel
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438b40
        ;   Label: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00438b40
    PUSH ESI                            ; 00438b41
    PUSH EDI                            ; 00438b42
    PUSH EBP                            ; 00438b43
    SUB ESP,0x10                        ; 00438b44
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00438b47
    MOV EAX,dword ptr [ESP + 0x28]      ; 00438b4b
    MOV EDX,dword ptr [ESP + 0x30]      ; 00438b4f
    IMUL EAX,EDX                        ; 00438b53
    MOV dword ptr [ESP + 0xc],EAX       ; 00438b56
    MOV EDX,ECX                         ; 00438b5a
    MOV EAX,ECX                         ; 00438b5c
    SAR EDX,0x1f                        ; 00438b5e
    SUB EAX,EDX                         ; 00438b61
    SAR EAX,0x1                         ; 00438b63
    XOR EBP,EBP                         ; 00438b65
    MOV dword ptr [ESP + 0x4],EAX       ; 00438b67
    TEST EAX,EAX                        ; 00438b6b
    JBE 0x00438bc8                      ; 00438b6d
        ;   XREF to: 00438bc8 (CONDITIONAL_JUMP)  ; LAB_00438bc8
    MOV EAX,dword ptr [ESP + 0xc]       ; 00438b6f
    MOV EDX,EAX                         ; 00438b73
    MOV dword ptr [ESP + 0x8],EAX       ; 00438b75
    MOV EBX,EAX                         ; 00438b79
    IMUL ESI,EAX,0x0                    ; 00438b7b
    IMUL ECX,EDX                        ; 00438b7e
    NEG EBX                             ; 00438b81
    MOV EAX,dword ptr [ESP + 0x24]      ; 00438b83
    MOV dword ptr [ESP + 0x8],EBX       ; 00438b87
    ADD ESI,EAX                         ; 00438b8b
    MOV EAX,EDX                         ; 00438b8d
    ADD ECX,ESI                         ; 00438b8f
    MOV dword ptr [ESP],EAX             ; 00438b91
    LEA EDI,[EBX + ECX*0x1]             ; 00438b94
    MOV ECX,dword ptr [ESP + 0xc]       ; 00438b97
        ;   Label: LAB_00438b97
    TEST ECX,ECX                        ; 00438b9b
    JBE 0x00438bb4                      ; 00438b9d
        ;   XREF to: 00438bb4 (CONDITIONAL_JUMP)  ; LAB_00438bb4
    MOV EAX,ESI                         ; 00438b9f
    MOV EDX,EDI                         ; 00438ba1
    ADD ECX,ESI                         ; 00438ba3
    MOV BH,byte ptr [EAX]               ; 00438ba5
        ;   Label: LAB_00438ba5
    MOV BL,byte ptr [EDX]               ; 00438ba7
    INC EDX                             ; 00438ba9
    MOV byte ptr [EAX],BL               ; 00438baa
    INC EAX                             ; 00438bac
    MOV byte ptr [EDX + -0x1],BH        ; 00438bad
    CMP EAX,ECX                         ; 00438bb0
    JC 0x00438ba5                       ; 00438bb2
        ;   XREF to: 00438ba5 (CONDITIONAL_JUMP)  ; LAB_00438ba5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00438bb4
        ;   Label: LAB_00438bb4
    MOV EDX,dword ptr [ESP]             ; 00438bb8
    MOV ECX,dword ptr [ESP + 0x4]       ; 00438bbb
    INC EBP                             ; 00438bbf
    ADD EDI,EAX                         ; 00438bc0
    ADD ESI,EDX                         ; 00438bc2
    CMP EBP,ECX                         ; 00438bc4
    JC 0x00438b97                       ; 00438bc6
        ;   XREF to: 00438b97 (CONDITIONAL_JUMP)  ; LAB_00438b97
    ADD ESP,0x10                        ; 00438bc8
        ;   Label: LAB_00438bc8
    POP EBP                             ; 00438bcb
    POP EDI                             ; 00438bcc
    POP ESI                             ; 00438bcd
    POP EBX                             ; 00438bce
    RET                                 ; 00438bcf

