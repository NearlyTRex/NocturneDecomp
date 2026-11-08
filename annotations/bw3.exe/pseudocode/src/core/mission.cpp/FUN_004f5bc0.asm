; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_004be8d0 at 004beabf
;   FUN_004f72a0 at 004f73ef
;   FUN_00505a30 at 00506048
;
; Referenced Globals:
;   undefined4 DAT_005c837b
;   TerminatedCString s_world_005c837e
;   TerminatedCString s_core_mission_cpp_005c8384
;   TerminatedCString s_CDemonMission_load_Unabl_005c8398
;   TerminatedCString s_Loading_mission_005c83c2
;   undefined4 DAT_006002ac
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004659c0
;   FUN_004e0000
;   FUN_004e4330
;   FUN_004f5cc0
;   FUN_004f7a20
;   FUN_00508960
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5bc0
        ;   Label: FUN_004f5bc0
    PUSH EDI                            ; 004f5bc1
    PUSH EBP                            ; 004f5bc2
    PUSH 0x5c837b                       ; 004f5bc3 | DAT_005c837b
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f5bc8
    PUSH EDX                            ; 004f5bcc
    PUSH 0x5c837e                       ; 004f5bcd | = "world"
    CALL FUN_004659c0                   ; 004f5bd2
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004f5bd7
    MOV EBX,EAX                         ; 004f5bda
    TEST EAX,EAX                        ; 004f5bdc
    JZ 0x004f5c2c                       ; 004f5bde
        ;   XREF to: 004f5c2c (CONDITIONAL_JUMP)  ; LAB_004f5c2c
    PUSH 0x0                            ; 004f5be0
        ;   Label: LAB_004f5be0
    PUSH 0x5c83c2                       ; 004f5be2 | = "Loading mission"
    CALL FUN_00508960                   ; 004f5be7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004f5bec
    PUSH EAX                            ; 004f5bef
    MOV EDI,dword ptr [0x006002ac]      ; 004f5bf0 | DAT_006002ac
    PUSH EDI                            ; 004f5bf6
    CALL FUN_004e0000                   ; 004f5bf7
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0000()
    ADD ESP,0xc                         ; 004f5bfc
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f5bff
    PUSH EBP                            ; 004f5c03
    PUSH EBX                            ; 004f5c04
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f5c05
    PUSH EAX                            ; 004f5c09
    CALL FUN_004f5cc0                   ; 004f5c0a
        ;   XREF to: 004f5cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5cc0()
    ADD ESP,0xc                         ; 004f5c0f
    PUSH EBX                            ; 004f5c12
    CALL FUN_005a3a90                   ; 004f5c13
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004f5c18
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f5c1b
    PUSH EDX                            ; 004f5c1f
    CALL FUN_004f7a20                   ; 004f5c20
        ;   XREF to: 004f7a20 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7a20()
    ADD ESP,0x4                         ; 004f5c25
    POP EBP                             ; 004f5c28
    POP EDI                             ; 004f5c29
    POP EBX                             ; 004f5c2a
    RET                                 ; 004f5c2b
    PUSH ESI                            ; 004f5c2c
        ;   Label: LAB_004f5c2c
    MOV ECX,0x5c8384                    ; 004f5c2d | = "..\\core\\mission.cpp"
    MOV ESI,0xa3                        ; 004f5c32
    PUSH 0x5c8398                       ; 004f5c37 | = "CDemonMission::load - Unable to open ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004f5c3c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f5c42 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004f5c48
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004f5c4d
    POP ESI                             ; 004f5c50
    JMP 0x004f5be0                      ; 004f5c51
        ;   XREF to: 004f5be0 (UNCONDITIONAL_JUMP)  ; LAB_004f5be0

