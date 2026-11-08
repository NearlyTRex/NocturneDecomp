; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e6290(void)
;
;
; XREF[1]:
;   FUN_004e62e0 at 004e62ef
;
; Referenced Globals:
;   undefined4 DAT_01cf69f4
;   undefined4 DAT_01cf69f8
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01cf69f4]      ; 004e6290 | DAT_01cf69f4
        ;   Label: FUN_004e6290
    LEA EAX,[ECX*0x4 + 0x0]             ; 004e6296
    ADD EAX,ECX                         ; 004e629d
    SHL EAX,0x3                         ; 004e629f
    INC ECX                             ; 004e62a2
    ADD EAX,0x1cf69fc                   ; 004e62a3
    CMP ECX,0x20                        ; 004e62a8
    JL 0x004e62af                       ; 004e62ab
        ;   XREF to: 004e62af (CONDITIONAL_JUMP)  ; LAB_004e62af
    XOR ECX,ECX                         ; 004e62ad
    MOV EDX,dword ptr [0x01cf69f8]      ; 004e62af | DAT_01cf69f8
        ;   Label: LAB_004e62af
    CMP EDX,0x20                        ; 004e62b5
    JL 0x004e62c1                       ; 004e62b8
        ;   XREF to: 004e62c1 (CONDITIONAL_JUMP)  ; LAB_004e62c1
    MOV dword ptr [0x01cf69f4],ECX      ; 004e62ba | DAT_01cf69f4
    RET                                 ; 004e62c0
    PUSH EBX                            ; 004e62c1
        ;   Label: LAB_004e62c1
    LEA EBX,[EDX + 0x1]                 ; 004e62c2
    MOV dword ptr [0x01cf69f8],EBX      ; 004e62c5 | DAT_01cf69f8
    POP EBX                             ; 004e62cb
    MOV dword ptr [0x01cf69f4],ECX      ; 004e62cc | DAT_01cf69f4
    RET                                 ; 004e62d2

