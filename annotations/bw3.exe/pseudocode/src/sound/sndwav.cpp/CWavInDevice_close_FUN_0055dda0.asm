; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_0055dda0(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndwav.cpp_getWavInDevice_FUN_0055e630 at 0055e638
;
; Referenced Globals:
;   void* PTR_waveInClose_005b3460 = 001b3954
;   void* PTR_GlobalFree_005b35e0 = 001b3fde
;   TerminatedCString s_waveInClose_failed_005d507b
;   undefined4 DAT_02cf5504
;
; Called Functions:
;   GlobalFree
;   sound_sndmain.cpp_FUN_0055a560
;   waveInClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dda0
        ;   Label: sound_sndwav.cpp_CWavInDevice_close_FUN_0055dda0
    PUSH ESI                            ; 0055dda1
    PUSH EDI                            ; 0055dda2
    PUSH EBP                            ; 0055dda3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055dda4
    PUSH EBX                            ; 0055dda8
    MOV EAX,dword ptr [EBX]             ; 0055dda9
    MOV ESI,0x1                         ; 0055ddab
    CALL dword ptr [EAX + 0x8]          ; 0055ddb0
    ADD ESP,0x4                         ; 0055ddb3
    TEST EAX,EAX                        ; 0055ddb6
    JZ 0x0055de13                       ; 0055ddb8
        ;   XREF to: 0055de13 (CONDITIONAL_JUMP)  ; LAB_0055de13
    XOR EBX,EBX                         ; 0055ddba
        ;   Label: LAB_0055ddba
    XOR EDI,EDI                         ; 0055ddbc
    MOV EDX,dword ptr [EBX + 0x2cf55a8] ; 0055ddbe
        ;   Label: LAB_0055ddbe
    CMP EDI,EDX                         ; 0055ddc4
    JZ 0x0055ddd6                       ; 0055ddc6
        ;   XREF to: 0055ddd6 (CONDITIONAL_JUMP)  ; LAB_0055ddd6
    PUSH EDX                            ; 0055ddc8
    CALL dword ptr CS:[0x5b35e0]        ; 0055ddc9 | PTR_GlobalFree_005b35e0
    MOV dword ptr [EBX + 0x2cf55a8],EDI ; 0055ddd0
    MOV EBP,dword ptr [EBX + 0x2cf5508] ; 0055ddd6
        ;   Label: LAB_0055ddd6
    MOV dword ptr [EBX + 0x2cf55f8],EDI ; 0055dddc
    CMP EDI,EBP                         ; 0055dde2
    JZ 0x0055ddf4                       ; 0055dde4
        ;   XREF to: 0055ddf4 (CONDITIONAL_JUMP)  ; LAB_0055ddf4
    PUSH EBP                            ; 0055dde6
    CALL dword ptr CS:[0x5b35e0]        ; 0055dde7 | PTR_GlobalFree_005b35e0
    MOV dword ptr [EBX + 0x2cf5508],EDI ; 0055ddee
    ADD EBX,0x4                         ; 0055ddf4
        ;   Label: LAB_0055ddf4
    MOV dword ptr [EBX + 0x2cf5554],EDI ; 0055ddf7
    CMP EBX,0x50                        ; 0055ddfd
    JNZ 0x0055ddbe                      ; 0055de00
        ;   XREF to: 0055ddbe (CONDITIONAL_JUMP)  ; LAB_0055ddbe
    MOV EDX,dword ptr [0x02cf5504]      ; 0055de02 | DAT_02cf5504
    TEST EDX,EDX                        ; 0055de08
    JNZ 0x0055de17                      ; 0055de0a
        ;   XREF to: 0055de17 (CONDITIONAL_JUMP)  ; LAB_0055de17
    MOV EAX,ESI                         ; 0055de0c
    POP EBP                             ; 0055de0e
    POP EDI                             ; 0055de0f
    POP ESI                             ; 0055de10
    POP EBX                             ; 0055de11
    RET                                 ; 0055de12
    XOR ESI,ESI                         ; 0055de13
        ;   Label: LAB_0055de13
    JMP 0x0055ddba                      ; 0055de15
        ;   XREF to: 0055ddba (UNCONDITIONAL_JUMP)  ; LAB_0055ddba
    PUSH EDX                            ; 0055de17
        ;   Label: LAB_0055de17
    CALL dword ptr CS:[0x5b3460]        ; 0055de18 | PTR_waveInClose_005b3460
    TEST EAX,EAX                        ; 0055de1f
    JZ 0x0055de32                       ; 0055de21
        ;   XREF to: 0055de32 (CONDITIONAL_JUMP)  ; LAB_0055de32
    PUSH 0x5d507b                       ; 0055de23 | = "waveInClose failed."
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055de28
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    XOR ESI,ESI                         ; 0055de2d
    ADD ESP,0x4                         ; 0055de2f
    XOR EBX,EBX                         ; 0055de32
        ;   Label: LAB_0055de32
    MOV dword ptr [0x02cf5504],EBX      ; 0055de34 | DAT_02cf5504
    MOV EAX,ESI                         ; 0055de3a
    POP EBP                             ; 0055de3c
    POP EDI                             ; 0055de3d
    POP ESI                             ; 0055de3e
    POP EBX                             ; 0055de3f
    RET                                 ; 0055de40

