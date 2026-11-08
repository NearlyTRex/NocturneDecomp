; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552970(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00558290 at 0055831a
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d2a36
;   TerminatedCString s_allocMixBuffers_out_of_m_005d2a4b
;   undefined4 DAT_0060422c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3294
;   undefined4 DAT_02cf3298
;   undefined4 DAT_02cf329c
;   undefined4 DAT_02cf32a0
;   undefined4 DAT_02cf32a4
;   undefined4 DAT_02cf32c8
;   undefined4 DAT_02cf32ec
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552970
        ;   Label: FUN_00552970
    PUSH ESI                            ; 00552971
    PUSH EBP                            ; 00552972
    SUB ESP,0x10                        ; 00552973
    MOV EAX,dword ptr [ESP + 0x20]      ; 00552976
    MOV EDX,dword ptr [ESP + 0x24]      ; 0055297a
    MOV EBX,0x1                         ; 0055297e
    MOV dword ptr [0x02cf32a0],EDX      ; 00552983 | DAT_02cf32a0
    CMP EAX,EBX                         ; 00552989
    JLE 0x005529a0                      ; 0055298b
        ;   XREF to: 005529a0 (CONDITIONAL_JUMP)  ; LAB_005529a0
    ADD EBX,EBX                         ; 0055298d
        ;   Label: LAB_0055298d
    CMP EBX,EAX                         ; 0055298f
    JL 0x0055298d                       ; 00552991
        ;   XREF to: 0055298d (CONDITIONAL_JUMP)  ; LAB_0055298d
    LEA EAX,[EAX]                       ; 00552993
    LEA EDX,[EDX]                       ; 00552999
    NOP                                 ; 0055299f
    MOV EAX,[0x02cf32a0]                ; 005529a0 | DAT_02cf32a0
        ;   Label: LAB_005529a0
    LEA ESI,[EBX*0x4 + 0x0]             ; 005529a5
    IMUL EAX,ESI                        ; 005529ac
    IMUL EAX,dword ptr [0x0060422c]     ; 005529af | DAT_0060422c
    XOR EDX,EDX                         ; 005529b6
    PUSH EAX                            ; 005529b8
    MOV EBP,dword ptr [0x02cf32c8]      ; 005529b9 | DAT_02cf32c8
    MOV dword ptr [0x02cf3294],EDX      ; 005529bf | DAT_02cf3294
    PUSH EBP                            ; 005529c5
    MOV dword ptr [0x02cf3298],EDX      ; 005529c6 | DAT_02cf3298
    MOV dword ptr [0x02cf329c],EBX      ; 005529cc | DAT_02cf329c
    CALL FUN_005a3e50                   ; 005529d2
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    MOV [0x02cf32c8],EAX                ; 005529d7 | DAT_02cf32c8
    MOV EAX,[0x0060422c]                ; 005529dc | DAT_0060422c
    IMUL EAX,ESI                        ; 005529e1
    ADD ESP,0x8                         ; 005529e4
    ADD EAX,EAX                         ; 005529e7
    PUSH EAX                            ; 005529e9
    MOV EAX,[0x02cf32ec]                ; 005529ea | DAT_02cf32ec
    PUSH EAX                            ; 005529ef
    CALL FUN_005a3e50                   ; 005529f0
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    IMUL ESI,dword ptr [0x0060422c]     ; 005529f5 | DAT_0060422c
    ADD ESP,0x8                         ; 005529fc
    PUSH ESI                            ; 005529ff
    MOV ECX,dword ptr [0x02cf32a4]      ; 00552a00 | DAT_02cf32a4
    PUSH ECX                            ; 00552a06
    MOV [0x02cf32ec],EAX                ; 00552a07 | DAT_02cf32ec
    CALL FUN_005a3e50                   ; 00552a0c
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    MOV EBX,dword ptr [0x02cf329c]      ; 00552a11 | DAT_02cf329c
    MOV ESI,dword ptr [0x02cf32c8]      ; 00552a17 | DAT_02cf32c8
    ADD ESP,0x8                         ; 00552a1d
    MOV [0x02cf32a4],EAX                ; 00552a20 | DAT_02cf32a4
    TEST ESI,ESI                        ; 00552a25
    JNZ 0x00552b07                      ; 00552a27
        ;   XREF to: 00552b07 (CONDITIONAL_JUMP)  ; LAB_00552b07
    MOV EBP,0x5d2a36                    ; 00552a2d | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00552a2d
    MOV EAX,0x561                       ; 00552a32
    PUSH 0x5d2a4b                       ; 00552a37 | = "allocMixBuffers - out of memory"
    MOV dword ptr [0x01d71de0],EBP      ; 00552a3c | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00552a42 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00552a47
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00552a4c
    MOV ECX,dword ptr [0x0060422c]      ; 00552a4f | DAT_0060422c
        ;   Label: LAB_00552a4f
    MOV EBX,dword ptr [0x02cf329c]      ; 00552a55 | DAT_02cf329c
    XOR EDX,EDX                         ; 00552a5b
    TEST ECX,ECX                        ; 00552a5d
    JLE 0x00552afa                      ; 00552a5f
        ;   XREF to: 00552afa (CONDITIONAL_JUMP)  ; LAB_00552afa
    PUSH EDI                            ; 00552a65
    LEA EAX,[EBX*0x8 + 0x0]             ; 00552a66
    IMUL ECX,EBX,0x0                    ; 00552a6d
    MOV dword ptr [ESP + 0x10],EAX      ; 00552a70
    MOV EDI,dword ptr [ESP + 0x10]      ; 00552a74
    LEA EAX,[EBX*0x4 + 0x0]             ; 00552a78
    MOV dword ptr [ESP + 0xc],EDI       ; 00552a7f
    LEA ESI,[ECX + EAX*0x1]             ; 00552a83
    MOV dword ptr [ESP + 0x8],EAX       ; 00552a86
    MOV EDI,ECX                         ; 00552a8a
    XOR EAX,EAX                         ; 00552a8c
    MOV EBP,EBX                         ; 00552a8e
        ;   Label: LAB_00552a8e
    IMUL EBP,EDX                        ; 00552a90
    IMUL EBP,dword ptr [0x02cf32a0]     ; 00552a93 | DAT_02cf32a0
    SHL EBP,0x2                         ; 00552a9a
    MOV dword ptr [ESP + 0x4],EBP       ; 00552a9d
    MOV EBP,dword ptr [0x02cf32c8]      ; 00552aa1 | DAT_02cf32c8
    ADD EBP,dword ptr [ESP + 0x4]       ; 00552aa7
    MOV dword ptr [EAX + 0x2cf32cc],EBP ; 00552aab
    MOV EBP,dword ptr [0x02cf32a4]      ; 00552ab1 | DAT_02cf32a4
    ADD EBP,ECX                         ; 00552ab7
    MOV dword ptr [EAX + 0x2cf32a8],EBP ; 00552ab9
    MOV EBP,dword ptr [0x02cf32ec]      ; 00552abf | DAT_02cf32ec
    MOV dword ptr [ESP + 0x4],EBP       ; 00552ac5
    ADD EBP,EDI                         ; 00552ac9
    MOV dword ptr [EAX + 0x2cf32f0],EBP ; 00552acb
    MOV EBP,dword ptr [ESP + 0x4]       ; 00552ad1
    ADD EBP,ESI                         ; 00552ad5
    MOV dword ptr [EAX + 0x2cf3310],EBP ; 00552ad7
    ADD ESI,dword ptr [ESP + 0x10]      ; 00552add
    ADD EDI,dword ptr [ESP + 0xc]       ; 00552ae1
    MOV EBP,dword ptr [ESP + 0x8]       ; 00552ae5
    INC EDX                             ; 00552ae9
    ADD ECX,EBP                         ; 00552aea
    MOV EBP,dword ptr [0x0060422c]      ; 00552aec | DAT_0060422c
    ADD EAX,0x4                         ; 00552af2
    CMP EDX,EBP                         ; 00552af5
    JL 0x00552a8e                       ; 00552af7
        ;   XREF to: 00552a8e (CONDITIONAL_JUMP)  ; LAB_00552a8e
    POP EDI                             ; 00552af9
    MOV dword ptr [0x02cf329c],EBX      ; 00552afa | DAT_02cf329c
        ;   Label: LAB_00552afa
    ADD ESP,0x10                        ; 00552b00
    POP EBP                             ; 00552b03
    POP ESI                             ; 00552b04
    POP EBX                             ; 00552b05
    RET                                 ; 00552b06
    CMP dword ptr [0x02cf32ec],0x0      ; 00552b07 | DAT_02cf32ec
        ;   Label: LAB_00552b07
    JZ 0x00552a2d                       ; 00552b0e
        ;   XREF to: 00552a2d (CONDITIONAL_JUMP)  ; LAB_00552a2d
    TEST EAX,EAX                        ; 00552b14
    JZ 0x00552a2d                       ; 00552b16
        ;   XREF to: 00552a2d (CONDITIONAL_JUMP)  ; LAB_00552a2d
    JMP 0x00552a4f                      ; 00552b1c
        ;   XREF to: 00552a4f (UNCONDITIONAL_JUMP)  ; LAB_00552a4f

