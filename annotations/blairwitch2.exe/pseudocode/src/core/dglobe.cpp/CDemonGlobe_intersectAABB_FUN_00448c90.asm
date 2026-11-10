; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00448c90(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   reference_position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_gatherVisibleLights_FUN_00530aa0 at 00530db4
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448c90
        ;   Label: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00448c90
    PUSH ESI                            ; 00448c91
    PUSH EDI                            ; 00448c92
    PUSH EBP                            ; 00448c93
    SUB ESP,0x30                        ; 00448c94
    MOV EBX,dword ptr [ESP + 0x44]      ; 00448c97
    MOV ESI,dword ptr [ESP + 0x48]      ; 00448c9b
    MOV EBP,dword ptr [ESP + 0x50]      ; 00448c9f
    LEA EAX,[EBX + 0x24]                ; 00448ca3
    LEA EDI,[ESP + 0x24]                ; 00448ca6
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00448caa
    FLD float ptr [EAX + 0x4]           ; 00448cae
    FLD float ptr [EAX + 0x8]           ; 00448cb1
    FLD float ptr [EAX]                 ; 00448cb4
    LEA EAX,[ESP + 0x24]                ; 00448cb6
    FSUB float ptr [ESI]                ; 00448cba
    FXCH ST2                            ; 00448cbc
    FSUB float ptr [ESI + 0x4]          ; 00448cbe
    FXCH                                ; 00448cc1
    FSUB float ptr [ESI + 0x8]          ; 00448cc3
    FXCH ST2                            ; 00448cc6
    FSTP float ptr [ESP + 0x18]         ; 00448cc8
    FSTP float ptr [ESP + 0x1c]         ; 00448ccc
    LEA ESI,[ESP + 0x18]                ; 00448cd0
    FSTP float ptr [ESP + 0x20]         ; 00448cd4
    PUSH EAX                            ; 00448cd8
    MOVSD ES:EDI,ESI                    ; 00448cd9
    MOVSD ES:EDI,ESI                    ; 00448cda
    MOVSD ES:EDI,ESI                    ; 00448cdb
    PUSH EDX                            ; 00448cdc
    LEA ESI,[ESP + 0x14]                ; 00448cdd
    LEA EDI,[ESP + 0x8]                 ; 00448ce1
    CALL core_dirmat.cpp_FUN_004495a0   ; 00448ce5
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x14]                ; 00448cea
    ADD ESP,0x8                         ; 00448cee
    MOVSD ES:EDI,ESI                    ; 00448cf1
    MOVSD ES:EDI,ESI                    ; 00448cf2
    MOVSD ES:EDI,ESI                    ; 00448cf3
    MOV EAX,ESP                         ; 00448cf4
    LEA ESI,[ESP + 0x24]                ; 00448cf6
    CMP ESI,EAX                         ; 00448cfa
    JNZ 0x00448d71                      ; 00448cfc
        ;   XREF to: 00448d71 (CONDITIONAL_JUMP)  ; LAB_00448d71
    FLD float ptr [ESP + 0x24]          ; 00448d02
        ;   Label: LAB_00448d02
    FADD float ptr [EBX + 0x30]         ; 00448d06
    FCOMP float ptr [EBP]               ; 00448d09
    FNSTSW AX                           ; 00448d0c
    SAHF                                ; 00448d0e
    JC 0x00448d67                       ; 00448d0f
        ;   XREF to: 00448d67 (CONDITIONAL_JUMP)  ; LAB_00448d67
    FLD float ptr [ESP + 0x28]          ; 00448d11
    FADD float ptr [EBX + 0x30]         ; 00448d15
    FCOMP float ptr [EBP + 0x4]         ; 00448d18
    FNSTSW AX                           ; 00448d1b
    SAHF                                ; 00448d1d
    JC 0x00448d67                       ; 00448d1e
        ;   XREF to: 00448d67 (CONDITIONAL_JUMP)  ; LAB_00448d67
    FLD float ptr [ESP + 0x2c]          ; 00448d20
    FADD float ptr [EBX + 0x30]         ; 00448d24
    FCOMP float ptr [EBP + 0x8]         ; 00448d27
    FNSTSW AX                           ; 00448d2a
    SAHF                                ; 00448d2c
    JC 0x00448d67                       ; 00448d2d
        ;   XREF to: 00448d67 (CONDITIONAL_JUMP)  ; LAB_00448d67
    FLD float ptr [ESP + 0x24]          ; 00448d2f
    FSUB float ptr [EBX + 0x30]         ; 00448d33
    MOV EAX,dword ptr [ESP + 0x54]      ; 00448d36
    FCOMP float ptr [EAX]               ; 00448d3a
    FNSTSW AX                           ; 00448d3c
    SAHF                                ; 00448d3e
    JA 0x00448d67                       ; 00448d3f
        ;   XREF to: 00448d67 (CONDITIONAL_JUMP)  ; LAB_00448d67
    FLD float ptr [ESP + 0x28]          ; 00448d41
    FSUB float ptr [EBX + 0x30]         ; 00448d45
    MOV EAX,dword ptr [ESP + 0x54]      ; 00448d48
    FCOMP float ptr [EAX + 0x4]         ; 00448d4c
    FNSTSW AX                           ; 00448d4f
    SAHF                                ; 00448d51
    JA 0x00448d67                       ; 00448d52
        ;   XREF to: 00448d67 (CONDITIONAL_JUMP)  ; LAB_00448d67
    FLD float ptr [ESP + 0x2c]          ; 00448d54
    FSUB float ptr [EBX + 0x30]         ; 00448d58
    MOV EAX,dword ptr [ESP + 0x54]      ; 00448d5b
    FCOMP float ptr [EAX + 0x8]         ; 00448d5f
    FNSTSW AX                           ; 00448d62
    SAHF                                ; 00448d64
    JBE 0x00448d8d                      ; 00448d65
        ;   XREF to: 00448d8d (CONDITIONAL_JUMP)  ; LAB_00448d8d
    XOR EAX,EAX                         ; 00448d67
        ;   Label: LAB_00448d67
    ADD ESP,0x30                        ; 00448d69
    POP EBP                             ; 00448d6c
    POP EDI                             ; 00448d6d
    POP ESI                             ; 00448d6e
    POP EBX                             ; 00448d6f
    RET                                 ; 00448d70
    MOV EAX,dword ptr [ESP]             ; 00448d71
        ;   Label: LAB_00448d71
    MOV dword ptr [ESP + 0x24],EAX      ; 00448d74
    MOV EAX,dword ptr [ESP + 0x4]       ; 00448d78
    MOV dword ptr [ESP + 0x28],EAX      ; 00448d7c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00448d80
    MOV dword ptr [ESP + 0x2c],EAX      ; 00448d84
    JMP 0x00448d02                      ; 00448d88
        ;   XREF to: 00448d02 (UNCONDITIONAL_JUMP)  ; LAB_00448d02
    MOV EAX,0x1                         ; 00448d8d
        ;   Label: LAB_00448d8d
    ADD ESP,0x30                        ; 00448d92
    POP EBP                             ; 00448d95
    POP EDI                             ; 00448d96
    POP ESI                             ; 00448d97
    POP EBX                             ; 00448d98
    RET                                 ; 00448d99

