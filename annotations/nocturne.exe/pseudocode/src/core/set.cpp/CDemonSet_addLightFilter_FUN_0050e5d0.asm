; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_CDemonSet_addLightFilter_FUN_0050e5d0(int param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047f93f
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047ae98
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500834
;
; Referenced Globals:
;   undefined4 DAT_01fb99d4
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e5d0
        ;   Label: core_set.cpp_CDemonSet_addLightFilter_FUN_0050e5d0
    PUSH ESI                            ; 0050e5d1
    PUSH EDI                            ; 0050e5d2
    PUSH EBP                            ; 0050e5d3
    SUB ESP,0x4                         ; 0050e5d4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050e5d7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050e5db
    XOR EBX,EBX                         ; 0050e5df
    MOV EDX,dword ptr [EAX + 0x19644]   ; 0050e5e1
    XOR EDI,EDI                         ; 0050e5e7
    TEST EDX,EDX                        ; 0050e5e9
    JLE 0x0050e619                      ; 0050e5eb
        ;   XREF to: 0050e619 (CONDITIONAL_JUMP)  ; LAB_0050e619
    ADD EAX,0x19648                     ; 0050e5ed
    XOR ESI,ESI                         ; 0050e5f2
    MOV dword ptr [ESP],EAX             ; 0050e5f4
    MOV EAX,dword ptr [ESP]             ; 0050e5f7
        ;   Label: LAB_0050e5f7
    ADD EAX,ESI                         ; 0050e5fa
    MOV dword ptr [EBP],EAX             ; 0050e5fc
    CMP dword ptr [EAX],0x0             ; 0050e5ff
    JZ 0x0050e632                       ; 0050e602
        ;   XREF to: 0050e632 (CONDITIONAL_JUMP)  ; LAB_0050e632
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050e604
        ;   Label: LAB_0050e604
    INC EBX                             ; 0050e608
    MOV ECX,dword ptr [EAX + 0x19644]   ; 0050e609
    ADD ESI,0x1898                      ; 0050e60f
    CMP EBX,ECX                         ; 0050e615
    JL 0x0050e5f7                       ; 0050e617
        ;   XREF to: 0050e5f7 (CONDITIONAL_JUMP)  ; LAB_0050e5f7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050e619
        ;   Label: LAB_0050e619
    MOV dword ptr [EBP],0x0             ; 0050e61d
    MOV dword ptr [EAX],0x0             ; 0050e624
    ADD ESP,0x4                         ; 0050e62a
    POP EBP                             ; 0050e62d
    POP EDI                             ; 0050e62e
    POP ESI                             ; 0050e62f
    POP EBX                             ; 0050e630
    RET                                 ; 0050e631
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050e632
        ;   Label: LAB_0050e632
    PUSH ECX                            ; 0050e636
    ADD EAX,0x4                         ; 0050e637
    PUSH EAX                            ; 0050e63a
    CALL crt_string.c__stricmp_FUN_00564520 ; 0050e63b
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050e640
    TEST EAX,EAX                        ; 0050e643
    JZ 0x0050e64a                       ; 0050e645
        ;   XREF to: 0050e64a (CONDITIONAL_JUMP)  ; LAB_0050e64a
    INC EDI                             ; 0050e647
    JMP 0x0050e604                      ; 0050e648
        ;   XREF to: 0050e604 (UNCONDITIONAL_JUMP)  ; LAB_0050e604
    MOV EBX,dword ptr [ESP + 0x24]      ; 0050e64a
        ;   Label: LAB_0050e64a
    MOV EAX,dword ptr [EDI*0x4 + 0x1fb99d4] ; 0050e64e | DAT_01fb99d4
    MOV dword ptr [EBX],EAX             ; 0050e655
    ADD ESP,0x4                         ; 0050e657
    POP EBP                             ; 0050e65a
    POP EDI                             ; 0050e65b
    POP ESI                             ; 0050e65c
    POP EBX                             ; 0050e65d
    RET                                 ; 0050e65e

