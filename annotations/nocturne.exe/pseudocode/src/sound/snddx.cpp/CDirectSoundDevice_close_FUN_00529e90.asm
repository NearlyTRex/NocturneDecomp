; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(int *param_1)
;
;
; XREF[1]:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0 at 0052bf05
;
; Referenced Globals:
;   undefined4 DAT_02dc9214
;   undefined4 DAT_02dc9218
;   undefined4 DAT_02dc921c
;   undefined4 DAT_02dc9220
;   undefined4 DAT_02dc9224
;   undefined4 DAT_02dc9244
;   undefined4 DAT_02dc9248
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529e90
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90
    PUSH ESI                            ; 00529e91
    PUSH EDI                            ; 00529e92
    PUSH EBP                            ; 00529e93
    MOV EDX,dword ptr [ESP + 0x14]      ; 00529e94
    PUSH EDX                            ; 00529e98
    MOV EAX,dword ptr [EDX]             ; 00529e99
    MOV EDI,0x1                         ; 00529e9b
    CALL dword ptr [EAX + 0x8]          ; 00529ea0
    ADD ESP,0x4                         ; 00529ea3
    TEST EAX,EAX                        ; 00529ea6
    JZ 0x00529f41                       ; 00529ea8
        ;   XREF to: 00529f41 (CONDITIONAL_JUMP)  ; LAB_00529f41
    MOV EBX,0x2dc9244                   ; 00529eae
        ;   Label: LAB_00529eae
    LEA ESI,[EBX + 0x64]                ; 00529eb3
    MOV EDX,dword ptr [EBX]             ; 00529eb6 | DAT_02dc9244 | DAT_02dc9248
        ;   Label: LAB_00529eb6
    TEST EDX,EDX                        ; 00529eb8
    JZ 0x00529eca                       ; 00529eba
        ;   XREF to: 00529eca (CONDITIONAL_JUMP)  ; LAB_00529eca
    MOV EAX,EDX                         ; 00529ebc
    PUSH EAX                            ; 00529ebe
    MOV EDX,dword ptr [EDX]             ; 00529ebf
    CALL dword ptr [EDX + 0x8]          ; 00529ec1
    MOV dword ptr [EBX],0x0             ; 00529ec4 | DAT_02dc9244
    ADD EBX,0x4                         ; 00529eca
        ;   Label: LAB_00529eca
    CMP EBX,ESI                         ; 00529ecd
    JNZ 0x00529eb6                      ; 00529ecf
        ;   XREF to: 00529eb6 (CONDITIONAL_JUMP)  ; LAB_00529eb6
    MOV ECX,dword ptr [0x02dc9220]      ; 00529ed1 | DAT_02dc9220
    TEST ECX,ECX                        ; 00529ed7
    JZ 0x00529ee9                       ; 00529ed9
        ;   XREF to: 00529ee9 (CONDITIONAL_JUMP)  ; LAB_00529ee9
    PUSH ECX                            ; 00529edb
    MOV EDX,dword ptr [ECX]             ; 00529edc
    XOR EBX,ESI                         ; 00529ede
    CALL dword ptr [EDX + 0x8]          ; 00529ee0
    MOV dword ptr [0x02dc9220],EBX      ; 00529ee3 | DAT_02dc9220
    MOV ESI,dword ptr [0x02dc921c]      ; 00529ee9 | DAT_02dc921c
        ;   Label: LAB_00529ee9
    TEST ESI,ESI                        ; 00529eef
    JZ 0x00529f01                       ; 00529ef1
        ;   XREF to: 00529f01 (CONDITIONAL_JUMP)  ; LAB_00529f01
    PUSH ESI                            ; 00529ef3
    MOV EDX,dword ptr [ESI]             ; 00529ef4
    XOR EBP,EBP                         ; 00529ef6
    CALL dword ptr [EDX + 0x8]          ; 00529ef8
    MOV dword ptr [0x02dc921c],EBP      ; 00529efb | DAT_02dc921c
    MOV EAX,[0x02dc9224]                ; 00529f01 | DAT_02dc9224
        ;   Label: LAB_00529f01
    TEST EAX,EAX                        ; 00529f06
    JZ 0x00529f18                       ; 00529f08
        ;   XREF to: 00529f18 (CONDITIONAL_JUMP)  ; LAB_00529f18
    PUSH EAX                            ; 00529f0a
    MOV EDX,dword ptr [EAX]             ; 00529f0b
    CALL dword ptr [EDX + 0x8]          ; 00529f0d
    XOR EDX,EDX                         ; 00529f10
    MOV dword ptr [0x02dc9224],EDX      ; 00529f12 | DAT_02dc9224
    MOV ECX,dword ptr [0x02dc9218]      ; 00529f18 | DAT_02dc9218
        ;   Label: LAB_00529f18
    TEST ECX,ECX                        ; 00529f1e
    JZ 0x00529f30                       ; 00529f20
        ;   XREF to: 00529f30 (CONDITIONAL_JUMP)  ; LAB_00529f30
    PUSH ECX                            ; 00529f22
    MOV EDX,dword ptr [ECX]             ; 00529f23
    XOR EBX,EBX                         ; 00529f25
    CALL dword ptr [EDX + 0x8]          ; 00529f27
    MOV dword ptr [0x02dc9218],EBX      ; 00529f2a | DAT_02dc9218
    MOV ESI,dword ptr [0x02dc9214]      ; 00529f30 | DAT_02dc9214
        ;   Label: LAB_00529f30
    TEST ESI,ESI                        ; 00529f36
    JNZ 0x00529f48                      ; 00529f38
        ;   XREF to: 00529f48 (CONDITIONAL_JUMP)  ; LAB_00529f48
    MOV EAX,EDI                         ; 00529f3a
    POP EBP                             ; 00529f3c
    POP EDI                             ; 00529f3d
    POP ESI                             ; 00529f3e
    POP EBX                             ; 00529f3f
    RET                                 ; 00529f40
    XOR EDI,EDI                         ; 00529f41
        ;   Label: LAB_00529f41
    JMP 0x00529eae                      ; 00529f43
        ;   XREF to: 00529eae (UNCONDITIONAL_JUMP)  ; LAB_00529eae
    PUSH ESI                            ; 00529f48
        ;   Label: LAB_00529f48
    MOV EDX,dword ptr [ESI]             ; 00529f49
    XOR EBP,EBP                         ; 00529f4b
    CALL dword ptr [EDX + 0x8]          ; 00529f4d
    MOV dword ptr [0x02dc9214],EBP      ; 00529f50 | DAT_02dc9214
    MOV EAX,EDI                         ; 00529f56
    POP EBP                             ; 00529f58
    POP EDI                             ; 00529f59
    POP ESI                             ; 00529f5a
    POP EBX                             ; 00529f5b
    RET                                 ; 00529f5c

