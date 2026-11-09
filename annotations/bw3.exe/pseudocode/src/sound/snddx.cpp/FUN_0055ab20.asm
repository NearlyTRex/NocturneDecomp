; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_0055ab20(float param_1)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_snddx.cpp_FUN_0055c0f0 at 0055c1b7
;
; Referenced Globals:
;   undefined4 DAT_005d45a5
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055ab20
        ;   Label: sound_snddx.cpp_FUN_0055ab20
    PUSH EBP                            ; 0055ab21
    MOV EBP,ESP                         ; 0055ab22
    SUB ESP,0x14                        ; 0055ab24
    AND ESP,0xfffffff8                  ; 0055ab27
    FLD float ptr [EBP + 0xc]           ; 0055ab2a
    FLDZ                                ; 0055ab2d
    FXCH                                ; 0055ab2f
    FSTP double ptr [ESP]               ; 0055ab31
    FCOMP double ptr [ESP]              ; 0055ab34
    FNSTSW AX                           ; 0055ab37
    SAHF                                ; 0055ab39
    JNC 0x0055ab4d                      ; 0055ab3a
        ;   XREF to: 0055ab4d (CONDITIONAL_JUMP)  ; LAB_0055ab4d
    FLD1                                ; 0055ab3c
    FCOMP double ptr [ESP]              ; 0055ab3e
    FNSTSW AX                           ; 0055ab41
    SAHF                                ; 0055ab43
    JA 0x0055ab57                       ; 0055ab44
        ;   XREF to: 0055ab57 (CONDITIONAL_JUMP)  ; LAB_0055ab57
    XOR EAX,EAX                         ; 0055ab46
    MOV ESP,EBP                         ; 0055ab48
    POP EBP                             ; 0055ab4a
    POP ESI                             ; 0055ab4b
    RET                                 ; 0055ab4c
    MOV EAX,0xffffd8f0                  ; 0055ab4d
        ;   Label: LAB_0055ab4d
    MOV ESP,EBP                         ; 0055ab52
    POP EBP                             ; 0055ab54
    POP ESI                             ; 0055ab55
    RET                                 ; 0055ab56
    FLD double ptr [ESP]                ; 0055ab57
        ;   Label: LAB_0055ab57
    FLDLN2                              ; 0055ab5a
    FXCH                                ; 0055ab5c
    FYL2X                               ; 0055ab5e
    FMUL double ptr [0x005d45a5]        ; 0055ab60 | DAT_005d45a5
    SUB ESP,0x8                         ; 0055ab66
    FSTP double ptr [ESP]               ; 0055ab69
    CALL crt_math.c_floor_FUN_005a3600  ; 0055ab6c
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 0055ab71
    MOV dword ptr [ESP + 0x14],EDX      ; 0055ab75
    FLD double ptr [ESP + 0x10]         ; 0055ab79
    ADD ESP,0x8                         ; 0055ab7d
    CALL crt_math.c_round_FUN_005a3120  ; 0055ab80
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 0055ab85
    MOV EDX,dword ptr [ESP + 0x10]      ; 0055ab89
    TEST EDX,EDX                        ; 0055ab8d
    JLE 0x0055aba0                      ; 0055ab8f
        ;   XREF to: 0055aba0 (CONDITIONAL_JUMP)  ; LAB_0055aba0
    XOR ESI,ESI                         ; 0055ab91
    MOV dword ptr [ESP + 0x10],ESI      ; 0055ab93
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055ab97
        ;   Label: LAB_0055ab97
    MOV ESP,EBP                         ; 0055ab9b
    POP EBP                             ; 0055ab9d
    POP ESI                             ; 0055ab9e
    RET                                 ; 0055ab9f
    CMP EDX,0xffffd8f0                  ; 0055aba0
        ;   Label: LAB_0055aba0
    JGE 0x0055ab97                      ; 0055aba6
        ;   XREF to: 0055ab97 (CONDITIONAL_JUMP)  ; LAB_0055ab97
    MOV dword ptr [ESP + 0x10],0xffffd8f0 ; 0055aba8
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055abb0
    MOV ESP,EBP                         ; 0055abb4
    POP EBP                             ; 0055abb6
    POP ESI                             ; 0055abb7
    RET                                 ; 0055abb8

