; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d4ba0(void)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004d4ba0
        ;   Label: core_hero.cpp_FUN_004d4ba0
    SUB ESP,0x18                        ; 004d4ba1
    MOV EAX,ESI                         ; 004d4ba4
    MOV ESI,0x3f800000                  ; 004d4ba6
    MOV EDI,0x40c00000                  ; 004d4bab
    XOR ECX,ECX                         ; 004d4bb0
    MOV EDX,0xbf800000                  ; 004d4bb2
    MOV dword ptr [ESP + 0x4],ECX       ; 004d4bb7
    MOV dword ptr [ESP + 0xc],ESI       ; 004d4bbb
    MOV dword ptr [ESP + 0x10],EDI      ; 004d4bbf
    MOV dword ptr [ESP + 0x14],ESI      ; 004d4bc3
    MOV ECX,0x6                         ; 004d4bc7
    MOV ESI,ESP                         ; 004d4bcc
    MOV EDI,EAX                         ; 004d4bce
    MOV dword ptr [ESP + 0x8],EDX       ; 004d4bd0
    MOV dword ptr [ESP],EDX             ; 004d4bd4
    MOVSD.REP ES:EDI,ESI                ; 004d4bd7
    ADD ESP,0x18                        ; 004d4bd9
    POP EDI                             ; 004d4bdc
    RET                                 ; 004d4bdd

