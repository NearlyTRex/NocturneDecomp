; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_00554f80(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_snddx.cpp_FUN_00556550 at 00556617
;
; Referenced Globals:
;   undefined4 DAT_005e9ab1
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00554f80
        ;   Label: sound_snddx.cpp_FUN_00554f80
    PUSH EBP                            ; 00554f81
    MOV EBP,ESP                         ; 00554f82
    SUB ESP,0x14                        ; 00554f84
    AND ESP,0xfffffff8                  ; 00554f87
    FLD float ptr [EBP + 0xc]           ; 00554f8a
    FLDZ                                ; 00554f8d
    FXCH                                ; 00554f8f
    FSTP double ptr [ESP]               ; 00554f91
    FCOMP double ptr [ESP]              ; 00554f94
    FNSTSW AX                           ; 00554f97
    SAHF                                ; 00554f99
    JNC 0x00554fad                      ; 00554f9a
        ;   XREF to: 00554fad (CONDITIONAL_JUMP)  ; LAB_00554fad
    FLD1                                ; 00554f9c
    FCOMP double ptr [ESP]              ; 00554f9e
    FNSTSW AX                           ; 00554fa1
    SAHF                                ; 00554fa3
    JA 0x00554fb7                       ; 00554fa4
        ;   XREF to: 00554fb7 (CONDITIONAL_JUMP)  ; LAB_00554fb7
    XOR EAX,EAX                         ; 00554fa6
    MOV ESP,EBP                         ; 00554fa8
    POP EBP                             ; 00554faa
    POP ESI                             ; 00554fab
    RET                                 ; 00554fac
    MOV EAX,0xffffd8f0                  ; 00554fad
        ;   Label: LAB_00554fad
    MOV ESP,EBP                         ; 00554fb2
    POP EBP                             ; 00554fb4
    POP ESI                             ; 00554fb5
    RET                                 ; 00554fb6
    FLD double ptr [ESP]                ; 00554fb7
        ;   Label: LAB_00554fb7
    FLDLN2                              ; 00554fba
    FXCH                                ; 00554fbc
    FYL2X                               ; 00554fbe
    FMUL double ptr [0x005e9ab1]        ; 00554fc0 | DAT_005e9ab1
    SUB ESP,0x8                         ; 00554fc6
    FSTP double ptr [ESP]               ; 00554fc9
    CALL crt_math.c_floor_FUN_005b84d0  ; 00554fcc
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 00554fd1
    MOV dword ptr [ESP + 0x14],EDX      ; 00554fd5
    FLD double ptr [ESP + 0x10]         ; 00554fd9
    ADD ESP,0x8                         ; 00554fdd
    CALL crt_math.c_round_FUN_005b7ff0  ; 00554fe0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 00554fe5
    MOV EDX,dword ptr [ESP + 0x10]      ; 00554fe9
    TEST EDX,EDX                        ; 00554fed
    JLE 0x00555000                      ; 00554fef
        ;   XREF to: 00555000 (CONDITIONAL_JUMP)  ; LAB_00555000
    XOR ESI,ESI                         ; 00554ff1
    MOV dword ptr [ESP + 0x10],ESI      ; 00554ff3
    MOV EAX,dword ptr [ESP + 0x10]      ; 00554ff7
        ;   Label: LAB_00554ff7
    MOV ESP,EBP                         ; 00554ffb
    POP EBP                             ; 00554ffd
    POP ESI                             ; 00554ffe
    RET                                 ; 00554fff
    CMP EDX,0xffffd8f0                  ; 00555000
        ;   Label: LAB_00555000
    JGE 0x00554ff7                      ; 00555006
        ;   XREF to: 00554ff7 (CONDITIONAL_JUMP)  ; LAB_00554ff7
    MOV dword ptr [ESP + 0x10],0xffffd8f0 ; 00555008
    MOV EAX,dword ptr [ESP + 0x10]      ; 00555010
    MOV ESP,EBP                         ; 00555014
    POP EBP                             ; 00555016
    POP ESI                             ; 00555017
    RET                                 ; 00555018

