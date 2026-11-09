; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_box_cpp_FUN_00421b90(undefined4 param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
;
; XREF[1]:
;   core_actor.cpp_FUN_00409f20 at 0040a353
;
; Called Functions:
;   core_box.cpp_FUN_00421af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421b90
        ;   Label: core_box.cpp_FUN_00421b90
    PUSH ESI                            ; 00421b91
    PUSH EDI                            ; 00421b92
    SUB ESP,0x28                        ; 00421b93
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00421b96
    PUSH EBX                            ; 00421b9a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00421b9b
    PUSH EDX                            ; 00421b9f
    LEA ESI,[ESP + 0x14]                ; 00421ba0
    LEA EDI,[ESP + 0x8]                 ; 00421ba4
    CALL core_box.cpp_FUN_00421af0      ; 00421ba8
        ;   XREF to: 00421af0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00421af0()
    LEA ESI,[ESP + 0x14]                ; 00421bad
    ADD ESP,0x8                         ; 00421bb1
    MOVSD ES:EDI,ESI                    ; 00421bb4
    MOVSD ES:EDI,ESI                    ; 00421bb5
    MOVSD ES:EDI,ESI                    ; 00421bb6
    FLD float ptr [ESP]                 ; 00421bb7
    FSUB float ptr [EBX]                ; 00421bba
    FMUL ST0                            ; 00421bbc
    FLD float ptr [ESP + 0x4]           ; 00421bbe
    FSUB float ptr [EBX + 0x4]          ; 00421bc2
    FMUL ST0                            ; 00421bc5
    FLD float ptr [ESP + 0x8]           ; 00421bc7
    FXCH                                ; 00421bcb
    FADDP ST2,ST0                       ; 00421bcd
    FSUB float ptr [EBX + 0x8]          ; 00421bcf
    FMUL ST0                            ; 00421bd2
    FLD float ptr [ESP + 0x40]          ; 00421bd4
    FLD ST0                             ; 00421bd8
    FXCH ST2                            ; 00421bda
    FADDP ST3,ST0                       ; 00421bdc
    FMULP                               ; 00421bde
    FXCH                                ; 00421be0
    FCOMPP                              ; 00421be2
    FNSTSW AX                           ; 00421be4
    SAHF                                ; 00421be6
    SETBE BL                            ; 00421be7
    XOR EAX,EAX                         ; 00421bea
    MOV AL,BL                           ; 00421bec
    ADD ESP,0x28                        ; 00421bee
    POP EDI                             ; 00421bf1
    POP ESI                             ; 00421bf2
    POP EBX                             ; 00421bf3
    RET                                 ; 00421bf4

