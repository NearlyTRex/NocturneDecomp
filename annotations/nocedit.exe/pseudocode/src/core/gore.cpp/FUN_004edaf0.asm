; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown CBloodSplat * core_gore_cpp_FUN_004edaf0(void)
;
;
; XREF[2]:
;   core_gore.cpp_FUN_004edb40 at 004edb4f
;   core_gore.cpp_FUN_004edb70 at 004edb80
;
; Referenced Globals:
;   undefined4 DAT_02d873d4
;   undefined4 DAT_02d873d8
;   CBloodSplat[2000] DAT_02d873dc
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02d873d4]      ; 004edaf0 | DAT_02d873d4
        ;   Label: core_gore.cpp_FUN_004edaf0
    MOV EAX,ECX                         ; 004edaf6
    SHL EAX,0x4                         ; 004edaf8
    ADD EAX,ECX                         ; 004edafb
    SHL EAX,0x2                         ; 004edafd
    INC ECX                             ; 004edb00
    ADD EAX,0x2d873dc                   ; 004edb01 | DAT_02d873dc
    CMP ECX,0x7d0                       ; 004edb06
    JL 0x004edb10                       ; 004edb0c
        ;   XREF to: 004edb10 (CONDITIONAL_JUMP)  ; LAB_004edb10
    XOR ECX,ECX                         ; 004edb0e
    MOV EDX,dword ptr [0x02d873d8]      ; 004edb10 | DAT_02d873d8
        ;   Label: LAB_004edb10
    CMP EDX,0x7d0                       ; 004edb16
    JL 0x004edb25                       ; 004edb1c
        ;   XREF to: 004edb25 (CONDITIONAL_JUMP)  ; LAB_004edb25
    MOV dword ptr [0x02d873d4],ECX      ; 004edb1e | DAT_02d873d4
    RET                                 ; 004edb24
    PUSH EBX                            ; 004edb25
        ;   Label: LAB_004edb25
    LEA EBX,[EDX + 0x1]                 ; 004edb26
    MOV dword ptr [0x02d873d8],EBX      ; 004edb29 | DAT_02d873d8
    POP EBX                             ; 004edb2f
    MOV dword ptr [0x02d873d4],ECX      ; 004edb30 | DAT_02d873d4
    RET                                 ; 004edb36

