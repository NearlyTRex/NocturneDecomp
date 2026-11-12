; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_0045df30(CCharacter *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 004514f1
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045df30
        ;   Label: core_doc.cpp_FUN_0045df30
    PUSH ESI                            ; 0045df31
    SUB ESP,0x4                         ; 0045df32
    MOV ESI,dword ptr [ESP + 0x10]      ; 0045df35
    MOV EDX,dword ptr [ESI + 0x25758]   ; 0045df39
    XOR EBX,EBX                         ; 0045df3f
    TEST EDX,EDX                        ; 0045df41
    JZ 0x0045df59                       ; 0045df43
        ;   XREF to: 0045df59 (CONDITIONAL_JUMP)  ; LAB_0045df59
    FLD float ptr [ESI + 0x259b0]       ; 0045df45
    FLD1                                ; 0045df4b
    FCOMPP                              ; 0045df4d
    FNSTSW AX                           ; 0045df4f
    SAHF                                ; 0045df51
    JBE 0x0045df59                      ; 0045df52
        ;   XREF to: 0045df59 (CONDITIONAL_JUMP)  ; LAB_0045df59
    MOV EBX,0x1                         ; 0045df54
    CMP dword ptr [ESI + 0x25758],0x0   ; 0045df59
        ;   Label: LAB_0045df59
    JZ 0x0045dfd9                       ; 0045df60
        ;   XREF to: 0045dfd9 (CONDITIONAL_JUMP)  ; LAB_0045dfd9
    LEA EAX,[ESI + 0x2b4]               ; 0045df66
        ;   Label: LAB_0045df66
    PUSH EAX                            ; 0045df6c
    CALL core_motion.cpp_FUN_005035c0   ; 0045df6d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045df72
    ADD ESP,0x4                         ; 0045df75
    CMP EAX,0x13                        ; 0045df78
    JNZ 0x0045dff6                      ; 0045df7b
        ;   XREF to: 0045dff6 (CONDITIONAL_JUMP)  ; LAB_0045dff6
    MOV EBX,0x1                         ; 0045df81
        ;   Label: LAB_0045df81
    PUSH 0x0                            ; 0045df86
        ;   Label: LAB_0045df86
    PUSH ESI                            ; 0045df88
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0045df89
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 0045df8e
    FLD float ptr [ESP + 0x8]           ; 0045df92
    FLD1                                ; 0045df96
    ADD ESP,0x8                         ; 0045df98
    FCOMPP                              ; 0045df9b
    FNSTSW AX                           ; 0045df9d
    SAHF                                ; 0045df9f
    JBE 0x0045dfc3                      ; 0045dfa0
        ;   XREF to: 0045dfc3 (CONDITIONAL_JUMP)  ; LAB_0045dfc3
    PUSH 0x2                            ; 0045dfa2
    PUSH ESI                            ; 0045dfa4
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0045dfa5
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 0045dfaa
    FLD float ptr [ESP + 0x8]           ; 0045dfae
    FLD1                                ; 0045dfb2
    ADD ESP,0x8                         ; 0045dfb4
    FCOMPP                              ; 0045dfb7
    FNSTSW AX                           ; 0045dfb9
    SAHF                                ; 0045dfbb
    JBE 0x0045dfc3                      ; 0045dfbc
        ;   XREF to: 0045dfc3 (CONDITIONAL_JUMP)  ; LAB_0045dfc3
    MOV EBX,0x1                         ; 0045dfbe
    CMP dword ptr [ESI + 0x2698],0x0    ; 0045dfc3
        ;   Label: LAB_0045dfc3
    JZ 0x0045dfd1                       ; 0045dfca
        ;   XREF to: 0045dfd1 (CONDITIONAL_JUMP)  ; LAB_0045dfd1
    MOV EBX,0x1                         ; 0045dfcc
    MOV EAX,EBX                         ; 0045dfd1
        ;   Label: LAB_0045dfd1
    ADD ESP,0x4                         ; 0045dfd3
    POP ESI                             ; 0045dfd6
    POP EBX                             ; 0045dfd7
    RET                                 ; 0045dfd8
    FLD float ptr [ESI + 0x259b0]       ; 0045dfd9
        ;   Label: LAB_0045dfd9
    FLDZ                                ; 0045dfdf
    FCOMPP                              ; 0045dfe1
    FNSTSW AX                           ; 0045dfe3
    SAHF                                ; 0045dfe5
    JNC 0x0045df66                      ; 0045dfe6
        ;   XREF to: 0045df66 (CONDITIONAL_JUMP)  ; LAB_0045df66
    MOV EBX,0x1                         ; 0045dfec
    JMP 0x0045df66                      ; 0045dff1
        ;   XREF to: 0045df66 (UNCONDITIONAL_JUMP)  ; LAB_0045df66
    CMP EAX,0x15                        ; 0045dff6
        ;   Label: LAB_0045dff6
    JZ 0x0045df81                       ; 0045dff9
        ;   XREF to: 0045df81 (CONDITIONAL_JUMP)  ; LAB_0045df81
    CMP EAX,0x14                        ; 0045dffb
    JZ 0x0045df81                       ; 0045dffe
        ;   XREF to: 0045df81 (CONDITIONAL_JUMP)  ; LAB_0045df81
    CMP EAX,0x16                        ; 0045e000
    JZ 0x0045df81                       ; 0045e003
        ;   XREF to: 0045df81 (CONDITIONAL_JUMP)  ; LAB_0045df81
    JMP 0x0045df86                      ; 0045e009
        ;   XREF to: 0045df86 (UNCONDITIONAL_JUMP)  ; LAB_0045df86

