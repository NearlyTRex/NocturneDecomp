; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_0055b990(int param_1,int param_2,float *param_3)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   core_setdir.cpp_CDemonSet_isPointInVdirGroup_FUN_0055ba50 at 0055ba99
;   core_setdir.cpp_FUN_0055c060 at 0055c07a
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b990
        ;   Label: core_setdir.cpp_FUN_0055b990
    PUSH ESI                            ; 0055b991
    PUSH EDI                            ; 0055b992
    PUSH EBP                            ; 0055b993
    MOV EBP,ESP                         ; 0055b994
    SUB ESP,0x30                        ; 0055b996
    AND ESP,0xfffffff8                  ; 0055b999
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0055b99c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0055b99f
    FLD float ptr [ESI + 0x4]           ; 0055b9a2
    MOV EAX,EBX                         ; 0055b9a5
    FLD float ptr [ESI + 0x8]           ; 0055b9a7
    SHL EAX,0x4                         ; 0055b9aa
    FLD float ptr [ESI]                 ; 0055b9ad
    ADD EAX,EBX                         ; 0055b9af
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055b9b1
    SHL EAX,0x2                         ; 0055b9b4
    ADD EBX,0x15b42c                    ; 0055b9b7
    LEA EDI,[ESP + 0x24]                ; 0055b9bd
    ADD EBX,EAX                         ; 0055b9c1
    LEA ESI,[ESP + 0xc]                 ; 0055b9c3
    LEA EAX,[ESP + 0x24]                ; 0055b9c7
    FSUB float ptr [EBX]                ; 0055b9cb
    FXCH ST2                            ; 0055b9cd
    FSUB float ptr [EBX + 0x4]          ; 0055b9cf
    FXCH                                ; 0055b9d2
    FSUB float ptr [EBX + 0x8]          ; 0055b9d4
    FXCH ST2                            ; 0055b9d7
    FSTP float ptr [ESP + 0xc]          ; 0055b9d9
    FSTP float ptr [ESP + 0x10]         ; 0055b9dd
    FSTP float ptr [ESP + 0x14]         ; 0055b9e1
    PUSH EAX                            ; 0055b9e5
    LEA EAX,[EBX + 0x18]                ; 0055b9e6
    MOVSD ES:EDI,ESI                    ; 0055b9e9
    MOVSD ES:EDI,ESI                    ; 0055b9ea
    MOVSD ES:EDI,ESI                    ; 0055b9eb
    PUSH EAX                            ; 0055b9ec
    LEA ESI,[ESP + 0x8]                 ; 0055b9ed
    LEA EDI,[ESP + 0x20]                ; 0055b9f1
    CALL core_dirmat.cpp_FUN_0045f700   ; 0055b9f5
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x8]                 ; 0055b9fa
    ADD ESP,0x8                         ; 0055b9fe
    MOVSD ES:EDI,ESI                    ; 0055ba01
    MOVSD ES:EDI,ESI                    ; 0055ba02
    MOVSD ES:EDI,ESI                    ; 0055ba03
    FLD float ptr [EBX + 0xc]           ; 0055ba04
    FLD float ptr [ESP + 0x18]          ; 0055ba07
    FABS                                ; 0055ba0b
    FCOMPP                              ; 0055ba0d
    FNSTSW AX                           ; 0055ba0f
    SAHF                                ; 0055ba11
    JA 0x0055ba34                       ; 0055ba12
        ;   XREF to: 0055ba34 (CONDITIONAL_JUMP)  ; LAB_0055ba34
    FLD float ptr [ESP + 0x1c]          ; 0055ba14
    FABS                                ; 0055ba18
    FLD float ptr [EBX + 0x10]          ; 0055ba1a
    FCOMPP                              ; 0055ba1d
    FNSTSW AX                           ; 0055ba1f
    SAHF                                ; 0055ba21
    JC 0x0055ba34                       ; 0055ba22
        ;   XREF to: 0055ba34 (CONDITIONAL_JUMP)  ; LAB_0055ba34
    FLD float ptr [ESP + 0x20]          ; 0055ba24
    FABS                                ; 0055ba28
    FLD float ptr [EBX + 0x14]          ; 0055ba2a
    FCOMPP                              ; 0055ba2d
    FNSTSW AX                           ; 0055ba2f
    SAHF                                ; 0055ba31
    JNC 0x0055ba3d                      ; 0055ba32
        ;   XREF to: 0055ba3d (CONDITIONAL_JUMP)  ; LAB_0055ba3d
    XOR EAX,EAX                         ; 0055ba34
        ;   Label: LAB_0055ba34
    MOV ESP,EBP                         ; 0055ba36
    POP EBP                             ; 0055ba38
    POP EDI                             ; 0055ba39
    POP ESI                             ; 0055ba3a
    POP EBX                             ; 0055ba3b
    RET                                 ; 0055ba3c
    MOV EAX,0x1                         ; 0055ba3d
        ;   Label: LAB_0055ba3d
    MOV ESP,EBP                         ; 0055ba42
    POP EBP                             ; 0055ba44
    POP EDI                             ; 0055ba45
    POP ESI                             ; 0055ba46
    POP EBX                             ; 0055ba47
    RET                                 ; 0055ba48

