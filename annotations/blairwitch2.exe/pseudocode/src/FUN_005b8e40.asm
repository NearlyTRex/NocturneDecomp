; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b8e40(int param_1)
;
;
; XREF[13]:
;   FUN_00460c70 at 00460caa
;   FUN_0047c0f0 at 0047c56f
;   FUN_00484f20 at 00485045
;   FUN_00489670 at 00489824
;   FUN_004a41b0 at 004a4503
;   FUN_004b90d0 at 004b91f4
;   FUN_004dfea0 at 004dfeab
;   FUN_004e45e0 at 004e463c
;   FUN_00500720 at 005008cb
;   FUN_0051b3c0 at 0051b3ed
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b8e40
        ;   Label: FUN_005b8e40
    CMP EAX,0x61                        ; 005b8e44
    JL 0x005b8e51                       ; 005b8e47
        ;   XREF to: 005b8e51 (CONDITIONAL_JUMP)  ; LAB_005b8e51
    CMP EAX,0x7a                        ; 005b8e49
    JG 0x005b8e51                       ; 005b8e4c
        ;   XREF to: 005b8e51 (CONDITIONAL_JUMP)  ; LAB_005b8e51
    SUB EAX,0x20                        ; 005b8e4e
    RET                                 ; 005b8e51
        ;   Label: LAB_005b8e51

