; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_filmreel_cpp_FUN_004966f0(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004966f0
        ;   Label: core_filmreel.cpp_FUN_004966f0
    PUSH EDI                            ; 004966f1
    PUSH EBP                            ; 004966f2
    SUB ESP,0x18                        ; 004966f3
    MOV EAX,ESI                         ; 004966f6
    MOV EBX,0xbdcccccd                  ; 004966f8
    MOV ESI,0x3f800000                  ; 004966fd
    MOV EDI,0x40400000                  ; 00496702
    MOV EBP,0x3dcccccd                  ; 00496707
    XOR ECX,ECX                         ; 0049670c
    MOV EDX,0xbf800000                  ; 0049670e
    MOV dword ptr [ESP + 0x4],ECX       ; 00496713
    MOV dword ptr [ESP + 0x8],EBX       ; 00496717
    MOV dword ptr [ESP + 0xc],ESI       ; 0049671b
    MOV dword ptr [ESP + 0x10],EDI      ; 0049671f
    MOV ECX,0x6                         ; 00496723
    MOV ESI,ESP                         ; 00496728
    MOV EDI,EAX                         ; 0049672a
    MOV dword ptr [ESP + 0x14],EBP      ; 0049672c
    MOV dword ptr [ESP],EDX             ; 00496730
    MOVSD.REP ES:EDI,ESI                ; 00496733
    ADD ESP,0x18                        ; 00496735
    POP EBP                             ; 00496738
    POP EDI                             ; 00496739
    POP EBX                             ; 0049673a
    RET                                 ; 0049673b

