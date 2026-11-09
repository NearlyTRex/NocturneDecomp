; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_0047cd80(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_FUN_0047f970 at 0047f970
;   shape_edittool.cpp_FUN_0047fa80 at 0047fafd
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bce22
;   TerminatedCString s_paintWindowBackground_ca_005bce38
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5b104
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cd80
        ;   Label: shape_edittool.cpp_FUN_0047cd80
    PUSH ESI                            ; 0047cd81
    PUSH EDI                            ; 0047cd82
    PUSH EBP                            ; 0047cd83
    SUB ESP,0x8                         ; 0047cd84
    CMP dword ptr [0x01c5b104],0x1      ; 0047cd87 | DAT_01c5b104
    JL 0x0047ce17                       ; 0047cd8e
        ;   XREF to: 0047ce17 (CONDITIONAL_JUMP)  ; LAB_0047ce17
    MOV EAX,[0x01c5b104]                ; 0047cd94 | DAT_01c5b104
        ;   Label: LAB_0047cd94
    DEC EAX                             ; 0047cd99
    SHL EAX,0x3                         ; 0047cd9a
    MOV EDX,EAX                         ; 0047cd9d
    SHL EAX,0x6                         ; 0047cd9f
    SUB EAX,EDX                         ; 0047cda2
    MOV EDX,0x1c5b108                   ; 0047cda4
    ADD EDX,EAX                         ; 0047cda9
    MOV EBX,dword ptr [EDX + 0x1d8]     ; 0047cdab
    MOV dword ptr [ESP + 0x4],EDX       ; 0047cdb1
    TEST EBX,EBX                        ; 0047cdb5
    JZ 0x0047ce0f                       ; 0047cdb7
        ;   XREF to: 0047ce0f (CONDITIONAL_JUMP)  ; LAB_0047ce0f
    MOV ESI,dword ptr [0x005fba20]      ; 0047cdb9 | DAT_005fba20
    MOV EDX,dword ptr [EDX + 0x1e4]     ; 0047cdbf
    IMUL EDX,ESI                        ; 0047cdc5
    MOV EAX,EDX                         ; 0047cdc8
    SAR EDX,0x1f                        ; 0047cdca
    SHL EDX,0x3                         ; 0047cdcd
    SBB EAX,EDX                         ; 0047cdd0
    SAR EAX,0x3                         ; 0047cdd2
    MOV dword ptr [ESP],EAX             ; 0047cdd5
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047cdd8
    MOV EDI,dword ptr [EAX + 0x1e8]     ; 0047cddc
    XOR EBP,EBP                         ; 0047cde2
    TEST EDI,EDI                        ; 0047cde4
    JLE 0x0047ce0f                      ; 0047cde6
        ;   XREF to: 0047ce0f (CONDITIONAL_JUMP)  ; LAB_0047ce0f
    MOV EDI,dword ptr [ESP + 0x4]       ; 0047cde8
        ;   Label: LAB_0047cde8
    MOV EDI,dword ptr [EDI + 0x1e0]     ; 0047cdec
    ADD EDI,EBP                         ; 0047cdf2
    MOV EDI,dword ptr [EDI*0x4 + 0x1c5faec] ; 0047cdf4 | DAT_01c5faec
    TEST EDI,EDI                        ; 0047cdfb
    JNZ 0x0047ce3f                      ; 0047cdfd
        ;   XREF to: 0047ce3f (CONDITIONAL_JUMP)  ; LAB_0047ce3f
    ADD EBX,dword ptr [ESP]             ; 0047cdff
        ;   Label: LAB_0047cdff
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047ce02
    INC EBP                             ; 0047ce06
    CMP EBP,dword ptr [EAX + 0x1e8]     ; 0047ce07
    JL 0x0047cde8                       ; 0047ce0d
        ;   XREF to: 0047cde8 (CONDITIONAL_JUMP)  ; LAB_0047cde8
    ADD ESP,0x8                         ; 0047ce0f
        ;   Label: LAB_0047ce0f
    POP EBP                             ; 0047ce12
    POP EDI                             ; 0047ce13
    POP ESI                             ; 0047ce14
    POP EBX                             ; 0047ce15
    RET                                 ; 0047ce16
    MOV ECX,0x5bce22                    ; 0047ce17 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047ce17
    MOV EBX,0x3df                       ; 0047ce1c
    PUSH 0x5bce38                       ; 0047ce21 | = "paintWindowBackground called but no w..."
    MOV dword ptr [0x01d71de0],ECX      ; 0047ce26 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047ce2c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047ce32
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047ce37
    JMP 0x0047cd94                      ; 0047ce3a
        ;   XREF to: 0047cd94 (UNCONDITIONAL_JUMP)  ; LAB_0047cd94
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047ce3f
        ;   Label: LAB_0047ce3f
    MOV ECX,dword ptr [0x005fba20]      ; 0047ce43 | DAT_005fba20
    MOV EDX,dword ptr [EDX + 0x1dc]     ; 0047ce49
    IMUL EDX,ECX                        ; 0047ce4f
    MOV EAX,EDX                         ; 0047ce52
    SAR EDX,0x1f                        ; 0047ce54
    SHL EDX,0x3                         ; 0047ce57
    SBB EAX,EDX                         ; 0047ce5a
    SAR EAX,0x3                         ; 0047ce5c
    MOV ESI,EBX                         ; 0047ce5f
    MOV ECX,dword ptr [ESP]             ; 0047ce61
    ADD EDI,EAX                         ; 0047ce64
    PUSH EDI                            ; 0047ce66
    MOV EAX,ECX                         ; 0047ce67
    SHR ECX,0x2                         ; 0047ce69
    MOVSD.REP ES:EDI,ESI                ; 0047ce6c
    MOV CL,AL                           ; 0047ce6e
    AND CL,0x3                          ; 0047ce70
    MOVSB.REP ES:EDI,ESI                ; 0047ce73
    POP EDI                             ; 0047ce75
    JMP 0x0047cdff                      ; 0047ce76
        ;   XREF to: 0047cdff (UNCONDITIONAL_JUMP)  ; LAB_0047cdff

