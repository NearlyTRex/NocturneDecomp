; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_confedrt_cpp_FUN_005a12d0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005efcd7
;   TerminatedCString s_Animation_005efcdd
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a12d0
        ;   Label: core_confedrt.cpp_FUN_005a12d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a12d1
    PUSH 0x5efcd7                       ; 005a12d5 | = "Death"
    ADD EBX,0x10af8                     ; 005a12da
    PUSH EBX                            ; 005a12e0
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a12e1
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a12e6
    TEST EAX,EAX                        ; 005a12e9
    JNZ 0x005a12ff                      ; 005a12eb
        ;   XREF to: 005a12ff (CONDITIONAL_JUMP)  ; LAB_005a12ff
    PUSH 0x5efcdd                       ; 005a12ed | = "Animation"
    PUSH EBX                            ; 005a12f2
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a12f3
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a12f8
    TEST EAX,EAX                        ; 005a12fb
    JZ 0x005a132e                       ; 005a12fd
        ;   XREF to: 005a132e (CONDITIONAL_JUMP)  ; LAB_005a132e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a12ff
        ;   Label: LAB_005a12ff
    ADD EAX,0x2b4                       ; 005a1303
    PUSH EAX                            ; 005a1308
    CALL core_motion.cpp_FUN_005035c0   ; 005a1309
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a130e
    ADD ESP,0x4                         ; 005a1311
    CMP EAX,0x6                         ; 005a1314
    JC 0x005a132e                       ; 005a1317
        ;   XREF to: 005a132e (CONDITIONAL_JUMP)  ; LAB_005a132e
    JBE 0x005a1327                      ; 005a1319
        ;   XREF to: 005a1327 (CONDITIONAL_JUMP)  ; LAB_005a1327
    CMP EAX,0x7                         ; 005a131b
    JNZ 0x005a132e                      ; 005a131e
        ;   XREF to: 005a132e (CONDITIONAL_JUMP)  ; LAB_005a132e
    MOV EAX,0x2                         ; 005a1320
    POP EBX                             ; 005a1325
    RET                                 ; 005a1326
    MOV EAX,0x1                         ; 005a1327
        ;   Label: LAB_005a1327
    POP EBX                             ; 005a132c
    RET                                 ; 005a132d
    XOR EAX,EAX                         ; 005a132e
        ;   Label: LAB_005a132e
    POP EBX                             ; 005a1330
    RET                                 ; 005a1331

