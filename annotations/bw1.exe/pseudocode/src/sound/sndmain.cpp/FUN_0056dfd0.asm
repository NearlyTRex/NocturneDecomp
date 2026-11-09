; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_0056dfd0(int requested_bytes)
;
; Parameters:
; int              Stack[0x4]:4   requested_bytes
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 at 00571e92
;   sound_sndmain.cpp_FUN_0056feb0 at 0056ffdc
;   sound_sndmain.cpp_setMemoryBudget_FUN_00574360 at 00574374
;
; Referenced Globals:
;   undefined4 DAT_00623310
;   undefined4 DAT_02c78ff0
;   undefined4 g_SfxSamples[0].field340_0x154
;   undefined4 g_SfxSamples[1].field288_0x120
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dfd0
        ;   Label: sound_sndmain.cpp_FUN_0056dfd0
    PUSH ESI                            ; 0056dfd1
    PUSH EDI                            ; 0056dfd2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0056dfd3
    XOR EAX,EAX                         ; 0056dfd7
    XOR ESI,ESI                         ; 0056dfd9
    CMP dword ptr [EAX + 0x2c79114],0x0 ; 0056dfdb
        ;   Label: LAB_0056dfdb
    JNZ 0x0056e037                      ; 0056dfe2
        ;   XREF to: 0056e037 (CONDITIONAL_JUMP)  ; LAB_0056e037
    ADD EAX,0x1b0                       ; 0056dfe4
        ;   Label: LAB_0056dfe4
    CMP EAX,0x6c00                      ; 0056dfe9
    JNZ 0x0056dfdb                      ; 0056dfee
        ;   XREF to: 0056dfdb (CONDITIONAL_JUMP)  ; LAB_0056dfdb
    MOV EBX,dword ptr [0x00623310]      ; 0056dff0 | DAT_00623310
        ;   Label: LAB_0056dff0
    LEA EAX,[ESI + EDI*0x1]             ; 0056dff6
    CMP EAX,EBX                         ; 0056dff9
    JLE 0x0056e091                      ; 0056dffb
        ;   XREF to: 0056e091 (CONDITIONAL_JUMP)  ; LAB_0056e091
    MOV EDX,dword ptr [0x02c78ff0]      ; 0056e001 | DAT_02c78ff0
    XOR EBX,EBX                         ; 0056e007
    IMUL ECX,EDX,0x1b0                  ; 0056e009
    INC EDX                             ; 0056e00f
        ;   Label: LAB_0056e00f
    CMP EDX,0x40                        ; 0056e010
    JL 0x0056e017                       ; 0056e013
        ;   XREF to: 0056e017 (CONDITIONAL_JUMP)  ; LAB_0056e017
    XOR EDX,EDX                         ; 0056e015
    IMUL EAX,EDX,0x1b0                  ; 0056e017
        ;   Label: LAB_0056e017
    CMP dword ptr [EAX + 0x2c79114],0x0 ; 0056e01d | g_SfxSamples[1].field288_0x120
    JNZ 0x0056e03f                      ; 0056e024
        ;   XREF to: 0056e03f (CONDITIONAL_JUMP)  ; LAB_0056e03f
    INC EBX                             ; 0056e026
        ;   Label: LAB_0056e026
    CMP EBX,0x40                        ; 0056e027
    JL 0x0056e00f                       ; 0056e02a
        ;   XREF to: 0056e00f (CONDITIONAL_JUMP)  ; LAB_0056e00f
    CMP EBX,0x40                        ; 0056e02c
    JL 0x0056dff0                       ; 0056e02f
        ;   XREF to: 0056dff0 (CONDITIONAL_JUMP)  ; LAB_0056dff0
    XOR EAX,EAX                         ; 0056e031
    POP EDI                             ; 0056e033
    POP ESI                             ; 0056e034
    POP EBX                             ; 0056e035
    RET                                 ; 0056e036
    ADD ESI,dword ptr [EAX + 0x2c7915c] ; 0056e037
        ;   Label: LAB_0056e037
    JMP 0x0056dfe4                      ; 0056e03d
        ;   XREF to: 0056dfe4 (UNCONDITIONAL_JUMP)  ; LAB_0056dfe4
    CMP dword ptr [EAX + 0x2c79158],0x1 ; 0056e03f
        ;   Label: LAB_0056e03f
    JL 0x0056e026                       ; 0056e046
        ;   XREF to: 0056e026 (CONDITIONAL_JUMP)  ; LAB_0056e026
    CMP dword ptr [EAX + 0x2c79148],0x0 ; 0056e048 | g_SfxSamples[0].field340_0x154
    JNZ 0x0056e026                      ; 0056e04f
        ;   XREF to: 0056e026 (CONDITIONAL_JUMP)  ; LAB_0056e026
    CMP dword ptr [EAX + 0x2c79144],0x0 ; 0056e051
    JNZ 0x0056e026                      ; 0056e058
        ;   XREF to: 0056e026 (CONDITIONAL_JUMP)  ; LAB_0056e026
    CMP dword ptr [EAX + 0x2c79150],0x0 ; 0056e05a
    JNZ 0x0056e026                      ; 0056e061
        ;   XREF to: 0056e026 (CONDITIONAL_JUMP)  ; LAB_0056e026
    CMP dword ptr [ECX + 0x2c791a0],0x0 ; 0056e063
    JNZ 0x0056e026                      ; 0056e06a
        ;   XREF to: 0056e026 (CONDITIONAL_JUMP)  ; LAB_0056e026
    MOV EDX,dword ptr [EAX + 0x2c7915c] ; 0056e06c
    ADD EAX,0x2c78ff4                   ; 0056e072
    PUSH EAX                            ; 0056e077
    SUB ESI,EDX                         ; 0056e078
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 0056e07a
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056e07f
    CMP EBX,0x40                        ; 0056e082
    JL 0x0056dff0                       ; 0056e085
        ;   XREF to: 0056dff0 (CONDITIONAL_JUMP)  ; LAB_0056dff0
    XOR EAX,EAX                         ; 0056e08b
    POP EDI                             ; 0056e08d
    POP ESI                             ; 0056e08e
    POP EBX                             ; 0056e08f
    RET                                 ; 0056e090
    MOV EAX,0x1                         ; 0056e091
        ;   Label: LAB_0056e091
    POP EDI                             ; 0056e096
    POP ESI                             ; 0056e097
    POP EBX                             ; 0056e098
    RET                                 ; 0056e099

