; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_0057ab20(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_00580a50 at 00580b82
;
; Referenced Globals:
;   void* PTR_ShowWindow_005b3508 = 001b3c16
;   TerminatedCString s_trigl_dll_005d77ae
;   undefined1 DAT_00606730
;   undefined4 DAT_02cf5fcc
;   undefined4 DAT_02d0bcf8
;   undefined4 DAT_02d21b78
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   engine_special.cpp_restoreVideoMode_FUN_00565be0
;   ShowWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf5fcc],0x0      ; 0057ab20 | DAT_02cf5fcc
        ;   Label: wincore_wddvmem.cpp_FUN_0057ab20
    JZ 0x0057ab32                       ; 0057ab27
        ;   XREF to: 0057ab32 (CONDITIONAL_JUMP)  ; LAB_0057ab32
    CMP dword ptr [0x02d0bcf8],0x0      ; 0057ab29 | DAT_02d0bcf8
    JNZ 0x0057ab33                      ; 0057ab30
        ;   XREF to: 0057ab33 (CONDITIONAL_JUMP)  ; LAB_0057ab33
    RET                                 ; 0057ab32
        ;   Label: LAB_0057ab32
    PUSH 0x5d77ae                       ; 0057ab33 | = "trigl.dll"
        ;   Label: LAB_0057ab33
    PUSH 0x606730                       ; 0057ab38 | DAT_00606730
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0057ab3d
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057ab42
    TEST EAX,EAX                        ; 0057ab45
    JZ 0x0057ab4e                       ; 0057ab47
        ;   XREF to: 0057ab4e (CONDITIONAL_JUMP)  ; LAB_0057ab4e
    CALL engine_special.cpp_restoreVideoMode_FUN_00565be0 ; 0057ab49
        ;   XREF to: 00565be0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreVideoMode_FUN_00565be0()
    PUSH EBX                            ; 0057ab4e
        ;   Label: LAB_0057ab4e
    PUSH 0x6                            ; 0057ab4f
    MOV EBX,dword ptr [0x02d21b78]      ; 0057ab51 | DAT_02d21b78
    PUSH EBX                            ; 0057ab57
    CALL dword ptr CS:[0x5b3508]        ; 0057ab58 | PTR_ShowWindow_005b3508
    POP EBX                             ; 0057ab5f
    RET                                 ; 0057ab60

