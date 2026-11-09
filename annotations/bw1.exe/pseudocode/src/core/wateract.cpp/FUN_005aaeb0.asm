; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_005aaeb0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9302
;   undefined4 DAT_005f930a
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aaeb0
        ;   Label: core_wateract.cpp_FUN_005aaeb0
    PUSH ESI                            ; 005aaeb1
    PUSH EDI                            ; 005aaeb2
    SUB ESP,0x4                         ; 005aaeb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005aaeb6
    FLD float ptr [ESP + 0x18]          ; 005aaeba
    FMUL double ptr [0x005f9302]        ; 005aaebe | DAT_005f9302
    FMUL double ptr [0x005f930a]        ; 005aaec4 | DAT_005f930a
    MOV EDX,dword ptr [EBX + 0x2b22c]   ; 005aaeca
    CALL crt_math.c_round_FUN_005c03a0  ; 005aaed0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 005aaed5
    MOV EAX,dword ptr [ESP]             ; 005aaed8
    ADD EDX,EAX                         ; 005aaedb
    MOV dword ptr [EBX + 0x2b22c],EDX   ; 005aaedd
    CMP EDX,0x10000                     ; 005aaee3
    JLE 0x005aaf13                      ; 005aaee9
        ;   XREF to: 005aaf13 (CONDITIONAL_JUMP)  ; LAB_005aaf13
    MOV EDI,dword ptr [EBX + 0x2b228]   ; 005aaeeb
    LEA ESI,[EDX + 0xffff0000]          ; 005aaef1
    INC EDI                             ; 005aaef7
    MOV dword ptr [EBX + 0x2b22c],ESI   ; 005aaef8
    MOV dword ptr [EBX + 0x2b228],EDI   ; 005aaefe
    CMP EDI,0x10                        ; 005aaf04
    JL 0x005aaf13                       ; 005aaf07
        ;   XREF to: 005aaf13 (CONDITIONAL_JUMP)  ; LAB_005aaf13
    MOV dword ptr [EBX + 0x2b228],0x0   ; 005aaf09
    FLD float ptr [ESP + 0x18]          ; 005aaf13
        ;   Label: LAB_005aaf13
    FLD1                                ; 005aaf17
    FDIVRP                              ; 005aaf19
    LEA EAX,[EBX + 0x1b4]               ; 005aaf1b
    PUSH EAX                            ; 005aaf21
    MOV EAX,[0x0061b4d0]                ; 005aaf22 | DAT_0061b4d0
    PUSH EAX                            ; 005aaf27
    FSTP float ptr [EBX + 0x7f9c]       ; 005aaf28
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005aaf2e
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005aaf33
    TEST EAX,EAX                        ; 005aaf36
    JZ 0x005aaf44                       ; 005aaf38
        ;   XREF to: 005aaf44 (CONDITIONAL_JUMP)  ; LAB_005aaf44
    MOV dword ptr [EBX + 0x280],0x1     ; 005aaf3a
    LEA EAX,[EBX + 0x218]               ; 005aaf44
        ;   Label: LAB_005aaf44
    PUSH EAX                            ; 005aaf4a
    MOV EDX,dword ptr [0x0061b4d0]      ; 005aaf4b | DAT_0061b4d0
    PUSH EDX                            ; 005aaf51
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005aaf52
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005aaf57
    TEST EAX,EAX                        ; 005aaf5a
    JZ 0x005aaf68                       ; 005aaf5c
        ;   XREF to: 005aaf68 (CONDITIONAL_JUMP)  ; LAB_005aaf68
    MOV dword ptr [EBX + 0x280],0x3     ; 005aaf5e
    MOV EAX,dword ptr [EBX + 0x280]     ; 005aaf68
        ;   Label: LAB_005aaf68
    CMP EAX,0x3                         ; 005aaf6e
    JA 0x005ab002                       ; 005aaf71
        ;   XREF to: 005ab002 (CONDITIONAL_JUMP)  ; LAB_005ab002
    JMP dword ptr [EAX*0x4 + 0x5aaea0]  ; 005aaf77
    FLD float ptr [EBX + 0x168]         ; 005aafe6
        ;   Label: LAB_005aafe6
    FMUL float ptr [EBX + 0x27c]        ; 005aafec
    FADD float ptr [EBX + 0x2b230]      ; 005aaff2
    FSTP float ptr [EBX + 0x24]         ; 005aaff8
    ADD ESP,0x4                         ; 005aaffb
    POP EDI                             ; 005aaffe
    POP ESI                             ; 005aafff
    POP EBX                             ; 005ab000
    RET                                 ; 005ab001
    MOV ECX,0x5f92ca                    ; 005ab002
        ;   Label: LAB_005ab002
    MOV ESI,0x1a5                       ; 005ab007
    PUSH 0x5f92df                       ; 005ab00c
    MOV dword ptr [0x01d1d400],ECX      ; 005ab011 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005ab017 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ab01d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ab022
    JMP 0x005aafe6                      ; 005ab025
        ;   XREF to: 005aafe6 (UNCONDITIONAL_JUMP)  ; LAB_005aafe6

