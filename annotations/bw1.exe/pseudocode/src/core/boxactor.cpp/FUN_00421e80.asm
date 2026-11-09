; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_00421e80(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x7c]:1  local_7c
;
; XREF[4]:
;   core_boxactor.cpp_CBoxActor_onDropped_FUN_00422c70 at 00422c83
;   core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_00422e00 at 00422e77
;   core_boxactor.cpp_CBoxActor_setup_FUN_00421de0 at 00421e63
;   core_boxactor.cpp_FUN_00422ab0 at 00422c0d
;
; Referenced Globals:
;   undefined4 DAT_005d4c04
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_box.cpp_CBox_setupCorners_FUN_0041dac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421e80
        ;   Label: core_boxactor.cpp_FUN_00421e80
    SUB ESP,0x90                        ; 00421e81
    MOV EBX,dword ptr [ESP + 0x98]      ; 00421e87
    FLD float ptr [EBX + 0x390]         ; 00421e8e
    FLDZ                                ; 00421e94
    MOV dword ptr [EBX + 0x5e8],0x0     ; 00421e96
    FCOMPP                              ; 00421ea0
    FNSTSW AX                           ; 00421ea2
    SAHF                                ; 00421ea4
    JNC 0x00421ec9                      ; 00421ea5
        ;   XREF to: 00421ec9 (CONDITIONAL_JUMP)  ; LAB_00421ec9
    CMP dword ptr [EBX + 0x68],0x78a123 ; 00421ea7 | DAT_0078a123
    JNZ 0x00421ec9                      ; 00421eae
        ;   XREF to: 00421ec9 (CONDITIONAL_JUMP)  ; LAB_00421ec9
    LEA EAX,[EBX + 0x158]               ; 00421eb0
    CMP dword ptr [EAX + 0x178],0x0     ; 00421eb6
    JNZ 0x00421ed1                      ; 00421ebd
        ;   XREF to: 00421ed1 (CONDITIONAL_JUMP)  ; LAB_00421ed1
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 00421ebf
    ADD ESP,0x90                        ; 00421ec9
        ;   Label: LAB_00421ec9
    POP EBX                             ; 00421ecf
    RET                                 ; 00421ed0
    PUSH EDI                            ; 00421ed1
        ;   Label: LAB_00421ed1
    PUSH ESI                            ; 00421ed2
    PUSH EBX                            ; 00421ed3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00421ed4
    LEA ESI,[ESP + 0xc]                 ; 00421eda
    LEA EDI,[ESP + 0x24]                ; 00421ede
    CALL dword ptr [EAX + 0x1c]         ; 00421ee2
    MOV ECX,0x6                         ; 00421ee5
    LEA ESI,[ESP + 0xc]                 ; 00421eea
    ADD ESP,0x4                         ; 00421eee
    MOVSD.REP ES:EDI,ESI                ; 00421ef1
    FLD float ptr [ESP + 0x20]          ; 00421ef3
    FLD float ptr [ESP + 0x24]          ; 00421ef7
    FLD float ptr [ESP + 0x28]          ; 00421efb
    LEA EDI,[ESP + 0x80]                ; 00421eff
    LEA ESI,[ESP + 0x8c]                ; 00421f06
    FXCH ST2                            ; 00421f0d
    FADD float ptr [ESP + 0x2c]         ; 00421f0f
    FXCH                                ; 00421f13
    FADD float ptr [ESP + 0x30]         ; 00421f15
    FXCH ST2                            ; 00421f19
    FADD float ptr [ESP + 0x34]         ; 00421f1b
    FXCH                                ; 00421f1f
    FSTP float ptr [ESP + 0x8c]         ; 00421f21
    FXCH                                ; 00421f28
    FSTP float ptr [ESP + 0x90]         ; 00421f2a
    FSTP float ptr [ESP + 0x94]         ; 00421f31
    MOVSD ES:EDI,ESI                    ; 00421f38
    MOVSD ES:EDI,ESI                    ; 00421f39
    MOVSD ES:EDI,ESI                    ; 00421f3a
    FLD float ptr [0x005d4c04]          ; 00421f3b | DAT_005d4c04
    FLD float ptr [ESP + 0x80]          ; 00421f41
    FMUL ST1                            ; 00421f48
    FLD float ptr [ESP + 0x84]          ; 00421f4a
    FMUL ST2                            ; 00421f51
    FLD float ptr [ESP + 0x88]          ; 00421f53
    FMULP ST3                           ; 00421f5a
    LEA EDI,[ESP + 0x74]                ; 00421f5c
    LEA ESI,[ESP + 0x68]                ; 00421f60
    FXCH                                ; 00421f64
    FSTP float ptr [ESP + 0x68]         ; 00421f66
    FSTP float ptr [ESP + 0x6c]         ; 00421f6a
    FSTP float ptr [ESP + 0x70]         ; 00421f6e
    MOVSD ES:EDI,ESI                    ; 00421f72
    MOVSD ES:EDI,ESI                    ; 00421f73
    MOVSD ES:EDI,ESI                    ; 00421f74
    LEA ESI,[ESP + 0x74]                ; 00421f75
    PUSH ESI                            ; 00421f79
    PUSH EBX                            ; 00421f7a
    LEA ESI,[ESP + 0x64]                ; 00421f7b
    LEA EDI,[ESP + 0x58]                ; 00421f7f
    CALL core_actor.cpp_FUN_00408b40    ; 00421f83
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00421f88
    LEA ESI,[ESP + 0x5c]                ; 00421f8b
    FLD float ptr [ESP + 0x2c]          ; 00421f8f
    FLD float ptr [ESP + 0x30]          ; 00421f93
    MOVSD ES:EDI,ESI                    ; 00421f97
    MOVSD ES:EDI,ESI                    ; 00421f98
    MOVSD ES:EDI,ESI                    ; 00421f99
    FLD float ptr [ESP + 0x34]          ; 00421f9a
    LEA EDI,[ESP + 0x44]                ; 00421f9e
    LEA ESI,[ESP + 0x38]                ; 00421fa2
    FXCH ST2                            ; 00421fa6
    FSUB float ptr [ESP + 0x20]         ; 00421fa8
    FXCH                                ; 00421fac
    FSUB float ptr [ESP + 0x24]         ; 00421fae
    FXCH ST2                            ; 00421fb2
    FSUB float ptr [ESP + 0x28]         ; 00421fb4
    FXCH                                ; 00421fb8
    FSTP float ptr [ESP + 0x38]         ; 00421fba
    FXCH                                ; 00421fbe
    FSTP float ptr [ESP + 0x3c]         ; 00421fc0
    FSTP float ptr [ESP + 0x40]         ; 00421fc4
    MOVSD ES:EDI,ESI                    ; 00421fc8
    MOVSD ES:EDI,ESI                    ; 00421fc9
    MOVSD ES:EDI,ESI                    ; 00421fca
    LEA EAX,[ESP + 0x44]                ; 00421fcb
    PUSH dword ptr [EBX + 0x390]        ; 00421fcf
    PUSH EAX                            ; 00421fd5
    LEA EAX,[EBX + 0x30]                ; 00421fd6
    PUSH EAX                            ; 00421fd9
    LEA EAX,[ESP + 0x5c]                ; 00421fda
    PUSH EAX                            ; 00421fde
    ADD EBX,0x394                       ; 00421fdf
    PUSH EBX                            ; 00421fe5
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dac0 ; 00421fe6
        ;   XREF to: 0041dac0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dac0(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 00421feb
    POP ESI                             ; 00421fee
    POP EDI                             ; 00421fef
    ADD ESP,0x90                        ; 00421ff0
    POP EBX                             ; 00421ff6
    RET                                 ; 00421ff7

