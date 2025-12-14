; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPod * engine_pod.cpp_CPod_ctor_FUN_00550980(CPod * this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_podmain.cpp_CDemonPod_ctor_FUN_00551b00 at 00551b05
;   core_podmain.cpp_staticInit_FUN_00551990 at 00551995
;
; Referenced Globals:
;   CPod_vtable g_CPodVTable
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00550980
        ;   Label: engine_pod.cpp_CPod_ctor_FUN_00550980
    MOV dword ptr [ECX],0x0             ; 00550984
    MOV EAX,ECX                         ; 0055098a
    MOV dword ptr [ECX + 0x194],0x6623b4 ; 0055098c | g_CPodVTable
    LEA EDX,[ECX + 0x190]               ; 00550996
    ADD EAX,0x4                         ; 0055099c
        ;   Label: LAB_0055099c
    MOV dword ptr [EAX],0x0             ; 0055099f
    CMP EAX,EDX                         ; 005509a5
    JNZ 0x0055099c                      ; 005509a7
        ;   XREF to: 0055099c (CONDITIONAL_JUMP)  ; LAB_0055099c
    MOV EAX,ECX                         ; 005509a9
    RET                                 ; 005509ab

