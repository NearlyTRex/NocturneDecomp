; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_memory_c___vec_new_FUN_00566234(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330 at 00467366
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0 at 00517f81
;
; Called Functions:
;   FUN_005661f4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566234
        ;   Label: crt_memory.c___vec_new_FUN_00566234
    MOV EDX,dword ptr [ESP + 0x10]      ; 00566235
    PUSH EDX                            ; 00566239
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056623a
    PUSH ECX                            ; 0056623e
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056623f
    PUSH EBX                            ; 00566243
    CALL FUN_005661f4                   ; 00566244
        ;   XREF to: 005661f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005661f4()
    ADD ESP,0xc                         ; 00566249
    POP EBX                             ; 0056624c
    RET                                 ; 0056624d

