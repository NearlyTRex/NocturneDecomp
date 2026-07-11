; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447760(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00482f50 at 0048314c
;
; Referenced Globals:
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c0063c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447760
        ;   Label: FUN_00447760
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447761
    MOV EAX,dword ptr [ESP + 0xc]       ; 00447765
    TEST byte ptr [EAX + 0x13],0x80     ; 00447769
    JZ 0x00447781                       ; 0044776d
        ;   XREF to: 00447781 (CONDITIONAL_JUMP)  ; LAB_00447781
    MOV dword ptr [EAX + 0x28],0x0      ; 0044776f
    MOV EDX,dword ptr [EAX + 0x28]      ; 00447776
    MOV dword ptr [EAX + 0x24],EDX      ; 00447779
    MOV dword ptr [EAX + 0x20],EDX      ; 0044777c
    POP EBX                             ; 0044777f
    RET                                 ; 00447780
    PUSH ESI                            ; 00447781
        ;   Label: LAB_00447781
    MOV ECX,dword ptr [EAX + 0x14]      ; 00447782
    MOV ESI,dword ptr [EBX + 0x13c]     ; 00447785
    SAR ECX,0x10                        ; 0044778b
    IMUL ECX,ESI                        ; 0044778e
    MOV EDX,dword ptr [EAX + 0x10]      ; 00447791
    SAR EDX,0x10                        ; 00447794
    ADD EDX,ECX                         ; 00447797
    MOV ECX,dword ptr [EBX + 0x158]     ; 00447799
    MOV EDX,dword ptr [ECX + EDX*0x4]   ; 0044779f
    MOV CL,byte ptr [0x01c00624]        ; 004477a2 | DAT_01c00624
    MOV EBX,EDX                         ; 004477a8
    SHR EBX,CL                          ; 004477aa
    MOV ESI,EDX                         ; 004477ac
    AND EBX,0xff                        ; 004477ae
    MOV CL,byte ptr [0x01c00630]        ; 004477b4 | DAT_01c00630
    SHL EBX,0x8                         ; 004477ba
    SHR ESI,CL                          ; 004477bd
    MOV CL,byte ptr [0x01c0063c]        ; 004477bf | DAT_01c0063c
    AND ESI,0xff                        ; 004477c5
    MOV dword ptr [EAX + 0x20],EBX      ; 004477cb
    SHR EDX,CL                          ; 004477ce
    SHL ESI,0x8                         ; 004477d0
    AND EDX,0xff                        ; 004477d3
    MOV dword ptr [EAX + 0x24],ESI      ; 004477d9
    SHL EDX,0x8                         ; 004477dc
    MOV dword ptr [EAX + 0x28],EDX      ; 004477df
    POP ESI                             ; 004477e2
    POP EBX                             ; 004477e3
    RET                                 ; 004477e4

