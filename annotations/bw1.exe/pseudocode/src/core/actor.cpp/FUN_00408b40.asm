; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408b40(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[176]:
;   core_actor.cpp_FUN_00409f20 at 00409f9f
;   core_actor.cpp_FUN_0040c750 at 0040c768
;   core_baron.cpp_FUN_0040f4d0 at 0040f83f
;   core_baron.cpp_FUN_0040fcf0 at 0040fef0
;   core_batcreat.cpp_FUN_004115b0 at 0041196a
;   core_batcreat.cpp_FUN_004123d0 at 00412444
;   core_batman.cpp_FUN_00412ba0 at 00412fbd
;   core_batman.cpp_FUN_00413f90 at 00414004
;   core_bodypart.cpp_FUN_00419940 at 004199b9
;   core_bodypart.cpp_FUN_00419b90 at 00419f24
;   ... and 166 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408b40
        ;   Label: core_actor.cpp_FUN_00408b40
    PUSH EDI                            ; 00408b41
    SUB ESP,0x24                        ; 00408b42
    MOV EBX,ESI                         ; 00408b45
    MOV EDX,dword ptr [ESP + 0x34]      ; 00408b47
    MOV EAX,dword ptr [ESP + 0x30]      ; 00408b4b
    PUSH EDX                            ; 00408b4f
    ADD EAX,0x3c                        ; 00408b50
    PUSH EAX                            ; 00408b53
    LEA ESI,[ESP + 0x14]                ; 00408b54
    LEA EDI,[ESP + 0x8]                 ; 00408b58
    CALL core_dirmat.cpp_FUN_0045f690   ; 00408b5c
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x14]                ; 00408b61
    ADD ESP,0x8                         ; 00408b65
    MOVSD ES:EDI,ESI                    ; 00408b68
    MOVSD ES:EDI,ESI                    ; 00408b69
    MOVSD ES:EDI,ESI                    ; 00408b6a
    MOV EAX,dword ptr [ESP + 0x30]      ; 00408b6b
    FLD float ptr [ESP]                 ; 00408b6f
    FLD float ptr [ESP + 0x4]           ; 00408b72
    FLD float ptr [ESP + 0x8]           ; 00408b76
    LEA ESI,[ESP + 0x18]                ; 00408b7a
    MOV EDI,EBX                         ; 00408b7e
    FXCH ST2                            ; 00408b80
    FADD float ptr [EAX + 0x20]         ; 00408b82
    FXCH                                ; 00408b85
    FADD float ptr [EAX + 0x24]         ; 00408b87
    FXCH ST2                            ; 00408b8a
    FADD float ptr [EAX + 0x28]         ; 00408b8c
    FXCH                                ; 00408b8f
    FSTP float ptr [ESP + 0x18]         ; 00408b91
    FXCH                                ; 00408b95
    FSTP float ptr [ESP + 0x1c]         ; 00408b97
    FSTP float ptr [ESP + 0x20]         ; 00408b9b
    MOVSD ES:EDI,ESI                    ; 00408b9f
    MOVSD ES:EDI,ESI                    ; 00408ba0
    MOVSD ES:EDI,ESI                    ; 00408ba1
    MOV EAX,EBX                         ; 00408ba2
    ADD ESP,0x24                        ; 00408ba4
    POP EDI                             ; 00408ba7
    POP EBX                             ; 00408ba8
    RET                                 ; 00408ba9

