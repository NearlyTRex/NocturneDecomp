; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f6870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f6a70 at 004f6afb
;
; Referenced Globals:
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_01d0d2e8
;   undefined4 DAT_01d0d2ec
;   undefined4 DAT_01d0d2f0
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f6970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6870
        ;   Label: engine_mini3d.cpp_FUN_004f6870
    PUSH ESI                            ; 004f6871
    PUSH EBP                            ; 004f6872
    SUB ESP,0xc                         ; 004f6873
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004f6876
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f687a
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f687e
    FLD float ptr [EBX + 0x14]          ; 004f6882
    FLD float ptr [EBP + 0x18]          ; 004f6885
    FSUB float ptr [EBX + 0x18]         ; 004f6888
    FXCH                                ; 004f688b
    FSUB float ptr [ESI + 0x14]         ; 004f688d
    FMULP                               ; 004f6890
    FLD float ptr [EBP + 0x14]          ; 004f6892
    FLD float ptr [EBX + 0x18]          ; 004f6895
    FSUB float ptr [ESI + 0x18]         ; 004f6898
    FXCH                                ; 004f689b
    FSUB float ptr [EBX + 0x14]         ; 004f689d
    FMULP                               ; 004f68a0
    FCOMPP                              ; 004f68a2
    FNSTSW AX                           ; 004f68a4
    SAHF                                ; 004f68a6
    JNC 0x004f695a                      ; 004f68a7
        ;   XREF to: 004f695a (CONDITIONAL_JUMP)  ; LAB_004f695a
    MOV EDX,dword ptr [0x01d0d2ec]      ; 004f68ad | DAT_01d0d2ec
    MOV EAX,[0x01d0d2e8]                ; 004f68b3 | DAT_01d0d2e8
    ADD EAX,EDX                         ; 004f68b8
    ADD EAX,0x3                         ; 004f68ba
    CMP EAX,0x2710                      ; 004f68bd
    JGE 0x004f68d3                      ; 004f68c2
        ;   XREF to: 004f68d3 (CONDITIONAL_JUMP)  ; LAB_004f68d3
    MOV EAX,[0x01d0d2f0]                ; 004f68c4 | DAT_01d0d2f0
    ADD EAX,0x3                         ; 004f68c9
    CMP EAX,0x2710                      ; 004f68cc
    JL 0x004f68d8                       ; 004f68d1
        ;   XREF to: 004f68d8 (CONDITIONAL_JUMP)  ; LAB_004f68d8
    CALL engine_mini3d.cpp_FUN_004f6970 ; 004f68d3
        ;   XREF to: 004f6970 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6970()
        ;   Label: LAB_004f68d3
    PUSH EDI                            ; 004f68d8
        ;   Label: LAB_004f68d8
    MOV ECX,dword ptr [0x01d0d2ec]      ; 004f68d9 | DAT_01d0d2ec
    MOV EDX,dword ptr [0x01d0d2e8]      ; 004f68df | DAT_01d0d2e8
    ADD EDX,ECX                         ; 004f68e5
    MOV EAX,[0x01d09b7c]                ; 004f68e7 | DAT_01d09b7c
    SHL EDX,0x6                         ; 004f68ec
    ADD EAX,EDX                         ; 004f68ef
    MOV ECX,0x10                        ; 004f68f1
    MOV EDI,EAX                         ; 004f68f6
    MOVSD.REP ES:EDI,ESI                ; 004f68f8
    MOV ECX,0x10                        ; 004f68fa
    MOV ESI,EBX                         ; 004f68ff
    LEA EDI,[EAX + 0x40]                ; 004f6901
    MOVSD.REP ES:EDI,ESI                ; 004f6904
    MOV ECX,0x10                        ; 004f6906
    MOV ESI,EBP                         ; 004f690b
    LEA EDI,[EAX + 0x80]                ; 004f690d
    MOV AX,[0x01d0d2ec]                 ; 004f6913 | DAT_01d0d2ec
    MOVSD.REP ES:EDI,ESI                ; 004f6919
    MOV ESI,EAX                         ; 004f691b
    MOV EBX,dword ptr [0x01d0d2f0]      ; 004f691d | DAT_01d0d2f0
    INC ESI                             ; 004f6923
    MOV word ptr [EBX*0x2 + 0x1d0d2f6],SI ; 004f6924
    MOV ESI,EAX                         ; 004f692c
    ADD EBX,0x3                         ; 004f692e
    ADD ESI,0x2                         ; 004f6931
    MOV word ptr [EBX*0x2 + 0x1d0d2f2],SI ; 004f6934
    MOV ESI,dword ptr [0x01d0d2ec]      ; 004f693c | DAT_01d0d2ec
    MOV dword ptr [0x01d0d2f0],EBX      ; 004f6942 | DAT_01d0d2f0
    ADD ESI,0x3                         ; 004f6948
    MOV word ptr [EBX*0x2 + 0x1d0d2ee],AX ; 004f694b
    MOV dword ptr [0x01d0d2ec],ESI      ; 004f6953 | DAT_01d0d2ec
    POP EDI                             ; 004f6959
    ADD ESP,0xc                         ; 004f695a
        ;   Label: LAB_004f695a
    POP EBP                             ; 004f695d
    POP ESI                             ; 004f695e
    POP EBX                             ; 004f695f
    RET                                 ; 004f6960

