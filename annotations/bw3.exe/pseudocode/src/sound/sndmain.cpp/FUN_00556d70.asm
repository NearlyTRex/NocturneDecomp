; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00556d70(int channel_count)
;
; Parameters:
; int              Stack[0x4]:4   channel_count
;
; XREF[1]:
;   core_sound.cpp_CSound_ctor_FUN_0055fc40 at 0055fc4d
;
; Referenced Globals:
;   undefined4 DAT_00604224
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x20      ; 00556d70
        ;   Label: sound_sndmain.cpp_FUN_00556d70
    JG 0x00556d81                       ; 00556d75
        ;   XREF to: 00556d81 (CONDITIONAL_JUMP)  ; LAB_00556d81
    MOV EAX,dword ptr [ESP + 0x4]       ; 00556d77
    MOV [0x00604224],EAX                ; 00556d7b | DAT_00604224
    RET                                 ; 00556d80
    PUSH EBX                            ; 00556d81
        ;   Label: LAB_00556d81
    MOV ECX,0x5d38df                    ; 00556d82
    MOV EBX,0x1130                      ; 00556d87
    PUSH 0x5d38f4                       ; 00556d8c
    MOV dword ptr [0x01d71de0],ECX      ; 00556d91 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00556d97 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00556d9d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00556da2
    POP EBX                             ; 00556da5
    MOV EAX,dword ptr [ESP + 0x4]       ; 00556da6
    MOV [0x00604224],EAX                ; 00556daa | DAT_00604224
    RET                                 ; 00556daf

