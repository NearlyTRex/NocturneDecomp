; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568d70(void)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00568d70
        ;   Label: FUN_00568d70
    SUB ESP,0x18                        ; 00568d71
    MOV EAX,ESI                         ; 00568d74
    MOV ECX,0xbf800000                  ; 00568d76
    MOV ESI,0x40e00000                  ; 00568d7b
    MOV EDI,0x41000000                  ; 00568d80
    MOV EDX,0xc0e00000                  ; 00568d85
    MOV dword ptr [ESP + 0x4],ECX       ; 00568d8a
    MOV dword ptr [ESP + 0xc],ESI       ; 00568d8e
    MOV dword ptr [ESP + 0x10],EDI      ; 00568d92
    MOV dword ptr [ESP + 0x14],ESI      ; 00568d96
    MOV ECX,0x6                         ; 00568d9a
    MOV ESI,ESP                         ; 00568d9f
    MOV EDI,EAX                         ; 00568da1
    MOV dword ptr [ESP + 0x8],EDX       ; 00568da3
    MOV dword ptr [ESP],EDX             ; 00568da7
    MOVSD.REP ES:EDI,ESI                ; 00568daa
    ADD ESP,0x18                        ; 00568dac
    POP EDI                             ; 00568daf
    RET                                 ; 00568db0

