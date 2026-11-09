; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lantern_cpp_FUN_0059ced0(int param_1)
;
;
; XREF[2]:
;   core_lantern.cpp_FUN_0059ccf0 at 0059ce7b
;   core_lantern.cpp_FUN_0059d000 at 0059d020
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_dirmat.cpp_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ced0
        ;   Label: core_lantern.cpp_FUN_0059ced0
    PUSH ESI                            ; 0059ced1
    PUSH EDI                            ; 0059ced2
    SUB ESP,0x64                        ; 0059ced3
    MOV EBX,dword ptr [ESP + 0x74]      ; 0059ced6
    LEA EAX,[EBX + 0x6e4]               ; 0059ceda
    LEA EDX,[EBX + 0x30]                ; 0059cee0
    CMP EAX,EDX                         ; 0059cee3
    JZ 0x0059cef7                       ; 0059cee5
        ;   XREF to: 0059cef7 (CONDITIONAL_JUMP)  ; LAB_0059cef7
    MOV ECX,dword ptr [EDX]             ; 0059cee7
    MOV dword ptr [EAX],ECX             ; 0059cee9
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059ceeb
    MOV dword ptr [EAX + 0x4],ECX       ; 0059ceee
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059cef1
    MOV dword ptr [EAX + 0x8],ECX       ; 0059cef4
    PUSH 0x265370c                      ; 0059cef7
        ;   Label: LAB_0059cef7
    LEA ESI,[ESP + 0x5c]                ; 0059cefc
    PUSH EBX                            ; 0059cf00
    MOV dword ptr [EBX + 0x6e4],0x3ec90fdb ; 0059cf01
    LEA EDI,[ESP + 0x3c]                ; 0059cf0b
    CALL core_actor.cpp_FUN_00408d70    ; 0059cf0f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x60]                ; 0059cf14
    LEA EAX,[ESP + 0x3c]                ; 0059cf18
    ADD ESP,0x8                         ; 0059cf1c
    LEA EDX,[EBX + 0x6d8]               ; 0059cf1f
    MOVSD ES:EDI,ESI                    ; 0059cf25
    MOVSD ES:EDI,ESI                    ; 0059cf26
    MOVSD ES:EDI,ESI                    ; 0059cf27
    CMP EDX,EAX                         ; 0059cf28
    JZ 0x0059cf40                       ; 0059cf2a
        ;   XREF to: 0059cf40 (CONDITIONAL_JUMP)  ; LAB_0059cf40
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059cf2c
    MOV dword ptr [EDX],EAX             ; 0059cf30
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059cf32
    MOV dword ptr [EDX + 0x4],EAX       ; 0059cf36
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0059cf39
    MOV dword ptr [EDX + 0x8],EAX       ; 0059cf3d
    LEA EAX,[EBX + 0x6e4]               ; 0059cf40
        ;   Label: LAB_0059cf40
    PUSH EAX                            ; 0059cf46
    LEA EAX,[ESP + 0x4]                 ; 0059cf47
    PUSH EAX                            ; 0059cf4b
    MOV ESI,0x3f4ccccd                  ; 0059cf4c
    LEA EDI,[ESP + 0x54]                ; 0059cf51
    CALL core_dirmat.cpp_FUN_00449280   ; 0059cf55
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EDX,0xbd4ccccd                  ; 0059cf5a
    MOV ECX,0xbf4ccccd                  ; 0059cf5f
    ADD ESP,0x8                         ; 0059cf64
    LEA EAX,[ESP + 0x40]                ; 0059cf67
    MOV dword ptr [ESP + 0x40],EDX      ; 0059cf6b
    PUSH EAX                            ; 0059cf6f
    LEA EAX,[ESP + 0x4]                 ; 0059cf70
    MOV dword ptr [ESP + 0x4c],ESI      ; 0059cf74
    PUSH EAX                            ; 0059cf78
    LEA ESI,[ESP + 0x30]                ; 0059cf79
    MOV dword ptr [ESP + 0x4c],ECX      ; 0059cf7d
    CALL core_dirmat.cpp_FUN_00449530   ; 0059cf81
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x30]                ; 0059cf86
    ADD ESP,0x8                         ; 0059cf8a
    LEA EAX,[EBX + 0x6d8]               ; 0059cf8d
    MOVSD ES:EDI,ESI                    ; 0059cf93
    MOVSD ES:EDI,ESI                    ; 0059cf94
    MOVSD ES:EDI,ESI                    ; 0059cf95
    FLD float ptr [EAX]                 ; 0059cf96
    FLD float ptr [EAX + 0x4]           ; 0059cf98
    FLD float ptr [EAX + 0x8]           ; 0059cf9b
    FXCH ST2                            ; 0059cf9e
    FADD float ptr [ESP + 0x4c]         ; 0059cfa0
    FXCH                                ; 0059cfa4
    FADD float ptr [ESP + 0x50]         ; 0059cfa6
    FXCH ST2                            ; 0059cfaa
    FADD float ptr [ESP + 0x54]         ; 0059cfac
    FXCH                                ; 0059cfb0
    FSTP float ptr [EAX]                ; 0059cfb2
    FXCH                                ; 0059cfb4
    FSTP float ptr [EAX + 0x4]          ; 0059cfb6
    FSTP float ptr [EAX + 0x8]          ; 0059cfb9
    MOV EDX,dword ptr [EBX + 0x704]     ; 0059cfbc
    ADD EDX,0x4                         ; 0059cfc2
    CMP EDX,EAX                         ; 0059cfc5
    JZ 0x0059cfd9                       ; 0059cfc7
        ;   XREF to: 0059cfd9 (CONDITIONAL_JUMP)  ; LAB_0059cfd9
    MOV ECX,dword ptr [EAX]             ; 0059cfc9
    MOV dword ptr [EDX],ECX             ; 0059cfcb
    MOV ECX,dword ptr [EAX + 0x4]       ; 0059cfcd
    MOV dword ptr [EDX + 0x4],ECX       ; 0059cfd0
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059cfd3
    MOV dword ptr [EDX + 0x8],ECX       ; 0059cfd6
    LEA EDX,[EBX + 0x6e4]               ; 0059cfd9
        ;   Label: LAB_0059cfd9
    MOV EAX,dword ptr [EBX + 0x704]     ; 0059cfdf
    PUSH EDX                            ; 0059cfe5
    ADD EAX,0x10                        ; 0059cfe6
    PUSH EAX                            ; 0059cfe9
    CALL core_dirmat.cpp_FUN_00449280   ; 0059cfea
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0059cfef
    ADD ESP,0x64                        ; 0059cff2
    POP EDI                             ; 0059cff5
    POP ESI                             ; 0059cff6
    POP EBX                             ; 0059cff7
    RET                                 ; 0059cff8

