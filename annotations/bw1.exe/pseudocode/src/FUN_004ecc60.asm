; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ecc60(void)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ecc60
        ;   Label: FUN_004ecc60
    SUB ESP,0x18                        ; 004ecc61
    MOV EAX,ESI                         ; 004ecc64
    MOV ESI,0x3f800000                  ; 004ecc66
    MOV EDI,0x40c00000                  ; 004ecc6b
    XOR ECX,ECX                         ; 004ecc70
    MOV EDX,0xbf800000                  ; 004ecc72
    MOV dword ptr [ESP + 0x4],ECX       ; 004ecc77
    MOV dword ptr [ESP + 0xc],ESI       ; 004ecc7b
    MOV dword ptr [ESP + 0x10],EDI      ; 004ecc7f
    MOV dword ptr [ESP + 0x14],ESI      ; 004ecc83
    MOV ECX,0x6                         ; 004ecc87
    MOV ESI,ESP                         ; 004ecc8c
    MOV EDI,EAX                         ; 004ecc8e
    MOV dword ptr [ESP + 0x8],EDX       ; 004ecc90
    MOV dword ptr [ESP],EDX             ; 004ecc94
    MOVSD.REP ES:EDI,ESI                ; 004ecc97
    ADD ESP,0x18                        ; 004ecc99
    POP EDI                             ; 004ecc9c
    RET                                 ; 004ecc9d

