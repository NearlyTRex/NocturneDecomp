; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trigger_cpp_FUN_0056efa0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d6793
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056efa0
        ;   Label: core_trigger.cpp_FUN_0056efa0
    PUSH ESI                            ; 0056efa1
    SUB ESP,0x60                        ; 0056efa2
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0056efa5
    MOV EBX,dword ptr [ESP + 0x70]      ; 0056efa9
    CMP dword ptr [ESI + 0x174],0x4     ; 0056efad
    JZ 0x0056efbe                       ; 0056efb4
        ;   XREF to: 0056efbe (CONDITIONAL_JUMP)  ; LAB_0056efbe
    XOR EAX,EAX                         ; 0056efb6
    ADD ESP,0x60                        ; 0056efb8
    POP ESI                             ; 0056efbb
    POP EBX                             ; 0056efbc
    RET                                 ; 0056efbd
    PUSH EDI                            ; 0056efbe
        ;   Label: LAB_0056efbe
    PUSH ESI                            ; 0056efbf
    MOV EAX,dword ptr [ESI + 0x154]     ; 0056efc0
    LEA ESI,[ESP + 0x20]                ; 0056efc6
    LEA EDI,[ESP + 0x8]                 ; 0056efca
    CALL dword ptr [EAX + 0x1c]         ; 0056efce
    MOV ECX,0x6                         ; 0056efd1
    LEA ESI,[ESP + 0x20]                ; 0056efd6
    ADD ESP,0x4                         ; 0056efda
    MOVSD.REP ES:EDI,ESI                ; 0056efdd
    LEA EAX,[ESP + 0x4]                 ; 0056efdf
    FLD float ptr [ESP + 0x4]           ; 0056efe3
    FLD float ptr [ESP + 0x8]           ; 0056efe7
    FLD float ptr [ESP + 0xc]           ; 0056efeb
    LEA EDI,[ESP + 0x40]                ; 0056efef
    LEA ESI,[ESP + 0x4c]                ; 0056eff3
    FXCH ST2                            ; 0056eff7
    FADD float ptr [EAX + 0xc]          ; 0056eff9
    FXCH                                ; 0056effc
    FADD float ptr [EAX + 0x10]         ; 0056effe
    FXCH ST2                            ; 0056f001
    FADD float ptr [EAX + 0x14]         ; 0056f003
    FXCH                                ; 0056f006
    FSTP float ptr [ESP + 0x4c]         ; 0056f008
    FXCH                                ; 0056f00c
    FSTP float ptr [ESP + 0x50]         ; 0056f00e
    FSTP float ptr [ESP + 0x54]         ; 0056f012
    MOVSD ES:EDI,ESI                    ; 0056f016
    MOVSD ES:EDI,ESI                    ; 0056f017
    MOVSD ES:EDI,ESI                    ; 0056f018
    FLD float ptr [0x005d6793]          ; 0056f019 | DAT_005d6793
    FLD float ptr [ESP + 0x40]          ; 0056f01f
    FMUL ST1                            ; 0056f023
    FLD float ptr [ESP + 0x44]          ; 0056f025
    FMUL ST2                            ; 0056f029
    FLD float ptr [ESP + 0x48]          ; 0056f02b
    FMULP ST3                           ; 0056f02f
    LEA EAX,[ESP + 0x58]                ; 0056f031
    LEA EDI,[ESP + 0x58]                ; 0056f035
    LEA ESI,[ESP + 0x34]                ; 0056f039
    FXCH                                ; 0056f03d
    FSTP float ptr [ESP + 0x34]         ; 0056f03f
    FSTP float ptr [ESP + 0x38]         ; 0056f043
    FSTP float ptr [ESP + 0x3c]         ; 0056f047
    MOVSD ES:EDI,ESI                    ; 0056f04b
    MOVSD ES:EDI,ESI                    ; 0056f04c
    MOVSD ES:EDI,ESI                    ; 0056f04d
    CMP EBX,EAX                         ; 0056f04e
    JZ 0x0056f066                       ; 0056f050
        ;   XREF to: 0056f066 (CONDITIONAL_JUMP)  ; LAB_0056f066
    MOV EAX,dword ptr [ESP + 0x58]      ; 0056f052
    MOV dword ptr [EBX],EAX             ; 0056f056
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0056f058
    MOV dword ptr [EBX + 0x4],EAX       ; 0056f05c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0056f05f
    MOV dword ptr [EBX + 0x8],EAX       ; 0056f063
    MOV EAX,0x1                         ; 0056f066
        ;   Label: LAB_0056f066
    POP EDI                             ; 0056f06b
    ADD ESP,0x60                        ; 0056f06c
    POP ESI                             ; 0056f06f
    POP EBX                             ; 0056f070
    RET                                 ; 0056f071

