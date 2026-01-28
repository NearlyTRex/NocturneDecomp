; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_FUN_00570010(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 at 0057085d
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_00570040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570010
        ;   Label: core_set.cpp_CDemonSet_FUN_00570010
    PUSH ESI                            ; 00570011
    PUSH 0x48                           ; 00570012
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00570014
    PUSH EDX                            ; 00570018
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00570019
    PUSH ECX                            ; 0057001d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0057001e
    PUSH EBX                            ; 00570022
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00570023
    PUSH ESI                            ; 00570027
    CALL core_set.cpp_CDemonSet_FUN_00570040 ; 00570028
        ;   XREF to: 00570040 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570040(CDemonSet * this_ptr)
    ADD ESP,0x14                        ; 0057002d
    POP ESI                             ; 00570030
    POP EBX                             ; 00570031
    RET                                 ; 00570032

