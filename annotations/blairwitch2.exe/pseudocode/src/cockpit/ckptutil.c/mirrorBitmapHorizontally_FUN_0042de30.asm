; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_0042de30(uchar *bitmap_data,int width,int height,int bytes_per_pixel)
;
; Parameters:
; uchar *          Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   bytes_per_pixel
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042de30
        ;   Label: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_0042de30
    PUSH ESI                            ; 0042de31
    PUSH EDI                            ; 0042de32
    PUSH EBP                            ; 0042de33
    SUB ESP,0x10                        ; 0042de34
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042de37
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042de3b
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042de3f
    IMUL EAX,EDX                        ; 0042de43
    MOV dword ptr [ESP + 0xc],EAX       ; 0042de46
    MOV EDX,ECX                         ; 0042de4a
    MOV EAX,ECX                         ; 0042de4c
    SAR EDX,0x1f                        ; 0042de4e
    SUB EAX,EDX                         ; 0042de51
    SAR EAX,0x1                         ; 0042de53
    XOR EBP,EBP                         ; 0042de55
    MOV dword ptr [ESP + 0x4],EAX       ; 0042de57
    TEST EAX,EAX                        ; 0042de5b
    JBE 0x0042deb8                      ; 0042de5d
        ;   XREF to: 0042deb8 (CONDITIONAL_JUMP)  ; LAB_0042deb8
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042de5f
    MOV EDX,EAX                         ; 0042de63
    MOV dword ptr [ESP + 0x8],EAX       ; 0042de65
    MOV EBX,EAX                         ; 0042de69
    IMUL ESI,EAX,0x0                    ; 0042de6b
    IMUL ECX,EDX                        ; 0042de6e
    NEG EBX                             ; 0042de71
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042de73
    MOV dword ptr [ESP + 0x8],EBX       ; 0042de77
    ADD ESI,EAX                         ; 0042de7b
    MOV EAX,EDX                         ; 0042de7d
    ADD ECX,ESI                         ; 0042de7f
    MOV dword ptr [ESP],EAX             ; 0042de81
    LEA EDI,[EBX + ECX*0x1]             ; 0042de84
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042de87
        ;   Label: LAB_0042de87
    TEST ECX,ECX                        ; 0042de8b
    JBE 0x0042dea4                      ; 0042de8d
        ;   XREF to: 0042dea4 (CONDITIONAL_JUMP)  ; LAB_0042dea4
    MOV EAX,ESI                         ; 0042de8f
    MOV EDX,EDI                         ; 0042de91
    ADD ECX,ESI                         ; 0042de93
    MOV BH,byte ptr [EAX]               ; 0042de95
        ;   Label: LAB_0042de95
    MOV BL,byte ptr [EDX]               ; 0042de97
    INC EDX                             ; 0042de99
    MOV byte ptr [EAX],BL               ; 0042de9a
    INC EAX                             ; 0042de9c
    MOV byte ptr [EDX + -0x1],BH        ; 0042de9d
    CMP EAX,ECX                         ; 0042dea0
    JC 0x0042de95                       ; 0042dea2
        ;   XREF to: 0042de95 (CONDITIONAL_JUMP)  ; LAB_0042de95
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042dea4
        ;   Label: LAB_0042dea4
    MOV EDX,dword ptr [ESP]             ; 0042dea8
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042deab
    INC EBP                             ; 0042deaf
    ADD EDI,EAX                         ; 0042deb0
    ADD ESI,EDX                         ; 0042deb2
    CMP EBP,ECX                         ; 0042deb4
    JC 0x0042de87                       ; 0042deb6
        ;   XREF to: 0042de87 (CONDITIONAL_JUMP)  ; LAB_0042de87
    ADD ESP,0x10                        ; 0042deb8
        ;   Label: LAB_0042deb8
    POP EBP                             ; 0042debb
    POP EDI                             ; 0042debc
    POP ESI                             ; 0042debd
    POP EBX                             ; 0042debe
    RET                                 ; 0042debf

