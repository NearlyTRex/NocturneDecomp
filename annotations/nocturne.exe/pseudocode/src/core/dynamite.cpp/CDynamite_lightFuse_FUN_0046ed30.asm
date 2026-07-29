; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0046ed30(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   core_stranger.cpp_FUN_0053f310 at 0053f8cf
;
; Referenced Globals:
;   TerminatedCString s_fuse_wav_0057e4e2
;   undefined4 DAT_0059c91c
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ed30
        ;   Label: core_dynamite.cpp_CDynamite_lightFuse_FUN_0046ed30
    SUB ESP,0x64                        ; 0046ed31
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0046ed34
    PUSH 0x57e4e2                       ; 0046ed38 | = "fuse.wav"
    LEA EAX,[ESP + 0x4]                 ; 0046ed3d
    FLD float ptr [0x0059c91c]          ; 0046ed41 | DAT_0059c91c
    PUSH EAX                            ; 0046ed47
    FSTP float ptr [EBX + 0x570]        ; 0046ed48
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0046ed4e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 0046ed53
    MOV EAX,ESP                         ; 0046ed56
    PUSH EAX                            ; 0046ed58
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0046ed59
    PUSH EBX                            ; 0046ed5f
    CALL dword ptr [EDX + 0x24]         ; 0046ed60
    ADD ESP,0x8                         ; 0046ed63
    MOV dword ptr [EBX + 0x580],EAX     ; 0046ed66
    ADD ESP,0x64                        ; 0046ed6c
    POP EBX                             ; 0046ed6f
    RET                                 ; 0046ed70

