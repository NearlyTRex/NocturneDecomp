; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00435060(int param_1,undefined4 *param_2,uint param_3)
;
;
; Called Functions:
;   FUN_00435300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435060
        ;   Label: FUN_00435060
    PUSH ESI                            ; 00435061
    PUSH EDI                            ; 00435062
    PUSH EBP                            ; 00435063
    SUB ESP,0x8                         ; 00435064
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00435067
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043506b
    CMP dword ptr [EBX + 0x10],0x0      ; 0043506f
    JZ 0x004350e0                       ; 00435073
        ;   XREF to: 004350e0 (CONDITIONAL_JUMP)  ; LAB_004350e0
    XOR ECX,ECX                         ; 00435075
    MOV EAX,dword ptr [ESP + 0x20]      ; 00435077
    MOV dword ptr [ESP],ECX             ; 0043507b
    MOV dword ptr [ESP + 0x4],EAX       ; 0043507e
    TEST EBP,EBP                        ; 00435082
    JLE 0x004350d5                      ; 00435084
        ;   XREF to: 004350d5 (CONDITIONAL_JUMP)  ; LAB_004350d5
    MOV ESI,dword ptr [EBX + 0x18]      ; 00435086
        ;   Label: LAB_00435086
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00435089
    CMP EAX,ESI                         ; 0043508c
    JGE 0x004350d1                      ; 0043508e
        ;   XREF to: 004350d1 (CONDITIONAL_JUMP)  ; LAB_004350d1
    MOV EDX,ESI                         ; 00435090
    SUB EDX,EAX                         ; 00435092
    CMP EDX,EBP                         ; 00435094
    JLE 0x0043509a                      ; 00435096
        ;   XREF to: 0043509a (CONDITIONAL_JUMP)  ; LAB_0043509a
    MOV EDX,EBP                         ; 00435098
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043509a
        ;   Label: LAB_0043509a
    MOV ESI,dword ptr [EBX + 0x10]      ; 0043509e
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004350a1
    MOV ECX,EDX                         ; 004350a4
    ADD ESI,EAX                         ; 004350a6
    SUB EBP,EDX                         ; 004350a8
    PUSH EDI                            ; 004350aa
    MOV EAX,ECX                         ; 004350ab
    SHR ECX,0x2                         ; 004350ad
    MOVSD.REP ES:EDI,ESI                ; 004350b0
    MOV CL,AL                           ; 004350b2
    AND CL,0x3                          ; 004350b4
    MOVSB.REP ES:EDI,ESI                ; 004350b7
    POP EDI                             ; 004350b9
    LEA ESI,[EDI + EDX*0x1]             ; 004350ba
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004350bd
    MOV EDI,dword ptr [ESP]             ; 004350c0
    MOV dword ptr [ESP + 0x4],ESI       ; 004350c3
    ADD ECX,EDX                         ; 004350c7
    ADD EDI,EDX                         ; 004350c9
    MOV dword ptr [EBX + 0x1c],ECX      ; 004350cb
    MOV dword ptr [ESP],EDI             ; 004350ce
    TEST EBP,EBP                        ; 004350d1
        ;   Label: LAB_004350d1
    JG 0x004350e7                       ; 004350d3
        ;   XREF to: 004350e7 (CONDITIONAL_JUMP)  ; LAB_004350e7
    MOV EAX,dword ptr [ESP]             ; 004350d5
        ;   Label: LAB_004350d5
    ADD ESP,0x8                         ; 004350d8
        ;   Label: LAB_004350d8
    POP EBP                             ; 004350db
    POP EDI                             ; 004350dc
    POP ESI                             ; 004350dd
    POP EBX                             ; 004350de
    RET                                 ; 004350df
    MOV EAX,0xfffffffe                  ; 004350e0
        ;   Label: LAB_004350e0
    JMP 0x004350d8                      ; 004350e5
        ;   XREF to: 004350d8 (UNCONDITIONAL_JUMP)  ; LAB_004350d8
    PUSH EBX                            ; 004350e7
        ;   Label: LAB_004350e7
    CALL FUN_00435300                   ; 004350e8
        ;   XREF to: 00435300 (UNCONDITIONAL_CALL)  ; undefined FUN_00435300()
    ADD ESP,0x4                         ; 004350ed
    CMP EAX,-0x1                        ; 004350f0
    JL 0x004350d8                       ; 004350f3
        ;   XREF to: 004350d8 (CONDITIONAL_JUMP)  ; LAB_004350d8
    TEST EAX,EAX                        ; 004350f5
    JL 0x00435108                       ; 004350f7
        ;   XREF to: 00435108 (CONDITIONAL_JUMP)  ; LAB_00435108
    TEST EBP,EBP                        ; 004350f9
    JG 0x00435086                       ; 004350fb
        ;   XREF to: 00435086 (CONDITIONAL_JUMP)  ; LAB_00435086
    MOV EAX,dword ptr [ESP]             ; 004350fd
    ADD ESP,0x8                         ; 00435100
    POP EBP                             ; 00435103
    POP EDI                             ; 00435104
    POP ESI                             ; 00435105
    POP EBX                             ; 00435106
    RET                                 ; 00435107
    CMP dword ptr [ESP],0x0             ; 00435108
        ;   Label: LAB_00435108
    JG 0x004350d5                       ; 0043510c
        ;   XREF to: 004350d5 (CONDITIONAL_JUMP)  ; LAB_004350d5
    MOV EAX,0xffffffff                  ; 0043510e
    ADD ESP,0x8                         ; 00435113
    POP EBP                             ; 00435116
    POP EDI                             ; 00435117
    POP ESI                             ; 00435118
    POP EBX                             ; 00435119
    RET                                 ; 0043511a

