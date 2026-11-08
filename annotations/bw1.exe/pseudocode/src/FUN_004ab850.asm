; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ab850(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab850
        ;   Label: FUN_004ab850
    PUSH EDI                            ; 004ab851
    PUSH EBP                            ; 004ab852
    SUB ESP,0x18                        ; 004ab853
    MOV EAX,ESI                         ; 004ab856
    MOV EBX,0xbdcccccd                  ; 004ab858
    MOV ESI,0x3f800000                  ; 004ab85d
    MOV EDI,0x40400000                  ; 004ab862
    MOV EBP,0x3dcccccd                  ; 004ab867
    XOR ECX,ECX                         ; 004ab86c
    MOV EDX,0xbf800000                  ; 004ab86e
    MOV dword ptr [ESP + 0x4],ECX       ; 004ab873
    MOV dword ptr [ESP + 0x8],EBX       ; 004ab877
    MOV dword ptr [ESP + 0xc],ESI       ; 004ab87b
    MOV dword ptr [ESP + 0x10],EDI      ; 004ab87f
    MOV ECX,0x6                         ; 004ab883
    MOV ESI,ESP                         ; 004ab888
    MOV EDI,EAX                         ; 004ab88a
    MOV dword ptr [ESP + 0x14],EBP      ; 004ab88c
    MOV dword ptr [ESP],EDX             ; 004ab890
    MOVSD.REP ES:EDI,ESI                ; 004ab893
    ADD ESP,0x18                        ; 004ab895
    POP EBP                             ; 004ab898
    POP EDI                             ; 004ab899
    POP EBX                             ; 004ab89a
    RET                                 ; 004ab89b

