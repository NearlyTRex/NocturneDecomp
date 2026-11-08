; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00583610(int param_1)
;
;
; XREF[1]:
;   FUN_00581910 at 00582606
;
; Referenced Globals:
;   TerminatedCString s_voicubat_wav_005edbb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00583610
        ;   Label: FUN_00583610
    MOV dword ptr [EAX + 0xc2f3c],0x1   ; 00583614
    MOV dword ptr [EAX + 0xc3b80],0x1   ; 0058361e
    PUSH 0x5edbb0                       ; 00583628 | = "voicubat.wav"
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0058362d
    PUSH EAX                            ; 00583633
    MOV dword ptr [EAX + 0xc3b70],0x40000000 ; 00583634
    CALL dword ptr [EDX + 0x34]         ; 0058363e
    ADD ESP,0x8                         ; 00583641
    RET                                 ; 00583644

