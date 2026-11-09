; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_005511e0(int channel_count)
;
; Parameters:
; int              Stack[0x4]:4   channel_count
;
; XREF[1]:
;   core_sound.cpp_CSound_ctor_FUN_0055a0e0 at 0055a0ed
;
; Referenced Globals:
;   undefined4 DAT_0061bc94
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x20      ; 005511e0
        ;   Label: sound_sndmain.cpp_FUN_005511e0
    JG 0x005511f1                       ; 005511e5
        ;   XREF to: 005511f1 (CONDITIONAL_JUMP)  ; LAB_005511f1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005511e7
    MOV [0x0061bc94],EAX                ; 005511eb | DAT_0061bc94
    RET                                 ; 005511f0
    PUSH EBX                            ; 005511f1
        ;   Label: LAB_005511f1
    MOV ECX,0x5e8dfb                    ; 005511f2
    MOV EBX,0x1128                      ; 005511f7
    PUSH 0x5e8e10                       ; 005511fc
    MOV dword ptr [0x01d046a0],ECX      ; 00551201 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00551207 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0055120d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00551212
    POP EBX                             ; 00551215
    MOV EAX,dword ptr [ESP + 0x4]       ; 00551216
    MOV [0x0061bc94],EAX                ; 0055121a | DAT_0061bc94
    RET                                 ; 0055121f

