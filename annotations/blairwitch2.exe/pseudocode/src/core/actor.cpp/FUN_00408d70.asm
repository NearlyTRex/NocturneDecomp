; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408d70(int param_1,undefined4 param_2)
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
; XREF[164]:
;   core_actor.cpp_FUN_0040a050 at 0040a0d7
;   core_actor.cpp_FUN_0040ca40 at 0040ca58
;   core_baron.cpp_FUN_0040f950 at 0040fcbf
;   core_baron.cpp_FUN_00410170 at 00410370
;   core_batcreat.cpp_FUN_00411a10 at 00411d0b
;   core_batcreat.cpp_FUN_00412760 at 004127d4
;   core_batman.cpp_FUN_00412f40 at 004132ab
;   core_batman.cpp_FUN_00414290 at 00414304
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 at 00416a94
;   core_bodypart.cpp_FUN_004164b0 at 00416529
;   ... and 154 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408d70
        ;   Label: core_actor.cpp_FUN_00408d70
    PUSH EDI                            ; 00408d71
    SUB ESP,0x24                        ; 00408d72
    MOV EBX,ESI                         ; 00408d75
    MOV EDX,dword ptr [ESP + 0x34]      ; 00408d77
    MOV EAX,dword ptr [ESP + 0x30]      ; 00408d7b
    PUSH EDX                            ; 00408d7f
    ADD EAX,0x3c                        ; 00408d80
    PUSH EAX                            ; 00408d83
    LEA ESI,[ESP + 0x14]                ; 00408d84
    LEA EDI,[ESP + 0x8]                 ; 00408d88
    CALL core_dirmat.cpp_FUN_00449530   ; 00408d8c
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x14]                ; 00408d91
    ADD ESP,0x8                         ; 00408d95
    MOVSD ES:EDI,ESI                    ; 00408d98
    MOVSD ES:EDI,ESI                    ; 00408d99
    MOVSD ES:EDI,ESI                    ; 00408d9a
    MOV EAX,dword ptr [ESP + 0x30]      ; 00408d9b
    FLD float ptr [ESP]                 ; 00408d9f
    FLD float ptr [ESP + 0x4]           ; 00408da2
    FLD float ptr [ESP + 0x8]           ; 00408da6
    LEA ESI,[ESP + 0x18]                ; 00408daa
    MOV EDI,EBX                         ; 00408dae
    FXCH ST2                            ; 00408db0
    FADD float ptr [EAX + 0x20]         ; 00408db2
    FXCH                                ; 00408db5
    FADD float ptr [EAX + 0x24]         ; 00408db7
    FXCH ST2                            ; 00408dba
    FADD float ptr [EAX + 0x28]         ; 00408dbc
    FXCH                                ; 00408dbf
    FSTP float ptr [ESP + 0x18]         ; 00408dc1
    FXCH                                ; 00408dc5
    FSTP float ptr [ESP + 0x1c]         ; 00408dc7
    FSTP float ptr [ESP + 0x20]         ; 00408dcb
    MOVSD ES:EDI,ESI                    ; 00408dcf
    MOVSD ES:EDI,ESI                    ; 00408dd0
    MOVSD ES:EDI,ESI                    ; 00408dd1
    MOV EAX,EBX                         ; 00408dd2
    ADD ESP,0x24                        ; 00408dd4
    POP EDI                             ; 00408dd7
    POP EBX                             ; 00408dd8
    RET                                 ; 00408dd9

