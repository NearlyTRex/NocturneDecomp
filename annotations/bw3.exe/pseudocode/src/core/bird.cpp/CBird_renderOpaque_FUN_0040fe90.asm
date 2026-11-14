; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bird_cpp_CBird_renderOpaque_FUN_0040fe90(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005b63fa
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba60
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CGameInstance.goggles_active
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fe90
        ;   Label: core_bird.cpp_CBird_renderOpaque_FUN_0040fe90
    PUSH EDI                            ; 0040fe91
    PUSH EBP                            ; 0040fe92
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040fe93
    CMP dword ptr [EBX + 0x206ac],0x0   ; 0040fe97
    JNZ 0x0040fec3                      ; 0040fe9e
        ;   XREF to: 0040fec3 (CONDITIONAL_JUMP)  ; LAB_0040fec3
    MOV ECX,dword ptr [EBX + 0x27a8]    ; 0040fea0
    TEST ECX,ECX                        ; 0040fea6
    JZ 0x0040fec9                       ; 0040fea8
        ;   XREF to: 0040fec9 (CONDITIONAL_JUMP)  ; LAB_0040fec9
    JNZ 0x0040fed6                      ; 0040feaa
        ;   XREF to: 0040fed6 (CONDITIONAL_JUMP)  ; LAB_0040fed6
    CMP dword ptr [EBX + 0x27a8],0x0    ; 0040feac
        ;   Label: LAB_0040feac
    JZ 0x0040fec3                       ; 0040feb3
        ;   XREF to: 0040fec3 (CONDITIONAL_JUMP)  ; LAB_0040fec3
    MOV EAX,[0x005fe9dc]                ; 0040feb5 | g_CGamePtr
    CMP dword ptr [EAX + 0x264],0x0     ; 0040feba | g_CGameInstance.goggles_active
    JNZ 0x0040ff05                      ; 0040fec1
        ;   XREF to: 0040ff05 (CONDITIONAL_JUMP)  ; LAB_0040ff05
    XOR EAX,EAX                         ; 0040fec3
        ;   Label: LAB_0040fec3
    POP EBP                             ; 0040fec5
    POP EDI                             ; 0040fec6
    POP EBX                             ; 0040fec7
    RET                                 ; 0040fec8
    PUSH EBX                            ; 0040fec9
        ;   Label: LAB_0040fec9
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 0040feca
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0040fecf
    POP EBP                             ; 0040fed2
    POP EDI                             ; 0040fed3
    POP EBX                             ; 0040fed4
    RET                                 ; 0040fed5
    MOV EDI,dword ptr [0x005f2afc]      ; 0040fed6 | DAT_005f2afc
        ;   Label: LAB_0040fed6
    PUSH EDI                            ; 0040fedc | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0040fedd
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0040fee2
    TEST EAX,EAX                        ; 0040fee5
    JZ 0x0040feac                       ; 0040fee7
        ;   XREF to: 0040feac (CONDITIONAL_JUMP)  ; LAB_0040feac
    PUSH 0x5b63fa                       ; 0040fee9 | = "heroCanSee"
    MOV EBP,dword ptr [0x005fba60]      ; 0040feee | DAT_005fba60
    PUSH EBP                            ; 0040fef4
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0040fef5
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0040fefa
    TEST EAX,EAX                        ; 0040fefd
    JNZ 0x0040feac                      ; 0040feff
        ;   XREF to: 0040feac (CONDITIONAL_JUMP)  ; LAB_0040feac
    POP EBP                             ; 0040ff01
    POP EDI                             ; 0040ff02
    POP EBX                             ; 0040ff03
    RET                                 ; 0040ff04
    PUSH 0x2                            ; 0040ff05
        ;   Label: LAB_0040ff05
    PUSH 0x0                            ; 0040ff07
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0040ff09
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0040ff0e
    CMP EAX,0x1                         ; 0040ff11
    JNZ 0x0040fec3                      ; 0040ff14
        ;   XREF to: 0040fec3 (CONDITIONAL_JUMP)  ; LAB_0040fec3
    PUSH EBX                            ; 0040ff16
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 0040ff17
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0040ff1c
    POP EBP                             ; 0040ff1f
    POP EDI                             ; 0040ff20
    POP EBX                             ; 0040ff21
    RET                                 ; 0040ff22

