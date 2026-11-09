; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_findFileInPod_FUN_0051bfa0(SFoundFileInfo *info)
;
; Parameters:
; SFoundFileInfo * Stack[0x4]:4   info
;
; XREF[1]:
;   core_main.c_FUN_004e46c0 at 004e4741
;
; Referenced Globals:
;   CDemonPod* g_CDemonPodPtr = 01e614b0
;   undefined4 g_CDemonPodInstance.field404_0x194
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0061b40c]      ; 0051bfa0 | g_CDemonPodPtr
        ;   Label: engine_pod.cpp_findFileInPod_FUN_0051bfa0
    TEST EDX,EDX                        ; 0051bfa6
    JNZ 0x0051bfad                      ; 0051bfa8
        ;   XREF to: 0051bfad (CONDITIONAL_JUMP)  ; LAB_0051bfad
    XOR EAX,EAX                         ; 0051bfaa
    RET                                 ; 0051bfac
    MOV ECX,dword ptr [ESP + 0x4]       ; 0051bfad
        ;   Label: LAB_0051bfad
    PUSH ECX                            ; 0051bfb1
    MOV EAX,EDX                         ; 0051bfb2
    MOV EDX,dword ptr [EDX + 0x194]     ; 0051bfb4 | g_CDemonPodInstance.field404_0x194
    PUSH EAX                            ; 0051bfba
    CALL dword ptr [EDX + 0x8]          ; 0051bfbb
    ADD ESP,0x8                         ; 0051bfbe
    RET                                 ; 0051bfc1

