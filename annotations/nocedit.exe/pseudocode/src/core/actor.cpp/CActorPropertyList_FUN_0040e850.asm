; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e850(void)
;
; Local Variables:
; undefined1       Stack[-0xec]:1  local_ec
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_FUN_0053c4f0 at 0053c662
;
; Referenced Globals:
;   TerminatedCString s_anon_006144bf
;
; Called Functions:
;   core_actor.cpp_CActorProperty_FUN_0040ea50
;   core_actor.cpp_FUN_0040ee30
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_fillRectWithBorder_FUN_00403200
;   engine_2d.c_getTextWrapEnabled_FUN_004027f0
;   engine_2d.c_setTextWrapEnabled_FUN_00402800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e850
        ;   Label: core_actor.cpp_CActorPropertyList_FUN_0040e850
    PUSH ESI                            ; 0040e851
    PUSH EDI                            ; 0040e852
    PUSH EBP                            ; 0040e853
    SUB ESP,0xdc                        ; 0040e854
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0040e85a
    CALL engine_2d.c_getTextWrapEnabled_FUN_004027f0 ; 0040e861
        ;   XREF to: 004027f0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getTextWrapEnabled_FUN_004027f0()
    PUSH 0x0                            ; 0040e866
    MOV dword ptr [ESP + 0xcc],EAX      ; 0040e868
    CALL engine_2d.c_setTextWrapEnabled_FUN_00402800 ; 0040e86f
        ;   XREF to: 00402800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setTextWrapEnabled_FUN_00402800(int enabled)
    XOR EBP,EBP                         ; 0040e874
    ADD ESP,0x4                         ; 0040e876
    MOV EDI,dword ptr [EBX + 0x2500]    ; 0040e879
    MOV EDX,dword ptr [EBX + 0x4]       ; 0040e87f
    ADD EDI,0x2                         ; 0040e882
    TEST EDX,EDX                        ; 0040e885
    JLE 0x0040e995                      ; 0040e887
        ;   XREF to: 0040e995 (CONDITIONAL_JUMP)  ; LAB_0040e995
    LEA EAX,[EDI + -0x2]                ; 0040e88d
    MOV dword ptr [ESP + 0xd4],EAX      ; 0040e890
    LEA EAX,[EDI + 0xb]                 ; 0040e897
    LEA ESI,[EBX + 0x8]                 ; 0040e89a
    MOV dword ptr [ESP + 0xd8],EAX      ; 0040e89d
    MOV EAX,ESP                         ; 0040e8a4
        ;   Label: LAB_0040e8a4
    PUSH EAX                            ; 0040e8a6
    MOV ECX,dword ptr [EBX]             ; 0040e8a7
    PUSH ECX                            ; 0040e8a9
    PUSH ESI                            ; 0040e8aa
    MOV dword ptr [ESP + 0xdc],ESI      ; 0040e8ab
    CALL core_actor.cpp_CActorProperty_FUN_0040ea50 ; 0040e8b2
        ;   XREF to: 0040ea50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorProperty_FUN_0040ea50()
    ADD ESP,0xc                         ; 0040e8b7
    PUSH ESI                            ; 0040e8ba
    CALL core_actor.cpp_FUN_0040ee30    ; 0040e8bb
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040ee30()
    MOV EDX,dword ptr [EBX + 0x24f0]    ; 0040e8c0
    ADD ESP,0x4                         ; 0040e8c6
    SUB EDX,EAX                         ; 0040e8c9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0040e8cb
    MOV dword ptr [ESP + 0xcc],EDX      ; 0040e8d2
    CMP EBP,EAX                         ; 0040e8d9
    JNZ 0x0040e918                      ; 0040e8db
        ;   XREF to: 0040e918 (CONDITIONAL_JUMP)  ; LAB_0040e918
    MOV EDX,dword ptr [ESI + 0x54]      ; 0040e8dd
    MOV EAX,0xfa                        ; 0040e8e0
    TEST EDX,EDX                        ; 0040e8e5
    JZ 0x0040e9b0                       ; 0040e8e7
        ;   XREF to: 0040e9b0 (CONDITIONAL_JUMP)  ; LAB_0040e9b0
    PUSH EAX                            ; 0040e8ed
        ;   Label: LAB_0040e8ed
    PUSH 0x0                            ; 0040e8ee
    MOV ECX,dword ptr [ESP + 0xe0]      ; 0040e8f0
    MOV EAX,dword ptr [EBX + 0x24fc]    ; 0040e8f7
    PUSH ECX                            ; 0040e8fd
    DEC EAX                             ; 0040e8fe
    PUSH EAX                            ; 0040e8ff
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040e900
    PUSH EAX                            ; 0040e907
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 0040e908
    INC EAX                             ; 0040e90e
    PUSH EAX                            ; 0040e90f
    CALL engine_2d.c_fillRectWithBorder_FUN_00403200 ; 0040e910
        ;   XREF to: 00403200 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 0040e915
    PUSH EDI                            ; 0040e918
        ;   Label: LAB_0040e918
    MOV ECX,dword ptr [ESP + 0xd0]      ; 0040e919
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0040e920
    PUSH ECX                            ; 0040e927
    ADD EAX,0x4                         ; 0040e928
    PUSH EAX                            ; 0040e92b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0040e92c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0040e931
    PUSH EDI                            ; 0040e934
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0040e935
    PUSH EAX                            ; 0040e93b
    PUSH 0x6144bf                       ; 0040e93c | = ": "
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0040e941
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0040e946
    PUSH EDI                            ; 0040e949
    MOV EDX,dword ptr [EBX + 0x24f4]    ; 0040e94a
    PUSH EDX                            ; 0040e950
    LEA EAX,[ESP + 0x8]                 ; 0040e951
    ADD ESI,0xec                        ; 0040e955
    PUSH EAX                            ; 0040e95b
    INC EBP                             ; 0040e95c
    ADD EDI,0xe                         ; 0040e95d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0040e960
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0040e965
    MOV EDX,dword ptr [EBX + 0x4]       ; 0040e968
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0040e96b
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0040e972
    ADD ECX,0xe                         ; 0040e979
    ADD EAX,0xe                         ; 0040e97c
    MOV dword ptr [ESP + 0xd4],ECX      ; 0040e97f
    MOV dword ptr [ESP + 0xd8],EAX      ; 0040e986
    CMP EBP,EDX                         ; 0040e98d
    JL 0x0040e8a4                       ; 0040e98f
        ;   XREF to: 0040e8a4 (CONDITIONAL_JUMP)  ; LAB_0040e8a4
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0040e995
        ;   Label: LAB_0040e995
    PUSH EDX                            ; 0040e99c
    CALL engine_2d.c_setTextWrapEnabled_FUN_00402800 ; 0040e99d
        ;   XREF to: 00402800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setTextWrapEnabled_FUN_00402800(int enabled)
    ADD ESP,0x4                         ; 0040e9a2
    ADD ESP,0xdc                        ; 0040e9a5
    POP EBP                             ; 0040e9ab
    POP EDI                             ; 0040e9ac
    POP ESI                             ; 0040e9ad
    POP EBX                             ; 0040e9ae
    RET                                 ; 0040e9af
    MOV EAX,0x7                         ; 0040e9b0
        ;   Label: LAB_0040e9b0
    JMP 0x0040e8ed                      ; 0040e9b5
        ;   XREF to: 0040e8ed (UNCONDITIONAL_JUMP)  ; LAB_0040e8ed

