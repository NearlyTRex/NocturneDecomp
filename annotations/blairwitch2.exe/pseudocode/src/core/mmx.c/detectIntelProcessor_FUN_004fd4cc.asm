; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mmx_c_detectIntelProcessor_FUN_004fd4cc(void)
;
;
; XREF[2]:
;   core_mmx.c_detectCPUFeatures_FUN_004fd490 at 004fd491
;   core_mmx.c_getCPUInfo_FUN_004fd58f at 004fd5a0
;
; Referenced Globals:
;   TerminatedCString s_GenuineIntel_006182c0
;   undefined4 s__006182c0+0xc
;   undefined4 DAT_006182d0
;   undefined4 DAT_006182d4
;   undefined1 DAT_006182d8
;   undefined4 DAT_006182d9
;   undefined4 DAT_006182da
;   undefined4 DAT_006182db
;   undefined1 DAT_006182dc
;   undefined4 DAT_006182dd
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fd4cc
        ;   Label: core_mmx.c_detectIntelProcessor_FUN_004fd4cc
    PUSH EDI                            ; 004fd4cd
    PUSH EAX                            ; 004fd4ce
    PUSH EBX                            ; 004fd4cf
    PUSH ECX                            ; 004fd4d0
    PUSH EDX                            ; 004fd4d1
    PUSHFD                              ; 004fd4d2
    POP EAX                             ; 004fd4d3
    MOV ECX,EAX                         ; 004fd4d4
    XOR EAX,0x40000                     ; 004fd4d6
    PUSH EAX                            ; 004fd4db
    POPFD                               ; 004fd4dc
    PUSHFD                              ; 004fd4dd
    POP EAX                             ; 004fd4de
    XOR EAX,ECX                         ; 004fd4df
    MOV byte ptr [0x006182d8],0x3       ; 004fd4e1 | DAT_006182d8
    JZ 0x004fd572                       ; 004fd4e8
        ;   XREF to: 004fd572 (CONDITIONAL_JUMP)  ; LAB_004fd572
    PUSH ECX                            ; 004fd4ee
    POPFD                               ; 004fd4ef
    MOV byte ptr [0x006182d8],0x4       ; 004fd4f0 | DAT_006182d8
    MOV EAX,ECX                         ; 004fd4f7
    XOR EAX,0x200000                    ; 004fd4f9
    PUSH EAX                            ; 004fd4fe
    POPFD                               ; 004fd4ff
    PUSHFD                              ; 004fd500
    POP EAX                             ; 004fd501
    XOR EAX,ECX                         ; 004fd502
    JZ 0x004fd572                       ; 004fd504
        ;   XREF to: 004fd572 (CONDITIONAL_JUMP)  ; LAB_004fd572
    MOV byte ptr [0x006182db],0x1       ; 004fd506 | DAT_006182db
    XOR EAX,EAX                         ; 004fd50d
    CPUID                               ; 004fd50f
    MOV dword ptr [0x006182cc],EBX      ; 004fd511 | s__006182c0+0xc
    MOV dword ptr [0x006182d0],EDX      ; 004fd517 | DAT_006182d0
    MOV dword ptr [0x006182d4],ECX      ; 004fd51d | DAT_006182d4
    MOV ESI,0x6182cc                    ; 004fd523 | s__006182c0+0xc
    MOV EDI,0x6182c0                    ; 004fd528 | = "GenuineIntel"
    MOV ECX,0x1                         ; 004fd52d
    CMPSB.REPE ES:EDI,ESI               ; 004fd532 | = "GenuineIntel" | s__006182c0+0xc
    OR ECX,ECX                          ; 004fd534
    JNZ 0x004fd572                      ; 004fd536
        ;   XREF to: 004fd572 (CONDITIONAL_JUMP)  ; LAB_004fd572
    MOV byte ptr [0x006182dc],0x1       ; 004fd538 | DAT_006182dc
    CMP EAX,0x1                         ; 004fd53f
    JL 0x004fd572                       ; 004fd542
        ;   XREF to: 004fd572 (CONDITIONAL_JUMP)  ; LAB_004fd572
    XOR EAX,EAX                         ; 004fd544
    INC EAX                             ; 004fd546
    CPUID                               ; 004fd547
    MOV [0x006182da],AL                 ; 004fd549 | DAT_006182da
    AND byte ptr [0x006182da],0xf       ; 004fd54e | DAT_006182da
    AND AL,0xf0                         ; 004fd555
    SHR AL,0x4                          ; 004fd557
    MOV [0x006182d9],AL                 ; 004fd55a | DAT_006182d9
    AND EAX,0xf00                       ; 004fd55f
    SHR EAX,0x8                         ; 004fd564
    MOV [0x006182d8],AL                 ; 004fd567 | DAT_006182d8
    MOV dword ptr [0x006182dd],EDX      ; 004fd56c | DAT_006182dd
    POP EDX                             ; 004fd572
        ;   Label: LAB_004fd572
    POP ECX                             ; 004fd573
    POP EBX                             ; 004fd574
    POP EAX                             ; 004fd575
    POP EDI                             ; 004fd576
    POP ESI                             ; 004fd577
    RET                                 ; 004fd578

