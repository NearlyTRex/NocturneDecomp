; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findGameFlag_FUN_00480860(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_00480420 at 0048043a
;   core_event.cpp_CEventList_resolveVariable_FUN_0047dba0 at 0047dc06
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480860
        ;   Label: core_event.cpp_CEventList_findGameFlag_FUN_00480860
    PUSH ESI                            ; 00480861
    PUSH EDI                            ; 00480862
    PUSH EBP                            ; 00480863
    MOV EDI,dword ptr [ESP + 0x14]      ; 00480864
    MOV EBP,dword ptr [ESP + 0x18]      ; 00480868
    MOV EDX,dword ptr [EDI + 0x1908]    ; 0048086c
    XOR EBX,EBX                         ; 00480872
    TEST EDX,EDX                        ; 00480874
    JLE 0x0048089a                      ; 00480876
        ;   XREF to: 0048089a (CONDITIONAL_JUMP)  ; LAB_0048089a
    LEA ESI,[EDI + 0x190c]              ; 00480878
    PUSH EBP                            ; 0048087e
        ;   Label: LAB_0048087e
    PUSH ESI                            ; 0048087f
    CALL crt_string.c__stricmp_FUN_00564520 ; 00480880
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00480885
    TEST EAX,EAX                        ; 00480888
    JZ 0x004808a4                       ; 0048088a
        ;   XREF to: 004808a4 (CONDITIONAL_JUMP)  ; LAB_004808a4
    INC EBX                             ; 0048088c
    MOV ECX,dword ptr [EDI + 0x1908]    ; 0048088d
    ADD ESI,0x20                        ; 00480893
    CMP EBX,ECX                         ; 00480896
    JL 0x0048087e                       ; 00480898
        ;   XREF to: 0048087e (CONDITIONAL_JUMP)  ; LAB_0048087e
    MOV EAX,0xffffffff                  ; 0048089a
        ;   Label: LAB_0048089a
    POP EBP                             ; 0048089f
    POP EDI                             ; 004808a0
    POP ESI                             ; 004808a1
    POP EBX                             ; 004808a2
    RET                                 ; 004808a3
    MOV EAX,EBX                         ; 004808a4
        ;   Label: LAB_004808a4
    POP EBP                             ; 004808a6
    POP EDI                             ; 004808a7
    POP ESI                             ; 004808a8
    POP EBX                             ; 004808a9
    RET                                 ; 004808aa

