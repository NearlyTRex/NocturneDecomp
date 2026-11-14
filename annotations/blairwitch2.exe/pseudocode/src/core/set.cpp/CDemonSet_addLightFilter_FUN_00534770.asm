; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00534770(CDemonSet *this_ptr,char *light_name,C3DSLight **out_light,CDemonLight **out_master_light)
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
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 00490236
;   core_event.cpp_FUN_00489670 at 00489f09
;   core_script.cpp_CScript_step_FUN_00522350 at 00523efb
;
; Referenced Globals:
;   undefined4 DAT_01fc8d04
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534770
        ;   Label: core_set.cpp_CDemonSet_addLightFilter_FUN_00534770
    PUSH ESI                            ; 00534771
    PUSH EDI                            ; 00534772
    PUSH EBP                            ; 00534773
    SUB ESP,0x4                         ; 00534774
    MOV EBP,dword ptr [ESP + 0x20]      ; 00534777
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053477b
    XOR EBX,EBX                         ; 0053477f
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 00534781
    XOR EDI,EDI                         ; 00534787
    TEST EDX,EDX                        ; 00534789
    JLE 0x005347b9                      ; 0053478b
        ;   XREF to: 005347b9 (CONDITIONAL_JUMP)  ; LAB_005347b9
    ADD EAX,0x19a30                     ; 0053478d
    XOR ESI,ESI                         ; 00534792
    MOV dword ptr [ESP],EAX             ; 00534794
    MOV EAX,dword ptr [ESP]             ; 00534797
        ;   Label: LAB_00534797
    ADD EAX,ESI                         ; 0053479a
    MOV dword ptr [EBP],EAX             ; 0053479c
    CMP dword ptr [EAX],0x0             ; 0053479f
    JZ 0x005347d2                       ; 005347a2
        ;   XREF to: 005347d2 (CONDITIONAL_JUMP)  ; LAB_005347d2
    MOV EAX,dword ptr [ESP + 0x18]      ; 005347a4
        ;   Label: LAB_005347a4
    INC EBX                             ; 005347a8
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 005347a9
    ADD ESI,0x1898                      ; 005347af
    CMP EBX,ECX                         ; 005347b5
    JL 0x00534797                       ; 005347b7
        ;   XREF to: 00534797 (CONDITIONAL_JUMP)  ; LAB_00534797
    MOV EAX,dword ptr [ESP + 0x24]      ; 005347b9
        ;   Label: LAB_005347b9
    MOV dword ptr [EBP],0x0             ; 005347bd
    MOV dword ptr [EAX],0x0             ; 005347c4
    ADD ESP,0x4                         ; 005347ca
    POP EBP                             ; 005347cd
    POP EDI                             ; 005347ce
    POP ESI                             ; 005347cf
    POP EBX                             ; 005347d0
    RET                                 ; 005347d1
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005347d2
        ;   Label: LAB_005347d2
    PUSH ECX                            ; 005347d6
    ADD EAX,0x4                         ; 005347d7
    PUSH EAX                            ; 005347da
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005347db
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005347e0
    TEST EAX,EAX                        ; 005347e3
    JZ 0x005347ea                       ; 005347e5
        ;   XREF to: 005347ea (CONDITIONAL_JUMP)  ; LAB_005347ea
    INC EDI                             ; 005347e7
    JMP 0x005347a4                      ; 005347e8
        ;   XREF to: 005347a4 (UNCONDITIONAL_JUMP)  ; LAB_005347a4
    MOV EBX,dword ptr [ESP + 0x24]      ; 005347ea
        ;   Label: LAB_005347ea
    MOV EAX,dword ptr [EDI*0x4 + 0x1fc8d04] ; 005347ee | DAT_01fc8d04
    MOV dword ptr [EBX],EAX             ; 005347f5
    ADD ESP,0x4                         ; 005347f7
    POP EBP                             ; 005347fa
    POP EDI                             ; 005347fb
    POP ESI                             ; 005347fc
    POP EBX                             ; 005347fd
    RET                                 ; 005347fe

