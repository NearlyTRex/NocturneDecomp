; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60 at 0046bf6d
;
; Referenced Globals:
;   undefined4 DAT_005f4a98
;   undefined4 DAT_005f4a9c
;   undefined4 DAT_005f4aa4
;   undefined4 DAT_005f4ab4
;   undefined4 DAT_005f4ab8
;   undefined4 DAT_005f4abc
;   undefined4 DAT_005f4ac0
;   undefined4 DAT_005f4ac4
;   undefined4 DAT_005f4ac8
;   undefined1 DAT_00604df8
;   undefined1 DAT_00604e18
;   undefined4 DAT_00604e38
;   undefined4 DAT_00604e58
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c60dac
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0047090d
        ;   Label: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_0047090d
    PUSH EDI                            ; 0047090e
    PUSH EBP                            ; 0047090f
    MOV EAX,dword ptr [ESI + 0x8]       ; 00470910
    MOV ECX,dword ptr [EDI + 0x8]       ; 00470913
    CMP EAX,ECX                         ; 00470916
    JBE 0x0047091d                      ; 00470918
        ;   XREF to: 0047091d (CONDITIONAL_JUMP)  ; LAB_0047091d
    XCHG EAX,ECX                        ; 0047091a
    XCHG EDI,ESI                        ; 0047091b
    SHR ECX,0x10                        ; 0047091d
        ;   Label: LAB_0047091d
    SHR EAX,0x10                        ; 00470920
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 00470923 | DAT_01c60dac
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 0047092a | DAT_01c5faec
    SUB ECX,EAX                         ; 00470931
    JLE 0x00470a26                      ; 00470933
        ;   XREF to: 00470a26 (CONDITIONAL_JUMP)  ; LAB_00470a26
    LEA EBX,[EBX + EAX*0x4]             ; 00470939
    SHL ECX,0x2                         ; 0047093c
    LEA EBP,[EBP + EAX*0x4]             ; 0047093f
    MOV dword ptr [0x005f4ac4],ECX      ; 00470943 | DAT_005f4ac4
    MOV dword ptr [0x005f4ac0],EBX      ; 00470949 | DAT_005f4ac0
    MOV dword ptr [0x005f4ac8],EBP      ; 0047094f | DAT_005f4ac8
    MOV EAX,dword ptr [EDI + 0x18]      ; 00470955
    MOV EBX,dword ptr [ESI + 0x18]      ; 00470958
    SUB EAX,EBX                         ; 0047095b
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0047095d | DAT_01c6b5d4
    MOV dword ptr [0x005f4a98],EBX      ; 00470963 | DAT_005f4a98
    MOV dword ptr [0x005f4ab4],EDX      ; 00470969 | DAT_005f4ab4
    MOV EAX,dword ptr [EDI + 0x20]      ; 0047096f
    MOV EBX,dword ptr [ESI + 0x20]      ; 00470972
    SUB EAX,EBX                         ; 00470975
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00470977 | DAT_01c6b5d4
    MOV dword ptr [0x005f4a9c],EBX      ; 0047097d | DAT_005f4a9c
    MOV dword ptr [0x005f4ab8],EDX      ; 00470983 | DAT_005f4ab8
    MOV EAX,dword ptr [EDI + 0x28]      ; 00470989
    MOV EBX,dword ptr [ESI + 0x28]      ; 0047098c
    SUB EAX,EBX                         ; 0047098f
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00470991 | DAT_01c6b5d4
    MOV dword ptr [0x005f4aa4],EBX      ; 00470997 | DAT_005f4aa4
    MOV dword ptr [0x005f4abc],EDX      ; 0047099d | DAT_005f4abc
    MOV ECX,dword ptr [0x005f4a98]      ; 004709a3 | DAT_005f4a98
    MOV EDX,dword ptr [0x005f4a9c]      ; 004709a9 | DAT_005f4a9c
    MOV EDI,0x0                         ; 004709af
    MOV ESI,dword ptr [0x005f4aa4]      ; 004709b4 | DAT_005f4aa4
    MOV EAX,[0x005f4ac8]                ; 004709ba | DAT_005f4ac8
        ;   Label: LAB_004709ba
    ADD EAX,EDI                         ; 004709bf
    CMP ESI,dword ptr [EAX]             ; 004709c1
    JL 0x00470a07                       ; 004709c3
        ;   XREF to: 00470a07 (CONDITIONAL_JUMP)  ; LAB_00470a07
    MOVD MM0,ECX                        ; 004709c5
    MOVD MM2,EDX                        ; 004709c8
    PSRLQ MM0,qword ptr [0x00604df8]    ; 004709cb | DAT_00604df8
    PSRLQ MM2,qword ptr [0x00604e18]    ; 004709d2 | DAT_00604e18
    PAND MM0,qword ptr [0x00604e38]     ; 004709d9 | DAT_00604e38
    PAND MM2,qword ptr [0x00604e58]     ; 004709e0 | DAT_00604e58
    PADDD MM0,MM2                       ; 004709e7
    MOVD EBX,MM0                        ; 004709ea
    ADD EBX,dword ptr [0x01c6ced0]      ; 004709ed | DAT_01c6ced0
    MOVZX EAX,byte ptr [EBX]            ; 004709f3
    MOV EAX,dword ptr [EAX*0x4 + 0x1c6a974] ; 004709f6 | DAT_01c6a974
    MOV EBX,dword ptr [0x005f4ac0]      ; 004709fd | DAT_005f4ac0
    ADD EBX,EDI                         ; 00470a03
    MOV dword ptr [EBX],EAX             ; 00470a05
    ADD EDI,0x4                         ; 00470a07
        ;   Label: LAB_00470a07
    CMP EDI,dword ptr [0x005f4ac4]      ; 00470a0a | DAT_005f4ac4
    JA 0x00470a26                       ; 00470a10
        ;   XREF to: 00470a26 (CONDITIONAL_JUMP)  ; LAB_00470a26
    ADD ECX,dword ptr [0x005f4ab4]      ; 00470a12 | DAT_005f4ab4
    ADD EDX,dword ptr [0x005f4ab8]      ; 00470a18 | DAT_005f4ab8
    ADD ESI,dword ptr [0x005f4abc]      ; 00470a1e | DAT_005f4abc
    JMP 0x004709ba                      ; 00470a24
        ;   XREF to: 004709ba (UNCONDITIONAL_JUMP)  ; LAB_004709ba
    POP EBP                             ; 00470a26
        ;   Label: LAB_00470a26
    EMMS                                ; 00470a27
    POP EDI                             ; 00470a29
    POP ESI                             ; 00470a2a
    RET                                 ; 00470a2b

