; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_formatEventError_FUN_00488ba0(char *format)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 00490a01
;   core_event.cpp_FUN_00489670 at 004897d6
;
; Referenced Globals:
;   undefined4 DAT_01c3dd10
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00488ba0
        ;   Label: core_event.cpp_formatEventError_FUN_00488ba0
    LEA EAX,[ESP + 0xc]                 ; 00488ba3
    MOV dword ptr [ESP],EAX             ; 00488ba7
    MOV EAX,ESP                         ; 00488baa
    PUSH EAX                            ; 00488bac
    MOV EDX,dword ptr [ESP + 0xc]       ; 00488bad
    PUSH EDX                            ; 00488bb1
    PUSH 0x1c3dd10                      ; 00488bb2 | DAT_01c3dd10
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 00488bb7
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 00488bbc
    XOR ECX,ECX                         ; 00488bbf
    XOR EAX,EAX                         ; 00488bc1
    MOV dword ptr [ESP],ECX             ; 00488bc3
    ADD ESP,0x4                         ; 00488bc6
    RET                                 ; 00488bc9
        ;   Label: LAB_00488bc9

