; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLodFace * __cdecl shape_meshlod_cpp_CLodFace_copy2_FUN_0051efe0(CLodFace *destination,CLodFace *source)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   destination
; CLodFace *       Stack[0x8]:4   source
;
; Called Functions:
;   crt_memory.c___arr_op_FUN_006020c2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051efe0
        ;   Label: shape_meshlod.cpp_CLodFace_copy2_FUN_0051efe0
    PUSH ESI                            ; 0051efe1
    PUSH EDI                            ; 0051efe2
    PUSH EBP                            ; 0051efe3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051efe4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051efe8
    MOV EDI,EBX                         ; 0051efec
    MOV ESI,EBP                         ; 0051efee
    JMP 0x00604e16                      ; 0051eff0
        ;   XREF to: 00604e16 (UNCONDITIONAL_JUMP)  ; LAB_00604e16
    LEA ESI,[EBP + 0x10]                ; 0051eff7
        ;   Label: LAB_0051eff7
    MOVSD ES:EDI,ESI                    ; 0051effa
    MOVSD ES:EDI,ESI                    ; 0051effb
    MOVSD ES:EDI,ESI                    ; 0051effc
    MOV ECX,0x6                         ; 0051effd
    LEA EDI,[EBX + 0x1c]                ; 0051f002
    LEA ESI,[EBP + 0x1c]                ; 0051f005
    MOVSD.REP ES:EDI,ESI                ; 0051f008
    LEA EDI,[EBX + 0x34]                ; 0051f00a
    LEA ESI,[EBP + 0x34]                ; 0051f00d
    MOVSD ES:EDI,ESI                    ; 0051f010
    MOVSD ES:EDI,ESI                    ; 0051f011
    MOVSD ES:EDI,ESI                    ; 0051f012
    MOV EAX,dword ptr [EBP + 0x40]      ; 0051f013
    LEA EDX,[EBP + 0x44]                ; 0051f016
    MOV dword ptr [EBX + 0x40],EAX      ; 0051f019
    LEA EAX,[EBX + 0x44]                ; 0051f01c
    CMP EAX,EDX                         ; 0051f01f
    JZ 0x0051f033                       ; 0051f021
        ;   XREF to: 0051f033 (CONDITIONAL_JUMP)  ; LAB_0051f033
    MOV ECX,dword ptr [EDX]             ; 0051f023
    MOV dword ptr [EAX],ECX             ; 0051f025
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051f027
    MOV dword ptr [EAX + 0x4],ECX       ; 0051f02a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051f02d
    MOV dword ptr [EAX + 0x8],ECX       ; 0051f030
    PUSH 0x410360                       ; 0051f033
        ;   Label: LAB_0051f033
    PUSH 0xc                            ; 0051f038
    PUSH 0x3                            ; 0051f03a
    LEA EAX,[EBP + 0x54]                ; 0051f03c
    PUSH EAX                            ; 0051f03f
    LEA EAX,[EBX + 0x54]                ; 0051f040
    FLD float ptr [EBP + 0x50]          ; 0051f043
    PUSH EAX                            ; 0051f046
    FSTP float ptr [EBX + 0x50]         ; 0051f047
    CALL crt_memory.c___arr_op_FUN_006020c2 ; 0051f04a
        ;   XREF to: 006020c2 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arr_op_FUN_006020c2(void * dest, void * source, int count, int element_size, ...)
    LEA EDI,[EBX + 0x78]                ; 0051f04f
    LEA ESI,[EBP + 0x78]                ; 0051f052
    MOVSD ES:EDI,ESI                    ; 0051f055
    MOVSD ES:EDI,ESI                    ; 0051f056
    MOVSD ES:EDI,ESI                    ; 0051f057
    MOV EAX,dword ptr [EBP + 0x84]      ; 0051f058
    MOV dword ptr [EBX + 0x84],EAX      ; 0051f05e
    MOV EAX,dword ptr [EBP + 0x88]      ; 0051f064
    ADD ESP,0x14                        ; 0051f06a
    MOV dword ptr [EBX + 0x88],EAX      ; 0051f06d
    MOV EAX,EBX                         ; 0051f073
    POP EBP                             ; 0051f075
    POP EDI                             ; 0051f076
    POP ESI                             ; 0051f077
    POP EBX                             ; 0051f078
    RET                                 ; 0051f079
    MOV ECX,dword ptr [ESI]             ; 00604e16
        ;   Label: LAB_00604e16
    MOV dword ptr [EDI],ECX             ; 00604e18
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604e1a
    MOV dword ptr [EDI + 0x4],ECX       ; 00604e1d
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604e20
    MOV dword ptr [EDI + 0x8],ECX       ; 00604e23
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604e26
    MOV dword ptr [EDI + 0xc],ECX       ; 00604e29
    ADD ESI,0x10                        ; 00604e2c
    ADD EDI,0x10                        ; 00604e2f
    LEA EDI,[EBX + 0x10]                ; 00604e32
    JMP 0x0051eff7                      ; 00604e35
        ;   XREF to: 0051eff7 (UNCONDITIONAL_JUMP)  ; LAB_0051eff7

