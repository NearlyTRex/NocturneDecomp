; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a7f6c(int param_1,undefined4 param_2,HMODULE param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a81b8 at 005a81ca
;
; Referenced Globals:
;   void* PTR_ExitProcess_005b3540 = 001b3cfe
;   void* PTR_GetCommandLineA_005b3574 = 001b3de4
;   void* PTR_GetCommandLineW_005b3578 = 001b3df6
;   void* PTR_GetEnvironmentStrings_005b3598 = 001b3e9a
;   void* PTR_GetModuleFileNameA_005b35b8 = 001b3f26
;   void* PTR_GetVersion_005b35d8 = 001b3fc2
;   undefined4 DAT_005da848
;   undefined4 DAT_006074b8
;   undefined4 DAT_00607940
;   undefined4 DAT_00607944
;   undefined4 DAT_00607948
;   undefined4 DAT_0060794c
;   undefined4 DAT_00607950
;   undefined4 DAT_00607954
;   undefined4 DAT_0060797d
;   ... and 14 more
;
; Called Functions:
;   crt_unknown.c_FUN_005abb90
;   ExitProcess
;   GetCommandLineA
;   GetCommandLineW
;   GetEnvironmentStrings
;   GetModuleFileNameA
;   GetVersion
;   unkafter_asgaya.cpp_FUN_005adaac
;   unkafter_asgaya.cpp_FUN_005addd0
;   unkafter_asgaya.cpp_FUN_005ade80
;   unkafter_asgaya.cpp_FUN_005aded0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7f6c
        ;   Label: crt_unknown.c_FUN_005a7f6c
    PUSH ESI                            ; 005a7f6d
    PUSH EDI                            ; 005a7f6e
    PUSH EBP                            ; 005a7f6f
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a7f70
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a7f74
    PUSH EDX                            ; 005a7f78
    MOV dword ptr [0x02d252b0],ESI      ; 005a7f79 | DAT_02d252b0
    CALL unkafter_asgaya.cpp_FUN_005adaac ; 005a7f7f
        ;   XREF to: 005adaac (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005adaac()
    ADD ESP,0x4                         ; 005a7f84
    MOV [0x02d252bc],EAX                ; 005a7f87 | DAT_02d252bc
    TEST EAX,EAX                        ; 005a7f8c
    JNZ 0x005a7fa1                      ; 005a7f8e
        ;   XREF to: 005a7fa1 (CONDITIONAL_JUMP)  ; LAB_005a7fa1
    TEST ESI,ESI                        ; 005a7f90
    JNZ 0x005a81b1                      ; 005a7f92
        ;   XREF to: 005a81b1 (CONDITIONAL_JUMP)  ; LAB_005a81b1
    PUSH 0x1                            ; 005a7f98
    CALL dword ptr CS:[0x5b3540]        ; 005a7f9a | PTR_ExitProcess_005b3540
    CALL crt_unknown.c_FUN_005abb90     ; 005a7fa1
        ;   XREF to: 005abb90 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abb90()
        ;   Label: LAB_005a7fa1
    CALL dword ptr CS:[0x5b3598]        ; 005a7fa6 | PTR_GetEnvironmentStrings_005b3598
    XOR EBX,EBX                         ; 005a7fad
    MOV [0x0060797d],EAX                ; 005a7faf | DAT_0060797d
    MOV dword ptr [0x02d25924],EBX      ; 005a7fb4 | DAT_02d25924
    CALL dword ptr CS:[0x5b35d8]        ; 005a7fba | PTR_GetVersion_005b35d8
    MOV EDX,EAX                         ; 005a7fc1
    MOV EBX,EAX                         ; 005a7fc3
    MOV [0x00607983],AL                 ; 005a7fc5 | DAT_00607983
    SHR EAX,0x10                        ; 005a7fca
    AND EAX,0xffff                      ; 005a7fcd
    MOV [0x00607985],AX                 ; 005a7fd2 | DAT_00607985
    XOR EAX,EAX                         ; 005a7fd8
    MOV AX,[0x00607985]                 ; 005a7fda | DAT_00607985
    AND EDX,0xffff                      ; 005a7fe0
    MOV [0x00607987],EAX                ; 005a7fe6 | DAT_00607987
    XOR EAX,EAX                         ; 005a7feb
    SAR EDX,0x8                         ; 005a7fed
    MOV AL,BL                           ; 005a7ff0
    AND EDX,0xff                        ; 005a7ff2
    MOV [0x0060798b],EAX                ; 005a7ff8 | DAT_0060798b
    XOR EAX,EAX                         ; 005a7ffd
    PUSH 0x104                          ; 005a7fff
    MOV AL,DL                           ; 005a8004
    MOV byte ptr [0x00607984],DL        ; 005a8006 | DAT_00607984
    MOV [0x0060798f],EAX                ; 005a800c | DAT_0060798f
    MOV EAX,[0x0060798b]                ; 005a8011 | DAT_0060798b
    MOV EDX,dword ptr [0x0060798f]      ; 005a8016 | DAT_0060798f
    SHL EAX,0x8                         ; 005a801c
    PUSH 0x2d252c0                      ; 005a801f | DAT_02d252c0
    OR EAX,EDX                          ; 005a8024
    PUSH 0x0                            ; 005a8026
    MOV [0x00607993],EAX                ; 005a8028 | DAT_00607993
    CALL dword ptr CS:[0x5b35b8]        ; 005a802d | PTR_GetModuleFileNameA_005b35b8
    PUSH 0x208                          ; 005a8034
    PUSH 0x2d253c4                      ; 005a8039
    MOV ECX,0x2d252c0                   ; 005a803e
    PUSH 0x0                            ; 005a8043
    MOV EDI,0x2d253c4                   ; 005a8045
    MOV dword ptr [0x00607944],ECX      ; 005a804a | DAT_00607944
    CALL unkafter_asgaya.cpp_FUN_005addd0 ; 005a8050
        ;   XREF to: 005addd0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005addd0()
    ADD ESP,0xc                         ; 005a8055
    MOV dword ptr [0x00607950],EDI      ; 005a8058 | DAT_00607950
    CALL dword ptr CS:[0x5b3574]        ; 005a805e | PTR_GetCommandLineA_005b3574
    PUSH EAX                            ; 005a8065
    CALL unkafter_asgaya.cpp_FUN_005ade80 ; 005a8066
        ;   XREF to: 005ade80 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ade80()
    MOV EDX,EAX                         ; 005a806b
    ADD ESP,0x4                         ; 005a806d
    MOV BL,byte ptr [EAX]               ; 005a8070
    MOV [0x02d252b4],EAX                ; 005a8072 | DAT_02d252b4
    CMP BL,0x22                         ; 005a8077
    JNZ 0x005a809a                      ; 005a807a
        ;   XREF to: 005a809a (CONDITIONAL_JUMP)  ; LAB_005a809a
    MOV BH,byte ptr [EAX + 0x1]         ; 005a807c
    INC EAX                             ; 005a807f
    CMP BH,BL                           ; 005a8080
    JZ 0x005a8092                       ; 005a8082
        ;   XREF to: 005a8092 (CONDITIONAL_JUMP)  ; LAB_005a8092
    CMP byte ptr [EAX],0x0              ; 005a8084
        ;   Label: LAB_005a8084
    JZ 0x005a8092                       ; 005a8087
        ;   XREF to: 005a8092 (CONDITIONAL_JUMP)  ; LAB_005a8092
    MOV DL,byte ptr [EAX + 0x1]         ; 005a8089
    INC EAX                             ; 005a808c
    CMP DL,0x22                         ; 005a808d
    JNZ 0x005a8084                      ; 005a8090
        ;   XREF to: 005a8084 (CONDITIONAL_JUMP)  ; LAB_005a8084
    CMP byte ptr [EAX],0x0              ; 005a8092
        ;   Label: LAB_005a8092
    JZ 0x005a80b5                       ; 005a8095
        ;   XREF to: 005a80b5 (CONDITIONAL_JUMP)  ; LAB_005a80b5
    INC EAX                             ; 005a8097
    JMP 0x005a80b5                      ; 005a8098
        ;   XREF to: 005a80b5 (UNCONDITIONAL_JUMP)  ; LAB_005a80b5
    MOV DL,byte ptr [EAX]               ; 005a809a
        ;   Label: LAB_005a809a
    INC DL                              ; 005a809c
    AND EDX,0xff                        ; 005a809e
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 005a80a4 | DAT_006074b8
    JNZ 0x005a80b5                      ; 005a80ab
        ;   XREF to: 005a80b5 (CONDITIONAL_JUMP)  ; LAB_005a80b5
    CMP byte ptr [EAX],0x0              ; 005a80ad
    JZ 0x005a80b5                       ; 005a80b0
        ;   XREF to: 005a80b5 (CONDITIONAL_JUMP)  ; LAB_005a80b5
    INC EAX                             ; 005a80b2
    JMP 0x005a809a                      ; 005a80b3
        ;   XREF to: 005a809a (UNCONDITIONAL_JUMP)  ; LAB_005a809a
    MOV DL,byte ptr [EAX]               ; 005a80b5
        ;   Label: LAB_005a80b5
    INC DL                              ; 005a80b7
    AND EDX,0xff                        ; 005a80b9
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 005a80bf | DAT_006074b8
    JZ 0x005a80cb                       ; 005a80c6
        ;   XREF to: 005a80cb (CONDITIONAL_JUMP)  ; LAB_005a80cb
    INC EAX                             ; 005a80c8
    JMP 0x005a80b5                      ; 005a80c9
        ;   XREF to: 005a80b5 (UNCONDITIONAL_JUMP)  ; LAB_005a80b5
    MOV [0x00607940],EAX                ; 005a80cb | DAT_00607940
        ;   Label: LAB_005a80cb
    CALL dword ptr CS:[0x5b3578]        ; 005a80d0 | PTR_GetCommandLineW_005b3578
    TEST EAX,EAX                        ; 005a80d7
    JZ 0x005a8160                       ; 005a80d9
        ;   XREF to: 005a8160 (CONDITIONAL_JUMP)  ; LAB_005a8160
    PUSH EAX                            ; 005a80df
    CALL unkafter_asgaya.cpp_FUN_005aded0 ; 005a80e0
        ;   XREF to: 005aded0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005aded0()
    MOV EDX,EAX                         ; 005a80e5
    ADD ESP,0x4                         ; 005a80e7
    MOV BX,word ptr [EAX]               ; 005a80ea
    MOV [0x02d252b8],EAX                ; 005a80ed | DAT_02d252b8
    CMP BX,0x22                         ; 005a80f2
    JNZ 0x005a8122                      ; 005a80f6
        ;   XREF to: 005a8122 (CONDITIONAL_JUMP)  ; LAB_005a8122
    MOV CX,word ptr [EAX + 0x2]         ; 005a80f8
    ADD EAX,0x2                         ; 005a80fc
    CMP CX,BX                           ; 005a80ff
    JZ 0x005a8117                       ; 005a8102
        ;   XREF to: 005a8117 (CONDITIONAL_JUMP)  ; LAB_005a8117
    CMP word ptr [EAX],0x0              ; 005a8104
        ;   Label: LAB_005a8104
    JZ 0x005a8117                       ; 005a8108
        ;   XREF to: 005a8117 (CONDITIONAL_JUMP)  ; LAB_005a8117
    MOV DX,word ptr [EAX + 0x2]         ; 005a810a
    ADD EAX,0x2                         ; 005a810e
    CMP DX,0x22                         ; 005a8111
    JNZ 0x005a8104                      ; 005a8115
        ;   XREF to: 005a8104 (CONDITIONAL_JUMP)  ; LAB_005a8104
    CMP word ptr [EAX],0x0              ; 005a8117
        ;   Label: LAB_005a8117
    JZ 0x005a8144                       ; 005a811b
        ;   XREF to: 005a8144 (CONDITIONAL_JUMP)  ; LAB_005a8144
    ADD EAX,0x2                         ; 005a811d
    JMP 0x005a8144                      ; 005a8120
        ;   XREF to: 005a8144 (UNCONDITIONAL_JUMP)  ; LAB_005a8144
    MOV EBX,0x2                         ; 005a8122
        ;   Label: LAB_005a8122
    MOV DL,byte ptr [EAX]               ; 005a8127
        ;   Label: LAB_005a8127
    INC DL                              ; 005a8129
    AND EDX,0xff                        ; 005a812b
    TEST byte ptr [EDX + 0x6074b8],BL   ; 005a8131 | DAT_006074b8
    JNZ 0x005a8144                      ; 005a8137
        ;   XREF to: 005a8144 (CONDITIONAL_JUMP)  ; LAB_005a8144
    CMP word ptr [EAX],0x0              ; 005a8139
    JZ 0x005a8144                       ; 005a813d
        ;   XREF to: 005a8144 (CONDITIONAL_JUMP)  ; LAB_005a8144
    ADD EAX,0x2                         ; 005a813f
    JMP 0x005a8127                      ; 005a8142
        ;   XREF to: 005a8127 (UNCONDITIONAL_JUMP)  ; LAB_005a8127
    MOV EBX,0x2                         ; 005a8144
        ;   Label: LAB_005a8144
    MOV DL,byte ptr [EAX]               ; 005a8149
        ;   Label: LAB_005a8149
    INC DL                              ; 005a814b
    AND EDX,0xff                        ; 005a814d
    TEST byte ptr [EDX + 0x6074b8],BL   ; 005a8153 | DAT_006074b8
    JZ 0x005a8165                       ; 005a8159
        ;   XREF to: 005a8165 (CONDITIONAL_JUMP)  ; LAB_005a8165
    ADD EAX,0x2                         ; 005a815b
    JMP 0x005a8149                      ; 005a815e
        ;   XREF to: 005a8149 (UNCONDITIONAL_JUMP)  ; LAB_005a8149
    MOV EAX,0x5da848                    ; 005a8160 | DAT_005da848
        ;   Label: LAB_005a8160
    MOV [0x0060794c],EAX                ; 005a8165 | DAT_0060794c
        ;   Label: LAB_005a8165
    TEST ESI,ESI                        ; 005a816a
    JZ 0x005a81ac                       ; 005a816c
        ;   XREF to: 005a81ac (CONDITIONAL_JUMP)  ; LAB_005a81ac
    PUSH 0x104                          ; 005a816e
    PUSH 0x2d255cc                      ; 005a8173 | DAT_02d255cc
    MOV EBP,dword ptr [ESP + 0x24]      ; 005a8178
    PUSH EBP                            ; 005a817c
    CALL dword ptr CS:[0x5b35b8]        ; 005a817d | PTR_GetModuleFileNameA_005b35b8
    PUSH 0x208                          ; 005a8184
    PUSH 0x2d256d0                      ; 005a8189
    MOV EAX,0x2d255cc                   ; 005a818e
    PUSH EBP                            ; 005a8193
    MOV EBX,0x2d256d0                   ; 005a8194
    MOV [0x00607948],EAX                ; 005a8199 | DAT_00607948
    CALL unkafter_asgaya.cpp_FUN_005addd0 ; 005a819e
        ;   XREF to: 005addd0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005addd0()
    ADD ESP,0xc                         ; 005a81a3
    MOV dword ptr [0x00607954],EBX      ; 005a81a6 | DAT_00607954
    MOV EAX,0x1                         ; 005a81ac
        ;   Label: LAB_005a81ac
    POP EBP                             ; 005a81b1
        ;   Label: LAB_005a81b1
    POP EDI                             ; 005a81b2
    POP ESI                             ; 005a81b3
    POP EBX                             ; 005a81b4
    RET                                 ; 005a81b5

