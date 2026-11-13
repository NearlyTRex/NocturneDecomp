; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0(CDemonSet *this_ptr,char *name)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[3]:
;   core_event.cpp_FUN_00489670 at 0048c78f
;   core_platfrm.cpp_CPlatform_process_FUN_005184c0 at 005185bf
;   core_script.cpp_CScript_step_FUN_00522350 at 00524fef
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e8c0
        ;   Label: core_set.cpp_CDemonSet_findCameraByName_FUN_0052e8c0
    PUSH ESI                            ; 0052e8c1
    PUSH EDI                            ; 0052e8c2
    PUSH EBP                            ; 0052e8c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0052e8c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0052e8c8
    MOV EDX,dword ptr [EDI]             ; 0052e8cc
    XOR EBX,EBX                         ; 0052e8ce
    TEST EDX,EDX                        ; 0052e8d0
    JLE 0x0052e8f2                      ; 0052e8d2
        ;   XREF to: 0052e8f2 (CONDITIONAL_JUMP)  ; LAB_0052e8f2
    LEA ESI,[EDI + 0x4]                 ; 0052e8d4
    PUSH EBP                            ; 0052e8d7
        ;   Label: LAB_0052e8d7
    PUSH ESI                            ; 0052e8d8
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0052e8d9
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052e8de
    TEST EAX,EAX                        ; 0052e8e1
    JZ 0x0052e8fc                       ; 0052e8e3
        ;   XREF to: 0052e8fc (CONDITIONAL_JUMP)  ; LAB_0052e8fc
    INC EBX                             ; 0052e8e5
    MOV ECX,dword ptr [EDI]             ; 0052e8e6
    ADD ESI,0x1a4                       ; 0052e8e8
    CMP EBX,ECX                         ; 0052e8ee
    JL 0x0052e8d7                       ; 0052e8f0
        ;   XREF to: 0052e8d7 (CONDITIONAL_JUMP)  ; LAB_0052e8d7
    MOV EAX,0xffffffff                  ; 0052e8f2
        ;   Label: LAB_0052e8f2
    POP EBP                             ; 0052e8f7
    POP EDI                             ; 0052e8f8
    POP ESI                             ; 0052e8f9
    POP EBX                             ; 0052e8fa
    RET                                 ; 0052e8fb
    MOV EAX,EBX                         ; 0052e8fc
        ;   Label: LAB_0052e8fc
    POP EBP                             ; 0052e8fe
    POP EDI                             ; 0052e8ff
    POP ESI                             ; 0052e900
    POP EBX                             ; 0052e901
    RET                                 ; 0052e902

