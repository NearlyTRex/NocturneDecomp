; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_box_cpp_FUN_0041bc20(undefined4 param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a662
;
; Called Functions:
;   core_box.cpp_FUN_0041bb80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041bc20
        ;   Label: core_box.cpp_FUN_0041bc20
    PUSH ESI                            ; 0041bc21
    PUSH EDI                            ; 0041bc22
    SUB ESP,0x28                        ; 0041bc23
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0041bc26
    PUSH EBX                            ; 0041bc2a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0041bc2b
    PUSH EDX                            ; 0041bc2f
    LEA ESI,[ESP + 0x14]                ; 0041bc30
    LEA EDI,[ESP + 0x8]                 ; 0041bc34
    CALL core_box.cpp_FUN_0041bb80      ; 0041bc38
        ;   XREF to: 0041bb80 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041bb80()
    LEA ESI,[ESP + 0x14]                ; 0041bc3d
    ADD ESP,0x8                         ; 0041bc41
    MOVSD ES:EDI,ESI                    ; 0041bc44
    MOVSD ES:EDI,ESI                    ; 0041bc45
    MOVSD ES:EDI,ESI                    ; 0041bc46
    FLD float ptr [ESP]                 ; 0041bc47
    FSUB float ptr [EBX]                ; 0041bc4a
    FMUL ST0                            ; 0041bc4c
    FLD float ptr [ESP + 0x4]           ; 0041bc4e
    FSUB float ptr [EBX + 0x4]          ; 0041bc52
    FMUL ST0                            ; 0041bc55
    FLD float ptr [ESP + 0x8]           ; 0041bc57
    FXCH                                ; 0041bc5b
    FADDP ST2,ST0                       ; 0041bc5d
    FSUB float ptr [EBX + 0x8]          ; 0041bc5f
    FMUL ST0                            ; 0041bc62
    FLD float ptr [ESP + 0x40]          ; 0041bc64
    FLD ST0                             ; 0041bc68
    FXCH ST2                            ; 0041bc6a
    FADDP ST3,ST0                       ; 0041bc6c
    FMULP                               ; 0041bc6e
    FXCH                                ; 0041bc70
    FCOMPP                              ; 0041bc72
    FNSTSW AX                           ; 0041bc74
    SAHF                                ; 0041bc76
    SETBE BL                            ; 0041bc77
    XOR EAX,EAX                         ; 0041bc7a
    MOV AL,BL                           ; 0041bc7c
    ADD ESP,0x28                        ; 0041bc7e
    POP EDI                             ; 0041bc81
    POP ESI                             ; 0041bc82
    POP EBX                             ; 0041bc83
    RET                                 ; 0041bc84

