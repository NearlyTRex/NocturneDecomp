; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   light_name
; C3DSLight * *    Stack[0xc]:4   out_light
; CDemonLight * *  Stack[0x10]:4   out_master_light
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 at 004af998
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004aaf08
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055bd84
;
; Referenced Globals:
;   CDemonLight*[96] g_MasterLightList
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570f10
        ;   Label: core_set.cpp_CDemonSet_addLightFilter_FUN_00570f10
    PUSH ESI                            ; 00570f11
    PUSH EDI                            ; 00570f12
    PUSH EBP                            ; 00570f13
    SUB ESP,0x4                         ; 00570f14
    MOV EBP,dword ptr [ESP + 0x20]      ; 00570f17
    MOV EAX,dword ptr [ESP + 0x18]      ; 00570f1b
    XOR EBX,EBX                         ; 00570f1f
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 00570f21
    XOR EDI,EDI                         ; 00570f27
    TEST EDX,EDX                        ; 00570f29
    JLE 0x00570f59                      ; 00570f2b
        ;   XREF to: 00570f59 (CONDITIONAL_JUMP)  ; LAB_00570f59
    ADD EAX,0x19a30                     ; 00570f2d
    XOR ESI,ESI                         ; 00570f32
    MOV dword ptr [ESP],EAX             ; 00570f34
    MOV EAX,dword ptr [ESP]             ; 00570f37
        ;   Label: LAB_00570f37
    ADD EAX,ESI                         ; 00570f3a
    MOV dword ptr [EBP],EAX             ; 00570f3c
    CMP dword ptr [EAX],0x0             ; 00570f3f
    JZ 0x00570f72                       ; 00570f42
        ;   XREF to: 00570f72 (CONDITIONAL_JUMP)  ; LAB_00570f72
    MOV EAX,dword ptr [ESP + 0x18]      ; 00570f44
        ;   Label: LAB_00570f44
    INC EBX                             ; 00570f48
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 00570f49
    ADD ESI,0x1898                      ; 00570f4f
    CMP EBX,ECX                         ; 00570f55
    JL 0x00570f37                       ; 00570f57
        ;   XREF to: 00570f37 (CONDITIONAL_JUMP)  ; LAB_00570f37
    MOV EAX,dword ptr [ESP + 0x24]      ; 00570f59
        ;   Label: LAB_00570f59
    MOV dword ptr [EBP],0x0             ; 00570f5d
    MOV dword ptr [EAX],0x0             ; 00570f64
    ADD ESP,0x4                         ; 00570f6a
    POP EBP                             ; 00570f6d
    POP EDI                             ; 00570f6e
    POP ESI                             ; 00570f6f
    POP EBX                             ; 00570f70
    RET                                 ; 00570f71
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00570f72
        ;   Label: LAB_00570f72
    PUSH ECX                            ; 00570f76
    ADD EAX,0x4                         ; 00570f77
    PUSH EAX                            ; 00570f7a
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00570f7b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00570f80
    TEST EAX,EAX                        ; 00570f83
    JZ 0x00570f8a                       ; 00570f85
        ;   XREF to: 00570f8a (CONDITIONAL_JUMP)  ; LAB_00570f8a
    INC EDI                             ; 00570f87
    JMP 0x00570f44                      ; 00570f88
        ;   XREF to: 00570f44 (UNCONDITIONAL_JUMP)  ; LAB_00570f44
    MOV EBX,dword ptr [ESP + 0x24]      ; 00570f8a
        ;   Label: LAB_00570f8a
    MOV EAX,dword ptr [EDI*0x4 + 0x3276db0] ; 00570f8e | g_MasterLightList
    MOV dword ptr [EBX],EAX             ; 00570f95
    ADD ESP,0x4                         ; 00570f97
    POP EBP                             ; 00570f9a
    POP EDI                             ; 00570f9b
    POP ESI                             ; 00570f9c
    POP EBX                             ; 00570f9d
    RET                                 ; 00570f9e

