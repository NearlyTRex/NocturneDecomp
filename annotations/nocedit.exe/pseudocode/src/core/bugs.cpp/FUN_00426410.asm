; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_00426410()
;
;
; XREF[1]:
;   core_bugs.cpp_FUN_004250f0 at 0042519c
;
; Called Functions:
;   core_bugs.cpp_FUN_004272f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00426410
        ;   Label: core_bugs.cpp_FUN_00426410
    PUSH EDX                            ; 00426414
    CALL core_bugs.cpp_FUN_004272f0     ; 00426415 | undefined core_bugs.cpp_FUN_004272f0()
        ;   XREF to: 004272f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042641a
    RET                                 ; 0042641d

