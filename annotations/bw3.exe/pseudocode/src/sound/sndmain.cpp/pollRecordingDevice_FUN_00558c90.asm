; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_00558c90(short *output_buffer,int num_samples)
;
; Parameters:
; short *          Stack[0x4]:4   output_buffer
; int              Stack[0x8]:4   num_samples
;
; Referenced Globals:
;   undefined4 DAT_02cf3c68
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_FUN_00558e90
;   sound_sndmain.cpp_isRecordingStarted_FUN_00558b00
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_00558e90 ; 00558c90
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00558e90()
        ;   Label: sound_sndmain.cpp_pollRecordingDevice_FUN_00558c90
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_00558b00 ; 00558c95
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_00558b00()
    TEST EAX,EAX                        ; 00558c9a
    JZ 0x00558ca8                       ; 00558c9c
        ;   XREF to: 00558ca8 (CONDITIONAL_JUMP)  ; LAB_00558ca8
    MOV EDX,dword ptr [0x02cf3c68]      ; 00558c9e | DAT_02cf3c68
    TEST EDX,EDX                        ; 00558ca4
    JNZ 0x00558cb3                      ; 00558ca6
        ;   XREF to: 00558cb3 (CONDITIONAL_JUMP)  ; LAB_00558cb3
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00558ca8
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_00558ca8
    MOV EAX,0xffffffff                  ; 00558cad
    RET                                 ; 00558cb2
    PUSH ESI                            ; 00558cb3
        ;   Label: LAB_00558cb3
    PUSH EBX                            ; 00558cb4
    MOV ECX,dword ptr [ESP + 0x10]      ; 00558cb5
    PUSH ECX                            ; 00558cb9
    MOV ESI,dword ptr [ESP + 0x10]      ; 00558cba
    PUSH ESI                            ; 00558cbe
    MOV EBX,dword ptr [EDX]             ; 00558cbf
    PUSH EDX                            ; 00558cc1
    CALL dword ptr [EBX + 0x10]         ; 00558cc2
    ADD ESP,0xc                         ; 00558cc5
    MOV EBX,EAX                         ; 00558cc8
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00558cca
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,EBX                         ; 00558ccf
    POP EBX                             ; 00558cd1
    POP ESI                             ; 00558cd2
    RET                                 ; 00558cd3

