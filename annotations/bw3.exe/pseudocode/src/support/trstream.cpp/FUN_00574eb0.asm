; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_trstream_cpp_FUN_00574eb0(undefined4 param_1,undefined4 *param_2,uint param_3)
;
;
; Called Functions:
;   wincore_winrun.cpp_FUN_00581c70
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00574eb0
        ;   Label: support_trstream.cpp_FUN_00574eb0
    PUSH EBP                            ; 00574eb1
    SUB ESP,0x104                       ; 00574eb2
    MOV EDX,dword ptr [ESP + 0x118]     ; 00574eb8
    CMP EDX,0x1                         ; 00574ebf
    JL 0x00574f63                       ; 00574ec2
        ;   XREF to: 00574f63 (CONDITIONAL_JUMP)  ; LAB_00574f63
    PUSH ESI                            ; 00574ec8
    PUSH EBX                            ; 00574ec9
    MOV EBX,dword ptr [ESP + 0x11c]     ; 00574eca
    MOV EBP,EDX                         ; 00574ed1
    CMP EDX,0x100                       ; 00574ed3
    JLE 0x00574f20                      ; 00574ed9
        ;   XREF to: 00574f20 (CONDITIONAL_JUMP)  ; LAB_00574f20
    MOV ECX,0x100                       ; 00574edb
        ;   Label: LAB_00574edb
    LEA EDI,[ESP + 0x8]                 ; 00574ee0
    MOV ESI,EBX                         ; 00574ee4
    PUSH EDI                            ; 00574ee6
    MOV EAX,ECX                         ; 00574ee7
    SHR ECX,0x2                         ; 00574ee9
    MOVSD.REP ES:EDI,ESI                ; 00574eec
    MOV CL,AL                           ; 00574eee
    AND CL,0x3                          ; 00574ef0
    MOVSB.REP ES:EDI,ESI                ; 00574ef3
    POP EDI                             ; 00574ef5
    SUB EBP,0x100                       ; 00574ef6
    LEA EDI,[ESP + 0x8]                 ; 00574efc
    XOR AH,AH                           ; 00574f00
    PUSH EDI                            ; 00574f02
    ADD EBX,0x100                       ; 00574f03
    MOV byte ptr [ESP + 0x10c],AH       ; 00574f09
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00574f10
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00574f15
    CMP EBP,0x100                       ; 00574f18
    JG 0x00574edb                       ; 00574f1e
        ;   XREF to: 00574edb (CONDITIONAL_JUMP)  ; LAB_00574edb
    TEST EBP,EBP                        ; 00574f20
        ;   Label: LAB_00574f20
    JLE 0x00574f4f                      ; 00574f22
        ;   XREF to: 00574f4f (CONDITIONAL_JUMP)  ; LAB_00574f4f
    LEA EDI,[ESP + 0x8]                 ; 00574f24
    MOV ECX,EBP                         ; 00574f28
    MOV ESI,EBX                         ; 00574f2a
    PUSH EDI                            ; 00574f2c
    MOV EAX,ECX                         ; 00574f2d
    SHR ECX,0x2                         ; 00574f2f
    MOVSD.REP ES:EDI,ESI                ; 00574f32
    MOV CL,AL                           ; 00574f34
    AND CL,0x3                          ; 00574f36
    MOVSB.REP ES:EDI,ESI                ; 00574f39
    POP EDI                             ; 00574f3b
    LEA EBX,[ESP + 0x8]                 ; 00574f3c
    XOR DL,DL                           ; 00574f40
    PUSH EBX                            ; 00574f42
    MOV byte ptr [ESP + EBP*0x1 + 0xc],DL ; 00574f43
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00574f47
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00574f4c
    MOV EDI,dword ptr [ESP + 0x120]     ; 00574f4f
        ;   Label: LAB_00574f4f
    POP EBX                             ; 00574f56
    POP ESI                             ; 00574f57
    MOV EAX,EDI                         ; 00574f58
    ADD ESP,0x104                       ; 00574f5a
    POP EBP                             ; 00574f60
    POP EDI                             ; 00574f61
    RET                                 ; 00574f62
    MOV EDI,EDX                         ; 00574f63
        ;   Label: LAB_00574f63
    MOV EAX,EDI                         ; 00574f65
    ADD ESP,0x104                       ; 00574f67
    POP EBP                             ; 00574f6d
    POP EDI                             ; 00574f6e
    RET                                 ; 00574f6f

