; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_waypoint_cpp_FUN_00587c30(float *param_1,CLocation *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_waypoint.cpp_FUN_005882d0 at 005882f5
;
; Referenced Globals:
;   undefined4 DAT_005ee09f
;   undefined4 DAT_005ee0a7
;   undefined4 DAT_005ee0af
;   undefined4 DAT_005ee0b7
;
; Called Functions:
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587c30
        ;   Label: core_waypoint.cpp_FUN_00587c30
    PUSH ESI                            ; 00587c31
    PUSH EDI                            ; 00587c32
    PUSH EBP                            ; 00587c33
    MOV EBP,ESP                         ; 00587c34
    SUB ESP,0x30                        ; 00587c36
    AND ESP,0xfffffff8                  ; 00587c39
    MOV EDX,dword ptr [EBP + 0x14]      ; 00587c3c
    MOV ECX,dword ptr [EBP + 0x18]      ; 00587c3f
    FLD float ptr [EDX]                 ; 00587c42
    FLD float ptr [EDX + 0x4]           ; 00587c44
    FLD float ptr [EDX + 0x8]           ; 00587c47
    LEA EDI,[ESP + 0x24]                ; 00587c4a
    LEA ESI,[ESP + 0x18]                ; 00587c4e
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00587c52
    FXCH ST2                            ; 00587c55
    FSUB float ptr [ECX]                ; 00587c57
    FXCH                                ; 00587c59
    FSUB float ptr [ECX + 0x4]          ; 00587c5b
    FXCH ST2                            ; 00587c5e
    FSUB float ptr [ECX + 0x8]          ; 00587c60
    FXCH ST2                            ; 00587c63
    FSTP float ptr [ESP + 0x1c]         ; 00587c65
    FXCH                                ; 00587c69
    FSTP float ptr [ESP + 0x20]         ; 00587c6b
    FSTP float ptr [ESP + 0x18]         ; 00587c6f
    MOVSD ES:EDI,ESI                    ; 00587c73
    MOVSD ES:EDI,ESI                    ; 00587c74
    MOVSD ES:EDI,ESI                    ; 00587c75
    TEST EBX,EBX                        ; 00587c76
    JZ 0x00587cc3                       ; 00587c78
        ;   XREF to: 00587cc3 (CONDITIONAL_JUMP)  ; LAB_00587cc3
    FLD float ptr [ESP + 0x28]          ; 00587c7a
    FABS                                ; 00587c7e
    FCOMP double ptr [0x005ee0af]       ; 00587c80 | DAT_005ee0af
    FNSTSW AX                           ; 00587c86
    SAHF                                ; 00587c88
    JA 0x00587cbf                       ; 00587c89
        ;   XREF to: 00587cbf (CONDITIONAL_JUMP)  ; LAB_00587cbf
    FLD float ptr [ESP + 0x24]          ; 00587c8b
    FABS                                ; 00587c8f
    FCOMP double ptr [0x005ee0b7]       ; 00587c91 | DAT_005ee0b7
    FNSTSW AX                           ; 00587c97
    SAHF                                ; 00587c99
    JA 0x00587cbf                       ; 00587c9a
        ;   XREF to: 00587cbf (CONDITIONAL_JUMP)  ; LAB_00587cbf
    FLD float ptr [ESP + 0x2c]          ; 00587c9c
    FABS                                ; 00587ca0
    FCOMP double ptr [0x005ee0b7]       ; 00587ca2 | DAT_005ee0b7
    FNSTSW AX                           ; 00587ca8
    SAHF                                ; 00587caa
    JA 0x00587cbf                       ; 00587cab
        ;   XREF to: 00587cbf (CONDITIONAL_JUMP)  ; LAB_00587cbf
    CMP dword ptr [EBP + 0x20],0x0      ; 00587cad
        ;   Label: LAB_00587cad
    JZ 0x00587cfa                       ; 00587cb1
        ;   XREF to: 00587cfa (CONDITIONAL_JUMP)  ; LAB_00587cfa
    MOV EAX,0x1                         ; 00587cb3
    MOV ESP,EBP                         ; 00587cb8
        ;   Label: LAB_00587cb8
    POP EBP                             ; 00587cba
    POP EDI                             ; 00587cbb
    POP ESI                             ; 00587cbc
    POP EBX                             ; 00587cbd
    RET                                 ; 00587cbe
    XOR EAX,EAX                         ; 00587cbf
        ;   Label: LAB_00587cbf
    JMP 0x00587cb8                      ; 00587cc1
        ;   XREF to: 00587cb8 (UNCONDITIONAL_JUMP)  ; LAB_00587cb8
    FLD float ptr [ESP + 0x28]          ; 00587cc3
        ;   Label: LAB_00587cc3
    FABS                                ; 00587cc7
    FCOMP double ptr [0x005ee09f]       ; 00587cc9 | DAT_005ee09f
    FNSTSW AX                           ; 00587ccf
    SAHF                                ; 00587cd1
    JA 0x00587cf6                       ; 00587cd2
        ;   XREF to: 00587cf6 (CONDITIONAL_JUMP)  ; LAB_00587cf6
    FLD float ptr [ESP + 0x24]          ; 00587cd4
    FABS                                ; 00587cd8
    FCOMP double ptr [0x005ee0a7]       ; 00587cda | DAT_005ee0a7
    FNSTSW AX                           ; 00587ce0
    SAHF                                ; 00587ce2
    JA 0x00587cf6                       ; 00587ce3
        ;   XREF to: 00587cf6 (CONDITIONAL_JUMP)  ; LAB_00587cf6
    FLD float ptr [ESP + 0x2c]          ; 00587ce5
    FABS                                ; 00587ce9
    FCOMP double ptr [0x005ee0a7]       ; 00587ceb | DAT_005ee0a7
    FNSTSW AX                           ; 00587cf1
    SAHF                                ; 00587cf3
    JBE 0x00587cad                      ; 00587cf4
        ;   XREF to: 00587cad (CONDITIONAL_JUMP)  ; LAB_00587cad
    XOR EAX,EAX                         ; 00587cf6
        ;   Label: LAB_00587cf6
    JMP 0x00587cb8                      ; 00587cf8
        ;   XREF to: 00587cb8 (UNCONDITIONAL_JUMP)  ; LAB_00587cb8
    MOV EDI,ESP                         ; 00587cfa
        ;   Label: LAB_00587cfa
    MOV ESI,EDX                         ; 00587cfc
    PUSH ECX                            ; 00587cfe
    MOVSD ES:EDI,ESI                    ; 00587cff
    MOVSD ES:EDI,ESI                    ; 00587d00
    MOVSD ES:EDI,ESI                    ; 00587d01
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 00587d02
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 00587d07
    PUSH 0x0                            ; 00587d0a
    LEA EDX,[ESP + 0x10]                ; 00587d0c
    PUSH EDX                            ; 00587d10
    LEA EDX,[ESP + 0x8]                 ; 00587d11
    PUSH EDX                            ; 00587d15
    PUSH EAX                            ; 00587d16
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 00587d17
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00587d1c
    CMP EAX,0x1                         ; 00587d1f
    SETZ AL                             ; 00587d22
    AND EAX,0xff                        ; 00587d25
    MOV ESP,EBP                         ; 00587d2a
    POP EBP                             ; 00587d2c
    POP EDI                             ; 00587d2d
    POP ESI                             ; 00587d2e
    POP EBX                             ; 00587d2f
    RET                                 ; 00587d30

