; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_setup_FUN_00547a00(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWaypoint_setup_FUN_00552510 at 0055251b
;
; Referenced Globals:
;   TerminatedCString s_none_0059699b
;   TerminatedCString s_none_005969a0
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547a00
        ;   Label: core_trigger.cpp_CTrigger_setup_FUN_00547a00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00547a01
    PUSH EBX                            ; 00547a05
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00547a06
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    MOV EAX,[0x005baf90]                ; 00547a0b | DAT_005baf90
    MOV dword ptr [EBX + 0xf8],0x0      ; 00547a10
    MOV EAX,dword ptr [EAX + 0x4]       ; 00547a1a | DAT_01cc9454
    MOV dword ptr [EBX + 0x100],0x1     ; 00547a1d
    ADD ESP,0x4                         ; 00547a27
    MOV EDX,dword ptr [EBX + 0x16c]     ; 00547a2a
    MOV dword ptr [EBX + 0xfc],EAX      ; 00547a30
    CMP EDX,0x5                         ; 00547a36
    JZ 0x00547ad6                       ; 00547a39
        ;   XREF to: 00547ad6 (CONDITIONAL_JUMP)  ; LAB_00547ad6
    CMP dword ptr [EBX + 0x16c],0x4     ; 00547a3f
        ;   Label: LAB_00547a3f
    JNZ 0x00547a52                      ; 00547a46
        ;   XREF to: 00547a52 (CONDITIONAL_JUMP)  ; LAB_00547a52
    MOV dword ptr [EBX + 0x100],0x0     ; 00547a48
    CMP dword ptr [EBX + 0x16c],0x7     ; 00547a52
        ;   Label: LAB_00547a52
    JNZ 0x00547a65                      ; 00547a59
        ;   XREF to: 00547a65 (CONDITIONAL_JUMP)  ; LAB_00547a65
    MOV dword ptr [EBX + 0x100],0x0     ; 00547a5b
    PUSH 0x59699b                       ; 00547a65 | = "none"
        ;   Label: LAB_00547a65
    LEA EAX,[EBX + 0x21c]               ; 00547a6a
    MOV dword ptr [EBX + 0x2e8],0x0     ; 00547a70
    PUSH EAX                            ; 00547a7a
    MOV dword ptr [EBX + 0x360],0x0     ; 00547a7b
    CALL crt_string.c__stricmp_FUN_00564520 ; 00547a85
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00547a8a
    TEST EAX,EAX                        ; 00547a8d
    JNZ 0x00547a98                      ; 00547a8f
        ;   XREF to: 00547a98 (CONDITIONAL_JUMP)  ; LAB_00547a98
    MOV byte ptr [EBX + 0x21c],0x0      ; 00547a91
    PUSH 0x5969a0                       ; 00547a98 | = "none"
        ;   Label: LAB_00547a98
    LEA EAX,[EBX + 0x280]               ; 00547a9d
    PUSH EAX                            ; 00547aa3
    CALL crt_string.c__stricmp_FUN_00564520 ; 00547aa4
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00547aa9
    TEST EAX,EAX                        ; 00547aac
    JNZ 0x00547ab7                      ; 00547aae
        ;   XREF to: 00547ab7 (CONDITIONAL_JUMP)  ; LAB_00547ab7
    MOV byte ptr [EBX + 0x280],0x0      ; 00547ab0
    MOV AH,byte ptr [EBX + 0x21c]       ; 00547ab7
        ;   Label: LAB_00547ab7
    MOV dword ptr [EBX + 0x104],0x0     ; 00547abd
    TEST AH,AH                          ; 00547ac7
    JNZ 0x00547ad4                      ; 00547ac9
        ;   XREF to: 00547ad4 (CONDITIONAL_JUMP)  ; LAB_00547ad4
    CMP byte ptr [EBX + 0x280],0x0      ; 00547acb
    JZ 0x00547ae5                       ; 00547ad2
        ;   XREF to: 00547ae5 (CONDITIONAL_JUMP)  ; LAB_00547ae5
    POP EBX                             ; 00547ad4
        ;   Label: LAB_00547ad4
    RET                                 ; 00547ad5
    MOV dword ptr [EBX + 0x100],0x0     ; 00547ad6
        ;   Label: LAB_00547ad6
    JMP 0x00547a3f                      ; 00547ae0
        ;   XREF to: 00547a3f (UNCONDITIONAL_JUMP)  ; LAB_00547a3f
    MOV dword ptr [EBX + 0x104],0x1     ; 00547ae5
        ;   Label: LAB_00547ae5
    POP EBX                             ; 00547aef
    RET                                 ; 00547af0

