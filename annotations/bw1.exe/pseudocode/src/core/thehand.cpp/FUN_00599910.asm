; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_thehand_cpp_FUN_00599910(CDemonActor *param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f7fe4
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599910
        ;   Label: core_thehand.cpp_FUN_00599910
    PUSH ESI                            ; 00599911
    PUSH EDI                            ; 00599912
    PUSH EBP                            ; 00599913
    MOV EBP,ESP                         ; 00599914
    SUB ESP,0x2c                        ; 00599916
    AND ESP,0xfffffff8                  ; 00599919
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059991c
    XOR EDX,EDX                         ; 0059991f
    ADD EAX,0x20                        ; 00599921
    MOV dword ptr [ESP + 0x28],EDX      ; 00599924
    MOV dword ptr [ESP + 0x24],EDX      ; 00599928
    MOV dword ptr [ESP + 0x20],EAX      ; 0059992c
    MOV EAX,[0x00622c18]                ; 00599930 | g_CDemonSetPtr
        ;   Label: LAB_00599930
    MOV EBX,dword ptr [ESP + 0x24]      ; 00599935
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 00599939
    JGE 0x005999ff                      ; 0059993f
        ;   XREF to: 005999ff (CONDITIONAL_JUMP)  ; LAB_005999ff
    ADD EAX,dword ptr [ESP + 0x28]      ; 00599945
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00599949
    CMP EBX,dword ptr [EBP + 0x14]      ; 0059994f
    JNZ 0x0059996a                      ; 00599952
        ;   XREF to: 0059996a (CONDITIONAL_JUMP)  ; LAB_0059996a
    MOV EBX,dword ptr [ESP + 0x24]      ; 00599954
        ;   Label: LAB_00599954
    MOV ECX,dword ptr [ESP + 0x28]      ; 00599958
    INC EBX                             ; 0059995c
    ADD ECX,0x4                         ; 0059995d
    MOV dword ptr [ESP + 0x24],EBX      ; 00599960
    MOV dword ptr [ESP + 0x28],ECX      ; 00599964
    JMP 0x00599930                      ; 00599968
        ;   XREF to: 00599930 (UNCONDITIONAL_JUMP)  ; LAB_00599930
    MOV EDX,dword ptr [EBP + 0x18]      ; 0059996a
        ;   Label: LAB_0059996a
    PUSH EDX                            ; 0059996d
    PUSH EBX                            ; 0059996e
    CALL core_actor.cpp_FUN_0040c550    ; 0059996f
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00599974
    TEST EAX,EAX                        ; 00599977
    JZ 0x00599954                       ; 00599979
        ;   XREF to: 00599954 (CONDITIONAL_JUMP)  ; LAB_00599954
    MOV EDX,dword ptr [ESP + 0x20]      ; 0059997b
    LEA EAX,[EBX + 0x20]                ; 0059997f
    MOV EDI,ESP                         ; 00599982
    LEA ESI,[ESP + 0xc]                 ; 00599984
    FLD float ptr [EAX]                 ; 00599988
    FLD float ptr [EAX + 0x4]           ; 0059998a
    FLD float ptr [EAX + 0x8]           ; 0059998d
    FXCH ST2                            ; 00599990
    FSUB float ptr [EDX]                ; 00599992
    FXCH                                ; 00599994
    FSUB float ptr [EDX + 0x4]          ; 00599996
    FXCH ST2                            ; 00599999
    FSUB float ptr [EDX + 0x8]          ; 0059999b
    FXCH                                ; 0059999e
    FSTP float ptr [ESP + 0xc]          ; 005999a0
    FXCH                                ; 005999a4
    FSTP float ptr [ESP + 0x10]         ; 005999a6
    FSTP float ptr [ESP + 0x14]         ; 005999aa
    MOVSD ES:EDI,ESI                    ; 005999ae
    MOVSD ES:EDI,ESI                    ; 005999af
    MOVSD ES:EDI,ESI                    ; 005999b0
    FLD float ptr [ESP + 0x4]           ; 005999b1
    FLD ST0                             ; 005999b5
    FMUL double ptr [0x005f7fe4]        ; 005999b7 | DAT_005f7fe4
    FSTP ST1                            ; 005999bd
    FST float ptr [ESP + 0x4]           ; 005999bf
    FMUL float ptr [ESP + 0x4]          ; 005999c3
    FLD float ptr [ESP]                 ; 005999c7
    FMUL ST0                            ; 005999ca
    FADDP                               ; 005999cc
    FLD float ptr [ESP + 0x8]           ; 005999ce
    FMUL ST0                            ; 005999d2
    FADDP                               ; 005999d4
    FSQRT                               ; 005999d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005999d8
    FCOMP float ptr [EAX + 0xc1e0]      ; 005999db
    FNSTSW AX                           ; 005999e1
    SAHF                                ; 005999e3
    JNC 0x00599954                      ; 005999e4
        ;   XREF to: 00599954 (CONDITIONAL_JUMP)  ; LAB_00599954
    MOV EAX,dword ptr [EBP + 0x14]      ; 005999ea
    MOV dword ptr [EAX + 0xc1e8],EBX    ; 005999ed
    MOV EAX,0x1                         ; 005999f3
    MOV ESP,EBP                         ; 005999f8
    POP EBP                             ; 005999fa
    POP EDI                             ; 005999fb
    POP ESI                             ; 005999fc
    POP EBX                             ; 005999fd
    RET                                 ; 005999fe
    XOR EAX,EAX                         ; 005999ff
        ;   Label: LAB_005999ff
    MOV ESP,EBP                         ; 00599a01
    POP EBP                             ; 00599a03
    POP EDI                             ; 00599a04
    POP ESI                             ; 00599a05
    POP EBX                             ; 00599a06
    RET                                 ; 00599a07

