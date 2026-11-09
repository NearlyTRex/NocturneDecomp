; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_005ad270(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_005b27d0 at 005b2902
;
; Referenced Globals:
;   void* PTR_ShowWindow_005d050c = 001d0c28
;   TerminatedCString s_trigl_dll_005f9835
;   undefined1 DAT_006257d0
;   undefined4 DAT_02c83370
;   undefined4 DAT_02c99318
;   undefined4 DAT_02c9be68
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_special.cpp_restoreVideoMode_FUN_00582310
;   ShowWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83370],0x0      ; 005ad270 | DAT_02c83370
        ;   Label: wincore_wddvmem.cpp_FUN_005ad270
    JZ 0x005ad282                       ; 005ad277
        ;   XREF to: 005ad282 (CONDITIONAL_JUMP)  ; LAB_005ad282
    CMP dword ptr [0x02c99318],0x0      ; 005ad279 | DAT_02c99318
    JNZ 0x005ad283                      ; 005ad280
        ;   XREF to: 005ad283 (CONDITIONAL_JUMP)  ; LAB_005ad283
    RET                                 ; 005ad282
        ;   Label: LAB_005ad282
    PUSH 0x5f9835                       ; 005ad283 | = "trigl.dll"
        ;   Label: LAB_005ad283
    PUSH 0x6257d0                       ; 005ad288 | DAT_006257d0
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005ad28d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005ad292
    TEST EAX,EAX                        ; 005ad295
    JZ 0x005ad29e                       ; 005ad297
        ;   XREF to: 005ad29e (CONDITIONAL_JUMP)  ; LAB_005ad29e
    CALL engine_special.cpp_restoreVideoMode_FUN_00582310 ; 005ad299
        ;   XREF to: 00582310 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreVideoMode_FUN_00582310()
    PUSH EBX                            ; 005ad29e
        ;   Label: LAB_005ad29e
    PUSH 0x6                            ; 005ad29f
    MOV EBX,dword ptr [0x02c9be68]      ; 005ad2a1 | DAT_02c9be68
    PUSH EBX                            ; 005ad2a7
    CALL dword ptr CS:[0x5d050c]        ; 005ad2a8 | PTR_ShowWindow_005d050c
    POP EBX                             ; 005ad2af
    RET                                 ; 005ad2b0

