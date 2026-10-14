; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_findFileInPod_FUN_004f9250(SFoundFileInfo *info)
;
; Parameters:
; SFoundFileInfo * Stack[0x4]:4   info
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004c85f0 at 004c86da
;
; Referenced Globals:
;   CPod* g_CPod_PTR_005be1cc = 01e528d0
;   undefined4 g_CDemonPod_01e528d0.base.vtable
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005be1cc]      ; 004f9250 | g_CPod_PTR_005be1cc
        ;   Label: engine_pod.cpp_findFileInPod_FUN_004f9250
    TEST EDX,EDX                        ; 004f9256
    JNZ 0x004f925d                      ; 004f9258
        ;   XREF to: 004f925d (CONDITIONAL_JUMP)  ; LAB_004f925d
    XOR EAX,EAX                         ; 004f925a
    RET                                 ; 004f925c
    MOV ECX,dword ptr [ESP + 0x4]       ; 004f925d
        ;   Label: LAB_004f925d
    PUSH ECX                            ; 004f9261
    MOV EAX,EDX                         ; 004f9262
    MOV EDX,dword ptr [EDX + 0x194]     ; 004f9264 | g_CDemonPod_01e528d0.base.vtable
    PUSH EAX                            ; 004f926a
    CALL dword ptr [EDX + 0x8]          ; 004f926b
    ADD ESP,0x8                         ; 004f926e
    RET                                 ; 004f9271

