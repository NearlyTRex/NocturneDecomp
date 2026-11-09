; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_FUN_004e7d50(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_marquee.cpp_FUN_004e7e80 at 004e7ea5
;
; Called Functions:
;   core_course.cpp_FUN_00438c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7d50
        ;   Label: core_marquee.cpp_FUN_004e7d50
    PUSH ESI                            ; 004e7d51
    PUSH EDI                            ; 004e7d52
    SUB ESP,0x20                        ; 004e7d53
    MOV EBX,dword ptr [ESP + 0x30]      ; 004e7d56
    MOV dword ptr [EBX + 0x2e4],0x461c3f9a ; 004e7d5a
    MOV dword ptr [EBX + 0x2e8],0x461c3f9a ; 004e7d64
    MOV dword ptr [EBX + 0x2ec],0xc61c3f9a ; 004e7d6e
    MOV dword ptr [EBX + 0x2f0],0xc61c3f9a ; 004e7d78
    MOV dword ptr [EBX + 0x2f4],0xc61c3f9a ; 004e7d82
    LEA EDI,[EBX + 0x300]               ; 004e7d8c
    MOV dword ptr [EBX + 0x2e0],0x461c3f9a ; 004e7d92
    XOR ESI,ESI                         ; 004e7d9c
    MOV EAX,dword ptr [EDI]             ; 004e7d9e
    CMP ESI,EAX                         ; 004e7da0
    JL 0x004e7dab                       ; 004e7da2
        ;   XREF to: 004e7dab (CONDITIONAL_JUMP)  ; LAB_004e7dab
    ADD ESP,0x20                        ; 004e7da4
    POP EDI                             ; 004e7da7
    POP ESI                             ; 004e7da8
    POP EBX                             ; 004e7da9
    RET                                 ; 004e7daa
    MOV EAX,ESP                         ; 004e7dab
        ;   Label: LAB_004e7dab
    MOV dword ptr [ESP + 0x1c],ESI      ; 004e7dad
    PUSH EAX                            ; 004e7db1
    LEA EAX,[ESP + 0x10]                ; 004e7db2
    FILD dword ptr [ESP + 0x20]         ; 004e7db6
    PUSH EAX                            ; 004e7dba
    FSTP float ptr [ESP + 0x20]         ; 004e7dbb
    PUSH dword ptr [ESP + 0x20]         ; 004e7dbf
    PUSH EDI                            ; 004e7dc3
    CALL core_course.cpp_FUN_00438c40   ; 004e7dc4
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00438c40(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 004e7dc9
    FLD float ptr [ESP + 0xc]           ; 004e7dcc
    FCOMP float ptr [EBX + 0x2e0]       ; 004e7dd0
    FNSTSW AX                           ; 004e7dd6
    SAHF                                ; 004e7dd8
    JNC 0x004e7de5                      ; 004e7dd9
        ;   XREF to: 004e7de5 (CONDITIONAL_JUMP)  ; LAB_004e7de5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e7ddb
    MOV dword ptr [EBX + 0x2e0],EAX     ; 004e7ddf
    FLD float ptr [ESP + 0xc]           ; 004e7de5
        ;   Label: LAB_004e7de5
    FCOMP float ptr [EBX + 0x2ec]       ; 004e7de9
    FNSTSW AX                           ; 004e7def
    SAHF                                ; 004e7df1
    JBE 0x004e7dfe                      ; 004e7df2
        ;   XREF to: 004e7dfe (CONDITIONAL_JUMP)  ; LAB_004e7dfe
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e7df4
    MOV dword ptr [EBX + 0x2ec],EAX     ; 004e7df8
    FLD float ptr [ESP + 0x10]          ; 004e7dfe
        ;   Label: LAB_004e7dfe
    FCOMP float ptr [EBX + 0x2e4]       ; 004e7e02
    FNSTSW AX                           ; 004e7e08
    SAHF                                ; 004e7e0a
    JNC 0x004e7e17                      ; 004e7e0b
        ;   XREF to: 004e7e17 (CONDITIONAL_JUMP)  ; LAB_004e7e17
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e7e0d
    MOV dword ptr [EBX + 0x2e4],EAX     ; 004e7e11
    FLD float ptr [ESP + 0x10]          ; 004e7e17
        ;   Label: LAB_004e7e17
    FCOMP float ptr [EBX + 0x2f0]       ; 004e7e1b
    FNSTSW AX                           ; 004e7e21
    SAHF                                ; 004e7e23
    JBE 0x004e7e30                      ; 004e7e24
        ;   XREF to: 004e7e30 (CONDITIONAL_JUMP)  ; LAB_004e7e30
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e7e26
    MOV dword ptr [EBX + 0x2f0],EAX     ; 004e7e2a
    FLD float ptr [ESP + 0x14]          ; 004e7e30
        ;   Label: LAB_004e7e30
    FCOMP float ptr [EBX + 0x2e8]       ; 004e7e34
    FNSTSW AX                           ; 004e7e3a
    SAHF                                ; 004e7e3c
    JNC 0x004e7e49                      ; 004e7e3d
        ;   XREF to: 004e7e49 (CONDITIONAL_JUMP)  ; LAB_004e7e49
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7e3f
    MOV dword ptr [EBX + 0x2e8],EAX     ; 004e7e43
    FLD float ptr [ESP + 0x14]          ; 004e7e49
        ;   Label: LAB_004e7e49
    FCOMP float ptr [EBX + 0x2f4]       ; 004e7e4d
    FNSTSW AX                           ; 004e7e53
    SAHF                                ; 004e7e55
    JBE 0x004e7e62                      ; 004e7e56
        ;   XREF to: 004e7e62 (CONDITIONAL_JUMP)  ; LAB_004e7e62
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e7e58
    MOV dword ptr [EBX + 0x2f4],EAX     ; 004e7e5c
    INC ESI                             ; 004e7e62
        ;   Label: LAB_004e7e62
    MOV EAX,dword ptr [EDI]             ; 004e7e63
    CMP ESI,EAX                         ; 004e7e65
    JL 0x004e7dab                       ; 004e7e67
        ;   XREF to: 004e7dab (CONDITIONAL_JUMP)  ; LAB_004e7dab
    ADD ESP,0x20                        ; 004e7e6d
    POP EDI                             ; 004e7e70
    POP ESI                             ; 004e7e71
    POP EBX                             ; 004e7e72
    RET                                 ; 004e7e73

