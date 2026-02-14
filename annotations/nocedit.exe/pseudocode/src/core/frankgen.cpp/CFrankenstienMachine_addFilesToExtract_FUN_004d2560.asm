; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_frankgen_cpp_CFrankenstienMachine_addFilesToExtract_FUN_004d2560(CFrankenstienMachine *this_ptr,_FILE *file_handle)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_data_s_0062abf5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2560
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_addFilesToExtract_FUN_004d2560
    PUSH ESI                            ; 004d2561
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d2562
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d2566
    PUSH ESI                            ; 004d256a
    PUSH EBX                            ; 004d256b
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 004d256c
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d2571
    PUSH ESI                            ; 004d2574
    LEA EAX,[EBX + 0x184]               ; 004d2575
    PUSH EAX                            ; 004d257b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 004d257c
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    MOV AH,byte ptr [EBX + 0x160]       ; 004d2581
    ADD ESP,0x8                         ; 004d2587
    TEST AH,AH                          ; 004d258a
    JNZ 0x004d25a1                      ; 004d258c
        ;   XREF to: 004d25a1 (CONDITIONAL_JUMP)  ; LAB_004d25a1
    MOV DL,byte ptr [EBX + 0x384]       ; 004d258e
        ;   Label: LAB_004d258e
    LEA EAX,[EBX + 0x30c]               ; 004d2594
    TEST DL,DL                          ; 004d259a
    JNZ 0x004d25b8                      ; 004d259c
        ;   XREF to: 004d25b8 (CONDITIONAL_JUMP)  ; LAB_004d25b8
    POP ESI                             ; 004d259e
    POP EBX                             ; 004d259f
    RET                                 ; 004d25a0
    LEA EAX,[EBX + 0x160]               ; 004d25a1
        ;   Label: LAB_004d25a1
    PUSH EAX                            ; 004d25a7
    PUSH 0x62abf5                       ; 004d25a8 | = "data\\%s\n"
    PUSH ESI                            ; 004d25ad
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004d25ae
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004d25b3
    JMP 0x004d258e                      ; 004d25b6
        ;   XREF to: 004d258e (UNCONDITIONAL_JUMP)  ; LAB_004d258e
    PUSH ESI                            ; 004d25b8
        ;   Label: LAB_004d25b8
    PUSH EAX                            ; 004d25b9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 004d25ba
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d25bf
    POP ESI                             ; 004d25c2
    POP EBX                             ; 004d25c3
    RET                                 ; 004d25c4

