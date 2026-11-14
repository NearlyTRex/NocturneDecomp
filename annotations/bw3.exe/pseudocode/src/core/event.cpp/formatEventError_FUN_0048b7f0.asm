; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_formatEventError_FUN_0048b7f0(char *format)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 00494169
;   core_event.cpp_FUN_0048c2e0 at 0048c447
;
; Referenced Globals:
;   undefined4 DAT_01c734b0
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0048b7f0
        ;   Label: core_event.cpp_formatEventError_FUN_0048b7f0
    LEA EAX,[ESP + 0xc]                 ; 0048b7f3
    MOV dword ptr [ESP],EAX             ; 0048b7f7
    MOV EAX,ESP                         ; 0048b7fa
    PUSH EAX                            ; 0048b7fc
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048b7fd
    PUSH EDX                            ; 0048b801
    PUSH 0x1c734b0                      ; 0048b802 | DAT_01c734b0
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0048b807
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0048b80c
    XOR ECX,ECX                         ; 0048b80f
    XOR EAX,EAX                         ; 0048b811
    MOV dword ptr [ESP],ECX             ; 0048b813
    ADD ESP,0x4                         ; 0048b816
    RET                                 ; 0048b819
        ;   Label: LAB_0048b819

