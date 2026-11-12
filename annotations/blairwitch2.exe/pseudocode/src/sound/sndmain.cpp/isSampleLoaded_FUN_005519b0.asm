; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool sound_sndmain_cpp_isSampleLoaded_FUN_005519b0(char *param_1)
;
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0054c1c0
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005519b0
        ;   Label: sound_sndmain.cpp_isSampleLoaded_FUN_005519b0
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 005519b1
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    MOV EDX,dword ptr [ESP + 0x8]       ; 005519b6
    PUSH EDX                            ; 005519ba
    XOR EBX,EBX                         ; 005519bb
    CALL sound_sndmain.cpp_FUN_0054c1c0 ; 005519bd
        ;   XREF to: 0054c1c0 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_FUN_0054c1c0(char * filename)
    ADD ESP,0x4                         ; 005519c2
    TEST EAX,EAX                        ; 005519c5
    JZ 0x005519ce                       ; 005519c7
        ;   XREF to: 005519ce (CONDITIONAL_JUMP)  ; LAB_005519ce
    MOV EBX,0x1                         ; 005519c9
    CALL sound_sndmain.cpp_FUN_00551440 ; 005519ce
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_005519ce
    MOV EAX,EBX                         ; 005519d3
    POP EBX                             ; 005519d5
    RET                                 ; 005519d6

