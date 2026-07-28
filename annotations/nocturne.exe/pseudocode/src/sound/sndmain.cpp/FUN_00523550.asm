; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00523550(void)
;
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592902
;   TerminatedCString s_generateSilence_invalid_00592917
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00523550
        ;   Label: sound_sndmain.cpp_FUN_00523550
    MOV EAX,dword ptr [ESP + 0x8]       ; 00523554
    MOV ECX,dword ptr [ESP + 0xc]       ; 00523558
    CMP EAX,0x8                         ; 0052355c
    JC 0x00523580                       ; 0052355f
        ;   XREF to: 00523580 (CONDITIONAL_JUMP)  ; LAB_00523580
    JBE 0x00523578                      ; 00523561
        ;   XREF to: 00523578 (CONDITIONAL_JUMP)  ; LAB_00523578
    CMP EAX,0x10                        ; 00523563
    JNZ 0x00523580                      ; 00523566
        ;   XREF to: 00523580 (CONDITIONAL_JUMP)  ; LAB_00523580
    LEA EAX,[ECX + ECX*0x1]             ; 00523568
    PUSH EAX                            ; 0052356b
    PUSH 0x0                            ; 0052356c
    PUSH EDX                            ; 0052356e
        ;   Label: LAB_0052356e
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052356f
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00523574
    RET                                 ; 00523577
    PUSH ECX                            ; 00523578
        ;   Label: LAB_00523578
    PUSH 0x80                           ; 00523579
    JMP 0x0052356e                      ; 0052357e
        ;   XREF to: 0052356e (UNCONDITIONAL_JUMP)  ; LAB_0052356e
    MOV EDX,0x592902                    ; 00523580 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00523580
    MOV ECX,0x5c4                       ; 00523585
    PUSH 0x592917                       ; 0052358a | = "generateSilence - invalid bit depth!"
    MOV dword ptr [0x01cc4800],EDX      ; 0052358f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00523595 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052359b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005235a0
    RET                                 ; 005235a3

