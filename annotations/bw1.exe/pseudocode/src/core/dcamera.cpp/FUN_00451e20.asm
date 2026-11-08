; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00451e20(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00550580 at 00550833
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005d7897
;   TerminatedCString s_Unable_to_lock_hold_buff_005d78ab
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c83370
;
; Called Functions:
;   FUN_00453ed0
;   FUN_005030e0
;   FUN_00581f50
;   FUN_00581fa0
;   FUN_00581fe0
;   FUN_00582b70
;   FUN_00582b90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00451e20
        ;   Label: FUN_00451e20
    PUSH EDI                            ; 00451e21
    CMP dword ptr [0x0061b49c],0x1e0    ; 00451e22 | DAT_0061b49c
    JG 0x00451e61                       ; 00451e2c
        ;   XREF to: 00451e61 (CONDITIONAL_JUMP)  ; LAB_00451e61
    CALL FUN_00581f50                   ; 00451e2e
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00581f50()
    MOV ESI,dword ptr [ESP + 0xc]       ; 00451e33
        ;   Label: LAB_00451e33
    PUSH ESI                            ; 00451e37
    CALL FUN_00453ed0                   ; 00451e38
        ;   XREF to: 00453ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00453ed0()
    MOV EDI,dword ptr [0x0061b49c]      ; 00451e3d | DAT_0061b49c
    ADD ESP,0x4                         ; 00451e43
    CMP EDI,0x1e0                       ; 00451e46
    JLE 0x00451e91                      ; 00451e4c
        ;   XREF to: 00451e91 (CONDITIONAL_JUMP)  ; LAB_00451e91
    CALL FUN_00582b90                   ; 00451e4e
        ;   XREF to: 00582b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00582b90()
    CMP dword ptr [0x02c83370],0x0      ; 00451e53 | DAT_02c83370
    JNZ 0x00451ea7                      ; 00451e5a
        ;   XREF to: 00451ea7 (CONDITIONAL_JUMP)  ; LAB_00451ea7
    POP EDI                             ; 00451e5c
    POP ESI                             ; 00451e5d
    MOV EAX,EAX                         ; 00451e5e
    RET                                 ; 00451e60
    CALL FUN_00582b70                   ; 00451e61
        ;   XREF to: 00582b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00582b70()
        ;   Label: LAB_00451e61
    TEST EAX,EAX                        ; 00451e66
    JNZ 0x00451e33                      ; 00451e68
        ;   XREF to: 00451e33 (CONDITIONAL_JUMP)  ; LAB_00451e33
    PUSH EBX                            ; 00451e6a
    MOV ECX,0x5d7897                    ; 00451e6b | = "..\\core\\dcamera.cpp"
    MOV EBX,0xe84                       ; 00451e70
    PUSH 0x5d78ab                       ; 00451e75 | = "Unable to lock hold buffer.   Please ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00451e7a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00451e80 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00451e86
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00451e8b
    POP EBX                             ; 00451e8e
    JMP 0x00451e33                      ; 00451e8f
        ;   XREF to: 00451e33 (UNCONDITIONAL_JUMP)  ; LAB_00451e33
    PUSH 0x0                            ; 00451e91
        ;   Label: LAB_00451e91
    CALL FUN_00581fa0                   ; 00451e93
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00581fa0()
    ADD ESP,0x4                         ; 00451e98
    CMP dword ptr [0x02c83370],0x0      ; 00451e9b | DAT_02c83370
    JNZ 0x00451ea7                      ; 00451ea2
        ;   XREF to: 00451ea7 (CONDITIONAL_JUMP)  ; LAB_00451ea7
    POP EDI                             ; 00451ea4
    POP ESI                             ; 00451ea5
    RET                                 ; 00451ea6
    CALL FUN_00581fe0                   ; 00451ea7
        ;   XREF to: 00581fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00581fe0()
        ;   Label: LAB_00451ea7
    POP EDI                             ; 00451eac
    POP ESI                             ; 00451ead
    RET                                 ; 00451eae

