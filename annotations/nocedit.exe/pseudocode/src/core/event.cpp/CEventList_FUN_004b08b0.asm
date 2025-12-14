; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_event.cpp_CEventList_FUN_004b08b0(CEventList * this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_event.cpp_CEventList_FUN_004adc10 at 004adc76
;   core_event.cpp_CEventList_FUN_004b0470 at 004b048a
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b08b0
        ;   Label: core_event.cpp_CEventList_FUN_004b08b0
    PUSH ESI                            ; 004b08b1
    PUSH EDI                            ; 004b08b2
    PUSH EBP                            ; 004b08b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b08b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b08b8
    MOV EDX,dword ptr [EDI + 0x1908]    ; 004b08bc
    XOR EBX,EBX                         ; 004b08c2
    TEST EDX,EDX                        ; 004b08c4
    JLE 0x004b08ea                      ; 004b08c6
        ;   XREF to: 004b08ea (CONDITIONAL_JUMP)  ; LAB_004b08ea
    LEA ESI,[EDI + 0x190c]              ; 004b08c8
    PUSH EBP                            ; 004b08ce
        ;   Label: LAB_004b08ce
    PUSH ESI                            ; 004b08cf
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b08d0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b08d5
    TEST EAX,EAX                        ; 004b08d8
    JZ 0x004b08f4                       ; 004b08da
        ;   XREF to: 004b08f4 (CONDITIONAL_JUMP)  ; LAB_004b08f4
    INC EBX                             ; 004b08dc
    MOV ECX,dword ptr [EDI + 0x1908]    ; 004b08dd
    ADD ESI,0x20                        ; 004b08e3
    CMP EBX,ECX                         ; 004b08e6
    JL 0x004b08ce                       ; 004b08e8
        ;   XREF to: 004b08ce (CONDITIONAL_JUMP)  ; LAB_004b08ce
    MOV EAX,0xffffffff                  ; 004b08ea
        ;   Label: LAB_004b08ea
    POP EBP                             ; 004b08ef
    POP EDI                             ; 004b08f0
    POP ESI                             ; 004b08f1
    POP EBX                             ; 004b08f2
    RET                                 ; 004b08f3
    MOV EAX,EBX                         ; 004b08f4
        ;   Label: LAB_004b08f4
    POP EBP                             ; 004b08f6
    POP EDI                             ; 004b08f7
    POP ESI                             ; 004b08f8
    POP EBX                             ; 004b08f9
    RET                                 ; 004b08fa

