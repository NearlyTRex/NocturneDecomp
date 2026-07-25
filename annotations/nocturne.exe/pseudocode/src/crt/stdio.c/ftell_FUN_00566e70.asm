; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_ftell_FUN_00566e70(int param_1)
;
;
; XREF[12]:
;   FUN_004a4170 at 004a42fc
;   FUN_004e28a0 at 004e28d2
;   FUN_004e7ed0 at 004e7f31
;   FUN_004edfc0 at 004ee01d
;   FUN_004febd0 at 004fecb4
;   FUN_00522480 at 0052262a
;   FUN_005229f0 at 00522c52
;   FUN_005634b0 at 005634f4
;   core_script.cpp_CScript_dbLoad_FUN_00504e70 at 00504ed6
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 at 00521f28
;   ... and 2 more
;
; Referenced Globals:
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;
; Called Functions:
;   FUN_005671e4
;   FUN_0056bc10
;   FUN_0056dd60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566e70
        ;   Label: crt_stdio.c_ftell_FUN_00566e70
    PUSH ESI                            ; 00566e71
    PUSH EDI                            ; 00566e72
    PUSH EBP                            ; 00566e73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00566e74
    TEST byte ptr [EBX + 0xc],0x80      ; 00566e78
    JZ 0x00566e8d                       ; 00566e7c
        ;   XREF to: 00566e8d (CONDITIONAL_JUMP)  ; LAB_00566e8d
    TEST byte ptr [EBX + 0xd],0x10      ; 00566e7e
    JZ 0x00566e8d                       ; 00566e82
        ;   XREF to: 00566e8d (CONDITIONAL_JUMP)  ; LAB_00566e8d
    PUSH EBX                            ; 00566e84
    CALL FUN_0056dd60                   ; 00566e85
        ;   XREF to: 0056dd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dd60()
    ADD ESP,0x4                         ; 00566e8a
    MOV EDX,dword ptr [EBX + 0x10]      ; 00566e8d
        ;   Label: LAB_00566e8d
    PUSH EDX                            ; 00566e90
    CALL FUN_0056bc10                   ; 00566e91
        ;   XREF to: 0056bc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056bc10()
    MOV ESI,EAX                         ; 00566e96
    ADD ESP,0x4                         ; 00566e98
    MOV EDI,EAX                         ; 00566e9b
    CMP EAX,-0x1                        ; 00566e9d
    JZ 0x00566ed0                       ; 00566ea0
        ;   XREF to: 00566ed0 (CONDITIONAL_JUMP)  ; LAB_00566ed0
    MOV ECX,dword ptr [EBX + 0x10]      ; 00566ea2
    PUSH ECX                            ; 00566ea5
    CALL dword ptr [0x005c1ac0]         ; 00566ea6 | PTR_FUN_005c1ac0
    MOV EBP,dword ptr [EBX + 0x4]       ; 00566eac
    ADD ESP,0x4                         ; 00566eaf
    TEST EBP,EBP                        ; 00566eb2
    JZ 0x00566ec3                       ; 00566eb4
        ;   XREF to: 00566ec3 (CONDITIONAL_JUMP)  ; LAB_00566ec3
    TEST byte ptr [EBX + 0xd],0x10      ; 00566eb6
    JZ 0x00566ec1                       ; 00566eba
        ;   XREF to: 00566ec1 (CONDITIONAL_JUMP)  ; LAB_00566ec1
    LEA EDI,[ESI + EBP*0x1]             ; 00566ebc
    JMP 0x00566ec3                      ; 00566ebf
        ;   XREF to: 00566ec3 (UNCONDITIONAL_JUMP)  ; LAB_00566ec3
    SUB EDI,EBP                         ; 00566ec1
        ;   Label: LAB_00566ec1
    MOV EDX,dword ptr [EBX + 0x10]      ; 00566ec3
        ;   Label: LAB_00566ec3
    PUSH EDX                            ; 00566ec6
    CALL dword ptr [0x005c1ac4]         ; 00566ec7 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00566ecd
    MOV EAX,EDI                         ; 00566ed0
        ;   Label: LAB_00566ed0
    POP EBP                             ; 00566ed2
    POP EDI                             ; 00566ed3
    POP ESI                             ; 00566ed4
    POP EBX                             ; 00566ed5
    RET                                 ; 00566ed6

