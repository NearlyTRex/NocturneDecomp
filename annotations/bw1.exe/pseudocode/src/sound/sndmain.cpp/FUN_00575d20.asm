; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00575d20(void)
;
;
; XREF[18]:
;   FUN_0056fa10 at 0056fa62
;   FUN_00572d20 at 00572dd2
;   FUN_00573b00 at 00573b07
;   FUN_00573b30 at 00573b85
;   FUN_00573c50 at 00573c92
;   FUN_00573ec0 at 00573ec0
;   FUN_00573f20 at 00573f20
;   FUN_00573fa0 at 00573fa0
;   FUN_00574410 at 00574421
;   FUN_005746a0 at 005746a2
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f43bb
;   TerminatedCString s_lockSound_unable_to_crea_005f43d0
;   TerminatedCString s_sound_sndmain_cpp_005f43fa
;   TerminatedCString s_lockSound_lock_imbalance_005f440f
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c807e8
;   undefined4 DAT_02c807ec
;
; Called Functions:
;   FUN_005030e0
;   FUN_005b3740
;   FUN_005b3750
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00575d20
        ;   Label: FUN_00575d20
    PUSH EDI                            ; 00575d21
    CMP dword ptr [0x02c807e8],0x0      ; 00575d22 | DAT_02c807e8
    JNZ 0x00575d5e                      ; 00575d29
        ;   XREF to: 00575d5e (CONDITIONAL_JUMP)  ; LAB_00575d5e
    CALL FUN_005b3740                   ; 00575d2b
        ;   XREF to: 005b3740 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3740()
    MOV [0x02c807e8],EAX                ; 00575d30 | DAT_02c807e8
    TEST EAX,EAX                        ; 00575d35
    JNZ 0x00575d5e                      ; 00575d37
        ;   XREF to: 00575d5e (CONDITIONAL_JUMP)  ; LAB_00575d5e
    PUSH EBX                            ; 00575d39
    MOV ECX,0x5f43bb                    ; 00575d3a | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x17d4                      ; 00575d3f
    PUSH 0x5f43d0                       ; 00575d44 | = "lockSound - unable to create mutex ob..."
    MOV dword ptr [0x01d1d400],ECX      ; 00575d49 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00575d4f | DAT_01d1d404
    CALL FUN_005030e0                   ; 00575d55
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00575d5a
    POP EBX                             ; 00575d5d
    MOV ESI,dword ptr [0x02c807e8]      ; 00575d5e | DAT_02c807e8
        ;   Label: LAB_00575d5e
    PUSH ESI                            ; 00575d64
    CALL FUN_005b3750                   ; 00575d65
        ;   XREF to: 005b3750 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3750()
    MOV EDI,dword ptr [0x02c807ec]      ; 00575d6a | DAT_02c807ec
    INC EDI                             ; 00575d70
    ADD ESP,0x4                         ; 00575d71
    MOV dword ptr [0x02c807ec],EDI      ; 00575d74 | DAT_02c807ec
    CMP EDI,0x63                        ; 00575d7a
    JG 0x00575d82                       ; 00575d7d
        ;   XREF to: 00575d82 (CONDITIONAL_JUMP)  ; LAB_00575d82
    POP EDI                             ; 00575d7f
    POP ESI                             ; 00575d80
    RET                                 ; 00575d81
    MOV EAX,0x5f43fa                    ; 00575d82 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00575d82
    MOV EDX,0x17df                      ; 00575d87
    PUSH 0x5f440f                       ; 00575d8c | = "lockSound - lock imbalance?"
    MOV [0x01d1d400],EAX                ; 00575d91 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00575d96 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00575d9c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00575da1
    POP EDI                             ; 00575da4
    POP ESI                             ; 00575da5
    RET                                 ; 00575da6

