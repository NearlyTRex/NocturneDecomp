; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_sound_cpp_FUN_0055b060(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b060
        ;   Label: core_sound.cpp_FUN_0055b060
    TEST EAX,EAX                        ; 0055b064
    JL 0x0055b06d                       ; 0055b066
        ;   XREF to: 0055b06d (CONDITIONAL_JUMP)  ; LAB_0055b06d
    CMP EAX,0x1b                        ; 0055b068
    JL 0x0055b073                       ; 0055b06b
        ;   XREF to: 0055b073 (CONDITIONAL_JUMP)  ; LAB_0055b073
    MOV EAX,0x5ea922                    ; 0055b06d
        ;   Label: LAB_0055b06d
    RET                                 ; 0055b072
    SHL EAX,0x4                         ; 0055b073
        ;   Label: LAB_0055b073
    MOV EAX,dword ptr [EAX + 0x61c06c]  ; 0055b076
    RET                                 ; 0055b07c

