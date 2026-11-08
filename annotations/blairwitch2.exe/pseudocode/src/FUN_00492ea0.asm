; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00492ea0(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492ea0
        ;   Label: FUN_00492ea0
    PUSH EDI                            ; 00492ea1
    PUSH EBP                            ; 00492ea2
    SUB ESP,0x18                        ; 00492ea3
    MOV EAX,ESI                         ; 00492ea6
    MOV EBX,0xbdcccccd                  ; 00492ea8
    MOV ESI,0x3f800000                  ; 00492ead
    MOV EDI,0x40400000                  ; 00492eb2
    MOV EBP,0x3dcccccd                  ; 00492eb7
    XOR ECX,ECX                         ; 00492ebc
    MOV EDX,0xbf800000                  ; 00492ebe
    MOV dword ptr [ESP + 0x4],ECX       ; 00492ec3
    MOV dword ptr [ESP + 0x8],EBX       ; 00492ec7
    MOV dword ptr [ESP + 0xc],ESI       ; 00492ecb
    MOV dword ptr [ESP + 0x10],EDI      ; 00492ecf
    MOV ECX,0x6                         ; 00492ed3
    MOV ESI,ESP                         ; 00492ed8
    MOV EDI,EAX                         ; 00492eda
    MOV dword ptr [ESP + 0x14],EBP      ; 00492edc
    MOV dword ptr [ESP],EDX             ; 00492ee0
    MOVSD.REP ES:EDI,ESI                ; 00492ee3
    ADD ESP,0x18                        ; 00492ee5
    POP EBP                             ; 00492ee8
    POP EDI                             ; 00492ee9
    POP EBX                             ; 00492eea
    RET                                 ; 00492eeb

