; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00458640(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_nbride2.dfm_0057d4ac
;   undefined4 DAT_0059c3f0
;   undefined4 DAT_0059c3f4
;   undefined1* PTR_FUN_0059c414 = 00458730
;
; Called Functions:
;   FUN_00479560
;   FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00458640
        ;   Label: FUN_00458640
    MOV ESI,dword ptr [ESP + 0x8]       ; 00458641
    PUSH EBX                            ; 00458645
    PUSH ESI                            ; 00458646
    CALL FUN_00479560                   ; 00458647
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined FUN_00479560()
    ADD ESP,0x4                         ; 0045864c
    MOV EBX,EAX                         ; 0045864f
    PUSH 0x57d4ac                       ; 00458651 | = "nbride2.dfm"
    MOV ESI,EAX                         ; 00458656
    ADD EAX,0x150                       ; 00458658
    PUSH EAX                            ; 0045865d
    MOV dword ptr [EAX + -0x4],0x59c414 ; 0045865e | PTR_FUN_0059c414
    CALL FUN_0051e0c0                   ; 00458665
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0c0()
    MOV dword ptr [EBX + 0x2dd4],0x3f000000 ; 0045866a
    MOV dword ptr [EBX + 0x2dd8],0x3f800000 ; 00458674
    MOV byte ptr [EBX + 0xbd48],0x0     ; 0045867e
    MOV dword ptr [EBX + 0x2434],0x43070000 ; 00458685
    FLD float ptr [0x0059c3f0]          ; 0045868f | DAT_0059c3f0
    MOV dword ptr [EBX + 0xbdb0],0x0    ; 00458695
    FLD float ptr [0x0059c3f4]          ; 0045869f | DAT_0059c3f4
    MOV dword ptr [EBX + 0xbdb4],0x0    ; 004586a5
    LEA EAX,[EBX + 0xbdc0]              ; 004586af
    FXCH                                ; 004586b5
    FSTP float ptr [EBX + 0x2ddc]       ; 004586b7
    FSTP float ptr [EBX + 0x2de0]       ; 004586bd
    MOV dword ptr [EAX + 0x8],0x0       ; 004586c3
    ADD ESP,0x8                         ; 004586ca
    MOV EDX,dword ptr [EAX + 0x8]       ; 004586cd
    MOV dword ptr [EAX + 0x4],EDX       ; 004586d0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004586d3
    MOV dword ptr [EAX],EDX             ; 004586d6
    MOV dword ptr [EBX + 0xbdcc],0x0    ; 004586d8
    MOV EAX,EBX                         ; 004586e2
    MOV dword ptr [EBX + 0xbdac],0x1    ; 004586e4
    LEA EDX,[EBX + 0x78]                ; 004586ee
    POP EBX                             ; 004586f1
    ADD EAX,0x4                         ; 004586f2
        ;   Label: LAB_004586f2
    MOV dword ptr [EAX + 0xbdd0],0x0    ; 004586f5
    CMP EAX,EDX                         ; 004586ff
    JNZ 0x004586f2                      ; 00458701
        ;   XREF to: 004586f2 (CONDITIONAL_JUMP)  ; LAB_004586f2
    MOV dword ptr [ESI + 0xbdd0],0x0    ; 00458703
    MOV dword ptr [ESI + 0xbe50],0x0    ; 0045870d
    MOV dword ptr [ESI + 0xbdbc],0x0    ; 00458717
    MOV EAX,ESI                         ; 00458721
    MOV dword ptr [ESI + 0xbe4c],0x0    ; 00458723
    POP ESI                             ; 0045872d
    RET                                 ; 0045872e

