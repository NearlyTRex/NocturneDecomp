; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_004da000(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0058a161
;   undefined4 DAT_0058a169
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da000
        ;   Label: FUN_004da000
    PUSH EBP                            ; 004da001
    MOV EBP,ESP                         ; 004da002
    SUB ESP,0x24                        ; 004da004
    AND ESP,0xfffffff8                  ; 004da007
    MOV EBX,dword ptr [EBP + 0xc]       ; 004da00a
    MOV ECX,dword ptr [EBP + 0x10]      ; 004da00d
    MOV EAX,ESP                         ; 004da010
    PUSH EAX                            ; 004da012
    MOV EDX,dword ptr [ECX + 0x14c]     ; 004da013
    PUSH ECX                            ; 004da019
    CALL dword ptr [EDX + 0x14]         ; 004da01a
    ADD ESP,0x8                         ; 004da01d
    FLD float ptr [ESP]                 ; 004da020
    FADD float ptr [ESP + 0xc]          ; 004da023
    FST float ptr [ESP + 0x18]          ; 004da027
    FLD float ptr [0x0058a161]          ; 004da02b | DAT_0058a161
    FXCH                                ; 004da031
    FMUL ST1                            ; 004da033
    FLD float ptr [ESP + 0x8]           ; 004da035
    FLD float ptr [ESP + 0x4]           ; 004da039
    FADD float ptr [ESP + 0x10]         ; 004da03d
    FXCH                                ; 004da041
    FADD float ptr [ESP + 0x14]         ; 004da043
    FXCH                                ; 004da047
    FSTP float ptr [ESP + 0x1c]         ; 004da049
    FSTP float ptr [ESP + 0x20]         ; 004da04d
    FSTP float ptr [EBX]                ; 004da051
    FMUL float ptr [ESP + 0x1c]         ; 004da053
    FSTP float ptr [EBX + 0x4]          ; 004da057
    FLD float ptr [ESP + 0x8]           ; 004da05a
    FADD double ptr [0x0058a169]        ; 004da05e | DAT_0058a169
    MOV EAX,EBX                         ; 004da064
    FSTP float ptr [EBX + 0x8]          ; 004da066
    MOV ESP,EBP                         ; 004da069
    POP EBP                             ; 004da06b
    POP EBX                             ; 004da06c
    RET                                 ; 004da06d

