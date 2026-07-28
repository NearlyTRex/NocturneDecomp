; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(int requested_bytes)
;
; Parameters:
; int              Stack[0x4]:4   requested_bytes
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910 at 00523a17
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 at 00525692
;   sound_sndmain.cpp_setMemoryBudget_FUN_00527930 at 00527944
;
; Referenced Globals:
;   undefined4 DAT_005bea94
;   undefined4 DAT_02dc1ed8
;   undefined4 DAT_02dc2164
;   undefined4 DAT_02dc217c
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521ca0
        ;   Label: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0
    PUSH ESI                            ; 00521ca1
    PUSH EDI                            ; 00521ca2
    PUSH EBP                            ; 00521ca3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00521ca4
    XOR EBX,EBX                         ; 00521ca8
    XOR ESI,ESI                         ; 00521caa
    CMP dword ptr [EBX + 0x2dc1ffc],0x0 ; 00521cac
        ;   Label: LAB_00521cac
    JNZ 0x00521d06                      ; 00521cb3
        ;   XREF to: 00521d06 (CONDITIONAL_JUMP)  ; LAB_00521d06
    ADD EBX,0x168                       ; 00521cb5
        ;   Label: LAB_00521cb5
    CMP EBX,0x5a00                      ; 00521cbb
    JNZ 0x00521cac                      ; 00521cc1
        ;   XREF to: 00521cac (CONDITIONAL_JUMP)  ; LAB_00521cac
    MOV EBX,dword ptr [0x005bea94]      ; 00521cc3 | DAT_005bea94
        ;   Label: LAB_00521cc3
    LEA EAX,[ESI + EBP*0x1]             ; 00521cc9
    CMP EAX,EBX                         ; 00521ccc
    JLE 0x00521d6c                      ; 00521cce
        ;   XREF to: 00521d6c (CONDITIONAL_JUMP)  ; LAB_00521d6c
    MOV EDX,dword ptr [0x02dc1ed8]      ; 00521cd4 | DAT_02dc1ed8
    XOR EBX,EBX                         ; 00521cda
    XOR EDI,EDI                         ; 00521cdc
    INC EDX                             ; 00521cde
        ;   Label: LAB_00521cde
    CMP EDX,0x40                        ; 00521cdf
    JL 0x00521ce6                       ; 00521ce2
        ;   XREF to: 00521ce6 (CONDITIONAL_JUMP)  ; LAB_00521ce6
    MOV EDX,EDI                         ; 00521ce4
    IMUL EAX,EDX,0x168                  ; 00521ce6
        ;   Label: LAB_00521ce6
    CMP EDI,dword ptr [EAX + 0x2dc1ffc] ; 00521cec | DAT_02dc2164
    JNZ 0x00521d21                      ; 00521cf2
        ;   XREF to: 00521d21 (CONDITIONAL_JUMP)  ; LAB_00521d21
    INC EBX                             ; 00521cf4
        ;   Label: LAB_00521cf4
    CMP EBX,0x40                        ; 00521cf5
    JL 0x00521cde                       ; 00521cf8
        ;   XREF to: 00521cde (CONDITIONAL_JUMP)  ; LAB_00521cde
    CMP EBX,0x40                        ; 00521cfa
    JL 0x00521cc3                       ; 00521cfd
        ;   XREF to: 00521cc3 (CONDITIONAL_JUMP)  ; LAB_00521cc3
    XOR EAX,EAX                         ; 00521cff
    POP EBP                             ; 00521d01
    POP EDI                             ; 00521d02
    POP ESI                             ; 00521d03
    POP EBX                             ; 00521d04
    RET                                 ; 00521d05
    MOV EDI,0x2dc1edc                   ; 00521d06
        ;   Label: LAB_00521d06
    ADD EDI,EBX                         ; 00521d0b
    PUSH EDI                            ; 00521d0d
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00521d0e
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EDI + 0x138]    ; 00521d13 | DAT_02dc217c
    ADD ESP,0x4                         ; 00521d1a
    ADD ESI,EAX                         ; 00521d1d
    JMP 0x00521cb5                      ; 00521d1f
        ;   XREF to: 00521cb5 (UNCONDITIONAL_JUMP)  ; LAB_00521cb5
    CMP dword ptr [EAX + 0x2dc2014],0x1 ; 00521d21
        ;   Label: LAB_00521d21
    JL 0x00521cf4                       ; 00521d28
        ;   XREF to: 00521cf4 (CONDITIONAL_JUMP)  ; LAB_00521cf4
    CMP EDI,dword ptr [EAX + 0x2dc2008] ; 00521d2a
    JNZ 0x00521cf4                      ; 00521d30
        ;   XREF to: 00521cf4 (CONDITIONAL_JUMP)  ; LAB_00521cf4
    CMP EDI,dword ptr [EAX + 0x2dc2004] ; 00521d32
    JNZ 0x00521cf4                      ; 00521d38
        ;   XREF to: 00521cf4 (CONDITIONAL_JUMP)  ; LAB_00521cf4
    MOV EDI,0x2dc1edc                   ; 00521d3a
    ADD EDI,EAX                         ; 00521d3f
    PUSH EDI                            ; 00521d41
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 00521d42
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EDI + 0x138]    ; 00521d47
    ADD ESP,0x4                         ; 00521d4e
    PUSH EDI                            ; 00521d51
    SUB ESI,EAX                         ; 00521d52
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 00521d54
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00521d59
    CMP EBX,0x40                        ; 00521d5c
    JL 0x00521cc3                       ; 00521d5f
        ;   XREF to: 00521cc3 (CONDITIONAL_JUMP)  ; LAB_00521cc3
    XOR EAX,EAX                         ; 00521d65
    POP EBP                             ; 00521d67
    POP EDI                             ; 00521d68
    POP ESI                             ; 00521d69
    POP EBX                             ; 00521d6a
    RET                                 ; 00521d6b
    MOV EAX,0x1                         ; 00521d6c
        ;   Label: LAB_00521d6c
    POP EBP                             ; 00521d71
    POP EDI                             ; 00521d72
    POP ESI                             ; 00521d73
    POP EBX                             ; 00521d74
    RET                                 ; 00521d75

