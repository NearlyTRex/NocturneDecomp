; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_004331a0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_STAND_005b8737
;   undefined4 DAT_005b873e
;
; Called Functions:
;   core_motion.cpp_FUN_004fba50
;   core_motion.cpp_FUN_004fc310
;   core_motion.cpp_FUN_004fc350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004331a0
        ;   Label: core_charactr.cpp_FUN_004331a0
    PUSH ESI                            ; 004331a1
    SUB ESP,0x4                         ; 004331a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004331a5
    PUSH ESI                            ; 004331a9
    MOV EAX,dword ptr [ESI + 0x154]     ; 004331aa
    CALL dword ptr [EAX + 0x10c]        ; 004331b0
    ADD ESP,0x4                         ; 004331b6
    CMP EAX,0x1                         ; 004331b9
    JG 0x004331d9                       ; 004331bc
        ;   XREF to: 004331d9 (CONDITIONAL_JUMP)  ; LAB_004331d9
    MOV AH,byte ptr [ESI + 0x24a8]      ; 004331be
    LEA EBX,[ESI + 0x158]               ; 004331c4
    TEST AH,AH                          ; 004331ca
    JNZ 0x004331dd                      ; 004331cc
        ;   XREF to: 004331dd (CONDITIONAL_JUMP)  ; LAB_004331dd
    MOV EAX,0x1                         ; 004331ce
        ;   Label: LAB_004331ce
    ADD ESP,0x4                         ; 004331d3
        ;   Label: LAB_004331d3
    POP ESI                             ; 004331d6
    POP EBX                             ; 004331d7
    RET                                 ; 004331d8
    XOR EAX,EAX                         ; 004331d9
        ;   Label: LAB_004331d9
    JMP 0x004331d3                      ; 004331db
        ;   XREF to: 004331d3 (UNCONDITIONAL_JUMP)  ; LAB_004331d3
    PUSH 0x0                            ; 004331dd
        ;   Label: LAB_004331dd
    PUSH 0x5b8737                       ; 004331df | = "STAND"
    PUSH EBX                            ; 004331e4
    CALL core_motion.cpp_FUN_004fc310   ; 004331e5
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004331ea
    PUSH EAX                            ; 004331ed
    CALL core_motion.cpp_FUN_004fba50   ; 004331ee
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004331f3
    TEST EAX,EAX                        ; 004331f6
    JL 0x004331ce                       ; 004331f8
        ;   XREF to: 004331ce (CONDITIONAL_JUMP)  ; LAB_004331ce
    PUSH EAX                            ; 004331fa
    PUSH EBX                            ; 004331fb
    CALL core_motion.cpp_FUN_004fc350   ; 004331fc
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x8],EAX       ; 00433201
    FLD float ptr [ESP + 0x8]           ; 00433205
    ADD ESP,0x8                         ; 00433209
    FCOMP double ptr [0x005b873e]       ; 0043320c | DAT_005b873e
    FNSTSW AX                           ; 00433212
    SAHF                                ; 00433214
    JBE 0x004331ce                      ; 00433215
        ;   XREF to: 004331ce (CONDITIONAL_JUMP)  ; LAB_004331ce
    XOR EAX,EAX                         ; 00433217
    ADD ESP,0x4                         ; 00433219
    POP ESI                             ; 0043321c
    POP EBX                             ; 0043321d
    RET                                 ; 0043321e

