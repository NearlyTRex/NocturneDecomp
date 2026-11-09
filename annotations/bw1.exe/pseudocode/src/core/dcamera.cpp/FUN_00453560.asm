; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00453560(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7907
;
; Called Functions:
;   core_dcamera.cpp_FUN_0044dd70
;   core_dcamera.cpp_FUN_0044de40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453560
        ;   Label: core_dcamera.cpp_FUN_00453560
    PUSH EDI                            ; 00453561
    SUB ESP,0x40                        ; 00453562
    MOV EBX,ESI                         ; 00453565
    MOV EDX,dword ptr [ESP + 0x54]      ; 00453567
    PUSH EDX                            ; 0045356b
    MOV ECX,dword ptr [ESP + 0x54]      ; 0045356c
    PUSH ECX                            ; 00453570
    MOV ESI,dword ptr [ESP + 0x54]      ; 00453571
    PUSH ESI                            ; 00453575
    LEA ESI,[ESP + 0x18]                ; 00453576
    LEA EDI,[ESP + 0x30]                ; 0045357a
    CALL core_dcamera.cpp_FUN_0044dd70  ; 0045357e
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x18]                ; 00453583
    ADD ESP,0xc                         ; 00453587
    LEA EAX,[ESP + 0x24]                ; 0045358a
    MOVSD ES:EDI,ESI                    ; 0045358e
    MOVSD ES:EDI,ESI                    ; 0045358f
    MOVSD ES:EDI,ESI                    ; 00453590
    PUSH EAX                            ; 00453591
    MOV EDI,dword ptr [ESP + 0x50]      ; 00453592
    PUSH EDI                            ; 00453596
    LEA ESI,[ESP + 0x8]                 ; 00453597
    CALL core_dcamera.cpp_FUN_0044de40  ; 0045359b
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044de40()
    LEA EDI,[ESP + 0x38]                ; 004535a0
    LEA ESI,[ESP + 0x8]                 ; 004535a4
    ADD ESP,0x8                         ; 004535a8
    MOVSD ES:EDI,ESI                    ; 004535ab
    MOVSD ES:EDI,ESI                    ; 004535ac
    MOVSD ES:EDI,ESI                    ; 004535ad
    MOV EAX,dword ptr [ESP + 0x30]      ; 004535ae
    MOV dword ptr [ESP + 0x3c],EAX      ; 004535b2
    FILD dword ptr [ESP + 0x3c]         ; 004535b6
    MOV EAX,dword ptr [ESP + 0x34]      ; 004535ba
    FLD double ptr [0x005d7907]         ; 004535be | DAT_005d7907
    FXCH                                ; 004535c4
    FMUL ST1                            ; 004535c6
    MOV dword ptr [ESP + 0x3c],EAX      ; 004535c8
    MOV EAX,dword ptr [ESP + 0x38]      ; 004535cc
    FILD dword ptr [ESP + 0x3c]         ; 004535d0
    MOV dword ptr [ESP + 0x3c],EAX      ; 004535d4
    FMUL ST2                            ; 004535d8
    FILD dword ptr [ESP + 0x3c]         ; 004535da
    FMULP ST3                           ; 004535de
    LEA ESI,[ESP + 0x18]                ; 004535e0
    MOV EDI,EBX                         ; 004535e4
    FXCH                                ; 004535e6
    FSTP float ptr [ESP + 0x18]         ; 004535e8
    FSTP float ptr [ESP + 0x1c]         ; 004535ec
    FSTP float ptr [ESP + 0x20]         ; 004535f0
    MOVSD ES:EDI,ESI                    ; 004535f4
    MOVSD ES:EDI,ESI                    ; 004535f5
    MOVSD ES:EDI,ESI                    ; 004535f6
    MOV EAX,EBX                         ; 004535f7
    ADD ESP,0x40                        ; 004535f9
    POP EDI                             ; 004535fc
    POP EBX                             ; 004535fd
    RET                                 ; 004535fe

