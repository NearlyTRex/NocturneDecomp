; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dynamite_cpp_FUN_0047b1e0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   unkafter_prye.cpp_FUN_00524940 at 00525231
;
; Referenced Globals:
;   TerminatedCString s_fuse_wav_005bcd0d
;   undefined4 DAT_005deecc
;
; Called Functions:
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b1e0
        ;   Label: core_dynamite.cpp_FUN_0047b1e0
    SUB ESP,0x64                        ; 0047b1e1
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0047b1e4
    PUSH 0x5bcd0d                       ; 0047b1e8 | = "fuse.wav"
    LEA EAX,[ESP + 0x4]                 ; 0047b1ed
    FLD float ptr [0x005deecc]          ; 0047b1f1 | DAT_005deecc
    PUSH EAX                            ; 0047b1f7
    FSTP float ptr [EBX + 0x594]        ; 0047b1f8
    CALL crt_unknown.c_FUN_005a28c0     ; 0047b1fe
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0047b203
    MOV EAX,ESP                         ; 0047b206
    PUSH EAX                            ; 0047b208
    MOV EDX,dword ptr [EBX + 0x154]     ; 0047b209
    PUSH EBX                            ; 0047b20f
    CALL dword ptr [EDX + 0x2c]         ; 0047b210
    ADD ESP,0x8                         ; 0047b213
    MOV dword ptr [EBX + 0x5a4],EAX     ; 0047b216
    ADD ESP,0x64                        ; 0047b21c
    POP EBX                             ; 0047b21f
    RET                                 ; 0047b220

