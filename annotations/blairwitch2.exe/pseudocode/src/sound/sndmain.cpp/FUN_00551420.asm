; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00551420(void)
;
;
; Referenced Globals:
;   undefined4 DAT_026484b8
;   undefined4 DAT_026484bc
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00551420
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
        ;   Label: sound_sndmain.cpp_FUN_00551420
    MOV EAX,dword ptr [ESP + 0x4]       ; 00551425
    MOV [0x026484bc],EAX                ; 00551429 | DAT_026484bc
    TEST EAX,EAX                        ; 0055142e
    JNZ 0x00551440                      ; 00551430
        ;   XREF to: 00551440 (CONDITIONAL_JUMP)
    MOV [0x026484b8],EAX                ; 00551436 | DAT_026484b8
    LEA EAX,[EAX]                       ; 0055143b
    MOV ECX,ECX                         ; 0055143e

