; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_demnfolk_cpp_CDemnfolk_playChaseSound_FUN_0045cdf0(CDemnfolk *this_ptr)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1 DAT_005d82cd
;   undefined1 DAT_005d82ce
;   undefined1 DAT_005d82cf
;   undefined1 DAT_005d82d0
;   TerminatedCString s_chase_wav_2_005d82d3
;   undefined4 s_chase_wav_2_005d82d3+1
;   undefined1 DAT_005d82e3
;   undefined1 DAT_005d82e4
;   undefined1 DAT_005d82e5
;   TerminatedCString s_unt_wav_2_005d82e6
;   undefined4 DAT_0152c320
;   undefined4 DAT_0152c321
;   undefined4 DAT_0152c322
;   undefined4 DAT_0152c323
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cdf0
        ;   Label: core_demnfolk.cpp_CDemnfolk_playChaseSound_FUN_0045cdf0
    PUSH ESI                            ; 0045cdf1
    PUSH EDI                            ; 0045cdf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045cdf3
    MOV ESI,0x5d82cd                    ; 0045cdf7 | DAT_005d82cd
    MOV EDI,0x152c320                   ; 0045cdfc
    PUSH EDI                            ; 0045ce01
    MOV AL,byte ptr [ESI]               ; 0045ce02 | DAT_005d82cd | DAT_005d82cf
        ;   Label: LAB_0045ce02
    MOV byte ptr [EDI],AL               ; 0045ce04 | DAT_0152c320 | DAT_0152c322
    CMP AL,0x0                          ; 0045ce06
    JZ 0x0045ce1a                       ; 0045ce08
        ;   XREF to: 0045ce1a (CONDITIONAL_JUMP)  ; LAB_0045ce1a
    MOV AL,byte ptr [ESI + 0x1]         ; 0045ce0a | DAT_005d82ce | DAT_005d82d0
    ADD ESI,0x2                         ; 0045ce0d
    MOV byte ptr [EDI + 0x1],AL         ; 0045ce10 | DAT_0152c321 | DAT_0152c323
    ADD EDI,0x2                         ; 0045ce13
    CMP AL,0x0                          ; 0045ce16
    JNZ 0x0045ce02                      ; 0045ce18
        ;   XREF to: 0045ce02 (CONDITIONAL_JUMP)  ; LAB_0045ce02
    POP EDI                             ; 0045ce1a
        ;   Label: LAB_0045ce1a
    LEA ESI,[EBX + 0xc36c]              ; 0045ce1b
    PUSH EDI                            ; 0045ce21 | DAT_0152c320
    SUB ECX,ECX                         ; 0045ce22
    DEC ECX                             ; 0045ce24
    MOV AL,0x0                          ; 0045ce25
    SCASB.REPNE ES:EDI                  ; 0045ce27 | DAT_0152c320 | DAT_0152c321
    DEC EDI                             ; 0045ce29
    MOV AL,byte ptr [ESI]               ; 0045ce2a
        ;   Label: LAB_0045ce2a
    MOV byte ptr [EDI],AL               ; 0045ce2c | DAT_0152c320 | DAT_0152c322
    CMP AL,0x0                          ; 0045ce2e
    JZ 0x0045ce42                       ; 0045ce30
        ;   XREF to: 0045ce42 (CONDITIONAL_JUMP)  ; LAB_0045ce42
    MOV AL,byte ptr [ESI + 0x1]         ; 0045ce32
    ADD ESI,0x2                         ; 0045ce35
    MOV byte ptr [EDI + 0x1],AL         ; 0045ce38 | DAT_0152c321 | DAT_0152c323
    ADD EDI,0x2                         ; 0045ce3b
    CMP AL,0x0                          ; 0045ce3e
    JNZ 0x0045ce2a                      ; 0045ce40
        ;   XREF to: 0045ce2a (CONDITIONAL_JUMP)  ; LAB_0045ce2a
    POP EDI                             ; 0045ce42
        ;   Label: LAB_0045ce42
    PUSH 0x3f000000                     ; 0045ce43
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0045ce48
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0045ce4d
    TEST EAX,EAX                        ; 0045ce50
    JNZ 0x0045ce92                      ; 0045ce52
        ;   XREF to: 0045ce92 (CONDITIONAL_JUMP)  ; LAB_0045ce92
    MOV ESI,0x5d82e3                    ; 0045ce54 | DAT_005d82e3
    PUSH EDI                            ; 0045ce59 | DAT_0152c320
        ;   Label: LAB_0045ce59
    SUB ECX,ECX                         ; 0045ce5a
    DEC ECX                             ; 0045ce5c
    MOV AL,0x0                          ; 0045ce5d
    SCASB.REPNE ES:EDI                  ; 0045ce5f | DAT_0152c320 | DAT_0152c321
    DEC EDI                             ; 0045ce61
    MOV AL,byte ptr [ESI]               ; 0045ce62 | DAT_005d82e3 | DAT_005d82e5 | = "_chase?.wav @ 2"
        ;   Label: LAB_0045ce62
    MOV byte ptr [EDI],AL               ; 0045ce64 | DAT_0152c320 | DAT_0152c322 | DAT_0152c321
    CMP AL,0x0                          ; 0045ce66
    JZ 0x0045ce7a                       ; 0045ce68
        ;   XREF to: 0045ce7a (CONDITIONAL_JUMP)  ; LAB_0045ce7a
    MOV AL,byte ptr [ESI + 0x1]         ; 0045ce6a | DAT_005d82e4 | = "unt?.wav @ 2" | s_chase_wav_2_005d82d3+1
    ADD ESI,0x2                         ; 0045ce6d
    MOV byte ptr [EDI + 0x1],AL         ; 0045ce70 | DAT_0152c321 | DAT_0152c323 | DAT_0152c322
    ADD EDI,0x2                         ; 0045ce73
    CMP AL,0x0                          ; 0045ce76
    JNZ 0x0045ce62                      ; 0045ce78
        ;   XREF to: 0045ce62 (CONDITIONAL_JUMP)  ; LAB_0045ce62
    POP EDI                             ; 0045ce7a
        ;   Label: LAB_0045ce7a
    MOV EDX,dword ptr [EBX + 0xc350]    ; 0045ce7b
    PUSH EDX                            ; 0045ce81
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0045ce82
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0045ce87
    TEST EAX,EAX                        ; 0045ce8a
    JZ 0x0045ce99                       ; 0045ce8c
        ;   XREF to: 0045ce99 (CONDITIONAL_JUMP)  ; LAB_0045ce99
    POP EDI                             ; 0045ce8e
    POP ESI                             ; 0045ce8f
    POP EBX                             ; 0045ce90
    RET                                 ; 0045ce91
    MOV ESI,0x5d82d3                    ; 0045ce92 | = "_chase?.wav @ 2"
        ;   Label: LAB_0045ce92
    JMP 0x0045ce59                      ; 0045ce97
        ;   XREF to: 0045ce59 (UNCONDITIONAL_JUMP)  ; LAB_0045ce59
    PUSH 0x152c320                      ; 0045ce99 | DAT_0152c320
        ;   Label: LAB_0045ce99
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045ce9e
    PUSH EBX                            ; 0045cea4
    CALL dword ptr [EAX + 0x2c]         ; 0045cea5
    ADD ESP,0x8                         ; 0045cea8
    MOV dword ptr [EBX + 0xc350],EAX    ; 0045ceab
    POP EDI                             ; 0045ceb1
    POP ESI                             ; 0045ceb2
    POP EBX                             ; 0045ceb3
    RET                                 ; 0045ceb4

