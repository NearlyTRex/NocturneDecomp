; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_FUN_004e1f70(CLever *this_ptr,float new_state)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   new_state
;
; XREF[2]:
;   core_event.cpp_FUN_00489670 at 0048d107
;   core_lever.cpp_FUN_004e1d70 at 004e1ec1
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;   undefined4 DAT_00618170
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CLeverClassInfo.name_hash
;   undefined4 DAT_01d192f8
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1f70
        ;   Label: core_lever.cpp_FUN_004e1f70
    PUSH ESI                            ; 004e1f71
    PUSH EDI                            ; 004e1f72
    PUSH EBP                            ; 004e1f73
    MOV EDI,dword ptr [ESP + 0x14]      ; 004e1f74
    FLD float ptr [EDI + 0x438]         ; 004e1f78
    FCOMP float ptr [ESP + 0x18]        ; 004e1f7e
    FNSTSW AX                           ; 004e1f82
    SAHF                                ; 004e1f84
    JZ 0x004e1ff8                       ; 004e1f85
        ;   XREF to: 004e1ff8 (CONDITIONAL_JUMP)  ; LAB_004e1ff8
    MOV EAX,[0x00618170]                ; 004e1f87 | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 004e1f8c | DAT_01d192f8
    JZ 0x004e1ffd                       ; 004e1f93
        ;   XREF to: 004e1ffd (CONDITIONAL_JUMP)  ; LAB_004e1ffd
    FLDZ                                ; 004e1f95
        ;   Label: LAB_004e1f95
    FCOMP float ptr [ESP + 0x18]        ; 004e1f97
    FNSTSW AX                           ; 004e1f9b
    SAHF                                ; 004e1f9d
    JNC 0x004e206e                      ; 004e1f9e
        ;   XREF to: 004e206e (CONDITIONAL_JUMP)  ; LAB_004e206e
    FLD float ptr [EDI + 0x438]         ; 004e1fa4
    FLDZ                                ; 004e1faa
    FCOMPP                              ; 004e1fac
    FNSTSW AX                           ; 004e1fae
    SAHF                                ; 004e1fb0
    JC 0x004e206e                       ; 004e1fb1
        ;   XREF to: 004e206e (CONDITIONAL_JUMP)  ; LAB_004e206e
    LEA EBX,[EDI + 0x504]               ; 004e1fb7
        ;   Label: LAB_004e1fb7
    PUSH EBX                            ; 004e1fbd
    MOV EAX,dword ptr [EDI + 0x2b0]     ; 004e1fbe
    PUSH EDI                            ; 004e1fc4
    CALL dword ptr [EAX + 0x34]         ; 004e1fc5
    ADD ESP,0x8                         ; 004e1fc8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e1fcb
        ;   Label: LAB_004e1fcb
    MOV EBP,dword ptr [EDI + 0x56c]     ; 004e1fcf
    MOV dword ptr [EDI + 0x438],EAX     ; 004e1fd5
    TEST EBP,EBP                        ; 004e1fdb
    JNZ 0x004e2094                      ; 004e1fdd
        ;   XREF to: 004e2094 (CONDITIONAL_JUMP)  ; LAB_004e2094
    XOR EBX,EBX                         ; 004e1fe3
        ;   Label: LAB_004e1fe3
    XOR ESI,ESI                         ; 004e1fe5
    MOV EAX,[0x0061b5a8]                ; 004e1fe7 | g_CDemonSetPtr
        ;   Label: LAB_004e1fe7
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 004e1fec | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004e20a3                       ; 004e1ff2
        ;   XREF to: 004e20a3 (CONDITIONAL_JUMP)  ; LAB_004e20a3
    POP EBP                             ; 004e1ff8
        ;   Label: LAB_004e1ff8
    POP EDI                             ; 004e1ff9
    POP ESI                             ; 004e1ffa
    POP EBX                             ; 004e1ffb
    RET                                 ; 004e1ffc
    FLD float ptr [ESP + 0x18]          ; 004e1ffd
        ;   Label: LAB_004e1ffd
    FLDZ                                ; 004e2001
    FCOMPP                              ; 004e2003
    FNSTSW AX                           ; 004e2005
    SAHF                                ; 004e2007
    JC 0x004e202f                       ; 004e2008
        ;   XREF to: 004e202f (CONDITIONAL_JUMP)  ; LAB_004e202f
    FLD float ptr [EDI + 0x438]         ; 004e200a
    FLDZ                                ; 004e2010
    FCOMPP                              ; 004e2012
    FNSTSW AX                           ; 004e2014
    SAHF                                ; 004e2016
    JNC 0x004e202f                      ; 004e2017
        ;   XREF to: 004e202f (CONDITIONAL_JUMP)  ; LAB_004e202f
    LEA EAX,[EDI + 0x4a0]               ; 004e2019
    PUSH EAX                            ; 004e201f
    MOV ECX,dword ptr [0x006141f0]      ; 004e2020 | DAT_006141f0
    PUSH ECX                            ; 004e2026
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004e2027
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004e202c
    FLD float ptr [ESP + 0x18]          ; 004e202f
        ;   Label: LAB_004e202f
    FLD1                                ; 004e2033
    FCOMPP                              ; 004e2035
    FNSTSW AX                           ; 004e2037
    SAHF                                ; 004e2039
    JA 0x004e1f95                       ; 004e203a
        ;   XREF to: 004e1f95 (CONDITIONAL_JUMP)  ; LAB_004e1f95
    FLD float ptr [EDI + 0x438]         ; 004e2040
    FLD1                                ; 004e2046
    FCOMPP                              ; 004e2048
    FNSTSW AX                           ; 004e204a
    SAHF                                ; 004e204c
    JBE 0x004e1f95                      ; 004e204d
        ;   XREF to: 004e1f95 (CONDITIONAL_JUMP)  ; LAB_004e1f95
    LEA EAX,[EDI + 0x43c]               ; 004e2053
    PUSH EAX                            ; 004e2059
    MOV EBX,dword ptr [0x006141f0]      ; 004e205a | DAT_006141f0
    PUSH EBX                            ; 004e2060
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004e2061
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004e2066
    JMP 0x004e1f95                      ; 004e2069
        ;   XREF to: 004e1f95 (UNCONDITIONAL_JUMP)  ; LAB_004e1f95
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 004e206e
        ;   Label: LAB_004e206e
    JGE 0x004e1fcb                      ; 004e2076
        ;   XREF to: 004e1fcb (CONDITIONAL_JUMP)  ; LAB_004e1fcb
    FLD float ptr [EDI + 0x438]         ; 004e207c
    FLD1                                ; 004e2082
    FCOMPP                              ; 004e2084
    FNSTSW AX                           ; 004e2086
    SAHF                                ; 004e2088
    JBE 0x004e1fb7                      ; 004e2089
        ;   XREF to: 004e1fb7 (CONDITIONAL_JUMP)  ; LAB_004e1fb7
    JMP 0x004e1fcb                      ; 004e208f
        ;   XREF to: 004e1fcb (UNCONDITIONAL_JUMP)  ; LAB_004e1fcb
    PUSH EAX                            ; 004e2094
        ;   Label: LAB_004e2094
    PUSH EBP                            ; 004e2095
    CALL core_lever.cpp_FUN_004e1f70    ; 004e2096
        ;   XREF to: 004e1f70 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_FUN_004e1f70(CLever * this_ptr, float new_state)
    ADD ESP,0x8                         ; 004e209b
    JMP 0x004e1fe3                      ; 004e209e
        ;   XREF to: 004e1fe3 (UNCONDITIONAL_JUMP)  ; LAB_004e1fe3
    MOV ECX,dword ptr [0x01d03500]      ; 004e20a3 | g_CLeverClassInfo.name_hash
        ;   Label: LAB_004e20a3
    PUSH ECX                            ; 004e20a9
    MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004e20aa | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBP                            ; 004e20b1
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004e20b2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004e20b7
    TEST EAX,EAX                        ; 004e20ba
    JZ 0x004e20d3                       ; 004e20bc
        ;   XREF to: 004e20d3 (CONDITIONAL_JUMP)  ; LAB_004e20d3
    CMP EDI,dword ptr [EAX + 0x56c]     ; 004e20be
    JNZ 0x004e20d3                      ; 004e20c4
        ;   XREF to: 004e20d3 (CONDITIONAL_JUMP)  ; LAB_004e20d3
    PUSH dword ptr [ESP + 0x18]         ; 004e20c6
    PUSH EAX                            ; 004e20ca
    CALL core_lever.cpp_FUN_004e1f70    ; 004e20cb
        ;   XREF to: 004e1f70 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_FUN_004e1f70(CLever * this_ptr, float new_state)
    ADD ESP,0x8                         ; 004e20d0
    INC ESI                             ; 004e20d3
        ;   Label: LAB_004e20d3
    ADD EBX,0x4                         ; 004e20d4
    JMP 0x004e1fe7                      ; 004e20d7
        ;   XREF to: 004e1fe7 (UNCONDITIONAL_JUMP)  ; LAB_004e1fe7

