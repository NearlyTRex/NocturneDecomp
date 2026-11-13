; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_00551330(uint current_sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   current_sfx_handle
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5aa8
;
; Referenced Globals:
;   undefined4 DAT_0263cf80
;   undefined4 DAT_0263d09c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551330
        ;   Label: sound_sndmain.cpp_getNextActiveSfx_FUN_00551330
    MOV EDX,dword ptr [ESP + 0x8]       ; 00551331
    AND EDX,0x3f                        ; 00551335
    INC EDX                             ; 00551338
    CMP EDX,0x40                        ; 00551339
    JGE 0x0055136f                      ; 0055133c
        ;   XREF to: 0055136f (CONDITIONAL_JUMP)  ; LAB_0055136f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055133e
    ADD EAX,EDX                         ; 00551345
    SHL EAX,0x3                         ; 00551347
    SUB EAX,EDX                         ; 0055134a
    SHL EAX,0x2                         ; 0055134c
    CMP dword ptr [EAX + 0x263cf84],0x0 ; 0055134f
        ;   Label: LAB_0055134f
    JZ 0x00551362                       ; 00551356
        ;   XREF to: 00551362 (CONDITIONAL_JUMP)  ; LAB_00551362
    MOV EBX,dword ptr [EAX + 0x263cf80] ; 00551358 | DAT_0263cf80 | DAT_0263d09c
    TEST EBX,EBX                        ; 0055135e
    JNZ 0x00551373                      ; 00551360
        ;   XREF to: 00551373 (CONDITIONAL_JUMP)  ; LAB_00551373
    ADD EAX,0x11c                       ; 00551362
        ;   Label: LAB_00551362
    INC EDX                             ; 00551367
    CMP EAX,0x4700                      ; 00551368
    JL 0x0055134f                       ; 0055136d
        ;   XREF to: 0055134f (CONDITIONAL_JUMP)  ; LAB_0055134f
    XOR EAX,EAX                         ; 0055136f
        ;   Label: LAB_0055136f
    POP EBX                             ; 00551371
    RET                                 ; 00551372
    MOV EAX,EBX                         ; 00551373
        ;   Label: LAB_00551373
    SHL EAX,0x6                         ; 00551375
    OR EAX,EDX                          ; 00551378
    POP EBX                             ; 0055137a
    RET                                 ; 0055137b

