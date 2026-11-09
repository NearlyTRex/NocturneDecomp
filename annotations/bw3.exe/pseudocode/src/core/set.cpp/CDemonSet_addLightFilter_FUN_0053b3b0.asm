; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_0053b3b0(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light)
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
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 0049399e
;   core_event.cpp_FUN_0048c2e0 at 0048cbe1
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b497
;
; Referenced Globals:
;   undefined4 DAT_0203a418
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b3b0
        ;   Label: core_set.cpp_CDemonSet_addLightFilter_FUN_0053b3b0
    PUSH ESI                            ; 0053b3b1
    PUSH EDI                            ; 0053b3b2
    PUSH EBP                            ; 0053b3b3
    SUB ESP,0x4                         ; 0053b3b4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0053b3b7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053b3bb
    XOR EBX,EBX                         ; 0053b3bf
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 0053b3c1
    XOR EDI,EDI                         ; 0053b3c7
    TEST EDX,EDX                        ; 0053b3c9
    JLE 0x0053b3f9                      ; 0053b3cb
        ;   XREF to: 0053b3f9 (CONDITIONAL_JUMP)  ; LAB_0053b3f9
    ADD EAX,0x19a30                     ; 0053b3cd
    XOR ESI,ESI                         ; 0053b3d2
    MOV dword ptr [ESP],EAX             ; 0053b3d4
    MOV EAX,dword ptr [ESP]             ; 0053b3d7
        ;   Label: LAB_0053b3d7
    ADD EAX,ESI                         ; 0053b3da
    MOV dword ptr [EBP],EAX             ; 0053b3dc
    CMP dword ptr [EAX],0x0             ; 0053b3df
    JZ 0x0053b412                       ; 0053b3e2
        ;   XREF to: 0053b412 (CONDITIONAL_JUMP)  ; LAB_0053b412
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053b3e4
        ;   Label: LAB_0053b3e4
    INC EBX                             ; 0053b3e8
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0053b3e9
    ADD ESI,0x1898                      ; 0053b3ef
    CMP EBX,ECX                         ; 0053b3f5
    JL 0x0053b3d7                       ; 0053b3f7
        ;   XREF to: 0053b3d7 (CONDITIONAL_JUMP)  ; LAB_0053b3d7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0053b3f9
        ;   Label: LAB_0053b3f9
    MOV dword ptr [EBP],0x0             ; 0053b3fd
    MOV dword ptr [EAX],0x0             ; 0053b404
    ADD ESP,0x4                         ; 0053b40a
    POP EBP                             ; 0053b40d
    POP EDI                             ; 0053b40e
    POP ESI                             ; 0053b40f
    POP EBX                             ; 0053b410
    RET                                 ; 0053b411
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0053b412
        ;   Label: LAB_0053b412
    PUSH ECX                            ; 0053b416
    ADD EAX,0x4                         ; 0053b417
    PUSH EAX                            ; 0053b41a
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0053b41b
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053b420
    TEST EAX,EAX                        ; 0053b423
    JZ 0x0053b42a                       ; 0053b425
        ;   XREF to: 0053b42a (CONDITIONAL_JUMP)  ; LAB_0053b42a
    INC EDI                             ; 0053b427
    JMP 0x0053b3e4                      ; 0053b428
        ;   XREF to: 0053b3e4 (UNCONDITIONAL_JUMP)  ; LAB_0053b3e4
    MOV EBX,dword ptr [ESP + 0x24]      ; 0053b42a
        ;   Label: LAB_0053b42a
    MOV EAX,dword ptr [EDI*0x4 + 0x203a418] ; 0053b42e | DAT_0203a418
    MOV dword ptr [EBX],EAX             ; 0053b435
    ADD ESP,0x4                         ; 0053b437
    POP EBP                             ; 0053b43a
    POP EDI                             ; 0053b43b
    POP ESI                             ; 0053b43c
    POP EBX                             ; 0053b43d
    RET                                 ; 0053b43e

