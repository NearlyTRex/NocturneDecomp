; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mirror_cpp_CMirror_ctor_FUN_004d6550(int param_1)
;
;
; XREF[1]:
;   core_glass.cpp_FUN_004abb50 at 004abb65
;
; Referenced Globals:
;   WatcomTypeInfo g_SClipPlaneTypeInfo_005a08a0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d6550
        ;   Label: core_mirror.cpp_CMirror_ctor_FUN_004d6550
    PUSH 0x5a08a0                       ; 004d6554 | g_SClipPlaneTypeInfo_005a08a0
    PUSH 0x5                            ; 004d6559
    ADD EAX,0x98                        ; 004d655b
    PUSH EAX                            ; 004d6560
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004d6561
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004d6566
    SUB EAX,0x98                        ; 004d6569
    RET                                 ; 004d656e

