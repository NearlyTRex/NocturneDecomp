; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_schngeis_cpp_FUN_005a31c0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   core_schngeis.cpp_CSchnellGeist_ctor_FUN_005a2fb0 at 005a3084
;
; Referenced Globals:
;   TerminatedCString s_MeleeAttack_005f00eb
;   TerminatedCString s_MeleeAttack_005f00f7
;   TerminatedCString s_LeapAttack_005f0103
;   TerminatedCString s_LeapAttack_005f010e
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059d650
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkafter_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a31c0
        ;   Label: core_schngeis.cpp_FUN_005a31c0
    PUSH ESI                            ; 005a31c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a31c2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a31c6
    TEST EBX,EBX                        ; 005a31ca
    JNZ 0x005a31ef                      ; 005a31cc
        ;   XREF to: 005a31ef (CONDITIONAL_JUMP)  ; LAB_005a31ef
    LEA EAX,[ESI + 0x10af8]             ; 005a31ce
        ;   Label: LAB_005a31ce
    TEST EBX,EBX                        ; 005a31d4
    JBE 0x005a31ff                      ; 005a31d6
        ;   XREF to: 005a31ff (CONDITIONAL_JUMP)  ; LAB_005a31ff
    CMP EBX,0x1                         ; 005a31d8
    JZ 0x005a320f                       ; 005a31db
        ;   XREF to: 005a320f (CONDITIONAL_JUMP)  ; LAB_005a320f
    LEA EAX,[ESI + 0x10af8]             ; 005a31dd
        ;   Label: LAB_005a31dd
    TEST EBX,EBX                        ; 005a31e3
    JBE 0x005a3238                      ; 005a31e5
        ;   XREF to: 005a3238 (CONDITIONAL_JUMP)  ; LAB_005a3238
    CMP EBX,0x1                         ; 005a31e7
    JZ 0x005a3249                       ; 005a31ea
        ;   XREF to: 005a3249 (CONDITIONAL_JUMP)  ; LAB_005a3249
    POP ESI                             ; 005a31ec
        ;   Label: LAB_005a31ec
    POP EBX                             ; 005a31ed
    RET                                 ; 005a31ee
    PUSH EBX                            ; 005a31ef
        ;   Label: LAB_005a31ef
    PUSH dword ptr [ESP + 0x14]         ; 005a31f0
    PUSH ESI                            ; 005a31f4
    CALL unkafter_basicene.cpp_FUN_0059e8c0 ; 005a31f5
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a31fa
    JMP 0x005a31ce                      ; 005a31fd
        ;   XREF to: 005a31ce (UNCONDITIONAL_JUMP)  ; LAB_005a31ce
    PUSH 0x5f00eb                       ; 005a31ff | = "MeleeAttack"
        ;   Label: LAB_005a31ff
    PUSH EAX                            ; 005a3204
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005a3205
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a320a
    JMP 0x005a31dd                      ; 005a320d
        ;   XREF to: 005a31dd (UNCONDITIONAL_JUMP)  ; LAB_005a31dd
    PUSH 0x5f00f7                       ; 005a320f | = "MeleeAttack"
        ;   Label: LAB_005a320f
    PUSH EAX                            ; 005a3214
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a3215
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a321a
    TEST EAX,EAX                        ; 005a321d
    JZ 0x005a31dd                       ; 005a321f
        ;   XREF to: 005a31dd (CONDITIONAL_JUMP)  ; LAB_005a31dd
    PUSH dword ptr [ESP + 0x10]         ; 005a3221
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a3225
    PUSH ESI                            ; 005a322b
    CALL dword ptr [EAX + 0x184]        ; 005a322c
    ADD ESP,0x8                         ; 005a3232
    POP ESI                             ; 005a3235
    POP EBX                             ; 005a3236
    RET                                 ; 005a3237
    PUSH 0x5f0103                       ; 005a3238 | = "LeapAttack"
        ;   Label: LAB_005a3238
    PUSH EAX                            ; 005a323d
    CALL unkaddr_0059d350.cpp_FUN_0059d650 ; 005a323e
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a3243
    POP ESI                             ; 005a3246
    POP EBX                             ; 005a3247
    RET                                 ; 005a3248
    PUSH 0x5f010e                       ; 005a3249 | = "LeapAttack"
        ;   Label: LAB_005a3249
    PUSH EAX                            ; 005a324e
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a324f
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a3254
    TEST EAX,EAX                        ; 005a3257
    JZ 0x005a31ec                       ; 005a3259
        ;   XREF to: 005a31ec (CONDITIONAL_JUMP)  ; LAB_005a31ec
    PUSH dword ptr [ESP + 0x10]         ; 005a325b
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a325f
    PUSH ESI                            ; 005a3265
    CALL dword ptr [EAX + 0x180]        ; 005a3266
    ADD ESP,0x8                         ; 005a326c
    POP ESI                             ; 005a326f
    POP EBX                             ; 005a3270
    RET                                 ; 005a3271

