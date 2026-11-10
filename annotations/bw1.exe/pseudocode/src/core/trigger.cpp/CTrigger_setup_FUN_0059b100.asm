; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_setup_FUN_0059b100(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_setup_FUN_005aba00 at 005aba0a
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b100
        ;   Label: core_trigger.cpp_CTrigger_setup_FUN_0059b100
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059b101
    PUSH EBX                            ; 0059b105
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 0059b106
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    MOV EAX,[0x0061f650]                ; 0059b10b | DAT_0061f650
    MOV dword ptr [EBX + 0xf8],0x0      ; 0059b110
    MOV EAX,dword ptr [EAX + 0x1008]    ; 0059b11a
    MOV dword ptr [EBX + 0x100],0x1     ; 0059b120
    ADD ESP,0x4                         ; 0059b12a
    MOV EDX,dword ptr [EBX + 0x174]     ; 0059b12d
    MOV dword ptr [EBX + 0xfc],EAX      ; 0059b133
    CMP EDX,0x5                         ; 0059b139
    JZ 0x0059b1ec                       ; 0059b13c
        ;   XREF to: 0059b1ec (CONDITIONAL_JUMP)  ; LAB_0059b1ec
    CMP dword ptr [EBX + 0x174],0x4     ; 0059b142
        ;   Label: LAB_0059b142
    JNZ 0x0059b155                      ; 0059b149
        ;   XREF to: 0059b155 (CONDITIONAL_JUMP)  ; LAB_0059b155
    MOV dword ptr [EBX + 0x100],0x0     ; 0059b14b
    CMP dword ptr [EBX + 0x174],0x7     ; 0059b155
        ;   Label: LAB_0059b155
    JNZ 0x0059b168                      ; 0059b15c
        ;   XREF to: 0059b168 (CONDITIONAL_JUMP)  ; LAB_0059b168
    MOV dword ptr [EBX + 0x100],0x0     ; 0059b15e
    CMP dword ptr [EBX + 0x174],0xa     ; 0059b168
        ;   Label: LAB_0059b168
    JNZ 0x0059b17b                      ; 0059b16f
        ;   XREF to: 0059b17b (CONDITIONAL_JUMP)  ; LAB_0059b17b
    MOV dword ptr [EBX + 0x100],0x0     ; 0059b171
    PUSH 0x5f8090                       ; 0059b17b
        ;   Label: LAB_0059b17b
    LEA EAX,[EBX + 0x224]               ; 0059b180
    MOV dword ptr [EBX + 0x2f0],0x0     ; 0059b186
    PUSH EAX                            ; 0059b190
    MOV dword ptr [EBX + 0x36c],0x0     ; 0059b191
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0059b19b
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059b1a0
    TEST EAX,EAX                        ; 0059b1a3
    JNZ 0x0059b1ae                      ; 0059b1a5
        ;   XREF to: 0059b1ae (CONDITIONAL_JUMP)  ; LAB_0059b1ae
    MOV byte ptr [EBX + 0x224],0x0      ; 0059b1a7
    PUSH 0x5f8095                       ; 0059b1ae
        ;   Label: LAB_0059b1ae
    LEA EAX,[EBX + 0x288]               ; 0059b1b3
    PUSH EAX                            ; 0059b1b9
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0059b1ba
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0059b1bf
    TEST EAX,EAX                        ; 0059b1c2
    JNZ 0x0059b1cd                      ; 0059b1c4
        ;   XREF to: 0059b1cd (CONDITIONAL_JUMP)  ; LAB_0059b1cd
    MOV byte ptr [EBX + 0x288],0x0      ; 0059b1c6
    MOV AH,byte ptr [EBX + 0x224]       ; 0059b1cd
        ;   Label: LAB_0059b1cd
    MOV dword ptr [EBX + 0x104],0x0     ; 0059b1d3
    TEST AH,AH                          ; 0059b1dd
    JNZ 0x0059b1ea                      ; 0059b1df
        ;   XREF to: 0059b1ea (CONDITIONAL_JUMP)  ; LAB_0059b1ea
    CMP byte ptr [EBX + 0x288],0x0      ; 0059b1e1
    JZ 0x0059b1fb                       ; 0059b1e8
        ;   XREF to: 0059b1fb (CONDITIONAL_JUMP)  ; LAB_0059b1fb
    POP EBX                             ; 0059b1ea
        ;   Label: LAB_0059b1ea
    RET                                 ; 0059b1eb
    MOV dword ptr [EBX + 0x100],0x0     ; 0059b1ec
        ;   Label: LAB_0059b1ec
    JMP 0x0059b142                      ; 0059b1f6
        ;   XREF to: 0059b142 (UNCONDITIONAL_JUMP)  ; LAB_0059b142
    MOV dword ptr [EBX + 0x104],0x1     ; 0059b1fb
        ;   Label: LAB_0059b1fb
    POP EBX                             ; 0059b205
    RET                                 ; 0059b206

