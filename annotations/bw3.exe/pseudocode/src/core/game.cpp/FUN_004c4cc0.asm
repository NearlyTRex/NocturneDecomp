; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004c4cc0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_game.cpp_FUN_004b7f90 at 004b88d0
;
; Called Functions:
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4cc0
        ;   Label: core_game.cpp_FUN_004c4cc0
    SUB ESP,0x8                         ; 004c4cc1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c4cc4
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 004c4cc8
    TEST EDX,EDX                        ; 004c4cce
    JNZ 0x004c4cd7                      ; 004c4cd0
        ;   XREF to: 004c4cd7 (CONDITIONAL_JUMP)  ; LAB_004c4cd7
    ADD ESP,0x8                         ; 004c4cd2
    POP EBX                             ; 004c4cd5
    RET                                 ; 004c4cd6
    PUSH 0x1                            ; 004c4cd7
        ;   Label: LAB_004c4cd7
    PUSH EDX                            ; 004c4cd9
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0 ; 004c4cda
        ;   XREF to: 005567c0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005567c0(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x8],EAX       ; 004c4cdf
    MOV dword ptr [ESP + 0xc],EDX       ; 004c4ce3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4ce7
    MOV dword ptr [EBX + 0x300],EAX     ; 004c4ceb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c4cf1
    MOV dword ptr [EBX + 0x304],EAX     ; 004c4cf5
    ADD ESP,0x8                         ; 004c4cfb
    ADD ESP,0x8                         ; 004c4cfe
    POP EBX                             ; 004c4d01
    RET                                 ; 004c4d02

