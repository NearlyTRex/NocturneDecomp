; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_turret_cpp_CTurret_getCurFrame_FUN_005a2ae0(CTurret *this_ptr,int model_index)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_turret.cpp_CTurret_getBoundingBox_FUN_005a28c0 at 005a28d5
;   core_turret.cpp_CTurret_renderOpaque_FUN_005a2280 at 005a22ce
;
; Referenced Globals:
;   undefined1* switchdataD_005a2ac0 = 005a2b7d
;   TerminatedCString s_core_turret_cpp_005f8a70
;   TerminatedCString s_CTurret_getCurFrame_inva_005f8a83
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2ae0
        ;   Label: core_turret.cpp_CTurret_getCurFrame_FUN_005a2ae0
    PUSH ESI                            ; 005a2ae1
    PUSH EBP                            ; 005a2ae2
    MOV EBP,ESP                         ; 005a2ae3
    SUB ESP,0x14                        ; 005a2ae5
    AND ESP,0xfffffff8                  ; 005a2ae8
    MOV EBX,dword ptr [EBP + 0x10]      ; 005a2aeb
    XOR EDX,EDX                         ; 005a2aee
    MOV EAX,dword ptr [EBX + 0x700]     ; 005a2af0
    MOV dword ptr [ESP + 0x8],EDX       ; 005a2af6
    CMP EAX,0x4                         ; 005a2afa
    JA 0x005a2b5a                       ; 005a2afd
        ;   XREF to: 005a2b5a (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5a2ac0]  ; 005a2b03 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    FLD float ptr [EBX + 0x768]         ; 005a2b0a
        ;   Label: caseD_1
    FLDZ                                ; 005a2b10
    FCOMPP                              ; 005a2b12
    FNSTSW AX                           ; 005a2b14
    SAHF                                ; 005a2b16
    JNC 0x005a2b7d                      ; 005a2b17
        ;   XREF to: 005a2b7d (CONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x77c]         ; 005a2b19
    FDIV float ptr [EBX + 0x768]        ; 005a2b1f
    FLD1                                ; 005a2b25
    FSUBRP                              ; 005a2b27
    FSTP float ptr [ESP + 0x8]          ; 005a2b29
    JMP 0x005a2b7d                      ; 005a2b2d
        ;   XREF to: 005a2b7d (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005a2b2f
        ;   Label: caseD_2
    JMP 0x005a2b7d                      ; 005a2b37
        ;   XREF to: 005a2b7d (UNCONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x770]         ; 005a2b39
        ;   Label: caseD_4
    FLDZ                                ; 005a2b3f
    FCOMPP                              ; 005a2b41
    FNSTSW AX                           ; 005a2b43
    SAHF                                ; 005a2b45
    JNC 0x005a2b7d                      ; 005a2b46
        ;   XREF to: 005a2b7d (CONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x77c]         ; 005a2b48
    FDIV float ptr [EBX + 0x770]        ; 005a2b4e
    FSTP float ptr [ESP + 0x8]          ; 005a2b54
    JMP 0x005a2b7d                      ; 005a2b58
        ;   XREF to: 005a2b7d (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0x5f8a70                    ; 005a2b5a | = "..\\core\\turret.cpp"
        ;   Label: default
    MOV ESI,0x1c1                       ; 005a2b5f
    PUSH 0x5f8a83                       ; 005a2b64 | = "CTurret::getCurFrame - invalid state"
    MOV dword ptr [0x01d1d400],ECX      ; 005a2b69 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005a2b6f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a2b75
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005a2b7a
    FLD float ptr [ESP + 0x8]           ; 005a2b7d
        ;   Label: caseD_0
    FLDZ                                ; 005a2b81
    FXCH                                ; 005a2b83
    FSTP double ptr [ESP]               ; 005a2b85
    FCOMP double ptr [ESP]              ; 005a2b88
    FNSTSW AX                           ; 005a2b8b
    SAHF                                ; 005a2b8d
    JA 0x005a2be0                       ; 005a2b8e
        ;   XREF to: 005a2be0 (CONDITIONAL_JUMP)  ; LAB_005a2be0
    FLD1                                ; 005a2b90
    FCOMP double ptr [ESP]              ; 005a2b92
    FNSTSW AX                           ; 005a2b95
    SAHF                                ; 005a2b97
    JNC 0x005a2ba2                      ; 005a2b98
        ;   XREF to: 005a2ba2 (CONDITIONAL_JUMP)  ; LAB_005a2ba2
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005a2b9a
    CMP dword ptr [EBP + 0x14],0x0      ; 005a2ba2
        ;   Label: LAB_005a2ba2
    JZ 0x005a2be8                       ; 005a2ba6
        ;   XREF to: 005a2be8 (CONDITIONAL_JUMP)  ; LAB_005a2be8
    ADD EBX,0x584                       ; 005a2ba8
    PUSH EBX                            ; 005a2bae
        ;   Label: LAB_005a2bae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a2baf
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 005a2bb4
    ADD ESP,0x4                         ; 005a2bba
    DEC EAX                             ; 005a2bbd
    MOV dword ptr [ESP + 0x10],EAX      ; 005a2bbe
    FILD dword ptr [ESP + 0x10]         ; 005a2bc2
    FMUL float ptr [ESP + 0x8]          ; 005a2bc6
    FSTP float ptr [ESP + 0x8]          ; 005a2bca
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a2bce
    MOV dword ptr [ESP + 0xc],EAX       ; 005a2bd2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a2bd6
        ;   Label: LAB_005a2bd6
    MOV ESP,EBP                         ; 005a2bda
    POP EBP                             ; 005a2bdc
    POP ESI                             ; 005a2bdd
    POP EBX                             ; 005a2bde
    RET                                 ; 005a2bdf
    XOR EBX,EBX                         ; 005a2be0
        ;   Label: LAB_005a2be0
    MOV dword ptr [ESP + 0xc],EBX       ; 005a2be2
    JMP 0x005a2bd6                      ; 005a2be6
        ;   XREF to: 005a2bd6 (UNCONDITIONAL_JUMP)  ; LAB_005a2bd6
    ADD EBX,0x158                       ; 005a2be8
        ;   Label: LAB_005a2be8
    JMP 0x005a2bae                      ; 005a2bee
        ;   XREF to: 005a2bae (UNCONDITIONAL_JUMP)  ; LAB_005a2bae

