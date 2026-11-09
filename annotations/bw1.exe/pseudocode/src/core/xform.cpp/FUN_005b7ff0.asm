; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b7ff0(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa1c0
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045fd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7ff0
        ;   Label: core_xform.cpp_FUN_005b7ff0
    PUSH EDI                            ; 005b7ff1
    SUB ESP,0x3c                        ; 005b7ff2
    MOV EBX,ESI                         ; 005b7ff5
    MOV ESI,dword ptr [ESP + 0x48]      ; 005b7ff7
    FLD float ptr [ESI]                 ; 005b7ffb
    LEA EAX,[ESP + 0x24]                ; 005b7ffd
    FMUL float ptr [0x005fa1c0]         ; 005b8001 | DAT_005fa1c0
    PUSH EAX                            ; 005b8007
    LEA EAX,[ESP + 0x20]                ; 005b8008
    PUSH EAX                            ; 005b800c
    LEA EAX,[ESP + 0x18]                ; 005b800d
    PUSH EAX                            ; 005b8011
    FSTP float ptr [ESP + 0x30]         ; 005b8012
    CALL core_dirmat.cpp_FUN_0045fd80   ; 005b8016
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    FLD float ptr [ESI + 0x8]           ; 005b801b
    LEA EAX,[ESP + 0x34]                ; 005b801e
    ADD ESP,0xc                         ; 005b8022
    FMUL float ptr [0x005fa1c0]         ; 005b8025 | DAT_005fa1c0
    PUSH EAX                            ; 005b802b
    LEA EAX,[ESP + 0x38]                ; 005b802c
    PUSH EAX                            ; 005b8030
    LEA EAX,[ESP + 0x1c]                ; 005b8031
    PUSH EAX                            ; 005b8035
    FSTP float ptr [ESP + 0x34]         ; 005b8036
    CALL core_dirmat.cpp_FUN_0045fd80   ; 005b803a
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    FLD float ptr [ESI + 0x4]           ; 005b803f
    LEA EAX,[ESP + 0x38]                ; 005b8042
    ADD ESP,0xc                         ; 005b8046
    FMUL float ptr [0x005fa1c0]         ; 005b8049 | DAT_005fa1c0
    PUSH EAX                            ; 005b804f
    LEA EAX,[ESP + 0x24]                ; 005b8050
    PUSH EAX                            ; 005b8054
    LEA EAX,[ESP + 0x20]                ; 005b8055
    PUSH EAX                            ; 005b8059
    FSTP float ptr [ESP + 0x38]         ; 005b805a
    CALL core_dirmat.cpp_FUN_0045fd80   ; 005b805e
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045fd80()
    ADD ESP,0xc                         ; 005b8063
    FLD float ptr [ESP + 0x1c]          ; 005b8066
    FMUL float ptr [ESP + 0x34]         ; 005b806a
    FLD float ptr [ESP + 0x10]          ; 005b806e
    FMUL float ptr [ESP + 0x34]         ; 005b8072
    FLD float ptr [ESP + 0x10]          ; 005b8076
    FCHS                                ; 005b807a
    FMUL float ptr [ESP + 0x34]         ; 005b807c
    FXCH                                ; 005b8080
    FMUL float ptr [ESP + 0x18]         ; 005b8082
    FXCH                                ; 005b8086
    FMUL float ptr [ESP + 0x20]         ; 005b8088
    FXCH ST2                            ; 005b808c
    FST float ptr [ESP + 0x30]          ; 005b808e
    FMUL float ptr [ESP + 0x20]         ; 005b8092
    FLD float ptr [ESP + 0x1c]          ; 005b8096
    FMUL float ptr [ESP + 0x14]         ; 005b809a
    FLD float ptr [ESP + 0x10]          ; 005b809e
    FMUL float ptr [ESP + 0x14]         ; 005b80a2
    FLD ST1                             ; 005b80a6
    FMUL float ptr [ESP + 0x18]         ; 005b80a8
    FXCH ST2                            ; 005b80ac
    FMUL float ptr [ESP + 0x20]         ; 005b80ae
    FLD ST1                             ; 005b80b2
    FMUL float ptr [ESP + 0x18]         ; 005b80b4
    FXCH ST3                            ; 005b80b8
    FSUBP ST6,ST0                       ; 005b80ba
    FXCH                                ; 005b80bc
    FMUL float ptr [ESP + 0x20]         ; 005b80be
    FXCH ST5                            ; 005b80c2
    FSTP float ptr [ESP + 0x4]          ; 005b80c4
    FLD float ptr [ESP + 0x30]          ; 005b80c8
    FMUL float ptr [ESP + 0x18]         ; 005b80cc
    MOV EDI,EBX                         ; 005b80d0
    FXCH                                ; 005b80d2
    FSUBP ST4,ST0                       ; 005b80d4
    MOV ESI,ESP                         ; 005b80d6
    FXCH ST3                            ; 005b80d8
    FSTP float ptr [ESP + 0xc]          ; 005b80da
    FADDP                               ; 005b80de
    FXCH                                ; 005b80e0
    FSUBP ST2,ST0                       ; 005b80e2
    FSTP float ptr [ESP]                ; 005b80e4
    FSTP float ptr [ESP + 0x8]          ; 005b80e7
    MOVSD ES:EDI,ESI                    ; 005b80eb
    MOVSD ES:EDI,ESI                    ; 005b80ec
    MOVSD ES:EDI,ESI                    ; 005b80ed
    MOVSD ES:EDI,ESI                    ; 005b80ee
    MOV EAX,EBX                         ; 005b80ef
    ADD ESP,0x3c                        ; 005b80f1
    POP EDI                             ; 005b80f4
    POP EBX                             ; 005b80f5
    RET                                 ; 005b80f6

