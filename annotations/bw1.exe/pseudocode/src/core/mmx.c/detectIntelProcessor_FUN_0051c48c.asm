; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectIntelProcessor_FUN_0051c48c(void)
;
;
; XREF[2]:
;   core_mmx.c_detectCPUFeatures_FUN_0051c450 at 0051c451
;   core_mmx.c_getCPUInfo_FUN_0051c54f at 0051c560
;
; Referenced Globals:
;   TerminatedCString s_GenuineIntel_0061f7a0
;   undefined4 s__0061f7a0+0xc
;   undefined4 DAT_0061f7b0
;   undefined4 DAT_0061f7b4
;   undefined1 DAT_0061f7b8
;   undefined4 DAT_0061f7b9
;   undefined4 DAT_0061f7ba
;   undefined4 DAT_0061f7bb
;   undefined1 DAT_0061f7bc
;   undefined4 DAT_0061f7bd
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0051c48c
        ;   Label: core_mmx.c_detectIntelProcessor_FUN_0051c48c
    PUSH EDI                            ; 0051c48d
    PUSH EAX                            ; 0051c48e
    PUSH EBX                            ; 0051c48f
    PUSH ECX                            ; 0051c490
    PUSH EDX                            ; 0051c491
    PUSHFD                              ; 0051c492
    POP EAX                             ; 0051c493
    MOV ECX,EAX                         ; 0051c494
    XOR EAX,0x40000                     ; 0051c496
    PUSH EAX                            ; 0051c49b
    POPFD                               ; 0051c49c
    PUSHFD                              ; 0051c49d
    POP EAX                             ; 0051c49e
    XOR EAX,ECX                         ; 0051c49f
    MOV byte ptr [0x0061f7b8],0x3       ; 0051c4a1 | DAT_0061f7b8
    JZ 0x0051c532                       ; 0051c4a8
        ;   XREF to: 0051c532 (CONDITIONAL_JUMP)  ; LAB_0051c532
    PUSH ECX                            ; 0051c4ae
    POPFD                               ; 0051c4af
    MOV byte ptr [0x0061f7b8],0x4       ; 0051c4b0 | DAT_0061f7b8
    MOV EAX,ECX                         ; 0051c4b7
    XOR EAX,0x200000                    ; 0051c4b9
    PUSH EAX                            ; 0051c4be
    POPFD                               ; 0051c4bf
    PUSHFD                              ; 0051c4c0
    POP EAX                             ; 0051c4c1
    XOR EAX,ECX                         ; 0051c4c2
    JZ 0x0051c532                       ; 0051c4c4
        ;   XREF to: 0051c532 (CONDITIONAL_JUMP)  ; LAB_0051c532
    MOV byte ptr [0x0061f7bb],0x1       ; 0051c4c6 | DAT_0061f7bb
    XOR EAX,EAX                         ; 0051c4cd
    CPUID                               ; 0051c4cf
    MOV dword ptr [0x0061f7ac],EBX      ; 0051c4d1 | s__0061f7a0+0xc
    MOV dword ptr [0x0061f7b0],EDX      ; 0051c4d7 | DAT_0061f7b0
    MOV dword ptr [0x0061f7b4],ECX      ; 0051c4dd | DAT_0061f7b4
    MOV ESI,0x61f7ac                    ; 0051c4e3 | s__0061f7a0+0xc
    MOV EDI,0x61f7a0                    ; 0051c4e8 | = "GenuineIntel"
    MOV ECX,0x1                         ; 0051c4ed
    CMPSB.REPE ES:EDI,ESI               ; 0051c4f2 | = "GenuineIntel" | s__0061f7a0+0xc
    OR ECX,ECX                          ; 0051c4f4
    JNZ 0x0051c532                      ; 0051c4f6
        ;   XREF to: 0051c532 (CONDITIONAL_JUMP)  ; LAB_0051c532
    MOV byte ptr [0x0061f7bc],0x1       ; 0051c4f8 | DAT_0061f7bc
    CMP EAX,0x1                         ; 0051c4ff
    JL 0x0051c532                       ; 0051c502
        ;   XREF to: 0051c532 (CONDITIONAL_JUMP)  ; LAB_0051c532
    XOR EAX,EAX                         ; 0051c504
    INC EAX                             ; 0051c506
    CPUID                               ; 0051c507
    MOV [0x0061f7ba],AL                 ; 0051c509 | DAT_0061f7ba
    AND byte ptr [0x0061f7ba],0xf       ; 0051c50e | DAT_0061f7ba
    AND AL,0xf0                         ; 0051c515
    SHR AL,0x4                          ; 0051c517
    MOV [0x0061f7b9],AL                 ; 0051c51a | DAT_0061f7b9
    AND EAX,0xf00                       ; 0051c51f
    SHR EAX,0x8                         ; 0051c524
    MOV [0x0061f7b8],AL                 ; 0051c527 | DAT_0061f7b8
    MOV dword ptr [0x0061f7bd],EDX      ; 0051c52c | DAT_0061f7bd
    POP EDX                             ; 0051c532
        ;   Label: LAB_0051c532
    POP ECX                             ; 0051c533
    POP EBX                             ; 0051c534
    POP EAX                             ; 0051c535
    POP EDI                             ; 0051c536
    POP ESI                             ; 0051c537
    RET                                 ; 0051c538

