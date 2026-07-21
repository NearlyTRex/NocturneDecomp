; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_event_cpp_CEventList_findCounter_FUN_00480900(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_event.cpp_CEventList_getCounterValue_FUN_004807e0 at 004807ea
;   core_event.cpp_CEventList_setCounter_FUN_004806d0 at 004806e2
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480900
        ;   Label: core_event.cpp_CEventList_findCounter_FUN_00480900
    PUSH ESI                            ; 00480901
    PUSH EDI                            ; 00480902
    PUSH EBP                            ; 00480903
    MOV EDI,dword ptr [ESP + 0x14]      ; 00480904
    MOV EBP,dword ptr [ESP + 0x18]      ; 00480908
    MOV EDX,dword ptr [EDI + 0x337c]    ; 0048090c
    XOR EBX,EBX                         ; 00480912
    TEST EDX,EDX                        ; 00480914
    JLE 0x0048093a                      ; 00480916
        ;   XREF to: 0048093a (CONDITIONAL_JUMP)  ; LAB_0048093a
    LEA ESI,[EDI + 0x3380]              ; 00480918
    PUSH EBP                            ; 0048091e
        ;   Label: LAB_0048091e
    PUSH ESI                            ; 0048091f
    CALL crt_string.c__stricmp_FUN_00564520 ; 00480920
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00480925
    TEST EAX,EAX                        ; 00480928
    JZ 0x00480944                       ; 0048092a
        ;   XREF to: 00480944 (CONDITIONAL_JUMP)  ; LAB_00480944
    INC EBX                             ; 0048092c
    MOV ECX,dword ptr [EDI + 0x337c]    ; 0048092d
    ADD ESI,0x20                        ; 00480933
    CMP EBX,ECX                         ; 00480936
    JL 0x0048091e                       ; 00480938
        ;   XREF to: 0048091e (CONDITIONAL_JUMP)  ; LAB_0048091e
    MOV EAX,0xffffffff                  ; 0048093a
        ;   Label: LAB_0048093a
    POP EBP                             ; 0048093f
    POP EDI                             ; 00480940
    POP ESI                             ; 00480941
    POP EBX                             ; 00480942
    RET                                 ; 00480943
    MOV EAX,EBX                         ; 00480944
        ;   Label: LAB_00480944
    POP EBP                             ; 00480946
    POP EDI                             ; 00480947
    POP ESI                             ; 00480948
    POP EBX                             ; 00480949
    RET                                 ; 0048094a

