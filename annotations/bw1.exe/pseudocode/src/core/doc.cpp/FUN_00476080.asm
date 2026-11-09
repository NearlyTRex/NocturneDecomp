; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00476080(int param_1)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 0046a2e3
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476080
        ;   Label: core_doc.cpp_FUN_00476080
    PUSH ESI                            ; 00476081
    PUSH EDI                            ; 00476082
    SUB ESP,0x18                        ; 00476083
    MOV EBX,dword ptr [ESP + 0x28]      ; 00476086
    CMP dword ptr [EBX + 0x2ca0],0x1    ; 0047608a
    JGE 0x0047609a                      ; 00476091
        ;   XREF to: 0047609a (CONDITIONAL_JUMP)  ; LAB_0047609a
    ADD ESP,0x18                        ; 00476093
        ;   Label: LAB_00476093
    POP EDI                             ; 00476096
    POP ESI                             ; 00476097
    POP EBX                             ; 00476098
    RET                                 ; 00476099
    PUSH EBX                            ; 0047609a
        ;   Label: LAB_0047609a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047609b
    CALL dword ptr [EAX + 0x10c]        ; 004760a1
    ADD ESP,0x4                         ; 004760a7
    CMP EAX,0x2                         ; 004760aa
    JGE 0x004760bd                      ; 004760ad
        ;   XREF to: 004760bd (CONDITIONAL_JUMP)  ; LAB_004760bd
    CMP dword ptr [EBX + 0x2c98],0xf    ; 004760af
    CMP dword ptr [EBX + 0x2c98],0x14   ; 004760b6
    ADD EBX,0x158                       ; 004760bd
        ;   Label: LAB_004760bd
    PUSH EBX                            ; 004760c3
    MOV ESI,dword ptr [EBX + 0x2cdc]    ; 004760c4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004760ca
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004760cf
    MOV EAX,dword ptr [EAX + 0x24]      ; 004760d2
    LEA EDX,[ESI + 0x3ab24]             ; 004760d5
    CMP EAX,0x2f                        ; 004760db
    JNZ 0x0047610e                      ; 004760de
        ;   XREF to: 0047610e (CONDITIONAL_JUMP)  ; LAB_0047610e
    MOV ESI,0xc1a00000                  ; 004760e0
    XOR ECX,ECX                         ; 004760e5
    LEA EAX,[ESP + 0xc]                 ; 004760e7
    MOV dword ptr [ESP + 0x10],ECX      ; 004760eb
    MOV dword ptr [ESP + 0x14],ESI      ; 004760ef
    MOV dword ptr [ESP + 0xc],ECX       ; 004760f3
    CMP EDX,EAX                         ; 004760f7
    JZ 0x00476093                       ; 004760f9
        ;   XREF to: 00476093 (CONDITIONAL_JUMP)  ; LAB_00476093
    MOV dword ptr [EDX + 0x4],ECX       ; 004760fb
    MOV dword ptr [EDX],ECX             ; 004760fe
    MOV EAX,dword ptr [ESP + 0x14]      ; 00476100
    MOV dword ptr [EDX + 0x8],EAX       ; 00476104
    ADD ESP,0x18                        ; 00476107
    POP EDI                             ; 0047610a
    POP ESI                             ; 0047610b
    POP EBX                             ; 0047610c
    RET                                 ; 0047610d
    CMP EAX,0x30                        ; 0047610e
        ;   Label: LAB_0047610e
    JNZ 0x00476093                      ; 00476111
        ;   XREF to: 00476093 (CONDITIONAL_JUMP)  ; LAB_00476093
    XOR EDI,EDI                         ; 00476113
    MOV EAX,0x41a00000                  ; 00476115
    MOV dword ptr [ESP + 0x4],EDI       ; 0047611a
    MOV dword ptr [ESP + 0x8],EAX       ; 0047611e
    MOV EAX,ESP                         ; 00476122
    MOV dword ptr [ESP],EDI             ; 00476124
    CMP EDX,EAX                         ; 00476127
    JZ 0x00476093                       ; 00476129
        ;   XREF to: 00476093 (CONDITIONAL_JUMP)  ; LAB_00476093
    MOV dword ptr [EDX + 0x4],EDI       ; 0047612f
    MOV dword ptr [EDX],EDI             ; 00476132
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476134
    MOV dword ptr [EDX + 0x8],EAX       ; 00476138
    ADD ESP,0x18                        ; 0047613b
    POP EDI                             ; 0047613e
    POP ESI                             ; 0047613f
    POP EBX                             ; 00476140
    RET                                 ; 00476141

