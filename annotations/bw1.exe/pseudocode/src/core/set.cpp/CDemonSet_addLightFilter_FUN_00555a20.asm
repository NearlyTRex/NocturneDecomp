; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00555a20(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   light_name
; C3DSLight * *    Stack[0xc]:4   out_light
; CDemonLight * *  Stack[0x10]:4   out_master_light
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a8b26
;   core_event.cpp_FUN_004a1d00 at 004a260a
;   core_script.cpp_CScript_step_FUN_00544460 at 00545db0
;
; Referenced Globals:
;   undefined4 DAT_01fe4cb8
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555a20
        ;   Label: core_set.cpp_CDemonSet_addLightFilter_FUN_00555a20
    PUSH ESI                            ; 00555a21
    PUSH EDI                            ; 00555a22
    PUSH EBP                            ; 00555a23
    SUB ESP,0x4                         ; 00555a24
    MOV EBP,dword ptr [ESP + 0x20]      ; 00555a27
    MOV EAX,dword ptr [ESP + 0x18]      ; 00555a2b
    XOR EBX,EBX                         ; 00555a2f
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 00555a31
    XOR EDI,EDI                         ; 00555a37
    TEST EDX,EDX                        ; 00555a39
    JLE 0x00555a69                      ; 00555a3b
        ;   XREF to: 00555a69 (CONDITIONAL_JUMP)  ; LAB_00555a69
    ADD EAX,0x19a30                     ; 00555a3d
    XOR ESI,ESI                         ; 00555a42
    MOV dword ptr [ESP],EAX             ; 00555a44
    MOV EAX,dword ptr [ESP]             ; 00555a47
        ;   Label: LAB_00555a47
    ADD EAX,ESI                         ; 00555a4a
    MOV dword ptr [EBP],EAX             ; 00555a4c
    CMP dword ptr [EAX],0x0             ; 00555a4f
    JZ 0x00555a82                       ; 00555a52
        ;   XREF to: 00555a82 (CONDITIONAL_JUMP)  ; LAB_00555a82
    MOV EAX,dword ptr [ESP + 0x18]      ; 00555a54
        ;   Label: LAB_00555a54
    INC EBX                             ; 00555a58
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 00555a59
    ADD ESI,0x1898                      ; 00555a5f
    CMP EBX,ECX                         ; 00555a65
    JL 0x00555a47                       ; 00555a67
        ;   XREF to: 00555a47 (CONDITIONAL_JUMP)  ; LAB_00555a47
    MOV EAX,dword ptr [ESP + 0x24]      ; 00555a69
        ;   Label: LAB_00555a69
    MOV dword ptr [EBP],0x0             ; 00555a6d
    MOV dword ptr [EAX],0x0             ; 00555a74
    ADD ESP,0x4                         ; 00555a7a
    POP EBP                             ; 00555a7d
    POP EDI                             ; 00555a7e
    POP ESI                             ; 00555a7f
    POP EBX                             ; 00555a80
    RET                                 ; 00555a81
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00555a82
        ;   Label: LAB_00555a82
    PUSH ECX                            ; 00555a86
    ADD EAX,0x4                         ; 00555a87
    PUSH EAX                            ; 00555a8a
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00555a8b
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00555a90
    TEST EAX,EAX                        ; 00555a93
    JZ 0x00555a9a                       ; 00555a95
        ;   XREF to: 00555a9a (CONDITIONAL_JUMP)  ; LAB_00555a9a
    INC EDI                             ; 00555a97
    JMP 0x00555a54                      ; 00555a98
        ;   XREF to: 00555a54 (UNCONDITIONAL_JUMP)  ; LAB_00555a54
    MOV EBX,dword ptr [ESP + 0x24]      ; 00555a9a
        ;   Label: LAB_00555a9a
    MOV EAX,dword ptr [EDI*0x4 + 0x1fe4cb8] ; 00555a9e | DAT_01fe4cb8
    MOV dword ptr [EBX],EAX             ; 00555aa5
    ADD ESP,0x4                         ; 00555aa7
    POP EBP                             ; 00555aaa
    POP EDI                             ; 00555aab
    POP ESI                             ; 00555aac
    POP EBX                             ; 00555aad
    RET                                 ; 00555aae

