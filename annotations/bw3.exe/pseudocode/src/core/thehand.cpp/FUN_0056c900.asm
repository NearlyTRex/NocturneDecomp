; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_thehand_cpp_FUN_0056c900(CDemonActor *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d6553
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_actor.cpp_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c900
        ;   Label: core_thehand.cpp_FUN_0056c900
    PUSH ESI                            ; 0056c901
    PUSH EDI                            ; 0056c902
    PUSH EBP                            ; 0056c903
    MOV EBP,ESP                         ; 0056c904
    SUB ESP,0x2c                        ; 0056c906
    AND ESP,0xfffffff8                  ; 0056c909
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056c90c
    XOR EDX,EDX                         ; 0056c90f
    ADD EAX,0x20                        ; 0056c911
    MOV dword ptr [ESP + 0x28],EDX      ; 0056c914
    MOV dword ptr [ESP + 0x24],EDX      ; 0056c918
    MOV dword ptr [ESP + 0x20],EAX      ; 0056c91c
    MOV EAX,[0x00603b28]                ; 0056c920 | g_CDemonSetPtr
        ;   Label: LAB_0056c920
    MOV EBX,dword ptr [ESP + 0x24]      ; 0056c925
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 0056c929
    JGE 0x0056c9ef                      ; 0056c92f
        ;   XREF to: 0056c9ef (CONDITIONAL_JUMP)  ; LAB_0056c9ef
    ADD EAX,dword ptr [ESP + 0x28]      ; 0056c935
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 0056c939
    CMP EBX,dword ptr [EBP + 0x14]      ; 0056c93f
    JNZ 0x0056c95a                      ; 0056c942
        ;   XREF to: 0056c95a (CONDITIONAL_JUMP)  ; LAB_0056c95a
    MOV EBX,dword ptr [ESP + 0x24]      ; 0056c944
        ;   Label: LAB_0056c944
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056c948
    INC EBX                             ; 0056c94c
    ADD ECX,0x4                         ; 0056c94d
    MOV dword ptr [ESP + 0x24],EBX      ; 0056c950
    MOV dword ptr [ESP + 0x28],ECX      ; 0056c954
    JMP 0x0056c920                      ; 0056c958
        ;   XREF to: 0056c920 (UNCONDITIONAL_JUMP)  ; LAB_0056c920
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056c95a
        ;   Label: LAB_0056c95a
    PUSH EDX                            ; 0056c95d
    PUSH EBX                            ; 0056c95e
    CALL core_actor.cpp_FUN_0040c790    ; 0056c95f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0056c964
    TEST EAX,EAX                        ; 0056c967
    JZ 0x0056c944                       ; 0056c969
        ;   XREF to: 0056c944 (CONDITIONAL_JUMP)  ; LAB_0056c944
    MOV EDX,dword ptr [ESP + 0x20]      ; 0056c96b
    LEA EAX,[EBX + 0x20]                ; 0056c96f
    MOV EDI,ESP                         ; 0056c972
    LEA ESI,[ESP + 0xc]                 ; 0056c974
    FLD float ptr [EAX]                 ; 0056c978
    FLD float ptr [EAX + 0x4]           ; 0056c97a
    FLD float ptr [EAX + 0x8]           ; 0056c97d
    FXCH ST2                            ; 0056c980
    FSUB float ptr [EDX]                ; 0056c982
    FXCH                                ; 0056c984
    FSUB float ptr [EDX + 0x4]          ; 0056c986
    FXCH ST2                            ; 0056c989
    FSUB float ptr [EDX + 0x8]          ; 0056c98b
    FXCH                                ; 0056c98e
    FSTP float ptr [ESP + 0xc]          ; 0056c990
    FXCH                                ; 0056c994
    FSTP float ptr [ESP + 0x10]         ; 0056c996
    FSTP float ptr [ESP + 0x14]         ; 0056c99a
    MOVSD ES:EDI,ESI                    ; 0056c99e
    MOVSD ES:EDI,ESI                    ; 0056c99f
    MOVSD ES:EDI,ESI                    ; 0056c9a0
    FLD float ptr [ESP + 0x4]           ; 0056c9a1
    FLD ST0                             ; 0056c9a5
    FMUL double ptr [0x005d6553]        ; 0056c9a7 | DAT_005d6553
    FSTP ST1                            ; 0056c9ad
    FST float ptr [ESP + 0x4]           ; 0056c9af
    FMUL float ptr [ESP + 0x4]          ; 0056c9b3
    FLD float ptr [ESP]                 ; 0056c9b7
    FMUL ST0                            ; 0056c9ba
    FADDP                               ; 0056c9bc
    FLD float ptr [ESP + 0x8]           ; 0056c9be
    FMUL ST0                            ; 0056c9c2
    FADDP                               ; 0056c9c4
    FSQRT                               ; 0056c9c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056c9c8
    FCOMP float ptr [EAX + 0xcddc]      ; 0056c9cb
    FNSTSW AX                           ; 0056c9d1
    SAHF                                ; 0056c9d3
    JNC 0x0056c944                      ; 0056c9d4
        ;   XREF to: 0056c944 (CONDITIONAL_JUMP)  ; LAB_0056c944
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056c9da
    MOV dword ptr [EAX + 0xcde4],EBX    ; 0056c9dd
    MOV EAX,0x1                         ; 0056c9e3
    MOV ESP,EBP                         ; 0056c9e8
    POP EBP                             ; 0056c9ea
    POP EDI                             ; 0056c9eb
    POP ESI                             ; 0056c9ec
    POP EBX                             ; 0056c9ed
    RET                                 ; 0056c9ee
    XOR EAX,EAX                         ; 0056c9ef
        ;   Label: LAB_0056c9ef
    MOV ESP,EBP                         ; 0056c9f1
    POP EBP                             ; 0056c9f3
    POP EDI                             ; 0056c9f4
    POP ESI                             ; 0056c9f5
    POP EBX                             ; 0056c9f6
    RET                                 ; 0056c9f7

