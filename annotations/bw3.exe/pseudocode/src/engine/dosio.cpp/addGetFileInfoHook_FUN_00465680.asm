; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00465680(undefined4 param_1)
;
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e4566
;
; Referenced Globals:
;   TerminatedCString s_engine_dosio_c_005bbf9b
;   TerminatedCString s_addGetFileInfoHook_too_m_005bbfad
;   undefined4 DAT_01b8517c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00465680
        ;   Label: engine_dosio.cpp_addGetFileInfoHook_FUN_00465680
    CMP dword ptr [0x01b8517c],0x5      ; 00465681 | DAT_01b8517c
    JGE 0x004656a5                      ; 00465688
        ;   XREF to: 004656a5 (CONDITIONAL_JUMP)  ; LAB_004656a5
    MOV EAX,[0x01b8517c]                ; 0046568a | DAT_01b8517c
        ;   Label: LAB_0046568a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046568f
    LEA ESI,[EAX + 0x1]                 ; 00465693
    MOV dword ptr [EAX*0x4 + 0x1b85180],EDX ; 00465696
    MOV dword ptr [0x01b8517c],ESI      ; 0046569d | DAT_01b8517c
    POP ESI                             ; 004656a3
    RET                                 ; 004656a4
    PUSH EBX                            ; 004656a5
        ;   Label: LAB_004656a5
    MOV ECX,0x5bbf9b                    ; 004656a6 | = "..\\engine\\dosio.c"
    MOV EBX,0x6a                        ; 004656ab
    PUSH 0x5bbfad                       ; 004656b0 | = "addGetFileInfoHook - too many!"
    MOV dword ptr [0x01d71de0],ECX      ; 004656b5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004656bb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004656c1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004656c6
    POP EBX                             ; 004656c9
    JMP 0x0046568a                      ; 004656ca
        ;   XREF to: 0046568a (UNCONDITIONAL_JUMP)  ; LAB_0046568a

