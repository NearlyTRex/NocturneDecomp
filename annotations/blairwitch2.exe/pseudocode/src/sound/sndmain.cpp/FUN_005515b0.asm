; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_005515b0(float param_1)
;
;
; XREF[1]:
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0 at 005523f7
;
; Referenced Globals:
;   undefined4 DAT_0061bcb4
;   undefined4 DAT_0061bcb8
;   undefined4 DAT_02648e80
;
; *****************************************************************************

section .text

    FLD1                                ; 005515b0
        ;   Label: sound_sndmain.cpp_FUN_005515b0
    FDIV float ptr [ESP + 0x4]          ; 005515b2
    MOV EAX,dword ptr [ESP + 0x4]       ; 005515b6
    MOV EDX,dword ptr [0x02648e80]      ; 005515ba | DAT_02648e80
    MOV [0x0061bcb4],EAX                ; 005515c0 | DAT_0061bcb4
    FSTP float ptr [0x0061bcb8]         ; 005515c5 | DAT_0061bcb8
    TEST EDX,EDX                        ; 005515cb
    JNZ 0x005515d0                      ; 005515cd
        ;   XREF to: 005515d0 (CONDITIONAL_JUMP)  ; LAB_005515d0
    RET                                 ; 005515cf
    MOV EAX,EDX                         ; 005515d0
        ;   Label: LAB_005515d0
    PUSH dword ptr [ESP + 0x4]          ; 005515d2
    PUSH EAX                            ; 005515d6
    MOV EDX,dword ptr [EDX]             ; 005515d7
    CALL dword ptr [EDX + 0x28]         ; 005515d9
    ADD ESP,0x8                         ; 005515dc
    RET                                 ; 005515df

