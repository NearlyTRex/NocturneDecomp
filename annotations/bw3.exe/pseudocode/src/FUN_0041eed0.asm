; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0041eed0(undefined4 param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
;
; XREF[1]:
;   FUN_00409f60 at 0040a4bc
;
; Called Functions:
;   FUN_0041ee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041eed0
        ;   Label: FUN_0041eed0
    PUSH ESI                            ; 0041eed1
    PUSH EDI                            ; 0041eed2
    SUB ESP,0x28                        ; 0041eed3
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0041eed6
    PUSH EBX                            ; 0041eeda
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0041eedb
    PUSH EDX                            ; 0041eedf
    LEA ESI,[ESP + 0x14]                ; 0041eee0
    LEA EDI,[ESP + 0x8]                 ; 0041eee4
    CALL FUN_0041ee30                   ; 0041eee8
        ;   XREF to: 0041ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ee30()
    LEA ESI,[ESP + 0x14]                ; 0041eeed
    ADD ESP,0x8                         ; 0041eef1
    MOVSD ES:EDI,ESI                    ; 0041eef4
    MOVSD ES:EDI,ESI                    ; 0041eef5
    MOVSD ES:EDI,ESI                    ; 0041eef6
    FLD float ptr [ESP]                 ; 0041eef7
    FSUB float ptr [EBX]                ; 0041eefa
    FMUL ST0                            ; 0041eefc
    FLD float ptr [ESP + 0x4]           ; 0041eefe
    FSUB float ptr [EBX + 0x4]          ; 0041ef02
    FMUL ST0                            ; 0041ef05
    FLD float ptr [ESP + 0x8]           ; 0041ef07
    FXCH                                ; 0041ef0b
    FADDP ST2,ST0                       ; 0041ef0d
    FSUB float ptr [EBX + 0x8]          ; 0041ef0f
    FMUL ST0                            ; 0041ef12
    FLD float ptr [ESP + 0x40]          ; 0041ef14
    FLD ST0                             ; 0041ef18
    FXCH ST2                            ; 0041ef1a
    FADDP ST3,ST0                       ; 0041ef1c
    FMULP                               ; 0041ef1e
    FXCH                                ; 0041ef20
    FCOMPP                              ; 0041ef22
    FNSTSW AX                           ; 0041ef24
    SAHF                                ; 0041ef26
    SETBE BL                            ; 0041ef27
    XOR EAX,EAX                         ; 0041ef2a
    MOV AL,BL                           ; 0041ef2c
    ADD ESP,0x28                        ; 0041ef2e
    POP EDI                             ; 0041ef31
    POP ESI                             ; 0041ef32
    POP EBX                             ; 0041ef33
    RET                                 ; 0041ef34

