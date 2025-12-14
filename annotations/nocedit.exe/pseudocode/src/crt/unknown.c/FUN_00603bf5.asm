; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00603bf5()
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   crt_fltused.c_staticInit_FUN_005fde60 at 005fde67
;
; Referenced Globals:
;   undefined4 s_5p_G_c_00658fdc
;   undefined4 s_c_00658fe4
;   undefined4 s_5p_c_00658fec
;   undefined4 s_c_00658ff4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00603bf5
        ;   Label: crt_unknown.c_FUN_00603bf5
    MOV EDX,dword ptr [ESP + 0x10]      ; 00603bf8
    MOV EAX,dword ptr [ESP + 0xc]       ; 00603bfc
    MOV EAX,dword ptr [EAX]             ; 00603c00
    MOV dword ptr [ESP],EAX             ; 00603c02
    MOV EAX,dword ptr [ESP + 0xc]       ; 00603c05
    MOV EAX,dword ptr [EAX + 0x4]       ; 00603c09
    MOV ECX,dword ptr [ESP]             ; 00603c0c
    MOV dword ptr [ESP + 0x4],EAX       ; 00603c0f
    TEST EAX,0x7fffffff                 ; 00603c13
    JNZ 0x00603c29                      ; 00603c18
        ;   XREF to: 00603c29 (CONDITIONAL_JUMP)  ; LAB_00603c29
    TEST ECX,ECX                        ; 00603c1a
    JNZ 0x00603c29                      ; 00603c1c
        ;   XREF to: 00603c29 (CONDITIONAL_JUMP)  ; LAB_00603c29
    FLD double ptr [ESP]                ; 00603c1e
        ;   Label: LAB_00603c1e
    XOR EAX,EAX                         ; 00603c21
    FSTP float ptr [EDX]                ; 00603c23
    ADD ESP,0x8                         ; 00603c25
    RET                                 ; 00603c28
    FLDZ                                ; 00603c29
        ;   Label: LAB_00603c29
    FCOMP double ptr [ESP]              ; 00603c2b
    FNSTSW AX                           ; 00603c2e
    SAHF                                ; 00603c30
    JNC 0x00603c4f                      ; 00603c31
        ;   XREF to: 00603c4f (CONDITIONAL_JUMP)  ; LAB_00603c4f
    FLD double ptr [ESP]                ; 00603c33
    FCOMP double ptr [0x00658fdc]       ; 00603c36 | s_5p_G_c_00658fdc
    FNSTSW AX                           ; 00603c3c
    SAHF                                ; 00603c3e
    JA 0x00603c4f                       ; 00603c3f
        ;   XREF to: 00603c4f (CONDITIONAL_JUMP)  ; LAB_00603c4f
    FLD double ptr [ESP]                ; 00603c41
    FCOMP double ptr [0x00658fe4]       ; 00603c44 | s_c_00658fe4
    FNSTSW AX                           ; 00603c4a
    SAHF                                ; 00603c4c
    JNC 0x00603c1e                      ; 00603c4d
        ;   XREF to: 00603c1e (CONDITIONAL_JUMP)  ; LAB_00603c1e
    FLD double ptr [ESP]                ; 00603c4f
        ;   Label: LAB_00603c4f
    FCOMP double ptr [0x00658fec]       ; 00603c52 | s_5p_c_00658fec
    FNSTSW AX                           ; 00603c58
    SAHF                                ; 00603c5a
    JC 0x00603c6b                       ; 00603c5b
        ;   XREF to: 00603c6b (CONDITIONAL_JUMP)  ; LAB_00603c6b
    FLD double ptr [ESP]                ; 00603c5d
    FCOMP double ptr [0x00658ff4]       ; 00603c60 | s_c_00658ff4
    FNSTSW AX                           ; 00603c66
    SAHF                                ; 00603c68
    JBE 0x00603c1e                      ; 00603c69
        ;   XREF to: 00603c1e (CONDITIONAL_JUMP)  ; LAB_00603c1e
    MOV EAX,0x1                         ; 00603c6b
        ;   Label: LAB_00603c6b
    ADD ESP,0x8                         ; 00603c70
    RET                                 ; 00603c73

