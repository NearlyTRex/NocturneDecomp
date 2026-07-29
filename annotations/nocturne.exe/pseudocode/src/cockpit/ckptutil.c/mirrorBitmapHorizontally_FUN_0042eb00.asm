; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_0042eb00(uchar *bitmap_data,int width,int height,int bytes_per_pixel)
;
; Parameters:
; uchar *          Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   bytes_per_pixel
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042eb00
        ;   Label: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_0042eb00
    PUSH ESI                            ; 0042eb01
    PUSH EDI                            ; 0042eb02
    PUSH EBP                            ; 0042eb03
    SUB ESP,0x10                        ; 0042eb04
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042eb07
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042eb0b
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042eb0f
    IMUL EAX,EDX                        ; 0042eb13
    MOV dword ptr [ESP + 0xc],EAX       ; 0042eb16
    MOV EDX,ECX                         ; 0042eb1a
    MOV EAX,ECX                         ; 0042eb1c
    SAR EDX,0x1f                        ; 0042eb1e
    SUB EAX,EDX                         ; 0042eb21
    SAR EAX,0x1                         ; 0042eb23
    XOR EBP,EBP                         ; 0042eb25
    MOV dword ptr [ESP + 0x4],EAX       ; 0042eb27
    TEST EAX,EAX                        ; 0042eb2b
    JBE 0x0042eb88                      ; 0042eb2d
        ;   XREF to: 0042eb88 (CONDITIONAL_JUMP)  ; LAB_0042eb88
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042eb2f
    MOV EDX,EAX                         ; 0042eb33
    MOV dword ptr [ESP + 0x8],EAX       ; 0042eb35
    MOV EBX,EAX                         ; 0042eb39
    IMUL ESI,EAX,0x0                    ; 0042eb3b
    IMUL ECX,EDX                        ; 0042eb3e
    NEG EBX                             ; 0042eb41
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042eb43
    MOV dword ptr [ESP + 0x8],EBX       ; 0042eb47
    ADD ESI,EAX                         ; 0042eb4b
    MOV EAX,EDX                         ; 0042eb4d
    ADD ECX,ESI                         ; 0042eb4f
    MOV dword ptr [ESP],EAX             ; 0042eb51
    LEA EDI,[EBX + ECX*0x1]             ; 0042eb54
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042eb57
        ;   Label: LAB_0042eb57
    TEST ECX,ECX                        ; 0042eb5b
    JBE 0x0042eb74                      ; 0042eb5d
        ;   XREF to: 0042eb74 (CONDITIONAL_JUMP)  ; LAB_0042eb74
    MOV EAX,ESI                         ; 0042eb5f
    MOV EDX,EDI                         ; 0042eb61
    ADD ECX,ESI                         ; 0042eb63
    MOV BH,byte ptr [EAX]               ; 0042eb65
        ;   Label: LAB_0042eb65
    MOV BL,byte ptr [EDX]               ; 0042eb67
    INC EDX                             ; 0042eb69
    MOV byte ptr [EAX],BL               ; 0042eb6a
    INC EAX                             ; 0042eb6c
    MOV byte ptr [EDX + -0x1],BH        ; 0042eb6d
    CMP EAX,ECX                         ; 0042eb70
    JC 0x0042eb65                       ; 0042eb72
        ;   XREF to: 0042eb65 (CONDITIONAL_JUMP)  ; LAB_0042eb65
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042eb74
        ;   Label: LAB_0042eb74
    MOV EDX,dword ptr [ESP]             ; 0042eb78
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042eb7b
    INC EBP                             ; 0042eb7f
    ADD EDI,EAX                         ; 0042eb80
    ADD ESI,EDX                         ; 0042eb82
    CMP EBP,ECX                         ; 0042eb84
    JC 0x0042eb57                       ; 0042eb86
        ;   XREF to: 0042eb57 (CONDITIONAL_JUMP)  ; LAB_0042eb57
    ADD ESP,0x10                        ; 0042eb88
        ;   Label: LAB_0042eb88
    POP EBP                             ; 0042eb8b
    POP EDI                             ; 0042eb8c
    POP ESI                             ; 0042eb8d
    POP EBX                             ; 0042eb8e
    RET                                 ; 0042eb8f

