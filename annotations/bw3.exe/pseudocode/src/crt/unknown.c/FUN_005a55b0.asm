; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_FUN_005a55b0(char *path)
;
; Parameters:
; char *           Stack[0x4]:4   path
;
; XREF[2]:
;   crt_unknown.c_FUN_005aaed4 at 005aafaf
;   shape_edittool.cpp_FUN_0047dd20 at 0047e090
;
; Referenced Globals:
;   void* PTR_SetCurrentDirectoryA_005b3628 = 001b4146
;
; Called Functions:
;   SetCurrentDirectoryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a55b0
        ;   Label: crt_unknown.c_FUN_005a55b0
    PUSH EDX                            ; 005a55b4
    CALL dword ptr CS:[0x5b3628]        ; 005a55b5 | PTR_SetCurrentDirectoryA_005b3628
    TEST EAX,EAX                        ; 005a55bc
    JZ 0x005ab46c                       ; 005a55be
        ;   XREF to: 005ab46c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005a55c4
    RET                                 ; 005a55c6

