; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c___vec_new_FUN_005ba2b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[4]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280 at 00517359
;   cockpit_pkbmpset.cpp_FUN_00517670 at 005176bc
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550 at 00472586
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c189
;
; Called Functions:
;   crt_unknown.c_FUN_005ba274
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba2b4
        ;   Label: crt_memory.c___vec_new_FUN_005ba2b4
    MOV EDX,dword ptr [ESP + 0x10]      ; 005ba2b5
    PUSH EDX                            ; 005ba2b9
    MOV ECX,dword ptr [ESP + 0x10]      ; 005ba2ba
    PUSH ECX                            ; 005ba2be
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ba2bf
    PUSH EBX                            ; 005ba2c3
    CALL crt_unknown.c_FUN_005ba274     ; 005ba2c4
        ;   XREF to: 005ba274 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba274()
    ADD ESP,0xc                         ; 005ba2c9
    POP EBX                             ; 005ba2cc
    RET                                 ; 005ba2cd

