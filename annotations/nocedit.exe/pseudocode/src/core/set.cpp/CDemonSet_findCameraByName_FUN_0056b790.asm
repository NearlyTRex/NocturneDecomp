; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet *this_ptr,char *name)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[3]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ac723
;   core_platfrm.cpp_CPlatform_process_FUN_0054cc30 at 0054cd2f
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055cbf9
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b790
        ;   Label: core_set.cpp_CDemonSet_findCameraByName_FUN_0056b790
    PUSH ESI                            ; 0056b791
    PUSH EDI                            ; 0056b792
    PUSH EBP                            ; 0056b793
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056b794
    MOV EBP,dword ptr [ESP + 0x18]      ; 0056b798
    MOV EDX,dword ptr [EDI]             ; 0056b79c
    XOR EBX,EBX                         ; 0056b79e
    TEST EDX,EDX                        ; 0056b7a0
    JLE 0x0056b7c2                      ; 0056b7a2
        ;   XREF to: 0056b7c2 (CONDITIONAL_JUMP)  ; LAB_0056b7c2
    LEA ESI,[EDI + 0x4]                 ; 0056b7a4
    PUSH EBP                            ; 0056b7a7
        ;   Label: LAB_0056b7a7
    PUSH ESI                            ; 0056b7a8
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0056b7a9
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056b7ae
    TEST EAX,EAX                        ; 0056b7b1
    JZ 0x0056b7cc                       ; 0056b7b3
        ;   XREF to: 0056b7cc (CONDITIONAL_JUMP)  ; LAB_0056b7cc
    INC EBX                             ; 0056b7b5
    MOV ECX,dword ptr [EDI]             ; 0056b7b6
    ADD ESI,0x1a4                       ; 0056b7b8
    CMP EBX,ECX                         ; 0056b7be
    JL 0x0056b7a7                       ; 0056b7c0
        ;   XREF to: 0056b7a7 (CONDITIONAL_JUMP)  ; LAB_0056b7a7
    MOV EAX,0xffffffff                  ; 0056b7c2
        ;   Label: LAB_0056b7c2
    POP EBP                             ; 0056b7c7
    POP EDI                             ; 0056b7c8
    POP ESI                             ; 0056b7c9
    POP EBX                             ; 0056b7ca
    RET                                 ; 0056b7cb
    MOV EAX,EBX                         ; 0056b7cc
        ;   Label: LAB_0056b7cc
    POP EBP                             ; 0056b7ce
    POP EDI                             ; 0056b7cf
    POP ESI                             ; 0056b7d0
    POP EBX                             ; 0056b7d1
    RET                                 ; 0056b7d2

