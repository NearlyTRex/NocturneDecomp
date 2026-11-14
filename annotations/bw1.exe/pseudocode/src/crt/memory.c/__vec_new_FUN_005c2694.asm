; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c___vec_new_FUN_005c2694(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[4]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0 at 005386a9
;   cockpit_pkbmpset.cpp_FUN_005389c0 at 00538a0c
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40 at 0048aa76
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690 at 00494729
;
; Called Functions:
;   crt_unknown.c_FUN_005c2654
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2694
        ;   Label: crt_memory.c___vec_new_FUN_005c2694
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c2695
    PUSH EDX                            ; 005c2699
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c269a
    PUSH ECX                            ; 005c269e
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c269f
    PUSH EBX                            ; 005c26a3
    CALL crt_unknown.c_FUN_005c2654     ; 005c26a4
        ;   XREF to: 005c2654 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2654()
    ADD ESP,0xc                         ; 005c26a9
    POP EBX                             ; 005c26ac
    RET                                 ; 005c26ad

