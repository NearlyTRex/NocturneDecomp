; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_hino_cpp_FUN_0059d000(void)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hino.cpp_CHino_process_FUN_0059b960 at 0059bfe5
;
; Referenced Globals:
;   undefined4 s_Platform_005d9e63+1
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d1a0a4
;   undefined4 DAT_01d5ba14
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   crt_string.c_strstr_FUN_005a4010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d000
        ;   Label: core_hino.cpp_FUN_0059d000
    PUSH ESI                            ; 0059d001
    PUSH EDI                            ; 0059d002
    PUSH EBP                            ; 0059d003
    SUB ESP,0x34                        ; 0059d004
    MOV EDX,0x42c80000                  ; 0059d007
    XOR EBX,EBX                         ; 0059d00c
    XOR EBP,EBP                         ; 0059d00e
    MOV dword ptr [ESP + 0x2c],EDX      ; 0059d010
    MOV EAX,[0x00603b28]                ; 0059d014 | g_CDemonSetPtr
        ;   Label: LAB_0059d014
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0059d019 | g_CDemonSetInstance.actor_count
    JL 0x0059d045                       ; 0059d01f
        ;   XREF to: 0059d045 (CONDITIONAL_JUMP)  ; LAB_0059d045
    PUSH 0x5d9e64                       ; 0059d021 | s_Platform_005d9e63+1
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0059d026
    PUSH ECX                            ; 0059d02a
    CALL crt_string.c_strstr_FUN_005a4010 ; 0059d02b
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005a4010(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0059d030
    TEST EAX,EAX                        ; 0059d033
    SETNZ AL                            ; 0059d035
    AND EAX,0xff                        ; 0059d038
    ADD ESP,0x34                        ; 0059d03d
    POP EBP                             ; 0059d040
    POP EDI                             ; 0059d041
    POP ESI                             ; 0059d042
    POP EBX                             ; 0059d043
    RET                                 ; 0059d044
    MOV ESI,dword ptr [0x02d0bcd8]      ; 0059d045 | g_CWayPointClassInfo.name_hash
        ;   Label: LAB_0059d045
    PUSH ESI                            ; 0059d04b
    MOV EDI,dword ptr [EAX + EBP*0x1 + 0x14d168] ; 0059d04c | g_CDemonSetInstance.actors[0]
    PUSH EDI                            ; 0059d053
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0059d054
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0059d059
    MOV ECX,EAX                         ; 0059d05c
    TEST EAX,EAX                        ; 0059d05e
    JZ 0x0059d108                       ; 0059d060
        ;   XREF to: 0059d108 (CONDITIONAL_JUMP)  ; LAB_0059d108
    MOV EDX,dword ptr [0x01d5ba14]      ; 0059d066 | DAT_01d5ba14
    MOV EDX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 0059d06c
    LEA EDI,[ESP + 0x18]                ; 0059d073
    MOV ESI,ESP                         ; 0059d077
    FLD float ptr [EDX + 0x24]          ; 0059d079
    FLD float ptr [EDX + 0x28]          ; 0059d07c
    FLD float ptr [EDX + 0x20]          ; 0059d07f
    LEA EDX,[ESP + 0xc]                 ; 0059d082
    FSUB float ptr [EAX + 0x20]         ; 0059d086
    FXCH ST2                            ; 0059d089
    FSUB float ptr [EAX + 0x24]         ; 0059d08b
    FXCH                                ; 0059d08e
    FSUB float ptr [EAX + 0x28]         ; 0059d090
    FXCH ST2                            ; 0059d093
    FSTP float ptr [ESP]                ; 0059d095
    FSTP float ptr [ESP + 0x4]          ; 0059d098
    FSTP float ptr [ESP + 0x8]          ; 0059d09c
    LEA EAX,[ESP + 0x18]                ; 0059d0a0
    MOVSD ES:EDI,ESI                    ; 0059d0a4
    MOVSD ES:EDI,ESI                    ; 0059d0a5
    MOVSD ES:EDI,ESI                    ; 0059d0a6
    CMP EDX,EAX                         ; 0059d0a7
    JZ 0x0059d0c3                       ; 0059d0a9
        ;   XREF to: 0059d0c3 (CONDITIONAL_JUMP)  ; LAB_0059d0c3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0059d0ab
    MOV dword ptr [ESP + 0xc],EAX       ; 0059d0af
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059d0b3
    MOV dword ptr [ESP + 0x10],EAX      ; 0059d0b7
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059d0bb
    MOV dword ptr [ESP + 0x14],EAX      ; 0059d0bf
    FLD float ptr [ESP + 0x10]          ; 0059d0c3
        ;   Label: LAB_0059d0c3
    FMUL ST0                            ; 0059d0c7
    FLD float ptr [ESP + 0xc]           ; 0059d0c9
    FMUL ST0                            ; 0059d0cd
    FADDP                               ; 0059d0cf
    FLD float ptr [ESP + 0x14]          ; 0059d0d1
    FMUL ST0                            ; 0059d0d5
    FADDP                               ; 0059d0d7
    FSTP float ptr [ESP + 0x24]         ; 0059d0d9
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059d0dd
    MOV EDX,dword ptr [0x01d1a0a4]      ; 0059d0e1 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0059d0e7
    ADD EAX,EDX                         ; 0059d0e9
    MOV dword ptr [ESP + 0x30],EAX      ; 0059d0eb
    FLD float ptr [ESP + 0x30]          ; 0059d0ef
    FCOMP float ptr [ESP + 0x2c]        ; 0059d0f3
    FNSTSW AX                           ; 0059d0f7
    SAHF                                ; 0059d0f9
    JNC 0x0059d108                      ; 0059d0fa
        ;   XREF to: 0059d108 (CONDITIONAL_JUMP)  ; LAB_0059d108
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059d0fc
    MOV dword ptr [ESP + 0x28],ECX      ; 0059d100
    MOV dword ptr [ESP + 0x2c],EAX      ; 0059d104
    INC EBX                             ; 0059d108
        ;   Label: LAB_0059d108
    ADD EBP,0x4                         ; 0059d109
    JMP 0x0059d014                      ; 0059d10c
        ;   XREF to: 0059d014 (UNCONDITIONAL_JUMP)  ; LAB_0059d014

