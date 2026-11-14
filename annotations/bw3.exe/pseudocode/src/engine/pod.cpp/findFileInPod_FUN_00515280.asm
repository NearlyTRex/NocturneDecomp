; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_findFileInPod_FUN_00515280(SFoundFileInfo *info)
;
; Parameters:
; SFoundFileInfo * Stack[0x4]:4   info
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e456e
;
; Referenced Globals:
;   CDemonPod* g_CDemonPodPtr = 01ed2af0
;   undefined4 g_CDemonPodInstance.base.vtable
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060395c]      ; 00515280 | g_CDemonPodPtr
        ;   Label: engine_pod.cpp_findFileInPod_FUN_00515280
    TEST EDX,EDX                        ; 00515286
    JNZ 0x0051528d                      ; 00515288
        ;   XREF to: 0051528d (CONDITIONAL_JUMP)  ; LAB_0051528d
    XOR EAX,EAX                         ; 0051528a
    RET                                 ; 0051528c
    MOV ECX,dword ptr [ESP + 0x4]       ; 0051528d
        ;   Label: LAB_0051528d
    PUSH ECX                            ; 00515291
    MOV EAX,EDX                         ; 00515292
    MOV EDX,dword ptr [EDX + 0x194]     ; 00515294 | g_CDemonPodInstance.base.vtable
    PUSH EAX                            ; 0051529a
    CALL dword ptr [EDX + 0x8]          ; 0051529b
    ADD ESP,0x8                         ; 0051529e
    RET                                 ; 005152a1

