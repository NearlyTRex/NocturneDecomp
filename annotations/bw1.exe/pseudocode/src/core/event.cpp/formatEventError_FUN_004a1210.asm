; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_formatEventError_FUN_004a1210(char *format)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a92f1
;   core_event.cpp_FUN_004a1d00 at 004a1e6a
;
; Referenced Globals:
;   undefined4 DAT_01c56ed0
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004a1210
        ;   Label: core_event.cpp_formatEventError_FUN_004a1210
    LEA EAX,[ESP + 0xc]                 ; 004a1213
    MOV dword ptr [ESP],EAX             ; 004a1217
    MOV EAX,ESP                         ; 004a121a
    PUSH EAX                            ; 004a121c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a121d
    PUSH EDX                            ; 004a1221
    PUSH 0x1c56ed0                      ; 004a1222 | DAT_01c56ed0
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 004a1227
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 004a122c
    XOR ECX,ECX                         ; 004a122f
    XOR EAX,EAX                         ; 004a1231
    MOV dword ptr [ESP],ECX             ; 004a1233
    ADD ESP,0x4                         ; 004a1236
    RET                                 ; 004a1239
        ;   Label: LAB_004a1239

