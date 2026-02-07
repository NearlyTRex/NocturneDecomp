; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBloodPool * __cdecl core_gore_cpp_FUN_004edde0(void)
;
;
; XREF[1]:
;   core_gore.cpp_CGore_FUN_004ede30 at 004ede3f
;
; Referenced Globals:
;   undefined4 DAT_02da871c
;   undefined4 DAT_02da8720
;   CBloodPool[32] DAT_02da8724
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02da871c]      ; 004edde0 | DAT_02da871c
        ;   Label: core_gore.cpp_FUN_004edde0
    LEA EAX,[ECX*0x4 + 0x0]             ; 004edde6
    ADD EAX,ECX                         ; 004edded
    SHL EAX,0x3                         ; 004eddef
    INC ECX                             ; 004eddf2
    ADD EAX,0x2da8724                   ; 004eddf3 | DAT_02da8724
    CMP ECX,0x20                        ; 004eddf8
    JL 0x004eddff                       ; 004eddfb
        ;   XREF to: 004eddff (CONDITIONAL_JUMP)  ; LAB_004eddff
    XOR ECX,ECX                         ; 004eddfd
    MOV EDX,dword ptr [0x02da8720]      ; 004eddff | DAT_02da8720
        ;   Label: LAB_004eddff
    CMP EDX,0x20                        ; 004ede05
    JL 0x004ede11                       ; 004ede08
        ;   XREF to: 004ede11 (CONDITIONAL_JUMP)  ; LAB_004ede11
    MOV dword ptr [0x02da871c],ECX      ; 004ede0a | DAT_02da871c
    RET                                 ; 004ede10
    PUSH EBX                            ; 004ede11
        ;   Label: LAB_004ede11
    LEA EBX,[EDX + 0x1]                 ; 004ede12
    MOV dword ptr [0x02da8720],EBX      ; 004ede15 | DAT_02da8720
    POP EBX                             ; 004ede1b
    MOV dword ptr [0x02da871c],ECX      ; 004ede1c | DAT_02da871c
    RET                                 ; 004ede22

