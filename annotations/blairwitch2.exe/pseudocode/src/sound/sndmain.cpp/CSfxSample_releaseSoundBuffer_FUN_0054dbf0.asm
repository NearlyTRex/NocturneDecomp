; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 at 0054d9e4
;   sound_sndmain.cpp_FUN_0054c1c0 at 0054c561
;   sound_sndmain.cpp_FUN_0054ddf0 at 0054e38c
;
; Referenced Globals:
;   undefined4 DAT_02648e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dbf0
        ;   Label: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0
    PUSH EBP                            ; 0054dbf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054dbf2
    CMP dword ptr [EBX + 0x1a8],0x0     ; 0054dbf6
    JZ 0x0054dc29                       ; 0054dbfd
        ;   XREF to: 0054dc29 (CONDITIONAL_JUMP)  ; LAB_0054dc29
    PUSH ESI                            ; 0054dbff
    MOV ECX,dword ptr [EBX + 0x158]     ; 0054dc00
    TEST ECX,ECX                        ; 0054dc06
    JZ 0x0054dc14                       ; 0054dc08
        ;   XREF to: 0054dc14 (CONDITIONAL_JUMP)  ; LAB_0054dc14
    MOV ESI,dword ptr [0x02648e80]      ; 0054dc0a | DAT_02648e80
    TEST ESI,ESI                        ; 0054dc10
    JNZ 0x0054dc2c                      ; 0054dc12
        ;   XREF to: 0054dc2c (CONDITIONAL_JUMP)  ; LAB_0054dc2c
    MOV dword ptr [EBX + 0x1a8],0x0     ; 0054dc14
        ;   Label: LAB_0054dc14
    MOV dword ptr [EBX + 0x1a4],0x0     ; 0054dc1e
    POP ESI                             ; 0054dc28
    POP EBP                             ; 0054dc29
        ;   Label: LAB_0054dc29
    POP EBX                             ; 0054dc2a
    RET                                 ; 0054dc2b
    PUSH EDI                            ; 0054dc2c
        ;   Label: LAB_0054dc2c
    MOV EDI,dword ptr [EBX + 0x1a8]     ; 0054dc2d
    PUSH EDI                            ; 0054dc33
    MOV EBP,dword ptr [EBX + 0x1a4]     ; 0054dc34
    PUSH EBP                            ; 0054dc3a
    PUSH ECX                            ; 0054dc3b
    MOV EDX,dword ptr [ESI]             ; 0054dc3c
    PUSH ESI                            ; 0054dc3e
    CALL dword ptr [EDX + 0x3c]         ; 0054dc3f
    ADD ESP,0x10                        ; 0054dc42
    POP EDI                             ; 0054dc45
    JMP 0x0054dc14                      ; 0054dc46
        ;   XREF to: 0054dc14 (UNCONDITIONAL_JUMP)  ; LAB_0054dc14

