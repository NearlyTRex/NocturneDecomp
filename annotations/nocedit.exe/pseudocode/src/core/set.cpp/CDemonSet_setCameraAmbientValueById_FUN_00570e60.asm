; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueById_FUN_00570e60(CDemonSet *this_ptr,int id,float value)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   id
; float            Stack[0xc]:4   value
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004aca33
;
; Called Functions:
;   core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570e60
        ;   Label: core_set.cpp_CDemonSet_setCameraAmbientValueById_FUN_00570e60
    PUSH ESI                            ; 00570e61
    PUSH EDI                            ; 00570e62
    PUSH EBP                            ; 00570e63
    MOV EDI,dword ptr [ESP + 0x14]      ; 00570e64
    MOV EBP,dword ptr [ESP + 0x18]      ; 00570e68
    MOV EDX,dword ptr [EDI]             ; 00570e6c
    XOR EBX,EBX                         ; 00570e6e
    TEST EDX,EDX                        ; 00570e70
    JLE 0x00570e8b                      ; 00570e72
        ;   XREF to: 00570e8b (CONDITIONAL_JUMP)  ; LAB_00570e8b
    MOV ESI,EDI                         ; 00570e74
    CMP EBP,dword ptr [ESI + 0x150]     ; 00570e76
        ;   Label: LAB_00570e76
    JZ 0x00570e90                       ; 00570e7c
        ;   XREF to: 00570e90 (CONDITIONAL_JUMP)  ; LAB_00570e90
    INC EBX                             ; 00570e7e
        ;   Label: LAB_00570e7e
    MOV ECX,dword ptr [EDI]             ; 00570e7f
    ADD ESI,0x1a4                       ; 00570e81
    CMP EBX,ECX                         ; 00570e87
    JL 0x00570e76                       ; 00570e89
        ;   XREF to: 00570e76 (CONDITIONAL_JUMP)  ; LAB_00570e76
    POP EBP                             ; 00570e8b
        ;   Label: LAB_00570e8b
    POP EDI                             ; 00570e8c
    POP ESI                             ; 00570e8d
    POP EBX                             ; 00570e8e
    RET                                 ; 00570e8f
    PUSH dword ptr [ESP + 0x1c]         ; 00570e90
        ;   Label: LAB_00570e90
    PUSH EBX                            ; 00570e94
    PUSH EDI                            ; 00570e95
    CALL core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20 ; 00570e96
        ;   XREF to: 00570e20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20(CDemonSet * this_ptr, int index, float value)
    ADD ESP,0xc                         ; 00570e9b
    JMP 0x00570e7e                      ; 00570e9e
        ;   XREF to: 00570e7e (UNCONDITIONAL_JUMP)  ; LAB_00570e7e

