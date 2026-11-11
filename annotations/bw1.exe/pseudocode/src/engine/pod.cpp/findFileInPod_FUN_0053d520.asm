; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_findFileInPod_FUN_0053d520(SFoundFileInfo *info)
;
; Parameters:
; SFoundFileInfo * Stack[0x4]:4   info
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 00503321
;
; Referenced Globals:
;   CDemonPod* g_CDemonPodPtr = 01e7d420
;   undefined4 g_CDemonPodInstance.base.vtable
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00622a6c]      ; 0053d520 | g_CDemonPodPtr
        ;   Label: engine_pod.cpp_findFileInPod_FUN_0053d520
    TEST EDX,EDX                        ; 0053d526
    JNZ 0x0053d52d                      ; 0053d528
        ;   XREF to: 0053d52d (CONDITIONAL_JUMP)  ; LAB_0053d52d
    XOR EAX,EAX                         ; 0053d52a
    RET                                 ; 0053d52c
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053d52d
        ;   Label: LAB_0053d52d
    PUSH ECX                            ; 0053d531
    MOV EAX,EDX                         ; 0053d532
    MOV EDX,dword ptr [EDX + 0x194]     ; 0053d534 | g_CDemonPodInstance.base.vtable
    PUSH EAX                            ; 0053d53a
    CALL dword ptr [EDX + 0x8]          ; 0053d53b
    ADD ESP,0x8                         ; 0053d53e
    RET                                 ; 0053d541

