; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00429d60(CDemonActor *param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[4]:
;   core_charactr.cpp_FUN_00424470 at 0042449d
;   core_doc.cpp_FUN_00450c60 at 00451dfd
;   core_stranger.cpp_FUN_00563060 at 00564154
;   core_tentacle.cpp_FUN_00573110 at 00573287
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429d60
        ;   Label: core_charactr.cpp_FUN_00429d60
    PUSH ESI                            ; 00429d61
    PUSH EDI                            ; 00429d62
    PUSH EBP                            ; 00429d63
    SUB ESP,0x60                        ; 00429d64
    MOV EBX,dword ptr [ESP + 0x74]      ; 00429d67
    MOV EBP,dword ptr [ESP + 0x78]      ; 00429d6b
    LEA EAX,[EBX + 0x2508]              ; 00429d6f
    PUSH EAX                            ; 00429d75
    PUSH EBX                            ; 00429d76
    LEA ESI,[ESP + 0x5c]                ; 00429d77
    LEA EDI,[ESP + 0x20]                ; 00429d7b
    CALL core_actor.cpp_FUN_00408cf0    ; 00429d7f
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 00429d84
    LEA EAX,[EBX + 0x257c]              ; 00429d87
    LEA ESI,[ESP + 0x54]                ; 00429d8d
    PUSH EAX                            ; 00429d91
    MOVSD ES:EDI,ESI                    ; 00429d92
    MOVSD ES:EDI,ESI                    ; 00429d93
    MOVSD ES:EDI,ESI                    ; 00429d94
    PUSH EBX                            ; 00429d95
    LEA ESI,[ESP + 0x38]                ; 00429d96
    LEA EDI,[ESP + 0x2c]                ; 00429d9a
    CALL core_actor.cpp_FUN_00408cf0    ; 00429d9e
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x38]                ; 00429da3
    ADD ESP,0x8                         ; 00429da7
    LEA EAX,[EBX + 0x30]                ; 00429daa
    MOVSD ES:EDI,ESI                    ; 00429dad
    MOVSD ES:EDI,ESI                    ; 00429dae
    MOVSD ES:EDI,ESI                    ; 00429daf
    CMP EAX,EBP                         ; 00429db0
    JZ 0x00429dc5                       ; 00429db2
        ;   XREF to: 00429dc5 (CONDITIONAL_JUMP)  ; LAB_00429dc5
    MOV EDX,dword ptr [EBP]             ; 00429db4
    MOV dword ptr [EAX],EDX             ; 00429db7
    MOV EDX,dword ptr [EBP + 0x4]       ; 00429db9
    MOV dword ptr [EAX + 0x4],EDX       ; 00429dbc
    MOV EDX,dword ptr [EBP + 0x8]       ; 00429dbf
    MOV dword ptr [EAX + 0x8],EDX       ; 00429dc2
    PUSH EBX                            ; 00429dc5
        ;   Label: LAB_00429dc5
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00429dc6
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00429dcb
    LEA EAX,[ESP + 0x18]                ; 00429dce
    PUSH EAX                            ; 00429dd2
    PUSH EBX                            ; 00429dd3
    LEA ESI,[ESP + 0x8]                 ; 00429dd4
    LEA EDI,[ESP + 0x14]                ; 00429dd8
    CALL core_actor.cpp_FUN_00408d30    ; 00429ddc
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x8]                 ; 00429de1
    LEA EAX,[ESP + 0x14]                ; 00429de5
    ADD ESP,0x8                         ; 00429de9
    LEA EDX,[EBX + 0x2508]              ; 00429dec
    MOVSD ES:EDI,ESI                    ; 00429df2
    MOVSD ES:EDI,ESI                    ; 00429df3
    MOVSD ES:EDI,ESI                    ; 00429df4
    CMP EDX,EAX                         ; 00429df5
    JZ 0x00429e0d                       ; 00429df7
        ;   XREF to: 00429e0d (CONDITIONAL_JUMP)  ; LAB_00429e0d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00429df9
    MOV dword ptr [EDX],EAX             ; 00429dfd
    MOV EAX,dword ptr [ESP + 0x10]      ; 00429dff
    MOV dword ptr [EDX + 0x4],EAX       ; 00429e03
    MOV EAX,dword ptr [ESP + 0x14]      ; 00429e06
    MOV dword ptr [EDX + 0x8],EAX       ; 00429e0a
    LEA EAX,[ESP + 0x24]                ; 00429e0d
        ;   Label: LAB_00429e0d
    PUSH EAX                            ; 00429e11
    PUSH EBX                            ; 00429e12
    LEA ESI,[ESP + 0x50]                ; 00429e13
    LEA EDI,[ESP + 0x44]                ; 00429e17
    CALL core_actor.cpp_FUN_00408d30    ; 00429e1b
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x50]                ; 00429e20
    LEA EAX,[ESP + 0x44]                ; 00429e24
    ADD ESP,0x8                         ; 00429e28
    ADD EBX,0x257c                      ; 00429e2b
    MOVSD ES:EDI,ESI                    ; 00429e31
    MOVSD ES:EDI,ESI                    ; 00429e32
    MOVSD ES:EDI,ESI                    ; 00429e33
    CMP EBX,EAX                         ; 00429e34
    JNZ 0x00429e40                      ; 00429e36
        ;   XREF to: 00429e40 (CONDITIONAL_JUMP)  ; LAB_00429e40
    ADD ESP,0x60                        ; 00429e38
    POP EBP                             ; 00429e3b
    POP EDI                             ; 00429e3c
    POP ESI                             ; 00429e3d
    POP EBX                             ; 00429e3e
    RET                                 ; 00429e3f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00429e40
        ;   Label: LAB_00429e40
    MOV dword ptr [EBX],EAX             ; 00429e44
    MOV EAX,dword ptr [ESP + 0x40]      ; 00429e46
    MOV dword ptr [EBX + 0x4],EAX       ; 00429e4a
    MOV EAX,dword ptr [ESP + 0x44]      ; 00429e4d
    MOV dword ptr [EBX + 0x8],EAX       ; 00429e51
    ADD ESP,0x60                        ; 00429e54
    POP EBP                             ; 00429e57
    POP EDI                             ; 00429e58
    POP ESI                             ; 00429e59
    POP EBX                             ; 00429e5a
    RET                                 ; 00429e5b

