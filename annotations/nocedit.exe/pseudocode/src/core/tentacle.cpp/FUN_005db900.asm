; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_tentacle.cpp_FUN_005db900()
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_tentacle.cpp_CTentacle_process_FUN_005db050 at 005db133
;
; Referenced Globals:
;   double DOUBLE_00654e8c = 3
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.damage_listener_count
;   undefined4 g_CDemonSetInstance.damage_listeners
;   undefined4 DAT_03263318
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005db900
        ;   Label: core_tentacle.cpp_FUN_005db900
    PUSH ESI                            ; 005db901
    PUSH EDI                            ; 005db902
    PUSH EBP                            ; 005db903
    MOV EBP,ESP                         ; 005db904
    SUB ESP,0x18                        ; 005db906
    AND ESP,0xfffffff8                  ; 005db909
    MOV ESI,dword ptr [EBP + 0x14]      ; 005db90c
    XOR EDX,EDX                         ; 005db90f
    XOR EDI,EDI                         ; 005db911
    ADD ESI,0x20                        ; 005db913
    MOV dword ptr [ESP + 0x14],EDX      ; 005db916
    MOV EAX,[0x006810c8]                ; 005db91a | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005db91a
    MOV EBX,dword ptr [ESP + 0x14]      ; 005db91f
    CMP EBX,dword ptr [EAX + 0x14f098]  ; 005db923 | g_CDemonSetInstance.damage_listener_count
    JGE 0x005db9c2                      ; 005db929
        ;   XREF to: 005db9c2 (CONDITIONAL_JUMP)  ; LAB_005db9c2
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f09c] ; 005db92f | g_CDemonSetInstance.damage_listeners | DAT_03263318
    CMP EBX,dword ptr [EBP + 0x14]      ; 005db936
    JNZ 0x005db949                      ; 005db939
        ;   XREF to: 005db949 (CONDITIONAL_JUMP)  ; LAB_005db949
    MOV ECX,dword ptr [ESP + 0x14]      ; 005db93b
        ;   Label: LAB_005db93b
    INC ECX                             ; 005db93f
    ADD EDI,0x4                         ; 005db940
    MOV dword ptr [ESP + 0x14],ECX      ; 005db943
    JMP 0x005db91a                      ; 005db947
        ;   XREF to: 005db91a (UNCONDITIONAL_JUMP)  ; LAB_005db91a
    MOV EDX,dword ptr [EBP + 0x18]      ; 005db949
        ;   Label: LAB_005db949
    PUSH EDX                            ; 005db94c
    PUSH EBX                            ; 005db94d
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005db94e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005db953
    TEST EAX,EAX                        ; 005db956
    JZ 0x005db93b                       ; 005db958
        ;   XREF to: 005db93b (CONDITIONAL_JUMP)  ; LAB_005db93b
    LEA EAX,[EBX + 0x20]                ; 005db95a
    FLD float ptr [EAX]                 ; 005db95d
    FSUB float ptr [ESI]                ; 005db95f
    FSTP float ptr [ESP]                ; 005db961
    FLD float ptr [EAX + 0x4]           ; 005db964
    FSUB float ptr [ESI + 0x4]          ; 005db967
    FST float ptr [ESP + 0x4]           ; 005db96a
    FLD ST0                             ; 005db96e
    FMUL double ptr [0x00654e8c]        ; 005db970 | DOUBLE_00654e8c
    FLD float ptr [EAX + 0x8]           ; 005db976
    FSUB float ptr [ESI + 0x8]          ; 005db979
    FXCH                                ; 005db97c
    FSTP ST2                            ; 005db97e
    FXCH                                ; 005db980
    FST float ptr [ESP + 0x4]           ; 005db982
    FMUL float ptr [ESP + 0x4]          ; 005db986
    FLD float ptr [ESP]                 ; 005db98a
    FMUL ST0                            ; 005db98d
    FADDP                               ; 005db98f
    FXCH                                ; 005db991
    FST float ptr [ESP + 0x8]           ; 005db993
    FMUL float ptr [ESP + 0x8]          ; 005db997
    FADDP                               ; 005db99b
    FSQRT                               ; 005db99d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005db99f
    FCOMP float ptr [EAX + 0xbe34]      ; 005db9a2
    FNSTSW AX                           ; 005db9a8
    SAHF                                ; 005db9aa
    JNC 0x005db93b                      ; 005db9ab
        ;   XREF to: 005db93b (CONDITIONAL_JUMP)  ; LAB_005db93b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005db9ad
    MOV dword ptr [EAX + 0xbe3c],EBX    ; 005db9b0
    MOV EAX,0x1                         ; 005db9b6
    MOV ESP,EBP                         ; 005db9bb
    POP EBP                             ; 005db9bd
    POP EDI                             ; 005db9be
    POP ESI                             ; 005db9bf
    POP EBX                             ; 005db9c0
    RET                                 ; 005db9c1
    XOR EAX,EAX                         ; 005db9c2
        ;   Label: LAB_005db9c2
    MOV ESP,EBP                         ; 005db9c4
    POP EBP                             ; 005db9c6
    POP EDI                             ; 005db9c7
    POP ESI                             ; 005db9c8
    POP EBX                             ; 005db9c9
    RET                                 ; 005db9ca

