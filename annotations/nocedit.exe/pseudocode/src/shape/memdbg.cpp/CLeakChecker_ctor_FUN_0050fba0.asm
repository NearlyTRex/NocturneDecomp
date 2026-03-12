; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeakChecker * __cdecl shape_memdbg_cpp_CLeakChecker_ctor_FUN_0050fba0(CLeakChecker *this_ptr)
;
; Parameters:
; CLeakChecker *   Stack[0x4]:4   this_ptr
; Local Variables:
; char[100]        Stack[-0x64]:100  local_64
;
; XREF[1]:
;   shape_memdbg.cpp_staticInit_FUN_0050ee40 at 0050ee45
;
; Referenced Globals:
;   TerminatedCString s_ags_006363d9
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    SUB ESP,0x64                        ; 0050fba0
        ;   Label: shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0
    PUSH 0x6363d9                       ; 0050fba3 | = "ags"
    LEA EAX,[ESP + 0x4]                 ; 0050fba8
    PUSH EAX                            ; 0050fbac
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0050fbad
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0050fbb2
    MOV EAX,dword ptr [ESP + 0x68]      ; 0050fbb5
    ADD ESP,0x64                        ; 0050fbb9
    RET                                 ; 0050fbbc

