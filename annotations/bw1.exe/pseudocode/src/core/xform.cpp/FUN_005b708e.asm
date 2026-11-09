; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b708e(float param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa15c
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 005b708e
        ;   Label: core_xform.cpp_FUN_005b708e
    PUSH EDI                            ; 005b7090
    PUSH EBP                            ; 005b7091
    SUB ESP,0x30                        ; 005b7092
    MOV EAX,ESI                         ; 005b7095
    FLD float ptr [ESP + 0x3c]          ; 005b7097
    FMUL float ptr [0x005fa15c]         ; 005b709b | DAT_005fa15c
    MOV EDX,0x3f800000                  ; 005b70a1
    MOV EBP,0xbf800000                  ; 005b70a6
    MOV EDI,ESI                         ; 005b70ab
    XOR ECX,ECX                         ; 005b70ad
    MOV ESI,ESP                         ; 005b70af
    MOV dword ptr [ESP],EDX             ; 005b70b1
    MOV dword ptr [ESP + 0x4],ECX       ; 005b70b4
    MOV dword ptr [ESP + 0x8],ECX       ; 005b70b8
    MOV dword ptr [ESP + 0xc],ECX       ; 005b70bc
    MOV dword ptr [ESP + 0x10],ECX      ; 005b70c0
    MOV dword ptr [ESP + 0x14],EBP      ; 005b70c4
    MOV dword ptr [ESP + 0x18],ECX      ; 005b70c8
    MOV dword ptr [ESP + 0x20],ECX      ; 005b70cc
    MOV dword ptr [ESP + 0x24],ECX      ; 005b70d0
    MOV dword ptr [ESP + 0x28],EDX      ; 005b70d4
    MOV dword ptr [ESP + 0x2c],ECX      ; 005b70d8
    MOV ECX,0xc                         ; 005b70dc
    FSTP float ptr [ESP + 0x1c]         ; 005b70e1
    MOVSD.REP ES:EDI,ESI                ; 005b70e5
    ADD ESP,0x30                        ; 005b70e7
    POP EBP                             ; 005b70ea
    POP EDI                             ; 005b70eb
    RET                                 ; 005b70ec

