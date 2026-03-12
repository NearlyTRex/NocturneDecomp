; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30(CTurret *this_ptr,int model_index)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; Local Variables:
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_turret.cpp_CTurret_getBoundingBox_FUN_005e2910 at 005e2929
;   core_turret.cpp_CTurret_renderOpaque_FUN_005e2320 at 005e2357
;
; Referenced Globals:
;   void* switchdataD_005e2b14 = 005e2bcd
;   TerminatedCString s_core_turret_cpp_00656688
;   TerminatedCString s_CTurret_getCurFrame_inva_0065669b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e2b30
        ;   Label: core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
    PUSH ESI                            ; 005e2b31
    PUSH EBP                            ; 005e2b32
    MOV EBP,ESP                         ; 005e2b33
    SUB ESP,0x14                        ; 005e2b35
    AND ESP,0xfffffff8                  ; 005e2b38
    MOV EBX,dword ptr [EBP + 0x10]      ; 005e2b3b
    XOR EDX,EDX                         ; 005e2b3e
    MOV EAX,dword ptr [EBX + 0x700]     ; 005e2b40
    MOV dword ptr [ESP + 0x8],EDX       ; 005e2b46
    CMP EAX,0x4                         ; 005e2b4a
    JA 0x005e2baa                       ; 005e2b4d
        ;   XREF to: 005e2baa (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5e2b14]  ; 005e2b53 | caseD_1 | caseD_2 | caseD_4
        ;   Label: switchD
    FLD float ptr [EBX + 0x768]         ; 005e2b5a
        ;   Label: caseD_1
    FLDZ                                ; 005e2b60
    FCOMPP                              ; 005e2b62
    FNSTSW AX                           ; 005e2b64
    SAHF                                ; 005e2b66
    JNC 0x005e2bcd                      ; 005e2b67
        ;   XREF to: 005e2bcd (CONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x77c]         ; 005e2b69
    FDIV float ptr [EBX + 0x768]        ; 005e2b6f
    FLD1                                ; 005e2b75
    FSUBRP                              ; 005e2b77
    FSTP float ptr [ESP + 0x8]          ; 005e2b79
    JMP 0x005e2bcd                      ; 005e2b7d
        ;   XREF to: 005e2bcd (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005e2b7f
        ;   Label: caseD_3
    JMP 0x005e2bcd                      ; 005e2b87
        ;   XREF to: 005e2bcd (UNCONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x770]         ; 005e2b89
        ;   Label: caseD_4
    FLDZ                                ; 005e2b8f
    FCOMPP                              ; 005e2b91
    FNSTSW AX                           ; 005e2b93
    SAHF                                ; 005e2b95
    JNC 0x005e2bcd                      ; 005e2b96
        ;   XREF to: 005e2bcd (CONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x77c]         ; 005e2b98
    FDIV float ptr [EBX + 0x770]        ; 005e2b9e
    FSTP float ptr [ESP + 0x8]          ; 005e2ba4
    JMP 0x005e2bcd                      ; 005e2ba8
        ;   XREF to: 005e2bcd (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0x656688                    ; 005e2baa | = "..\\core\\turret.cpp"
        ;   Label: default
    MOV ESI,0x1c1                       ; 005e2baf
    PUSH 0x65669b                       ; 005e2bb4 | = "CTurret::getCurFrame - invalid state"
    MOV dword ptr [0x02f0ca48],ECX      ; 005e2bb9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005e2bbf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e2bc5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005e2bca
    FLD float ptr [ESP + 0x8]           ; 005e2bcd
        ;   Label: caseD_0
    FLDZ                                ; 005e2bd1
    FXCH                                ; 005e2bd3
    FSTP double ptr [ESP]               ; 005e2bd5
    FCOMP double ptr [ESP]              ; 005e2bd8
    FNSTSW AX                           ; 005e2bdb
    SAHF                                ; 005e2bdd
    JA 0x005e2c30                       ; 005e2bde
        ;   XREF to: 005e2c30 (CONDITIONAL_JUMP)  ; LAB_005e2c30
    FLD1                                ; 005e2be0
    FCOMP double ptr [ESP]              ; 005e2be2
    FNSTSW AX                           ; 005e2be5
    SAHF                                ; 005e2be7
    JNC 0x005e2bf2                      ; 005e2be8
        ;   XREF to: 005e2bf2 (CONDITIONAL_JUMP)  ; LAB_005e2bf2
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005e2bea
    CMP dword ptr [EBP + 0x14],0x0      ; 005e2bf2
        ;   Label: LAB_005e2bf2
    JZ 0x005e2c38                       ; 005e2bf6
        ;   XREF to: 005e2c38 (CONDITIONAL_JUMP)  ; LAB_005e2c38
    ADD EBX,0x584                       ; 005e2bf8
    PUSH EBX                            ; 005e2bfe
        ;   Label: LAB_005e2bfe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e2bff
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 005e2c04
    ADD ESP,0x4                         ; 005e2c0a
    DEC EAX                             ; 005e2c0d
    MOV dword ptr [ESP + 0x10],EAX      ; 005e2c0e
    FILD dword ptr [ESP + 0x10]         ; 005e2c12
    FMUL float ptr [ESP + 0x8]          ; 005e2c16
    FSTP float ptr [ESP + 0x8]          ; 005e2c1a
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e2c1e
    MOV dword ptr [ESP + 0xc],EAX       ; 005e2c22
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e2c26
        ;   Label: LAB_005e2c26
    MOV ESP,EBP                         ; 005e2c2a
    POP EBP                             ; 005e2c2c
    POP ESI                             ; 005e2c2d
    POP EBX                             ; 005e2c2e
    RET                                 ; 005e2c2f
    XOR EBX,EBX                         ; 005e2c30
        ;   Label: LAB_005e2c30
    MOV dword ptr [ESP + 0xc],EBX       ; 005e2c32
    JMP 0x005e2c26                      ; 005e2c36
        ;   XREF to: 005e2c26 (UNCONDITIONAL_JUMP)  ; LAB_005e2c26
    ADD EBX,0x158                       ; 005e2c38
        ;   Label: LAB_005e2c38
    JMP 0x005e2bfe                      ; 005e2c3e
        ;   XREF to: 005e2bfe (UNCONDITIONAL_JUMP)  ; LAB_005e2bfe

