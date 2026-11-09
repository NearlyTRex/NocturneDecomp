; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_0056da40(int param_1,int param_2)
;
;
; Called Functions:
;   core_stranger.cpp_FUN_00568500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056da40
        ;   Label: core_stranger.cpp_FUN_0056da40
    PUSH EDI                            ; 0056da41
    SUB ESP,0x30                        ; 0056da42
    MOV EDX,dword ptr [ESP + 0x40]      ; 0056da45
    MOV EBX,ESI                         ; 0056da49
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0056da4b
    PUSH EDX                            ; 0056da4f
    SHL EDX,0x3                         ; 0056da50
    MOV EAX,EDX                         ; 0056da53
    SHL EAX,0x4                         ; 0056da55
    SUB EAX,EDX                         ; 0056da58
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x2620] ; 0056da5a
    PUSH EDX                            ; 0056da61
    PUSH ESI                            ; 0056da62
    LEA ESI,[ESP + 0xc]                 ; 0056da63
    MOV EDI,EBX                         ; 0056da67
    CALL core_stranger.cpp_FUN_00568500 ; 0056da69
        ;   XREF to: 00568500 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00568500()
    MOV ECX,0xc                         ; 0056da6e
    LEA ESI,[ESP + 0xc]                 ; 0056da73
    ADD ESP,0xc                         ; 0056da77
    MOVSD.REP ES:EDI,ESI                ; 0056da7a
    MOV EAX,EBX                         ; 0056da7c
    ADD ESP,0x30                        ; 0056da7e
    POP EDI                             ; 0056da81
    POP EBX                             ; 0056da82
    RET                                 ; 0056da83

