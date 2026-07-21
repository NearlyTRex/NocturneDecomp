; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055d610(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[13]:
;   FUN_00410490 at 00410709
;   FUN_00439f50 at 0043a1b4
;   FUN_0043b110 at 0043b14b
;   FUN_00497900 at 0049794b
;   FUN_004b32d0 at 004b3546
;   FUN_004b9fe0 at 004ba2be
;   FUN_004f5d90 at 004f5e6f
;   FUN_004fbf20 at 004fc2a8
;   FUN_005384d0 at 005387b9
;   FUN_00541d00 at 00541fdb
;   ... and 3 more
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_matrixToQuaternion_FUN_0055cf10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d610
        ;   Label: FUN_0055d610
    PUSH EDI                            ; 0055d611
    PUSH EBP                            ; 0055d612
    MOV EBP,ESP                         ; 0055d613
    SUB ESP,0x4c                        ; 0055d615
    MOV EBX,ESI                         ; 0055d618
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055d61a
    PUSH EDX                            ; 0055d61d
    LEA ESI,[EBP + -0xc]                ; 0055d61e
    XOR ECX,ECX                         ; 0055d621
    PUSH ESI                            ; 0055d623
    LEA ESI,[EBP + -0x4c]               ; 0055d624
    MOV dword ptr [EBP + -0xc],ECX      ; 0055d627
    PUSH ESI                            ; 0055d62a
    MOV dword ptr [EBP + -0x8],ECX      ; 0055d62b
    MOV dword ptr [EBP + -0x4],ECX      ; 0055d62e
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0055d631
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 0055d636
    LEA ESI,[EBP + -0x4c]               ; 0055d639
    PUSH ESI                            ; 0055d63c
    LEA ESI,[EBP + -0x1c]               ; 0055d63d
    MOV EDI,EBX                         ; 0055d640
    CALL core_xform.cpp_matrixToQuaternion_FUN_0055cf10 ; 0055d642
        ;   XREF to: 0055cf10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToQuaternion_FUN_0055cf10()
    LEA ESI,[EBP + -0x1c]               ; 0055d647
    ADD ESP,0x4                         ; 0055d64a
    MOVSD ES:EDI,ESI                    ; 0055d64d
    MOVSD ES:EDI,ESI                    ; 0055d64e
    MOVSD ES:EDI,ESI                    ; 0055d64f
    MOVSD ES:EDI,ESI                    ; 0055d650
    MOV EAX,EBX                         ; 0055d651
    MOV ESP,EBP                         ; 0055d653
    POP EBP                             ; 0055d655
    POP EDI                             ; 0055d656
    POP EBX                             ; 0055d657
    RET                                 ; 0055d658

