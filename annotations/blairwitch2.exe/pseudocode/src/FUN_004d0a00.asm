; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0a00(void)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004d0a00
        ;   Label: FUN_004d0a00
    SUB ESP,0x18                        ; 004d0a01
    MOV EAX,ESI                         ; 004d0a04
    MOV ESI,0x3f800000                  ; 004d0a06
    MOV EDI,0x40c00000                  ; 004d0a0b
    XOR ECX,ECX                         ; 004d0a10
    MOV EDX,0xbf800000                  ; 004d0a12
    MOV dword ptr [ESP + 0x4],ECX       ; 004d0a17
    MOV dword ptr [ESP + 0xc],ESI       ; 004d0a1b
    MOV dword ptr [ESP + 0x10],EDI      ; 004d0a1f
    MOV dword ptr [ESP + 0x14],ESI      ; 004d0a23
    MOV ECX,0x6                         ; 004d0a27
    MOV ESI,ESP                         ; 004d0a2c
    MOV EDI,EAX                         ; 004d0a2e
    MOV dword ptr [ESP + 0x8],EDX       ; 004d0a30
    MOV dword ptr [ESP],EDX             ; 004d0a34
    MOVSD.REP ES:EDI,ESI                ; 004d0a37
    ADD ESP,0x18                        ; 004d0a39
    POP EDI                             ; 004d0a3c
    RET                                 ; 004d0a3d

