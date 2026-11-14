; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00577a90(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0057a340 at 0057a355
;
; Referenced Globals:
;   undefined4 DAT_02c81d94
;   undefined4 DAT_02c81d98
;   undefined4 DAT_02c81d9c
;   undefined4 DAT_02c81da0
;   undefined4 DAT_02c81da4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577a90
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00577a90
    PUSH ESI                            ; 00577a91
    PUSH EDI                            ; 00577a92
    PUSH EBP                            ; 00577a93
    MOV ESI,dword ptr [ESP + 0x14]      ; 00577a94
    PUSH ESI                            ; 00577a98
    MOV EAX,dword ptr [ESI]             ; 00577a99
    MOV EDI,0x1                         ; 00577a9b
    CALL dword ptr [EAX + 0x8]          ; 00577aa0
    ADD ESP,0x4                         ; 00577aa3
    TEST EAX,EAX                        ; 00577aa6
    JZ 0x00577b33                       ; 00577aa8
        ;   XREF to: 00577b33 (CONDITIONAL_JUMP)  ; LAB_00577b33
    XOR EBX,EBX                         ; 00577aae
        ;   Label: LAB_00577aae
    PUSH EBX                            ; 00577ab0
        ;   Label: LAB_00577ab0
    MOV EAX,dword ptr [ESI]             ; 00577ab1
    PUSH ESI                            ; 00577ab3
    INC EBX                             ; 00577ab4
    CALL dword ptr [EAX + 0x34]         ; 00577ab5
    ADD ESP,0x8                         ; 00577ab8
    CMP EBX,0x41                        ; 00577abb
    JL 0x00577ab0                       ; 00577abe
        ;   XREF to: 00577ab0 (CONDITIONAL_JUMP)  ; LAB_00577ab0
    MOV EDX,dword ptr [0x02c81da0]      ; 00577ac0 | DAT_02c81da0
    TEST EDX,EDX                        ; 00577ac6
    JZ 0x00577ad8                       ; 00577ac8
        ;   XREF to: 00577ad8 (CONDITIONAL_JUMP)  ; LAB_00577ad8
    PUSH EDX                            ; 00577aca
    MOV EBX,dword ptr [EDX]             ; 00577acb
    CALL dword ptr [EBX + 0x8]          ; 00577acd
    XOR ECX,ECX                         ; 00577ad0
    MOV dword ptr [0x02c81da0],ECX      ; 00577ad2 | DAT_02c81da0
    MOV EBX,dword ptr [0x02c81d9c]      ; 00577ad8 | DAT_02c81d9c
        ;   Label: LAB_00577ad8
    TEST EBX,EBX                        ; 00577ade
    JZ 0x00577af2                       ; 00577ae0
        ;   XREF to: 00577af2 (CONDITIONAL_JUMP)  ; LAB_00577af2
    MOV EAX,EBX                         ; 00577ae2
    PUSH EAX                            ; 00577ae4
    MOV EBX,dword ptr [EBX]             ; 00577ae5
    XOR ESI,ESI                         ; 00577ae7
    CALL dword ptr [EBX + 0x8]          ; 00577ae9
    MOV dword ptr [0x02c81d9c],ESI      ; 00577aec | DAT_02c81d9c
    MOV EBP,dword ptr [0x02c81da4]      ; 00577af2 | DAT_02c81da4
        ;   Label: LAB_00577af2
    TEST EBP,EBP                        ; 00577af8
    JZ 0x00577b0a                       ; 00577afa
        ;   XREF to: 00577b0a (CONDITIONAL_JUMP)  ; LAB_00577b0a
    PUSH EBP                            ; 00577afc
    MOV EBX,dword ptr [EBP]             ; 00577afd
    CALL dword ptr [EBX + 0x8]          ; 00577b00
    XOR EAX,EAX                         ; 00577b03
    MOV [0x02c81da4],EAX                ; 00577b05 | DAT_02c81da4
    MOV EDX,dword ptr [0x02c81d98]      ; 00577b0a | DAT_02c81d98
        ;   Label: LAB_00577b0a
    TEST EDX,EDX                        ; 00577b10
    JZ 0x00577b22                       ; 00577b12
        ;   XREF to: 00577b22 (CONDITIONAL_JUMP)  ; LAB_00577b22
    PUSH EDX                            ; 00577b14
    MOV EBX,dword ptr [EDX]             ; 00577b15
    CALL dword ptr [EBX + 0x8]          ; 00577b17
    XOR ECX,ECX                         ; 00577b1a
    MOV dword ptr [0x02c81d98],ECX      ; 00577b1c | DAT_02c81d98
    MOV EBX,dword ptr [0x02c81d94]      ; 00577b22 | DAT_02c81d94
        ;   Label: LAB_00577b22
    TEST EBX,EBX                        ; 00577b28
    JNZ 0x00577b3a                      ; 00577b2a
        ;   XREF to: 00577b3a (CONDITIONAL_JUMP)  ; LAB_00577b3a
    MOV EAX,EDI                         ; 00577b2c
    POP EBP                             ; 00577b2e
    POP EDI                             ; 00577b2f
    POP ESI                             ; 00577b30
    POP EBX                             ; 00577b31
    RET                                 ; 00577b32
    XOR EDI,EDI                         ; 00577b33
        ;   Label: LAB_00577b33
    JMP 0x00577aae                      ; 00577b35
        ;   XREF to: 00577aae (UNCONDITIONAL_JUMP)  ; LAB_00577aae
    MOV EAX,EBX                         ; 00577b3a
        ;   Label: LAB_00577b3a
    PUSH EAX                            ; 00577b3c
    MOV EBX,dword ptr [EBX]             ; 00577b3d
    XOR ESI,ESI                         ; 00577b3f
    CALL dword ptr [EBX + 0x8]          ; 00577b41
    MOV dword ptr [0x02c81d94],ESI      ; 00577b44 | DAT_02c81d94
    MOV EAX,EDI                         ; 00577b4a
    POP EBP                             ; 00577b4c
    POP EDI                             ; 00577b4d
    POP ESI                             ; 00577b4e
    POP EBX                             ; 00577b4f
    RET                                 ; 00577b50

