; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_inv_cpp_FUN_004f6b50(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6b50
        ;   Label: core_inv.cpp_FUN_004f6b50
    XOR EBX,EBX                         ; 004f6b51
    MOV EDX,dword ptr [EBX + 0x1d1bc4c] ; 004f6b53
        ;   Label: LAB_004f6b53
    PUSH EDX                            ; 004f6b59
    MOV ECX,dword ptr [0x006236b8]      ; 004f6b5a | DAT_006236b8
    PUSH ECX                            ; 004f6b60
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 004f6b61
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f6b66
    TEST EAX,EAX                        ; 004f6b69
    JZ 0x004f6b79                       ; 004f6b6b
        ;   XREF to: 004f6b79 (CONDITIONAL_JUMP)  ; LAB_004f6b79
    ADD EBX,0x4                         ; 004f6b6d
    CMP EBX,0x10                        ; 004f6b70
    JL 0x004f6b53                       ; 004f6b73
        ;   XREF to: 004f6b53 (CONDITIONAL_JUMP)  ; LAB_004f6b53
    XOR EAX,EAX                         ; 004f6b75
    POP EBX                             ; 004f6b77
    RET                                 ; 004f6b78
    PUSH EDI                            ; 004f6b79
        ;   Label: LAB_004f6b79
    PUSH ESI                            ; 004f6b7a
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f6b7b
    PUSH ESI                            ; 004f6b7f
    PUSH EAX                            ; 004f6b80
    MOV EDI,dword ptr [0x006236b8]      ; 004f6b81 | DAT_006236b8
    PUSH EDI                            ; 004f6b87
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004f6b88
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004f6b8d
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f6b90
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004f6b94
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004f6b9a
    MOV EAX,0x1                         ; 004f6ba0
    POP ESI                             ; 004f6ba5
    POP EDI                             ; 004f6ba6
    POP EBX                             ; 004f6ba7
    RET                                 ; 004f6ba8

