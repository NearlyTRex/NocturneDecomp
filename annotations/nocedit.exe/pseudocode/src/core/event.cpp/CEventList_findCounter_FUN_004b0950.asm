; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findCounter_FUN_004b0950(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_getCounterValue_FUN_004b0830 at 004b083a
;   core_event.cpp_CEventList_setCounter_FUN_004b0720 at 004b0732
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0950
        ;   Label: core_event.cpp_CEventList_findCounter_FUN_004b0950
    PUSH ESI                            ; 004b0951
    PUSH EDI                            ; 004b0952
    PUSH EBP                            ; 004b0953
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b0954
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b0958
    MOV EDX,dword ptr [EDI + 0x337c]    ; 004b095c
    XOR EBX,EBX                         ; 004b0962
    TEST EDX,EDX                        ; 004b0964
    JLE 0x004b098a                      ; 004b0966
        ;   XREF to: 004b098a (CONDITIONAL_JUMP)  ; LAB_004b098a
    LEA ESI,[EDI + 0x3380]              ; 004b0968
    PUSH EBP                            ; 004b096e
        ;   Label: LAB_004b096e
    PUSH ESI                            ; 004b096f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b0970
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b0975
    TEST EAX,EAX                        ; 004b0978
    JZ 0x004b0994                       ; 004b097a
        ;   XREF to: 004b0994 (CONDITIONAL_JUMP)  ; LAB_004b0994
    INC EBX                             ; 004b097c
    MOV ECX,dword ptr [EDI + 0x337c]    ; 004b097d
    ADD ESI,0x20                        ; 004b0983
    CMP EBX,ECX                         ; 004b0986
    JL 0x004b096e                       ; 004b0988
        ;   XREF to: 004b096e (CONDITIONAL_JUMP)  ; LAB_004b096e
    MOV EAX,0xffffffff                  ; 004b098a
        ;   Label: LAB_004b098a
    POP EBP                             ; 004b098f
    POP EDI                             ; 004b0990
    POP ESI                             ; 004b0991
    POP EBX                             ; 004b0992
    RET                                 ; 004b0993
    MOV EAX,EBX                         ; 004b0994
        ;   Label: LAB_004b0994
    POP EBP                             ; 004b0996
    POP EDI                             ; 004b0997
    POP ESI                             ; 004b0998
    POP EBX                             ; 004b0999
    RET                                 ; 004b099a

