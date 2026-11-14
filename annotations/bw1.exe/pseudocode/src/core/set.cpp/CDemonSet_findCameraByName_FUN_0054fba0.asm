; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0(CDemonSet *this_ptr,char *name)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[3]:
;   core_event.cpp_FUN_004a1d00 at 004a5043
;   core_platfrm.cpp_CPlatform_process_FUN_00539810 at 0053990f
;   core_script.cpp_CScript_step_FUN_00544460 at 00546ea4
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fba0
        ;   Label: core_set.cpp_CDemonSet_findCameraByName_FUN_0054fba0
    PUSH ESI                            ; 0054fba1
    PUSH EDI                            ; 0054fba2
    PUSH EBP                            ; 0054fba3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054fba4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0054fba8
    MOV EDX,dword ptr [EDI]             ; 0054fbac
    XOR EBX,EBX                         ; 0054fbae
    TEST EDX,EDX                        ; 0054fbb0
    JLE 0x0054fbd2                      ; 0054fbb2
        ;   XREF to: 0054fbd2 (CONDITIONAL_JUMP)  ; LAB_0054fbd2
    LEA ESI,[EDI + 0x4]                 ; 0054fbb4
    PUSH EBP                            ; 0054fbb7
        ;   Label: LAB_0054fbb7
    PUSH ESI                            ; 0054fbb8
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0054fbb9
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054fbbe
    TEST EAX,EAX                        ; 0054fbc1
    JZ 0x0054fbdc                       ; 0054fbc3
        ;   XREF to: 0054fbdc (CONDITIONAL_JUMP)  ; LAB_0054fbdc
    INC EBX                             ; 0054fbc5
    MOV ECX,dword ptr [EDI]             ; 0054fbc6
    ADD ESI,0x1a4                       ; 0054fbc8
    CMP EBX,ECX                         ; 0054fbce
    JL 0x0054fbb7                       ; 0054fbd0
        ;   XREF to: 0054fbb7 (CONDITIONAL_JUMP)  ; LAB_0054fbb7
    MOV EAX,0xffffffff                  ; 0054fbd2
        ;   Label: LAB_0054fbd2
    POP EBP                             ; 0054fbd7
    POP EDI                             ; 0054fbd8
    POP ESI                             ; 0054fbd9
    POP EBX                             ; 0054fbda
    RET                                 ; 0054fbdb
    MOV EAX,EBX                         ; 0054fbdc
        ;   Label: LAB_0054fbdc
    POP EBP                             ; 0054fbde
    POP EDI                             ; 0054fbdf
    POP ESI                             ; 0054fbe0
    POP EBX                             ; 0054fbe1
    RET                                 ; 0054fbe2

