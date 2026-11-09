; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * unkafter_morph_cpp_FUN_005c4cf0(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005c6b44 at 005c6c55
;   unkafter_morph.cpp_FUN_005c2d60 at 005c2d8d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c4cf0
        ;   Label: unkafter_morph.cpp_FUN_005c4cf0
    PUSH EDI                            ; 005c4cf1
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c4cf2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c4cf6
    MOV EDI,dword ptr [ESP + 0xc]       ; 005c4cfa
    PUSH ES                             ; 005c4cfe
    MOV AX,DS                           ; 005c4cff
    MOV ES,AX                           ; 005c4d01
    PUSH EDI                            ; 005c4d03
    MOV EAX,ECX                         ; 005c4d04
    SHR ECX,0x2                         ; 005c4d06
    MOVSD.REP ES:EDI,ESI                ; 005c4d09
    MOV CL,AL                           ; 005c4d0b
    AND CL,0x3                          ; 005c4d0d
    MOVSB.REP ES:EDI,ESI                ; 005c4d10
    POP EDI                             ; 005c4d12
    POP ES                              ; 005c4d13
    MOV EAX,EDI                         ; 005c4d14
    POP EDI                             ; 005c4d16
    POP ESI                             ; 005c4d17
    RET                                 ; 005c4d18

