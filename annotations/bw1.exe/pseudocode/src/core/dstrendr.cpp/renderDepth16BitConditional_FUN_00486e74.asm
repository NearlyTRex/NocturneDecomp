; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepth16BitConditional_FUN_00486e74(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_00481cb0 at 00481d3f
;
; Referenced Globals:
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4f034
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00486e74
        ;   Label: core_dstrendr.cpp_renderDepth16BitConditional_FUN_00486e74
    PUSH EDI                            ; 00486e75
    MOV EAX,dword ptr [ESI + 0x8]       ; 00486e76
    MOV ECX,dword ptr [EDI + 0x8]       ; 00486e79
    CMP EAX,ECX                         ; 00486e7c
    JBE 0x00486e83                      ; 00486e7e
        ;   XREF to: 00486e83 (CONDITIONAL_JUMP)  ; LAB_00486e83
    XCHG EAX,ECX                        ; 00486e80
    XCHG EDI,ESI                        ; 00486e81
    SHR EAX,0x10                        ; 00486e83
        ;   Label: LAB_00486e83
    SHR ECX,0x10                        ; 00486e86
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 00486e89 | DAT_01c4354c
    SUB ECX,EAX                         ; 00486e90
    JLE 0x00486ec5                      ; 00486e92
        ;   XREF to: 00486ec5 (CONDITIONAL_JUMP)  ; LAB_00486ec5
    SHL EAX,0x1                         ; 00486e94
    ADD EBX,EAX                         ; 00486e96
    MOV EAX,dword ptr [EDI + 0x28]      ; 00486e98
    SUB EAX,dword ptr [ESI + 0x28]      ; 00486e9b
    IMUL dword ptr [ECX*0x4 + 0x1c4f034] ; 00486e9e | DAT_01c4f034
    MOV ESI,dword ptr [ESI + 0x28]      ; 00486ea5
    MOV EAX,ESI                         ; 00486ea8
        ;   Label: LAB_00486ea8
    SAR EAX,0x8                         ; 00486eaa
    CMP word ptr [EBX],0x0              ; 00486ead
    JZ 0x00486ebd                       ; 00486eb1
        ;   XREF to: 00486ebd (CONDITIONAL_JUMP)  ; LAB_00486ebd
    CMP EAX,0xffff                      ; 00486eb3
    JA 0x00486ed0                       ; 00486eb8
        ;   XREF to: 00486ed0 (CONDITIONAL_JUMP)  ; LAB_00486ed0
    MOV word ptr [EBX],AX               ; 00486eba
    ADD ESI,EDX                         ; 00486ebd
        ;   Label: LAB_00486ebd
    ADD EBX,0x2                         ; 00486ebf
    DEC ECX                             ; 00486ec2
    JG 0x00486ea8                       ; 00486ec3
        ;   XREF to: 00486ea8 (CONDITIONAL_JUMP)  ; LAB_00486ea8
    POP EDI                             ; 00486ec5
        ;   Label: LAB_00486ec5
    POP ESI                             ; 00486ec6
    RET                                 ; 00486ec7
    MOV word ptr [EBX],0xffff           ; 00486ed0
        ;   Label: LAB_00486ed0
    JMP 0x00486ebd                      ; 00486ed5
        ;   XREF to: 00486ebd (UNCONDITIONAL_JUMP)  ; LAB_00486ebd

