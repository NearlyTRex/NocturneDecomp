; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_minecar.cpp_FUN_00520e90()
;
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00520e90
        ;   Label: core_minecar.cpp_FUN_00520e90
    PUSH EDX                            ; 00520e94
    CALL core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20 ; 00520e95 | undefined core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20()
        ;   XREF to: 0054ca20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00520e9a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00520e9d
    MOV dword ptr [EAX + 0x72c],0x0     ; 00520ea1
    RET                                 ; 00520eab

