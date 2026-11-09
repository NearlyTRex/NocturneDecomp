; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00433130(CDemonActor *param_1,uint *param_2)
;
;
; Called Functions:
;   core_actor.cpp_crc32ProcessInt_FUN_0040d180
;   core_actor.cpp_crc32ProcessString_FUN_0040d1c0
;   core_actor.cpp_FUN_00409c80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433130
        ;   Label: core_charactr.cpp_FUN_00433130
    PUSH ESI                            ; 00433131
    PUSH EDI                            ; 00433132
    MOV EDI,dword ptr [ESP + 0x10]      ; 00433133
    MOV EBX,dword ptr [ESP + 0x14]      ; 00433137
    PUSH EBX                            ; 0043313b
    PUSH EDI                            ; 0043313c
    CALL core_actor.cpp_FUN_00409c80    ; 0043313d
        ;   XREF to: 00409c80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00409c80(CDemonActor * this_ptr, uint * out_crc)
    ADD ESP,0x8                         ; 00433142
    PUSH dword ptr [EDI + 0x2538]       ; 00433145
    LEA ESI,[EDI + 0x158]               ; 0043314b
    PUSH EBX                            ; 00433151
    ADD EDI,0x24a8                      ; 00433152
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040d180 ; 00433158
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040d180(uint * crc_state, int value)
    MOV AH,byte ptr [EDI]               ; 0043315d
    ADD ESP,0x8                         ; 0043315f
    TEST AH,AH                          ; 00433162
    JNZ 0x0043316a                      ; 00433164
        ;   XREF to: 0043316a (CONDITIONAL_JUMP)  ; LAB_0043316a
    POP EDI                             ; 00433166
    POP ESI                             ; 00433167
    POP EBX                             ; 00433168
    RET                                 ; 00433169
    PUSH EDI                            ; 0043316a
        ;   Label: LAB_0043316a
    PUSH EBX                            ; 0043316b
    CALL core_actor.cpp_crc32ProcessString_FUN_0040d1c0 ; 0043316c
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040d1c0(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 00433171
    PUSH ESI                            ; 00433174
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00433175
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0043317a
    PUSH EAX                            ; 0043317d
    PUSH EBX                            ; 0043317e
    CALL core_actor.cpp_crc32ProcessString_FUN_0040d1c0 ; 0043317f
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040d1c0(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 00433184
    SUB ESP,0x4                         ; 00433187
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043318a
    MOV dword ptr [ESP],EAX             ; 0043318d
    PUSH EBX                            ; 00433190
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040d180 ; 00433191
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040d180(uint * crc_state, int value)
    ADD ESP,0x8                         ; 00433196
    POP EDI                             ; 00433199
    POP ESI                             ; 0043319a
    POP EBX                             ; 0043319b
    RET                                 ; 0043319c

