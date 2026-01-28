; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_event_cpp_CEventList_FUN_004b0900(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_event.cpp_CEventList_FUN_004adc10 at 004adc84
;   core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0 at 004b05f7
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0900
        ;   Label: core_event.cpp_CEventList_FUN_004b0900
    PUSH ESI                            ; 004b0901
    PUSH EDI                            ; 004b0902
    PUSH EBP                            ; 004b0903
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b0904
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b0908
    MOV EDX,dword ptr [EDI + 0x3210]    ; 004b090c
    XOR EBX,EBX                         ; 004b0912
    TEST EDX,EDX                        ; 004b0914
    JLE 0x004b093a                      ; 004b0916
        ;   XREF to: 004b093a (CONDITIONAL_JUMP)  ; LAB_004b093a
    LEA ESI,[EDI + 0x3214]              ; 004b0918
    PUSH EBP                            ; 004b091e
        ;   Label: LAB_004b091e
    PUSH ESI                            ; 004b091f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b0920
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b0925
    TEST EAX,EAX                        ; 004b0928
    JZ 0x004b0944                       ; 004b092a
        ;   XREF to: 004b0944 (CONDITIONAL_JUMP)  ; LAB_004b0944
    INC EBX                             ; 004b092c
    MOV ECX,dword ptr [EDI + 0x3210]    ; 004b092d
    ADD ESI,0x20                        ; 004b0933
    CMP EBX,ECX                         ; 004b0936
    JL 0x004b091e                       ; 004b0938
        ;   XREF to: 004b091e (CONDITIONAL_JUMP)  ; LAB_004b091e
    MOV EAX,0xffffffff                  ; 004b093a
        ;   Label: LAB_004b093a
    POP EBP                             ; 004b093f
    POP EDI                             ; 004b0940
    POP ESI                             ; 004b0941
    POP EBX                             ; 004b0942
    RET                                 ; 004b0943
    MOV EAX,EBX                         ; 004b0944
        ;   Label: LAB_004b0944
    POP EBP                             ; 004b0946
    POP EDI                             ; 004b0947
    POP ESI                             ; 004b0948
    POP EBX                             ; 004b0949
    RET                                 ; 004b094a

