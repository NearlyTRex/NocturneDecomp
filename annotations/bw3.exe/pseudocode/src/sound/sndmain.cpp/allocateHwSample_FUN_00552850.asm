; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_allocateHwSample_FUN_00552850(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cebc20
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552850
        ;   Label: sound_sndmain.cpp_allocateHwSample_FUN_00552850
    PUSH ESI                            ; 00552851
    PUSH EDI                            ; 00552852
    CMP dword ptr [0x02cf3280],0x0      ; 00552853 | DAT_02cf3280
    JZ 0x005528be                       ; 0055285a
        ;   XREF to: 005528be (CONDITIONAL_JUMP)  ; LAB_005528be
    XOR EDI,EDI                         ; 0055285c
    LEA EDX,[ESP + 0x10]                ; 0055285e
        ;   Label: LAB_0055285e
    MOV EAX,[0x02cf3280]                ; 00552862 | DAT_02cf3280
    PUSH EDX                            ; 00552867
    MOV ECX,dword ptr [EAX]             ; 00552868
    PUSH EAX                            ; 0055286a
    CALL dword ptr [ECX + 0x30]         ; 0055286b
    ADD ESP,0x8                         ; 0055286e
    TEST EAX,EAX                        ; 00552871
    JNZ 0x005528c0                      ; 00552873
        ;   XREF to: 005528c0 (CONDITIONAL_JUMP)  ; LAB_005528c0
    MOV EDX,dword ptr [0x02cebc20]      ; 00552875 | DAT_02cebc20
    MOV EBX,EDI                         ; 0055287b
    IMUL ESI,EDX,0x1b0                  ; 0055287d
    INC EDX                             ; 00552883
        ;   Label: LAB_00552883
    CMP EDX,0x40                        ; 00552884
    JL 0x0055288b                       ; 00552887
        ;   XREF to: 0055288b (CONDITIONAL_JUMP)  ; LAB_0055288b
    MOV EDX,EDI                         ; 00552889
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055288b
        ;   Label: LAB_0055288b
    SUB EAX,EDX                         ; 00552892
    SHL EAX,0x4                         ; 00552894
    MOV ECX,EAX                         ; 00552897
    SHL EAX,0x3                         ; 00552899
    ADD EAX,ECX                         ; 0055289c
    CMP EDI,dword ptr [EAX + 0x2cebd78] ; 0055289e
    JZ 0x005528c4                       ; 005528a4
        ;   XREF to: 005528c4 (CONDITIONAL_JUMP)  ; LAB_005528c4
    INC EBX                             ; 005528a6
        ;   Label: LAB_005528a6
    CMP EBX,0x40                        ; 005528a7
    JL 0x00552883                       ; 005528aa
        ;   XREF to: 00552883 (CONDITIONAL_JUMP)  ; LAB_00552883
    CMP EBX,0x40                        ; 005528ac
        ;   Label: LAB_005528ac
    JL 0x0055285e                       ; 005528af
        ;   XREF to: 0055285e (CONDITIONAL_JUMP)  ; LAB_0055285e
    PUSH 0x5d2a16                       ; 005528b1
    CALL sound_sndmain.cpp_FUN_0055a560 ; 005528b6
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 005528bb
    XOR EAX,EAX                         ; 005528be
        ;   Label: LAB_005528be
    POP EDI                             ; 005528c0
        ;   Label: LAB_005528c0
    POP ESI                             ; 005528c1
    POP EBX                             ; 005528c2
    RET                                 ; 005528c3
    CMP EDI,dword ptr [EAX + 0x2cebd7c] ; 005528c4
        ;   Label: LAB_005528c4
    JZ 0x005528a6                       ; 005528ca
        ;   XREF to: 005528a6 (CONDITIONAL_JUMP)  ; LAB_005528a6
    CMP EDI,dword ptr [EAX + 0x2cebd74] ; 005528cc
    JNZ 0x005528a6                      ; 005528d2
        ;   XREF to: 005528a6 (CONDITIONAL_JUMP)  ; LAB_005528a6
    CMP EDI,dword ptr [EAX + 0x2cebd80] ; 005528d4
    JNZ 0x005528a6                      ; 005528da
        ;   XREF to: 005528a6 (CONDITIONAL_JUMP)  ; LAB_005528a6
    CMP EDI,dword ptr [ESI + 0x2cebdd0] ; 005528dc
    JNZ 0x005528a6                      ; 005528e2
        ;   XREF to: 005528a6 (CONDITIONAL_JUMP)  ; LAB_005528a6
    ADD EAX,0x2cebc24                   ; 005528e4
    PUSH EAX                            ; 005528e9
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 005528ea
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005528ef
    JMP 0x005528ac                      ; 005528f2
        ;   XREF to: 005528ac (UNCONDITIONAL_JUMP)  ; LAB_005528ac

