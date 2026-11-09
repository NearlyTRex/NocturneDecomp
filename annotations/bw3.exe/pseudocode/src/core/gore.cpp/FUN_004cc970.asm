; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004cc970(undefined4 param_1,undefined4 *param_2,int *param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   core_gore.cpp_FUN_004ccbe0 at 004cced2
;   core_gore.cpp_FUN_004cd690 at 004cd8ed
;   core_gore.cpp_FUN_004cdd30 at 004cdf3a
;   core_gore.cpp_FUN_004ce310 at 004ce4c4
;
; Referenced Globals:
;   void* switchdataD_004cc960 = 004cc98d
;   undefined4 DAT_005c4621
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_boneguy.cpp_FUN_00417240
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc970
        ;   Label: core_gore.cpp_FUN_004cc970
    PUSH EBP                            ; 004cc971
    SUB ESP,0x34                        ; 004cc972
    MOV EAX,dword ptr [ESP + 0x40]      ; 004cc975
    MOV EBP,dword ptr [ESP + 0x48]      ; 004cc979
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004cc97d
    CMP EAX,0x3                         ; 004cc981
    JA 0x004cc98d                       ; 004cc984
        ;   XREF to: 004cc98d (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EAX*0x4 + 0x4cc960]  ; 004cc986 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x44]      ; 004cc98d
        ;   Label: caseD_0
    MOV dword ptr [EAX],0x2000          ; 004cc991
    MOV dword ptr [EBP],0x0             ; 004cc997
    MOV dword ptr [EBX],0x0             ; 004cc99e
    ADD ESP,0x34                        ; 004cc9a4
    POP EBP                             ; 004cc9a7
    POP EBX                             ; 004cc9a8
    RET                                 ; 004cc9a9
    MOV EAX,dword ptr [ESP + 0x44]      ; 004cc9aa
        ;   Label: caseD_1
    MOV dword ptr [EAX],0x0             ; 004cc9ae
    MOV dword ptr [EBP],0x7f80          ; 004cc9b4
    MOV dword ptr [EBX],0x0             ; 004cc9bb
    ADD ESP,0x34                        ; 004cc9c1
    POP EBP                             ; 004cc9c4
    POP EBX                             ; 004cc9c5
    RET                                 ; 004cc9c6
    PUSH EDI                            ; 004cc9c7
        ;   Label: caseD_3
    PUSH ESI                            ; 004cc9c8
    PUSH 0x437f0000                     ; 004cc9c9
    PUSH 0x0                            ; 004cc9ce
    CALL core_actor.cpp_FUN_0040ce40    ; 004cc9d0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x40],EAX      ; 004cc9d5
    FLD float ptr [ESP + 0x40]          ; 004cc9d9
    ADD ESP,0x8                         ; 004cc9dd
    PUSH 0x42200000                     ; 004cc9e0
    PUSH 0x0                            ; 004cc9e5
    FSTP float ptr [ESP + 0x10]         ; 004cc9e7
    CALL core_actor.cpp_FUN_0040ce40    ; 004cc9eb
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x40],EAX      ; 004cc9f0
    FLD float ptr [ESP + 0x40]          ; 004cc9f4
    ADD ESP,0x8                         ; 004cc9f8
    PUSH 0x43800000                     ; 004cc9fb
    PUSH 0x42d40000                     ; 004cca00
    FSTP float ptr [ESP + 0x14]         ; 004cca05
    CALL core_actor.cpp_FUN_0040ce40    ; 004cca09
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x40],EAX      ; 004cca0e
    LEA ESI,[ESP + 0x1c]                ; 004cca12
    FLD float ptr [ESP + 0x40]          ; 004cca16
    ADD ESP,0x8                         ; 004cca1a
    LEA EAX,[ESP + 0x8]                 ; 004cca1d
    LEA EDI,[ESP + 0x20]                ; 004cca21
    PUSH EAX                            ; 004cca25
    FSTP float ptr [ESP + 0x14]         ; 004cca26
    CALL core_boneguy.cpp_FUN_00417240  ; 004cca2a
        ;   XREF to: 00417240 (UNCONDITIONAL_CALL)  ; undefined core_boneguy.cpp_FUN_00417240()
    LEA ESI,[ESP + 0x18]                ; 004cca2f
    ADD ESP,0x4                         ; 004cca33
    MOVSD ES:EDI,ESI                    ; 004cca36
    MOVSD ES:EDI,ESI                    ; 004cca37
    MOVSD ES:EDI,ESI                    ; 004cca38
    LEA EAX,[ESP + 0x20]                ; 004cca39
    LEA ESI,[ESP + 0x2c]                ; 004cca3d
    CMP ESI,EAX                         ; 004cca41
    JZ 0x004cca5d                       ; 004cca43
        ;   XREF to: 004cca5d (CONDITIONAL_JUMP)  ; LAB_004cca5d
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cca45
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cca49
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cca4d
    MOV dword ptr [ESP + 0x30],EAX      ; 004cca51
    MOV EAX,dword ptr [ESP + 0x28]      ; 004cca55
    MOV dword ptr [ESP + 0x34],EAX      ; 004cca59
    FLD float ptr [0x005c4621]          ; 004cca5d | DAT_005c4621
        ;   Label: LAB_004cca5d
    FLD float ptr [ESP + 0x2c]          ; 004cca63
    FMUL ST1                            ; 004cca67
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004cca69
    CALL crt_math.c_round_FUN_005a3120  ; 004cca6d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX]               ; 004cca72
    FLD float ptr [ESP + 0x30]          ; 004cca74
    FMUL ST1                            ; 004cca78
    CALL crt_math.c_round_FUN_005a3120  ; 004cca7a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP]               ; 004cca7f
    FMUL float ptr [ESP + 0x34]         ; 004cca82
    CALL crt_math.c_round_FUN_005a3120  ; 004cca86
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX]               ; 004cca8b
    POP ESI                             ; 004cca8d
    POP EDI                             ; 004cca8e
    ADD ESP,0x34                        ; 004cca8f
    POP EBP                             ; 004cca92
    POP EBX                             ; 004cca93
    RET                                 ; 004cca94
    MOV EAX,dword ptr [ESP + 0x44]      ; 004cca95
        ;   Label: caseD_2
    MOV dword ptr [EAX],0x0             ; 004cca99
    MOV dword ptr [EBP],0x0             ; 004cca9f
    MOV dword ptr [EBX],0x0             ; 004ccaa6
    ADD ESP,0x34                        ; 004ccaac
    POP EBP                             ; 004ccaaf
    POP EBX                             ; 004ccab0
    RET                                 ; 004ccab1

