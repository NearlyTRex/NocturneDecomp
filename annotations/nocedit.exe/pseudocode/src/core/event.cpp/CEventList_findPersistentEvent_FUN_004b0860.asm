; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_004b0860(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330 at 004b034a
;   core_event.cpp_CEventList_resolveVariable_FUN_004adc10 at 004adc5e
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0860
        ;   Label: core_event.cpp_CEventList_findPersistentEvent_FUN_004b0860
    PUSH ESI                            ; 004b0861
    PUSH EDI                            ; 004b0862
    PUSH EBP                            ; 004b0863
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b0864
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b0868
    MOV EDX,dword ptr [EDI + 0x258c]    ; 004b086c
    XOR EBX,EBX                         ; 004b0872
    TEST EDX,EDX                        ; 004b0874
    JLE 0x004b089a                      ; 004b0876
        ;   XREF to: 004b089a (CONDITIONAL_JUMP)  ; LAB_004b089a
    LEA ESI,[EDI + 0x2590]              ; 004b0878
    PUSH EBP                            ; 004b087e
        ;   Label: LAB_004b087e
    PUSH ESI                            ; 004b087f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b0880
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b0885
    TEST EAX,EAX                        ; 004b0888
    JZ 0x004b08a4                       ; 004b088a
        ;   XREF to: 004b08a4 (CONDITIONAL_JUMP)  ; LAB_004b08a4
    INC EBX                             ; 004b088c
    MOV ECX,dword ptr [EDI + 0x258c]    ; 004b088d
    ADD ESI,0x20                        ; 004b0893
    CMP EBX,ECX                         ; 004b0896
    JL 0x004b087e                       ; 004b0898
        ;   XREF to: 004b087e (CONDITIONAL_JUMP)  ; LAB_004b087e
    MOV EAX,0xffffffff                  ; 004b089a
        ;   Label: LAB_004b089a
    POP EBP                             ; 004b089f
    POP EDI                             ; 004b08a0
    POP ESI                             ; 004b08a1
    POP EBX                             ; 004b08a2
    RET                                 ; 004b08a3
    MOV EAX,EBX                         ; 004b08a4
        ;   Label: LAB_004b08a4
    POP EBP                             ; 004b08a6
    POP EDI                             ; 004b08a7
    POP ESI                             ; 004b08a8
    POP EBX                             ; 004b08a9
    RET                                 ; 004b08aa

