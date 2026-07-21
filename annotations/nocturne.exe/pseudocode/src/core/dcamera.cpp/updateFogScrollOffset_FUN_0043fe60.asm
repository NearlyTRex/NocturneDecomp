; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_updateFogScrollOffset_FUN_0043fe60(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00446810 at 00446a0c
;   FUN_004470f0 at 00447152
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fe60
        ;   Label: core_dcamera.cpp_updateFogScrollOffset_FUN_0043fe60
    PUSH ESI                            ; 0043fe61
    PUSH EDI                            ; 0043fe62
    PUSH EBP                            ; 0043fe63
    MOV EBX,dword ptr [ESP + 0x14]      ; 0043fe64
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043fe68
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043fe6c
    SHL EAX,0x10                        ; 0043fe70
    ADD EAX,EDX                         ; 0043fe73
    MOV EDX,0x100                       ; 0043fe75
    IMUL EDX                            ; 0043fe7a
    SHRD EAX,EDX,0x10                   ; 0043fe7c
    MOV EDX,dword ptr [EBX + 0x100c]    ; 0043fe80
    MOV ECX,EAX                         ; 0043fe86
    IMUL EDX                            ; 0043fe88
    SHRD EAX,EDX,0x10                   ; 0043fe8a
    MOV ESI,EAX                         ; 0043fe8e
    MOV EDX,dword ptr [EBX + 0x1010]    ; 0043fe90
    MOV dword ptr [EBX + 0x1000],EAX    ; 0043fe96
    NEG ESI                             ; 0043fe9c
    MOV EAX,ECX                         ; 0043fe9e
    MOV dword ptr [EBX + 0x1000],ESI    ; 0043fea0
    IMUL EDX                            ; 0043fea6
    SHRD EAX,EDX,0x10                   ; 0043fea8
    MOV EDI,EAX                         ; 0043feac
    MOV EDX,dword ptr [EBX + 0x1014]    ; 0043feae
    MOV dword ptr [EBX + 0x1004],EAX    ; 0043feb4
    NEG EDI                             ; 0043feba
    MOV EAX,ECX                         ; 0043febc
    MOV dword ptr [EBX + 0x1004],EDI    ; 0043febe
    IMUL EDX                            ; 0043fec4
    SHRD EAX,EDX,0x10                   ; 0043fec6
    MOV EBP,EAX                         ; 0043feca
    MOV dword ptr [EBX + 0x1008],EAX    ; 0043fecc
    NEG EBP                             ; 0043fed2
    MOV dword ptr [EBX + 0x1008],EBP    ; 0043fed4
    POP EBP                             ; 0043feda
    POP EDI                             ; 0043fedb
    POP ESI                             ; 0043fedc
    POP EBX                             ; 0043fedd
    RET                                 ; 0043fede

