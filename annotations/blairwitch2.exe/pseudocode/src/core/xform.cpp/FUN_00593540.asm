; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00593540(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005eed8a
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00593540
        ;   Label: core_xform.cpp_FUN_00593540
    PUSH EBP                            ; 00593541
    SUB ESP,0x30                        ; 00593542
    MOV EAX,ESI                         ; 00593545
    FLD float ptr [ESP + 0x3c]          ; 00593547
    FMUL float ptr [0x005eed8a]         ; 0059354b | DAT_005eed8a
    MOV EDX,0x3f800000                  ; 00593551
    MOV EBP,0xbf800000                  ; 00593556
    MOV EDI,ESI                         ; 0059355b
    XOR ECX,ECX                         ; 0059355d
    MOV ESI,ESP                         ; 0059355f
    MOV dword ptr [ESP],EDX             ; 00593561
    MOV dword ptr [ESP + 0x4],ECX       ; 00593564
    MOV dword ptr [ESP + 0x8],ECX       ; 00593568
    MOV dword ptr [ESP + 0xc],ECX       ; 0059356c
    MOV dword ptr [ESP + 0x10],ECX      ; 00593570
    MOV dword ptr [ESP + 0x14],EBP      ; 00593574
    MOV dword ptr [ESP + 0x18],ECX      ; 00593578
    MOV dword ptr [ESP + 0x20],ECX      ; 0059357c
    MOV dword ptr [ESP + 0x24],ECX      ; 00593580
    MOV dword ptr [ESP + 0x28],EDX      ; 00593584
    MOV dword ptr [ESP + 0x2c],ECX      ; 00593588
    MOV ECX,0xc                         ; 0059358c
    FSTP float ptr [ESP + 0x1c]         ; 00593591
    MOVSD.REP ES:EDI,ESI                ; 00593595
    ADD ESP,0x30                        ; 00593597
    POP EBP                             ; 0059359a
    POP EDI                             ; 0059359b
    RET                                 ; 0059359c

