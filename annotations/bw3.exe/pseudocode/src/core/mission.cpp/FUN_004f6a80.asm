; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_004f6a80(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_mission.cpp_FUN_004f6de0 at 004f6e5d
;   core_mission.cpp_FUN_004f722c at 004f727e
;   core_mission.cpp_FUN_004f7590 at 004f75d9
;
; Referenced Globals:
;   TerminatedCString s_Setting_up_actors_005c89b1
;   TerminatedCString s_Setting_up_actors_005c89c3
;   TerminatedCString s_Setting_up_actors_005c89d5
;   TerminatedCString s_Setting_up_actors_005c89e7
;   undefined4 DAT_006002ac
;
; Called Functions:
;   core_level.cpp_FUN_004e0000
;   core_skeleton.cpp_FUN_005503c0
;   core_skeleton.cpp_FUN_005503f0
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6a80
        ;   Label: core_mission.cpp_FUN_004f6a80
    PUSH ESI                            ; 004f6a81
    PUSH EDI                            ; 004f6a82
    PUSH EBP                            ; 004f6a83
    SUB ESP,0x4                         ; 004f6a84
    PUSH 0x0                            ; 004f6a87
    PUSH 0x5c89b1                       ; 004f6a89 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004f6a8e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004f6a93
    PUSH EAX                            ; 004f6a96
    MOV EDX,dword ptr [0x006002ac]      ; 004f6a97 | DAT_006002ac
    PUSH EDX                            ; 004f6a9d
    CALL core_level.cpp_FUN_004e0000    ; 004f6a9e
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e0000()
    ADD ESP,0xc                         ; 004f6aa3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f6aa6
    CALL core_skeleton.cpp_FUN_005503c0 ; 004f6aaa
        ;   XREF to: 005503c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005503c0()
    MOV EBX,dword ptr [EBX + 0x143c]    ; 004f6aaf
    XOR EDI,EDI                         ; 004f6ab5
    TEST EBX,EBX                        ; 004f6ab7
    JZ 0x004f6ae0                       ; 004f6ab9
        ;   XREF to: 004f6ae0 (CONDITIONAL_JUMP)  ; LAB_004f6ae0
    PUSH EBX                            ; 004f6abb
        ;   Label: LAB_004f6abb
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f6abc
    INC EDI                             ; 004f6ac2
    CALL dword ptr [EAX + 0x4]          ; 004f6ac3
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004f6ac6
    ADD ESP,0x4                         ; 004f6acc
    TEST EBX,EBX                        ; 004f6acf
    JNZ 0x004f6abb                      ; 004f6ad1
        ;   XREF to: 004f6abb (CONDITIONAL_JUMP)  ; LAB_004f6abb
    LEA EAX,[EAX]                       ; 004f6ad3
    LEA EDX,[EDX]                       ; 004f6ad9
    NOP                                 ; 004f6adf
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f6ae0
        ;   Label: LAB_004f6ae0
    CMP dword ptr [EAX + 0x1008],0x0    ; 004f6ae4
    JZ 0x004f6bb9                       ; 004f6aeb
        ;   XREF to: 004f6bb9 (CONDITIONAL_JUMP)  ; LAB_004f6bb9
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f6af1
        ;   Label: LAB_004f6af1
    MOV EBX,dword ptr [EBX + 0x143c]    ; 004f6af5
    XOR ESI,ESI                         ; 004f6afb
    TEST EBX,EBX                        ; 004f6afd
    JZ 0x004f6ba1                       ; 004f6aff
        ;   XREF to: 004f6ba1 (CONDITIONAL_JUMP)  ; LAB_004f6ba1
    LEA EAX,[EDI*0x4 + 0x0]             ; 004f6b05
    SUB EAX,EDI                         ; 004f6b0c
    MOV EDX,EAX                         ; 004f6b0e
    SAR EDX,0x1f                        ; 004f6b10
    SHL EDX,0x2                         ; 004f6b13
    SBB EAX,EDX                         ; 004f6b16
    SAR EAX,0x2                         ; 004f6b18
    MOV dword ptr [ESP],EAX             ; 004f6b1b
    MOV EDX,EDI                         ; 004f6b1e
    MOV EAX,EDI                         ; 004f6b20
    SAR EDX,0x1f                        ; 004f6b22
    SUB EAX,EDX                         ; 004f6b25
    SAR EAX,0x1                         ; 004f6b27
    MOV EBP,EAX                         ; 004f6b29
    MOV EDX,EDI                         ; 004f6b2b
    MOV EAX,EDI                         ; 004f6b2d
    SAR EDX,0x1f                        ; 004f6b2f
    SHL EDX,0x2                         ; 004f6b32
    SBB EAX,EDX                         ; 004f6b35
    SAR EAX,0x2                         ; 004f6b37
    MOV EDI,EAX                         ; 004f6b3a
    PUSH EBX                            ; 004f6b3c
        ;   Label: LAB_004f6b3c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f6b3d
    INC ESI                             ; 004f6b43
    CALL dword ptr [EAX]                ; 004f6b44
    ADD ESP,0x4                         ; 004f6b46
    CMP ESI,EDI                         ; 004f6b49
    JZ 0x004f6bc3                       ; 004f6b4b
        ;   XREF to: 004f6bc3 (CONDITIONAL_JUMP)  ; LAB_004f6bc3
    CMP ESI,EBP                         ; 004f6b51
        ;   Label: LAB_004f6b51
    JNZ 0x004f6b74                      ; 004f6b53
        ;   XREF to: 004f6b74 (CONDITIONAL_JUMP)  ; LAB_004f6b74
    PUSH 0x0                            ; 004f6b55
    PUSH 0x5c89d5                       ; 004f6b57 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004f6b5c
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004f6b61
    PUSH EAX                            ; 004f6b64
    MOV EDX,dword ptr [0x006002ac]      ; 004f6b65 | DAT_006002ac
    PUSH EDX                            ; 004f6b6b
    CALL core_level.cpp_FUN_004e0000    ; 004f6b6c
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e0000()
    ADD ESP,0xc                         ; 004f6b71
    CMP ESI,dword ptr [ESP]             ; 004f6b74
        ;   Label: LAB_004f6b74
    JNZ 0x004f6b97                      ; 004f6b77
        ;   XREF to: 004f6b97 (CONDITIONAL_JUMP)  ; LAB_004f6b97
    PUSH 0x0                            ; 004f6b79
    PUSH 0x5c89e7                       ; 004f6b7b | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004f6b80
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004f6b85
    PUSH EAX                            ; 004f6b88
    MOV EAX,[0x006002ac]                ; 004f6b89 | DAT_006002ac
    PUSH EAX                            ; 004f6b8e
    CALL core_level.cpp_FUN_004e0000    ; 004f6b8f
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e0000()
    ADD ESP,0xc                         ; 004f6b94
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004f6b97
        ;   Label: LAB_004f6b97
    TEST EBX,EBX                        ; 004f6b9d
    JNZ 0x004f6b3c                      ; 004f6b9f
        ;   XREF to: 004f6b3c (CONDITIONAL_JUMP)  ; LAB_004f6b3c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f6ba1
        ;   Label: LAB_004f6ba1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f6ba5
    MOV EAX,dword ptr [EAX]             ; 004f6ba9
    MOV dword ptr [EDX + 0x1454],EAX    ; 004f6bab
    ADD ESP,0x4                         ; 004f6bb1
    POP EBP                             ; 004f6bb4
    POP EDI                             ; 004f6bb5
    POP ESI                             ; 004f6bb6
    POP EBX                             ; 004f6bb7
    RET                                 ; 004f6bb8
    CALL core_skeleton.cpp_FUN_005503f0 ; 004f6bb9
        ;   XREF to: 005503f0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005503f0()
        ;   Label: LAB_004f6bb9
    JMP 0x004f6af1                      ; 004f6bbe
        ;   XREF to: 004f6af1 (UNCONDITIONAL_JUMP)  ; LAB_004f6af1
    PUSH 0x0                            ; 004f6bc3
        ;   Label: LAB_004f6bc3
    PUSH 0x5c89c3                       ; 004f6bc5 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004f6bca
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004f6bcf
    PUSH EAX                            ; 004f6bd2
    MOV EAX,[0x006002ac]                ; 004f6bd3 | DAT_006002ac
    PUSH EAX                            ; 004f6bd8
    CALL core_level.cpp_FUN_004e0000    ; 004f6bd9
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e0000()
    ADD ESP,0xc                         ; 004f6bde
    JMP 0x004f6b51                      ; 004f6be1
        ;   XREF to: 004f6b51 (UNCONDITIONAL_JUMP)  ; LAB_004f6b51

