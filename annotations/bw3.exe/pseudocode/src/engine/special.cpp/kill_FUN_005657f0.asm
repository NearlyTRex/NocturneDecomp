; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_kill_FUN_005657f0(void)
;
;
; XREF[3]:
;   core_menu.cpp_FUN_004e85a0 at 004e8d95
;   engine_special.cpp_FUN_0056678e at 00566792
;   wincore_wddvmem.cpp_FUN_00579a60 at 00579a8c
;
; Referenced Globals:
;   undefined4 DAT_02cf5fe8
;   undefined4 DAT_02cf6108
;
; Called Functions:
;   engine_special.cpp_FUN_00564010
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf6108],0x0      ; 005657f0 | DAT_02cf6108
        ;   Label: engine_special.cpp_kill_FUN_005657f0
    JNZ 0x005657ff                      ; 005657f7
        ;   XREF to: 005657ff (CONDITIONAL_JUMP)  ; LAB_005657ff
    MOV EAX,0x1                         ; 005657f9
    RET                                 ; 005657fe
    CALL dword ptr [0x02cf5fe8]         ; 005657ff | DAT_02cf5fe8
        ;   Label: LAB_005657ff
    CALL engine_special.cpp_FUN_00564010 ; 00565805
        ;   XREF to: 00564010 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00564010()
    MOV EAX,0x1                         ; 0056580a
    RET                                 ; 0056580f

