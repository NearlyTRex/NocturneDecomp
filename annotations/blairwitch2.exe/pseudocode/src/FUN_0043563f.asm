; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043563f(void)
;
;
; Called Functions:
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043563f
        ;   Label: FUN_0043563f
    ADD AL,byte ptr [EAX]               ; 00435640
    ADD byte ptr [EAX],AL               ; 00435642
    ADD byte ptr [EAX],AL               ; 00435644
    CALL FUN_005478b0                   ; 00435646
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    LEA EAX,[EBX + 0x25648]             ; 0043564b
    MOV dword ptr [EBX + 0x25654],0x3f800000 ; 00435651
    MOV dword ptr [EAX + 0x8],0x0       ; 0043565b
    ADD ESP,0x8                         ; 00435662
    MOV EDX,dword ptr [EAX + 0x8]       ; 00435665
    MOV dword ptr [EAX + 0x4],EDX       ; 00435668
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043566b
    MOV dword ptr [EAX],EDX             ; 0043566e
    MOV EAX,EBX                         ; 00435670
    POP EBX                             ; 00435672
    RET                                 ; 00435673

