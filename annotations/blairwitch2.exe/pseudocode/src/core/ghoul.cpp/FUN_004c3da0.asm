; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghoul_cpp_FUN_004c3da0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01cb821c
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546790
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3da0
        ;   Label: core_ghoul.cpp_FUN_004c3da0
    PUSH EDI                            ; 004c3da1
    PUSH EBP                            ; 004c3da2
    MOV EBP,ESP                         ; 004c3da3
    SUB ESP,0x78                        ; 004c3da5
    MOV EBX,ESI                         ; 004c3da8
    MOV EDX,dword ptr [0x01cb821c]      ; 004c3daa | DAT_01cb821c
    MOV ESI,dword ptr [EBP + 0x10]      ; 004c3db0
    PUSH EDX                            ; 004c3db3
    ADD ESI,0x2b4                       ; 004c3db4
    PUSH ESI                            ; 004c3dba
    LEA ESI,[EBP + -0x48]               ; 004c3dbb
    LEA EDI,[EBP + -0x78]               ; 004c3dbe
    CALL core_skeleton.cpp_FUN_00546790 ; 004c3dc1
        ;   XREF to: 00546790 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546790()
    MOV ECX,0xc                         ; 004c3dc6
    LEA ESI,[EBP + -0x48]               ; 004c3dcb
    MOVSD.REP ES:EDI,ESI                ; 004c3dce
    ADD ESP,0x8                         ; 004c3dd0
    LEA ESI,[EBP + -0x78]               ; 004c3dd3
    MOV EDI,0x3e99999a                  ; 004c3dd6
    XOR ECX,ECX                         ; 004c3ddb
    PUSH ESI                            ; 004c3ddd
    MOV ESI,0x3f333333                  ; 004c3dde
    MOV dword ptr [EBP + -0x18],ECX     ; 004c3de3
    MOV dword ptr [EBP + -0x14],ESI     ; 004c3de6
    LEA ESI,[EBP + -0x18]               ; 004c3de9
    MOV dword ptr [EBP + -0x10],EDI     ; 004c3dec
    PUSH ESI                            ; 004c3def
    LEA ESI,[EBP + -0xc]                ; 004c3df0
    MOV EDI,EBX                         ; 004c3df3
    CALL core_xform.cpp_FUN_00591530    ; 004c3df5
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + -0xc]                ; 004c3dfa
    ADD ESP,0x8                         ; 004c3dfd
    MOVSD ES:EDI,ESI                    ; 004c3e00
    MOVSD ES:EDI,ESI                    ; 004c3e01
    MOVSD ES:EDI,ESI                    ; 004c3e02
    MOV EAX,EBX                         ; 004c3e03
    MOV ESP,EBP                         ; 004c3e05
    POP EBP                             ; 004c3e07
    POP EDI                             ; 004c3e08
    POP EBX                             ; 004c3e09
    RET                                 ; 004c3e0a

