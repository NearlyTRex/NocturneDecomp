; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_0057b500(UINT device_id)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
;
; XREF[1]:
;   sound_sndmain.cpp_initializeRecordingDevice_FUN_005758e0 at 0057591e
;
; Referenced Globals:
;   undefined4 DAT_006235d8
;
; Called Functions:
;   sound_sndwav.cpp_CWavInDevice_close_FUN_0057ac70
;
; *****************************************************************************

section .text

    SUB ESP,0x30                        ; 0057b500
        ;   Label: sound_sndwav.cpp_getWavInDevice_FUN_0057b500
    PUSH 0x2c82a50                      ; 0057b503
    CALL sound_sndwav.cpp_CWavInDevice_close_FUN_0057ac70 ; 0057b508
        ;   XREF to: 0057ac70 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_CWavInDevice_close_FUN_0057ac70(CWavInDevice * this_ptr)
    ADD ESP,0x4                         ; 0057b50d
    TEST EAX,EAX                        ; 0057b510
    JNZ 0x0057b518                      ; 0057b512
        ;   XREF to: 0057b518 (CONDITIONAL_JUMP)  ; LAB_0057b518
    ADD ESP,0x30                        ; 0057b514
    RET                                 ; 0057b517
    PUSH 0x30                           ; 0057b518
        ;   Label: LAB_0057b518
    LEA EAX,[ESP + 0x4]                 ; 0057b51a
    PUSH EAX                            ; 0057b51e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0057b51f
    PUSH EDX                            ; 0057b523
    CALL dword ptr CS:[0x5d0464]        ; 0057b524
    TEST EAX,EAX                        ; 0057b52b
    JZ 0x0057b535                       ; 0057b52d
        ;   XREF to: 0057b535 (CONDITIONAL_JUMP)  ; LAB_0057b535
    XOR EAX,EAX                         ; 0057b52f
    ADD ESP,0x30                        ; 0057b531
    RET                                 ; 0057b534
    MOV EAX,dword ptr [ESP + 0x34]      ; 0057b535
        ;   Label: LAB_0057b535
    MOV [0x006235d8],EAX                ; 0057b539 | DAT_006235d8
    MOV EAX,0x2c82a50                   ; 0057b53e
    ADD ESP,0x30                        ; 0057b543
    RET                                 ; 0057b546

