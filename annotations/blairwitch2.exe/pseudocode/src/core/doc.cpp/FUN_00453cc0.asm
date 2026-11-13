; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00453cc0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 00450e85
;
; Referenced Globals:
;   undefined4 DAT_005d013f
;   undefined4 DAT_01b4d28c
;   undefined4 DAT_01b4d290
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453cc0
        ;   Label: core_doc.cpp_FUN_00453cc0
    PUSH EDI                            ; 00453cc1
    PUSH EBP                            ; 00453cc2
    SUB ESP,0x54                        ; 00453cc3
    MOV EBX,ESI                         ; 00453cc6
    MOV EDX,dword ptr [0x01b4d290]      ; 00453cc8 | DAT_01b4d290
    MOV EBP,dword ptr [ESP + 0x64]      ; 00453cce
    PUSH EDX                            ; 00453cd2
    ADD EBP,0x2b4                       ; 00453cd3
    PUSH EBP                            ; 00453cd9
    LEA ESI,[ESP + 0x20]                ; 00453cda
    LEA EDI,[ESP + 0x38]                ; 00453cde
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 00453ce2
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00453ce7
    MOV ECX,dword ptr [0x01b4d28c]      ; 00453cea | DAT_01b4d28c
    LEA ESI,[ESP + 0x18]                ; 00453cf0
    PUSH ECX                            ; 00453cf4
    MOVSD ES:EDI,ESI                    ; 00453cf5
    MOVSD ES:EDI,ESI                    ; 00453cf6
    MOVSD ES:EDI,ESI                    ; 00453cf7
    PUSH EBP                            ; 00453cf8
    LEA ESI,[ESP + 0x2c]                ; 00453cf9
    LEA EDI,[ESP + 0x8]                 ; 00453cfd
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 00453d01
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x2c]                ; 00453d06
    ADD ESP,0x8                         ; 00453d0a
    MOVSD ES:EDI,ESI                    ; 00453d0d
    MOVSD ES:EDI,ESI                    ; 00453d0e
    MOVSD ES:EDI,ESI                    ; 00453d0f
    FLD float ptr [ESP]                 ; 00453d10
    FLD float ptr [ESP + 0x4]           ; 00453d13
    FLD float ptr [ESP + 0x8]           ; 00453d17
    LEA EDI,[ESP + 0x3c]                ; 00453d1b
    LEA ESI,[ESP + 0xc]                 ; 00453d1f
    FXCH ST2                            ; 00453d23
    FADD float ptr [ESP + 0x30]         ; 00453d25
    FXCH                                ; 00453d29
    FADD float ptr [ESP + 0x34]         ; 00453d2b
    FXCH ST2                            ; 00453d2f
    FADD float ptr [ESP + 0x38]         ; 00453d31
    FXCH                                ; 00453d35
    FSTP float ptr [ESP + 0xc]          ; 00453d37
    FXCH                                ; 00453d3b
    FSTP float ptr [ESP + 0x10]         ; 00453d3d
    FSTP float ptr [ESP + 0x14]         ; 00453d41
    MOVSD ES:EDI,ESI                    ; 00453d45
    MOVSD ES:EDI,ESI                    ; 00453d46
    MOVSD ES:EDI,ESI                    ; 00453d47
    FLD float ptr [0x005d013f]          ; 00453d48 | DAT_005d013f
    FLD float ptr [ESP + 0x3c]          ; 00453d4e
    FMUL ST1                            ; 00453d52
    FLD float ptr [ESP + 0x40]          ; 00453d54
    FMUL ST2                            ; 00453d58
    FLD float ptr [ESP + 0x44]          ; 00453d5a
    FMULP ST3                           ; 00453d5e
    LEA ESI,[ESP + 0x48]                ; 00453d60
    MOV EDI,EBX                         ; 00453d64
    FXCH                                ; 00453d66
    FSTP float ptr [ESP + 0x48]         ; 00453d68
    FSTP float ptr [ESP + 0x4c]         ; 00453d6c
    FSTP float ptr [ESP + 0x50]         ; 00453d70
    MOVSD ES:EDI,ESI                    ; 00453d74
    MOVSD ES:EDI,ESI                    ; 00453d75
    MOVSD ES:EDI,ESI                    ; 00453d76
    MOV EAX,EBX                         ; 00453d77
    ADD ESP,0x54                        ; 00453d79
    POP EBP                             ; 00453d7c
    POP EDI                             ; 00453d7d
    POP EBX                             ; 00453d7e
    RET                                 ; 00453d7f

