; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a9f30(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004aa810 at 004aa95c
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005c112b
;   TerminatedCString s_Out_of_memory_005c1140
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_0040d320
;   FUN_0040d460
;   FUN_0040dbb0
;   FUN_004e4330
;   FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9f30
        ;   Label: FUN_004a9f30
    PUSH ESI                            ; 004a9f31
    PUSH EDI                            ; 004a9f32
    PUSH EBP                            ; 004a9f33
    SUB ESP,0x14                        ; 004a9f34
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a9f37
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004a9f3b
    PUSH EDX                            ; 004a9f3e
    MOV ECX,dword ptr [EBX + 0x68]      ; 004a9f3f
    PUSH ECX                            ; 004a9f42
    LEA EAX,[EBX + 0x4]                 ; 004a9f43
    PUSH EAX                            ; 004a9f46
    LEA EAX,[EBX + 0x70]                ; 004a9f47
    PUSH EAX                            ; 004a9f4a
    CALL FUN_0040d460                   ; 004a9f4b
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004a9f50
    IMUL EAX,dword ptr [EBX + 0x80]     ; 004a9f53
    ADD ESP,0x10                        ; 004a9f5a
    PUSH EAX                            ; 004a9f5d
    MOV EDI,dword ptr [EBX + 0x84]      ; 004a9f5e
    PUSH EDI                            ; 004a9f64
    CALL FUN_005a3e50                   ; 004a9f65
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e50()
    ADD ESP,0x8                         ; 004a9f6a
    MOV dword ptr [EBX + 0x84],EAX      ; 004a9f6d
    TEST EAX,EAX                        ; 004a9f73
    JZ 0x004aa088                       ; 004a9f75
        ;   XREF to: 004aa088 (CONDITIONAL_JUMP)  ; LAB_004aa088
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004a9f7b
        ;   Label: LAB_004a9f7b
    MOV ECX,dword ptr [EBX + 0x80]      ; 004a9f7e
    IMUL ECX,EAX                        ; 004a9f84
    MOV ESI,dword ptr [EBX + 0x74]      ; 004a9f87
    MOV EDI,dword ptr [EBX + 0x84]      ; 004a9f8a
    PUSH EDI                            ; 004a9f90
    MOV EAX,ECX                         ; 004a9f91
    SHR ECX,0x2                         ; 004a9f93
    MOVSD.REP ES:EDI,ESI                ; 004a9f96
    MOV CL,AL                           ; 004a9f98
    AND CL,0x3                          ; 004a9f9a
    MOVSB.REP ES:EDI,ESI                ; 004a9f9d
    POP EDI                             ; 004a9f9f
    MOV EAX,dword ptr [EBX + 0x68]      ; 004a9fa0
    MOV EDX,EAX                         ; 004a9fa3
    SAR EDX,0x1f                        ; 004a9fa5
    SUB EAX,EDX                         ; 004a9fa8
    SAR EAX,0x1                         ; 004a9faa
    MOV ECX,EAX                         ; 004a9fac
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004a9fae
    MOV EDX,EAX                         ; 004a9fb1
    SAR EDX,0x1f                        ; 004a9fb3
    SUB EAX,EDX                         ; 004a9fb6
    SAR EAX,0x1                         ; 004a9fb8
    CMP ECX,0x1                         ; 004a9fba
    JGE 0x004a9fc4                      ; 004a9fbd
        ;   XREF to: 004a9fc4 (CONDITIONAL_JUMP)  ; LAB_004a9fc4
    MOV ECX,0x1                         ; 004a9fbf
    CMP EAX,0x1                         ; 004a9fc4
        ;   Label: LAB_004a9fc4
    JGE 0x004a9fce                      ; 004a9fc7
        ;   XREF to: 004a9fce (CONDITIONAL_JUMP)  ; LAB_004a9fce
    MOV EAX,0x1                         ; 004a9fc9
    PUSH EAX                            ; 004a9fce
        ;   Label: LAB_004a9fce
    PUSH ECX                            ; 004a9fcf
    LEA ESI,[EBX + 0x88]                ; 004a9fd0
    PUSH ESI                            ; 004a9fd6
    CALL FUN_0040d320                   ; 004a9fd7
        ;   XREF to: 0040d320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d320()
    ADD ESP,0xc                         ; 004a9fdc
    PUSH 0x0                            ; 004a9fdf
    PUSH ESI                            ; 004a9fe1
    CALL FUN_0040dbb0                   ; 004a9fe2
        ;   XREF to: 0040dbb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dbb0()
    ADD ESP,0x8                         ; 004a9fe7
    MOV ESI,dword ptr [EBX + 0x9c]      ; 004a9fea
    XOR ECX,ECX                         ; 004a9ff0
    TEST ESI,ESI                        ; 004a9ff2
    JLE 0x004aa080                      ; 004a9ff4
        ;   XREF to: 004aa080 (CONDITIONAL_JUMP)  ; LAB_004aa080
    LEA EDX,[EBX + 0xa0]                ; 004a9ffa
    MOV ESI,dword ptr [EDX + 0x64]      ; 004aa000
        ;   Label: LAB_004aa000
    MOV EDI,dword ptr [EDX + 0x6c]      ; 004aa003
    MOV EAX,dword ptr [EDX + 0x68]      ; 004aa006
    MOV EBP,dword ptr [EDX + 0x70]      ; 004aa009
    SUB ESI,EDI                         ; 004aa00c
    SUB EAX,EBP                         ; 004aa00e
    IMUL ESI,EAX                        ; 004aa010
    FLD float ptr [EDX + 0x74]          ; 004aa013
    FSUB float ptr [EDX + 0x7c]         ; 004aa016
    FLD float ptr [EDX + 0x78]          ; 004aa019
    FSUB float ptr [EDX + 0x80]         ; 004aa01c
    FMULP                               ; 004aa022
    FABS                                ; 004aa024
    MOV dword ptr [ESP + 0x10],ESI      ; 004aa026
    FILD dword ptr [ESP + 0x10]         ; 004aa02a
    FABS                                ; 004aa02e
    FDIVRP                              ; 004aa030
    MOV ESI,dword ptr [EBX + 0x98]      ; 004aa032
    MOV EAX,dword ptr [EBX + 0x94]      ; 004aa038
    IMUL EAX,ESI                        ; 004aa03e
    MOV EDI,dword ptr [EBX + 0x6c]      ; 004aa041
    MOV dword ptr [ESP + 0x10],EAX      ; 004aa044
    MOV EAX,dword ptr [EBX + 0x68]      ; 004aa048
    IMUL EAX,EDI                        ; 004aa04b
    FILD dword ptr [ESP + 0x10]         ; 004aa04e
    MOV dword ptr [ESP + 0x10],EAX      ; 004aa052
    FMULP                               ; 004aa056
    FILD dword ptr [ESP + 0x10]         ; 004aa058
    FDIVP                               ; 004aa05c
    FSQRT                               ; 004aa05e
    INC ECX                             ; 004aa060
    FSTP float ptr [EDX + 0x84]         ; 004aa061
    MOV EBP,dword ptr [EBX + 0x9c]      ; 004aa067
    ADD EDX,0x88                        ; 004aa06d
    CMP ECX,EBP                         ; 004aa073
    JL 0x004aa000                       ; 004aa075
        ;   XREF to: 004aa000 (CONDITIONAL_JUMP)  ; LAB_004aa000
    LEA EAX,[EAX]                       ; 004aa077
    LEA EDX,[EDX]                       ; 004aa07d
    ADD ESP,0x14                        ; 004aa080
        ;   Label: LAB_004aa080
    POP EBP                             ; 004aa083
    POP EDI                             ; 004aa084
    POP ESI                             ; 004aa085
    POP EBX                             ; 004aa086
    RET                                 ; 004aa087
    MOV EAX,0x5c112b                    ; 004aa088 | = "..\\core\\fldnotes.cpp"
        ;   Label: LAB_004aa088
    MOV EDX,0x77a                       ; 004aa08d
    PUSH 0x5c1140                       ; 004aa092 | = "Out of memory!"
    MOV [0x01d71de0],EAX                ; 004aa097 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004aa09c | DAT_01d71de4
    CALL FUN_004e4330                   ; 004aa0a2
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004aa0a7
    JMP 0x004a9f7b                      ; 004aa0aa
        ;   XREF to: 004a9f7b (UNCONDITIONAL_JUMP)  ; LAB_004a9f7b

