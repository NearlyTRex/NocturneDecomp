; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * unkafter_zombie_cpp_FUN_005ccff0(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005cee44 at 005cef55
;   unkafter_zombie.cpp_FUN_005cb060 at 005cb08d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005ccff0
        ;   Label: unkafter_zombie.cpp_FUN_005ccff0
    PUSH EDI                            ; 005ccff1
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ccff2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ccff6
    MOV EDI,dword ptr [ESP + 0xc]       ; 005ccffa
    PUSH ES                             ; 005ccffe
    MOV AX,DS                           ; 005ccfff
    MOV ES,AX                           ; 005cd001
    PUSH EDI                            ; 005cd003
    MOV EAX,ECX                         ; 005cd004
    SHR ECX,0x2                         ; 005cd006
    MOVSD.REP ES:EDI,ESI                ; 005cd009
    MOV CL,AL                           ; 005cd00b
    AND CL,0x3                          ; 005cd00d
    MOVSB.REP ES:EDI,ESI                ; 005cd010
    POP EDI                             ; 005cd012
    POP ES                              ; 005cd013
    MOV EAX,EDI                         ; 005cd014
    POP EDI                             ; 005cd016
    POP ESI                             ; 005cd017
    RET                                 ; 005cd018

